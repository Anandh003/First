import java.util.Scanner;
class oddreven
{
	public static void main(String arg[])
	{
		Scanner scan=new Scanner(System.in);
		int n,count=0;
		System.out.print("Enter the number of elements:");
		n=scan.nextInt();
		int ar[]=new int[n];
		System.out.print("Enter the elements:");
		for(int i=0;i<n;i++)
			ar[i]=scan.nextInt();
		System.out.print("The Odd elements are :");
		for(int i=0;i<n;i++)
			if(ar[i]%2!=0)
			{
				System.out.print("\t"+ar[i]);
				count++;
			}
		System.out.println("\nThe Number of Odd element :"+count);
		count=0;
		System.out.print("The Even elements are :");
		for(int i=0;i<n;i++)
			if(ar[i]%2==0)
			{
				System.out.print("\t"+ar[i]);
				count++;
			}
			System.out.println("\nThe Number of Even element :"+count);


	}
}