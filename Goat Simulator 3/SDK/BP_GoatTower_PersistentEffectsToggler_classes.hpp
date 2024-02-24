#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x2B0 - 0x230)
// BlueprintGeneratedClass BP_GoatTower_PersistentEffectsToggler.BP_GoatTower_PersistentEffectsToggler_C
class ABP_GoatTower_PersistentEffectsToggler_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UGGDynamicAssetHoldingComponent*       GGDynamicAssetHolding;                             // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DetailMeshRoot;                                    // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      Sphere;                                            // 0x250(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_ThroneRoom_Karmameter_Base;                     // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        TL_SpinMesh_HeightAlpha_71D638BC4733734D144E388BA708867C; // 0x268(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TL_SpinMesh_SpinAlpha_71D638BC4733734D144E388BA708867C; // 0x26C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                TL_SpinMesh__Direction_71D638BC4733734D144E388BA708867C; // 0x270(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BAE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    TL_SpinMesh;                                       // 0x278(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_Events_PersistentEffects        PersistentEffect;                                  // 0x280(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bPersistentEffectActive;                           // 0x281(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                         bIsSignificant;                                    // 0x282(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_BB5[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnPersistentEffectToggled;                         // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        Timestamp;                                         // 0x298(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BBB[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    DefaultMaterial;                                   // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    HologramMaterial;                                  // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_GoatTower_PersistentEffectsToggler_C* GetDefaultObj();

	bool ShouldShowInteractHintOnMobile();
	bool CanBeInteractedWith(class AActor* SourceActor, float CallFunc_GetTimeSince_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
	bool EndHold(float HeldFor);
	bool GetAutoInteractPastDuration();
	class FString GetInteractNotificationID();
	struct FGameplayTag GetInteractNotificationTag();
	class FText GetInteractTextBody(class AGGPlayerController* InteractingPlayerController);
	class FText GetInteractTextTitle(class AGGPlayerController* InteractingPlayerController, enum class E_Events_PersistentEffects Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable, enum class E_Events_PersistentEffects Temp_byte_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1, class FText K2Node_Select_Default_2);
	int32 GetNPCInteractionChance();
	float GetNPCRecentInteractDelay();
	float GetRequiredHoldDuration();
	bool Interact(class AActor* SourceActor, float HeldFor);
	bool InteractClient(class AActor* SourceActor, float HeldFor);
	bool StartHold();
	void OnRep_bPersistentEffectActive(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class USoundCue* CallFunc_GetLoadedAsset_ReturnValue, bool CallFunc_GetIsLoaded_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, class USoundCue* CallFunc_GetLoadedAsset_ReturnValue_1, bool CallFunc_GetIsLoaded_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1);
	void UserConstructionScript(enum class E_Events_PersistentEffects Temp_byte_Variable, const struct FVector& Temp_struct_Variable, const struct FVector& Temp_struct_Variable_1, enum class E_Events_PersistentEffects Temp_byte_Variable_1, const struct FRotator& Temp_struct_Variable_2, const struct FRotator& Temp_struct_Variable_3, enum class E_Events_PersistentEffects Temp_byte_Variable_2, const struct FVector& Temp_struct_Variable_4, const struct FVector& Temp_struct_Variable_5, enum class E_Events_PersistentEffects Temp_byte_Variable_3, class UStaticMesh* Temp_object_Variable, class UStaticMesh* Temp_object_Variable_1, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, const struct FVector& K2Node_Select_Default, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, const struct FRotator& K2Node_Select_Default_1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, const struct FVector& K2Node_Select_Default_2, class UStaticMesh* K2Node_Select_Default_3, bool CallFunc_SetStaticMesh_ReturnValue);
	void TL_SpinMesh__FinishedFunc();
	void TL_SpinMesh__UpdateFunc();
	void BndEvt__BP_GoatTower_PersistentEffectsToggler_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_1_OnLostSignificance__DelegateSignature(class UGGDynamicAssetHoldingComponent* DynAssetComp);
	void StartTimeline();
	void StopTimeline();
	void BndEvt__BP_GoatTower_PersistentEffectsToggler_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_2_OnGainedSignificance__DelegateSignature(class UGGDynamicAssetHoldingComponent* DynAssetComp);
	void GoatInteracted();
	void ExecuteUbergraph_BP_GoatTower_PersistentEffectsToggler(int32 EntryPoint, class UGGDynamicAssetHoldingComponent* K2Node_ComponentBoundEvent_DynAssetComp_1, bool CallFunc_Not_PreBool_ReturnValue, const struct FRotator& CallFunc_RLerp_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, float CallFunc_GetGameTimeInSeconds_ReturnValue, class UGGDynamicAssetHoldingComponent* K2Node_ComponentBoundEvent_DynAssetComp, const struct FVector& CallFunc_VLerp_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, TArray<class ABP_Event_TheButterflyEffect_C*>& CallFunc_GetAllActorsOfClass_OutActors, TArray<class ABP_Event_LazyWorkers_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, class ABP_Event_TheButterflyEffect_C* CallFunc_Array_Get_Item, class ABP_Event_LazyWorkers_C* CallFunc_Array_Get_Item_1, TArray<class ABP_Event_TheButterflyEffect_C*>& CallFunc_GetAllActorsOfClass_OutActors_2, bool K2Node_SwitchEnum_CmpSuccess_1, class ABP_Event_TheButterflyEffect_C* CallFunc_Array_Get_Item_2, TArray<class ABP_Event_LazyWorkers_C*>& CallFunc_GetAllActorsOfClass_OutActors_3, class ABP_Event_LazyWorkers_C* CallFunc_Array_Get_Item_3, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1);
	void OnPersistentEffectToggled__DelegateSignature(bool bActive);
};

}


