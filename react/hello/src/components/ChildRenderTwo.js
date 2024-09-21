import React from 'react';

function ChildRenderTwo({name}) {
  console.log('Child Render');
  return <div></div>;
}

export default React.memo(ChildRenderTwo);     // using memo to stop unncessary re-rendering

