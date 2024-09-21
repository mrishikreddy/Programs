export const Product  = async ()=>{
    await new Promise((resolve) => setTimeout(resolve,2000));      // wantedly creating delays using setTimeout function
    return <div>Product</div>
}