// Normal function

function PrintMyName(name){
    console.log(name);
  }
  
  PrintMyName("Srihari");

// Arrow functions

// simple function

const PrintMyName = () => {
    console.log("Srihari");
  }
  
  PrintMyName();

// one argument function

const PrintMyName = (name) => {
    console.log(name);
  }
  
  PrintMyName("Srihari");

//   valid for only one parameter function

const PrintMyName = name => {
    console.log(name);
  }

  PrintMyName("Srihari");

// with return type

const multiply = (op1) =>  op1 * 2 

console.log(multiply(5));
  
 
// two arguments function
  const PrintMyName = (name, age) => {
    console.log(name, age);
  }
  
  PrintMyName("Srihari", 26);

//   function with return values

const multiply = (op1, op2) => {
    return op1 * op2;
  }
  
  console.log(multiply(5,4));

// another way 

const multiply = (op1, op2) =>  op1 * op2 

console.log(multiply(5,4));