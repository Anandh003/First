import java.util.Scanner;
class one 
{
	protected int a,b;
	one()
	{
		System.out.println("Base class constructor");
	}
	void input(int x,int y)
	{
		a=x;
		b=y;
	}
}

class two extends one
{
	int c;
	two()
	{
		System.out.println("Derived class constructor");
	}
	void add()
	{
		c=a+b;
		System.out.println("The sum is "+c);
	}
}

class inhert
{
	public static void main(String arg[])
	{
		int a,b;
		Scanner scan=new Scanner(System.in);
		two obj=new two();
		System.out.println("Enter the a and b:");
		a=scan.nextInt();
		b=scan.nextInt();
		obj.input(a,b);
		obj.add();
	}
}