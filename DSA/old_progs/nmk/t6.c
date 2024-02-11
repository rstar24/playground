#include <stdio.h>
#include <stdlib.h>

/*
 * This stores the total number of books in each shelf.
 */
int* total_number_of_books;

/*
 * This stores the total number of pages in each book of each shelf.
 * The rows represent the shelves and the columns represent the books.
 */
int** total_number_of_pages;

int main()
{
    int z = 0;    
    int x = 0;
    int total_number_of_shelves;
    int total_number_of_queries;
    scanf("%d", &total_number_of_queries);
    scanf("%d", &total_number_of_shelves);
    
        
    /*allocate memory for total_number_of_books array (5 shelves)*/
    total_number_of_books = (int*)malloc(total_number_of_shelves * sizeof(int));
		/*remove garbage values*/
    for ( x = 0; x < total_number_of_shelves; x++){
        total_number_of_books[x] = 0;
    }
    /*printf("Size of total_number_of_books on shelf 0: %d\n", total_number_of_books[0]);*/
    
    /*allocate memory for total_number_of_pages array (5 shelves)*/
    total_number_of_pages = (int**)malloc(total_number_of_shelves * sizeof(int*));
    
    
    
    while (total_number_of_queries--) {

        int type_of_query;
        scanf("%d", &type_of_query);
        
        if (type_of_query == 1) {

              int shelf, pages_on_book;
            scanf("%d %d", &shelf, &pages_on_book);
            
            /*save number of books on current shelf into variable*/
            int number_of_books_shelf = total_number_of_books[shelf];
            
            if (total_number_of_pages[shelf] == NULL){
                /*printf("No memory allocated for pages array on shelf %d\n", shelf);*/
                /*allocate memory if no memory allocated*/
                total_number_of_pages[shelf] = (int*)malloc(sizeof(int));
                /*total_number_of_pages[shelf][0] = 0;*/
            } else {
                /*reallocate memory if extra book is added*/
                total_number_of_pages[shelf] = (int*) realloc(total_number_of_pages[shelf], (number_of_books_shelf+1) * sizeof(int));
                /*total_number_of_pages[shelf][number_of_books_shelf] = 0;*/
            }
            
            total_number_of_pages[shelf][number_of_books_shelf] = pages_on_book;
            /*printf("Pages on shelf %d, book %d: %d \n", shelf, number_of_books_shelf, total_number_of_pages[shelf][number_of_books_shelf]);*/
            
            /*adjust number of books on shelf*/
            total_number_of_books[shelf]++;

        } 
        else if (type_of_query == 2) {

            int x, y;
            scanf("%d %d", &x, &y);
            printf("%d\n", *(*(total_number_of_pages + x) + y));
        } 
        else {

            int x;
            scanf("%d", &x);
            printf("%d\n", *(total_number_of_books + x));
        }
    }

    if (total_number_of_books) {

        free(total_number_of_books);
    }
    

    for (z = 0; z < total_number_of_shelves; z++) {

        if (*(total_number_of_pages + z)) {

            free(*(total_number_of_pages + z));
        }
    }
    
        if (total_number_of_pages) {


        free(total_number_of_pages);
    }
    
    return 0;
}
