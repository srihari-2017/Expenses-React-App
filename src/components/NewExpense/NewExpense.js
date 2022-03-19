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

    const CloseForm = () =>
    {
        props.onCancel();
    }
    
    return <div className="new-expense">
        <ExpenseForm onSubmitExpense={CreateNewExpense} onCancel={CloseForm}/>
    </div>
}

export default NewExpense