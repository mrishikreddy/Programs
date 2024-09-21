import React,{useState} from 'react'

const initialState ={     //craeting a object which holds attributes fname and lname
    fname:'Bruce',
    lname:'Wayne',
}

function ObjectUseState()
{
    const [person,setPerson] = useState(initialState);

    
    const changeName=()=>{
    /*                          // incorrect method which directly set's the person name after mutation
        person.fname = 'Clark';
        person.lname = 'kent';
        setPerson(person)
    */


    // correct method is first to create a new reference to be identified by react, 
    // create  a new variable and make cahnges to it then pass it in setPerson function
    const newperson = {...person};  // here {} is used because it is type of object
    newperson.fname = 'Clark';
    newperson.lname = 'kent';
    setPerson(newperson)
    }   

    console.log('ObjectUseRender');
    return(
        <div>
            <button onClick={changeName}>{person.fname} {person.lname}</button>   {/* creating button and it's values */}
        </div>

    );
}
export default ObjectUseState