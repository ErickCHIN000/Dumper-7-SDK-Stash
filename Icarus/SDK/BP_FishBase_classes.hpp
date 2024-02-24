#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x128 (0x528 - 0x400)
// BlueprintGeneratedClass BP_FishBase.BP_FishBase_C
class ABP_FishBase_C : public AFishActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x400(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UExperienceComponent*                  Experience;                                        // 0x408(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHighlightableComponent*               Highlightable;                                     // 0x410(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                Interactable;                                      // 0x418(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_BuoyancyComponent_C*               BP_BuoyancyComponent;                              // 0x420(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        CorrectionUpdateTime;                              // 0x428(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2503[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            FishDetached;                                      // 0x430(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         FishSetupInit;                                     // 0x440(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2509[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFishSetup                            FishSetupData_0;                                   // 0x448(0xC8)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UFMODAudioComponent*                   MovementAudio;                                     // 0x510(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FishIsAggressive;                                  // 0x518(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2514[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFMODEvent*                            FMODEvent_Pickup;                                  // 0x520(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_FishBase_C* GetDefaultObj();

	void TryPlayPickupSound(class AIcarusPlayerCharacter* PickingUpPlayer, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_LocationIsInAudibleRangeOfEvent_ReturnValue);
	void SetMovementAudioPlayState(bool ShouldPlay, const struct FFishSetup& CallFunc_GetFishSetup_FishSetup, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UFMODEvent* K2Node_DynamicCast_AsFMODEvent, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, enum class EFMODValid CallFunc_PlayEventAttached_IsValid, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_NotEqual_BoolBool_ReturnValue);
	void TryPlayAttackSound(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FFishSetup& CallFunc_GetFishSetup_FishSetup, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UFMODEvent* K2Node_DynamicCast_AsFMODEvent, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LocationIsInAudibleRangeOfEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EFMODValid CallFunc_PlayEventAttached_IsValid, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void GetFishSetup(struct FFishSetup* FishSetup, const struct FFishSetupRowHandle& GalileoFishRow, const struct FFishSetup& GalileoFish, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_IsFeatureLevelEnabled_ReturnValue, bool CallFunc_IsFeatureLevelEnabled_ReturnValue_1, const struct FFishSetup& K2Node_Select_Default, const struct FFishSetupRowHandle& K2Node_Select_Default_1, const struct FFishSetup& CallFunc_GetFishSetupStruct_FishSetup, enum class EValid CallFunc_GetFishSetupStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess);
	void Pickup(class AIcarusPlayerCharacterSurvival* Player, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, const struct FFishSetup& CallFunc_GetFishSetup_FishSetup, const struct FItemRewards& CallFunc_GetItemRewardsStruct_ItemRewards, enum class EValid CallFunc_GetItemRewardsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemRewardEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FItemData& CallFunc_GenerateItemFromReward_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, enum class EDataValid CallFunc_ItemDataValid_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool CallFunc_TriggerExperienceEvent_ReturnValue);
	void DetachFromLure();
	void CheckFishManager(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue);
	void UpdateRepLocation();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void BPOnRep_Dead();
	void BPOnRep_Scale();
	void BPOnRep_AttachActor();
	void KillFish(class UActorState* ActorState, int32 DamageTaken, struct FDamageEvent& DamageEvent, class AController* Instigator, class AActor* DamageCauser);
	void ReceiveTick(float DeltaSeconds);
	void AttackPlayer(class AIcarusPlayerCharacter* Player);
	void MULTI_PlayAttackFX();
	void OnRep_AwarenessTarget();
	void MULTI_PlayPickupFX(class AIcarusPlayerCharacter* PickingUpPlayer);
	void ExecuteUbergraph_BP_FishBase(int32 EntryPoint, class AIcarusPlayerCharacter* K2Node_CustomEvent_PickingUpPlayer, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector_NetQuantize& K2Node_MakeStruct_Vector_NetQuantize, enum class EEndPlayReason K2Node_Event_EndPlayReason, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UCreatureSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, const struct FFishSetup& CallFunc_GetFishSetup_FishSetup, bool CallFunc_IsValid_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_RandomFloatInRange_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UActorState* K2Node_CustomEvent_ActorState, int32 K2Node_CustomEvent_DamageTaken, const struct FDamageEvent& K2Node_CustomEvent_DamageEvent, class AController* K2Node_CustomEvent_Instigator, class AActor* K2Node_CustomEvent_DamageCauser, class AIcarusActor* K2Node_DynamicCast_AsIcarus_Actor, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, class AIcarusPlayerController* K2Node_DynamicCast_AsIcarus_Player_Controller, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GrantExperienceToActor_ReturnValue, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_IsValid_ReturnValue_4, class AIcarusPlayerCharacter* K2Node_Event_Player, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1);
	void FishDetached__DelegateSignature(enum class EFishDetatchReason Reason);
};

}


