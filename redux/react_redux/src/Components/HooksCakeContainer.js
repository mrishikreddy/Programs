import React from 'react'
import { useSelector,useDispatch } from 'react-redux'        /* importing use selector from react-redux
it allows you to extract data from the Redux store state for use in this component, using a selector function.
The selector will be called with the entire Redux store state as its only argument. 
The selector may return any value as a result, including directly returning a value that was nested inside state,
or deriving new values. The return value of the selector will be used as the return value of the useSelector() hook.
*/
import { buyCake } from './Cake/CakeActions'


function HooksCakeContainer()
{
    const numOfCakes = useSelector(state => state.cake.numOfCakes)         // using use selector to get the state and assigning to to a variable numOfCakes
    const dispatch = useDispatch()                                    // creates a reference to dispatch method of reducer in store so we can use the dispatch method in this component also
    return(
        <div>
            <h2>number of Cakes - {numOfCakes}</h2>
            <button onClick={()=>dispatch(buyCake())}>Buy Cakes</button>
        </div>
    )

}

export default HooksCakeContainer