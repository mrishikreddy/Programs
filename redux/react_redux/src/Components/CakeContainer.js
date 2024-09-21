import React from 'react';        
import { connect } from 'react-redux';              // importing connector from react-redux, this connects the functions to CakeContainer
import { buyCake } from './Cake/CakeActions';       // importing buy_cake action from cakeActions

function CakeContainer(props) {                     // passing the props which are connected to CakeContainer with the help of connect method
  return (
    <div>
      <h2>Number of Cakes: {props.numOfCakes}</h2>      {/* Using the props */}
      <button onClick={props.buyCake}>Buy Cake</button>
    </div>
  );
}

const mapStateToProps = (state) => {                 // This function does a work of returning state object which will be converted to props
  return {
    numOfCakes: state.cake.numOfCakes,               // Root Reducer is formed so using wthe state with the help of keys
  };                                                 // otherwise use state.numOfIceCreams
};

const mapDispatchToProps = (dispatch) => {            // This method maps dispatch method to props
  return {
    buyCake: () => dispatch(buyCake()),
  };
};

export default connect(mapStateToProps, mapDispatchToProps)(CakeContainer);  // taking both the props and connecting it to CakeContainer
