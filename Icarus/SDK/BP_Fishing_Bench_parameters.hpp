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

// 0x8 (0x8 - 0x0)
// Function BP_Fishing_Bench.BP_Fishing_Bench_C.GenericActionWithCharacter
struct ABP_Fishing_Bench_C_GenericActionWithCharacter_Params
{
public:
	class AIcarusPlayerCharacter*                Character;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x509 (0x509 - 0x0)
// Function BP_Fishing_Bench.BP_Fishing_Bench_C.ExecuteUbergraph_BP_Fishing_Bench
struct ABP_Fishing_Bench_C_ExecuteUbergraph_BP_Fishing_Bench_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6641[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FItemDynamicData>              K2Node_MakeArray_Array;                            // 0x8(0x10)(ReferenceParm)
	struct FItemData                             K2Node_MakeStruct_ItemData;                        // 0x18(0x1F0)(ContainsInstancedReference)
	struct FItemData                             CallFunc_CreateItem_ReturnValue;                   // 0x208(0x1F0)(ContainsInstancedReference)
	class AIcarusPlayerCharacter*                K2Node_Event_Character;                            // 0x3F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x400(0x30)(ConstParm, IsPlainOldData, NoDestructor)
	struct FIcarusItemSpawnParametersAdvanced    K2Node_MakeStruct_IcarusItemSpawnParametersAdvanced; // 0x430(0x38)(None)
	struct FIcarusItemSpawnParameters            K2Node_MakeStruct_IcarusItemSpawnParameters;       // 0x468(0x90)(None)
	class AIcarusItem*                           CallFunc_SpawnItemActor_ReturnValue;               // 0x4F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_DeployableBase_C*                  K2Node_DynamicCast_AsBP_Deployable_Base;           // 0x500(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x508(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


