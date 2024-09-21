import React from 'react'

function Person({person}) {                                     // same parameter name should be maintained 
  return (                                                      // which is send in map function
    <div>
        <h2>Iam {person.name}, and my age is {person.age}</h2>
    </div>
  )
}

export default Person