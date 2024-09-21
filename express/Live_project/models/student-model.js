var mongoose = require('mongoose');     // importing mongoose. Note: you need to import mongoose in every model, failiting to do this will give you errors

var studentSchema = mongoose.Schema({   // Creating Schema for student
    studentId: Number,
    firstName: String,
    lastName: String,
    age:Number,
    dob:String,
    department:String
  });
  
  var studentModel = mongoose.model("student",studentSchema)  // Creating a model from student schema
  
  module.exports = studentModel;