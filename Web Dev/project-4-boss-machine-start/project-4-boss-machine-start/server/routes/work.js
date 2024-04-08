const express = require('express');
const workRouter = express.Router();
const database = require('../db');

module.exports = workRouter;

//Verifing work id
workRouter.use('/:workId', (req, res, next) => {
    const workId = req.params.workId;
    const work = database.getFromDatabaseById('work', workId);
    if (!work) {
        return res.status(404).send('work not found');
    }
    req.work = work;
    next();
});

//GET all works for minion
workRouter.get('/', (req, res, next) => {
    let work = database.getAllFromDatabase('work');
    minionWork = work.filter(work => work.minionId = req.minion.id);
    res.send(minionWork);
});

//POST new work for minion
workRouter.post('/', (req, res, next) => {
    let work = database.addToDatabase('work', req.body);
    if (work) {
         res.status(201).send(work);
    } else {
        res.sendStatus(400);
    }
});

//PUT update to work in database
workRouter.put('/:workId', (req, res, next) => {
    if (req.body.minionId == req.minion.id){
        const work = database.updateInstanceInDatabase('work', req.body);
        res.send(work);
    } else {
        res.sendStatus(400);
    }
});

//DELETE work from database
workRouter.delete('/:workId', (req, res, next) => {
    database.deleteFromDatabasebyId('work', req.work.id);
    res.sendStatus(204);
});
