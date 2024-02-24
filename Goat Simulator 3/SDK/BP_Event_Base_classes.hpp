#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x8F8 - 0x8B8)
// BlueprintGeneratedClass BP_Event_Base.BP_Event_Base_C
class ABP_Event_Base_C : public AGGEventBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                   Billboard;                                         // 0x8C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         ActivationArea;                                    // 0x8C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         AutoPlayCompletedSequence;                         // 0x8D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_550[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CompletedSeqBroadcastRadius;                       // 0x8D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RadarVisibleDistanceOverride;                      // 0x8D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         AutoActivatedOnOverlap;                            // 0x8DC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_556[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  GoatTowersStreamingLevel;                          // 0x8E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bShowCutsForRequestedSequence;                     // 0x8E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bPersistentEffectActive;                           // 0x8E9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_559[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGLevelSequenceActor*                 PlaySeqForAllSequenceActor;                        // 0x8F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Event_Base_C* GetDefaultObj();

	class AActor* GetMatchingAreaContextActor(class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class AGGGoatTower* K2Node_DynamicCast_AsGGGoat_Tower, bool K2Node_DynamicCast_bSuccess_1);
	class AGGGoatTower* GetMatchingGoatTower(class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class AGGGoatTower* K2Node_DynamicCast_AsGGGoat_Tower, bool K2Node_DynamicCast_bSuccess);
	void DecreaseEventProgress(class AActor* InstigatorActor, int32 Value, class AGGPlayerController* CallFunc_GetPrimaryGGPlayerController_ReturnValue, class AGGPlayerState* CallFunc_GetPlayerStateFromActor_ReturnValue, class AGGPlayerState* CallFunc_GetGGPlayerState_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void ReportEventProgress(class AActor* InstigatorActor, int32 Value, class AGGPlayerController* CallFunc_GetPrimaryGGPlayerController_ReturnValue, class AGGPlayerState* CallFunc_GetPlayerStateFromActor_ReturnValue, class AGGPlayerState* CallFunc_GetGGPlayerState_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void CompleteEvent(class AActor* InstigatorActor, class AGGPlayerState* CallFunc_GetPlayerStateFromActor_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void BndEvt__HintArea_K2Node_ComponentBoundEvent_16_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void PlayCompletedSequence();
	void PlaySeqForAllNearbyPlayers(class ULevelSequence* SequenceToPlay, class AActor* OverrideLocation, float CameraCutsDistance);
	void OnCompletedSequenceFinished();
	void OnCompletedSequencePlaying();
	void OnQuestProgressionLoadedBlueprint(bool bSaveExisted, bool bWasCompleted);
	void LoadGoatTowerLevel();
	void OnQuestCompletedBlueprint();
	void BindPersistentEffectsToggler(class ABP_GoatTower_PersistentEffectsToggler_C* Toggler);
	void UnbindPersistentEffectsToggler(class ABP_GoatTower_PersistentEffectsToggler_C* Toggler);
	void OnCinematicStarted(class ULevelSequencePlayer* Sequence);
	void SeqForAllNearbyPlayers_OnStop();
	void SeqForAllNearbyPlayers_OnFinished();
	void ExecuteUbergraph_BP_Event_Base(int32 EntryPoint, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, bool CallFunc_IsCompGoatCapsuleComp_ReturnValue, class AGGGoat* K2Node_DynamicCast_AsGGGoat, bool K2Node_DynamicCast_bSuccess, class AGGPlayerState* CallFunc_GetGGPlayerState_ReturnValue, class ULevelSequence* K2Node_CustomEvent_SequenceToPlay, class AActor* K2Node_CustomEvent_OverrideLocation, float K2Node_CustomEvent_CameraCutsDistance, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AGGLevelSequenceActor* CallFunc_CreateGGLevelSequencePlayer_OutActor, class ULevelSequencePlayer* CallFunc_CreateGGLevelSequencePlayer_ReturnValue, bool K2Node_Event_bSaveExisted, bool K2Node_Event_bWasCompleted, enum class EEventCompletedState CallFunc_GetCompletionState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class AGGPlayerController*>& CallFunc_GetLocalGGPlayerControllers_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ABP_GoatTower_PersistentEffectsToggler_C* K2Node_CustomEvent_Toggler_1, class ABP_GoatTower_PersistentEffectsToggler_C* K2Node_CustomEvent_Toggler, int32 Temp_int_Array_Index_Variable, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue, class AGGPlayerController* CallFunc_Array_Get_Item, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, float CallFunc_GetClosestEventPointLocation_OutDistance, const struct FVector& CallFunc_GetClosestEventPointLocation_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class ULevelSequencePlayer* K2Node_CustomEvent_Sequence, class UGGGlobalEventHandler* CallFunc_GetGlobalEventHandler_ReturnValue, class UGGGlobalEventHandler* CallFunc_GetGlobalEventHandler_ReturnValue_1, class UGGGlobalEventHandler* CallFunc_GetGlobalEventHandler_ReturnValue_2, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
};

}


