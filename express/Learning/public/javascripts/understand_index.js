var express = require('express')                    // imporiting express

var products = require('./routes/products');        // getting routes of products and storing it in products variable
var users = require('./routes/users');              // getting routes of users and storing it in users variable
var app = express();                                // creating express application

app.use('/products',products);                      // any request for /products for will be handeld by products variable
app.use('/users',users);                            // any request for /users for will be handeld by users variable

app.listen(3000)                                    // setting port number to create server