#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

typedef struct{
	int key;
	char* value;
} dict_t;

int main(int argc, char** argv){
	if(argc != 2){
		fprintf(stderr, "[ERROR] Invalid use of %s, see \'%s -h\' for help\n", argv[0], argv[0]);
		exit(errno);
	}

	if(!strcmp(argv[1], "-h")){
		fprintf(stdout, "[INFO] %s {maximum number}\n", argv[0]);
		exit(EXIT_SUCCESS);
	}

	assert(atoi(argv[1]) > 0);

	size_t max_iter = atoi(argv[1]);
	dict_t dictionary[] = {
		{.key = 3, .value = "Fizz"},
		{.key = 5, .value = "Buzz"}
	};

	size_t dict_size = (sizeof(dictionary) / sizeof(dictionary[0]));

	assert(dict_size > 0);

	for(size_t i = 1; i <= max_iter; i++){
		char* str = (char*)calloc(100, sizeof(char));
		for(size_t j = 0; j < dict_size; j++){
			if(!(i % dictionary[j].key)){	//if the modulo is equal to 0
				strncat(str, dictionary[j].value, strlen(dictionary[j].value));
			}
		}

		if(!strlen(str)){	//if str has length 0, we did not get any string from the prior loop
			sprintf(str, "%zu", i);
		}
		printf("%s\n", str);
	}

	exit(EXIT_SUCCESS);
}
