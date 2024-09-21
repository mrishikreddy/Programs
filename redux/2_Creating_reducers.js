const BUY_CAKE = 'BUY_CAKE'      // creating constant of text
function buyCake(){              // this is a action creater(function that returns action)
    return{
        type:BUY_CAKE,            // using constant to create the type property
        info:'First redux action' // you can also create a type property directly like this
    }
}


//creating the state object to store the state of application
const initialState={    // this is state of the application which is represented as object
    numOfCakes:10,      // the state object stores the property numOfCakes which is used to store 
}                       // number of cakes in the self of bakery

//A reducer is a fuction that takes the state and action as arguments and returns the new state 
// based on actions
// (previousState, action) => newState

const reducer = (state=initialState, action) => {  // giving arguments state and action to the arrow function of reducer
  switch(action.type)                              // using switch statements to check for the requested action
  {
    case BUY_CAKE :return{                        // if case matches returning the new state
        ...state,              // here the state object may have many properties and we desired to change only one property among them
                               // in this case if we do so the othe properties will be lost to avoid this first we make a copy of all 
                               // other properties and make changes to desired properties remaining exists same as before
        numOfCakes : state.numOfCakes-1 // as per example when user buy cake the no of cakes availble in store should be reduced by one so the 
                                  // performs the function and returns new state object
    }
    default: return state               // incase no action found defalut is made to return the state object as it is
  }
}

// Note: In redux action, state are represented as object and can store multiple values
