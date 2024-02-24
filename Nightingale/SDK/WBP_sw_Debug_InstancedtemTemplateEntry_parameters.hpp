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
// Function WBP_sw_Debug_InstancedtemTemplateEntry.WBP_sw_Debug_InstancedtemTemplateEntry_C.GetTooltipWidget_0
struct UWBP_sw_Debug_InstancedtemTemplateEntry_C_GetTooltipWidget_0_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_ItemTooltip_C*                    CallFunc_Create_ReturnValue;                       // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function WBP_sw_Debug_InstancedtemTemplateEntry.WBP_sw_Debug_InstancedtemTemplateEntry_C.ExecuteUbergraph_WBP_sw_Debug_InstancedtemTemplateEntry
struct UWBP_sw_Debug_InstancedtemTemplateEntry_C_ExecuteUbergraph_WBP_sw_Debug_InstancedtemTemplateEntry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4636[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x8(0x18)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4638[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x48(0x18)(None)
};

// 0x10 (0x10 - 0x0)
// Function WBP_sw_Debug_InstancedtemTemplateEntry.WBP_sw_Debug_InstancedtemTemplateEntry_C.ItemClicked__DelegateSignature
struct UWBP_sw_Debug_InstancedtemTemplateEntry_C_ItemClicked__DelegateSignature_Params
{
public:
	struct FDataTableRowHandle                   ItemDataRowHandle;                                 // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

}
}


