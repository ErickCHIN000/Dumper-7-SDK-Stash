#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x250 - 0x220)
// BlueprintGeneratedClass BP_Audio_CinematicAudioTrigger.BP_Audio_CinematicAudioTrigger_C
class ABP_Audio_CinematicAudioTrigger_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            OutroAudio;                                        // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            IntroAudio;                                        // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            LoopAudio;                                         // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Loop;                                              // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Audio_CinematicAudioTrigger_C* GetDefaultObj();

	void DualSense_Audio(class USoundBase* Sound);
	void StartOutroAudio(class USoundCue* Cue, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy);
	void StartCutsceneAudio(class USoundCue* Cue, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy, bool UseCutsceneLoop, class USoundCue* LoopOverride);
	void StopLoop();
	void ExecuteUbergraph_BP_Audio_CinematicAudioTrigger(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class USoundCue* K2Node_CustomEvent_Cue_1, float K2Node_CustomEvent_VolumeMultiplier_1, float K2Node_CustomEvent_PitchMultiplier_1, float K2Node_CustomEvent_StartTime_1, class USoundConcurrency* K2Node_CustomEvent_ConcurrencySettings_1, bool K2Node_CustomEvent_bPersistAcrossLevelTransition_1, bool K2Node_CustomEvent_bAutoDestroy_1, bool CallFunc_IsValid_ReturnValue_1, class USoundCue* K2Node_CustomEvent_Cue, float K2Node_CustomEvent_VolumeMultiplier, float K2Node_CustomEvent_PitchMultiplier, float K2Node_CustomEvent_StartTime, class USoundConcurrency* K2Node_CustomEvent_ConcurrencySettings, bool K2Node_CustomEvent_bPersistAcrossLevelTransition, bool K2Node_CustomEvent_bAutoDestroy, bool K2Node_CustomEvent_UseCutsceneLoop, class USoundCue* K2Node_CustomEvent_LoopOverride, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class USoundBase* K2Node_Select_Default, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, class USoundBase* K2Node_Select_Default_1, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue_1, bool Temp_bool_Variable_2, class USoundBase* K2Node_Select_Default_2, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue_2);
};

}


