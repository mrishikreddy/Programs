import {useEffect} from 'react'

function useDocumentTitle(count) {    // creating the function in custom hook, It accepts a argument called count
    useEffect(()=>{                   // here, use effect is used to display the account value in document title
        document.title = `count ${count}`
    },[count])
  
}

export default useDocumentTitle