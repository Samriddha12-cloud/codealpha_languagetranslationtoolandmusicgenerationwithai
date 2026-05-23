#include <stdio.h>
#include <string.h>
#include <ctype.h>

//Function to convert the user's input into lower case
void toLowerCase(char str[]) {
  int i;

  for(i = 0; str[i] != '\0'; i++) {
    str[i] = tolower(str[i]);
  }
}

int main() {
  char userInput[100];

  printf("====================================\n");
  printf(" RULE-BASED CHATBOT IN C\n");
  printf("====================================\n");
  printf("Type 'bye' to exit the chatbot.\n\n");

  while(1) {
    printf("You: ");

    fgets(userInput, sizeof(userInput), stdin);

    //Removing the newline character from the end of the string
    userInput[strcspn(userInput, "\n")] = '\0';

    //Convert the user's input into lower case
    toLowerCase(userInput);

    //Rules of the Chatbot

    if(strcmp(userInput, "hello") == 0 ||
       strcmp(userInput, "hi") == 0 ||
       strcmp(userInput, "hey") == 0) {
      printf("Bot: Hello! Nice to meet you.\n");
    }

    else if(strstr(userInput, "how are you")) {
      printf("Bot: I am fine. Thank you!\n");
    }

    else if(strstr(userInput, "your name")) {
      printf("Bot: My name is C Chatbot.\n");
    }

    else if(strstr(userInput, "what can you do")) {
      printf("Bot: I can answer simple questions.\n");
    }

    else if(strstr(userInput, "help")) {
      printf("Bot: Try saying hello, ask my name, or ask how I am.\n");
    }

    else if(strcmp(userInput, "bye") == 0) {
      printf("Bot: Goodbye! Have a great day.\n");
      break;
    }

    else {
      printf("Bot: Sorry, I do not understand.\n");
    }
  }
  return 0;
}
           
