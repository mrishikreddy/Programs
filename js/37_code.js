let url = "https://cat-fact.herokuapp.com/facts";
let factp = document.querySelector("#para");
let but = document.querySelector("#but");

var getfacts = async ()=>
{
    console.log("getting data....");
    let response = await fetch(url);
    let data = await response.json();
    console.log(data);
    factp.innerText = data[2].text
}

but.addEventListener("click",getfacts);
