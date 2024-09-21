import React, { useState } from 'react';

function ParentOne({ children }) {
  const [count, setCount] = useState(0);
  console.log('Parent Render');
  return (
    <div>
      Count: {count}
      <div>
        <button onClick={() => setCount(c => c + 1)}>incre 1</button>
      </div>
      {children}
    </div>
  );
}

export default ParentOne;
