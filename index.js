//this is just fun project, doing this for my mental health I guess wow
let input = document.getElementById("result");

const expressions = ["+", "-", "*", "/"];

var first = Math.round(Math.random() * 10);
var second = expressions[Math.round(Math.random() * 3)];
var third = Math.round(Math.random() * 10);;
var result = eval(first + second + third);

console.log(document.getElementById("result"));


console.log("hello world");
