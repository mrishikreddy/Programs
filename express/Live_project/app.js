var createError = require('http-errors');
var express = require('express');
var path = require('path');
var cookieParser = require('cookie-parser');
var logger = require('morgan');

var mongoose = require('mongoose');                     // importing mongoose

// setting up mongoDB connection using mongoose
mongoose.connect("mongodb+srv://malerishikreddy:rishikreddy2005@cluster0.cseo3x4.mongodb.net/Live_project");

var studentModel = require('./models/student-model');    // importing student model


var indexRouter = require('./routes/index');            // importing required routes
var usersRouter = require('./routes/users');
var studentsRouter = require('./routes/students')
const { deprecate } = require('util');

var app = express();

// view engine setup
app.set('views', path.join(__dirname, 'views'));
app.set('view engine', 'jade');

app.use(logger('dev'));
app.use(express.json());
app.use(express.urlencoded({ extended: false }));
app.use(cookieParser());
app.use(express.static(path.join(__dirname, 'public')));

app.use('/', indexRouter);
app.use('/users', usersRouter);
app.use('/students',studentsRouter);        // specifing students router for use

// catch 404 and forward to error handler
app.use(function(req, res, next) {
  next(createError(404));
});

// error handler
app.use(function(err, req, res, next) {
  // set locals, only providing error in development
  res.locals.title = "Internal Server Error";
  res.locals.message = err.message;
  res.locals.error = req.app.get('env') === 'development' ? err : {};

  // render the error page
  res.status(err.status || 500);
  res.render('error');
});

module.exports = app;
