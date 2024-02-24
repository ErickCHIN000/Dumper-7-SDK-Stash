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

// 0x30 (0x30 - 0x0)
// Function wid_DialogueDebugDTChoiceEntry.wid_DialogueDebugDTChoiceEntry_C.ExecuteUbergraph_wid_DialogueDebugDTChoiceEntry
struct UWid_DialogueDebugDTChoiceEntry_C_ExecuteUbergraph_wid_DialogueDebugDTChoiceEntry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F54[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetDisplayName_ReturnValue;               // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x18(0x18)(None)
};

// 0x8 (0x8 - 0x0)
// Function wid_DialogueDebugDTChoiceEntry.wid_DialogueDebugDTChoiceEntry_C.Hovered__DelegateSignature
struct UWid_DialogueDebugDTChoiceEntry_C_Hovered__DelegateSignature_Params
{
public:
	class FName                                  RowName;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function wid_DialogueDebugDTChoiceEntry.wid_DialogueDebugDTChoiceEntry_C.Selected__DelegateSignature
struct UWid_DialogueDebugDTChoiceEntry_C_Selected__DelegateSignature_Params
{
public:
	class UDataTable*                            DataDT;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            MetaDataDT;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


