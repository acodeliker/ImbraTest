= = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =

MICROSOFT base class library: an overview of the Imbratest project

= = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =



The application wizard has created this Imbratest application for you.

This application not only introduces the basics of using Microsoft base classes,

And it's the starting point for writing applications.



This file contains a summary of the contents of each file that makes up the Imbratest application.



Imbratest. Vcproj

This is the main project file of the VC++ project generated using the application wizard.

It contains information about the Visual C++ version of the generated file, as well

Information about the platform, configuration, and project functionality selected with the application wizard.



Imbratest. H

This is the main header file for the application. It contains other project-specific header files (including resource-h),

And declare the CImbratestApp application class.



Imbratest. CPP

This is the main application source file that contains the application class CImbratestApp.



Imbratest. Rc

This is a list of all Microsoft Windows resources used by the program.

It contains ICONS, bitmaps, and cursors stored in the RES subdirectory.

You can edit this file directly in Microsoft Visual C++. Project resources are included in 2052.



Res \ Imbratest ico

This is an icon file that is used as an icon for the application.

This icon is contained in the main resource file, Imbratest. Rc.



Res \ Imbratest rc2

This file is not included by Microsoft

Resources for Visual C++ editing.

All resources that cannot be edited by the resource editor should be placed in this file.

/////////////////////////////////////////////////////////////////////////////





For the main frame window:

The project will include a standard MFC interface.

MainFrm. J h, MainFrm. CPP

These files contain the frame class CMainFrame,

This class is derived from CMDIFrameWnd and controls all MDI framework functionality.



Res \ Toolbar. BMP

This bitmap file is used to create a tile image of the toolbar.

The initial toolbar and the status bar are constructed in the CMainFrame class.

Edit the toolbar bitmap using the resource editor,

Update the IDR_MAINFRAME TOOLBAR array in imbratest.rc to add TOOLBAR buttons.

/////////////////////////////////////////////////////////////////////////////



For the subframe window:



ChildFrm. H, ChildFrm. CPP

These files define and implement the CChildFrame class,

This class supports subwindows in MDI applications.



/////////////////////////////////////////////////////////////////////////////







The application wizard creates a document type and a view:



Imbratestdoc. h, imbratestdoc. CPP - document

These files contain the CImbratestDoc class. Edit these files

To add special document data and to save and load files

(via CImbratestDoc::Serialize).



H, imbratestview. CPP - document view

These files contain the CImbratestView class.

The CImbratestView object is used to view the CImbratestDoc object.

Res \ ImbratestDoc ico

This is an icon file to use as

Icon for the CImbratestDoc class MDI child window. This icon is contained in the main

Resource file Imbratest. Rc.

/////////////////////////////////////////////////////////////////////////////



Other functions:



ActiveX control

Applications support the use of ActiveX controls.



Print support and print preview support

The application wizard has generated some code by calling the member functions in the CView class from the MFC library

Handles printing, printing Settings, and printing preview commands.

/////////////////////////////////////////////////////////////////////////////



Other standard documents:



StdAfx. H, StdAfx. CPP

These files are used to generate a precompiled header file named imbratest.pch

And a precompiled type file named stdafx.obj.



The Resource. H

This is the standard header file that defines the new resource ID.

Microsoft Visual C++ will read and update this file.



/////////////////////////////////////////////////////////////////////////////



Other notes:



The application wizard USES "TODO:" to indicate

The source code section should be added or customized.



If the application USES MFC in a Shared DLL,

And the language used by the application is not the current language of the operating system,

Need to be from the Windows \System directory on the Microsoft Visual C++ CD

Copy the corresponding localization resource mfc70xxx. DLL to the system or system32 directory of the computer,

And rename it mfcloc.dll.

(" XXX "stands for language abbreviation. For example, mfc70deu.dll contains resources that are translated into German.

If you don't, some of the application's UI elements will remain as the language of the operating system.



/////////////////////////////////////////////////////////////////////////////
