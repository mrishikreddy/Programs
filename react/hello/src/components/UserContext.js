import React from 'react';

const UserContext = React.createContext('MRR');        // creating context, passing a default value as argumnet, if you pass a default argumnet and there is no
                                                    // passing of a value, then you no need to wrapp the component inside provider component
const UserProvider = UserContext.Provider;        // creating provider, it a section to send values to child components
const UserConsumer = UserContext.Consumer;        // creating consumer, it a section to revice the values and utilize by child components

export {UserProvider,UserConsumer}                 // exporting provider and consumer to integrate them in the parent and child components
export default UserContext


 {/*<UserProvider value={'Rishik reddy'}   
 <CompoC />           <--- include only this line and comment he other lines to see how a default argument works
 {/*</UserProvider>*/}
