#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    string name;
    char input;
    int inputuser;
    int score;
    cout<<"enter your name   ";
    getline(cin,name);
    cout<<endl;
    do
    {
        srand(0);
        int variable = rand()%5+1;
        cout<<"enter any number in between range 1 to 5   ";
        cin>>inputuser;
        cout<<endl;
        if(inputuser==variable)
        {
            cout<<"congratulatoins ! You guessed the correct number " <<endl;
            score++;
        }
        else
        {
            cout<<"sorry, You guessed wrong number try again"<<endl;
        }
        cout<<"Would you like to try again Y/N    ";
        cin>>input;
    }while (input!='N');
    cout<<"your score is    "<<score << endl;
    cout<<"Game end "<< endl;

}

