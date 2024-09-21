export const dynamic ='force-dynamic';    // This ensures that the page is not cached upon reloading

export async function GET(){
    return Response.json({
        time:new Date().toLocaleTimeString(),
    });
}