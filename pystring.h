///////////////////////////////////////////////////////////////////////////////
// 2021.10 by zhao
// 
//
///////////////////////////////////////////////////////////////////////////////

#ifndef INCLUDED_PYSTRING_H
#define INCLUDED_PYSTRING_H

#include <string>
#include <vector>

namespace pystring
{

    #define MAX_32BIT_INT 2147483647

    //////////////////////////////////////////////////////////////////////////////////////////////
    /// 
    ///
    std::string capitalize( const std::string & str );

    //////////////////////////////////////////////////////////////////////////////////////////////
    /// 
    ///
    std::string center( const std::string & str, int width );

    //////////////////////////////////////////////////////////////////////////////////////////////
    /// 
    ///
    int count( const std::string & str, const std::string & substr, int start = 0, int end = MAX_32BIT_INT);

    //////////////////////////////////////////////////////////////////////////////////////////////
    /// 
    ///
    bool endswith( const std::string & str, const std::string & suffix, int start = 0, int end = MAX_32BIT_INT );

    //////////////////////////////////////////////////////////////////////////////////////////////
    /// 
    ///
    std::string expandtabs( const std::string & str, int tabsize = 8);

    //////////////////////////////////////////////////////////////////////////////////////////////
    ///
    ///
    int find( const std::string & str, const std::string & sub, int start = 0, int end = MAX_32BIT_INT  );

    //////////////////////////////////////////////////////////////////////////////////////////////
    /// 
    ///
    int index( const std::string & str, const std::string & sub, int start = 0, int end = MAX_32BIT_INT  );

    //////////////////////////////////////////////////////////////////////////////////////////////
    /// 
    ///
    bool isalnum( const std::string & str );

    //////////////////////////////////////////////////////////////////////////////////////////////
    ///
    ///
    bool isalpha( const std::string & str );

    //////////////////////////////////////////////////////////////////////////////////////////////
    /// 
    ///
    bool isdigit( const std::string & str );

    //////////////////////////////////////////////////////////////////////////////////////////////
    /// 
    ///
    bool islower( const std::string & str );

    //////////////////////////////////////////////////////////////////////////////////////////////
    /// 
    ///
    bool isspace( const std::string & str );

    //////////////////////////////////////////////////////////////////////////////////////////////
    ///
    ///
    bool istitle( const std::string & str );

    //////////////////////////////////////////////////////////////////////////////////////////////
    /// 
    ///
    bool isupper( const std::string & str );

    //////////////////////////////////////////////////////////////////////////////////////////////
    ///
    ///
    std::string join( const std::string & str, const std::vector< std::string > & seq );

    //////////////////////////////////////////////////////////////////////////////////////////////
    /// 
    ///
    std::string ljust( const std::string & str, int width );

    //////////////////////////////////////////////////////////////////////////////////////////////
    ///
    ///
    std::string lower( const std::string & str );

    //////////////////////////////////////////////////////////////////////////////////////////////
    ///
    ///
    std::string lstrip( const std::string & str, const std::string & chars = "" );

    //////////////////////////////////////////////////////////////////////////////////////////////
    /// 
    /// 
    std::string mul( const std::string & str, int n);
    
    //////////////////////////////////////////////////////////////////////////////////////////////
    ///
    ///
    void partition( const std::string & str, const std::string & sep, std::vector< std::string > & result );

    //////////////////////////////////////////////////////////////////////////////////////////////
    /// 
    std::string replace( const std::string & str, const std::string & oldstr, const std::string & newstr, int count = -1);

    //////////////////////////////////////////////////////////////////////////////////////////////
    /// 
    ///
    int rfind( const std::string & str, const std::string & sub, int start = 0, int end = MAX_32BIT_INT );

    //////////////////////////////////////////////////////////////////////////////////////////////
    /// 
    ///
    int rindex( const std::string & str, const std::string & sub, int start = 0, int end = MAX_32BIT_INT );

    //////////////////////////////////////////////////////////////////////////////////////////////
    /// 
    ///
    std::string rjust( const std::string & str, int width);

    //////////////////////////////////////////////////////////////////////////////////////////////
    /// 
    ///
    void rpartition( const std::string & str, const std::string & sep, std::vector< std::string > & result );

    //////////////////////////////////////////////////////////////////////////////////////////////
    /// 
    ///
    std::string rstrip( const std::string & str, const std::string & chars = "" );

    //////////////////////////////////////////////////////////////////////////////////////////////
    ///
    ///
    void split( const std::string & str, std::vector< std::string > & result, const std::string & sep = "", int maxsplit = -1);

    //////////////////////////////////////////////////////////////////////////////////////////////
    /// 
    ///
    void rsplit( const std::string & str, std::vector< std::string > & result, const std::string & sep = "", int maxsplit = -1);

    //////////////////////////////////////////////////////////////////////////////////////////////
    ///
    ///
    void splitlines(  const std::string & str, std::vector< std::string > & result, bool keepends = false );

    //////////////////////////////////////////////////////////////////////////////////////////////
    ///
    ///
    bool startswith( const std::string & str, const std::string & prefix, int start = 0, int end = MAX_32BIT_INT );

    //////////////////////////////////////////////////////////////////////////////////////////////
    /// 
    ///
    std::string strip( const std::string & str, const std::string & chars = "" );

    //////////////////////////////////////////////////////////////////////////////////////////////
    /// 
    ///
    std::string swapcase( const std::string & str );

    //////////////////////////////////////////////////////////////////////////////////////////////
    ///
    ///
    std::string title( const std::string & str );

    //////////////////////////////////////////////////////////////////////////////////////////////
    ///
    ///
    std::string translate( const std::string & str, const std::string & table, const std::string & deletechars = "");

    //////////////////////////////////////////////////////////////////////////////////////////////
    /// 
    ///
    std::string upper( const std::string & str );

    //////////////////////////////////////////////////////////////////////////////////////////////
    /// 
    ///
    std::string zfill( const std::string & str, int width );

    //////////////////////////////////////////////////////////////////////////////////////////////
    /// 
    ///
    std::string slice( const std::string & str, int start = 0, int end = MAX_32BIT_INT);

    ///
    /// @ }
    ///


namespace os
{
namespace path
{
    // All of the function below have three versions.
    // Example:
    //   join(...)
    //   join_nt(...)
    //   join_posix(...)
    
    std::string basename(const std::string & path);
    std::string basename_nt(const std::string & path);
    std::string basename_posix(const std::string & path);

    //////////////////////////////////////////////////////////////////////////////////////////////
    /// 
    
    std::string dirname(const std::string & path);
    std::string dirname_nt(const std::string & path);
    std::string dirname_posix(const std::string & path);

    //////////////////////////////////////////////////////////////////////////////////////////////
    ///

    bool isabs(const std::string & path);
    bool isabs_nt(const std::string & path);
    bool isabs_posix(const std::string & s);

    //////////////////////////////////////////////////////////////////////////////////////////////
    ///
    
    std::string abspath(const std::string & path, const std::string & cwd);
    std::string abspath_nt(const std::string & path, const std::string & cwd);
    std::string abspath_posix(const std::string & path, const std::string & cwd);
    

    //////////////////////////////////////////////////////////////////////////////////////////////
    /// 
    /// 
    std::string join(const std::string & path1, const std::string & path2);
    std::string join_nt(const std::string & path1, const std::string & path2);
    std::string join_posix(const std::string & path1, const std::string & path2);
    
    std::string join(const std::vector< std::string > & paths);
    std::string join_nt(const std::vector< std::string > & paths);
    std::string join_posix(const std::vector< std::string > & paths);

    //////////////////////////////////////////////////////////////////////////////////////////////
    ///

    std::string normpath(const std::string & path);
    std::string normpath_nt(const std::string & path);
    std::string normpath_posix(const std::string & path);

    //////////////////////////////////////////////////////////////////////////////////////////////
    ///

    void split(std::string & head, std::string & tail, const std::string & path);
    void split_nt(std::string & head, std::string & tail, const std::string & path);
    void split_posix(std::string & head, std::string & tail, const std::string & path);

    //////////////////////////////////////////////////////////////////////////////////////////////
    ///
    
    void splitdrive(std::string & drivespec, std::string & pathspec, const std::string & path);
    void splitdrive_nt(std::string & drivespec, std::string & pathspec, const std::string & p);
    void splitdrive_posix(std::string & drivespec, std::string & pathspec, const std::string & path);
    
    //////////////////////////////////////////////////////////////////////////////////////////////
    /// 
    void splitext(std::string & root, std::string & ext, const std::string & path);
    void splitext_nt(std::string & root, std::string & ext, const std::string & path);
    void splitext_posix(std::string & root, std::string & ext, const std::string & path);
    
   
} // namespace path
} // namespace os

} // namespace pystring

#endif
