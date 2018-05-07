#include <iostream>
#include <fstream>
using namespace std;
void GAME_OF_LIFE(char arr[][80],int row)
{
	int i,j,a,b,lifes=0,X_count=0,L_count=0;
	int X_i[1550],X_j[1550],L_i[1550],L_j[1550];
	for (i=1;i<(row-1);i++)
		for (j=1;j<79;j++)
		{
			lifes=0;
			for (a=i-1;a<=(i+1);a++)
				for (b=j-1;b<=(j+1);b++)
					if (arr[a][b]=='L'&&!(a==i&&b==j))
						lifes++;
			if( (lifes<=1||lifes>3)&&(arr[i][j]=='L') )
			{
				X_i[X_count]=i;
				X_j[X_count]=j;
				X_count++;
			}
			if( (lifes==3) && (arr[i][j]=='X') )
			{
				L_i[L_count]=i;
				L_j[L_count]=j;
				L_count++;
			}
		}
	for (int y=0;y<X_count;y++)
		arr[X_i[y]][X_j[y]]='X';
	
	for (int z=0;z<L_count;z++)
		arr[L_i[z]][L_j[z]]='L';
}
int main()
{
	const int row=22;
	const int col=80;
	ifstream fin("life.txt");
	char life[row][col];
	for (int i=0;i<row;i++)
		for (int j=0;j<col;j++)
		{
			if ((rand()%2)==1)
				life[i][j]='L';
			else
				life[i][j]='X';
		}
	for (int i=0;i<row;i++)
	{
		for (int j=0;j<col;j++)
			cout<<life[i][j];
	    cout<<endl;
	}

	GAME_OF_LIFE(life,row);
	
	cout<<endl<<endl;
	for (int a=1;a<=col;a++)
		cout<<"*";
	cout<<endl<<endl<<endl;
	for (int i=0;i<row;i++)
	{
		for (int j=0;j<col;j++)
			cout<<life[i][j];
	    cout<<endl;
	}
	return 0;
}