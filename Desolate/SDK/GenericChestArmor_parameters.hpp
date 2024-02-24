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

// 0x1B0 (0x1B0 - 0x0)
// Function GenericChestArmor.GenericChestArmor_C.GetSelectionInfo
struct AGenericChestArmor_C_GetSelectionInfo_Params
{
public:
	class AActor*                                TargetActor;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_Selection                          Result;                                            // 0x8(0x59)(Parm, OutParm, HasGetValueTypeHash)
	uint8                                        Pad_1058[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_Selection                          K2Node_MakeStruct_S_Selection;                     // 0x68(0x59)(HasGetValueTypeHash)
	uint8                                        Pad_105A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_GetDefaultObject_ReturnValue;             // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGenericItem_C*                        K2Node_DynamicCast_AsGeneric_Item;                 // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_105E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ISelectionInfo_C>     CallFunc_GetSelectionInfo_self_CastInput;          // 0xE0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FS_Selection                          CallFunc_GetSelectionInfo_result;                  // 0xF0(0x59)(HasGetValueTypeHash)
	uint8                                        Pad_1060[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_Selection                          K2Node_MakeStruct_S_Selection_1;                   // 0x150(0x59)(HasGetValueTypeHash)
	uint8                                        Pad_1061[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


