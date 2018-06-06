import java.util.Scanner;

class cal
{
	private int a,b,c;
	//    CONSTRUCTOR FUNCTION  EXECUTE AT THE TIME OF CREATING OBJECT
	/*cal()//Default constructor 
	{
		System.out.println("From constructor Executed");
	}*/
	cal(int x,int y)
	{
		a=x;
		b=y;
		System.out.println("From Parameterized constructor Executed");
	}
	cal()
	{
		a=10;
		b=20;
		System.out.println("From Default constructor Executed");
	}

	void input()
	{
		a=10;b=20;
		
	}
	int add()
	{
		return a+b;
	}

}
class cons
{
	public static void main(String arg[])
	{
		Scanner scan = new Scanner(System.in);
		//int n;
		//System.out.println("Enter the number:");
		//n=scan.nextInt();
		cal obj=new cal();
		cal obj1=new cal(50,40);

	}
	
}