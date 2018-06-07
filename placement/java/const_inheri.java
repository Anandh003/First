import java.util.Scanner;
class one 
{
	protected int a,b,c;
	one(int x,int y,int z)
	{
		
		a=x;b=y;
		c=z;
		System.out.println("base- class constructor "+a+" "+b+" "+c);
	}
	/*void input()
	{
		a=30;
	System.out.println("Base class Function");

	}*/
}

class two extends one
{
	protected int p,q,r;
	two(int x,int y,int z,int a,int b,int c)
	{
				super(a,b,c);

		p=x;q=y;r=z;
		System.out.println("Two- class constructor "+p+" "+q+" "+r);
	}
	/*void input()
	{
		super.input();
		b=10;
	}*/
	
}

/*class three extends two
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
}*/
class const_inheri
{
	public static void main(String arg[])
	{
		int a,b;

		Scanner scan=new Scanner(System.in);
		two obj=new two(1,5,7,9,11,13);
		//System.out.println("Enter the a and b:");
		//obj.input();
		//obj.add();
	}
}