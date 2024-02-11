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
    int total_number_of_shelves;
    scanf("%d", &total_number_of_shelves);
    
    int total_number_of_queries;
    scanf("%d", &total_number_of_queries);

    //Initializing rows in array
    total_number_of_pages = (int **) calloc(total_number_of_shelves, sizeof(int));

        if(total_number_of_pages == NULL){
        printf("Memory Allocation Failed\n");
    }

    //Initializing the columns in array
    for (int i = 0; i < total_number_of_shelves; i++)
    {           
        total_number_of_pages[i] = (int *) calloc(1101,sizeof(int));
        if (total_number_of_pages[i] == NULL)
        {
            printf("Pages Matrix not got any Memory\n");
        }
        
    }

    total_number_of_books = (int *) calloc(total_number_of_shelves, sizeof(int));
    if(total_number_of_books == NULL){
        printf("Memory Allocation Error\n");
    }

    while (total_number_of_queries--) {

        int type_of_query;
        scanf("%d", &type_of_query);
        
        if (type_of_query == 1) {

            /*


             * Process the query of first type here.
             */
             int shelf_no;
             scanf("%d", &shelf_no);

             int no_pages;
             scanf("%d", &no_pages);

             int y ; 
             *(total_number_of_books + shelf_no) = y;
             *(*(total_number_of_pages + shelf_no ) + y ) = no_pages;

             *(total_number_of_books + shelf_no) += 1;

        } else if (type_of_query == 2) {

            int x, y;
            scanf("%d %d", &x, &y);
            printf("%d\n", *(*(total_number_of_pages + x) + y));
        } else {

            int x;
            scanf("%d", &x);
            printf("%d\n", *(total_number_of_books + x));
        }
    }

    if (total_number_of_books) {

        free(total_number_of_books);
    }
    
    for (int i = 0; i < total_number_of_shelves; i++) {

        if (*(total_number_of_pages + i)) {

            free(*(total_number_of_pages + i));
        }
    }
    
        if (total_number_of_pages) {


        free(total_number_of_pages);
    }
    
    return 0;
}
