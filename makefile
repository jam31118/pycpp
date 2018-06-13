## Define variables
PY = python
BUILD_FLAGS = --inplace


## Define targets
all: build

build:
	$(PY) setup.py build_ext $(BUILD_FLAGS)

clean:
	$(PY) setup.py clean
	rm -rf *.so

