import React, { Component } from "react";

const withCounter =(WrappedComponent, incrementValue) =>{                       // << defining the HOC as function which returns a new component
    class withCounter extends React.Component{
        constructor(props) {
          super(props)
        
          this.state = {
             count :0
          }
        }
        incrementCount = ()=>{
            this.setState(prevState=>{                                         // incrementing value from previous state  and incrementing value
                return{count:prevState.count+incrementValue}
            })
        }

        render(){
           return(
            <WrappedComponent                             // wrapping component
            counts = {this.state.count}
            incrementCount = {this.incrementCount}
           {... this.props}                           //taking two props values and passing remaing props to wrapped component
            />
           )
        }
    }
    return withCounter;
}
export default withCounter