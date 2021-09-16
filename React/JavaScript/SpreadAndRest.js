const numbers = [1, 2, 3]

const nums = [numbers, 4]

const newNumbers = [...numbers, 4]

console.log(nums);
console.log(newNumbers)

const person = { name: 'Srihari' };

const newPerson =  {
  ...person,
  age: 28
}

console.log(newPerson)

const filter = (...args) => {
  return args.filter(el => el === 2);
}

console.log(filter(1, 2, 3));
