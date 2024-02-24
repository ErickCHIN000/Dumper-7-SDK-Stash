#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x91 (0x18D9 - 0x1848)
// BlueprintGeneratedClass BP_CinematicGoat.BP_CinematicGoat_C
class ABP_CinematicGoat_C : public ABP_Player_GGGoat_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1848(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UGGCinematicCharacterComponent*        GGCinematicCharacter;                              // 0x1850(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         Played_walk_in_sequence;                           // 0x1858(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E53[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGSplineFollowComponent*              CachedSplineFollowComp;                            // 0x1860(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_SplineActor_C*                     Spline_Actor_to_follow;                            // 0x1868(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FinishedSequence;                                  // 0x1870(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E61[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FGameplayTag, class ABP_SplineActor_C*> Alt_goat_walk_in_splines;                          // 0x1878(0x50)(Edit, BlueprintVisible)
	FMulticastInlineDelegateProperty_            FinishedWalkInSequence;                            // 0x18C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         DidSignalWalkInFinished;                           // 0x18D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_CinematicGoat_C* GetDefaultObj();

	void Get_walkMinusin_spline(class USplineComponent** Spline, bool CallFunc_IsValid_ReturnValue, class UGGAlternativeGoatDataAsset* CallFunc_GetCurrentAltGoat_ReturnValue, class ABP_SplineActor_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void HasFinishedWalkIn(bool* Finished, bool CallFunc_IsValid_ReturnValue);
	bool Has_valid_walkMinusin_sequence(bool CallFunc_IsValidSoftObjectReference_ReturnValue);
	void OnLoaded_1E8D15934606A5D54B79EC9A3AE3977B(class UObject* Loaded);
	void PlayWalkInSeq();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void Prepare_for_being_grabbed();
	void Clear_Movement_Mode();
	void OnFinished_Event();
	void ExecuteUbergraph_BP_CinematicGoat(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_IsClosed_Variable, class UObject* Temp_object_Variable, class ULevelSequence* K2Node_DynamicCast_AsLevel_Sequence, bool K2Node_DynamicCast_bSuccess, class ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, class ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, class UObject* K2Node_CustomEvent_Loaded, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_Has_Been_Initd_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float K2Node_Event_DeltaSeconds, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_1, bool CallFunc_Has_valid_walk_in_sequence_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_IsClosed_Variable_1, bool CallFunc_RemoveEffectSource_ReturnValue, bool CallFunc_RemoveEffectSource_ReturnValue_1, class USplineComponent* CallFunc_Get_walk_in_spline_Spline, class UGGSplineFollowComponent* CallFunc_StartFollowingSpline_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasFinishedWalkIn_Finished);
	void FinishedWalkInSequence__DelegateSignature();
};

}


