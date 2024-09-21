import React,{useState} from 'react'

const initState =['Bruce','Wayne']  // creating a Array of values

function ObjectUseState()
{
    const [persons,setPersons] = useState(initState);

    
    const handleClick=()=>{
        /*  // incorrect method
        persons.push('Clark');
        persons.push('Kent');
        setPersons(persons);
        */

         // correct method is first to create a new reference to be identified by react, 
    // create  a new variable and make cahnges to it then pass it in setPerson function
        // creating and declaring values for newpersons from persons
        const newpersons = [...persons];  // here [] is used because it is type of Array
        newpersons.push('Clark');         
        newpersons.push('kent');
        setPersons(newpersons);
        
    }
    console.log('ArrayUseRender');

    return(
        <div>
            <button onClick={handleClick}> Click </button>
            {persons.map((p)=>(
                <div key={p}>{p}</div>
            ))}
        </div>

    );
}
export default ObjectUseState