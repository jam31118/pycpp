from distutils.core import setup, Extension

mylib = ('mycpplib', {
    'sources': ['./src/c/add.cc'],
    'include_dirs':['./src/include'] }
    )

ext_modules = [
    Extension( "_add",
        ["./src/pyc/_add.cc"],
        include_dirs=['./src/include'] )
]

setup(
    libraries = [mylib],
    ext_modules=ext_modules
)

