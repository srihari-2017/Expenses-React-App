package Problems;

import java.util.ArrayList;


public class StringMultiplication {
    private String a;
    private String b;

    public StringMultiplication(String a, String b){
        this.a = a;
        this.b = b;
    }
    
    public String GetResult(){
        ArrayList<String> temps = new ArrayList<String>();
        int bLength = b.length();
        
        for(int j = 0;j < bLength;j++)
        {
            int op2 = Integer.parseInt(b.substring(bLength-1-j,bLength-1-j+1));
            String result = multiplyByEachDigit(a,op2,j);
            temps.add(result);
        }
        String finalResult = addIntermediates(temps);
        return finalResult;

    }

    private String addIntermediates(ArrayList<String> temps) {
        String result = "";
        for(int i=0;i<temps.size();i++){
            result = GetSumOfStrings(result,temps.get(i));
        }

        return result;
    }

    private String GetSumOfStrings(String p, String q) {
        if(p == ""){
            return q;
        }
        String result = "";
        String op1 = reverseString(p);
        String op2 = reverseString(q);
        int op1Length = op1.length();
        int op2Length = op2.length();
        if(op1Length > op2Length){
            result = GetSum(op1,op2);
            result = reverseString(result);
        }
        else{
            result = GetSum(op2,op1);
            result = reverseString(result);
        }
        return result;
    }

    private String GetSum(String op1, String op2) {
        int carry = 0;
        String result = "";
        int j;
        for(j=0;j<op2.length();j++){
            int temp = Integer.parseInt(op2.substring(j, j+1));
            int temp2 = Integer.parseInt(op1.substring(j,j+1));
            int sum = temp + temp2 + carry;
            result += sum%10;
            carry = sum/10;
        }
        for(int i=j;i<op1.length();i++){
            int temp = Integer.parseInt(op1.substring(i,i+1));
            int sum = temp + carry;
            result += sum%10;
            carry = sum/10;
        }
        if(carry != 0){
            result += carry;
        }
        return result;
    }

    private String reverseString(String input) {
        StringBuilder op1 = new StringBuilder();
        op1.append(input);
        String result = op1.reverse().toString();
        return result;
    }

    private String multiplyByEachDigit(String a2, int op2, int j) {
        int aLength = a2.length();
        int carry = 0;
        String result = "";
        for(int i=0;i<aLength;i++){
            int startIndex = aLength-1-i;
            int endIndex = aLength-1-i+1;
            int op1 = Integer.parseInt(a2.substring(startIndex,endIndex));
            int temp = op1*op2;
            temp = temp + carry;
            carry = temp/10;
            result += (temp%10);
        }
        if(carry != 0){
            result += carry;
        }
        StringBuilder r = new StringBuilder();
        r.append(result);
        result = r.reverse().toString();
        while(j > 0){
            result += "0";
            j--;
        }   
        return result;
    }
}
