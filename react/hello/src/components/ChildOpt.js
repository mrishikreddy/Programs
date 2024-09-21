import React  from "react";

function ChildOpt({name,person})
{
    console.log("child render");
    return(
        <div>
           Hello {name} {person.fname} {person.lname}    {/*displaying contents */}
        </div>
    );


}
export default React.memo(ChildOpt);   // creating and exporting a memozied ChildOpt this prevents unncessary re-renders


/*  //for useCallback use this childcomponent
import React  from "react";

function ChildOpt({name})
{
    console.log("child render");
    return(
        <div>
          Hello {name}   // displaying contents 
          </div>
        );
    
    
    }
    export default React.memo(ChildOpt);   // creating and exporting a memozied ChildOpt this prevents unncessary re-renders

*/