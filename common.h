/*
 *  common.h
 *  Funciones auxiliares compartidas
 */

#ifndef common_h
#define common_h

#include <stdio.h> // FILE, fprintf(), fgetc(), ungetc(), etc.
#include <ctype.h> // isalpha(), isdigit(), isspace(), toupper(), tolower()
#include <string.h> // strcmp(), strcpy(), strlen()
#include <stdlib.h> // exit(), EXIT_SUCCESS
#include <signal.h> // signal()
#include <stdbool.h> // bool, true, false

extern FILE * fin, * fout, * ferr;

// Modos de compilación
enum {SCAN, PARSE, ASSEMBLE};
extern int compiler_mode;

typedef const char * string;
typedef enum {lowercase, uppercase} case_type;

void change_string_case(char * const, case_type);

bool strings_are_equal(string, string);

int find_string_in_array(string, string[]);

int find_char_in_string(char, string);

string string_from_int(int);

int int_from_string(string);

string wide_char_at(int, string);

bool file_exists(string);

#endif /* common_h */
