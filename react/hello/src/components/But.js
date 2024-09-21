import React from 'react'

function But({handleClick,childern}) {
    console.log("rendering button --", childern)
  return (
    <button onClick={handleClick}>
      {childern}
    </button>
  )
}

export default React.memo(But)