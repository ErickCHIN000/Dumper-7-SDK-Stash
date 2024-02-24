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

// 0x10 (0x10 - 0x0)
// Function Gridly.GridlyBPFunctionLibrary.UpdateLocalizationPreview
struct UGridlyBPFunctionLibrary_UpdateLocalizationPreview_Params
{
public:
	TArray<struct FPolyglotTextData>             PolyglotTextDatas;                                 // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Gridly.GridlyBPFunctionLibrary.GetLocalizationPreviewCulture
struct UGridlyBPFunctionLibrary_GetLocalizationPreviewCulture_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Gridly.GridlyBPFunctionLibrary.EnableLocalizationPreview
struct UGridlyBPFunctionLibrary_EnableLocalizationPreview_Params
{
public:
	class FString                                Culture;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Gridly.GridlyTask_DownloadLocalizedTexts.DownloadLocalizedTexts
struct UGridlyTask_DownloadLocalizedTexts_DownloadLocalizedTexts_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGridlyTask_DownloadLocalizedTexts*    ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Gridly.GridlyTask_ImportDataTableFromGridly.ImportDataTableFromGridly
struct UGridlyTask_ImportDataTableFromGridly_ImportDataTableFromGridly_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGridlyDataTable*                      GridlyDataTable;                                   // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGridlyTask_ImportDataTableFromGridly* ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


