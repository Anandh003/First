
import java.util.Scanner;
class first
{
	int rollno;
	int mark[6],gpa;
	char subject[6][20];
	first(int n)
	{
		rollno=n;
	}
}
class second extends first
{
	int mark[6],gpa;
	char subject[6][20];

}
class third extends second
{
	int mark[6],gpa;
	char subject[6][20];
}
class task5
{
	public static void main()
	{
		Scanner scan=new Scanner(System.in);
		int n;
		System.out.println("Enter the number of students:");
		n=scan.nextInt();
		third ob[]=new third[n];
		for(int i=0;i<n;i++)
			ob[i]=new third(i);

	}

}