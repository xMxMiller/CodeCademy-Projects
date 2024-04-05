const express = require('express');
const apiRouter = express.Router();
const MinionDB = require('./db');

//middleware
module.exports = apiRouter;
const minionSchemaCheck = (req, res, next) => {
    const minion = req.query;
    console.log(minion);
    next();
    //if (typeof(req.body != 'string'))  {
        //return res.status(400).send('Name must be text');
    //}

    //if (typeof(req.body))
}


//Minion Routes
//Verifiong minion id
apiRouter.use('/api/minions/:minionId', (req, res, next) => {
    const minionId = req.params.minionId;
    const minion = MinionDB.getFromDatabaseById('minions', minionId);
    if (!minion) {
        return res.status(404).send('Minion not found');
    }
    req.minion = minion;
    next();
});

//Get all minions
apiRouter.get('/api/minions', (req, res, next) => {
    res.send(MinionDB.getAllFromDatabase('minions'));
});

//Get single minion
apiRouter.get('/api/minions/:minionid', (req, res, next) => {
    res.send(req.minion);
});

//Add new minion
apiRouter.post('/api/minions', (req, res, next) => {
    let minion = MinionDB.addToDatabase('minions', req.query);
    if (minion) {
         res.status(201).send(minion);
    } else {
        res.sendStatus(400);
    }
});


