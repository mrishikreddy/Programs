import React from 'react'
import Person from './Person'

function PersonList() {
    const persons =[
        {
            id: 1,
            name: "LB",
            age : 40
        },
        {   
            id: 2,
            name:"LL",
            age :35
        },
        { 
            id: 3,
            name:"LG",
            age :37
        }
    ]

  
    const pl = persons.map(person => <Person key={person.id} person = {person}></Person>)     // using map function sends the data to Person component and recives the element for each object that is h2 tag
    return <div>{pl}</div>
    /*                                        ^
                                              ^  
    A "key" is a special string attribute you need to include when creating lists of elements.
    Keys give the elements a stable identity.
    keys must be unique as they are used by react for identifing a element in list
    Keys help React identify which items have changed, are added, or are removed.
    Help in efficient update of the user interface. 
    so always mention keys when you are dealing with lists 
    */

}

export default PersonList