export default async function users()
{
    type User={
        id: number,
        name: string,
        username: string,
        email: string,
        phone: string,
      };

  await new Promise((resolve)=>setTimeout(resolve,4000));
  const response = await fetch("https://jsonplaceholder.typicode.com/users");
  const users = await response.json();
  console.log(users);

  return(
    <div>
    {users.map((user :User)=>(
        <div key ={user.id}>
            <br/>
            <h2>name: &nbsp; {user.name}</h2>
            <h2>username: &nbsp;{user.username}</h2>
            <h2>email: &nbsp; {user.email}</h2>
            <h2>phone: &nbsp; {user.phone}</h2>
            <br/>
            <hr></hr>
        </div>
    ))}
    </div>
  )
 




}