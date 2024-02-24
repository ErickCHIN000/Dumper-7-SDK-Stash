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

// 0x281 (0x281 - 0x0)
// Function UMG_DropshipEntry.UMG_DropshipEntry_C.SetSelected
struct UUMG_DropshipEntry_C_SetSelected_Params
{
public:
	bool                                         Selected;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_51CD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FButtonStyle                          Style;                                             // 0x8(0x278)(Edit, BlueprintVisible)
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x280(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x6E8 (0x6E8 - 0x0)
// Function UMG_DropshipEntry.UMG_DropshipEntry_C.SetDropship
struct UUMG_DropshipEntry_C_SetDropship_Params
{
public:
	struct FDropship                             Dropship;                                          // 0x0(0xE0)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         Valid;                                             // 0xE0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0xE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0xE2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0xE3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0xE4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_52AA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xE8(0x18)(None)
	struct FItemData                             CallFunc_ConvertToItem_ReturnValue;                // 0x100(0x1F0)(ContainsInstancedReference)
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x2F0(0x18)(None)
	struct FItemData                             CallFunc_ConvertToItem_ReturnValue_1;              // 0x308(0x1F0)(ContainsInstancedReference)
	struct FItemData                             CallFunc_ConvertToItem_ReturnValue_2;              // 0x4F8(0x1F0)(ContainsInstancedReference)
};

// 0x11 (0x11 - 0x0)
// Function UMG_DropshipEntry.UMG_DropshipEntry_C.ExecuteUbergraph_UMG_DropshipEntry
struct UUMG_DropshipEntry_C_ExecuteUbergraph_UMG_DropshipEntry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5332[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBackendProxyComponent*                CallFunc_GetBackendProxyComponent_BackendProxyComponent; // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetBackendProxyComponent_bSuccess;        // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function UMG_DropshipEntry.UMG_DropshipEntry_C.DropshipSelected__DelegateSignature
struct UUMG_DropshipEntry_C_DropshipSelected__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


