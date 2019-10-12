class Gen{
    T obj;
    Gen(T o)
	{
	    obj = o;
	}
}




public class GenericsDemo
{
    public static void main(String args[])
	{
	    Gen it = new Gen(new Integer(10));
	    int i= it.get();
	    System.out.println(i);
	}
}
