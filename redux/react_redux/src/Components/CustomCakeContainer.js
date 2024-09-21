import React,{useState} from 'react';        
import { connect } from 'react-redux';              // importing connector from react-redux, this connects the functions to CustomCakeContainer
import { buyCake } from './Cake/CakeActions';       // importing buy_cake action from cakeActions

function CustomCakeContainer(props) {                     // passing the props which are connected to CustomCakeContainer with the help of connect method
    const [number,setNumber] = useState('');
  return (
    <div>
      <h2>Number of Cakes: {props.numOfCakes}</h2>      {/* Using the props */}
      <input type='text' value={number} onChange={e =>setNumber(e.target.value)}/>
      <button onClick={()=>props.buyCake(number)}>Buy {number} Cake</button>
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
    buyCake: number => dispatch(buyCake(number)),
  };
};

export default connect(mapStateToProps, mapDispatchToProps)(CustomCakeContainer);  // taking both the props and connecting it to CustomCakeContainer
