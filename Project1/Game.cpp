#include <iostream>
#include <string>

void quiz() {

	char Q1;  // Question 1
	std::cout << "What is the name of the main character in the game Star Wars Jedi Survivor?" << std::endl;
	std::cout << "A : Cal kestis\nB : Luke Skywalker\nC : Anakin Skywalker\nD : Bode Akuna" << std::endl;
	std::cin >> Q1;

	if (Q1 == 'A') {
		std::cout << "Correct!" << std::endl;
	}
	else {
		std::cout << "Incorrect!" << std::endl;
	}

	char Q2; // Question 2
	std::cout << "What was the most popular girls name in the UK in 2021?" << std::endl;
	std::cout << "A : Jess\nB : Olivia\nC : Emily\nD : Isla" << std::endl; //
	std::cin >> Q2;

	if (Q2 == 'D') {
		std::cout << "Correct!" << std::endl;
	}
	else {
		std::cout << "Incorrect!" << std::endl;
	}

	char Q3; // Question 3
	std::cout << "Which popular video game franchise has released games with the subtitles World At War and Black Ops?" << std::endl;
	std::cout << "A : Call of Duty\nB : Battlefield\nC : Halo\nD : Fortnite" << std::endl;
	std::cin >> Q3;
	
	if (Q3 == 'A') {
		std::cout << "Correct!" << std::endl;
	}
	else {
		std::cout << "Incorrect!" << std::endl;
	}

	char Q4; // Question 4
	std::cout << "In what US State is the city Nashville?" << std::endl;
	std::cout << "A : Tennessee\nB : Texas\nC : New York\nD : California" << std::endl;
	std::cin >> Q4;
	
	if (Q4 == 'A') {
		std::cout << "Correct!" << std::endl;
	}
	else {
		std::cout << "Incorrect!" << std::endl;
	}

	char Q5; // Question 5
	std::cout << "What is the smallest planet in our solar system?" << std::endl;
	std::cout << "A : Mercury\nB : Mars\nC : Earth\nD : Venus" << std::endl;
	std::cin >> Q5;

	if (Q5 == 'A') {
		std::cout << "Correct!" << std::endl;
	}
	else {
		std::cout << "Incorrect!" << std::endl;
	}

	char Q6; // Question 6
	std::cout << "What is the capital of New Zealand?" << std::endl;
	std::cout << "A : Auckland\nB : Wellington\nC : Christchurch\nD : Hamilton" << std::endl; // "B
	std::cin >> Q6;
	
	if (Q6 == 'B') {
		std::cout << "Correct!" << std::endl;
	}
	else {
		std::cout << "Incorrect!" << std::endl;
	}

	char Q7; // Question 7
	std::cout << "Street artist Banksy is originally associated with which British city?" << std::endl;
	std::cout << "A : London\nB : Bristol\nC : Manchester\nD : Liverpool" << std::endl; // "B
	std::cin >> Q7;

	if (Q7 == 'B') {
		std::cout << "Correct!" << std::endl;
	}
	else {
		std::cout << "Incorrect!" << std::endl;
	}

	char Q8; // Question 8
	std::cout << "How many sides has a heptadecagon got?" << std::endl;
	std::cout << "A : 17\nB : 7\nC : 18\nD : 19" << std::endl; // "A
	std::cin >> Q8;

	if (Q8 == 'A') {
		std::cout << "Correct!" << std::endl;
	}
	else {
		std::cout << "Incorrect!" << std::endl;
	}

	char Q9; // Question 9
	std::cout << "Which five colours make up the Olympic rings?" << std::endl;
	std::cout << "A : Blue, yellow, black, green and red\nB : Blue, yellow, black, green and purple\nC : Blue, yellow, black, green and white\nD : Blue, yellow, black, green and orange" << std::endl; // "A
	std::cin >> Q9;
	
	if (Q9 == 'A') {
		std::cout << "Correct!" << std::endl;
	}
	else {
		std::cout << "Incorrect!" << std::endl;
	}

	char Q10; // Question 10
	std::cout << "How many valves does the heart have?" << std::endl;
	std::cout << "A : 2\nB : 3\nC : 4\nD : 5" << std::endl; // "C
	std::cin >> Q10;
	
	if (Q10 == 'C') {
		std::cout << "Correct!" << std::endl;
	}
	else {
		std::cout << "Incorrect!" << std::endl;
	}
	
	int score = 0;
	if (Q1 == 'A') {
		score++;
	}
	if (Q2 == 'D') {
		score++;
	}
	if (Q3 == 'A') {
		score++;
	}
	if (Q4 == 'A') {
		score++;
	}
	if (Q5 == 'A') {
		score++;
	}
	if (Q6 == 'B') {
		score++;
	}
	if (Q7 == 'B') {
		score++;
	}
	if (Q8 == 'A') {
		score++;
	}
	if (Q9 == 'A') {
		score++;
	}
	if (Q10 == 'C') {
		score++;
	}
	std::cout << "You scored " << score << " out of 10!" << std::endl;
	std::cout << "Thank you for playing!" << std::endl;

}




int main() {

	std::cout << R"(
   ____  _    _ _____ ______   _____          __  __ ______ 
  / __ \| |  | |_   _|___  /  / ____|   /\   |  \/  |  ____|
 | |  | | |  | | | |    / /  | |  __   /  \  | \  / | |__   
 | |  | | |  | | | |   / /   | | |_ | / /\ \ | |\/| |  __|  
 | |__| | |__| |_| |_ / /__  | |__| |/ ____ \| |  | | |____ 
  \___\_\\____/|_____/_____|  \_____/_/    \_\_|  |_|______|


		)";
	
	quiz();

	return 0;
}
	
