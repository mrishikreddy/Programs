const { createStore, applyMiddleware } = require('redux');  // importing create store and apply middleware from redux
const axios = require('axios');                             // importing a axios module for API calls
const thunkMiddleware = require('redux-thunk').thunk;       // importing thunk for applying third-party middle wave

const initialState = {                                      // setting the state of the application
  loading: false,
  users: [],
  error: '',
};

const FETCH_USER_REQUEST = 'FETCH_USER_REQUEST';            // Describing actions
const FETCH_USER_SUCCESS = 'FETCH_USER_SUCCESS';
const FETCH_USER_FAILURE = 'FETCH_USER_FAILURE';

const fetchUserRequest = () => ({                           // Defining action creators
  type: FETCH_USER_REQUEST,
});

const fetchUserSuccess = (users) => ({
  type: FETCH_USER_SUCCESS,
  payload: users,
});

const fetchErrorMessage = (error) => ({
  type: FETCH_USER_FAILURE,
  payload: error,
});

const reducer = (state = initialState, action) => {         // Defining reducer
  switch (action.type) {
    case FETCH_USER_REQUEST:
      return {
        ...state,                                           // Loading in the already existing state 
        loading: true,
      };
    case FETCH_USER_SUCCESS:
      return {
        loading: false,
        users: action.payload,                              // payload is the required data
        error: '',
      };
    case FETCH_USER_FAILURE:
      return {
        loading: false,
        users: [],
        error: action.payload,
      };
    default:
      return state;
  }
};

const fetchUsers = () => {                                  // Defining action creator
  return (dispatch) => {                                    // With thunk Action creator can return a function
    dispatch(fetchUserRequest());                           // calling this action to show loading
    axios                                                   // using axios for making api calls with the help of callback functions
      .get('https://jsonplaceholder.typicode.com/users')
      .then((response) => {
        // response.user is the format for user from the api according to sender JSON documnetation
        // the response is in the form of array of users
        const userIds = response.data.map((user) => user.id);
        // the response constaions extra information, it makes the output flooded, so we assign only userId's with the help of map function
        dispatch(fetchUserSuccess(userIds));
      })
      .catch((error) => {
        // error.message is the format for error from the api according to sender JSON documnetation
        dispatch(fetchErrorMessage(error.message));
      });
  };
};

const store = createStore(reducer, applyMiddleware(thunkMiddleware)); // Apply middleware

store.subscribe(() => console.log(store.getState())); // Subscribe to state changes

store.dispatch(fetchUsers()); // Dispatch the action to fetch users
