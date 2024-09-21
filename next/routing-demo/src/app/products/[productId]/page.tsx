import { Metadata } from "next"        // imports the Metadata object from the Next.js library. This object allows you to define metadata for your pages, 
                                       // which can be used for SEO (Search Engine Optimization) 

type Props = {                         // create a new type of element with the help of type keyword
   params:{                            // The elements Props contains an attribute productId of type string
      productId:String;
   };
};

export const generateMetadata = async({params,}:Props):      //Here, the function receives an argument that must be of type Props. This allows us to access the params object from the Props type within the function.
   Promise <Metadata> =>{                                                         // This line defines an asynchronous function named generateMetadata 
   const title = await new Promise((resolve)=>{                                   // that is exported from the module.
   setTimeout(()=>{
      resolve(`iphone ${params.productId}`)
   },100)
   });
   return{
      title:`Product ${title}`
   }
};

export default function ProductDetails({params}:Props){
   return <h1>Details of product {params.productId}</h1>
}

/*Promise<Metadata> => {...}: This line defines an asynchronous function named generateMetadata that is exported from the module.
async: This keyword indicates that the function is asynchronous, meaning it might involve waiting for some operation (like fetching data) before completing.
({ params, }: Props): Here, the function receives an argument that must be of type Props. This allows us to access the params object from the Props type within the function.
Promise<Metadata>: This specifies that the function returns a Promise that resolves to a Metadata object.
const title = await new Promise((resolve) => {...}): This line creates a new promise and waits for it to resolve before continuing. 
   Inside the promise, a setTimeout function simulates a delay of 100 milliseconds (ms) before resolving the promise with the text iphone ${params.productId}.Note:
   In a real-world scenario, you might replace this with actual logic to fetch product details based on params.productId from a database or API.
return { title:Product ${title}}: After the promise resolves, this line returns a Metadata object with a single property named title. The title is constructed dynamically
   using string interpolation (Product ${title}). */