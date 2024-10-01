import React from 'react'
const primary ={                    // Note,here css hi applied in the form of object and also follow camelCasing 
    fontSize : '72px',             // for the property names in CSS
    color: 'blue'
}

function Inline() {
  return (
    <div>
      <h1 className='error'>Error</h1>          {/* from appStyle.modules.css, using modules class are locally scoped so we can use the css any where in different components */}
      <h2 style={primary}> Hello</h2></div>      // << syntax for inline styling
  )
}

export default Inline