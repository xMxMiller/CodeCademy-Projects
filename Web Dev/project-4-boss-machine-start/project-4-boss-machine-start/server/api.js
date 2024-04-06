const express = require('express');
const apiRouter = express.Router();
const minionsRoutes = require('./routes/minions');
const ideasRoutes = require('./routes/ideas');

apiRouter.use('/api/minions', minionsRoutes);
apiRouter.use('/api/ideas', ideasRoutes);

module.exports = apiRouter;