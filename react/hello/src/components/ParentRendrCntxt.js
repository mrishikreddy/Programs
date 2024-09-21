import React, { useState } from 'react';
import ChildRendrCntxt from './ChildRendrCntxt';

export const CountContext = React.createContext();    // creating context to create provider and consume it in any required child component
const CountProvider = CountContext.Provider;          // creating provider

function ContextParent() {                     
    const [count, setCount] = useState(0);        // creating useState

    console.log("parent component renders");

    return (
        <>
            <button onClick={() => setCount(c => c + 1)}>Count-{count}</button>
            <CountProvider value={count}>    {/*wrapping provider in the tree of child components */}
                <ChildRendrCntxt />
            </CountProvider>
        </>
    );
}

export default ContextParent;


/*
using element refernce method
Here in element reference method the child component is passed as props into parent component
As a props can't be changed it will not render child component it will not re-render
unnecessarilly untill the state of child component changes.It can be implement as follows

In App.js
<ParentRendrCntxt>
<ChildRendrCntxt/>
</ParentrendrCntxt>


In ParentRenderCntxt.js
function ContextParent({children}) {                     
    const [count, setCount] = useState(0);        // creating useState

    console.log("parent component renders");

    return (
        <>
            <button onClick={() => setCount(c => c + 1)}>Count-{count}</button>
            <CountProvider value={count}>  
            {children}
            </CountProvider>
        </>
    );


*/