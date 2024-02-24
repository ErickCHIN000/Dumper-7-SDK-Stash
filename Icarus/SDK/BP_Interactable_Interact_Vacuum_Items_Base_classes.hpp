#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x44 (0x12C - 0xE8)
// BlueprintGeneratedClass BP_Interactable_Interact_Vacuum_Items_Base.BP_Interactable_Interact_Vacuum_Items_Base_C
class UBP_Interactable_Interact_Vacuum_Items_Base_C : public UInteractableBehaviour
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_DeployableBase_C*                  Deployable;                                        // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemsStaticRowHandle                 Item;                                              // 0xF8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        Count;                                             // 0x110(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49A2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryIDEnum                      Inventory_ID;                                      // 0x118(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                        Max;                                               // 0x128(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Interactable_Interact_Vacuum_Items_Base_C* GetDefaultObj();

	bool CanInteract(class AActor* Instigator, const struct FHitResult& HitResult, TArray<struct FStatsEnum>& K2Node_MakeArray_Array, enum class EValid CallFunc_GetTrait_Paths, class UInventoryComponent* CallFunc_GetTrait_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsFunctional_bFunctional, enum class EValid CallFunc_GetTrait_Paths_1, class UInventoryComponent* CallFunc_GetTrait_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, int32 CallFunc_FindItemsTotal_ReturnValue, TArray<struct FStatsEnum>& K2Node_MakeArray_Array_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_FindItemsTotal_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue);
	void Interact(class AActor* Instigator, struct FHitResult& HitResult);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Interactable_Interact_Vacuum_Items_Base(int32 EntryPoint, class AActor* K2Node_Event_Instigator, const struct FHitResult& K2Node_Event_HitResult, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_DeployableBase_C* K2Node_DynamicCast_AsBP_Deployable_Base, bool K2Node_DynamicCast_bSuccess);
};

}


