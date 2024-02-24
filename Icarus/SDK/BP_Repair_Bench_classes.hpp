#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x790 - 0x774)
// BlueprintGeneratedClass BP_Repair_Bench.BP_Repair_Bench_C
class ABP_Repair_Bench_C : public ABP_DeployableBase_C
{
public:
	uint8                                        Pad_3908[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x778(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                      Camera;                                            // 0x780(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UClass*                                WidgetClassToOpen;                                 // 0x788(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Repair_Bench_C* GetDefaultObj();

	bool RepairHasShelter(class AIcarusPlayerCharacter* CraftingPlayer, bool CallFunc_CanSkipShelterCheck_ReturnValue, bool CallFunc_IsSheltered_ReturnValue);
	bool CanRepairItem(struct FItemData& Item, enum class ERepairItemTier CallFunc_RepairItemTier_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void Deployable_Interact(class AActor* Interactor, class AIcarusPlayerCharacterSurvival* K2Node_DynamicCast_AsIcarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, class AIcarusPlayerControllerSurvival* K2Node_DynamicCast_AsIcarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Repair_Bench(int32 EntryPoint);
};

}


