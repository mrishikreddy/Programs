import React from 'react';
import { Provider } from 'react-redux';
import store from './Components/store';
import './App.css';
import CakeContainer from './Components/CakeContainer';
import HooksCakeContainer from './Components/HooksCakeContainer';
import IceCreamContainer from './Components/IceCreamContainer';
import CustomCakeContainer from './Components/CustomCakeContainer';
import ItemContainer from './Components/ItemContainer';

function App() {
  return (
    <Provider store={store}>      {/*Wrapping with provider to provide the store throughout the application */}
      <div className="App">
        <ItemContainer cake />
        <ItemContainer/>
        <CakeContainer/>
        <HooksCakeContainer/>
        <IceCreamContainer/>
        <CustomCakeContainer/>
      </div>
    </Provider>
  );
}

export default App;
