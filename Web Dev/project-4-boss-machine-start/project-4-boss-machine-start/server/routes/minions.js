const express = require('express');
const minionRouter = express.Router();
const database = require('../db');
const workRoutes = require('./work')

const verifMinion = (req, res, next) => {
    const minionId = req.params.minionId;
    const minion = database.getFromDatabaseById('minions', minionId);
    if (!minion) {
        return res.status(404).send('Minion not found');
    }
    req.minion = minion;
    next();
};

module.exports = minionRouter;

//Verifing minion id
minionRouter.use('/:minionId', verifMinion);

//Use for work
minionRouter.use('/:minionId/work', verifMinion, workRoutes);

//GET all minions
minionRouter.get('/', (req, res, next) => {
    res.send(database.getAllFromDatabase('minions'));
});

//GET single minion
minionRouter.get('/:minionId', (req, res, next) => {
    res.send(req.minion);
});

//POST new minion
minionRouter.post('/', (req, res, next) => {
    let minion = database.addToDatabase('minions', req.body);
    if (minion) {
         res.status(201).send(minion);
    } else {
        res.sendStatus(400);
    }
});

//PUT update to minion in database
minionRouter.put('/:minionId', (req, res, next) => {
    const minion = database.updateInstanceInDatabase('minions', req.body);
    res.send(minion);
});

//DELETE minion from database
minionRouter.delete('/:minionId', (req, res, next) => {
    database.deleteFromDatabasebyId('minions', req.minion.id);
    res.sendStatus(204);
});