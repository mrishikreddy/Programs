var express = require('express');
var router = express.Router();

/* GET home page. */
router.get('/', function(req, res, next) {
  res.render('index', { title: 'Rishik Reddy', subtitle:'express'});
});

router.get('/learning', function(req, res, next) {
  var courseName = req.query.course;                      // this method is used to get the query from request, the query returns a variable holding a value
  console.log("Course:"+courseName)
  res.render('index', { title: 'Rishik Reddy',subtitle : courseName});  // this values will be sent to index.jade, which is a template holding dynamic vales
  // url : localhost:3000/learning?course=coursename   << coursename is dynamic data
});

module.exports = router;
