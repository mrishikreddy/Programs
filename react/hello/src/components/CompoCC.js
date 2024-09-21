import React, {useContext} from 'react'                // importing react and useContext
import { UserContext, ChannelContext } from '../App'   // importing contexts from App.js

function CompoCC() {

   const user = useContext(UserContext)
   const cast = useContext(ChannelContext)

  return (
    <div>
        {user}-{cast}
    </div>
  )
}

export default CompoCC