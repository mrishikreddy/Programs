import React from 'react'
import { connect} from 'react-redux'
import { buyCake } from './Cake/CakeActions'
import { buyIceCream } from './IceCream/IceCreamActions'

// In mapsStateToProps the second argument we can pass is "ownProps" which enbales us to
// use the already existing props and also convert the state into props and use it
// here props is sent from app.js which will be checked by ownprops and take neccessary actions if present
// similarly ownProps can be used by dispatch method also 

function ItemContainer(props)
{
    return(
        <div>
            <h2>Item - {props.item}</h2> 
            <button onClick={props.buyItem}>Buy Item</button>
        </div>
    )
}

const mapStateToProps = (state,ownProps)=>{
    const itemState = ownProps.cake ? state.cake.numOfCakes: state.IceCream.numOfIceCreams
    // if cake is passed as props in appp.js the we will display the state of cake else displays the state of icecream
    return{
        item : itemState        //  returning itemState as item to us it in component as props.item
    }
}

const mapDispatchToProps = (dispatch,ownProps)=>{
    const dispatchFunction = ownProps.cake
    ? ()=>dispatch(buyCake())
    : ()=>dispatch(buyIceCream())
    return{
        buyItem : dispatchFunction
    }
}

export default connect(mapStateToProps,mapDispatchToProps)(ItemContainer)