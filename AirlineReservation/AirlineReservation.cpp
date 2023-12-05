#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

const int SEATS = 10;

void displaySeats(int takenSEAT[]) {
	printf("Current Bookings Status:\n");
	for (int i = 0; i < SEATS; i++) {
		if (takenSEAT[i] == 0) {
			printf("Seat %d: Free\n", i + 1);
		}
		else {
			printf("Seat %d: Reserved\n", i + 1);					
		}
	}
	printf("\n");
}

int main() {

	int totalSeats[SEATS], seatNUM, planeFULL;

	for (int j = 0; j < SEATS; j++) {
		totalSeats[j] = 0;
	}

	do {
		displaySeats(totalSeats);

		printf("Which seat would you like to book?: ");
		scanf("%i", &seatNUM);

		if (totalSeats[seatNUM-1] == 1) {
			printf("Seat %d is already reserved. Please choose another seat.\n\n", seatNUM);
		}
		else {
			printf("Seat %d booked!\n\n", seatNUM);
			totalSeats[seatNUM-1] = 1;

		}
		for (int x = 0; x < SEATS; x++) {
			int cheakSeats = totalSeats[x];
			if (cheakSeats == 0) {
				planeFULL = 0;
				break;
			}
			else {
				planeFULL = 1;
			}
		
		}

	} while (!planeFULL);
		displaySeats(totalSeats);
		printf("All seats are reserved. Plane is taking off!\n");
		
		
	return 0;
}