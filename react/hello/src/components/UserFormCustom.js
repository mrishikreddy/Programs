import React from 'react'
import useInput from '../hooks/useInput'   // importing the use input custom hook

function UserFormCustom()
{
    const [firstname, bindFirstName, resetFirstName] = useInput('');   // using custom to handle first name
    const [lastname, bindLastName, resetLastName] = useInput('');      // using custom to handle last name

    const submitHandler = e =>{     // Creating submit handler to take necessary actions when the form submitted
        e.preventDefault()          // this prevents the form to erase all the enter strings and set Prevents the form to default
        alert(`Hello ${firstname} ${lastname}`);  // alert is used to display the given attributes in the browser
        resetFirstName();     // The both reset functions are used to reset the first name and last name after giving the alert
        resetLastName();
    }

    return(
        <div>
            <form onSubmit={submitHandler}>   {/* declaring on submit handler */}
                <div>
                    <label>First Name</label>
                    <input {...bindFirstName} type='text'></input>   {/* here, bind first name or last name is used to keep the others same while making changes to the current input element */}
                </div>
                <div>
                    <label>Last Name</label>
                    <input {...bindLastName} type='text'></input>
                </div>
                <div>
                    <button type='submit'>Submit</button>
                </div>
            </form>
        </div>
    )

}

export default UserFormCustom