const redux = require("redux")    

function buyCake(){                                // defining first action creater     
    return{
        type:'BUY_CAKE',            
        info:'buying the cake' 
    }
}

function buyIceCream(){                            // defining second action creater
    return{
        type:'BUY_ICECREAM',
        info:'buying an ice cream'
    }
}

const initialState={                               // defining state            
    numOfCakes:10,  
    numOfIceCreams:10
}                       

const reducer = (state=initialState, action) => {         // Note donot include the state varible directly us ethe convection state= state_variable_name  
  switch(action.type)                                     // defining a reducer to handle two actions
  {
    case 'BUY_CAKE' :return{                        
        ...state,              
        numOfCakes : state.numOfCakes-1 
    }
    case 'BUY_ICECREAM' : return{
        ...state,
        numOfIceCreams: state.numOfIceCreams-1
    }
    default: return state              
  }
}

const store = redux.createStore(reducer);                     
console.log('initial state :',store.getState());        
const unsubscribe = store.subscribe(()=>console.log('updated state :',store.getState())) 
store.dispatch(buyCake());              // calling first action with the help of dispatch method
store.dispatch(buyCake());
store.dispatch(buyCake())
store.dispatch(buyIceCream());          // calling second action with the help of dispatch method
store.dispatch(buyIceCream());
store.dispatch(buyIceCream());
unsubscribe();               