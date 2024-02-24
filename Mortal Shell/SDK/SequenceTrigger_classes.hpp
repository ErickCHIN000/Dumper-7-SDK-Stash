#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x248 - 0x220)
// BlueprintGeneratedClass SequenceTrigger.SequenceTrigger_C
class ASequenceTrigger_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                      SequenceTriggerSphere;                             // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ALevelSequenceActor*                   LevelSequence;                                     // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         PlayOnlyOnce_;                                     // 0x238(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         IsDisabled_;                                       // 0x239(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         DisablePlayerInput_;                               // 0x23A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_58A[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Audio_CinematicAudioTrigger_C*     CinematicAudioTrigger;                             // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ASequenceTrigger_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void BndEvt__SequenceTriggerSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void SaveState();
	void OnFinished();
	void ExecuteUbergraph_SequenceTrigger(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue, bool CallFunc_IsMyNameInChangedSet_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AGameplayGM_C* K2Node_DynamicCast_AsGameplay_GM, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsMyNameInChangedSet_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}


