const redux = require("redux")    // ES6, six method of importing library
// import redux from 'redux'                --> React method of importing a library

function buyCake(){                                     // defining action
    return{
        type:'BUY_CAKE',            
        info:'First redux action' 
    }
}

const initialState={                                    // setting up initial state
    numOfCakes:10,    
}                       

const reducer = (state=initialState, action) => {       // defining reducer
  switch(action.type)                              
  {
    case 'BUY_CAKE' :return{                        
        ...state,              
        numOfCakes : state.numOfCakes-1 
    }
    default: return state              
  }
}

const store = redux.createStore(reducer);                     // create store is user to create a store
console.log('initial state :',store.getState());        // get state is a method of providing the current state of the application
const unsubscribe = store.subscribe(()=>console.log('updated state :',store.getState())) // Subscribe Method Performed the given actions whenever the state is updated
store.dispatch(buyCake());   // the dispatch of the store is used to call the actions
store.dispatch(buyCake());
store.dispatch(buyCake());
unsubscribe();               // Unsubscribe or subscribe, is used to unsubscribe the subscribe method in th end
//store.subscribe(()=>console.log('updated state :',store.getState()))
// ^ you can use the same code of subcribe method to unsubscribe