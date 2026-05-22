#include <stdio.h>
#include <string.h>

// Function to display available languages
void displayLanguages()
{
 printf("\nAvailable Languages:\n");
 printf("1. English\n");
 printf("2. Hindi\n");
 printf("3. French\n");
 printf("4. Spanish\n");
}

// Function to translate text
void translateText(char text[], int sourceLang, int targetLang)
{
 printf("\n=====================================\n");
 printf(" TRANSLATED OUTPUT\n");
 printf("=====================================\n");

 // Simple predefined translations
 if(sourceLang == 1 && targetLang == 2)
 {
 if(strcmp(text, "hello") == 0)
 printf("Translated Text: ??????\n"); // Placeholder for Hindi translation
 else if(strcmp(text, "good morning") == 0)
 printf("Translated Text: ??? ??????\n"); // Placeholder for Hindi translation
 else
 printf("Translation not available.\n");
 }
 else if(sourceLang == 1 && targetLang == 3)
 {
 if(strcmp(text, "hello") == 0)
 printf("Translated Text: Bonjour\n");
 else if(strcmp(text, "good morning") == 0)
 printf("Translated Text: Bonjour\n");
 else
 printf("Translation not available.\n");
 }
 else if(sourceLang == 1 && targetLang == 4)
 {
 if(strcmp(text, "hello") == 0)
 printf("Translated Text: Hola\n");
 else if(strcmp(text, "good morning") == 0)
 printf("Translated Text: Buenos das\n");
 else
 printf("Translation not available.\n");
 }
 else
 {
 printf("Translation option not supported.\n");
 }
}

// Function to simulate copy feature
void copyText()
{
 printf("\nText copied successfully!\n");
}

// Main function
int main()
{
 char text[100];
 int sourceLang, targetLang;
 int choice;

 printf("=====================================\n");
 printf(" LANGUAGE TRANSLATION TOOL\n");
 printf("=====================================\n");

 // Display language options
 displayLanguages();

 // Input source language
 printf("\nSelect Source Language (1-4): ");
 scanf("%d", &sourceLang);

 // Input target language
 printf("Select Target Language (1-4): ");
 scanf("%d", &targetLang);

 getchar(); // Clear newline character from buffer

 // Input text
 printf("\nEnter Text to Translate: ");
 fgets(text, sizeof(text), stdin);

 // Remove newline character
 text[strcspn(text, "\n")] = '\0';

 // Translate text
 translateText(text, sourceLang, targetLang);

 // Optional copy feature
 printf("\nDo you want to copy translated text?\n");
 printf("1. Yes\n");
 printf("2. No\n");

 printf("Enter choice: ");
 scanf("%d", &choice);

 if(choice == 1)
 {
 copyText();
 }
 else
 {
 printf("\nCopy feature skipped.\n");
 }

 printf("\nProgram Executed Successfully!\n");

 return 0;
}
