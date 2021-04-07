#define MAX_STRING_LEN 20
#define MAX_CODE_LEN 10
#define MAX_POSSIB 10

extern char strArray[MAX_STRING_LEN];
extern int lenStrArray;
extern int numLetters;

typedef struct lettersCoding codeLet;

codeLet *generateLegend(const char *filename);

void findPosibilities(codeLet *legend, char *decodedLetters, char *leftToDecode, codeLet letterToCheck);

struct lettersCoding {
    char letter;
    char code[MAX_CODE_LEN];
};

struct results {
    int count;
    char strings[MAX_POSSIB][MAX_STRING_LEN];
} possibilities;

