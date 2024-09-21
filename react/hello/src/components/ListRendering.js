import React from "react"

function ListRendering()
{
    let names = ['RRR','MMM',"SSS","GGG","RRR"];
    return(
        <div>                     
        {                                               // don't forget to use curly braces to activate js inside html tags
        names.map((name,index) => <h2 key={index}>Hi, Iam {name}</h2>)      
        }                          {/* ^  passing index as key here */}   
        </div>
    )


/*
    let names = ['RRR','MMM',"SSS","GGG"];                 | personal prefernce, it is good idea to refactor code like this
    let n = names.map(name => <h2>Hi, Iam {name}</h2>)     | now the code looks simple and easy to understand
    return <div>{n}</div>                                  
*/


/*
there must be a key which is unique element which is to be passed as additional argumen in map function to identify 
element by react, in case if unique element is not present, we use index of list as key
When to use index as a key?
1. The items in your list do not have a unique id.
2. The list is a static list and will not change. 
3. The list will never be reordered or filtered.

when using index as a key, in some cases, UI will face seroius consequenes, ex: in list even though you sorted list
but still react shows same values as the index of list is same (0,1,2,3...) which are used as keys to identify element
*/
    
}

export default ListRendering