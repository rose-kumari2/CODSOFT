#include <iostream>
using namespace std;

char blankSpace[3][3] = {
    {'1', '2', '3'}, 
    {'4', '5', '6'}, 
    {'7', '8', '9'}
};
    
int row ,column;
bool drow = false;
char playerP1 = 'X';
char playerP2 = 'O';
char currentPlayer = playerP1;
void board (){
    system ("cls");    
    cout << "    |    |    " << endl;
    cout <<" " << blankSpace[0][0]<<"  | "<< blankSpace[0][1]<< "  | "<<blankSpace[0][2]<< endl;
    cout << "____|____|____"<<endl;
    cout << "    |    |    " << endl;
    cout <<" " << blankSpace[1][0]<<"  | "<< blankSpace[1][1]<< "  | "<<blankSpace[1][2]<< endl;
    cout << "____|____|____"<<endl;
    cout << "    |    |    " << endl;
    cout <<" " << blankSpace[2][0]<<"  | "<< blankSpace[2][1]<< "  | "<<blankSpace[2][2]<< endl;
    cout << "    |    |    "<<endl;
}

void player_turn(){
    int choice;
    if(currentPlayer=='X'){
        cout<<"\t\nEnter your location to mark[1-9] PlayerP1 turn[X]: ";
    }
	if(currentPlayer=='O'){
	    cout<<"\t\nEnter your location to mark[1-9]  PlayerP2 turn[O]: ";
    }
	cin>>choice;
	switch(choice){
		case 1:row=0; column=0;break;
		case 2: row=0; column=1; break;
		case 3:row=0; column=2;break;
		case 4:row=1; column=0;break;
		case 5:row=1; column=1;break;
		case 6:row=1; column=2;break;
		case 7:row=2; column=0;break;
		case 8:row=2; column=1; break;
		case 9:row=2; column=2;  break;
		default:
			cout<<"invalid Choice:";
			break;
    }
    if(currentPlayer=='X'&& blankSpace[row][column]!='X'&& blankSpace[row][column]!='O'){
	    blankSpace[row][column]='X';
	    currentPlayer='O';
	}
	else if(currentPlayer=='O'&& blankSpace[row][column]!='X'&& blankSpace[row][column]!='O'){
	    blankSpace[row][column]='O';
	    currentPlayer='X';
	}
	else{
		cout<<"Box already filed! Try again!!\n\n";
	    player_turn();
	}
	board ();
}
bool gameover(){
  	for(int i=0;i<3;i++)
  	if(blankSpace[i][0]==blankSpace[i][1] && blankSpace[i][0]==blankSpace[i][2] ||blankSpace[0][i]==blankSpace[1][i] && blankSpace[0][i]==blankSpace[2][i])
  	return false;
	if(blankSpace[0][0]==blankSpace[1][1] && blankSpace[0][0]==blankSpace[2][2] || blankSpace[0][2]==blankSpace[1][1] &&blankSpace[0][0]==blankSpace[2][0])
  	return false;
  	//game continue
  	for(int i=0;i<3;i++)
  		for(int j=0;j<3;j++)
  		if(blankSpace[i][j]!='X' && blankSpace[i][j]!='O')
  		return true;
  		//game drow
  		drow = true;
  		return false;
  			
}
int main(){
    cout << "Welcome to TIC TAC TOE GAME. " << endl;
   
    string p1, p2;
    cout << "Enter the name of first player : ";
    cin >> p1;
    cout << "Enter the name of second player : " ;
    cin >> p2;
    cout << p1 << " is first player so play first. " << endl;
    cout << p2 << " is second player so play second. " << endl;
    
    cout << "playerP1 = 'X'" << endl;
    cout << "playerP2 = 'O'" << endl;
    cout << "Current Player is " << currentPlayer << endl;
    
    while(gameover()){
        board();
        player_turn();
	    gameover();
    }

    if(currentPlayer='X' && drow ==false )
    cout<<"PlayerP1 [X] Wins!! Congratulations\n";
    else if(currentPlayer='O' && drow ==false )
    cout<<"PlayerP2 [O] Wins!! Congratulations\n";
    else
    cout<<"Game is Drow!!\n";
}

