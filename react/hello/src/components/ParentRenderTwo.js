import React, { useState } from 'react';
import ChildRenderTwo from './ChildRenderTwo';

function ParentOne(){
  const [count, setCount] = useState(0);
  const [name,setName] = useState('Rishik');
  console.log('Parent Render');
  return (
    <div>
      Count: {count} <br></br> 
      {name}
      <div>
        <button onClick={() => setCount(c => c + 1)}>incre 1</button>
        <button onClick={()=>setName('Reddy')}>Change Name</button>
      </div>
      <ChildRenderTwo name={name}/>
    </div>
  );
}

export default ParentOne;

