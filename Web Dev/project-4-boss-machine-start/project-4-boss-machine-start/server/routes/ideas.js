const express = require('express');
const ideaRouter = express.Router();
const database = require('../db');

module.exports = ideaRouter;

//Verifing idea id
ideaRouter.use('/:ideaId', (req, res, next) => {
    const ideaId = req.params.ideaId;
    const idea = database.getFromDatabaseById('ideas', ideaId);
    if (!idea) {
        return res.status(404).send('idea not found');
    }
    req.idea = idea;
    next();
});

//GET all ideas
ideaRouter.get('/', (req, res, next) => {
    res.send(database.getAllFromDatabase('ideas'));
});

//GET single idea
ideaRouter.get('/:ideaId', (req, res, next) => {
    res.send(req.idea);
});

//POST new idea
ideaRouter.post('/', (req, res, next) => {
    let idea = database.addToDatabase('ideas', req.body);
    if (idea) {
         res.status(201).send(idea);
    } else {
        res.sendStatus(400);
    }
});

//PUT update to idea in database
ideaRouter.put('/:ideaId', (req, res, next) => {
    const idea = database.updateInstanceInDatabase('ideas', req.body);
    res.send(idea);
});

//DELETE idea from database
ideaRouter.delete('/:ideaId', (req, res, next) => {
    database.deleteFromDatabasebyId('ideas', req.idea.id);
    res.sendStatus(204);
});