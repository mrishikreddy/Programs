"use client"
import { serverSideFunction } from "../utils/server-utils"

export default function ClientRT()
{
    console.log("client route rendered");
    const result = serverSideFunction()
    console.log(result)
    return(<>
        <h1>Client Route Page</h1>
        <p>{result}</p>
        </>)
    
}