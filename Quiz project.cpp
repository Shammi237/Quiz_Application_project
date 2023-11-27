#include<iostream>
using namespace std;
int main()
{
    int finalresult=0;
    char playAgain;
    int playQuiz(void);
    play:
    finalresult= playQuiz();
    cout<<"Your total score is = "<<finalresult<<endl;
    if(finalresult>=6)
    {
        cout<<"you are pass"<<endl;
        cout<<"Do you want to play again y or n?"<<endl;
        cin>>playAgain;
        if(playAgain=='y'|| playAgain=='Y')
        {
            playQuiz();
        }
        else
        {
            cout<<"Thank you for playing the quiz game!!"<<endl;
        }
    }
    else
    {
        cout<<"Yor are fail"<<endl;
        cout<<"Do you want to play again y or n?"<<endl;
        cin>>playAgain;
        if(playAgain=='y'|| playAgain=='Y')
        {
            goto play;
        }
        else
        {
            cout<<"Thank you for playing the quiz game!!"<<endl;
        }
    }
    }
    int playQuiz()
    {

        char c;
        char option;
        int score=0;
        playInsideFunction:

    cout<<"----Welcome to quiz game---"<<endl;
    cout<<"-----Please follow the instruction---"<<endl;
    cout<<"Step 1:Quiz contain 10 questions"<<endl;
    cout<<"Step 2:You will get 1 mark for each question"<<endl;
    cout<<"Step 3:There will be no negative marking"<<endl;
    cout<<"Step 4:Please press s to start the game"<<endl;
    cout<<"Step 5:Please select option a,b,c,d"<<endl;
    cout<<"Step 6:If your score is >=6,you will pass the quiz"<<endl;
        cin>>c;
        if(c=='s' || c=='S')
        {
            cout<<"1. Which of these types is not provided by C but is provided by C++?"<<endl;
            cout<<"a. bool b. float c. double d. int"<<endl;
            cin>>option;
            if(option=='a' || option=='A')
            {
                score=score+1;
            }
            else
            {
                score=score+0;
            }
            cout<<"2. Which concept do we use for the implementation of late binding?"<<endl;
            cout<<"a. Virtual Functions b. Constant Functions c. Operator Functions d. Static Functions"<<endl;
            cin>>option;
            if(option=='a' || option=='A')
            {
                score=score+1;
            }
            else
            {
                score=score+0;
            }
            cout<<"3. Which of these won’t return any value?"<<endl;
            cout<<"a. void b. null c. free d. empty"<<endl;
            cin>>option;
            if(option=='a' || option=='A')
            {
                score=score+1;
            }
            else
            {
                score=score+0;
            }
            cout<<"4. Which function do we use for checking if a character is a space or a tab?"<<endl;
            cout<<"a. isblank()  b. isdigit() c. isalnum() d. isalpha()"<<endl;
            cin>>option;
            if(option=='a' || option=='A')
            {
                score=score+1;
            }
            else
            {
                score=score+0;
            }
            cout<<"5. Which of these keywords do we use for the declaration of the friend function?"<<endl;
            cout<<"a. firend b. classfriend c. friend d.myfriend"<<endl;
            cin>>option;
            if(option=='a' || option=='A')
            {
                score=score+1;
            }
            else
            {
                score=score+0;
            }
            cout<<"6. What is used for dereferencing?"<<endl;
            cout<<"a. pointer with asterix b. pointer without asterix c. value with asterix d. value without asterix"<<endl;
            cin>>option;
            if(option=='a' || option=='A')
            {
                score=score+1;
            }
            else
            {
                score=score+0;
            }
            cout<<"7 What does polymorphism stand for?"<<endl;
            cout<<"a. a class that has many forms b. a class that has two forms c. a class that has only a single forms  d.a class that has four forms "<<endl;
            cin>>option;
            if(option=='a' || option=='A')
            {
                score=score+1;
            }
            else
            {
                score=score+0;
            }
            cout<<"8.What handler do we use if we want to handle all the types of exceptions?"<<endl;
            cout<<"a. catch-all handler b. catch-none handler c. try-catch handler d. catch handle"<<endl;
            cin>>option;
            if(option=='a' || option=='A')
            {
                score=score+1;
            }
            else
            {
                score=score+0;
            }
            cout<<"9.11. What do we use in order to throw an exception?"<<endl;
            cout<<"a. throw b. try c. handler d. catch"<<endl;
            cin>>option;
            if(option=='a' || option=='A')
            {
                score=score+1;
            }
            else
            {
                score=score+0;
            }
            cout<<"10. We can apply RTTI to which of the class types?"<<endl;
            cout<<"a. Polymorphic b. Encapsulation c. Static d. Derived"<<endl;
            cin>>option;
            if(option=='a' || option=='A')
            {
                score=score+1;
            }
            else
            {
                score=score+0;
            }


        }
        else
        {
            cout<<"You have enter wrong character,please enter s"<<endl;
             goto playInsideFunction;
        }
        return score;
    }
