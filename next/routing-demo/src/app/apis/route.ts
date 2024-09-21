import { type NextRequest } from "next/server"      // Importing type next request from next/server
import { headers,cookies } from "next/headers"      // importing headers and cookies from next/headers



export async function GET(request:NextRequest)   // Making the type of the request as next request
{
    const requestHeaders = new Headers(request.headers); // Implementing head with the help of request. Headers, it is the first method to use headers,Requesting headers from the link
    const headerList = headers();     // implementing headers with the help of headers function, it is the second method to use headers function

    cookies().set("resultsPerPage","20")           // using cookies function to set the cookies, it is the first method to use cookies
    const theme = request.cookies.get("theme")     // Using request, cookies to get the setted cookies, it is the second method to use cookies

    console.log(theme)                             // the four lines below describes the logging of cookies and headers
    console.log(cookies().get("resultsPerPage"));

    console.log(requestHeaders.get("User-Agent"));
    console.log(headerList.get("User-Agent"));

    return new Response("<h1>Success Request</h1>",{  // sending a response with headers
        headers:{
            "content-type":"text/html",
            "Set-Cookie":"theme=dark"
        },
    })
}