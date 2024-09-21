import React,{useState,useCallback} from 'react'
import But from './But'
import Title from './Title'
import Countbut from './Countbut';
function ParentuseCallback()
{
    const[age,setAge] = useState(25);
    const [salary,setSalary] = useState(50000);

    const incrementAge= useCallback(()=>
    {
        setAge(age+1)
    },[age])

    const incrementSalary= useCallback(()=>
    {
        setSalary(salary+1)
    },[salary])


  return (
    <div>
        <Title/>
        <Countbut text='Age' count={age}/>
        <But handleClick={incrementAge} childern={"increment age"}/> 
        <Countbut text='Salary' count={salary} />
        <But handleClick={incrementSalary} childern={"increment salary"}/> 

    </div>
  )
}

export default ParentuseCallback