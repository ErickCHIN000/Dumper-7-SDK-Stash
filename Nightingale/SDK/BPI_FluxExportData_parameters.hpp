#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x9 - 0x0)
// Function BPI_FluxExportData.BPI_FluxExportData_C.CopyPropertiesToObject
struct IBPI_FluxExportData_C_CopyPropertiesToObject_Params
{
public:
	class UObject*                               Destination;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Done;                                              // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPI_FluxExportData.BPI_FluxExportData_C.GetExternalReferences
struct IBPI_FluxExportData_C_GetExternalReferences_Params
{
public:
	TArray<class UTexture*>                      Objects;                                           // 0x0(0x10)(Parm, OutParm)
};

}
}


