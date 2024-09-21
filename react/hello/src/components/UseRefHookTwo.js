import React,{useEffect,useRef,useState} from 'react'

function UseRefHookTwo() {
  const [timer,setTimer] = useState(0)   // settingup the useState
  const intervalRef = useRef()           // creating a Ref

  useEffect(()=>
  {
    intervalRef.current = setInterval(()=>{    // setInterval is used to render the component for every 1000ms 
        setTimer(prevTimer => prevTimer+1)    // here set time function is defined, prevTimer is a argument passed to arrow function of setTimer,which increments by one 
    },1000)

    return ()=>{                            // return is used as component will unmount in the useEffect
        clearInterval(intervalRef.current)  // clearInterval is used to clear the state when it is unmounted
    };
  },[])  // here [] is used to add dependencies so that component will render only when those vstates are updated
 
  return (
    <div>
        Hook - {timer}
        <button onClick={()=> clearInterval(intervalRef.current)}>stop Hook timer</button>
    </div>
  )
}

export default UseRefHookTwo