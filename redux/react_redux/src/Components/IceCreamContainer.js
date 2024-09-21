import React from 'react';        
import { connect } from 'react-redux';              // importing connector from react-redux, this connects the functions to IceCreamsContainer
import { buyIceCream } from './IceCream/IceCreamActions';       // importing buy_IceCreams action from IceCreamsActions

function IceCreamsContainer(props) {                     // passing the props which are connected to IceCreamsContainer with the help of connect method
  return (
    <div>
      <h2>Number of Ice Creams: {props.numOfIceCreams}</h2>      {/* Using the props */}
      <button onClick={props.buyIceCream}>Buy Ice Cream</button>
    </div>
  );
}

const mapStateToProps = (state) => {                 // This function does a work of returning state object which will be converted to props
  return {
    numOfIceCreams: state.IceCream.numOfIceCreams,   // Root Reducer is formed so using wthe state with the help of keys
  };                                                 // otherwise use state.numOfIceCreams
};

const mapDispatchToProps = (dispatch) => {            // This method maps dispatch method to props
  return {
    buyIceCream: () => dispatch(buyIceCream()),
  };
};

export default connect(mapStateToProps, mapDispatchToProps)(IceCreamsContainer);  // taking both the props and connecting it to IceCreamsContainer
