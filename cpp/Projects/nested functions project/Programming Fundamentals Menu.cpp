#include <iostream>
using namespace std;

//i have declared prototypes at the start of program for functions coming after 

int task1();
int task2();
int task3();
int task4();
int task5();
int task6();
int menu();

//I have made the below thes functions  for the array programs and i will recall them in the funtion program
//case:1 function
int add(int a, int b) 
{
    return a + b;
}
//case 2: Function
int square(int n) 
{
    return n * n;
}
//case 3: fuction
void checkNumber(int n) {
    if (n > 0) {
        cout << n << " is positive." << endl;
    } else if (n < 0) {
        cout << n << " is negative." << endl;
    } else {
        cout << n << " is zero." << endl;
    }
}
//case 4: Function

float areaOfCircle(float radius) {
    float PI = 3.14159;
    return PI * radius * radius;
}
//case 5: Function

float celsiusToFahrenheit(float celsius) 
{
    return (celsius * 9 / 5) + 32;
}

//here i have made 6 different fuctions for options for each 6 tasks() function which i have called after each case :  in the tasks ()
//this fuction is for task1()
loptions()
{       char input;
			cout<<endl;
			cout<<"**********************************************************************"<<endl<<endl<<endl;
			cout<<"Press T To Go to Task Menu"<<endl;
			cout<<"Press M To go to Main Menu"<<endl;
            cout<<"Press X End Program"<<endl;
		    cout<<"**********************************************************************"<<endl;
			cout<<"Enter The Desired Aphabet to get the following Results : ";
			cin>>input;
			system("cls");
		        switch(input)
	            {
			        
			        case 'T':
                        // to call the first task() function
						cout<<task1();
	                break;
//for menu()			       
				    case 'M':
			            //calls menu() function
						menu();
			        break;
			        default:
		                cout<<"You have put wrong number or alphabet : ";
		            break;
//for ending the program
			        case 'X':
			        	//for exiting the program return o command is used 
						return 0;
			        break;
			    }
}
//this function is for task2()
loptions2()
{       char input;
            cout<<endl;
			cout<<"**********************************************************************"<<endl<<endl<<endl;
			cout<<"Press T To Go to Task Menu"<<endl;
			cout<<"Press M To go to Main Menu"<<endl;
            cout<<"Press X End Program"<<endl;
		    cout<<"**********************************************************************"<<endl;
			cout<<"Enter The Desired Aphabet to get the following Results : ";
			cin>>input;
			//systemm cls clears the screen 
			system("cls");
		        switch(input)
	            {
			        
			        case 'T':
                        //calls second task() function
						cout<<task2();
	                break;
			        case 'M':
			            //calls menu() funtion
						menu();
			        break;
			        default:
		                cout<<"You have put wrong number or alphabet : ";
		            break;
			        case 'X':
			        	//ends the program using  return 0
						return 0;
			        break;
			    }
}
//this function is for task3()
loptions3()
{       char input;
            cout<<endl;
			cout<<"**********************************************************************"<<endl<<endl<<endl;
			cout<<"Press T To Go to Task Menu"<<endl;
			cout<<"Press M To go to Main Menu"<<endl;
            cout<<"Press X End Program"<<endl;
		    cout<<"**********************************************************************"<<endl;
			cout<<"Enter The Desired Aphabet to get the following Results : ";
			cin>>input;
			system("cls");
		        switch(input)
	            {
			        
			        case 'T':
                        cout<<task3();
	                break;
			        case 'M':
			            menu();
			        break;
			        default:
		                cout<<"You have put wrong number or alphabet : ";
		            break;
			        case 'X':
			        	return 0;
			        break;
			    }
}
//this function is for task4()
loptions4()
{
	 char input;
        cout<<endl;
		cout<<"**********************************************************************"<<endl<<endl<<endl;
		cout<<"Press T To Go to Task Menu"<<endl;
		cout<<"Press M To go to Main Menu"<<endl;
        cout<<"Press X End Program"<<endl;
		cout<<"**********************************************************************"<<endl;
		cout<<"Enter The Desired Aphabet to get the following Results : ";
		cin>>input;
		system("cls");
		    switch(input)
	        {
			        
			case 'T':
                cout<<task4();
	        break;
			case 'M':
			    menu();
		    break;
			default:
		        cout<<"You have put wrong number or alphabet : ";
		    break;
			case 'X':
			    return 0;
			break;
			    }
}
//This functions is for task5()

loptions5()
{
	char input;
        cout<<endl;
		cout<<"**********************************************************************"<<endl<<endl<<endl;
		cout<<"Press T To Go to Task Menu"<<endl;
		cout<<"Press M To go to Main Menu"<<endl;
        cout<<"Press X End Program"<<endl;
		cout<<"**********************************************************************"<<endl;
		cout<<"Enter The Desired Aphabet to get the following Results : ";
		cin>>input;
		system("cls");
		    switch(input)
	        {
			        
			    case 'T':
                    cout<<task5();
	            break;
			    case 'M':
			        menu();
			    break;
			    default:
		            cout<<"You have put wrong number or alphabet : ";
		        break;
			    case 'X':
			        return 0;
			    break;
			    }

}
//this function IS For Task6()
loptions6()
{
	char input;
        cout<<endl;
		cout<<"**********************************************************************"<<endl<<endl<<endl;
		cout<<"Press T To Go to Task Menu"<<endl;
		cout<<"Press M To go to Main Menu"<<endl;
        cout<<"Press X End Program"<<endl;
		cout<<"**********************************************************************"<<endl;
		cout<<"Enter The Desired Aphabet to get the following Results : ";
		cin>>input;
		system("cls");
		    switch(input)
	        {
			        
			    case 'T':
                    cout<<task6();
	            break;
			    case 'M':
			        menu();
			    break;
			    default:
		            cout<<"You have put wrong number or alphabet : ";
		        break;
			    case 'X':
			        return 0;
			    break;
			    }

}

//here i have made a function for info which will show the information of user in every program

void info()
{
int id=16046;
char input;
string  pass,name="Ahmed";	  
	  
	    cout<<"**************************************Welcome  To My C++ LMS****************************"<<endl<<endl;
        cout<<"****************************************************************************************"<<endl;
        cout<<"Name :  "<<name<<"            ID :  "<<id<<"       "<<"    Section : DA  "<<endl<<endl;
}


//This is the function for the main menu which has all the information about the programs and i have called all the tasks() functions here

int menu()
{

system("cls");
char input='n';
int id=16046;
string  pass;
//the info() calls the student information
info();
//here are all the options
cout<<"Select The Topic You Want To Practice "<<endl<<endl;
cout<<"**********************************************************************************"<<endl<<endl;
cout<<"Press 1 for Basic Programs "<<endl;
cout<<"Press 2 for if-else "<<endl;
cout<<"Press 3 for Switch Statement "<<endl;
cout<<"Press 4 for  loop "<<endl;
cout<<"Press 5 for Arrays  "<<endl;
cout<<"Press 6 for Functions "<<endl;

//for terminating a program return 0 will be used 

cout<<"Press X for Exit "<<endl<<endl;
cout<<"**********************************************************************"<<endl<<endl<<endl;
cout<<"Enter The Desired Program :";
cin>>input;	
system("cls");

//here i have used switch and called all the tasks from task1() to task6()

switch(input)
{
    case '1':
        
		task1();
	break;
	case '2':
		
		task2();
		
	break;
	case '3':
	    task3();
	    
	break;
	case '4':
	    task4();
	    
	break;
	case '5':
	    task5();
	    
    break;
	case '6':
	    task6();
	    
	break;
	case 'X':
	    return 0;	   	
    break;
	default:
		cout<<"You have Pressed Wrong Number Or Letter!!!";
	break;
}
}


//========================================================================================================================================
//this here is task1() function and the shows basic programs
int task1()
{     int i,j;
	  char input;
	  info();
	//then we will show all the C++  profgram topics which are selectable by using the given numbers 
	    cout<<"**********************You have Selected basic Programs ************************* "<<endl<<endl<<endl;
	    cout<<"Press 1 for  Programs That Doubles The Value  "<<endl;
        cout<<"Press 2 for farenheight To celeius   "<<endl;
        cout<<"Press 3 for Calculate The Area Of Circle   "<<endl;
        cout<<"Press 4 for  Calculate Percentage   "<<endl;
        cout<<"Press 5 for addition program   "<<endl;
        cout<<"Press M To go to Main Menu"<<endl;
        cout<<"Press X End Program "<<endl;
        cout<<"Enter The Desired num OR Alphabet  : ";
        cin>>input;
	    system("cls");
	    switch (input)
		{
		case '1':
		    //we will show the information of student 
			
			info();
            
		
		    cout<<"*******************For Program That doubles The Value : **********************"<<endl<<endl<<endl;
	        cout<<"Enter A Value : ";
			cin>>i;
			cout<<endl;
            cout<<"Your Value Is Doubled :"<<i*2<<endl;
            
            loptions();
		break;
	    case '2':
	    	info();
			cout<<"************************You have Selected Farenhight To Celcius Program***************************"<<endl<<endl<<endl;
		    cout<<"Enter The Value Of Farenheight : ";
		    cin>>i;
		    cout<<endl;
		    cout<<"The Celcius IS : "<<(i-32)*5/9<<endl;
            loptions();
		    system("cls");
		case '3':
			info();
			int r;
			cout<<"***********************************You Have Selectd Area Of Circle Program*************************"<<endl<<endl<<endl;
			cout<<"Enter The Radius : ";
		    cin>>r;
		    cout<<endl;
		    cout<<"The Area Of The Circle Is : "<<3.14*r*r<<endl;
		    loptions(); 
		case '4':
	        info();
			float i,j;
			cout<<"***********************************You Have Selected Percentage Programs**************************"<<endl<<endl<<endl;
			cout<<"Enter A Value : ";
		    cin>>i;
		    cout<<endl;
		    cout<<"Enter the Total Value :";
		    cin>>j;
		    cout<<endl;
			cout<<"The percentage Of the value is : "<<i/j*100<<endl;
			loptions();
		break;
		case '5':
		    info();
			cout<<"*********************************You have Selected The addition program******************************"<<endl<<endl;
		    cout<<"Enter 1st Value : ";
    		cin>>i;
    		cout<<endl;
    		cout<<"Enter 2nd Value : ";
    		cin>>j;
			cout<<endl;
		    cout<<"Your Result is : "<<i+j<<endl<<endl;
		    loptions();
		break;
		case 'M':
			menu();
		break;
		case 'X':
			return 0;
		break;
		default :
			cout<<"You have Pressed Wrong Number Or Letter!!!";
		break;
		}
}

//this is task2() which shows the if else programs 

int task2()
{  
	int i,j;
	char input;
//basic info
	info();
//selectable options
	cout<<"*****************************   You Have Selected If-Else Programs ***************************"<<endl<<endl;
	cout<<"press 1 For checking Positive OR Negative Numbers  "<<endl;
	cout<<"Press 2 For Checking Wether Even OR Odd "<<endl;
	cout<<"Press 3 For Checking Max value "<<endl;
	cout<<"Press 4 For Checking Wether Leap Year or NOT "<<endl;
	cout<<"Press 5 For Checking Wether Eligible For Vote or NOT "<<endl;
	cout<<"Press M to Go To Main Menu "<<endl;
	cout<<"Press X To Exit The Program "<<endl;
	cout<<"*****************************************************************************************"<<endl;
	cout<<"Enter The Desired num OR Alphabet  : ";
        cin>>input;
	system("cls");
    switch(input)
    {
    	case '1':
    		info();
			cout<< "*****************************  You have selected Positive OR Negative Numbers checker  ************************"<<endl<<endl;
    		cout<<"Enter Your  Value : ";
    		cin>>i;
    		
			if(i>0)
			{
				cout<<"Your Value IS Positive !! "<<endl;
			}
			else
			{
				cout<<"Your value IS Negative !! "<<endl;
			}
		loptions2();
		break;

        case '2':
    	   info();
    	   cout<<"******************************    You Have Selected Even OR Odd Finder *************************"<<endl<<endl<<endl;
    	   cout<<"Enter Your Value : ";
    	   cin>>i;
    	   
		   if(i%2==0)
    	   {
    	   	cout<<"Your Value Is Even !!"<<endl;
    	   }
    	   else
    	   {
    	   	cout<<"Your value Is Odd  !!"<<endl;
		   }
    	loptions2();
    	
		break;
    	
		case '3':
    		info();
			cout<<"*********************************  You Have Selected Max value Finder ******************************"<<endl<<endl<<endl;
	        cout<<"Enter 1st Value : ";
    		cin>>i;
    		cout<<"Enter 2nd Value : ";
    		cin>>j;
    		if(i>=j)
    		{
    			cout<<"The First value Is Greater Or Equal to the Second !!"<<endl;
			}
    	    else 
    	    {
    	    	cout<<"The Second Value Is Greater Or Equal to The First !!"<<endl;
			}
    	    loptions2();
	    break;
	    
		case '4':
	        info();
			cout<<"******************************** You Have Selected Program That Finds Leap Year ***************************"<<endl<<endl<<endl;
	        cout<<"Enter Your Year : ";
	        cin>>i;
	        if((i%4==0 || i%100!=0 ) && (i%400==0))
	        {
	        	cout<<"Your Year Is Leap Year !! ";
			}
			else 
			{
				cout<<"Your Year Is Not Leap Year !! ";
			}
		    loptions2();
		break;
			
	    case '5':
	    	info();
			cout<<"*****************************************You Have Selected Eligible For Vote Finder **************************** "<<endl<<endl<<endl;
	        cout<<"Enter Your Age : ";
	        cin>>i;
	        if(i>=18)
	        {
	        	cout<<"You are Eligible For Voting !! "<<endl;
			}
	        else if(i<18)
	        {
	        	cout<<"You are not eligible For Voting !!"<<endl;
			}
	        else 
	        {
	        	cout<<"You are Not Born Yet !!!!"<<endl;
			}
		    loptions2();
	    break;
	    
		case 'M':
	    	menu();
		break;
		
		case 'X':
		    return 0;
		break;
	
	}
}
//this is task3() which shows the switch statment programs

task3()
{   int i,j;
	char input,o;
//basci info	
	info();
//programs options
	cout<<"********************************** You Have Selected Switch Statement Programs **********************************"<<endl<<endl<<endl;
	cout<<"press 1 For Day Of The Week  "<<endl;
	cout<<"Press 2 For Month Of the Year "<<endl;
	cout<<"Press 3 For Calculator "<<endl;
	cout<<"Press 4 For Grading System "<<endl;
	cout<<"Press 5 For Trafic Light  "<<endl;
	cout<<"Press M to Go To Main Menu "<<endl;
	cout<<"Press X To Exit The Program "<<endl;
	cout<<"*****************************************************************************************"<<endl<<endl;
	cout<<"Enter The Desired num OR Alphabet  : ";
    cin>>input;
	system("cls");
    switch(input)
    {
    	case '1':
    		info();
			cout<<"*************************************  You have Selected Day Of The Week  ***********************************************"<<endl<<endl;
    		cout<<"Enter a number from (1 to 7) : ";
    		cin>>input; 
			cout<<endl;
			switch(input)
    		{
    			case '1': cout<<" Monday "; loptions3();  break;
    			case '2': cout<<" Tuseday "; loptions3();  break;
    			case '3': cout<<" Wednesday "; loptions3();  break;
    			case '4': cout<<" Thursday "; loptions3();  break;
    			case '5': cout<<" Friday "; loptions3();  break;
    			case '6': cout<<" Saturday "; loptions3();  break;
    			case '7': cout<<" Sunday "; loptions3();  break;
    			default : cout<<" Wrong Number !!!"; loptions3();  break;	
    		    cout<<endl;
		    }
		loptions3();    
		break;	
    	case '2':
    		info();
			cout<<"**********************************************  You have Selected Month Of The Year *******************************"<<endl<<endl;
    		cout<<" Enter A Number From (1 TO 12) : ";
    		cin>>i;
    		cout<<endl;
    		switch(i)
    		{
    			case 1 : cout<<" January ";  break;
    			case 2 : cout<<" februury ";  break;
    			case 3 : cout<<" March ";  break;
    			case 4 : cout<<" April ";  break;
    			case 5 : cout<<" May ";  break;
    			case 6 : cout<<" June ";  break;
    			case 7 : cout<<" July ";  break;
    			case 8 : cout<<" August ";  break;
    			case 9 : cout<<" September ";  break;
    			case 10 : cout<<" October ";  break;
    			case 11 : cout<<" November ";  break;
    			case 12 : cout<<" December ";  break;
				default : cout<<" Wrong Input !!!! ";  break;
			    cout<<endl;
			}
        loptions3();
		break;	
    	case '3':
    		info();
			cout<<"***********************************************You Have Selected Simple Calculator *************************************** "<<endl<<endl;
    		cout<<" Enter 1st Number : ";
    		cin>>i;
    		cout<<endl;
    		cout<<" Enter 2nd Number : ";
    		cin>>j;
    		cout<<endl;
    		cout<<" Select The Operator You Want To Use (+,-,/,*) : ";
    		cin>>o;
    		switch(o)
    		{
    			case '+': cout<<i+j; break;
    			case '-': cout<<i-j; break;
    			case '*': cout<<i*j; break;
    			case '/': cout<<i/j; break;
    			default: cout<<" Wrong Input !!!"; break;
			    cout<<endl;
			}
		loptions3();
		break;	
    	case '4':
    		info();
			cout<<"************************************************* You Have Selected  Grading System  ******************************************"<<endl<<endl;
    	    cout<<"Enter Your Grade (A,B,C,D,F) : ";
    	    cin>>input;
    	    switch (input)
    	    {
    	    	case 'A': cout<<" Excellect !!"; break;
    	    	case 'B': cout<<" Good !!"; break;
    	    	case 'C': cout<<" Average !!"; break;
    	    	case 'D': cout<<" Below Average !!"; break;
    	    	case 'F': cout<<" Fail !!"; break;
    	    	default: cout<<" Wrong Input !!! "; break;
			    cout<<endl;
			}
		loptions3();	
		break;	
		case '5':
			info();
			cout<<"************************************************  You Have Selected Traffic Light **********************************************"<<endl<<endl;;
	        cout<<"Enter a traffic Light Colour (R,G,Y) : ";
	        cin>>input;
	        switch(input)
	        {
	        	case'R': cout<<" Stop!!! "; break;
	        	case'Y': cout<<" Ready!!! "; break;
	        	case'G': cout<<" Go!!! "; break;
	        	default: cout<<"Wrong Colour Input !!!"; break;
			cout<<endl;
			
			}
		loptions3();
		break;	
//for calling menu()	 
	    case 'M':
	    	menu();
	    break;
//for ending the program
	    case 'X':
	    	return 0;
	    break;
	    default:
	    	cout<<"Wrong Input !!";
	    break;
	}
	
	
}

//this is task4() which shows the loops programs
task4()
{       int n,sum,factorial=1;
        char input;
		info();
		cout<<"********************************You Have Selected Loops ***************************"<<endl<<endl<<endl;
        cout<<"Press 1 For printing Numbers To N "<<endl;
        cout<<"Press 2 For Sum Of The Numbers To N "<<endl;
        cout<<"Press 3 For Factorial Of The Numbers To N "<<endl;
        cout<<"Press 4 For Multiplication Table Of N "<<endl;
        cout<<"Press 5 For Star Pattern "<<endl;
        cout<<"Press M  To Go Back To Min Menu "<<endl;
        cout<<"Press X To Exit The Program "<<endl;
        cout<<"*****************************************************************************************"<<endl<<endl;
	    cout<<"Enter The Desired num OR Alphabet  : ";
        cin>>input;
	    system("cls");
	    switch(input)
	    {
	        case '1':
	    		info();
				cout<<"*****************************************You Have SelectedPrintng Numbers To N**************************************"<<endl<<endl;
	    		cout<<"Enter Your Value : ";
	    		cin>>n;
				cout<<endl;
	    		for(int i=1;i<=n;i++)
	    		{
	    			cout<<i<<endl;
				}
			loptions4();
			break;	
		    case '2':
		    	info();
				cout<<"******************************************* You Havve Selected Sum of Numbers To N ****************************************"<<endl<<endl;
		    	cout<<"Enter Your Value : ";
		    	cin>>n;
		    	cout<<endl;
		    	for(int i=1;i<=n;i++)
		    	{
		    		sum+=i;
		    	}
		    	    cout<<"The Total Sum IS : ";
					cout<<sum;
		    loptions4();
			break;	    
		    case '3':
			    info();
				cout<<"******************************************** You Have Selected Factorials Of numbers To N **************************************"<<endl<<endl;
				cout<<"Enter Your Value : ";
				cin>>n;
				cout<<endl;	
				for(int i=1;i<=n;i++)
				{    
					factorial*=i;
				} 
		            cout<<"Your Factorial Is :"<<factorial;
		    loptions4();
			break;        
		    case '4':
			    info();
				cout<<"************************************************You Have Selected Multiplication Table Of N **************************************"<<endl<<endl;    
				cout<<"Enter Your Number :";
				cin>>n;
				for(int i=1;i<=10;i++)
				{
					cout<<n<<"x"<<i<<"="<<i*n<<endl;
				}
			loptions4();
			break;	
			case '5':
			    info();
				cout<<"************************************************* You Have Selected Star Pattern ******************************************"<<endl<<endl;	
		        cout<<"Enter Your Number :";
		        cin>>n;
		        cout<<endl;
		        for(int i=1;i<=n;i++)
		        {
		        	for(int j=1;j<=i;j++)
		        	{
		        		cout<<"*";
					}
					    cout<<endl;
				}
			loptions4();
			break;	
		    case 'M':
		    	menu();
		    break;
			case 'X':
			    return 0;
			break;
			default:
			    cout<<"Wrong Input !!!";
			break;			
		}
}
//this is  task5() which shows the ararys programs

task5()
{     
	char input;
	int n,arr[n],sum,largest;
	float avg;
//basic info()		
		info();
//selectable options
		cout<<"******************************************    You have Selected Arrays  *************************************************"<<endl<<endl;
		cout<<"Press 1 For sum of elements in Array "<<endl;
        cout<<"Press 2 For making an array "<<endl;
        cout<<"Press 3 For Largest Element Of Array "<<endl;
        cout<<"Press 4 For Average Of An Array "<<endl;
        cout<<"Press 5 For Printing Even Numbers "<<endl;
        cout<<"Press M  To Go Back To Min Menu "<<endl;
        cout<<"Press X To Exit The Program "<<endl;
        cout<<"*****************************************************************************************"<<endl<<endl;
	    cout<<"Enter The Desired num OR Alphabet  : ";
        cin>>input;
	    system("cls");
	    switch(input)
	    {
	    	case '1':
	    		info();
				cout<<"**************************************You Have Selected Sum Of Elements In Array**********************************"<<endl<<endl;
	    		cout<<"Enter size of Arrays : ";
	    		cin>>n;
	    		for(int i=1;i<=n;i++)
	    		{
	    			cin>>arr[i];
	    		    sum+=arr[i];
				}
	    		cout<<"The Sum Of "<<arr[n]<<" is "<<sum;
	    		loptions5();
	    	break;
			case '2':
			    info();
			    cout<<"************************************** * You have Selected making an array *************************************** "<<endl<<endl;
			    cout<<"Enter size of Arrays : ";
	    	    cin>>n;
	    	    for(int i=1;i<=n;i++)
			    {
			        cout<<"Enter Array Values"<<i<<" :";
				    cin>>arr[i];
				}
				    cout<<"Your Array Is :"<<endl;
				for(int i=1;i<=n;i++)
				{
				    cout<<arr[i]<<endl;	
				}	
		        
		        loptions5();
			break;
			case '3':
			    info();
			    cout<<"**************************************** You Have Selected Largest element of Array *************************************"<<endl<<endl;   
				cout<<"Enter The size of array :";
				cin>>n;
                largest = arr[0];
				for(int i=1;i<=n;i++)
				{
				    cout<<"Enter Array Values"<<i<<" :";
				    cin>>arr[i];
			        if( largest < arr[i] ) 
                    largest = arr[i];
				}	
		        cout<<"Largest element of array is :"<<largest;
			    loptions5();
			break;
			case '4':
			    info();
				
				cout<<"**************************************** You have Selected Average Of Arrays *********************************************"<<endl<<endl;
				cout<<"Enter The Elemnts Of Array :";
				cin>>n;
				for(int i=1;i<=n;i++)
				{
				    cout<<"Enter Elements "<<i<<":";
					cin>>arr[i];     	
			        sum+=arr[i];
				}
			    avg=sum/n;
				cout<<"Your Average Is :"<<avg;
                loptions5();
            break;
			case '5':
			    info();
				cout<<"*******************************************  You Have Selected Print Even Numbers From Arrays *************************************"<<endl<<endl;
				cout<<"Enter size of Array : ";
	    	    cin>>n;
	    	    for(int i=1;i<=n;i++)
			    {
			        cin>>arr[i];
				}
				cout << "Even numbers from the array are:"; 
				for(int i=1 ; i<n ; i++) 
				{ 
				if(arr[i] % 2 == 0) 
				{ 
				cout << arr[i] << " ";
			    }
			    }
			    loptions5();
			break;
//for calling menu function
			case 'M':
			    menu();
			break;
//for ending a program
			case 'X':
			    return 0;
			break;
			default :
			    cout<<"Wrong Input !!!";
			break;			    
		}
}
//this is task6() which will show the function programs
task6()
{   
char input;
//bsic info()
	    info();
//selectable Options
	    cout<<"********************************You Have Selected Functions***************************"<<endl<<endl<<endl;
        cout<<"Press 1 For adding two integers  "<<endl;
        cout<<"Press 2 For Finding Square  "<<endl;
        cout<<"Press 3 For Check if a Number is Positive, Negative, or Zero "<<endl;
        cout<<"Press 4 For  Area Of Circle "<<endl;
        cout<<"Press 5 For celcius TO Fahrenheit "<<endl;
        cout<<"Press M  To Go Back To Min Menu "<<endl;
        cout<<"Press X To Exit The Program "<<endl;
        cout<<"*****************************************************************************************"<<endl<<endl;
	    cout<<"Enter The Desired num OR Alphabet  : ";
        cin>>input;
//for clearing screen	    
		system("cls");

 
//i have created fnctions on top and called them here in functions programs
// i have build all the logic in the functions and got values from users here  w 
    switch (input) 
	{
        case '1':
            info();
			cout << "*****************************************You Have Selected Adding Two Integers *****************************************" << endl << endl;
            int a, b;
            cout << "Enter Two Numbers : ";
            cin >> a >> b;
            cout << "Sum Is: " << add(a, b) << endl;
            loptions6();
			break;
        case '2':
            info();
			cout << "****************************************** You Have Selected Finding Square *******************************************" << endl << endl;
            int number;
            cout << "Enter a number: ";
            cin >> number;
            cout << "Square of " << number << " is " << square(number) << endl;
            loptions6();
			break;
        case '3':
            info();
			cout << "*************************************** Check if a Number is Positive, Negative, or Zero ***********************************************************" << endl << endl;
            cout << "Enter a number: ";
            cin >> number;
            checkNumber(number);
            loptions6();
			break;
        case '4':
            info();
			cout << "*********************************************** You Have Selected Area Of Circle *********************************************" << endl << endl;
            float radius;
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            cout << "Area of the circle is " << areaOfCircle(radius) << endl;
            loptions6();
			break;
        case '5':
            info();
			cout << "***********************************************You have Selected Celsius TO Fahrenheit ******************************************" << endl << endl;
            float celsius;
            cout << "Enter temperature in Celsius: ";
            cin >> celsius;
            cout << celsius << " Celsius is " << celsiusToFahrenheit(celsius) << " Fahrenheit." << endl;
            loptions6();
			break;
//for menu    
	    case 'M':
            menu();
            break;
//for ending the program
        case 'X':
            return 0;
        break;    
        default:
            cout << "Wrong Input !!!!!" << endl;
            break;
   }
}
//=============================================================================================================================


//this is the main function  here i have  used the login system using if else statment the main program will work after the if statment is true
main()
{ 
//first we will take the id , name  and password from user 
//and assign the value to id and password variables 
//and use the apropraiate data types 

int id=16046;
char input;
string  pass,name;

cout<<"*******************************************************Welcome  To My C++ LMS***************************************"<<endl<<endl;
cout<<"Enter Your ID : ";
cin>>id;
cout<<"Enter Your Password : ";
cin>>pass;

//we will make a condition if the id and password are correct 
//the user may login if not then try again

if(pass=="#Ahmed123"  &&  id==16046)
{

//for clearing the 1st page will use system(cls) command 
  
   system("cls");
//for basic info()
   info();
//for menu() function   
   menu();

}
else
{
    cout<<"You have Put wrong ID or Password Try again !!!!"<<endl<<endl<<endl;
    cout<<"***********Press ""y"" to Try Again************";
	cin>>input;
	switch(input)
    {
    case 'y':
        system("cls");
		main();
    break;
    default:
    	cout<<"Wrong Alphabet !!! ";
    break;
	}
    
}
}
