import React from "react";
import ExpenseForm from "./ExpenseForm";
import './NewExpense.css';



const NewExpense = (props) => {

    const CreateNewExpense = (newExpense) => 
    {
        const expenseData = 
        {
            ...newExpense,
            id : Math.random().toString()
        };
        props.onAddExpense(expenseData);
    }
    
    return <div className="new-expense">
        <ExpenseForm onSubmitExpense={CreateNewExpense}/>
    </div>
}

export default NewExpense