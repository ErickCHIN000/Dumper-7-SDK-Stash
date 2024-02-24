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

// 0x274 (0x274 - 0x0)
// Function BP_ResourceGlossaryHelper.BP_ResourceGlossaryHelper_C.GetItemRewardsFromCreatureDataTable
struct UBP_ResourceGlossaryHelper_C_GetItemRewardsFromCreatureDataTable_Params
{
public:
	TArray<struct FCreatureRewardAndRealm>       CreatureRewardAndRealms;                           // 0x0(0x10)(Parm, OutParm)
	TArray<struct FCreatureRewardAndRealm>       LCreatureDataAndRealms;                            // 0x10(0x10)(Edit, BlueprintVisible)
	class UDataTable*                            L_CDT_CreatureData;                                // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4C11[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CallFunc_GetDataTableRowNames_OutRowNames;         // 0x38(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x4C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4C18[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_BPCreatureData                     CallFunc_GetDataTableRowFromName_OutRow;           // 0x58(0x190)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x1E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4C1C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_CreatureUIData                     CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x1F0(0x59)(HasGetValueTypeHash)
	uint8                                        Pad_4C1F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x250(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4C23[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCreatureRewardAndRealm               K2Node_MakeStruct_CreatureRewardAndRealm;          // 0x258(0x18)(None)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x270(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


