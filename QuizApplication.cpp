#include<iostream>
using namespace std;
int main(){
	int finalResult=0;
	char playAgain;
	
	int playQuiz(void);
	finalResult=playQuiz();
	cout<<"Your Score is : "<<finalResult;
	
	if(finalResult>=6){
		cout<<"You are Pass"<<endl;
		cout<<"You Wanna play Quiz again y and n?"<<endl;
		cin>>playAgain;
		if(playAgain=='y '|| playAgain=='Y'){
		    playQuiz();
		}else{
			cout<<"Thanks to play Quiz"<<endl;
			}
	}else{
		cout<<"you are Fail"<<endl;
	}
	

}

int playQuiz(){
	char c;
	char option;
	int score=0;
	cout<<"---------------Welcome to Quiz Game--------------"<<endl;
	cout<<"---------Please follow the instructions---------------"<<endl;
	cout<<"Step 1: Quiz Contains total 10 Questions"<<endl;
	cout<<"Step 2: You Will given 1 marks for each right ans"<<endl;
	cout<<"Step 3: There will be no negative Marking"<<endl;
	cout<<"Step 4: Please press s to start the quiz"<<endl;
	cout<<"Step 5: please select opyion a,b,c,d"<<endl;
	cout<<"Step 6: If you score >= 6 you will pass the Quiz"<<endl;
	cin>>c;
	if(c=='s'|| c=='S'){
		cout<<"Q1. what is the capital of india"<<endl;
		cout<<"(a) Delhi (b) Mumbai (c) Pune (d) Aurangabad"<<endl;
		cin>>option;
		if(option=='a'|| option=='A'){
			score=score+1;
		}else{
			score=score+0;
		}
		
		cout<<"Q2. who is the prime minister of india"<<endl;
		cout<<"(a)Narendra modi (b) Aditynath (c) Kejriwal (d) Nitin"<<endl;
		cin>>option;
		if(option=='a'|| option=='A'){
			score=score+1;
		}else{
			score=score+0;
		}
		
		cout<<"Q3. what is the national bird of india"<<endl;
		cout<<"(a) Peacock(b) Sporrow (c) Pigoan (d) Crow"<<endl;
		cin>>option;
		if(option=='a'|| option=='A'){
			score=score+1;
		}else{
			score=score+0;
		}
		
		cout<<"Q4. what is the national animal of india"<<endl;
		cout<<"(a) Tiger (b) Lion (c) Zebra (d) Leopard"<<endl;
		cin>>option;
		if(option=='a'|| option=='A'){
			score=score+1;
		}else{
			score=score+0;
		}
		
		cout<<"Q5. what is the national flower  of india"<<endl;
		cout<<"(a) Lotus (b) Rose (c) Lily (d) Sunflower"<<endl;
		cin>>option;
		if(option=='a'|| option=='A'){
			score=score+1;
		}else{
			score=score+0;
		}
		
		cout<<"Q6. who is the chiefminister of UP"<<endl;
		cout<<"(a) Adi (b) Nitin (c) Kejri (d) Raghunath"<<endl;
		cin>>option;
		if(option=='a'|| option=='A'){
			score=score+1;
		}else{
			score=score+0;
		}
		
		
		cout<<"Q7. what is the capital of UP"<<endl;
		cout<<"(a) Lucknow (b) Prayagraj (c) Mirzapur (d) Itawaa"<<endl;
		cin>>option;
		if(option=='a'|| option=='A'){
			score=score+1;
		}else{
			score=score+0;
		}
		
		cout<<"Q8. what is the capital of Maharastra"<<endl;
		cout<<"(a) Nanded (b) Nagpur (c) Pune (d) Aurangabad"<<endl;
		cin>>option;
		if(option=='a'|| option=='A'){
			score=score+1;
		}else{
			score=score+0;
		}
		
		cout<<"Q9. Who is the leader of congress"<<endl;
		cout<<"(a) rahul (b) soniya (c) matma (d) Aarti"<<endl;
		cin>>option;
		if(option=='a'|| option=='A'){
			score=score+1;
		}else{
			score=score+0;
		}
		
		cout<<"Q10. which one of the following state comes in north "<<endl;
		cout<<"(a) Delhi (b) Bangluru (c) chennai (d) kerala"<<endl;
		cin>>option;
		if(option=='a'|| option=='A'){
			score=score+1;
		}else{
			score=score+0;
		}
		
		
	}else{
		cout<<"you have entered wrong character ,please enter s"<<endl;
	}
	return score;
}
