'use client';

import { useRouter } from 'next/navigation'; // importing useRouter, it is used to route the pages

export default function OrderProduct() {
  const router = useRouter();
  
  const handleClick = () => {
    console.log("placing your order");
    router.push('//youtube.com/'); // it pushes the given URL to the search bar in the browser
    /* you can also use this in place of router.push('');
        router.replace();
        router.back();
        router.forward();
     */
  };

  return (
    <>
      <h1>Order Product</h1>
      <button onClick={handleClick}>Place order</button>
    </>
  );
}
