package Problems;

public class Program
{
    public static void main(String []args)
    {
        String input1 = "3141592653589793238462643383279502884197169399375105820974944592";
        String input2 = "2718281828459045235360287471352662497757247093699959574966967627";

        StringMultiplication multiplication2 = new StringMultiplication(input1, input2);
        System.out.println(multiplication2.GetResult());
    }
}