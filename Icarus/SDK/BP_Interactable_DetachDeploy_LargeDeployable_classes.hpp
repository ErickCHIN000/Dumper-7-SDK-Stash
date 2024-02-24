#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x120 - 0x108)
// BlueprintGeneratedClass BP_Interactable_DetachDeploy_LargeDeployable.BP_Interactable_DetachDeploy_LargeDeployable_C
class UBP_Interactable_DetachDeploy_LargeDeployable_C : public UBP_Interactable_Pickup_Item_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x108(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_DeployableBase_C*                  Deployable;                                        // 0x110(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusItem*                           HeldDeployable;                                    // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Interactable_DetachDeploy_LargeDeployable_C* GetDefaultObj();

	void OnDestroyFocusedDeployable(class AActor* DestroyedActor, enum class EValid CallFunc_GetTrait_Paths, class UBP_DeployableBehaviour_LargeDeployable_C* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue);
	void Pickup_Item(bool* PickedUp, enum class EValid CallFunc_GetTrait_Paths, class UBP_DeployableBehaviour_LargeDeployable_C* CallFunc_GetTrait_ReturnValue, enum class EValid CallFunc_GetTrait_Paths_1, class UFocusableComponent* CallFunc_GetTrait_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsValid_ReturnValue, const struct FIcarusItemSpawnParameters& K2Node_MakeStruct_IcarusItemSpawnParameters, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AIcarusItem* CallFunc_SpawnItemActor_ReturnValue, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, enum class EDataValid CallFunc_ItemDataValid_Paths, const struct FFocusableData& CallFunc_GetFocusableData_FocusableData, enum class EDataValid CallFunc_GetFocusableData_Paths, bool K2Node_SwitchEnum_CmpSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_3);
	bool CanInteract(class AActor* Instigator, const struct FHitResult& HitResult, bool bHasItems);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Interactable_DetachDeploy_LargeDeployable(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_DeployableBase_C* K2Node_DynamicCast_AsBP_Deployable_Base, bool K2Node_DynamicCast_bSuccess);
};

}


