"use client" // because the reset function in error.tsx is a client side component which is linked with this page.tsx
import {notFound} from "next/navigation"
/*import { Metadata } from "next"   // we can't use meta data in client side component
                                    // this meta code is here to demonstrate title object
export const metadata: Metadata={
    title: "review product"
}
*/
function getRandomInt(count:number){            // generating a random number
    return Math.floor(Math.random()*count);
}

export default function reviewsById(
{params}:
{
    params:{
        productId:string,
        reviewId:string
    }
}
){
    const random = getRandomInt(2);                 // setting number of outputs, in this case 2 indicates 0 and 1
    if(random==1)                                   // if random==1 throws a error
        throw new Error("Error loading review");
    
    if(parseInt(params.reviewId)>1000){
        notFound();
    }
    return(
        <h1>
            Review {params.reviewId} for product {params.productId}
        </h1>
    )
}