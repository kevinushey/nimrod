#include <R.h>
#include <Rinternals.h>

char* nimrod_hello();

SEXP test_hello() {
	char* result = nimrod_hello();
	return mkString(result);
}

