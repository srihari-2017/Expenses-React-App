import React from "react";
import "./AddExpenseButton.css";


const AddExpenseButton = (props) => {
    const ShowForm = () => 
    {
        props.onOpenForm();
    }
    return (
        <div className="new-expense">
        <div>
            <button onClick={ShowForm}>Add New Expense</button>
        </div>
        </div>
    );
}

export default AddExpenseButton;