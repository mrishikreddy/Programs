import React,{useState} from 'react'

function HookCounterFour() {
    const [items,setitems] = useState([])    // creating estate with items which is a list holding objects and a method set state, which is used to check the state of list 

const addItem = ()=>
{
    setitems([
        ...items,{                                // here Apart from the previous object objects, object is added
            id: items.length,                     // which consist of two attributes id and value, spread off is used to fetch previous items
            value : Math.floor(Math.random() * 10) + 1      // if you do not use Operator, the previous object, the items Will be earsed
        }
    ])
}


/*  if you want to implement without using Arrow Function, You can also do like this:
function addItem()
{
    setitems([
    ...items,{
        id: items.length,
        value : Math.floor(Math.random() * 10) + 1
    }
])
}
*/


  return (
    <div>
        <button onClick={addItem}>Add a number</button>
        <ul>
            {
                items.map(item =>(      // Here, map is to show Every item in the list
                    <li key={item.id}>{item.value}</li>
                ))
            }
        </ul>
    </div>
  )
}

export default HookCounterFour