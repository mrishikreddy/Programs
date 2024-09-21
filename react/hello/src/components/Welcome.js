import React, {Component} from "react";

class Welcome extends Component{
    render()
    {
        return(
            <div>
                <h1>{this.props.tech} welcomes you</h1>
                {this.props.children}
            </div>
        )
    };
};

export default Welcome
