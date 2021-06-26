#include <iostream>
#include <string>

using namespace std;

   char capitalize(char arr[],int n)  //for capital
{

    cout <<"ENTER THE SENTENCE WHICH YOU WANT TO CAPITAL :"<<endl;
     cin>>arr;
    for(int j=0; j<n;j++)
    {
        if(arr[j]>=97 && arr[j]<=122)
        {
            arr[j]=arr[j]-32;
        }

    }

     cout<<"SIR YOUR CAPITALL NAME IS :\n";
     cout<< arr<<endl;

}
     char small(char arr[],int n)
{

    cout <<" ENTER THE SENTENCE WHICH YOU WANT TO SMALL :"<<endl;  //for small
     cin>>arr;
    for(int j=0; j<n;j++)
    {
        if(arr[j]>=65 && arr[j]<=90)
        {
            arr[j]=arr[j]+32;
        }

    }

     cout<<"the small name is :\n";
        cout<< arr<<endl;

}
     char jumbl(char arr[],int n)          //for jumbling
{

   cout << " ENTER A SENTENCE WHICH YOU WANT TO JUMBLE. :"<<endl;           //FOR THE JUMBLE CASE
   cin>>arr;

   arr[0] = toupper(arr[0]);

   for (int j= 1; j<n; j++)
   {
        if (j%2==0)

        arr[j] = tolower(arr[j]);
             else
               arr[j] = toupper( arr[j] );
   }

   cout << "AFTER THE JUMBLING SIR  YOUR SENTENCE IS  :"<< endl;
   cout<<arr<<endl;

}
void revers(char arr[],int n)       //FUNCTION MADE for revers function
  {
    int i=0,j=0,k=0,l=0;
    char x[100]= "FAROOQ KHAN";
    char y[100]={'\0'};
    for(i=0;i<=100;i++)
    {
          if(x[i]==' ' || x[i]=='\0')
          {
            for(j=i-1;j>=l;j--)
                y[k++]=x[j];
            y[k++]=' ';
            l=i+1;
          }
    }
    cout<<"YOUR REVERS WORSD IS"<<endl;
    cout<<y<<endl;
  }
void   vovel(char str[],int i)   //MAKE FUNCTIONS
  {

  int n=0;

    cout << "ENTER THE SENTENCE.THEN I WIIL TELL HIM NUMBER OF VOWELS: : "<<endl;
    cin.getline(str,i);
   for ( int j=0; str[j]!='\0'; j++)
    {
        if (str[j] == 'a' || str[j] == 'e' || str[j] == 'i' || str[j] == 'o' || str[j] == 'u' || str[j] == 'A' || str[j] == 'E' || str[j] == 'I' || str[j] == 'O' || str[j] == 'U')
            n++;       //ADD VOWEL IN


    }
  cout<<"THE NUMBER OF VOWELS IS:\n";
  cout<<n<<endl;

}
void words(char str[],int n)
{

	cout << " SIR ENTER YOUR STRING  IN  WHICH YOU WANT TO COUNT WORDS: "<<endl;
	cin.getline(str,n);
	int words = 0;
	for(int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
        words++;    //ADD WORDS IN JUMBLE
		}
	}
cout << "SIR THE NUMBER OF WORDS IS = " << words<< endl;
}
int main()
{
    {
    char arr[10];                //CALL TO CAPITAL FUNCTION
    capitalize(arr,10);
    }
    {
    char arr[10];                   //CALL TO SMALL FUNCTION
    small (arr,10);
    }
    {
   char arr[10];                    //CALL TO JUMBLE FUNCTION
   jumbl(arr,10);
    }
    {
    char arr[10];                   //CALL TO REVERS FUNCTION
    revers(arr,100);
    }
      cin.ignore();
     {
         char str[50];            //CALL TO COUNT VOWEL IN FUNCTION
         vovel(str, 50);
     }
    {
     char str[100];              //CALL TO FUNCTION TO COUNT WORDS IN STRING
     words(str,100);
    }

    return 786;
}
