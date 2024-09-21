import React, {Component} from "react";

class Message extends Component{
    constructor()
    {
        super();
        this.state={
            msg:"welcome visitor"
        }
    }
        changeMsg()
        {
            this.setState({
                msg:"Thank's for subscribing"
            })
        }



    render()
    {
        return(
            <div>
                <h1>{this.state.msg}</h1>
                <button onClick = {() => this.changeMsg()}>Like Me</button>
            </div>
        )
    };
};

export default Message
