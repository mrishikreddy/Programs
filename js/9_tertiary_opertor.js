const readline = require('readline');
const rl = readline.createInterface({
    input:process.stdin,
    output:process.stdout
});

rl.question("give rating:", (r) =>
{
   switch(r)
   {
    case '1': console.log("worst");break;
    case '2': console.log("bad");break;
    case '3': console.log("ok");break;
    case '4': console.log("good");break;
    case '5': console.log("excellent");break;
    default: console.log("Invalid rating is given");
   }
   rl.close()
});

