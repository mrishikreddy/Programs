import React from 'react';
import ChildBOpt from './ChildBOpt';

function ChildRendrCntxt() {
    console.log("Child A render");
    return (
        <>
            <div>Child A</div>
            <ChildBOpt />
        </>
    );
}

export default React.memo(ChildRendrCntxt);    // to stop uncessary rendering memoziation of child component is done
