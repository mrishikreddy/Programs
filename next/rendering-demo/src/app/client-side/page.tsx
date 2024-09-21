"use client"

import { useState } from "react";

export default function About()
{
    const [Name,SetName] = useState("");

    
    return (
        <div>
            <h1>Greetings</h1>
            <input type="text" onChange={(e)=> SetName(e.target.value)}/>
            <h1>Hello {Name}</h1>

        </div>
    )
}