#include <iostream>
using namespace std;
#include <stdlib.h>
#include <ctype.h>

void printMeFirst(string name, string courseInfo);
void SecondsToHours ();
void FahrenheitToCelsius ();
void CelsiusToFahrenheit ();

int main() {
	
	/* Print my info first*/
	printMeFirst("Arhum Shahid","Lab1: CS-116 - Conversion");
	
	cout << "Choose a selection below: \n"
	"1 - Seconds to hours, mins and seconds \n"
	"2 - Fahrenheit to Celsius \n"
	"3 - Celcius to Fahrenheit \n"
	"4 - Quit"
	
	<< endl ;
	
	int j = 0;
    do {
        cin >> j ;
        cout << "The value that you input: " <<  j << endl;
        
        if (j == 1){
        	
        	/* Going to call function to convert seconds to hours and seconds*/
        	SecondsToHours ();
        	break;
        	
        } else if (j == 2) {
        	
        	/* Call function to convert to Celsius*/
        	FahrenheitToCelsius ();
        	break;
        	
        } else {
        	
        	/* Call function to convert to Fahrenheit*/
        	CelsiusToFahrenheit ();
        	break;
        	
        } 
        
        
    } while (j != 4);
    
    /* Quiting the program*/
    cout << "Quitting the program, bye" << endl;
}


/* All Function definitions below*/

void printMeFirst(string name, string courseInfo)
{
cout <<" Program written by: "<< name << endl; // put your name here
cout <<" Course info: "<< courseInfo << endl;
time_t now = time(0); // current date/time based on current system
char* dt = ctime(&now); // convert now to string for
 cout << " Date: " << dt << endl;
}

void SecondsToHours ()
{
	int sec, h, m, s;
	
	cout << "Enter the number of seconds:";
	cin >> sec ;
	
	cout << "The number of seconds: " << sec << endl;
	
	/* Convert seconds to hour, min and seconds */
	h = (sec/3600);
	m = (sec -(3600*h))/60;
	s = (sec -(3600*h)-(m*60));
	
	printf("H:M:S - %d:%d:%d\n",h,m,s);
	
}


void FahrenheitToCelsius ()
{
	float celsius;                         
    float fahrenheit;
    cout << "Enter the temp to convert:" << endl;
	cin >> celsius ;
	
	
	cout << "I am going to convert " << celsius << " to Fahrenheit" << endl;

    fahrenheit = (celsius - 32) * 5 / 9;
    cout << "Fahrenheit = " << fahrenheit << endl;
                         
}


void CelsiusToFahrenheit ()
{
	float celsius;                         
    float fahrenheit;
    cout << "Enter the temp to convert:" << endl;
	cin >> fahrenheit ;
	cout << "I am going to convert " << fahrenheit << " to Celsius" << endl;

    celsius = ((fahrenheit * 9) / 5) + 32;
    cout << "Celsius = " << celsius << endl;
                         
}