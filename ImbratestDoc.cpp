// ImbratestDoc.cpp :  CImbratestDoc 类的实现
//

#include "stdafx.h"
#include "Imbratest.h"

#include "ImbratestDoc.h"
#include ".\imbratestdoc.h"

#include <string>
#include <iostream>
#include <sstream>
//typedef basic_string<wchar_t> wstring;


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CImbratestDoc

IMPLEMENT_DYNCREATE(CImbratestDoc, CDocument)

BEGIN_MESSAGE_MAP(CImbratestDoc, CDocument)
END_MESSAGE_MAP()


// CImbratestDoc 构造/析构

CImbratestDoc::CImbratestDoc()
{
	// TODO: 在此添加一次性构造代码

}

CImbratestDoc::~CImbratestDoc()
{
}

BOOL CImbratestDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: 在此添加重新初始化代码
	// (SDI 文档将重用该文档)

	return TRUE;
}




// CImbratestDoc 序列化

void CImbratestDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: 在此添加存储代码
	}
	else
	{
		// TODO: 在此添加加载代码
	}
}


// CImbratestDoc 诊断

#ifdef _DEBUG
void CImbratestDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CImbratestDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CImbratestDoc 命令

BOOL CImbratestDoc::OnOpenDocument(LPCTSTR lpszPathName)
{
	if (!CDocument::OnOpenDocument(lpszPathName))
		return FALSE;

	//// TODO:  在此添加您专用的创建代码
	//try
	//{
	//	// Open the file containing the dicom dataset
	//	//const basic_string <wchar_t> sFileName ( lpszPathName );
	//	TCHAR wstrFileName[MAX_PATH];
	//	lstrcpy(wstrFileName,  lpszPathName );
	//	ptr<puntoexe::stream> inputStream(new puntoexe::stream);
	//	inputStream->openFile( wstrFileName, std::ios_base::in);
	//	//ptr<puntoexe::baseStream> pbaseStream=inputStream;

	//	// Connect a stream reader to the dicom stream. Several stream reader
	//	//  can share the same stream
	//	ptr<puntoexe::streamReader> reader(new streamReader(inputStream));

	//	// Get a codec factory and let it use the right codec to create a dataset
	//	//  from the input stream
	//	ptr<codecs::codecFactory> codecsFactory(codecs::codecFactory::getCodecFactory());
	//	ptr<dataSet> loadedDataSet(codecsFactory->load(reader, 2048));
	//
	//	try
	//	{
	//		for(imbxUint32 frameNumber(0); ; ++frameNumber)
	//		{
	//			// Apply the modality VOI/LUT
	//			ptr<transforms::modalityVOILUT> modVOILUT(new transforms::modalityVOILUT);
	//			modVOILUT->declareDataSet(loadedDataSet);
	//			modVOILUT->declareInputImage(0, loadedDataSet->getImage(frameNumber));
	//			modVOILUT->doTransform();
	//			ptr<image> finalImage(modVOILUT->getOutputImage(0));

	//			// Apply the presentation VOI/LUT
	//			
	//			//if(argc == 4 && std::string(argv[3]) == "-presentation")
	//			//{
	//				ptr<transforms::VOILUT> presentationVOILUT(new transforms::VOILUT);
	//				presentationVOILUT->declareDataSet(loadedDataSet);
	//				imbxUint32 firstVOILUTID(presentationVOILUT->getVOILUTId(0));
	//				if(firstVOILUTID != 0)
	//				{
	//					presentationVOILUT->setVOILUT(firstVOILUTID);
	//					presentationVOILUT->declareInputImage(0, finalImage);
	//					presentationVOILUT->doTransform();
	//					finalImage = presentationVOILUT->getOutputImage(0);
	//				}
	//			//}
	//			

	//			// Color transform to YCrCb
	//			ptr<transforms::colorTransforms::colorTransformsFactory> colorFactory(transforms::colorTransforms::colorTransformsFactory::getColorTransformsFactory());
	//			ptr<transforms::transform> colorTransform(colorFactory->getTransform(finalImage->getColorSpace(), L"YBR_FULL"));
	//			if(colorTransform != 0)
	//			{
	//				colorTransform->declareDataSet(loadedDataSet);
	//				colorTransform->declareInputImage(0, finalImage);
	//				colorTransform->doTransform();
	//				finalImage = colorTransform->getOutputImage(0);
	//			}

	//			// Adjust high bit
	//			if(finalImage->getHighBit() != 7)
	//			{
	//				ptr<image> eightBitImage(new image);
	//				imbxUint32 width, height;
	//				finalImage->getSize(&width, &height);
	//				eightBitImage->create(width, height, image::depthU8, L"YBR_FULL", 7);
	//				ptr<transforms::transformHighBit> modifyHighBit(new transforms::transformHighBit);
	//				modifyHighBit->declareDataSet(loadedDataSet);
	//				modifyHighBit->declareInputImage(0, finalImage);
	//				modifyHighBit->declareOutputImage(0, eightBitImage);
	//				modifyHighBit->doTransform();
	//				finalImage = eightBitImage;
	//			}

	//			// Create a jpeg dataset
	//			
	//			std::wstring jpegTransferSyntax(L"1.2.840.10008.1.2.4.50");
	//			ptr<dataSet> jpegDataSet(new dataSet);
	//			jpegDataSet->setImage(0, finalImage, jpegTransferSyntax, codecs::codec::veryHigh);

	//			// Open a stream for the jpeg
	//			//std::wstring jpegFileName[MAX_PATH];
	//			//jpegFileName="D:\\Dicom.jpg";
	//			
	//			std::ostringstream jpegFileName;
	//			jpegFileName << "D:\\DicomView.jpg";
	//			/*
	//			if(frameNumber != 0)
	//			{
	//				jpegFileName << "_" << frameNumber;
	//			}
	//			jpegFileName << extension;
	//			*/
	//			ptr<puntoexe::stream> jpegStream(new puntoexe::stream);
	//			jpegStream->openFile(jpegFileName.str(), std::ios_base::out | std::ios_base::trunc);
	//			ptr<puntoexe::streamWriter> jpegWriter(new streamWriter(jpegStream));
	//			ptr<codecs::codec> outputCodec(codecsFactory->getCodec(jpegTransferSyntax));
	//			outputCodec->write(jpegWriter, jpegDataSet);
	//			
	//		}
	//	}
	//	catch(dataSetImageDoesntExist&)
	//	{
	//		// Ignore this exception. It is thrown when we reach the
	//		//  end of the images list
	//		exceptionsManager::getMessage(); 
	//	}
	//	DeleteContents();
	//    // 设置文件名称
	//	SetPathName(lpszPathName);
	//	// 初始化胀标记为FALSE
	//	SetModifiedFlag(FALSE);

	//	return TRUE;
	//}
	//catch(...)
	//{
	//	std::wcout << exceptionsManager::getMessage();
	//	return FALSE;
	//}

}
