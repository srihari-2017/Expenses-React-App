import React, { useState } from 'react'
import './ExpenseForm.css'

const ExpenseForm = (props) => {

    const[enteredTitle,setEnteredTitle] = useState('');
    const titleChangeHandler = (event) => {
        setEnteredTitle(event.target.value);
    }

    const[enteredAmount,setEnteredAmount] = useState('');
    const amountChangeHandler = (event) => {
        setEnteredAmount(event.target.value);
    }

    const[enteredDate,setEnteredDate] = useState('');
    const dateChangeHandler = (event) => {
        setEnteredDate(event.target.value);
    }

    const onSubmitHandler = (event) => 
    {
        event.preventDefault();
        const expenseData = {
            title: enteredTitle,
            amount : enteredAmount,
            date : new Date(enteredDate.toString())
        }
        props.onSubmitExpense(expenseData);
        setEnteredAmount('');
        setEnteredTitle('');
        setEnteredDate('');
    }

    const CloseForm = () => 
    {
        props.onCancel();
    }

    return (<form onSubmit={onSubmitHandler}> 
        <div className="new-expense__controls">
            <div className="new-expense__control">
                <label>Title</label>
                <input 
                type="text" 
                value={enteredTitle}
                onChange={titleChangeHandler}/>
            </div>
            <div className="new-expense__control">
                <label>Amount</label>
                <input type="number" min="0" step="0.01"
                value={enteredAmount}
                 onChange={amountChangeHandler}/>

            </div>
            <div className="new-expense__control">
                <label>Date</label>
                <input
                    type='date' 
                    min='2019-01-01'
                    max='2022-12-31' 
                 value={enteredDate}
                 onChange={dateChangeHandler}/>
            </div>
        </div>
        <div className="new-expense__actions">
            <button onClick={CloseForm}>Cancel</button>
            <button type="submit">Add Expense</button>
        </div>
    </form>
    );
};

export default ExpenseForm