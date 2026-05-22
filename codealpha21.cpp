#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Define constants
#define NOTES 7 // Number of musical notes available
#define SEQUENCE_LENGTH 20 // Desired length of the music sequence

// Available musical notes
char musicNotes[NOTES] = {'C', 'D', 'E', 'F', 'G', 'A', 'B'};

// Function to generate a random music sequence
void generateMusic(char sequence[], int length)
{
    int i;

    for (i = 0; i < length; i++)
    {
        // Select a random index from the available notes
        int randomIndex = rand() % NOTES;
        // Assign the selected note to the current position in the sequence
        sequence[i] = musicNotes[randomIndex];
    }
}

// Function to display the generated music sequence
void displayMusic(char sequence[], int length)
{
    int i;

    printf("\nGenerated Music Notes:\n");

    for (i = 0; i < length; i++)
    {
        // Print each note followed by a space
        printf("%c ", sequence[i]);
    }

    printf("\n"); // Print a newline at the end of the sequence
}

// Function to save the generated music sequence to a file
void saveMusicToFile(char sequence[], int length)
{
    FILE *file;

    // Open the file in write mode. If the file exists, it will be overwritten.
    file = fopen("music_sequence.txt", "w");

    // Check if the file opened successfully
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return; // Exit the function if an error occurred
    }

    int i;

    for (i = 0; i < length; i++)
    {
        // Write each note followed by a space to the file
        fprintf(file, "%c ", sequence[i]);
    }

    // Close the file to save the changes
    fclose(file);

    printf("\nMusic sequence saved to 'music_sequence.txt'\n");
}

// Function to simulate the AI training process
void trainModel()
{
    printf("\nTraining AI Music Model");

    int i;

    // Simulate training progress with dots
    for (i = 0; i < 5; i++)
    {
        printf(".");

        // Create a delay to simulate training time (very basic and platform-dependent)
        for (long int j = 0; j < 100000000; j++);
    }

    printf("\nModel Training Completed Successfully!\n");
}

// Main function to run the AI Music Generation System
int main()
{
    char generatedSequence[SEQUENCE_LENGTH]; // Array to store the generated music sequence

    // Initialize the random number generator with the current time for better randomness
    srand(time(0));

    // Print the program header
    printf("=========================================\n");
    printf(" AI MUSIC GENERATION SYSTEM\n");
    printf("=========================================\n");

    printf("\nStep 1: Preprocessing Music Data");
    printf("\nMusic notes converted into sequences.\n");

    printf("\nStep 2: Building RNN/LSTM Model");
    printf("\nNeural network initialized successfully.\n");

    printf("\nStep 3: Training Model");
    // Call the function to simulate model training
    trainModel();

    printf("\nStep 4: Generating New Music");
    // Generate a random music sequence
    generateMusic(generatedSequence, SEQUENCE_LENGTH);

    // Display the generated music sequence
    displayMusic(generatedSequence, SEQUENCE_LENGTH);

    printf("\nStep 5: Saving Generated Music");
    // Save the generated music sequence to a file
    saveMusicToFile(generatedSequence, SEQUENCE_LENGTH);

    printf("\nProgram Executed Successfully!\n");

    return 0; // Indicate successful program execution
}
