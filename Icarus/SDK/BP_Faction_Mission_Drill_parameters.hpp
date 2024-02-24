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

// 0x1 (0x1 - 0x0)
// Function BP_Faction_Mission_Drill.BP_Faction_Mission_Drill_C.GeneratorStateUpdate
struct ABP_Faction_Mission_Drill_C_GeneratorStateUpdate_Params
{
public:
	bool                                         Active;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x48 (0x48 - 0x0)
// Function BP_Faction_Mission_Drill.BP_Faction_Mission_Drill_C.SetCosmeticsState
struct ABP_Faction_Mission_Drill_C_SetCosmeticsState_Params
{
public:
	bool                                         Active;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4066[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_Conv_VectorToTransform_ReturnValue;       // 0x10(0x30)(IsPlainOldData, NoDestructor)
	struct FFMODEventInstance                    CallFunc_PlayEventAtLocation_ReturnValue;          // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_Faction_Mission_Drill.BP_Faction_Mission_Drill_C.OnEnergyStateUpdated
struct ABP_Faction_Mission_Drill_C_OnEnergyStateUpdated_Params
{
public:
	bool                                         IsActive;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3D1 (0x3D1 - 0x0)
// Function BP_Faction_Mission_Drill.BP_Faction_Mission_Drill_C.ExecuteUbergraph_BP_Faction_Mission_Drill
struct ABP_Faction_Mission_Drill_C_ExecuteUbergraph_BP_Faction_Mission_Drill_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4176[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x10(0x30)(ConstParm, IsPlainOldData, NoDestructor)
	struct FIcarusItemConstructionParameters     K2Node_MakeStruct_IcarusItemConstructionParameters; // 0x40(0x28)(None)
	uint8                                        Pad_4182[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue_1;               // 0x70(0x30)(ConstParm, IsPlainOldData, NoDestructor)
	struct FIcarusItemSpawnParameters            K2Node_MakeStruct_IcarusItemSpawnParameters;       // 0xA0(0x90)(None)
	struct FIcarusItemSpawnParameters            K2Node_MakeStruct_IcarusItemSpawnParameters_1;     // 0x130(0x90)(None)
	class AIcarusItem*                           CallFunc_SpawnItemActor_ReturnValue;               // 0x1C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FItemDynamicData>              K2Node_MakeArray_Array;                            // 0x1C8(0x10)(ReferenceParm)
	struct FItemData                             K2Node_MakeStruct_ItemData;                        // 0x1D8(0x1F0)(ContainsInstancedReference)
	class AIcarusItem*                           CallFunc_SpawnItemActor_ReturnValue_1;             // 0x3C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsActive;                             // 0x3D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


