import React from 'react'

function Countbut({text,count}) {
    console.log(`rendering ${text}`)
  return (
    <div>{text} -{count} </div>
  )
}

export default React.memo(Countbut)