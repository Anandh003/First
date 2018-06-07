import java.util.Scanner;
class one 
{
	protected int a;
	one()
	{
		System.out.println("Base class constructor");
	}
	void input()
	{
		a=30;
	System.out.println("Base class Function");

	}
}

class two extends one
{
	protected int a,c;
	two()
	{
		System.out.println("Two- class constructor");
	}
	void input()
	{
		super.input();
		a=10;
		System.out.println("Two- class Function");
	}
	void add()
	{
		c=a+super.a;
		System.out.println("The sum is "+c);
	}
	
}


class supermember
{
	public static void main(String arg[])
	{

		Scanner scan=new Scanner(System.in);
		two obj=new two();
		//System.out.println("Enter the a and b:");
		obj.input();
		obj.add();
	}
}