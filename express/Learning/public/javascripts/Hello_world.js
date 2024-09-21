const express = require('express');         // Importing the express js module into our application
var app = express();                        // we are initliazing the app using the express

app.get('/',function(req,res){              // Using the app we are configuring the route of "GET" and path is "/" which denots the root
    res.send("Hello World");                // whenever request for this endpoint / sends this response -› Hello world
});                                         //Available HTTP Methods: GET,POST,PUT,PATCH,DELETE

app.listen(3000);                           //whenever we run this file the node internally calls the function http.createServer() which creates a server based on the given port

