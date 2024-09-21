import logo from './logo.svg';
import './App.css';

/*import Welcome from './components/Welcome';
import Greet from './components/Greet';
import Message from './components/Message';
import Counter from './components/Counter';
import Destruct_fn from './components/Destruct_fn';
import Destruct_cls from './components/Destruct_cls';
import FunctionClick from './components/FunctionClick';
import ClassClick from './components/ClassClick';
import EventBinding from './components/EventBinding';
import ParentComponent from './components/ParentComponent';
import UserGreetings from './components/UserGreetings';
import ListRendering from './components/ListRendering';
import PersonList from './components/PersonList';
import StyleSheets from './components/StyleSheets';
import Inline from './components/Inline';
import './appStyles.css';                               // the import syntax is different for .css files in src
import styles from './appStyles.modules.css';           // the import syntax is different for modules.css in src
import Form from './components/Form'
import LifeCycleA from './components/LifeCycleA'
import Fragment from './components/Fragment'
import ParentComp from './components/ParentComp';
import ParentMemo from './components/ParentMemo';
import Refs from './components/Refs'
import ParentInput from './components/ParentInput'
import FRParent from './components/FRParent';
import Portals from './components/Portals';
import Hero from './components/Hero'
import ErrorBoundary from './components/ErrorBoundary';
import ClickCounter from './components/ClickCounter';
import HoverCounter from './components/HoverCounter';
import PRCounter from './components/PRCounter';
import ClickCounterTwo from './components/ClickCounterTwo';
import HoverCounterTwo from './components/HoverCounterTwo';
import UserContext,{UserProvider} from './components/UserContext'
import CompoC from './components/CompoC';
import PostList from './components/PostList';
import PostForm from './components/PostForm';
import HookCounter from './components/HookCounter';
import HookCounterTwo from './components/HookCounterTwo';
import HookCounterThree from './components/HookCounterThree';
import HookCounterFour from './components/HookCounterFour'
import HookUseEffect from './components/HookUseEffect';
import ClassCounterOne from './components/ClassCounterOne';
import UseEffectConditionalRendering from './components/UseEffectConditionalRendering';
import HookMouse from './components/HookMouse';
import ClassMouse from './components/ClassMouse';
import MouseContainer from './components/MouseContainer';
import IntervalClassCounter from './components/IntervalClassCounter';
import IntervalHookCounter from './components/IntervalHookCounter';
import DataFetching from './components/DataFetching';
import DataFetchingTwo from './components/DataFetchingTwo';
import DataFetchingThree from './components/DataFetchingThree';

|import React from 'react';     //this line is used to import react for creating context 
|import CompoAA from './components/CompoAA'    //import parent element 
|export const UserContext = React.createContext()   // creating a context, Note Context always follows pascal casing i.e. first letter should always capital
|export const ChannelContext = React.createContext() // craeting a context                             so ensure first letter is capitial while creating context, 
import CompoUseReducer from './components/CompoUseReducer';
import CompoUseReducerTwo from './components/CompoUseReducerTwo';
import CompoUseReducerThree from './components/CompoUseReducerThree';

|import React ,{useReducer} from 'react'    // importing use Reducer
|import CompoP from './components/CompoP'   // importing components in which context should be included
|import CompoQ from './components/CompoQ'
|import CompoR from './components/CompoR'
|
|export const CountContext = React.createContext()  // creating a context
|
|const inititalState = 0                // setting initialState for useReducer
|const reducer  = (state,action) =>{    // creating a function useReducer
|    switch(action)                      
|    {
|        case 'increment':
|            return state+1
|        case 'decrement':
|            return state-1
|        case 'reset':
|            return inititalState
|        default:
|            return state
|    }
|}

import DFone from './components/DFone';
import DFTwo from './components/DFTwo';
import ParentuseCallback from './components/ParentuseCallback';
import CompoUseMemo from './components/CompoUseMemo';
import CompoUseRefHook from './components/CompoUseRefHook';
import UseRefHook from './components/UseRefHook';
import UseRefHookTwo from './components/UseRefHookTwo';
import DocTitleOne from './components/DocTitleOne';
import CounterCustom from './components/CounterCustom';
import UserFormCustom from './components/UserFormCustom';
import DemoUseState from './components/DemoUseState';
import ObjectUseState from './components/ObjectUseState';
import ArrayUseState from './components/ArrayUseState';
import ParentRendering from './components/ParentRendering';
import ParentOne from './components/ParentOne.js';
import ChildOne from './components/ChildOne.js';
import ParentRenderTwo from './components/ParentRenderTwo';
import ParentOpt from './components/ParentOpt';
import ParentRendrCntxt from './components/ParentRendrCntxt'
*/


function App() {
  return(
  <div className="App">  
  
   
  {/*
    <ParentRendrCntxt/>
    <ParentOpt/>
    <ParentRenderTwo/>

    |   <ParentOne>
    |     <ChildOne/>
    |   </ParentOne>

    <ParentRendering/>
    <ArrayUseState/>
    <ObjectUseState/>
    <DemoUseState/>
    <UserFormCustom/>
    <CounterCustom/> 
    <DocTitleOne/>
    <UseRefHookTwo/>
    <UseRefHook/>
    <CompoUseRefHook/>
    <CompoUseMemo/>
    <ParentuseCallback/>
    <DFTwo/>
    <DFone/>

    |const [count,dispatch] = useReducer(reducer,inititalState)   // creating useReducer
    |return (
    | <CountContext.Provider value = {{countState: count, countDispatch: dispatch}}> //wrapping provider of context, since there are two values we will send as object in context.Provider
    |  <div className='App'>
    |  Count = {count}
    |  <CompoP/>
    |  <CompoQ/>
    |  <CompoR/>
    |  </div>
    |   </CountContext.Provider>
    |)

    <CompoUseReducerThree/>
    <CompoUseReducerTwo/>
    <CompoUseReducer/>

    | <UserContext.Provider value='Rishik'>        //wrapping the child inside provider 
    |  <ChannelContext.Provider value='Reddy'>
    |    <CompoAA/>                                //calling parent component, but the child components are called inside parent component 
    |  </ChannelContext.Provider>
    | </UserContext.Provider>

    <DataFetchingThree/>
    <DataFetchingTwo/>
    <DataFetching/>
    <IntervalClassCounter/>
    <IntervalHookCounter/>
    <MouseContainer/>
    <ClassMouse/>
    <HookMouse/>
    <UseEffectConditionalRendering/>
    <ClassCounterOne />
    <HookUseEffect/>
    <HookCounterFour/>
    <HookCounterThree/>
    <HookCounterTwo />
    <HookCounter/>
    <PostForm/>
    <PostList/>

    |  <UserProvider value={'Rishik reddy'} >         
    |  <CompoC />
    |  </UserProvider>
   

    |  <PRCounter
    |render ={(count,incrementCount)=>(
    |  <ClickCounterTwo count ={count} incrementCount={incrementCount}/>  
    |)}/>
    |<PRCounter
    |render ={(count,incrementCount)=>(
    |  <HoverCounterTwo count ={count} incrementCount={incrementCount}/>  
    |)}/>

    <ClickCounter name='Rishik'/>
    <HoverCounter/> 

     {                                  |
     <ErrorBoundary>                    |
     </div> <Hero HeroName='Batman'/>   |  // wrapping with each componnet with ErrorBoundary to handle errors separately 
      </ErrorBoundary>                  |
                                        |
      <ErrorBoundary>                   |   
      <Hero HeroName='Superman'/>       |  // this enter one block
      </ErrorBoundary>                  |
                                        |
      <ErrorBoundary>                   |
      <Hero HeroName='Joker'/>          |
      </ErrorBoundary>                  |
    }                                   |
                                       
    <Portals />
    <FRParent />
    <ParentInput />
    <Refs /> 
    <ParentMemo/>
    <ParentComp />
    <LifeCycleA />
    <Form/> 
    <Fragment />

    // {                                     
    // <h1 className='error'>Error</h1>      |  this is entire on block of topic
    // <h1 className='ss'>Success</h1>       |  comment or uncomment the entire block at once
    // }   

    <Inline />
    <StyleSheets condition='true' />
    <PersonList />
    <ListRendering />
    <UserGreetings />
    <ParentComponent />
    <EventBinding />
    <ClassClick />
    <FunctionClick/>
    <Destruct_cls name = "Tony Stark" char="IronMan" />
    <Destruct_fn name = "Tony Stark" char="IronMan" />
    <Counter/>

    |<Greet name="Rishik Reddy">
    |  <h2>welcome buddy</h2>
    |</Greet>

    |<Welcome tech="React">
    |  <h2>version 18.02</h2>
    |</Welcome>

     <Message />
  */}
    </div>
  );
}

export default App;