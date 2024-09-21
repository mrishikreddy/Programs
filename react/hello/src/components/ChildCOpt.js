import React, { useContext } from 'react';
import { CountContext } from './ParentRendrCntxt';

function ChildCOpt() {
    const count = useContext(CountContext);
    console.log('Child C render');
    return (
        <>
            <div>Child C count = {count}</div>
        </>
    );
}

export default ChildCOpt;
