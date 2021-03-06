#include "_add.h"

// Declare and Define this module
static struct PyModuleDef _add = {
	PyModuleDef_HEAD_INIT,
	"_add",
	"DOCUMENTATION: A set of arithmetics",
	-1,
	module_methods
};

// Create module object
PyMODINIT_FUNC PyInit__add(void) {
	return PyModule_Create(&_add);
}

// Define module methods
static PyObject *_add_add(PyObject *self, PyObject *args) {
	double a, b;
	if (!PyArg_ParseTuple(args, "dd", &a, &b)) { return NULL; }

	double result_value = add(a, b);

	PyObject *result_tuple = Py_BuildValue("d", result_value);
	return result_tuple;
};

static PyObject *_add_add_int(PyObject *self, PyObject *args) {
	int a, b;
	if (!PyArg_ParseTuple(args, "ii", &a, &b)) { return NULL; }

	int result_value = add(a, b);

	PyObject *result_tuple = Py_BuildValue("i", result_value);
	return result_tuple;
};

static PyObject *_add_hi(PyObject *self, PyObject *args) {
	hi();
	Py_INCREF(Py_None);
	return Py_None;
}


