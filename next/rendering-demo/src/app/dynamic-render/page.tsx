import { cookies } from "next/headers";

export default function dynrndr()
{
    const cookiesStroe = cookies();
    const theme = cookiesStroe.get("theme");
    console.log(theme);
    return <h1>Dynamic Rendering {new Date().toLocaleTimeString()}</h1>;
}