const redux = require('redux');  // importing total redux, you have to use "redux.function_name" to call a function
// const {createStore, combineReducers} = require('redux')     you can directly import the modules from redux no need to use "redux.function_name" just use function_name
// createstore to create a store and combineReducers is to combine the multiple reducers into one reducer

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

const rootReducer = redux.combineReducers({      // using combineReducers to merge the two separate reducers
  cake: CakeReducer,                       // take the reducers as arguments in a key value pair 
  icecream: IceCreamsreducer,              // syntax : combineReducers({    key1:reducer1,  key2:reducer2.... })
});

const store = redux.createStore(rootReducer);    // generally it is recommended to name the reucer as root reducer after combination of reducers

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
