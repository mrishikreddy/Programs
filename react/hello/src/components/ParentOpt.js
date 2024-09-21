import React,{useState,useMemo, useCallback} from 'react' 
import ChildOpt from './ChildOpt.js'             // importing child
 
// when we pass the function or objects to child element memo component of child will
// not work in stoping the unnecessary re-rendring of child component, this occurs due to
// when the parent component updats it always creates a new reference to  functions or objects 
// which react will think as a new component, and they are passing into child componet
// so child will be also re-render, to stop this unnecessary render and render only if we
// update the child component we have to do the memozation of the required function or object and then 
// pass the memozied element into the child component
// for objects wecan use usememo similarlly for functions we can use usecallback 
// to stop child componenet from being rendering unncessarilly

function ParentOpt()
{
    const [count,setCount] = useState(0);
    const [name,setName] = useState('Rishik');
    const person = {
        fname : 'Bruce',
        lname : 'Wayne'
    }


    const memoperson = useMemo(()=> person,[])      // creating memozied object of person
   

    console.log('Parent render');
    return(
        <div>
            <button onClick={()=>{setCount(c=>c+1)}}>Count-{count}</button>
            <button onClick={()=>setName('Reddy')}>Change Name</button>
            <ChildOpt name={name} person={memoperson} />        {/*Passing the memozied object into child */}

        </div>
    );

}

export default ParentOpt



/*
use this for passing a function using usecallback

function ParentOpt()
{
    const [count,setCount] = useState(0);
    const [name,setName] = useState('Rishik');
  
    const handleClick = ()=>{}
    const memoHandleClick = useCallback(handleClick,[])  // creating a memozied function use useCallback

    console.log('Parent render');
    return(
        <div>
            <button onClick={()=>{setCount(c=>c+1)}}>Count-{count}</button>
            <button onClick={()=>setName('Reddy')}>Change Name</button>
            <ChildOpt name={name} handleClick={memoHandleClick}/>
         </div>
     );
 
 }
 
 export default ParentOpt
 */