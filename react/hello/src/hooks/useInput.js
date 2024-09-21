import {useState} from 'react' // importing use state

function useInput(initialvalue)        // use state takes an Parameter called as initial value
{
    const [value,setValue] = useState(initialvalue);   // setting use state

    const reset =()=>{                  // creating a reset function, which resets the value to in value
        setValue(initialvalue);
    }

    const bind = {                      // creating a variable which holds unchange event
        onChange: e =>{
            setValue(e.target.value);
        }
    }
    return [value,bind,reset]

}

export default useInput      // exporting the custom hook