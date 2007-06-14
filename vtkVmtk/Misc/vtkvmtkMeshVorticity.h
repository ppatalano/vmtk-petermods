/*=========================================================================

Program:   VMTK
Module:    $RCSfile: vtkvmtkMeshVorticity.h,v $
Language:  C++
Date:      $Date: 2006/07/27 08:28:36 $
Version:   $Revision: 1.1 $

  Copyright (c) Luca Antiga, David Steinman. All rights reserved.
  See LICENCE file for details.

  Portions of this code are covered under the VTK copyright.
  See VTKCopyright.txt or http://www.kitware.com/VTKCopyright.htm 
  for details.

     This software is distributed WITHOUT ANY WARRANTY; without even 
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR 
     PURPOSE.  See the above copyright notices for more information.

=========================================================================*/
  // .NAME vtkvmtkMeshVorticity - ...
  // .SECTION Description
  // .

#ifndef __vtkvmtkMeshVorticity_h
#define __vtkvmtkMeshVorticity_h

#include "vtkUnstructuredGridAlgorithm.h"
#include "vtkUnstructuredGrid.h"
#include "vtkvmtkWin32Header.h"

class VTK_VMTK_MISC_EXPORT vtkvmtkMeshVorticity : public vtkUnstructuredGridAlgorithm
{
  public: 
  vtkTypeRevisionMacro(vtkvmtkMeshVorticity,vtkUnstructuredGridAlgorithm);
  void PrintSelf(ostream& os, vtkIndent indent); 

  static vtkvmtkMeshVorticity *New();

  vtkSetStringMacro(VelocityArrayName);
  vtkGetStringMacro(VelocityArrayName);
 
  vtkSetStringMacro(VorticityArrayName);
  vtkGetStringMacro(VorticityArrayName);
 
  protected:
  vtkvmtkMeshVorticity();
  ~vtkvmtkMeshVorticity();  

  virtual int RequestData(vtkInformation *, vtkInformationVector **, vtkInformationVector *);

  char* VelocityArrayName;
  char* VorticityArrayName;

  private:
  vtkvmtkMeshVorticity(const vtkvmtkMeshVorticity&);  // Not implemented.
  void operator=(const vtkvmtkMeshVorticity&);  // Not implemented.
};

#endif
