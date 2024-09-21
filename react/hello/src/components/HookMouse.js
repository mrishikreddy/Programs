import React,{useState, useEffect} from 'react'

function HookMouse() {
    const [x,setX] = useState(0)
    const [y,setY] = useState(0)

    const logMousePosition = e =>{
        console.log('Mouse event')
        setX(e.clientX)
        setY(e.clientY)
    }
    
    // to make useEffect to call only once, i.e. to work like componentDidMount pass empty  extra argument 
    useEffect(()=>
   {
        console.log('Use effect called')
        window.addEventListener('mousemove',logMousePosition)

        return () =>{                                   // << this return statement works like ComponentWillUnmount 
            console.log('component unmounting code')    
            window.removeEventListener('mousemove', logMousePosition)
        }
   },[])    // << this will makke useEffect to render only once

  return (
    <div>
        Hooks X - {x}, Y - {y}
    </div>
  )
}

export default HookMouse