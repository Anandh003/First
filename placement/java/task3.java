import java.util.Scanner;
class task3
{
	public static void main(String arg[])
	{
		int n;
		Scanner scan=new Scanner(System.in);
		n=scan.nextInt();
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=i;j++)
				System.out.print(i+" ");
			System.out.println();
		}
	}
}