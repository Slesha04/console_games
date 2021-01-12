#include <iostream>
using namespace std;


char matrix[3][3] = {'1','2','3','4','5','6','7','8','9'};
char player = 'X';

void draw(){
    cout<< "Tic Tac Toe" << endl;
    for(int i = 0;i<3;i++){
        for(int j = 0; j<3;j++){
            cout<< matrix[i][j]<< " ";
        }
        cout<<endl;
    }
}
u_char input(){
    int a ;
    cout<< "press the number of the field "<< endl;
    cin >> a;
    switch (a){
        case 1:
         matrix[0][0] = player;
        case 2:
            matrix[0][1] = player;
            return player;
        case 3:
            matrix[0][2] = player;
            return player;
        case 4:
            matrix[1][0] = player;
            return player;
        case 5:
            matrix[1][1] = player;
            return player;
        case 6:
            matrix[1][2] = player;
            return player;
        case 7:
            matrix[2][0] = player;
            return player;
        case 8:
            matrix[2][1] = player;
            return player;
        case 9:
            matrix[2][2] = player;
            return player;
        default:
            return 'I';
            
    }

}

void toggle_player(){
    if(player == 'X')
        player = 'O';
    else 
        player = 'X';
    
}

char win(){
    if (matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix [0][2]=='X'){
        return 'X';
    }
    if (matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix [1][2]=='X'){
        return 'X';
    }
    if (matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix [2][2]=='X'){
        return 'X';
    }
    if (matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix [2][2]=='X'){
         return 'X';
    }
    if (matrix[0][2] == 'X' && matrix[1][1] == 'X' && matrix [2][0]=='X'){
         return 'X';
    }
    if (matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix [0][2]=='O'){
        return 'O';
    }
    if (matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix [1][2]=='O'){
        return 'O';
    }
    if (matrix[2][0] == 'O' && matrix[2][1] == 'O' && matrix [2][2]=='O'){
        return 'O';
    }
    if (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix [2][2]=='O'){
        return 'O';
    }
    if (matrix[0][2] == 'O' && matrix[1][1] == 'O' && matrix [2][0]=='O'){
        return 'O';
    }
    return '/';
}

int main()
{
    int count = 0;
    draw();
    while (1){
        cout<<count<<endl;
        if(input()=='I'){
            break;
        }
        draw();
        if (win() == 'X'){
            cout<<"winnex is X" << endl;
            break;
        }
        else if (win()=='O'){
            cout<<"winner is O"<< endl;
            break;
        }
        else if(win() == '/' and count == 9){
            cout<< "Its a draw"<< endl;
        }
        toggle_player(); 
    }
    return 0;
}
