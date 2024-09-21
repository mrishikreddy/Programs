import React,{useMemo, useState} from 'react'

// in the below code you will find two counters  a function which checks odd/even 
// only assigned to setCounterOne


function CompoUseMemo() {

    const [counterOne,setCounterOne] = useState(0);      //initiating two states
    const [counterTwo,setCounterTwo] = useState(0);

    const incrementOne =()=>{                    // incrementing counterOne value when ever button is pressed
        setCounterOne(counterOne+1);
    }

    const incrementTwo =()=>{
        setCounterTwo(counterTwo+1);
    }

    const isEven = useMemo(()=>                 // useMemo is similar to useCallback 
        {                                       // but the only difference is it is used to cache the result
            let i = 0;                          // here the when the button 2 is clicked entire component re-renders
            while(i<200000000)                  // <-- due to this this function also excuted and takes long time to show result
            i++;                                // with the help of useMemo we can stop entire re-rendering and we can render this function
            return counterOne % 2 === 0;        // only when the counterOne is changed.
        },[counterOne])

  return (
    <div>
        <div>
        <button onClick={incrementOne}>Count - {counterOne}</button>    
        <span>{isEven? ' Even':' odd'}</span>                           {/*span is similar to div tag, the only difference is span tag starts the elements inline, without assigning them in new line */}
        </div> 

        <div>
        <button onClick={incrementTwo}>Count - {counterTwo}</button>
        </div>
    </div>
  )
}

export default CompoUseMemo