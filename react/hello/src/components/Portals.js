/* Portals provide a first-class way to render children into a DOM node that exists outside the DOM hierarchy of the parent component.
ReactDOM.createPortal(child, container)
The first argument (child) is any renderable React child, such as an element, string, or fragment. The second argument (container) is a DOM element.
The portals were introduced in React 16.0 version.

So far we were having one DOM element in the HTML into which we were mounting our react application, i.e., the root element of our index.html in the public folder.
Basically, we mount our App component onto our root element. It is almost a convention to have a div element with the id of root to be used as the root DOM element. 
If you take a look at the browser in the DOM tree every single React component in our application falls under the root element, i.e., inside this statement.
<div id="root"></div>
But React Portals provide us the ability to break out of this dom tree and render a component onto a dom node that is not under this root element. 
Doing so breaks the convention where a component needs to be rendered as a new element and follow a parent-child hierarchy.
 They are commonly used in modal dialog boxes, hovercards, loaders, and popup messages
*/

 // to use the portal, goto index.html and add div tag <div id="portal-root"></div>

import React from 'react'
import ReactDOM from 'react-dom'            // to use the portal first we need to import ReactDom

function Portals() {
  return ReactDOM.createPortal(             // method used to create a portal takes to arguments
    <div>                                   {/* 1. child component, 2. the div ID which we declared in index.html */}
        <h2>This is a portal from Div "portal-root"</h2>
    </div>,
    document.getElementById('portal-root')
  )
}

export default Portals