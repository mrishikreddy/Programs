export default function dashboardLayout({
    children,
    users,
    revenue,
    notifications,
    login
}:{
    children:React.ReactNode,
    users:React.ReactNode,
    revenue:React.ReactNode,
    notifications:React.ReactNode,
    login:React.ReactNode
})
{
    const isLoggedIn = true             // change to false to see login page
    return isLoggedIn ? (               // implementing conditional statements to check for login
        <div>
            <div>{children}</div>
            <div style={{display:"flex"}}>
                <div style={{display:"flex", flexDirection:"column"}}>
                    <div>{users}</div>
                    <div>{revenue}</div>
                </div>
                <div style={{display: "flex",flex:1}}>{notifications}</div>
            </div>
        </div>
    ): (login)

}