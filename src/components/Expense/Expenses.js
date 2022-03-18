import React, {useState} from 'react';
import Card from "../UI/Card";
import ExpenseFilter from './ExpenseFilter';
import "./Expenses.css"
import ExpensesList from './ExpensesList';


const Expenses = (props) =>
{
  const[selectedYear, setSelectedYear] = useState('2021');
  let filteredExpenses = props.expenses.filter(x => x.date.getFullYear().toString() === selectedYear);
  const SelectExpenseHandler = (year) =>
  {
    setSelectedYear(year);
  }
  

  return (
    <div>
      <Card className="expenses">
      <ExpenseFilter selected={selectedYear} onSelectExpense={SelectExpenseHandler}/>
      <ExpensesList expenses={filteredExpenses} />
    </Card>
    </div>
  );
}

export default Expenses;
