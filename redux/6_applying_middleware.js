const redux = require('redux');  
const reduxLogger = require('redux-logger');

function buyCake() {
  return {
    type: 'BUY_CAKE',
    info: 'Buying the cake',
  };
}

function buyIceCream() {
  return {
    type: 'BUY_ICECREAM',
    info: 'Buying an ice cream',
  };
}

const CakesState = {
  numOfCakes: 10,
};

const IceCreamsState = {
  numOfIceCreams: 10,
};

const CakeReducer = (state = CakesState, action) => {
  switch (action.type) {
    case 'BUY_CAKE':
      return {
        ...state,
        numOfCakes: state.numOfCakes - 1,
      };
    default:
      return state;
  }
};

const IceCreamsreducer = (state = IceCreamsState, action) => {
  switch (action.type) {
    case 'BUY_ICECREAM':
      return {
        ...state,
        numOfIceCreams: state.numOfIceCreams - 1, 
      };
    default:
      return state;
  }
};

const rootReducer = redux.combineReducers({      
  cake: CakeReducer,                       
  icecream: IceCreamsreducer,              
});

const logger = reduxLogger.createLogger()
const store = redux.createStore(rootReducer,redux.applyMiddleware(logger));   

console.log('initial state:', store.getState());

const unsubscribe = store.subscribe(() =>
  console.log('updated state:', store.getState())
);

store.dispatch(buyCake());
store.dispatch(buyCake());
store.dispatch(buyCake());
store.dispatch(buyIceCream());
store.dispatch(buyIceCream());
store.dispatch(buyIceCream());

unsubscribe();
