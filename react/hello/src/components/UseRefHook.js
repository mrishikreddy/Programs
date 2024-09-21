import React,{useEffect,useRef} from 'react'


function UseRefHook() {
    const inputfield=useRef(null);
    useEffect(()=>{
        inputfield.current.focus()
    },[])
  return (
    <div>
        <input ref={inputfield} type='text'/>
    </div>
  )
}

export default UseRefHook