#include <iostream>
#include <iomanip>
using namespace std;

void Player1(int a[][3]) {
  int j;

   cin>>j;


      switch(j)
  {
  case 1:
    a[0][0]={1};
    break;
  case 2:
    {
        a[0][1]={1};
        break;
    }
  case 3:
    {
          a[0][2]={1};
          break;
    }
     case 4:
    {
          a[1][0]={1};
          break;
    }
     case 5:
        {


          a[1][1]={1};
          break;

        }
             case 6:
        {


          a[1][2]={1};
          break;

        }
             case 7:
                {
                       a[2][0]={1};
          break;

                }
                  case 8:
                {
                       a[2][1]={1};
          break;

                }
                  case 9:
                {
                       a[2][2]={1};
          break;

                }




  }
}
void Player2(int a[][3]) {
  int j;

   cin>>j;
     system("cls");
        cout<<"1.Top Left"<<setw(20)<<"2.Top Middle"<<setw(20)<<"3.TOP Right"<<endl;
        cout<<"4.Middle Left"<<setw(20)<<"5. Middle"<<setw(20)<<"6.Middle Right"<<endl;
         cout<<"7.Bottom Left"<<setw(20)<<"2.Bottom Middle"<<setw(20)<<"3.Bottom Right"<<endl;

      switch(j)
  {
  case 1:
    a[0][0]={2};
    break;
  case 2:
    {
        a[0][1]={2};
        break;
    }
  case 3:
    {
          a[0][2]={2};
          break;
    }
     case 4:
    {
          a[1][0]={2};
          break;
    }
     case 5:
        {


          a[1][1]={2};
          break;

        }
             case 6:
        {


          a[1][2]={2};
          break;

        }
             case 7:
                {
                       a[2][0]={2};
          break;

                }
                  case 8:
                {
                       a[2][1]={2};
          break;

                }
                  case 9:
                {
                       a[2][2]={2};
          break;

                }





  }
}

int main()
{
int y;
int ary[3][3]={0};
  int j;
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<ary[i][j]<<" "<<" ";

        }
        cout<<endl;
    }
    cout<<"1.Top Left"<<setw(20)<<"2.Top Middle"<<setw(20)<<"3.TOP Right"<<endl;
      cout<<"4.Middle Left"<<setw(20)<<"5. Middle"<<setw(20)<<"6.Middle Right"<<endl;
         cout<<"7.Bottom Left"<<setw(20)<<"2.Bottom Middle"<<setw(20)<<"3.Bottom Right"<<endl;



for(int k=0;k<10;j++)
{



cout<<"Player 1 turn"<<endl;



Player1(ary);
  if(ary[0][0]==1&&ary[0][1]==1&&ary[0][2]==1||ary[0][0]==1&&ary[0][0]==1&&ary[1][1]==1&&ary[2][2]==1||ary[1][0]==1&&ary[1][1]==1&&ary[1][2]==1||ary[1][0]==1&&ary[1][1]==1&&ary[1][2]==1||ary[2][0]==1&&ary[2][1]==1&&ary[2][2]==1||ary[0][2]==1&&ary[1][1]==1&&ary[2][0]==1)
  {
      cout<<"Player 1 win"<<endl;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<ary[i][j]<<" "<<" ";

        }
        cout<<endl;
    }

break;
      return 0;
  }


    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<ary[i][j]<<" "<<" ";

        }
        cout<<endl;
    }

cout<<"Player 2 Turn"<<endl;
Player2(ary);

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<ary[i][j]<<" "<<" ";

        }
        cout<<endl;
    }
if(ary[0][0]==2&&ary[0][1]==2&&ary[0][2]==2||ary[0][0]==2&&ary[0][0]==2&&ary[1][1]==2&&ary[2][2]==2||ary[1][0]==2&&ary[1][1]==2&&ary[1][2]==2||ary[1][0]==2&&ary[1][1]==2&&ary[1][2]==2||ary[2][0]==2&&ary[2][1]==2&&ary[2][2]==2||ary[0][2]==2&&ary[1][1]==2&&ary[2][0]==2)
  {


      cout<<"Player 2 win"<<endl;
break;
      return 0;
  }

}


}









