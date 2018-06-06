import java.util.Scanner;
class array
{
	public static void main(String arg[])
	{
		int n;
		Scanner scan=new Scanner(System.in);
		System.out.print("Enter the number of elements:");
		n=scan.nextInt();
		int ar[]=new int[n];
		System.out.print("Enter the array elements:");
		for(int i=0;i<n;i++)
		{
			ar[i]=scan.nextInt();
		}
		for(int i=0;i<n;i++)
		{
			System.out.print(ar[i]+"\t");
		}
		System.out.println();
	}
}