import java.util.Scanner;

class logic
{
int a,b;

boolean check()
{
	if(a>b)
		return true;
	else
		return false;
}


void decide(int data)
{
	switch(data)
	{
		case 1:System.out.println("one");
				break;
		case 2:System.out.println("two");
				break;
		case 3:System.out.println("three");
				break;
		case 4:System.out.println("four");
				break;
		case 5:System.out.println("five");
				break;
		case 6:System.out.println("six");
				break;
		case 7:System.out.println("seven");
				break;
		case 8:System.out.println("eight");
				break;
		case 9:System.out.println("nine");
				break;				
		default: if(data%2==1)
					System.out.println("odd");
				 else
				 	System.out.println("even");
				 break;

	}
}
}
class task2
{
	public static void main(String arg[])
	{
		Scanner scan=new Scanner(System.in);
		logic ob=new logic();
		ob.a=scan.nextInt();
		ob.b=scan.nextInt();
		if(ob.a<=0 || ob.b<=0 || ob.a>999|| ob.b>999)
		{
			System.out.println("Invalid Input");
			System.exit(0);
		}
		else if( ob.check() )
		{
				ob.a=ob.a+ob.b;
				ob.b=ob.a-ob.b;
				ob.a=ob.a-ob.b;
		}
		for(int i=ob.a; i<=ob.b; i++)
				ob.decide(i);	
	}
}