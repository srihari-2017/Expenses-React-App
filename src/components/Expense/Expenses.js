import React, {useState} from 'react';
import ExpenseItem from "./ExpenseItem";
import Card from "../UI/Card";
import ExpenseFilter from './ExpenseFilter';
import "./Expenses.css"


const Expenses = (props) =>
{
  const[selectedYear, setSelectedYear] = useState('2021');
  const SelectExpenseHandler = (year) =>
  {
    setSelectedYear(year);
  }
  return (
    <div>
      <Card className="expenses">
      <ExpenseFilter selected={selectedYear} onSelectExpense={SelectExpenseHandler}/>
      {
        props.expenses.map((expense) =>
          <ExpenseItem
            title={expense.title}
            amount={expense.amount}
            date={expense.date}
          />
        )
      }
    </Card>
    </div>
  );
}

export default Expenses;
