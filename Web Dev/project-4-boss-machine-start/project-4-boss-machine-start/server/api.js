const express = require('express');
const apiRouter = express.Router();
const minionsRoutes = require('./routes/minions');
const ideasRoutes = require('./routes/ideas');
const meetingsRoutes = require('./routes/meetings');

apiRouter.use('/api/minions', minionsRoutes);
apiRouter.use('/api/ideas', ideasRoutes);
apiRouter.use('/api/meetings', meetingsRoutes);

module.exports = apiRouter;