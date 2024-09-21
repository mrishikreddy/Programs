import React,{useState,useEffect} from 'react'
import useDocumentTitle from '../hooks/useDocumentTitle' // importing the custom hook 
// The logic to update the document title is written inside the custom book. Use document title.
function DocTitleOne() {
    const [count,setCount] = useState(0);
    useDocumentTitle(count)               // using the custom hook
  return (
    <div>
        <button onClick={()=> setCount(count+1)}>count {count}</button>  
    </div>
  )
}

export default DocTitleOne