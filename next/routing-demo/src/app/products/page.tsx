import { Metadata } from "next";
import Link from "next/link";

export const metadata: Metadata={
    title:{
        absolute:"Hello",
        template:"%s | Hello"
    }


}
export default function products(){
    const productId = 100
    return(
        <>
        <h1>Available Products</h1>
        <h2> <Link href="/profile">Profile</Link></h2>
        <h2> <Link href="products/1">Product 1</Link>  </h2>
        <h2> <Link href="products/2" replace>Product 2</Link>  </h2>                 {/* Here repalces term for this link to  indicate to take directly to home after back pressed in this link page*/}
        <h2> <Link href={`products/${productId}`}>Product {productId}</Link>  </h2>  {/* we can also use the dynamic data to refer links like this */}
        <h2>.   .   .</h2>
        <h2>.   .   .</h2>
        <h2>.   .   .</h2>
        </>
    )
}