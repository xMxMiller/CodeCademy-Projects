const express = require('express');
const meetingRouter = express.Router();
const database = require('../db');

module.exports = meetingRouter;

//GET all meetings
meetingRouter.get('/', (req, res, next) => {
    res.send(database.getAllFromDatabase('meetings'));
});

//POST new meeting
meetingRouter.post('/', (req, res, next) => {
    let meeting = database.addToDatabase('meetings', database.createMeeting());
    if (meeting) {
         res.status(201).send(meeting);
    } else {
        res.sendStatus(400);
    }
});

//DELETE meeting from database
meetingRouter.delete('/', (req, res, next) => {
    database.deleteAllFromDatabase('meetings');
    res.sendStatus(204);
});