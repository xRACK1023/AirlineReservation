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

	int totalSeats[SEATS], seatNUM;

	for (int j = 0; j < SEATS; j++) {
		totalSeats[j] = 0;
	}
	displaySeats(totalSeats);
	do {
		printf("Which seat would you like to book?: ");
		scanf("%d", &seatNUM);

		if (totalSeats[seatNUM] == 1) {
			printf("Seat %d is already reserved. Please choose another seat.\n", &seatNUM);
		}
		else
			printf("Seat %d booked!\n", &seatNUM);
			totalSeats[seatNUM] = 1;

	}
	while


	return 0;
}