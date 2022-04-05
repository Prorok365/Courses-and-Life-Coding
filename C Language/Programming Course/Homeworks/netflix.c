/**
 * @file netflix.c
 * @brief Initializes the Netflix show and adds 6 series to it, 
 * 		  show the series on screen and then delete the Netflix show.
 */


/**********************/
#include <stdio.h>
#include <stdlib.h>

/**********************/
//Print the massage error with line number in the place its called
#define LOG_ERROR(message) fprintf(stderr, "Error in line %d: %s\n", __LINE__, message)
#define INIT_SHOWS 5
#define MAX_NAME 32

/**********************/
typedef struct {
    char name[MAX_NAME];
    unsigned int season;
    double rating;
} Show;

/**********************/
typedef struct {
    Show *shows_list;
    unsigned int shows_size;
    unsigned int amount_shows;
} Netflix;


/***************************************************/
/**
 * Initializes array of Show to length of 5 when all variables are NULL
 *
 * @param None
 *
 * @return Netflix - Pointer to dynamically allocated Netflix structure
 */
Netflix *create_netflix() 
{
    Netflix *result = malloc(sizeof(Netflix));

    if(!result) {
        LOG_ERROR("Memory Allocation Failed!");
        exit(1);
    }

    result -> shows_list = (Show*)malloc(sizeof(Show) * INIT_SHOWS);
    
    if(!result -> shows_list) {
        LOG_ERROR("Memory Allocation Failed!");
        exit(1);
    }
    
    result -> shows_size = INIT_SHOWS;
    result -> amount_shows = 0;

    return result;
}


/***************************************************/
/**
 * Add new Show to the system (without using files).
 *
 * @param Netflix - pointer to Netflix structure
 *
 * @return void
 */
void add_show(Netflix *netflix) 
{
    Show s;

    printf("Enter show name: \n");
    scanf("%s", s.name);

    printf("Enter season number: \n");
    scanf("%d", &s.season);

    printf("Enter rating: \n");
    scanf("%lf", &s.rating);

    if(netflix->shows_size == netflix->amount_shows) {

        netflix->shows_list = (Show*)realloc(netflix->shows_list, netflix->shows_size * 2 * sizeof(Show));

        netflix->shows_size = netflix->shows_size * 2;

        if(!netflix->shows_list) {
            LOG_ERROR("Memory Allocation Failed!");
            exit(1);
        }
    }

    *(netflix->shows_list + netflix->amount_shows++) = s;
    
}


/***************************************************/
/**
 * Add new Show to the system (While using files).
 *
 * @param Netflix - pointer to Netflix structure
 * @param FILE - pointer to file
 *
 * @return void
 */
void add_show_file(Netflix *netflix, FILE *fp)
{
    Show show;

    fscanf(fp, "%s", show.name);
    fscanf(fp, "%d", &show.season);
	fscanf(fp, "%lf", &show.rating);

    if(netflix->shows_size == netflix->amount_shows) {
        netflix->shows_list = (Show*)realloc(netflix->shows_list, netflix->shows_size * 2 * sizeof(Show));

        netflix->shows_size = netflix->shows_size * 2;

        if(!netflix->shows_list) {
            LOG_ERROR("Memory Allocation Failed!");
            exit(1);
        }
    }

    *(netflix->shows_list + netflix->amount_shows++) = show;    
}


/***************************************************/
/**
 * Print all shows from struct netflix
 *
 * @param Netflix - pointer to Netflix structure
 *
 * @return void
 */
void list_shows(Netflix* netflix)
{
    int i = 0;

    for(i = 0; i < netflix->amount_shows; i++) {
        printf("the show %s has %d seasons and her rating is %.2lf\n", netflix->shows_list[i].name, netflix->shows_list[i].season, netflix->shows_list[i].rating);
    }
}


/***************************************************/
/**
 * Wipe the data and free the memory from Netflix sctructure.
 *
 * @param Netflix - pointer to Netflix structure
 *
 * @return void
 */
void destroy_netflix(Netflix *netflix)
{
    int i;
    
    for(i = 0; i < netflix->amount_shows; i++) {
        free(netflix->shows_list);
    }
    free(netflix);
}


/**********************MAIN*************************/
/***************************************************/
/* Initialize structure of Netflix, add 6 Show, 
   print on screen all the shows and then delete all the data */
int main()
{
    setvbuf(stdout, NULL, _IONBF, 0);
	
	/***************START File Version******************/
    // FILE *fp;

    // char *file_name = "input.txt";

    // if(!(fp = fopen(file_name, "r+")) ) {
	//         LOG_ERROR("No such file!");
	//         exit(1);
	// }
	/***************END File Version*******************/
	
    Netflix *nf = create_netflix();

    int i = 0;

    int shows_to_add = 6;

    for(i = 0; i < shows_to_add; i++) {
        add_show(nf);
    }

    list_shows(nf);
    destroy_netflix(nf);
    // fclose(fp); //File Version
    
    return 0;
}