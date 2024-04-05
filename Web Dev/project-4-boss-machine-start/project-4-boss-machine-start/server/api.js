const express = require('express');
const apiRouter = express.Router();
const minionsRoutes = require('./routes/minions');

apiRouter.use('/api/minions', minionsRoutes);

module.exports = apiRouter;