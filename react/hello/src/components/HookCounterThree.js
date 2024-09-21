import React,{useState} from 'react'

/* the useState doesnot automatically merge and update the objects, example: if you entered one value in object other value will be erased
   to avoid this we will manually merge with the help of spread operater(ex: ...name) */

function HookCounterThree() {
    const [name, setName] = useState({FirstName:'',LastName:''})        // setting state as object with name as "name" 
  return (
    <div>
        <input type='text' 
        value={name.FirstName} 
        onChange={e => setName({...name, FirstName:e.target.value})} />   {/*handling on change to show the firstname when ever anything is typed in it */}
        <input type='text' 
        value={name.LastName} 
        onChange={e => setName({...name, LastName:e.target.value})} />    {/*Here ...name is called as spread opertor, we are mentioning this to */}
        <h2>First name is : {name.FirstName}</h2>                          {/*indicate that first fetch name object then make the repective changes that is in firstName or lastName */}
        <h2>First name is : {name.LastName}</h2>
        <h2>{JSON.stringify(name)}</h2>        {/*This function is used to show how the data is stored inside object name*/}
    </div>
  )
}

export default HookCounterThree