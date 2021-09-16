package Problems;

public class Multiplication<T>
{
    private T a;
    private T b;

    Multiplication(T a,T b)
    {
        this.a = a;
        this.b = b;
    }
    
    int GeTResult()
    {
        int result = (int)a*(int)b;
        return result;
    }
}
