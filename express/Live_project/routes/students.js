var express = require('express');
const studentModel = require('../models/student-model');
var router = express.Router();


/* GET users listing. */
router.get('/', function(req, res, next) {
  res.send('respond with a resource');
});

router.post('/add', function(req, res, next) {
    let newStudent = new studentModel({
    studentId: req.body.studentId,
    firstName: req.body.firstName,
    lastName: req.body.lastName,
    age:req.body.age,
    dob:req.body.dob,
    department:req.body.department
    })

    newStudent.save()
    res.send({status:200,message:'User added succefully', studentObj:newStudent})

});

router.get('/find', function(req, res, next) {
    studentModel.find()                                                                 // No arguments for find
      .then(response => res.send({ status: 200,results: response.length, response }))   // Handle successful find
      .catch(err => res.send(err));                                                     // Handle errors
});

router.get('/findbyFirstName',function(req,res,next){
    const firstNameReq = req.query.firstName
    studentModel.find({firstName:firstNameReq})                                    // donot put semicolon here (in callback functions)
    .then(response => res.send({status:200, results: response.length,response}))
    .catch(err=> res.send(err));
})

router.get('/findById', function(req, res, next) {
    const IdReq = req.query.id;
    studentModel.findById(IdReq)            // while fetching data with Id field no need to specify id holding variable in {}
        .then(response => res.send({ status: 200, response }))
        .catch(err => res.send(err));
});

router.put('/update',function(req,res,next){
    const dept = req.query.department
    studentModel.updateMany({age:27},{department:dept})
    .then(response => res.send({response}))
    .catch(err=>res.send(err))
})

router.put('/updatebyId',function(req,res,next){
    const Id = req.query.id
    const dept = req.query.department
    studentModel.findByIdAndUpdate(Id,{department:dept})
    .then(response => res.send({response}))
    .catch(err=>res.send(err))
})

router.delete('/deleteUser',function(req,res,next){
    const Id = req.query.id;
    studentModel.findByIdAndDelete(Id)
    .then(response=>res.send({response}))
    .catch(err=>res.send)
})

module.exports = router;
