// Fig. 7.24: fig07_24.c
// Card shuffling and dealing.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SUITS 4
#define FACES 13
#define CARDS 52

// prototypes
void shuffle(unsigned int wDeck[][FACES]); // shuffling modifies wDeck
void deal(unsigned int wDeck[][FACES], const char *wFace[], 
   const char *wSuit[]); // dealing doesn't modify the arrays

int main(void)
{
   // initialize deck array
   unsigned int deck[SUITS][FACES] = { 0 };

   srand(time(NULL)); // seed random-number generator

   shuffle(deck); // shuffle the deck

   // initialize suit array                       
   const char *suit[SUITS] =            
      {"Hearts", "Diamonds", "Clubs", "Spades"};
   
   // initialize face array                   
   const char *face[FACES] =
      {"Ace", "Deuce", "Three", "Four",         
       "Five", "Six", "Seven", "Eight",         
       "Nine", "Ten", "Jack", "Queen", "King"};

   deal(deck, face, suit); // deal the deck
} 

// shuffle cards in deck
void shuffle(unsigned int wDeck[][FACES])
{
   // for each of the cards, choose slot of deck randomly
    size_t card;
   for (card = 1; card <= CARDS; ++card) {
      size_t row; // row number
      size_t column; // column number

      // choose new random location until unoccupied slot found
      do {                                                        
         row = rand() % SUITS;                                   
         column = rand() % FACES;                             
      } while(wDeck[row][column] != 0); // end do...while

      // place card number in chosen slot of deck
      wDeck[row][column] = card;
   } 
}

// deal cards in deck
void deal(unsigned int wDeck[][FACES], const char *wFace[],
   const char *wSuit[])
{
    int handFace[5] = {-1,-1,-1,-1,-1};
    int handSuit[5] = {-1,-1,-1,-1,-1};
    
   // deal each of the cards
    size_t card;
   for (card = 1; card <= 5; ++card) {
      // loop through rows of wDeck
       size_t row;
      for (row = 0; row < SUITS; ++row) {
         // loop through columns of wDeck for current row
          size_t column;
         for (column = 0; column < FACES; ++column) {
            // if slot contains current card, display card
            if (wDeck[row][column] == card) {
               printf("%5s of %-8s%c", wFace[column], wSuit[row],
                  card % 2 == 0 ? '\n' : '\t'); // 2-column format
            } 
         } 
      } 
   }
    
    for (card = 1; card <= 5; ++card) {
        // loop through rows of wDeck
        size_t row;
        for (row = 0; row < SUITS; ++row) {
            // loop through columns of wDeck for current row
            size_t column;
            for (column = 0; column < FACES; ++column) {
                // if slot contains current card, display card
                if (wDeck[row][column] == card) {
                    if(wFace[column] == "Ace"){ handFace[card] = 1;};
                    if(wFace[column] == "Deuce"){ handFace[card] = 2;};
                    if(wFace[column] == "Three"){ handFace[card] = 3;};
                    if(wFace[column] == "Four"){ handFace[card] = 4;};
                    if(wFace[column] == "Five"){ handFace[card] = 5;};
                    if(wFace[column] == "Six"){ handFace[card] = 6;};
                    if(wFace[column] == "Seven"){ handFace[card] = 7;};
                    if(wFace[column] == "Eight"){ handFace[card] = 8;};
                    if(wFace[column] == "Nine"){ handFace[card] = 9;};
                    if(wFace[column] == "Ten"){ handFace[card] = 10;};
                    if(wFace[column] == "Jack"){ handFace[card] = 11;};
                    if(wFace[column] == "Queen"){ handFace[card] = 12;};
                    if(wFace[column] == "King"){ handFace[card] = 13;};
                    
                    
                    if(wSuit[row] == "Hearts"){ handSuit[card] = 1;};
                    if(wSuit[row] == "Diamonds"){ handSuit[card] = 2;};
                    if(wSuit[row] == "Clubs"){ handSuit[card] = 3;};
                    if(wSuit[row] == "Spades"){handSuit[card] = 4;};
                    
                    
                }
                
                
            } 
        } 
    }
    printf("\n");
    int i,j;
    
     for (i = 1; i <= 4; i++) {
         for (j = i+1; j <= 5; j++) {
             if((handFace[i] == handFace[j]) && (handFace[i] != -1)){printf("the hand contains a pair \n");};
             
         }
     }
    for (i = 1; i <= 4; i++) {
        for (j = i+1; j <= 5; j++) {
            if((handFace[i] == handFace[j]) && (handFace[i] != -1)){
                int k, l;
                for (k = i+1; k <= 4; k++) {
                    for (l = k+1; l <= 5; l++) {
                        if((handFace[k] == handFace[l]) && (handFace[k] != -1)){
                            printf("the hand contains a 2 pair \n");
                        }
                    }
                }
                
            
            };
            
        }
    }
    
}


