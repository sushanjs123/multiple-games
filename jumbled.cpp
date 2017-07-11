//word jumble game
//player can ask for a hint

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>


using namespace std;
string scramble(string str,int p)
{	
	int i,m,k;	
	
	for(i=1;i<p;i++){
		m = rand() % p;
			k = rand() % p;
		if(m == k)
		  {
			i--;
			continue;
		}
			char temp = str[k];
   	 	str[k] = str[m];
			str[m] = temp;
	}
	return str;
}
int checkwin();

	







int main()

{
    int score;
    score = 0;
    
    enum fields {WORD, HINT, NUM_FIELDS};
    const int NUM_WORDS = 5;
    const string WORDS[NUM_WORDS][NUM_FIELDS] =
    {
          {"wall", "Do you feel like banging your head against something?"},
          {"glasses", "These might help you see the answer" },
          {"labored", "Going slowly, is it?" },
          {"persistant", "keep at it"},
          {"jumble", "It's what the game is all about!",}
    };
    
    srand(time(0));
    
    int choice = (rand() % NUM_WORDS);
    string theWord = WORDS[choice][WORD]; //word to guess
    string theHint = WORDS[choice][HINT]; //hint
    
    //to jumble the word
    
    string jumble = theWord; //jumbled version of the word
    int length = jumble.size();
    for (int i = 0; i < length; ++i)
    {
       int index1 = (rand() % length);
       int index2 = (rand() % length);
       char temp = jumble[index1];
       jumble[index1] = jumble[index2];
       jumble[index2] = temp; 
       score = length;   // score based on the length of the word
        
        
    }
       
    // welcome the player
    
    cout << "                      \t\tWelcome to Word Jumble\n\n";
    cout << "                  Unscarmble the letters to make a word.\n";
    cout << "                         Enter 'hint' for a hint.\n";
    cout << "                         Enter 'quit' to quit the game\n\n";
    cout << "                         The jumble is " << jumble;
    
    string guess;
    cout <<"\n\n                                      Your guess: ";
    cin >> guess;
    
    //entering the game loop
    
    while ((guess != theWord) && ( guess != "quit"))
    {
          
          if (guess == "hint")
             cout << theHint;
             
             
             
          else
              cout << "                     Sorry that is not it...";
              --score;  //subtracts points for hint or if you guess wrong
              
    cout << "\n\n                                Your guess: ";
    cin >> guess;
    
    }
    
    if (guess == theWord)
       cout << "\n                   That's it! You guessed it! You have a score of " << score << endl;
              
       cout << "\n                            Thanks for playing!\n";
         
    
    system("pause");
    
    char ch;
    
cout<<"      **********************************************************************\n";
cout<<"                press 's' if you want to play again\n\n                   but if you wnat to exit press 'n'\n";
cin>>ch;
if(ch=='s'){
char t;
	string x="house";int p=0;
	system("cls");cout<<"********************************************************************************\n";
	while(x[p]!='\0')p++;
int array[p];

	cout<<"\n                   here's the scrambled string try to solve\n";
	cout<<"                                "<<scramble(x,p);
	cout<<"               *******************************************************\n";
	string y;cout<<"\n                     enter your string now\n";
	cout<<endl;cin>>y;cout<<"   *****************************************************************\n";
	if(x==y){
	cout<<"\n                                you scored point\n";}
	else cout<<"\n                     incorrect!,  you want a hint, press y\n";
	cout<<endl;cout<<"              ****************************************************\n";
	cin>>t;
	if(t=='y'){
	cout<<"\n                      the place where you live , now try again!\n";
	}char j='y';while(j!='n'&&y!=x){
	  
	cout<<endl<<"                           enter the string plzz\n\n";cin>>y;if(y==x)break;cout<<" \n                               incorrect!!\n";
	cout<<"\n                 would you like to continue so that your string is checked    \n             press y else n\n";cin>>j;}
	if(y==x)
	cout<<"\n                              yeah, you got the string!!\n";
}cout<<"                               THANK YOU FOR PLAYING!!";
    return 0;
    
}
