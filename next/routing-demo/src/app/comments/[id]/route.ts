import { type NextRequest} from "next/server"
import { comments } from "../data";
import { redirect } from "next/navigation"

/*
This commented code explains about dynamic routes which will render particular comments based on given id
This code is commented because The file should not contain same HTTP request (here I am talking about GET request)
and another GET request is used to demonstrate URL Query patterns 

export async function GET(
  request: Request,
  { params }: { params: { id: string } }
) {
    if (parseInt(params.id)>comments.length){
        redirect("/comments");                 // if incorrect id is given it redirects to /comments which returns all the comments
    }
  const comment = comments.find(
    (comment) => comment.id === parseInt(params.id)
  );
  return Response.json(comment);
}
*/

export async function GET(request: NextRequest) // It is the actual request type in nextJS
{
    const searchParams = request.nextUrl.searchParams;
    console.log(searchParams);
    const query = searchParams.get("query");
    const filteredComments = query
    ? comments.filter((comment)=> comment.text.includes(query))
    :comments;
    return Response.json(filteredComments);
}


export async function PATCH(
    request: Request,
    { params }: { params: { id: string } }
  ) {
    const body = await request.json();
    const {text} = body // destructuring body
    const index = comments.findIndex(
        (comment) => comment.id === parseInt(params.id)
    );
    comments[index].text = text;
    return Response.json(comments[index]);
  }

  export async function DELETE(
    request: Request,
    { params }: { params: { id: string } }
  ) {
    const index = comments.findIndex(
        (comment) => comment.id === parseInt(params.id)
    );
    const deletedComment = comments[index];
    comments.splice(index,1);                // splice is used to delete n number of objects from the given index, here we given only 1 to delete a single object
    return Response.json(deletedComment);
  }