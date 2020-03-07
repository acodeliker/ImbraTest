/*

Imebra: a C++ dicom library.
Copyright (C) 2003, 2004, 2005, 2006  by Paolo Brandoli

This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License version 2 as published by
 the Free Software Foundation.

This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

-------------------

If you want to use Imebra commercially then you have to buy the commercial
 support available at http://puntoexe.com
 
After you buy the commercial support then you can use Imebra according
 to the terms described in the Imebra Commercial License Version 1.
A copy of the Imebra Commercial License Version 1 is available in the 
 documentation pages.

Imebra is available at http://puntoexe.com

The author can be contacted by email at paolo@puntoexe.com or by mail at
 the following address:
 Paolo Brandoli
 Rjava Cesta 2/a
 1000 Ljubljana
 Slovenia


*/

/*! \file configuration.h
    \brief Declaration of the basic data types and of the platform flags
	        (Posix or Windows)

*/


/// This type represents an 1 byte unsigned integer.
typedef unsigned char  imbxUint8;

/// This type represents a 2 bytes unsigned integer.
typedef unsigned short imbxUint16;

/// This type represents a 4 bytes unsigned integer.
typedef unsigned long  imbxUint32;

/// This type represents an 1 byte signed integer.
typedef signed char    imbxInt8;

/// This type represents a 2 bytes signed integer.
typedef signed short   imbxInt16;

/// This type represents a 4 bytes signed integer.
typedef signed long    imbxInt32;


#if !defined(PUNTOEXE_WINDOWS) && !defined(PUNTOEXE_POSIX)

//#ifdef WIN32
#define PUNTOEXE_WINDOWS 1
//#endif

#ifdef _WIN32_WCE
#define PUNTOEXE_WINDOWS 1
#endif

#ifndef PUNTOEXE_WINDOWS
#define PUNTOEXE_POSIX 1
#endif

#endif



