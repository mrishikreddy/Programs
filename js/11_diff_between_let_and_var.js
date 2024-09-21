function descvar()
{
    var x = 10;
    {
        var y = 20;
    }
    console.log(x);
    console.log(y);
}

descvar();

function desclet()
{
    let x = 10;
    {
        let y = 20;
    }
    console.log(x);
    console.log(y);    // you will get error for this line as y is not defined
}

desclet();