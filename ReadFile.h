#if !defined READ_FILE
#define READ_FILE

#include "Text.h"

#include <fstream>
using namespace std;

//! Class to read Strings from file.
/*!
 * The ReadFile class accepts a const char* file name through the constructor.
 * New line can be read by calling readLine method
 * Method eof returns true when there are no more lines to read
 * Destructor closes file
 */
class ReadFile
{
	private:
		ifstream input_file;
		bool _eof;
		bool closed;

	public:
		//! The constructor that accepts the const char* used to locate and open a file
		ReadFile(const char* file_name);
		//! The destructor which closes a file
		~ReadFile();
		//! Reads 1 line from opened file
		String* readLine();
		//! Returns true when there are no more lines to read
		bool eof();
		//! Closes opened file
		void close();
};

#endif
