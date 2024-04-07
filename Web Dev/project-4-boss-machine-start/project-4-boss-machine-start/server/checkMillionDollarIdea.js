const checkMillionDollarIdea = (req, res, next) => {
    let numWeeks = req.body.numWeeks;
    let weeklyRevenue = req.body.weeklyRevenue;

    if ((numWeeks * weeklyRevenue) >= 100000) {
        next();
    } else {
        return res.sendStatus(400);
    }
};

// Leave this exports assignment so that the function can be used elsewhere
module.exports = checkMillionDollarIdea;
