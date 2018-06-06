import java.util.Scanner;
class task4
{
	public static void main(String arg[])
	{
		int l,d;
		Scanner scan=new Scanner(System.in);
		l=scan.nextInt();
		d=scan.nextInt();
		for(int i=1;i*2<=l;i++)
		{
			for(int j=1;j<=i;j++)
				System.out.print((i-1+j)*d+" ");
			System.out.println();
		}
	}
}