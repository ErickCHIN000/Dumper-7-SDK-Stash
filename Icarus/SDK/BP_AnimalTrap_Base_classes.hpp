#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x24 (0x798 - 0x774)
// BlueprintGeneratedClass BP_AnimalTrap_Base.BP_AnimalTrap_Base_C
class ABP_AnimalTrap_Base_C : public ABP_DeployableBase_C
{
public:
	uint8                                        Pad_3B1C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x778(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                         Box;                                               // 0x780(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        AttractionRadius;                                  // 0x788(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsTrapOccupied;                                    // 0x78C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B2B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventory*                            InventoryRef;                                      // 0x790(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_AnimalTrap_Base_C* GetDefaultObj();

	void Deployable_Interact(class AActor* Interactor, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess, enum class EValid CallFunc_GetTrait_Paths, class UInventoryComponent* CallFunc_GetTrait_ReturnValue, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class UInventory* CallFunc_GetInventory_ReturnValue, class AIcarusPlayerControllerSurvival* K2Node_DynamicCast_AsIcarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void OnAnimalTrapped(const struct FItemsStaticRowHandle& Item_Static_Data, const struct FItemDynamicData& K2Node_MakeStruct_ItemDynamicData, TArray<struct FItemDynamicData>& K2Node_MakeArray_Array, const struct FItemData& K2Node_MakeStruct_ItemData, const struct FItemData& CallFunc_CreateItem_ReturnValue, int32 CallFunc_AutomaticallyPlaceItem_PlacedLocation, bool CallFunc_AutomaticallyPlaceItem_ReturnValue);
	void Setup(enum class EValid CallFunc_GetTrait_Paths, class UInventoryComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UInventory* CallFunc_GetInventory_ReturnValue);
	void ReceiveBeginPlay();
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void OnItemRemoved(class UInventory* Inventory, int32 Location);
	void OnItemAdded(class UInventory* Inventory, int32 Location);
	void Multi_TrapTriggered(bool ItemAdded);
	void ExecuteUbergraph_BP_AnimalTrap_Base(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, class UFMODEvent* Temp_object_Variable, class UFMODEvent* Temp_object_Variable_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class UInventory* K2Node_CustomEvent_Inventory_1, int32 K2Node_CustomEvent_Location_1, class AIcarusNPCGOAPCharacter* K2Node_DynamicCast_AsIcarus_NPCGOAPCharacter, bool K2Node_DynamicCast_bSuccess, class UInventory* K2Node_CustomEvent_Inventory, int32 K2Node_CustomEvent_Location, const struct FAISetup& CallFunc_GetAISetupStruct_AISetup, enum class EValid CallFunc_GetAISetupStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_CustomEvent_ItemAdded, const struct FTransform& CallFunc_GetTransform_ReturnValue, class UFMODEvent* K2Node_Select_Default, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
};

}


