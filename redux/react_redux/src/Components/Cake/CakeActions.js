export const buyCake = (number = 1) => {
    return {
      type: 'BUY_CAKE',
      payload : number,    // payload is the additional data that is carried by action
    };                     // we can create multiple payload it is just a variable to use it in reducer give "action.varaiblename"
  };
  