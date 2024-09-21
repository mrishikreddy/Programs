'use client'                              // usepath can be used by client-side components only so we are mentioning this as a clint side-component by mentioning like this ("use client")
import { Inter } from "next/font/google"; // Note: client-side componets doesn't have meta data so you can't mention meta data while using client side components
import { usePathname } from "next/navigation";   // importing Pathname
//import "../globals.css"                          // importing globals.css for applying css from globals.css file
import { useState } from "react";
const inter = Inter({ subsets: ["latin"] });


const navLinks = [      // creating a list which stores all the links along with their names(used as a key in map function)
  { name: "Register", href: "/register" },
  { name: "Login", href: "/login" },
  { name: "Forgot Password", href: "/forgot-password" },
];


// Import necessary components from Next.js Link for proper routing
import Link from "next/link";

export default function RootLayout({ children }: { children: React.ReactNode }) {
    const usepath = usePathname();        // assigning pathname to a variable
    const [input,setInput] = useState('');
  return (
    <div>
      <div>
        <input value={input} onChange={(e)=> setInput(e.target.value)}/>
      </div>
        {navLinks.map((link) => {                            // using map function
            const isActive = usepath.startsWith(link.href)   //  usepath.startwith returns a bool value depending on active state of the link
          return(
          <Link href={link.href} key={link.name}
            className={ isActive? "font-blod mr-4":"text-blue-500 mr-4"}>   {/* conditional statement based on active state of link */}
            {link.name}  
          </Link>
          );
        })}
      <main>{children}</main> 
    </div>
  );
}
