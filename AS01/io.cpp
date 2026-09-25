#include "io.h"
#include "cstr.h"
#include <iostream>
#include <cstdio>

using namespace std;

namespace seneca {

   void read(char* name) {
      cout << "name>\n ";
      cin >> name;
   }

   void print(long long phone) {
      cout << "(" << phone / 10000000 << ") "
           << (phone / 10000) % 1000 << "-"
           << phone % 10000;
   }

   bool read(PhoneRec& rec, FILE* fptr) {
   return fscanf(
      fptr,
      "%15s %25s %I64d",
      rec.m_name,
      rec.m_lastName,
      &rec.m_phoneNumber
   ) == 3;
}
   void print(const PhoneRec& rec,
              size_t& row,
              const char* filter) {

      bool show = false;

      if (filter == nullptr) {
         show = true;
      }
      else if (strstr(rec.m_name, filter) != nullptr) {
         show = true;
      }
      else if (strstr(rec.m_lastName, filter) != nullptr) {
         show = true;
      }

      if (show) {
         cout << row << ": "
              << rec.m_name << " "
              << rec.m_lastName << " ";

         print(rec.m_phoneNumber);

         cout << endl;
         row++;
      }
   }

   void print(PhoneRec* records[],
              size_t size,
              const char* filter) {

      size_t row = 1;

      for (size_t i = 0; i < size; i++) {
         print(*records[i], row, filter);
      }
   }

   void setPointers(PhoneRec* ptrs[],
                    PhoneRec recs[],
                    size_t size) {

      for (size_t i = 0; i < size; i++) {
         ptrs[i] = &recs[i];
      }
   }

   void sort(PhoneRec* ptrs[],
             size_t size,
             bool sortByLastName) {

      for (size_t i = 0; i < size - 1; i++) {

         for (size_t j = i + 1; j < size; j++) {

            bool swapNeeded = false;

            if (sortByLastName) {

               if (strcmp(ptrs[i]->m_lastName,
                          ptrs[j]->m_lastName) > 0) {
                  swapNeeded = true;
               }

            }
            else {

               if (strcmp(ptrs[i]->m_name,
                          ptrs[j]->m_name) > 0) {
                  swapNeeded = true;
               }
            }

            if (swapNeeded) {
               PhoneRec* temp = ptrs[i];
               ptrs[i] = ptrs[j];
               ptrs[j] = temp;
            }
         }
      }
   }

}