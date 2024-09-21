// An action is a object with type property, the type of object is basically a text
// it is recommended to first create the constant of text and next use the constant
// in creating the action
// An action creater is a function that returns an action

const BUY_CAKE = 'BUY_CAKE'      // creating constant of text
function buyCake(){              // this is a action creater(function that returns action)
    return{
        type:BUY_CAKE,            // using constant to create the type property
        info:'First redux action' // you can also create a type property directly like this
    }
}

