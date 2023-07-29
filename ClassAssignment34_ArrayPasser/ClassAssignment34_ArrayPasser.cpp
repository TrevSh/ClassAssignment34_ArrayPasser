#include <iostream>

void increase(int* const array, const int NUM_ELEMENTS);
void display(const int* const array, const int NUM_ELEMENTS);           //When passing an array through a function, its good to include the number of elements in the array to avoid trying to access an element thats not there.

int main()
{
    std::cout << "Creating an array of high scores. \n\n";
    const int NUM_SCORES = 3;
    int highScores[NUM_SCORES] = { 5000,3500,2700 };

    std::cout << "Displaying scores using array name as a constant pointer. \n";
    std::cout << *highScores << "\n";
    std::cout << *(highScores +1) << "\n";
    std::cout << *(highScores +2) << "\n\n";

    std::cout << "Increasing scores by passing array as a constant pointer.\n\n";
    increase(highScores, NUM_SCORES);

    std::cout << "Displaying scores by passing array as a constant pointer to a constant. \n";
    display(highScores, NUM_SCORES);

    system("pause");
}

void increase(int* const array, const int NUM_ELEMENTS) {
    for (int i = 0; i < NUM_ELEMENTS; ++i) {
        array[i] += 500;
    }
}

void display(const int* const array, const int NUM_ELEMENTS) {
    for (int i = 0; i < NUM_ELEMENTS; ++i) {
        std::cout << array[i] << "\n";
    }
}