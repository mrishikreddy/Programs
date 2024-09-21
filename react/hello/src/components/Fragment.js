import React from 'react'

function Fragment() {
  return (
    <React.Fragment>
        <h1>React Fragments</h1>
        <p>Fragments in react donot render the extra elements(tags), in browser-rightclick-inspect-elements you will not find any div
            tag to hold and wrap elements</p>


    </React.Fragment>


    // example for use of fragment when you create a table and fetching the records from another component they will get 
    // recevied when binded to one head/wrapper class i.e. is div but for table records(<td> or <th> tags) the <div> tag 
    // is not sutable as head tag. so in this case fragments are very helpfull.

    // you can also use <>...</> instead of <React.Fragment>...</React.Fragment> the only difference is you cannot
    // pass the key argument when using <>...</>   
    // ex: <React.Fragment key={...}>
  )
}

export default Fragment