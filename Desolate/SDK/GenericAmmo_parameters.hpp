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

// 0x1C8 (0x1C8 - 0x0)
// Function GenericAmmo.GenericAmmo_C.GetSelectionInfo
struct AGenericAmmo_C_GetSelectionInfo_Params
{
public:
	class AActor*                                TargetActor;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_Selection                          Result;                                            // 0x8(0x59)(Parm, OutParm, HasGetValueTypeHash)
	uint8                                        Pad_156B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASHPlayerCharacter*                    K2Node_DynamicCast_AsSHPlayer_Character;           // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_156D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_Selection                          K2Node_MakeStruct_S_Selection;                     // 0x78(0x59)(HasGetValueTypeHash)
	uint8                                        Pad_1572[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetDisassembleMoney_ReturnValue;          // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1575[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_GetDefaultObject_ReturnValue;             // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGenericItem_C*                        K2Node_DynamicCast_AsGeneric_Item;                 // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_157C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ISelectionInfo_C>     CallFunc_GetSelectionInfo_self_CastInput;          // 0xF8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FS_Selection                          CallFunc_GetSelectionInfo_result;                  // 0x108(0x59)(HasGetValueTypeHash)
	uint8                                        Pad_157E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_Selection                          K2Node_MakeStruct_S_Selection_1;                   // 0x168(0x59)(HasGetValueTypeHash)
	uint8                                        Pad_1581[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


