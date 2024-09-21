import React from 'react'

function Title({text,count}) {
    console.log("rendering title")
  return (
    <h2>Use callback hook</h2>
  )
}

export default React.memo(Title)