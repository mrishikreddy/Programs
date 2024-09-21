import React from 'react'
/* using style Sheet, we can link the CSS in another CSS file to HTML elements */
import './MyStyles.css'                            // here all the styles are imported from MyStyles.css

function StyleSheets(props) {                      // props is taken as argument to check the condition in the component
    let cn = props.condition ? 'primary' : ''      // Validating the condition and And assigning style to variable cn

  return (
    <div>
        <h2 className = {`${cn} font-xl`} >Hi</h2>  {/* when using multiple classes, we can use template literals here, CN is on class and fount-xl is another class */}
        {/* There is only one class, we can write like this : <h2 className = {cn}>Hi</h2>*/}
    </div>
  )
}

export default StyleSheets