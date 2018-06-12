from distutils.core import setup, Extension

ext_modules = [
    Extension("_add",[
        "./src/pyc/_add.cc",
        "./src/c/add.cc"],
    include_dirs=['./src/include']
    ),
]

setup(
    ext_modules=ext_modules
)

