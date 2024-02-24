#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightBrigandBase_Guitar.LightBrigandBase_Guitar_C
// (Actor, Pawn)

class UClass* ALightBrigandBase_Guitar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightBrigandBase_Guitar_C");

	return Clss;
}


// LightBrigandBase_Guitar_C LightBrigandBase_Guitar.Default__LightBrigandBase_Guitar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALightBrigandBase_Guitar_C* ALightBrigandBase_Guitar_C::GetDefaultObj()
{
	static class ALightBrigandBase_Guitar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALightBrigandBase_Guitar_C*>(ALightBrigandBase_Guitar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightBrigandBase_Guitar.LightBrigandBase_Guitar_C.SetLuteSound
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ALightBrigandBase_Guitar_C::SetLuteSound(bool* IsValid, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_Guitar_C", "SetLuteSound");

	Params::ALightBrigandBase_Guitar_C_SetLuteSound_Params Parms{};

	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

}


// Function LightBrigandBase_Guitar.LightBrigandBase_Guitar_C.FadeInGuitar__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ALightBrigandBase_Guitar_C::FadeInGuitar__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_Guitar_C", "FadeInGuitar__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LightBrigandBase_Guitar.LightBrigandBase_Guitar_C.FadeInGuitar__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ALightBrigandBase_Guitar_C::FadeInGuitar__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_Guitar_C", "FadeInGuitar__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LightBrigandBase_Guitar.LightBrigandBase_Guitar_C.OnNotifyEnd_A567B98F44E869CE96445A8EA6A5B701
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_Guitar_C::OnNotifyEnd_A567B98F44E869CE96445A8EA6A5B701(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_Guitar_C", "OnNotifyEnd_A567B98F44E869CE96445A8EA6A5B701");

	Params::ALightBrigandBase_Guitar_C_OnNotifyEnd_A567B98F44E869CE96445A8EA6A5B701_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase_Guitar.LightBrigandBase_Guitar_C.OnNotifyBegin_A567B98F44E869CE96445A8EA6A5B701
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_Guitar_C::OnNotifyBegin_A567B98F44E869CE96445A8EA6A5B701(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_Guitar_C", "OnNotifyBegin_A567B98F44E869CE96445A8EA6A5B701");

	Params::ALightBrigandBase_Guitar_C_OnNotifyBegin_A567B98F44E869CE96445A8EA6A5B701_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase_Guitar.LightBrigandBase_Guitar_C.OnInterrupted_A567B98F44E869CE96445A8EA6A5B701
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_Guitar_C::OnInterrupted_A567B98F44E869CE96445A8EA6A5B701(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_Guitar_C", "OnInterrupted_A567B98F44E869CE96445A8EA6A5B701");

	Params::ALightBrigandBase_Guitar_C_OnInterrupted_A567B98F44E869CE96445A8EA6A5B701_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase_Guitar.LightBrigandBase_Guitar_C.OnBlendOut_A567B98F44E869CE96445A8EA6A5B701
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_Guitar_C::OnBlendOut_A567B98F44E869CE96445A8EA6A5B701(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_Guitar_C", "OnBlendOut_A567B98F44E869CE96445A8EA6A5B701");

	Params::ALightBrigandBase_Guitar_C_OnBlendOut_A567B98F44E869CE96445A8EA6A5B701_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase_Guitar.LightBrigandBase_Guitar_C.OnCompleted_A567B98F44E869CE96445A8EA6A5B701
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_Guitar_C::OnCompleted_A567B98F44E869CE96445A8EA6A5B701(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_Guitar_C", "OnCompleted_A567B98F44E869CE96445A8EA6A5B701");

	Params::ALightBrigandBase_Guitar_C_OnCompleted_A567B98F44E869CE96445A8EA6A5B701_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase_Guitar.LightBrigandBase_Guitar_C.UpdateAggroPoseFromSpawner
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALightBrigandBase_Guitar_C::UpdateAggroPoseFromSpawner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_Guitar_C", "UpdateAggroPoseFromSpawner");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LightBrigandBase_Guitar.LightBrigandBase_Guitar_C.DropGuitar
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALightBrigandBase_Guitar_C::DropGuitar()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_Guitar_C", "DropGuitar");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LightBrigandBase_Guitar.LightBrigandBase_Guitar_C.StopPlaying
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALightBrigandBase_Guitar_C::StopPlaying()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_Guitar_C", "StopPlaying");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LightBrigandBase_Guitar.LightBrigandBase_Guitar_C.SetDistanceCheckTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALightBrigandBase_Guitar_C::SetDistanceCheckTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_Guitar_C", "SetDistanceCheckTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LightBrigandBase_Guitar.LightBrigandBase_Guitar_C.AggroAnimComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALightBrigandBase_Guitar_C::AggroAnimComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_Guitar_C", "AggroAnimComplete");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LightBrigandBase_Guitar.LightBrigandBase_Guitar_C.AggroAnimInterrupted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALightBrigandBase_Guitar_C::AggroAnimInterrupted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_Guitar_C", "AggroAnimInterrupted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LightBrigandBase_Guitar.LightBrigandBase_Guitar_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*                 DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_Guitar_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_Guitar_C", "ReceiveAnyDamage");

	Params::ALightBrigandBase_Guitar_C_ReceiveAnyDamage_Params Parms{};

	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase_Guitar.LightBrigandBase_Guitar_C.AggroOnPlayerDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      PlayerToAggro                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsFromLute_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ALightBrigandBase_Guitar_C::AggroOnPlayerDamage(class AActor* PlayerToAggro, bool bIsFromLute_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_Guitar_C", "AggroOnPlayerDamage");

	Params::ALightBrigandBase_Guitar_C_AggroOnPlayerDamage_Params Parms{};

	Parms.PlayerToAggro = PlayerToAggro;
	Parms.bIsFromLute_ = bIsFromLute_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase_Guitar.LightBrigandBase_Guitar_C.JamHard
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundWave*                  PlayingSoundWave                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              PlaybackPercent                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_Guitar_C::JamHard(class USoundWave* PlayingSoundWave, float PlaybackPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_Guitar_C", "JamHard");

	Params::ALightBrigandBase_Guitar_C_JamHard_Params Parms{};

	Parms.PlayingSoundWave = PlayingSoundWave;
	Parms.PlaybackPercent = PlaybackPercent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase_Guitar.LightBrigandBase_Guitar_C.ReduceSightRadius
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALightBrigandBase_Guitar_C::ReduceSightRadius()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_Guitar_C", "ReduceSightRadius");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LightBrigandBase_Guitar.LightBrigandBase_Guitar_C.BrigandJamAlong
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALightBrigandBase_Guitar_C::BrigandJamAlong()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_Guitar_C", "BrigandJamAlong");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LightBrigandBase_Guitar.LightBrigandBase_Guitar_C.PlayerLuteAudioFadeOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundWave*                  PlayingSoundWave                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              PlaybackPercent                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_Guitar_C::PlayerLuteAudioFadeOut(class USoundWave* PlayingSoundWave, float PlaybackPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_Guitar_C", "PlayerLuteAudioFadeOut");

	Params::ALightBrigandBase_Guitar_C_PlayerLuteAudioFadeOut_Params Parms{};

	Parms.PlayingSoundWave = PlayingSoundWave;
	Parms.PlaybackPercent = PlaybackPercent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase_Guitar.LightBrigandBase_Guitar_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ALightBrigandBase_Guitar_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_Guitar_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LightBrigandBase_Guitar.LightBrigandBase_Guitar_C.FadeOutAudio
// (Event, Public, BlueprintEvent)
// Parameters:

void ALightBrigandBase_Guitar_C::FadeOutAudio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_Guitar_C", "FadeOutAudio");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LightBrigandBase_Guitar.LightBrigandBase_Guitar_C.FadeInAudio
// (Event, Public, BlueprintEvent)
// Parameters:

void ALightBrigandBase_Guitar_C::FadeInAudio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_Guitar_C", "FadeInAudio");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LightBrigandBase_Guitar.LightBrigandBase_Guitar_C.InitAfterSpawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAdvancedEnemySpawner_C*     SpawnerRef                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        UniqueId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELevelPhases            PhaseToSpawn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bPermanentlyDeadOnceKilled_                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APatrolPoint_C*              PatrolPointA                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bShouldWander_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APatrolPoint_C*              PatrolPointB                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              AggroRadius                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_TriggerOnEnemyAggro_C*   TriggerToActivateOnAggro                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShouldPatrol_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  SpawnTransform                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)

void ALightBrigandBase_Guitar_C::InitAfterSpawn(class AAdvancedEnemySpawner_C* SpawnerRef, class FName UniqueId, enum class ELevelPhases PhaseToSpawn, bool bPermanentlyDeadOnceKilled_, class APatrolPoint_C* PatrolPointA, bool bShouldWander_, class APatrolPoint_C* PatrolPointB, float AggroRadius, class ABP_TriggerOnEnemyAggro_C* TriggerToActivateOnAggro, bool ShouldPatrol_, const struct FTransform& SpawnTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_Guitar_C", "InitAfterSpawn");

	Params::ALightBrigandBase_Guitar_C_InitAfterSpawn_Params Parms{};

	Parms.SpawnerRef = SpawnerRef;
	Parms.UniqueId = UniqueId;
	Parms.PhaseToSpawn = PhaseToSpawn;
	Parms.bPermanentlyDeadOnceKilled_ = bPermanentlyDeadOnceKilled_;
	Parms.PatrolPointA = PatrolPointA;
	Parms.bShouldWander_ = bShouldWander_;
	Parms.PatrolPointB = PatrolPointB;
	Parms.AggroRadius = AggroRadius;
	Parms.TriggerToActivateOnAggro = TriggerToActivateOnAggro;
	Parms.ShouldPatrol_ = ShouldPatrol_;
	Parms.SpawnTransform = SpawnTransform;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase_Guitar.LightBrigandBase_Guitar_C.Set Atteunation settings
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALightBrigandBase_Guitar_C::Set_Atteunation_settings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_Guitar_C", "Set Atteunation settings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LightBrigandBase_Guitar.LightBrigandBase_Guitar_C.JamHard_Unbind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALightBrigandBase_Guitar_C::JamHard_Unbind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_Guitar_C", "JamHard_Unbind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LightBrigandBase_Guitar.LightBrigandBase_Guitar_C.ExecuteUbergraph_LightBrigandBase_Guitar
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_small_physics_prop_guitar_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_Damage                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*                 K2Node_Event_DamageType                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_Event_InstigatedBy                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageCauser                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_PlayerToAggro                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsFromLute_                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetItemFamiliarity_Value                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundWave*                  K2Node_CustomEvent_PlayingSoundWave_1                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_PlaybackPercent_1                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlayingParryRiposteReactOrDead__ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMyDetourCrowdAIController_C*K2Node_DynamicCast_AsMy_Detour_Crowd_AIController                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundWave*                  K2Node_CustomEvent_PlayingSoundWave                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_PlaybackPercent                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EAudioComponentPlayStateCallFunc_GetPlayState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AAdvancedEnemySpawner_C*     K2Node_Event_SpawnerRef                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_UniqueID                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELevelPhases            K2Node_Event_PhaseToSpawn                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bPermanentlyDeadOnceKilled_                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APatrolPoint_C*              K2Node_Event_PatrolPointA                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bShouldWander_                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APatrolPoint_C*              K2Node_Event_PatrolPointB                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_AggroRadius                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_TriggerOnEnemyAggro_C*   K2Node_Event_TriggerToActivateOnAggro                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_ShouldPatrol_                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  K2Node_Event_SpawnTransform                                      (IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class ALightBrigandSpawner_Guitar_C*K2Node_DynamicCast_AsLight_Brigand_Spawner_Guitar                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// struct FSoundAttenuationSettings   K2Node_Select_Default                                            (None)
// class FName                        K2Node_CustomEvent_NotifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_3                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_4                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_5                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_SetLuteSound_IsValid                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ALightBrigandBase_Guitar_C::ExecuteUbergraph_LightBrigandBase_Guitar(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class Abp_small_physics_prop_guitar_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float K2Node_Event_Damage, class UDamageType* K2Node_Event_DamageType, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, class AActor* K2Node_Event_PlayerToAggro, bool K2Node_Event_bIsFromLute_, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, int32 CallFunc_GetItemFamiliarity_Value, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class USoundWave* K2Node_CustomEvent_PlayingSoundWave_1, float K2Node_CustomEvent_PlaybackPercent_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsPlayingParryRiposteReactOrDead__ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AMyDetourCrowdAIController_C* K2Node_DynamicCast_AsMy_Detour_Crowd_AIController, bool K2Node_DynamicCast_bSuccess, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_1, class USoundWave* K2Node_CustomEvent_PlayingSoundWave, float K2Node_CustomEvent_PlaybackPercent, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, enum class EAudioComponentPlayState CallFunc_GetPlayState_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, class AAdvancedEnemySpawner_C* K2Node_Event_SpawnerRef, class FName K2Node_Event_UniqueID, enum class ELevelPhases K2Node_Event_PhaseToSpawn, bool K2Node_Event_bPermanentlyDeadOnceKilled_, class APatrolPoint_C* K2Node_Event_PatrolPointA, bool K2Node_Event_bShouldWander_, class APatrolPoint_C* K2Node_Event_PatrolPointB, float K2Node_Event_AggroRadius, class ABP_TriggerOnEnemyAggro_C* K2Node_Event_TriggerToActivateOnAggro, bool K2Node_Event_ShouldPatrol_, const struct FTransform& K2Node_Event_SpawnTransform, const class FString& CallFunc_Conv_BoolToString_ReturnValue, class ALightBrigandSpawner_Guitar_C* K2Node_DynamicCast_AsLight_Brigand_Spawner_Guitar, bool K2Node_DynamicCast_bSuccess_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FSoundAttenuationSettings& K2Node_Select_Default, class FName K2Node_CustomEvent_NotifyName_1, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_2, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_3, bool CallFunc_IsValid_ReturnValue_3, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_4, bool CallFunc_IsValid_ReturnValue_4, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_IsValid_ReturnValue_5, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool CallFunc_SetLuteSound_IsValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_Guitar_C", "ExecuteUbergraph_LightBrigandBase_Guitar");

	Params::ALightBrigandBase_Guitar_C_ExecuteUbergraph_LightBrigandBase_Guitar_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_NotifyName_4 = K2Node_CustomEvent_NotifyName_4;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.K2Node_Event_Damage = K2Node_Event_Damage;
	Parms.K2Node_Event_DamageType = K2Node_Event_DamageType;
	Parms.K2Node_Event_InstigatedBy = K2Node_Event_InstigatedBy;
	Parms.K2Node_Event_DamageCauser = K2Node_Event_DamageCauser;
	Parms.K2Node_Event_PlayerToAggro = K2Node_Event_PlayerToAggro;
	Parms.K2Node_Event_bIsFromLute_ = K2Node_Event_bIsFromLute_;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM;
	Parms.CallFunc_GetItemFamiliarity_Value = CallFunc_GetItemFamiliarity_Value;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_CustomEvent_PlayingSoundWave_1 = K2Node_CustomEvent_PlayingSoundWave_1;
	Parms.K2Node_CustomEvent_PlaybackPercent_1 = K2Node_CustomEvent_PlaybackPercent_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_IsPlayingParryRiposteReactOrDead__ReturnValue = CallFunc_IsPlayingParryRiposteReactOrDead__ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsMy_Detour_Crowd_AIController = K2Node_DynamicCast_AsMy_Detour_Crowd_AIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_1 = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_1;
	Parms.K2Node_CustomEvent_PlayingSoundWave = K2Node_CustomEvent_PlayingSoundWave;
	Parms.K2Node_CustomEvent_PlaybackPercent = K2Node_CustomEvent_PlaybackPercent;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_1 = CallFunc_Less_FloatFloat_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetPlayState_ReturnValue = CallFunc_GetPlayState_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Event_SpawnerRef = K2Node_Event_SpawnerRef;
	Parms.K2Node_Event_UniqueID = K2Node_Event_UniqueID;
	Parms.K2Node_Event_PhaseToSpawn = K2Node_Event_PhaseToSpawn;
	Parms.K2Node_Event_bPermanentlyDeadOnceKilled_ = K2Node_Event_bPermanentlyDeadOnceKilled_;
	Parms.K2Node_Event_PatrolPointA = K2Node_Event_PatrolPointA;
	Parms.K2Node_Event_bShouldWander_ = K2Node_Event_bShouldWander_;
	Parms.K2Node_Event_PatrolPointB = K2Node_Event_PatrolPointB;
	Parms.K2Node_Event_AggroRadius = K2Node_Event_AggroRadius;
	Parms.K2Node_Event_TriggerToActivateOnAggro = K2Node_Event_TriggerToActivateOnAggro;
	Parms.K2Node_Event_ShouldPatrol_ = K2Node_Event_ShouldPatrol_;
	Parms.K2Node_Event_SpawnTransform = K2Node_Event_SpawnTransform;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.K2Node_DynamicCast_AsLight_Brigand_Spawner_Guitar = K2Node_DynamicCast_AsLight_Brigand_Spawner_Guitar;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CustomEvent_NotifyName_1 = K2Node_CustomEvent_NotifyName_1;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_2 = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_2;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_3 = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_3;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_4 = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_4;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_5 = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.K2Node_CustomEvent_NotifyName_2 = K2Node_CustomEvent_NotifyName_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CustomEvent_NotifyName_3 = K2Node_CustomEvent_NotifyName_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_SetLuteSound_IsValid = CallFunc_SetLuteSound_IsValid;

	UObject::ProcessEvent(Func, &Parms);

}

}


