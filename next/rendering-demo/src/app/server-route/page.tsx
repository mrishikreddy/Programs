import { serverSideFunction } from "../utils/server-utils"

export default async function ServerRT()
{
    console.log("server route rendered");
    const result = serverSideFunction()
    console.log(result)
    
}