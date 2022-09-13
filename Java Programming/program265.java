//Student database

import java.lang.*;
import java.util.*;

//Database table/Schema
class Student
{
	public int RID;
	public String Name;
	public int Salary;
	
	//For auto generating the RID nos for every record.
	private static int Generator;	
	static
	{
		Generator = 0;
	}
	
	public Student(String str, int value)
	{
		this.RID = ++Generator;
		this.Name = str;
		this.Salary = value;
	}
	
	public void DisplayData()
	{
		System.out.println(this.RID + "\t" + this.Name + "\t" + this.Salary);
	}
}

class DBMS
{
	public LinkedList<Student> lobj;

	public DBMS()
	{
		lobj = new LinkedList<>();
	}
	
	//Insert into student Sagar 1600
	//select * from student
	public void StartDBMS()
	{
		Scanner scanobj = new Scanner(System.in);
		
		System.out.println();
		System.out.println("Customized DBMS started successfully....");
		System.out.println("Enter 'Help' for more details.");
		System.out.println();
		
		//logic to accept querries
		String Query = "";
		while(true)
		{
			System.out.print("DBMS console >");
			Query = scanobj.nextLine();
			
			String tokens[] = (Query.toLowerCase()).split(" ");
			int QuerySize = tokens.length;
			
			if(QuerySize == 1)
			{
				if("help".equals(tokens[0]))
				{
					System.out.println();
					System.out.println("This application is used to demonstrate Database Management System - DBMS");
					System.out.println();
					System.out.println("Below querries are available in this DBMS:");
					System.out.println("Display all data 		: select * from Student");
					System.out.println("Insert data 			: Insert into Student Name Salary");
					System.out.println("Display Specific Record by RID	: Select * From Student Where RID = Number");
					System.out.println("Display Specific Record by Name	: Select * From Student Where Name = Student_Name");
					System.out.println("Delete Specific Record by RID	: Delete From Student Where RID = = Number");
					System.out.println("Delete Specific Record by Name	: Delete From Student Where Name = Student_Name");
					System.out.println("Sum of Salaries 		: Select Sum(Salary) From Student");
					System.out.println("Maximum of Salaries 		: Select Max(Salary) From Student");
					System.out.println("Minimum of Salaries 		: Select Min(Salary) From Student");
					System.out.println("Number of Records		: Select Count(Salary) From Student");
					System.out.println("Terminate DBMS 			: Exit");
					//convert query into lower case.
				}
				else if("exit".equals(tokens[0]))
				{
					System.out.println("Thank you for using customized DBMS application");
					break;
				}
			}
			else if(QuerySize == 2)
			{
				
			}
			
			//select * from student
			else if(QuerySize == 4)
			{
				if("select".equals(tokens[0]))
				{
					if("*".equals(tokens[1]))
					{
						DisplayAll();
					}
					else if("sum(salary)".equals(tokens[1]))
					{
						AggregateSum();
					}
					else if("max(salary)".equals(tokens[1]))
					{
						AggregateMax();
					}
					else if("min(salary)".equals(tokens[1]))
					{
						AggregateMin();
					}
					else if("avg(salary)".equals(tokens[1]))
					{
						AggregateAvg();
					}
					else if("count(salary)".equals(tokens[1]))
					{
						AggregateCount();
					}
				}					
			}
			
			//Insert into student Sagar 1600
			else if(QuerySize == 5)
			{
				if("insert".equals(tokens[0]))
				{
					InsertData(tokens[3], Integer.parseInt(tokens[4]));
				}
			}
			
			//Select * From Student Where RID = 1.
			else if(QuerySize == 8)
			{
				if("rid".equals(tokens[5]))
				{
					DisplaySpecific(Integer.parseInt(tokens[7]));
				}
				//Select * From Student Where Name = Student_Name.
				else if("name".equals(tokens[5]))
				{
					DisplaySpecific(tokens[7]);
				}
			}
			
			//Delete From Student Where RID = 1.
			else if(QuerySize == 7)
			{
				if("rid".equals(tokens[4]))
				{
					DeleteSpecific(Integer.parseInt(tokens[6]));
				}
				//Delete From Student Where Name = Student_Name.
				else if("name".equals(tokens[4]))
				{
					DeleteSpecific(tokens[6]);
				}
			}
		}
		
	}
	
	//To Insert / add data in Database
	public void InsertData(String str, int value)
	{
		Student sobj = new Student(str,value);
		lobj.add(sobj);
		System.out.println("Data inserted successfully.");
	}
	
	//Diplay all records in the Database
	public void DisplayAll()
	{
		for(Student sref:lobj)
		{
			sref.DisplayData();
		}
	}
	
	//Display specific record by RID
	//Select * From Student Where RID = 1.
	public void DisplaySpecific(int rid)
	{
		for(Student sref:lobj)
		{
			if(sref.RID == rid)
			{
				sref.DisplayData();
				break;
			}
		}
	}
	
	//Display specific record by name
	public void DisplaySpecific(String str)
	{
		for(Student sref:lobj)
		{
			if(str.equals(sref.Name))
			{
				sref.DisplayData();
				//break; //Not req as multiple names can be same.
			}
		}
	}
	
	//Delete specific record by RID
	public void DeleteSpecific(int rid)
	{
		int index = 0;
		
		for(Student sref:lobj)
		{
			if(sref.RID == rid)
			{
				lobj.remove(index);
				System.out.println("Data deleted successfully.");
				break;
			}
			index++;
		}
	}
	
	//Delete specific record by name
	public void DeleteSpecific(String str)
	{
		int index = 0;
		
		for(Student sref:lobj)
		{
			if(str.equals(sref.Name))
			{
				lobj.remove(index);
				System.out.println("Data deleted successfully.");
				break;
			}
			index++;
		}
	}
	
	public void AggregateMax()
	{
		int iMax = 0;
		Student temp = null; //Reference variable of student class, used to access and display the student class chararacteristics.
		
		for(Student sref:lobj)
		{
			if(sref.Salary > iMax)
			{
				iMax = sref.Salary;
				temp = sref;
			}
		}
		System.out.println("Information of student having Maximum salary: ");
		temp.DisplayData();
	}
	
	public void AggregateMin()
	{
		int iMin = (lobj.getFirst()).Salary;
		Student temp = lobj.getFirst();
		
		for(Student sref:lobj)
		{
			if(sref.Salary < iMin)
			{
				iMin = sref.Salary;
				temp = sref;
			}
		}
		System.out.println("Information of student having Minimum salary: ");
		temp.DisplayData();
	}
	
	public void AggregateSum()
	{
		long iSum = 0;
		Student temp = lobj.getFirst();
		
		for(Student sref:lobj)
		{
			iSum = iSum + sref.Salary;
		}
		System.out.println("Summanation of salaries is: " + iSum);
	}
	
	public void AggregateAvg()
	{
		long iSum = 0;
		Student temp = lobj.getFirst();
		
		for(Student sref:lobj)
		{
			iSum = iSum + sref.Salary;
		}
		System.out.println("Average salary is: " + iSum/(lobj.size()));
	}
	
	public void AggregateCount()
	{
		System.out.println("Count is: " + lobj.size());
	}

}

class program265
{
	public static void main(String arg[])
	{
		DBMS dobj = new DBMS();
		dobj.StartDBMS();
	/*	
		dobj.InsertData("Sagar", 1600);
		dobj.InsertData("Ram", 2000);
		dobj.InsertData("Om", 3000);
		dobj.InsertData("Ali", 1200);
		dobj.InsertData("Ira", 1700);
		
		dobj.DisplayAll();
		dobj.AggregateMax();
		dobj.AggregateMin();
		dobj.AggregateSum();
		dobj.AggregateAvg();
		dobj.AggregateCount();
	*/
	}
}