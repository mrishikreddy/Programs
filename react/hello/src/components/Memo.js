import React from 'react'

function Memo({props}) {
    console.log('In Memo')
  return (
    <div>{props}</div>
  )
}

export default React.memo(Memo)       // syntax change React.Memo(...) is a method which performs similar operation to Pure component