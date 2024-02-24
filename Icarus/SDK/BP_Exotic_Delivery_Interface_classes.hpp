#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x36 (0x7AA - 0x774)
// BlueprintGeneratedClass BP_Exotic_Delivery_Interface.BP_Exotic_Delivery_Interface_C
class ABP_Exotic_Delivery_Interface_C : public ABP_DeployableBase_C
{
public:
	uint8                                        Pad_3615[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x778(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFMODAudioComponent*                   FMODAudio_Analyzer;                                // 0x780(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                      Camera;                                            // 0x788(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_Exotic_Transport_Pod_C*            SpawnedTransportPod;                               // 0x790(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FItemData>                     PendingDropshipItems;                              // 0x798(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         WaitingForPod;                                     // 0x7A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         WaitingForContents;                                // 0x7A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_Exotic_Delivery_Interface_C* GetDefaultObj();

	void GetRedirectedInventoryComponent(class UInventoryComponent** InventoryComponent);
	void Deployable_Interact(class AActor* Interactor, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, class ABP_IcarusPlayerControllerSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess_1);
	void GenericAction();
	void IcarusBeginPlay();
	void GenericActionWithCharacter(class AIcarusPlayerCharacter* Character);
	void OnReceivedPlayerLoadoutExtension(TArray<struct FItemData>& Items);
	void DropPodLeft();
	void SpawnNewPod();
	void CheckSpawnNewPod();
	void ExecuteUbergraph_BP_Exotic_Delivery_Interface(int32 EntryPoint, TArray<struct FItemData>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_GenericAction_C> CallFunc_GenericAction_self_CastInput, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_Exotic_Transport_Pod_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_RemoveGameplayTag_ReturnValue, class AIcarusPlayerCharacter* K2Node_Event_Character, TArray<struct FItemData>& K2Node_CustomEvent_Items, bool CallFunc_IsValid_ReturnValue_1, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UPlayerDataComponent* CallFunc_GetPlayerDataComponent_ReturnValue, bool CallFunc_HasTag_ReturnValue, class UInventory* CallFunc_GetInventory_ReturnValue, TArray<struct FItemData>& K2Node_MakeArray_Array_1, TArray<struct FItemData>& CallFunc_ForceAddItems_RemainingItems);
};

}


