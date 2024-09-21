import React from 'react';
import ChildCOpt from './ChildCOpt';

function ChildBOpt() {
    console.log('Child B render');
    return (
        <>
            <div>Child B</div>
            <ChildCOpt />
        </>
    );
}

export default ChildBOpt;
