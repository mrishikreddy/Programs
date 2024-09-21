import React, { Component } from 'react'

export class ClickCounterTwo extends Component {
    constructor(props) {
      super(props)
    
      this.state = {
         count : 0
      }
    }
    incrementCount = () =>{
        this.setState(prevState =>{
            return{ count: prevState.count+1}    // << syntax   important , it is prevState.count, if you miss count you will get object in outpu
        })
    }

  render() {
    return (
      <div>
        {
            this.props.render(this.state.count, this.incrementCount)   // it renders this elements to childern or wrapped components
        }
      </div>
    )
  }
}

export default ClickCounterTwo

{/* In App.js
   instead of render we can also write like this:
   <PRCounter
    {(count,incrementCount)=>(
      <ClickCounterTwo count ={count} incrementCount={incrementCount}/>  
    )}/>
    <PRCounter
    render ={(count,incrementCount)=>(
      <HoverCounterTwo count ={count} incrementCount={incrementCount}/>  
    )}/> */}


    {/* and in childern components the i.e. in wrapped componets
  use term childeren instead of render 
  ex:
  render() {
    return (
      <div>
        {
            this.props.render(this.state.count, this.incrementCount)   // it renders this elements to childern or wrapped components
        }
      </div> */}