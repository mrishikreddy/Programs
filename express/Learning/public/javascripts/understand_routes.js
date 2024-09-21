const express = require('express');
var router = express.Router();

router.use('/',(req,res,next)=>{              // applying middleware
    console.log("API call received");         // it can be applied with the help of use and next methods
    next();                                   // if we call next() , it will go to use function of same route
})

router.get('/',(req,res,next)=>{             // applying middleware
    res.send("Get request for Users");
    next();
})

router.use('/',(req,res)=>{                 // applying middleware
    console.log("API call has ended");
})

router.get('/specificUser',(req,res)=>{
    res.send("Get request for specific User");
})

router.post('/createUser',(req,res)=>{      // normal routing
    res.send("create a User");
})

router.put('/updateUser',(req,res)=>{
    res.send("Update a User");
})

router.delete('/deleteUser',(req,res)=>{
    res.send("delete a User");
})

router.get('/userDetails/:id',(req,res)=>{                                          // Dynamic Routing
    res.send("Get request for specific User"+req.params.id);
})

router.get('/place/:country/:state',(req,res)=>{                                
    res.send("Get request for famous places in "+req.params.country+req.params.state);
})

router.get('/search/:key([0-9]{4})',(req,res)=>{                                     // pattern matched routes          
    res.send("Get request for specific User id "+req.params.key );
})

router.get('/searchUsername/:key([a-z,A-Z]{4})',(req,res)=>{
    res.send("Get request for specific User"+req.params.key);
})

router.get('*',(req,res)=>{                                                          // wild card routes(if any request route is not present the wild card route will give the response)
    var resObj = {
        statuscode:404,
        statusMsg:"URL Not found"
    }
    res.send(resObj)
})

module.exports = router;