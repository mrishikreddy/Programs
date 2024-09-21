import { combineReducers } from "redux";
import CakeReducer from "./Cake/CakeReducer";
import IceCreamReducer from "./IceCream/IceCreamReducer";

const RootReducer = combineReducers({
    cake:CakeReducer,
    IceCream:IceCreamReducer
})

export default RootReducer

/* Using combineReducers method we can combine two or more reducers and form a root reducers
which we can able to pass them into createStore. It takes arguments as keys
In the above program CaakeReducer key is cake so whenever we want to use the state of cakes
mention state.cake.numOfCakes and so on... */