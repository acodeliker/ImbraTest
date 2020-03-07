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

/*! \file MONOCHROME1ToRGB.cpp
    \brief Implementation of the class MONOCHROME1ToRGB.

*/

#include "../../base/include/exception.h"
#include "../include/MONOCHROME1ToRGB.h"
#include "../include/dataHandler.h"
#include "../include/dataSet.h"
#include "../include/image.h"

namespace puntoexe
{

namespace imebra
{

namespace transforms
{

namespace colorTransforms
{


static registerColorTransform m_registerTransform(ptr<colorTransform>(new MONOCHROME1ToRGB));


///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
//
//
// Return the initial color space
//
//
///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
std::wstring MONOCHROME1ToRGB::getInitialColorSpace()
{
	return L"MONOCHROME1";
}


///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
//
//
// Return the final color space
//
//
///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
std::wstring MONOCHROME1ToRGB::getFinalColorSpace()
{
	return L"RGB";
}

ptr<colorTransform> MONOCHROME1ToRGB::createColorTransform()
{
	return ptr<colorTransform>(new MONOCHROME1ToRGB);
}

///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
//
//
// MONOCHROME1 to RGB transformation
//
//
///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
void MONOCHROME1ToRGB::doColorTransform(imbxInt32* pSourceMem, imbxInt32* pDestMem, imbxUint32 pixelsNumber, imbxInt32 /* inputMinValue */, imbxInt32 inputMaxValue, imbxInt32 outputMinValue, imbxInt32 outputMaxValue)
{
	imbxInt32 sourcePixel;
	imbxInt32 offset=inputMaxValue+outputMinValue;

	while(pixelsNumber--)
	{
		sourcePixel=offset - *pSourceMem++;

		if(sourcePixel<outputMinValue)
			sourcePixel=outputMinValue;
		if(sourcePixel>outputMaxValue)
			sourcePixel=outputMaxValue;

		*pDestMem++ = sourcePixel;
		*pDestMem++ = sourcePixel;
		*pDestMem++ = sourcePixel;
	}
}

} // namespace colorTransforms

} // namespace transforms

} // namespace imebra

} // namespace puntoexe

