# DataStructures

Attempting to create baseline libraries for simple data structures.

## TODO

- [ ] Linked List
   - [ ] Single Linked List
   - [ ] Double Linked List

- [ ] Stack
- [ ] Queue
- [ ] Binary Tree
- [ ] Binary Search Tree
- [ ] Binary Heap
- [ ] Hash Table

## Maybe?

- [ ] Graph

## Creating Libraries

I will be attempting to use dynamic libraries, so the following commands must be used.

'''
gcc -fPIC -c objfile.c
'''
will create the object files for creating a dynamic library

'''
gcc - shared -o libmylib.so objfile.o
'''
will create the actual library

The header file must be copied into the ``/usr/include`` directory and the library must be copied into the ``/usr/lib`` directory.
