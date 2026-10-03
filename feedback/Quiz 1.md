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
