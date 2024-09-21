import { Suspense } from "react"
import { Product } from "@/components/product"
import { Reviews } from "@/components/reviews"

export default function ProductDetail()
{
    return(
        <div>
            <h1>Product details page</h1>
            <Suspense fallback={<p>Loading Product details</p>}>     {/* Using suspense we can live stream the chuncks of data */}
            <Product/>                                               {/* Using fallback to display the loading message until the required data is fetched */}
            </Suspense>

            <Suspense fallback={<p>Loading Reviews details</p>}>
            <Reviews/>
            </Suspense>
        </div>
    )

}