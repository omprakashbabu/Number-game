#include<iostream>
using namespace std;
int main()
{
    int a=0;
    char ui;
    cout<<"Think a number from 1 to 15"<<endl;
    cout<<"Check if your number belongs to this [1,3,5,7,9,11,13,15] ?"<<endl;
    cout<<"If yes type 'y'. If no type 'n'"<<endl;
    cin>>ui;
    if(ui == 'y')
    {
        a+=1;
        cout<<"Check if your number belongs to this [2,3,6,7,10,11,14,15]"<<endl;
        cout<<"If yes type 'y'. If no type 'n'"<<endl;
        cin>>ui;
        if(ui == 'y')
        {
            a+=2;
            cout<<"Check if your number belongs to this [4,5,6,7,12,13,14,15]"<<endl;
            cout<<"If yes type 'y'. If no type 'n'"<<endl;
            cin>>ui;
            if(ui == 'y')
            {
                a+=4;
                cout<<"Check if your number belongs to this [8,9,10,11,12,13,14,15]"<<endl;
                cout<<"If yes type 'y'. If no type 'n'"<<endl;
                cin>>ui;
                if(ui == 'y') 
                {
                    a+=8;
                    cout<<"Your number is " <<a<<endl;
                }
                else if(ui == 'n')
                {
                    a+=0;
                    //cout<<"You was not thinking any number between 1-15. Please try again..."<<endl;
                    cout<<"Your number is " <<a<<endl;
                }
                    
            }
            else if(ui == 'n') 
            {
                a+=0;
                cout<<"Check if your number belongs to this [8,9,10,11,12,13,14,15]"<<endl;
                cout<<"If yes type 'y'. If no type 'n'"<<endl;
                cin>>ui;
                if(ui == 'y')
                {
                    a+=8;
                    cout<<"Your number is " <<a<<endl;
                }
                else if(ui == 'n')
                {
                    a+=0;
                    //cout<<"You was not thinking any number between 1-15. Please try again..."<<endl;
                    cout<<"Your number is " <<a<<endl;
                }
                
            }
            
        }
        else if(ui == 'n')
        {
            a+=0;
            cout<<"Check if your number belongs to this [4,5,6,7,12,13,14,15]"<<endl;
            cout<<"If yes type 'y'. If no type 'n'"<<endl;
            cin>>ui;
            if(ui == 'y')
            {
                a+=4;
                cout<<"Check if your number belongs to this [8,9,10,11,12,13,14,15]"<<endl;
                cout<<"If yes type 'y'. If no type 'n'"<<endl;
                cin>>ui;
                if(ui == 'y')
                {
                    a+=8;
                    cout<<"Your number is " <<a<<endl;
                }
                else if(ui == 'n')
                {
                    a+=0;
                    //cout<<"You was not thinking any number between 1-15. Please try again..."<<endl;
                    cout<<"Your number is " <<a<<endl;
                }
            }
            else if(ui == 'n')
            {
                a+=0;
                cout<<"Check if your number belongs to this [8,9,10,11,12,13,14,15]"<<endl;
                cout<<"If yes type 'y'. If no type 'n'"<<endl;
                cin>>ui;
                if(ui == 'y')
                {
                    a+=8;
                    cout<<"Your number is " <<a<<endl;
                }
                else if(ui == 'n')
                {
                    a+=0;
                    //cout<<"You was not thinking any number between 1-15. Please try again..."<<endl;
                    cout<<"Your number is " <<a<<endl;
                }
            }
            
        }
    }
    else if(ui == 'n')
    {
        a+=0;
        cout<<"Check if your number belongs to this [2,3,6,7,10,11,14,15]"<<endl;
        cout<<"If yes type 'y'. If no type 'n'"<<endl;
        cin>>ui;
        if(ui=='y')
        {
            a+=2;
            cout<<"Check if your number belongs to this [4,5,6,7,12,13,14,15]"<<endl;
            cout<<"If yes type 'y'. If no type 'n'"<<endl;
            cin>>ui;
            if(ui == 'y')
            {
                a+=4;
                cout<<"Check if your number belongs to this [8,9,10,11,12,13,14,15]"<<endl;
                cout<<"If yes type 'y'. If no type 'n'"<<endl;
                cin>>ui;
                if(ui=='y')
                {
                    a+=8;
                    if(a==0)
                    {
                        cout<<"You was not thinking any number between 1-15. Please try again..."<<endl;
                    }
                    else 
                    {
                        cout<<"Your number is " <<a<<endl;
                    }
                }
                else if(ui=='n')
                {
                    a+=0;
                    
                    if(a==0)
                    {
                        cout<<"You was not thinking any number between 1-15. Please try again..."<<endl;
                    }
                    else 
                    {
                        cout<<"Your number is " <<a<<endl;
                    }
                }
            }
            else if(ui == 'n')
            {
                a+=0;
                cout<<"Check if your number belongs to this [8,9,10,11,12,13,14,15]"<<endl;
                cout<<"If yes type 'y'. If no type 'n'"<<endl;
                cin>>ui;
                if(ui=='y')
                {
                    a+=8;
                    if(a==0)
                    {
                        cout<<"You was not thinking any number between 1-15. Please try again..."<<endl;
                    }
                    else 
                    {
                        cout<<"Your number is " <<a<<endl;
                    }
                }
                else if(ui=='n') 
                {
                    a+=0;
                    
                    if(a==0)
                    {
                        cout<<"You was not thinking any number between 1-15. Please try again..."<<endl;
                    }
                    else 
                    {
                        cout<<"Your number is " <<a<<endl;
                    }
                    
                }
            }
            
        }
        else if(ui=='n')
        {
            a+=0;
            cout<<"Check if your number belongs to this [4,5,6,7,12,13,14,15]"<<endl;
            cout<<"If yes type 'y'. If no type 'n'"<<endl;
            cin>>ui;
            if(ui == 'y')
            {
                a+=4;
                cout<<"Check if your number belongs to this [8,9,10,11,12,13,14,15]"<<endl;
                cout<<"If yes type 'y'. If no type 'n'"<<endl;
                cin>>ui;
                if(ui=='y')
                {
                    a+=8;
                    if(a==0)
                    {
                        cout<<"You was not thinking any number between 1-15. Please try again..."<<endl;
                    }
                    else 
                    {
                        cout<<"Your number is " <<a<<endl;
                    }
                }
                else if(ui=='n')
                {
                    a+=0;
                    if(a==0)
                    {
                        cout<<"You was not thinking any number between 1-15. Please try again..."<<endl;
                    }
                    else 
                    {
                        cout<<"Your number is " <<a<<endl;
                    }
                }
            }
            else if(ui=='n')
            {
                a+=0;
                cout<<"Check if your number belongs to this [8,9,10,11,12,13,14,15]"<<endl;
                cout<<"If yes type 'y'. If no type 'n'"<<endl;
                cin>>ui;
                if(ui=='y')
                {
                    a+=8;
                    if(a==0)
                    {
                        cout<<"You was not thinking any number between 1-15. Please try again..."<<endl;
                    }
                    else 
                    {
                        cout<<"Your number is " <<a<<endl;
                    }
                }
                
                    
            }
        }
        
    }
    return 0;
}
