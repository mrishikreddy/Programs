import {comments} from "./data"

export async function GET()
{
    return Response.json(comments);    // as the data(comments) is in json format the response shoud also in json format
}

export async function POST(request:Request){              // receiving a object of Request type
    const comment = await request.json();
    const newcomment ={
        id : comments.length+1,
        text : comment.text
    };
    comments.push(newcomment);
    return new Response(JSON.stringify(newcomment),{    // sends 2 arguments 1st one is the value added and second one one is the content type and status
        headers:{"Content-Type":"application/json"},
        status:201
    });
}