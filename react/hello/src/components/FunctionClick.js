import React from 'react'
                                // use code snippet rfce for functional component to genarate the basic code
function FunctionClick() {

    function clickHandler()         // event handlers are used to handle a event
    {
        console.log("Button Clicked");
    }

  return (
    <div><button onClick={clickHandler}>Click me</button></div>             //<< donot use () while call clickHandler
  );                                                                        // bcoz it call function directly and calls fn 
}                                                                      // without clicking it 

export default FunctionClick