import {NextResponse, type NextRequest} from "next/server"

/* 1st Approach

export function middleware( request : NextRequest){
    return NextResponse.redirect(new URL("/",request.url));     // whenever this function is called it rediredcts to the specified url path
}

export const config = {                     // In config we set the matcher to the required url, if it is entered in browser it activstes the middileware function
    matcher : "/middleware",
};
*/

/* 2nd Approach
export function middleware( request : NextRequest){
    if(request.nextUrl.pathname==="/middleware")
        return NextResponse.redirect(new URL("/profile",request.url));
    //  return NextResponse.rewrite(new URL("/profile",request.url));     this send the url specified url content but the middleware url willl not change

}   
*/    


// using middleware to set cookies and apply middleware
export function middleware( request : NextRequest){
    const response = NextResponse.next();

    const themePreference = request.cookies.get("theme");
    if(!themePreference){
        response.cookies.set("theme","dark");
    }

    response.headers.set("custom-header","custom-value");
    return response
}
