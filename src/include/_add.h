#ifndef __ADD_H_
#define __ADD_H_

#include <Python.h>
#include "add.h"

// Declare each module method
static PyObject *_add_add(PyObject *self, PyObject *args);
static PyObject *_add_add_int(PyObject *self, PyObject *args);
static PyObject *_add_hi(PyObject *self, PyObject *args);

// Define an array of module methods
static PyMethodDef module_methods[] = {
	{"add", _add_add, METH_VARARGS, "Add doubles"},
	{"add_int", _add_add_int, METH_VARARGS, "Add int with +1"},
	{"hi", _add_hi, METH_VARARGS, "Say hello to Python"},
	{NULL, NULL, 0, NULL}
};

PyMODINIT_FUNC PyInit__add(void);

#endif // __ADD_H_

