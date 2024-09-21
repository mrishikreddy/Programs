import React from 'react'

function Hero({HeroName}) {
    if(HeroName==='Joker')
    {
        throw new Error('Not a  Hero');   // to throw a new error
    }
  return (
    <div>{HeroName}</div>
  )
}

export default Hero