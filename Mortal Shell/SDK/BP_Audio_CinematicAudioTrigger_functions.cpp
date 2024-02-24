#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Audio_CinematicAudioTrigger.BP_Audio_CinematicAudioTrigger_C
// (Actor)

class UClass* ABP_Audio_CinematicAudioTrigger_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Audio_CinematicAudioTrigger_C");

	return Clss;
}


// BP_Audio_CinematicAudioTrigger_C BP_Audio_CinematicAudioTrigger.Default__BP_Audio_CinematicAudioTrigger_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Audio_CinematicAudioTrigger_C* ABP_Audio_CinematicAudioTrigger_C::GetDefaultObj()
{
	static class ABP_Audio_CinematicAudioTrigger_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Audio_CinematicAudioTrigger_C*>(ABP_Audio_CinematicAudioTrigger_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Audio_CinematicAudioTrigger.BP_Audio_CinematicAudioTrigger_C.DualSense_Audio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Audio_CinematicAudioTrigger_C::DualSense_Audio(class USoundBase* Sound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Audio_CinematicAudioTrigger_C", "DualSense_Audio");

	Params::ABP_Audio_CinematicAudioTrigger_C_DualSense_Audio_Params Parms{};

	Parms.Sound = Sound;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Audio_CinematicAudioTrigger.BP_Audio_CinematicAudioTrigger_C.StartOutroAudio
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundCue*                   Cue                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              VolumeMultiplier                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              PitchMultiplier                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              StartTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundConcurrency*           ConcurrencySettings                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bPersistAcrossLevelTransition                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bAutoDestroy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Audio_CinematicAudioTrigger_C::StartOutroAudio(class USoundCue* Cue, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Audio_CinematicAudioTrigger_C", "StartOutroAudio");

	Params::ABP_Audio_CinematicAudioTrigger_C_StartOutroAudio_Params Parms{};

	Parms.Cue = Cue;
	Parms.VolumeMultiplier = VolumeMultiplier;
	Parms.PitchMultiplier = PitchMultiplier;
	Parms.StartTime = StartTime;
	Parms.ConcurrencySettings = ConcurrencySettings;
	Parms.bPersistAcrossLevelTransition = bPersistAcrossLevelTransition;
	Parms.bAutoDestroy = bAutoDestroy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Audio_CinematicAudioTrigger.BP_Audio_CinematicAudioTrigger_C.StartCutsceneAudio
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundCue*                   Cue                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              VolumeMultiplier                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              PitchMultiplier                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              StartTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundConcurrency*           ConcurrencySettings                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bPersistAcrossLevelTransition                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bAutoDestroy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               UseCutsceneLoop                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundCue*                   LoopOverride                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Audio_CinematicAudioTrigger_C::StartCutsceneAudio(class USoundCue* Cue, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy, bool UseCutsceneLoop, class USoundCue* LoopOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Audio_CinematicAudioTrigger_C", "StartCutsceneAudio");

	Params::ABP_Audio_CinematicAudioTrigger_C_StartCutsceneAudio_Params Parms{};

	Parms.Cue = Cue;
	Parms.VolumeMultiplier = VolumeMultiplier;
	Parms.PitchMultiplier = PitchMultiplier;
	Parms.StartTime = StartTime;
	Parms.ConcurrencySettings = ConcurrencySettings;
	Parms.bPersistAcrossLevelTransition = bPersistAcrossLevelTransition;
	Parms.bAutoDestroy = bAutoDestroy;
	Parms.UseCutsceneLoop = UseCutsceneLoop;
	Parms.LoopOverride = LoopOverride;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Audio_CinematicAudioTrigger.BP_Audio_CinematicAudioTrigger_C.StopLoop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Audio_CinematicAudioTrigger_C::StopLoop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Audio_CinematicAudioTrigger_C", "StopLoop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Audio_CinematicAudioTrigger.BP_Audio_CinematicAudioTrigger_C.ExecuteUbergraph_BP_Audio_CinematicAudioTrigger
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundCue*                   K2Node_CustomEvent_Cue_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_VolumeMultiplier_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_PitchMultiplier_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_StartTime_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundConcurrency*           K2Node_CustomEvent_ConcurrencySettings_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bPersistAcrossLevelTransition_1               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bAutoDestroy_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundCue*                   K2Node_CustomEvent_Cue                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_VolumeMultiplier                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_PitchMultiplier                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_StartTime                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundConcurrency*           K2Node_CustomEvent_ConcurrencySettings                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bPersistAcrossLevelTransition                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bAutoDestroy                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_UseCutsceneLoop                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundCue*                   K2Node_CustomEvent_LoopOverride                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Audio_CinematicAudioTrigger_C::ExecuteUbergraph_BP_Audio_CinematicAudioTrigger(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class USoundCue* K2Node_CustomEvent_Cue_1, float K2Node_CustomEvent_VolumeMultiplier_1, float K2Node_CustomEvent_PitchMultiplier_1, float K2Node_CustomEvent_StartTime_1, class USoundConcurrency* K2Node_CustomEvent_ConcurrencySettings_1, bool K2Node_CustomEvent_bPersistAcrossLevelTransition_1, bool K2Node_CustomEvent_bAutoDestroy_1, bool CallFunc_IsValid_ReturnValue_1, class USoundCue* K2Node_CustomEvent_Cue, float K2Node_CustomEvent_VolumeMultiplier, float K2Node_CustomEvent_PitchMultiplier, float K2Node_CustomEvent_StartTime, class USoundConcurrency* K2Node_CustomEvent_ConcurrencySettings, bool K2Node_CustomEvent_bPersistAcrossLevelTransition, bool K2Node_CustomEvent_bAutoDestroy, bool K2Node_CustomEvent_UseCutsceneLoop, class USoundCue* K2Node_CustomEvent_LoopOverride, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class USoundBase* K2Node_Select_Default, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, class USoundBase* K2Node_Select_Default_1, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue_1, bool Temp_bool_Variable_2, class USoundBase* K2Node_Select_Default_2, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Audio_CinematicAudioTrigger_C", "ExecuteUbergraph_BP_Audio_CinematicAudioTrigger");

	Params::ABP_Audio_CinematicAudioTrigger_C_ExecuteUbergraph_BP_Audio_CinematicAudioTrigger_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_Cue_1 = K2Node_CustomEvent_Cue_1;
	Parms.K2Node_CustomEvent_VolumeMultiplier_1 = K2Node_CustomEvent_VolumeMultiplier_1;
	Parms.K2Node_CustomEvent_PitchMultiplier_1 = K2Node_CustomEvent_PitchMultiplier_1;
	Parms.K2Node_CustomEvent_StartTime_1 = K2Node_CustomEvent_StartTime_1;
	Parms.K2Node_CustomEvent_ConcurrencySettings_1 = K2Node_CustomEvent_ConcurrencySettings_1;
	Parms.K2Node_CustomEvent_bPersistAcrossLevelTransition_1 = K2Node_CustomEvent_bPersistAcrossLevelTransition_1;
	Parms.K2Node_CustomEvent_bAutoDestroy_1 = K2Node_CustomEvent_bAutoDestroy_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CustomEvent_Cue = K2Node_CustomEvent_Cue;
	Parms.K2Node_CustomEvent_VolumeMultiplier = K2Node_CustomEvent_VolumeMultiplier;
	Parms.K2Node_CustomEvent_PitchMultiplier = K2Node_CustomEvent_PitchMultiplier;
	Parms.K2Node_CustomEvent_StartTime = K2Node_CustomEvent_StartTime;
	Parms.K2Node_CustomEvent_ConcurrencySettings = K2Node_CustomEvent_ConcurrencySettings;
	Parms.K2Node_CustomEvent_bPersistAcrossLevelTransition = K2Node_CustomEvent_bPersistAcrossLevelTransition;
	Parms.K2Node_CustomEvent_bAutoDestroy = K2Node_CustomEvent_bAutoDestroy;
	Parms.K2Node_CustomEvent_UseCutsceneLoop = K2Node_CustomEvent_UseCutsceneLoop;
	Parms.K2Node_CustomEvent_LoopOverride = K2Node_CustomEvent_LoopOverride;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_SpawnSound2D_ReturnValue_1 = CallFunc_SpawnSound2D_ReturnValue_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_SpawnSound2D_ReturnValue_2 = CallFunc_SpawnSound2D_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


