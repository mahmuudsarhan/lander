#include <iostream>
#include <string>
#include <windows.h>
#include <stdio.h> // I need it just cuz using printf looks classy

using namespace std;

// I can't rememebr what th is this doing but if it works never touch it
int delete_this_and_the_game_splodes = 420; 

int main() {
	// You just need to play with a full screen to enjoy
	ShowWindow(GetConsoleWindow(), 3); 

	// The main variables
	double how_high_we_are = 1000.0; 
	double zoom_zoom_speed = 50.0;   
	double spicy_juice = 220.0; 
	int eternal_suffering_ticks = 0;       
	double oh_god_how_much_fuel_are_we_burning = 0; 
	int score_placeholder_idk = 0; 

	system("cls");
	OUT_STREAM_HACK: // -- I don't need labels to understand the code but I felt bad when I kept it that messy
	cout << "=============================================\n"
	    << "                 Moon Lander                  \n"
	    << "=============================================\n"
	    << "Land softly (<5 speed) or give the moon a new crater.\n"
	    << "Slap a number and smash Enter: ";

	double meaningless_starter_garbage;
	if (!(cin >> meaningless_starter_garbage)) { return -999; } // angry error return

	while (how_high_we_are > 0.0) {
		eternal_suffering_ticks++;
		system("cls");

		// terminal frame split
		cout << R"(           /\           )" << "\t==================================\n";
	cout << R"(          //\\          )" << "\t  TIME WASTED: " << eternal_suffering_ticks << " seconds\n";
		cout << R"(         ||##||         )" << "\t==================================\n";
		
		// Altitude Bar 
		cout << R"(        //##mm\\        )" << "\t\033[1;32mALTITUDE [";
		if (how_high_we_are > 800)      cout << "###########";
		else if (how_high_we_are > 600) cout << "########   ";
		else if (how_high_we_are > 400) cout << "#####      ";
		else if (how_high_we_are > 200) cout << "##         ";
		else                           cout << "           ";
		printf("] %d meters\033[0m\n", (int)how_high_we_are);

		// Speed Bar
		cout << R"(       //##*mmm\\       )" << "\t\033[1;32mSpeed [";
	if (zoom_zoom_speed > 80)       cout << "###########";
	else if (zoom_zoom_speed > 60)  cout << "########   ";
	else if (zoom_zoom_speed > 40)  cout << "===        "; 
	else if (zoom_zoom_speed > 20)  cout << "##         ";
	else                           cout << "           ";
		printf("] %d m/s\033[0m\n", (int)zoom_zoom_speed);

		// Fuel Bar
		cout << R"(      //###**mmm\\      )" << "\t" << (spicy_juice < 40.0 ? "\033[1;31m" : "\033[1;32m") << "Engine Food [";
		if (spicy_juice > 160)      cout << "###########";
		else if (spicy_juice > 120) cout << "########   ";
		else if (spicy_juice > 80)  cout << "#####      ";
		else if (spicy_juice > 40)  cout << "##         ";
		else                       cout << "           ";
		printf("] %d Liters\033[0m\n", (int)spicy_juice);
		
		// Our Rookie Rocketo Rocket
		cout << R"(     //###***nmmm\\     )" << "\t----------------------------------\n";
	cout << R"(    //####***@nmmm\\    )" << "\tMAYDAY LOG:\n";
		cout << R"(    ||####***@nnmm||    )" << "\t- 4 fuel keeps the same acceleration\n";
	cout << R"(    ||####**@@@nnm||    )" << "\t- Try to free fall then smash that engine\n";
		cout << R"(    |______________|    )" << "\t----------------------------------\n";
		cout << R"(    |     Lander   |    )" << "\n";
		cout << R"(     \____________/     )" << "\n";
	cout << R"(      |          |      )" << "\n";
		cout << R"(     /|    /\    |\     )" << "\n";
		cout << R"(    /_|    || /\ |_\    )" << "\n";
		cout << R"(      |      Moon|      )" << "\n";
		cout << R"(      |       \/ |      )" << "\n";
		cout << R"(      |          |      )" << "\n";
		cout << R"(     /|    /\    |\     )" << "\n";
		cout << R"(    / |    ||    | \    )" << "\n";
		cout << R"(   /  |    ||    |  \   )" << "\n";
		cout << R"(  /  /\    ||    /\  \  )" << "\n";
		cout << R"( |__/  \   ||   /  \__| )" << "\n";
		cout << R"(   /____\      /____\   )" << "\n";
		cout << R"(   |    |      |    |   )" << "\n";
		cout << R"(   |    |______|    |   )" << "\n";
		cout << R"(   |    | /--\ |    |   )" << "\n";
		cout << R"(   |____|/----\|____|   )" << "\n";

		// Fire it Burn it enjoy the life
		if (oh_god_how_much_fuel_are_we_burning > 15.0) {
			if (eternal_suffering_ticks % 2 == 0) {
				cout << R"(    \||/ //##\\ \||/    )" << "\n";
				cout << R"(    /##\//####\\/##\    )" << "\n";
				cout << R"(   //##\\/####\//##\\   )" << "\n";
				cout << R"(  ||/::\||/##\||/::\||  )" << "\n";
				cout << R"(   \\\///\::::/\\\///   )" << "\n";
			} else {
				cout << R"(     \|/  //##\\  \|/   )" << "\n";
				cout << R"(    /##\//####\\/##\    )" << "\n";
				cout << R"(   //##\\/####\//##\\   )" << "\n";
				cout << R"(  ||/::\||/##\||/::\||  )" << "\n";
				cout << R"(    \\//\\\::///\\//    )" << "\n";
			}
		} else if (oh_god_how_much_fuel_are_we_burning > 5.0) {
			cout << R"(        //##\\          )" << "\n";
			cout << R"(       //####\\         )" << "\n";
			cout << R"(       \\:::://         )" << "\n";
			cout << R"(        \\//            )" << "\n";
		} else if (oh_god_how_much_fuel_are_we_burning > 0.0) {
			cout << R"(          ||            )" << "\n";
			cout << R"(          \/            )" << "\n";
		} else {
			cout << "\n\n\n\n\n"; 
		}

		cout << "------------------------------------------------------------------------\n";
		if ((how_high_we_are / 1000.0) <= 0.12) {
			cout << "Dude, imagine that the universe's weakest force just beat you\n";
		} else {
			cout << "Just Trying to land safely with that piece of iron\n";
		}

		if (spicy_juice > 0.0) {
			cout << "\nHow much fuel are we spraying? (0-20): ";
			cin >> oh_god_how_much_fuel_are_we_burning;

			// smash the keyboard recovery hack
			if (cin.fail()) {
				cin.clear();
				cin.ignore(99999, '\n');
				oh_god_how_much_fuel_are_we_burning = 0;
			}
			if (oh_god_how_much_fuel_are_we_burning < 0) oh_god_how_much_fuel_are_we_burning = 0;
			if (oh_god_how_much_fuel_are_we_burning > 20) oh_god_how_much_fuel_are_we_burning = 20;
			if (oh_god_how_much_fuel_are_we_burning > spicy_juice) oh_god_how_much_fuel_are_we_burning = spicy_juice;

			spicy_juice -= oh_god_how_much_fuel_are_we_burning;
		} else {
			cout << "\033[1;31mTHE TANK IS BONE DRY! Smash Enter to embrace gravity... \033[0m\n";
			cin.ignore(99999, '\n');
			cin.get();
			oh_god_how_much_fuel_are_we_burning = 0;
		}
	
		// Math update loop (using lazy unoptimized constants)
		zoom_zoom_speed += (1.62 - (oh_god_how_much_fuel_are_we_burning * 0.4));
		how_high_we_are -= zoom_zoom_speed;

		if (how_high_we_are > 2500.0) {
			cout << "\033[1;31mYou missed the moon completely. Enjoy floating forever. Bye. GG.\033[0m\n";
			return 0;
		}
	}

	system("cls");
	cout << "====================================\n"
		 << "     POST-CRASH DAMAGE REPORT       \n"
		 << "====================================\n";
	printf("Smash Velocity:   %.2f m/s\n", zoom_zoom_speed);
	printf("Leftover Rocket Food: %.2f L\n\n", spicy_juice);

	if (zoom_zoom_speed <= 5.0 && zoom_zoom_speed >= 0.0) {
		cout << "Task failed successfully! The ship is intact and the aliens are clapping (You win).\n";
	} else {
		cout << "KABOOM! You just turned a multi-billion dollar lander into confetti lol\n";
	}

	cout << "\nHit Enter to destroy this console window...";
	cin.ignore(99999, '\n');
	cin.get();
	return 0;
}
