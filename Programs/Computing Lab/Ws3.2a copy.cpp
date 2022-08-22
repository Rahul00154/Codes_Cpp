	#include<bits/stdc++.h>	
	using namespace std;
	static char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}}, ch1;
	
	string p1, p2;
	
	int r, c;

	int alt = 0;
	
	void boardReset(){
	
	  for(int i = 0; i < 3; i++)
	
	    for(int j = 0; j < 3; j++)
	
	      board[i][j] = ' ';
	
	}
	
	void printBoard(){

   

  for(int i = 0; i < 3; i++){

    for(int j = 0; j < 3; j++){

      if(j == 0)

        cout << "\t\t\t";

     cout << " " << board[i][j] << " ";

      if(j != 2)

        cout << "|";

    }

    cout << "\n";

    if(i != 2)

      cout << "\t\t\t-----------\n";

  }
  			bool isWinner(char ch4)	  return ((board[0][0] == ch4 && board[0][1] == ch4 && board[0][2] == ch4) |	   (board[1][0] == ch4 && board[1][1] == ch4 && board[1][2] == ch4) |	   (board[2][0] == ch4 && board[2][1] == ch4 && board[2][2] == ch4) |	   (board[0][0] == ch4 && board[1][0] == ch4 && board[2][0] == ch4) |	   (board[0][1] == ch4 && board[1][1] == ch4 && board[2][1] == ch4) |	   (board[0][2] == ch4 && board[1][2] == ch4 && board[2][2] == ch4) |	   (board[0][0] == ch4 && board[1][1] == ch4 && board[2][2] == ch4) |	   (board[0][2] == ch4 && board[1][1] == ch4 && board[2][0] == ch4))			bool Boardfull()	  for(int i = 0; i < 3; i++	    for(int j = 0; j < 3; j++	      if(board[i][j] == ' '	        return false	  return true		

88.	void makeMove(char c1){
89.	
90.	  if(board[r-1][c-1] == ' ')
91.	
92.	    board[r-1][c-1] = c1;
93.	
94.	  else{
95.	
96.	    cout << "\nThis Position is Already Occupied!\n\n";
97.	
98.	    alt--;
99.	
100.	  }
101.	
102.	}
103.	

104.	void playGame(){
105.	
106.	  do{
107.	
108.	    if(alt % 2 == 0){
109.	
110.	      cout << endl << "\n" << p1 << "'s Turn\n";
111.	
112.	      ch1 = 'X';
113.	
114.	    }
115.	
116.	    else{
117.	
118.	      cout << endl << "\n" << p2 << "'s Turn\n";
119.	
120.	      ch1 = 'O';
121.	
122.	    }
123.	
124.	    while(1){
125.	
126.	      cout << "Enter Column No. you want to make move: ";
127.	
128.	      cin >> c;
129.	
130.	      if(c < 1 || c > 3)
131.	
132.	        cout << "Enter Column in Range 1 to 3\n";
133.	
134.	      else
135.	
136.	        break;
137.	
138.	    }
139.	
140.	    while(1){
141.	
142.	      cout << "Enter Row No. you want to make move: ";
143.	
144.	      cin >> r;
145.	
146.	      if(r < 1 || r > 3)
147.	
148.	        cout << "Enter Row in Range 1 to 3\n";
149.	
150.	      else
151.	
152.	        break;
153.	
154.	    }
155.	
156.	    makeMove(ch1);
157.	
158.	    alt++;
159.	
160.	    printBoard();
161.	
162.	  }while(!isWinner(ch1) && !Boardfull());
163.	
164.	}
165.	

166.	int main(){
167.	
168.	  char ch;
169.	
170.	   
171.	
172.	  do{
173.	
174.	    cout << "*********************************************************************************\n";
175.	    cout << "             **********************************************************\n";
176.	    cout << "\t\tA tic toe Game Made By Rahul Anand \n";
177.	    cout << "             **********************************************************\n";
178.	    cout << "*********************************************************************************\n";
179.	
180.	    cout << "\nEnter First Player's first Name: ";
181.	
182.	    cin >> p1;
183.	
184.	    cout << "Symbol Assigned to " << p1 << " is 'X'\n";
185.	
186.	    cout << "\nEnter Second Player's first Name: ";
187.	
188.	    cin >> p2;
189.	
190.	    cout << "Symbol Assigned to " << p2 << " is 'O'\n\n";
191.	
192.	    printBoard();
193.	
194.	    playGame();
195.	
196.	    cout << "\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
197.	
198.	    cout << "\t\t\t\tRESULT: ";
199.	
200.	    if(Boardfull() && !(isWinner('X') || isWinner('O')))
201.	
202.	      cout << "Game Tie!\n";
20	
20	    else if(alt % 2 == 0)
20	
20	      cout << p2 << " Wins!\n";
20	
20	    else
20	
21	      cout << p1 << " Wins!\n";
21	
21	    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
21	
21	    cout << "\nDo You Want to Play Again? (Y / N): ";
21	
21	    boardReset();
21	
21	    alt = 0;
21	
22	    cin >> ch;
22	
22	  }while(ch != 'n' && ch != 'N');
22	
22	}
