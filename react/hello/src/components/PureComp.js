import React, { PureComponent } from 'react'          //<< syntax change tp PureComponent

export class PureComp extends PureComponent {         //<< syntax change tp PureComponent
    rconst
  render() {
    console.log("In Pure Component");
    return (
      <div>Pure Component {this.props.name}</div>            // here props is used becaue value is revcived
    )
  }
}

export default PureComp