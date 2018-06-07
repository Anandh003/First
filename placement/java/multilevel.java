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
	protected int b;
	two()
	{
		System.out.println("Two- class Function");
	}
	void input()
	{
		super.input();
		b=10;
	}
	
}

class three extends two
{
	private int c;
	three()
	{
		System.out.println("Class Three constructor");
	}

	void add()
	{
		c=a+b;
		System.out.println("The sum is "+c);
	}
}
class multilevel
{
	public static void main(String arg[])
	{
		int a,b;

		Scanner scan=new Scanner(System.in);
		three obj=new three();
		//System.out.println("Enter the a and b:");
		obj.input();
		obj.add();
	}
}