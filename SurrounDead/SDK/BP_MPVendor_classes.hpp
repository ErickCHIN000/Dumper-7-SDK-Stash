#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x72 (0x30A - 0x298)
// BlueprintGeneratedClass BP_MPVendor.BP_MPVendor_C
class ABP_MPVendor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAIOSubjectComponent*                  AIOSubject;                                        // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_JigMultiplayer_C*                  BP_JigMultiplayer;                                 // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FText                                  Vendor;                                            // 0x2C0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	TSubclassOf<class UDialogue>                 Dialogue;                                          // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class AActor*                                CurrentActor;                                      // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                               InteractingActorLoc;                               // 0x2E8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerCharacter_C*                 PlayerRef;                                         // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldRotate_;                                     // 0x308(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Outline_;                                          // 0x309(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_MPVendor_C* GetDefaultObj();

	void JigMP_GetLootWidget(class UWidget** Result, bool* Valid_);
	void JigMP_OnContainersSwap(class UJSIContainer_C* Container1, class UJSIContainer_C* Container2, bool* Result);
	void JigMP_OnItemDropped(int32 ItemUID, int32 FromContainerUID, class AActor* ActorRef, bool* Result);
	void JigMP_OnItemRemoved(int32 ItemUID, int32 FromContainerUID, int32 TocontainerUID, class UBP_JigMultiplayer_C* ToComponent, bool* Result);
	void JigMP_OnItemAdded(int32 ItemUID, int32 FromContainerUID, int32 TocontainerUID, class UBP_JigMultiplayer_C* FromComponent, bool* Result);
	void JigMP_OnItemMoved(int32 ItemUID, int32 FromContainerUID, int32 TocontainerUID, bool* Result);
	void JigMP_OnTwoContainersSwap(class FName FromContainer, class FName ToContainer, bool* Result);
	void JigMP_OnUpdateChamberUID(int32 NewUID, bool* Result);
	void JigMP_OnItemConsumed(const struct FRepItemInfo& ConsumedItem, int32 Amount, int32 Remaining, const struct FRepItemInfo& InsideOf, class FName FromContainer, bool* Result);
	void JigMP_OnMainContainerItemRemoved(int32 FromContainerUID, int32 ItemUID, class FName ContainerName, const struct FRepItemInfo& ItemRemovedInfo, bool* Result);
	void JigMP_OnMainContainerItemAdded(int32 TocontainerUID, int32 ItemUID, class FName ToContainerName, const struct FRepItemInfo& ItemInfo, class FName FromMain, bool* Result, class AActor** ActorRef);
	void JigMP_OnPickupAdded(const struct FRepItemInfo& Info, int32 ItemUID, int32 TocontainerUID, class FName ToContainer, bool* Result);
	void JigMP_OnPickupEquipped(class AActor* ActorRef, class FName ToContainerName, int32 UID, int32 TocontainerUID, const struct FRepItemInfo& Info, bool* Result);
	void JigMP_OnRequestDropItem(const struct FRepItemInfo& ItemInfo, class FName ContainerName, class AActor** ActorRef, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, class UDataTable* CallFunc_GetDtRef_DTReference, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FFItemInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, float CallFunc_MakeRotator_Yaw_ImplicitCast);
	void GetInteractOptions(bool* EnableContext_, TArray<class FText>* Options, TArray<class FText>* Stats);
	void OnRequestServerInteract(class AActor* Actor, int32 OptionIndex, bool* Result);
	void SetPickupCount(int32 NewCount, bool* Result);
	void JigSetCanInteract(bool CanInteract, bool EnablePhysics, bool* Result);
	void JigCanInteract(bool* Result);
	void GetItemInfo(struct FFItemInfo* Info, struct FS_RandomStatsConfig* RandomStatsConfig);
	void GetJigMultiplayerComponent(class UBP_JigMultiplayer_C** JigComp);
	void FacePlayer(class AActor* Target, double CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FRotator& CallFunc_RInterpTo_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, float CallFunc_RInterpTo_DeltaTime_ImplicitCast);
	void CheckDistanceFromActor(TScriptInterface<class IBP_JigCharacterInterface_C> K2Node_DynamicCast_AsBP_Jig_Character_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_OnInteractActorOverDistance_Result, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_VSize_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue);
	void OnStopExecuteInteract(class AActor* InteractingActor);
	void SetInteractOption(int32 OptionIndex);
	void ReceiveBeginPlay();
	void Outline(bool NewValue);
	void OnExecuteInteract_Dialogue(class AActor* InteractingActor);
	void OnExecuteInteractEnded();
	void OnServerExecuteInteract(int32 OptionIndex, class AActor* ByActor);
	void OnExecuteInteract(class AActor* InteractingActor, int32 OptionIndex);
	void OnBeginInteract(class AActor* InteractingActor);
	void OnEndInteract();
	void BndEvt__BP_MPVendor_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature(bool bIsBeyondLastLayer, int32 LayerIndex, bool bIsSeen);
	void ExecuteUbergraph_BP_MPVendor(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* K2Node_Event_InteractingActor_3, int32 K2Node_Event_OptionIndex_2, bool K2Node_CustomEvent_NewValue, class AHUD_Game_C* CallFunc_GetHUD_HUD, class AHUD_Game_C* CallFunc_GetHUD_HUD_1, TScriptInterface<class IBP_JigCharacterInterface_C> K2Node_DynamicCast_AsBP_Jig_Character_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBP_JigCharacterInterface_C> K2Node_DynamicCast_AsBP_Jig_Character_Interface_1, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UNarrativeComponent* CallFunc_GetNarrativeComponent_ReturnValue, bool CallFunc_BeginDialogue_ReturnValue, class AActor* K2Node_Event_InteractingActor_2, class UUserWidget* CallFunc_SetupInventoryWidget_InventoryWidgetRef, bool CallFunc_IsInventoryVisible__Result, bool CallFunc_AddJigWidgetToContent_Result, bool CallFunc_Not_PreBool_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_1, bool CallFunc_RequestServerData_Result, int32 K2Node_Event_OptionIndex_1, class AActor* K2Node_Event_ByActor, class AActor* K2Node_Event_InteractingActor_1, int32 K2Node_Event_OptionIndex, class AActor* K2Node_Event_InteractingActor, bool K2Node_ComponentBoundEvent_bIsBeyondLastLayer, int32 K2Node_ComponentBoundEvent_LayerIndex, bool K2Node_ComponentBoundEvent_bIsSeen, bool K2Node_SwitchInteger_CmpSuccess);
};

}

