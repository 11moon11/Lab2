#include "ReadFile.h"
#include "WriteFile.h"
#include "Text.h"
#include "Tokens.h"

#include <iostream>
int main()
{
   ReadFile* rf = new ReadFile("cds.txt");
   WriteFile* wf = new WriteFile("out.txt");

   while(!rf->eof())
   {
      String* line = rf->readLine();
      wf->writeLine(line);
      delete line;
   }

   rf->close();
   wf->close();

   return 0;
}