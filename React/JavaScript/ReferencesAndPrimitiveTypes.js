const person = { 
  name: 'Sri'
};

const secondPerson = {
  ...person
};

person.name = 'Hari';

console.log(secondPerson)