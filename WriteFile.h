#if !defined WRITE_FILE
#define WRITE_FILE

#include "Text.h"

#include <fstream>
using namespace std;

//! Class to write Strings into file.
/*!
 * The WriteFile class accepts a const char* file name through the constructor.
 * New line can be added by calling writeFile method
 * Destructor closes file
 */
class WriteFile
{
	private:
		ofstream output_file;
		bool closed;

	public:
		//! The constructor that accepts the const char* used to locate and open a file
		WriteFile(const char* file_name);
		//! The destructor which closes a file
		~WriteFile();
		//! Adds a new line at the end of file
		void writeLine(String* line);
		//! Closes opened file
		void close();
};

#endif
