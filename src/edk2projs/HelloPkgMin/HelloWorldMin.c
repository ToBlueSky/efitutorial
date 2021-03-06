/*
*   Copyright (c) 2017, General Electric Company. All rights reserved.<BR>
*
*   This program and the accompanying materials
*   are licensed and made available under the terms and conditions of the BSD License
*   which accompanies this distribution. The full text of the license may be found at
*   http://opensource.org/licenses/bsd-license.php
*
*   THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
*   WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.
*
*/

#include <Uefi.h>
#include <Library/UefiLib.h>

EFI_STATUS EFIAPI UefiMain ( IN EFI_HANDLE        ImageHandle,
                             IN EFI_SYSTEM_TABLE  *SystemTable)
{
    Print(L"A simple EDK II hello\n");
    return EFI_UNSUPPORTED;
}

