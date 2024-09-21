"use client"
import { useTheme } from "@/components/theme-provider";

export default function ClientRT()
{
    const theme = useTheme();

    return(<>
        <h1 style={{color:theme.colors.primary}}>use context</h1>
        </>)
    
}