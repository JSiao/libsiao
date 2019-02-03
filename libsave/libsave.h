#pragma once
#ifndef LIBSAVE
#define LIBSAVE

#include <stdio.h>
#include <stdlib.h>

void  struct_save(FILE *, size_t, void *);
void *struct_load(FILE *, size_t);

#endif
