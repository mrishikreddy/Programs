import React from 'react'

function ChildComponent(props) {
  return (
    <div>
        <button onClick ={()  => props.greetHandler('Child')}>Greet Me</button>  {/* passing a function greet handler with argumrnt 'child' */}
    </div>
  )
}

export default ChildComponent