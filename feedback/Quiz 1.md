# Quiz Question(s)

## Dynamic Long Double Array Management

Create a module consisting of a **header file** and a **CPP file** for managing dynamically allocated arrays of `long double` values.

Your module must provide the following three functions.

### `initialize`

The `initialize` function receives two arguments:

- A `size_t` value specifying the number of elements to allocate.
- A `long double` value used to initialize every element of the array.

The function must:

1. Dynamically allocate an array of `long double` values with the specified number of elements.
2. Initialize every element of the array to the supplied value.
3. Return a `long double*` pointing to the dynamically allocated array.

### `discard`

The `discard` function receives a **reference to a pointer** to a dynamically allocated array of `long double` values.

The function must:

1. Deallocate the dynamic array.
2. Set the pointer passed by reference to `nullptr`.

This function does not return a value.

### `updateSize`

The `updateSize` function receives three arguments:

- A reference to a pointer to a dynamically allocated array of `long double` values.
- A `size_t` value specifying the current number of elements.
- A `size_t` value specifying the new number of elements.

If the new size is zero, the function must call `discard` to deallocate the original array and set the pointer to `nullptr`.

Otherwise, the function must:

1. Dynamically allocate a new array of `long double` values using the new size and store its address in a temporary pointer.
2. Copy elements from the original array to the new array, up to the smaller of the current size and the new size.
3. Deallocate the original array.
4. Update the pointer passed by reference so it points to the newly allocated array.

If the new array is larger than the original array, the additional elements do **not** need to be initialized.

This function does not return a value.

## Submission Format

Use **Notepad++**, installed through MyApps, to create a **single text file** containing the contents of both your header file and CPP file.

Use the following format and replace the placeholders with your chosen filenames and code:

```
// Header file
// Header file name: [name goes here]
// Header file content goes here:




// CPP file
// CPP file name: [name goes here]
// CPP file content goes here:
```

# Original Student Answer

## Quiz 1_hkhanal_attempt_2026-10-02-09-38-47_TEST.CPP

```cpp
// Header file
// Header file name: [name goes here]
// Header file content goes here:
 
 
 
 
#include <iostream>
void discard(long double*& array){
	delete[] array:
	array=nullptr;
}
void updateSize(long double*& array,size_t currentSize,size_t newSize)
{
	if(newSize ==0)
	{
		discard(array);
	}
	else
	{
		long double*temp = new long
		double[newSize];
		size_t size = currentSize < newSize ? currentSize : newSize;
		for(size_t i=0; i<size;i++)
		{
			temp[i]=array[i];
		}
		delete[] array;
		array = temp;
}
}

// CPP file
// CPP file name: [name goes here]
// CPP file content goes here:
```

# Feedback

# Quiz 1

Student: Hira Khanal
Seneca User ID: hkhanal
Test Version: Version 6
Points: **37**/70
Final Mark: **5.29**/10

## Marking

### Header
* 0/2 Opening header safeguard
  - The opening header safeguards are missing.
* 1/1 Required include for size_t
* 0/4 initialize prototype
  - The initialize prototype is missing.
* 0/4 discard prototype
  - The separate discard prototype is missing.
* 0/6 updateSize prototype
  - The separate updateSize prototype is missing.
* 0/1 Closing header safeguard
  - The closing header safeguard is missing.

### Module Implementation
* 0/1 Include module header
  - The CPP file has no module header include.

### initialize Implementation
* 0/4 initialize signature
  - The entire initialize function is missing.
* 0/4 Dynamic allocation
  - The initialize function is missing, so its allocation is missing.
* 0/6 Initialization loop
  - The initialize function is missing, so its initialization loop is missing.
* 0/1 Return allocated array address
  - The initialize function is missing, so its return is missing.

### discard Implementation
* 4/4 discard signature
* 2/2 Array deallocation
* 1/1 Nullify caller's pointer

### updateSize Implementation
* 6/6 updateSize signature
* 3/3 Zero-size handling
* 4/4 Replacement allocation
* 5/5 Determine smaller copy size
* 7/7 Copy elements
* 2/2 Deallocate original array
* 2/2 Update caller's pointer

Points: **37**/70
Final Mark: **5.29**/10

## Feedback

Hira, your discard and updateSize logic are correct. The conditional expression correctly chooses the smaller size, and the copy and pointer replacement are done in the right order. The initialize function is completely missing. Practise writing the full module with header safeguards, function prototypes, the module header include, and all three required functions.


# Rubric

```cpp
//# 10

// Header file
// Header file name: LongDoubleArray.h

//+ Header safeguard
#ifndef SENECA_LONGDOUBLEARRAY_H
#define SENECA_LONGDOUBLEARRAY_H
//- 2 header safeguard - #ifndef: 1, #define: 1

//+
#include <cstddef>
//- 1 required include for size_t: 1

//+ initialize prototype
long double* initialize(size_t size, long double value);
//- 4 initialize prototype - long double* return type: 1, function name: 1, size_t parameter: 1, long double parameter: 1

//+ discard prototype
void discard(long double*& array);
//- 4 discard prototype - void return type: 1, function name: 1, long double* parameter: 1, reference &: 1

//+ updateSize prototype
void updateSize(long double*& array, size_t currentSize, size_t newSize);
//- 6 updateSize prototype - void return type: 1, function name: 1, long double* parameter: 1, reference &: 1, current size parameter: 1, new size parameter: 1

//+
#endif
//- 1 closing header safeguard: 1


// CPP file
// CPP file name: LongDoubleArray.cpp

//+ Module implementation
#include "LongDoubleArray.h"
//- 1 include module header: 1

using namespace std;


//+ initialize implementation
long double* initialize(size_t size, long double value) {
   //- 4 signature - long double* return type: 1, function name: 1, size_t parameter: 1, long double parameter: 1

      //+
   long double* array = new long double[size];
   //- 4 dynamic allocation - pointer declaration: 1, new: 1, long double array: 1, requested size used: 1

   //+
   for (size_t i = 0; i < size; i++) {
      array[i] = value;
   }
   //- 6 initialization loop - for loop: 1, index initialization: 1, condition: 1, increment: 1, array element access: 1, supplied value assignment: 1

   //+
   return array;
   //- 1 returns allocated array address: 1
}


//+ discard implementation
void discard(long double*& array) {
   //- 4 signature - void return type: 1, function name: 1, long double* parameter: 1, reference &: 1

      //+
   delete[] array;
   //- 2 deallocation - delete[]: 1, correct pointer: 1

   //+
   array = nullptr;
   //- 1 nullifies caller's pointer: 1
}


//+ updateSize implementation
void updateSize(long double*& array, size_t currentSize, size_t newSize) {
   //- 6 signature - void return type: 1, function name: 1, long double* parameter: 1, reference &: 1, current size parameter: 1, new size parameter: 1

      //+
   if (newSize == 0) {
      discard(array);
   }
   //- 3 zero-size handling - checks newSize == 0: 1, calls discard: 1, passes original pointer: 1

   else {

      //+
      long double* temp = new long double[newSize];
      //- 4 replacement allocation - temporary pointer: 1, new: 1, long double array: 1, newSize used: 1

      //+
      size_t copySize = currentSize;
      if (newSize < currentSize) {
         copySize = newSize;
      }
      //- 5 copy-size determination - initialized from currentSize: 1, compares sizes: 1, uses newSize: 1, uses currentSize: 1, updates copySize to newSize: 1

      //+
      for (size_t i = 0; i < copySize; i++) {
         temp[i] = array[i];
      }
      //- 7 copying elements - for loop: 1, index initialization: 1, copySize condition: 1, increment: 1, destination element: 1, assignment: 1, source element: 1

      //+
      delete[] array;
      //- 2 original array deallocation - delete[]: 1, original pointer: 1

      //+
      array = temp;
      //- 2 updates caller's pointer - original pointer assigned: 1, temporary pointer used: 1
   }
}
```
