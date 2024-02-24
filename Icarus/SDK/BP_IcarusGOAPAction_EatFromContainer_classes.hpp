#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0xD0 - 0x80)
// BlueprintGeneratedClass BP_IcarusGOAPAction_EatFromContainer.BP_IcarusGOAPAction_EatFromContainer_C
class UBP_IcarusGOAPAction_EatFromContainer_C : public UBP_IcarusGOAPAction_Base_C
{
public:
	struct FTagQueriesRowHandle                  ValidFoodQuery;                                    // 0x80(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_GOAPInteractable_FoodNode_C*       SpawnedFoodNode;                                   // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Array_Index;                                       // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3299[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFLODTile*                             Tile;                                              // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RecordIndex;                                       // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FLODInstanceIndex;                                 // 0xB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_GOAP_Corpse_C*                     TargetCorpse;                                      // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxEatAmount;                                      // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsEating;                                          // 0xC4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32B2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          EatTimer;                                          // 0xC8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_IcarusGOAPAction_EatFromContainer_C* GetDefaultObj();

	bool Execute(class AIcarusNPCGOAPController* Controller, float Delta, bool CallFunc_Execute_ReturnValue);
	bool CheckContextualPreconditions(class AIcarusNPCGOAPController* Controller, float MaxDistance, bool CallFunc_CheckContextualPreconditions_ReturnValue);
	bool ExecutionComplete(class AIcarusNPCGOAPController* Controller, class FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_ExecutionComplete_ReturnValue, const struct FGOAPMotivationsRowHandle& CallFunc_MakeGOAPMotivations_ReturnValue, bool CallFunc_UpdateMotivationValue_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


