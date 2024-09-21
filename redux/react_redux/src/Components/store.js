import { createStore,applyMiddleware } from 'redux';
import RootReducer from './RootReducer';
import logger from 'redux-logger'

const store = createStore(RootReducer,applyMiddleware(logger));

export default store;


/*
Code without logger
import { createStore } from 'redux';
import RootReducer from './RootReducer';

const store = createStore(RootReducer);

export default store;

*/