var express = require('express');
var app = express();

var mongoose = require("mongoose");   // Step1 : importing mongoose
                                      // Step2 is creationg a properties.js file
var dbURL = require("./properties").DB_URL;  // Step3 : importing properties.js for URL 
mongoose.connect(dbURL);              // Step4 : connecting to mongoDB using mongoose

mongoose.connection.on("connected",()=>{
    console.log("connected to mongoDB");
})

app.listen(3000)