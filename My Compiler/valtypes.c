/**
 * @file    valtypes.c
 * @brief   Value types for SIMPL-2018.
 * @author  W. H. K. Bester (whkbester@cs.sun.ac.za)
 * @date    2018-07-10
 */

#include <assert.h>
#include "valtypes.h"

static char *valtype_names[] = {
	"none", "**error**", "boolean", "boolean array", "integer", "integer array",
	"**error**", "**error**", "procedure", "**error**", "boolean function",
	"boolean array function", "integer function", "integer array function"
};

#define NUM_TYPES (sizeof(valtype_names) / sizeof(char *))

const char *get_valtype_string(ValType type)
{
	assert(type >= 0 && type <= NUM_TYPES);
	return valtype_names[type];
}
