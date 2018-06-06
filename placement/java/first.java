import java.util.Scanner;

class cal
{
	private int a,b,c;
	//    CONSTRUCTOR FUNCTION  EXECUTE AT THE TIME OF CREATING OBJECT
	cal()
	{
		System.out.println("From constructor Executed");
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
class first
{
	public static void main(String arg[])
	{
		Scanner scan = new Scanner(System.in);
		int n;
		System.out.println("Enter the number:");
		n=scan.nextInt();
		cal obj[]=new cal[n];
		for(int i=0;i<n;i++)
			obj[i]=new cal();
		for(int i=0;i<n;i++)
		{
		//obj.input();
		//System.out.print("Sum of "+obj.a+" and "+obj.b+" = "+obj.add()+"\nFor custom input\nEnter the value for a: ");
		/*System.out.print("Enter the value of a:");
		obj[i].a=scan.nextInt();
		System.out.print ("Enter the value of b:");
		obj[i].b=scan.nextInt();*/
		obj[i].input();
		System.out.println("Sum   = "+obj[i].add());
		}
	}
	
}