#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_SpeedBoost.GC_SpeedBoost_C
// (Actor)

class UClass* AGC_SpeedBoost_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_SpeedBoost_C");

	return Clss;
}


// GC_SpeedBoost_C GC_SpeedBoost.Default__GC_SpeedBoost_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGC_SpeedBoost_C* AGC_SpeedBoost_C::GetDefaultObj()
{
	static class AGC_SpeedBoost_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGC_SpeedBoost_C*>(AGC_SpeedBoost_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GC_SpeedBoost.GC_SpeedBoost_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGC_SpeedBoost_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_SpeedBoost_C", "ReceiveTick");

	Params::AGC_SpeedBoost_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GC_SpeedBoost.GC_SpeedBoost_C.K2_HandleGameplayCue
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameplayCueEvent       EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AGC_SpeedBoost_C::K2_HandleGameplayCue(class AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_SpeedBoost_C", "K2_HandleGameplayCue");

	Params::AGC_SpeedBoost_C_K2_HandleGameplayCue_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GC_SpeedBoost.GC_SpeedBoost_C.PlayBoostLoopSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGC_SpeedBoost_C::PlayBoostLoopSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_SpeedBoost_C", "PlayBoostLoopSound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GC_SpeedBoost.GC_SpeedBoost_C.PlayBoostStartSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGC_SpeedBoost_C::PlayBoostStartSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_SpeedBoost_C", "PlayBoostStartSound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GC_SpeedBoost.GC_SpeedBoost_C.PlayBoostEndSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGC_SpeedBoost_C::PlayBoostEndSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_SpeedBoost_C", "PlayBoostEndSound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GC_SpeedBoost.GC_SpeedBoost_C.StopBoostStartSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGC_SpeedBoost_C::StopBoostStartSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_SpeedBoost_C", "StopBoostStartSound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GC_SpeedBoost.GC_SpeedBoost_C.StopBoostLoopSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGC_SpeedBoost_C::StopBoostLoopSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_SpeedBoost_C", "StopBoostLoopSound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GC_SpeedBoost.GC_SpeedBoost_C.SetSoundVolumeAndPitch
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent*             AudioComponent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGC_SpeedBoost_C::SetSoundVolumeAndPitch(class UAudioComponent* AudioComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_SpeedBoost_C", "SetSoundVolumeAndPitch");

	Params::AGC_SpeedBoost_C_SetSoundVolumeAndPitch_Params Parms{};

	Parms.AudioComponent = AudioComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GC_SpeedBoost.GC_SpeedBoost_C.ExecuteUbergraph_GC_SpeedBoost
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_MyTarget                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameplayCueEvent       K2Node_Event_EventType                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_Event_Parameters                                          (ConstParm, ContainsInstancedReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGVehicle_Car*              K2Node_DynamicCast_AsGGVehicle_Car                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGVehicle_Car*              K2Node_DynamicCast_AsGGVehicle_Car_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGVehicle_Car*              K2Node_DynamicCast_AsGGVehicle_Car_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Vehicle_Car_C*           K2Node_DynamicCast_AsBP_Vehicle_Car                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGVehicle_Car*              K2Node_DynamicCast_AsGGVehicle_Car_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_2                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             K2Node_CustomEvent_AudioComponent                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGVehicle_Car*              K2Node_DynamicCast_AsGGVehicle_Car_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Vehicle_Car_C*           K2Node_DynamicCast_AsBP_Vehicle_Car_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue_2                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGC_SpeedBoost_C::ExecuteUbergraph_GC_SpeedBoost(int32 EntryPoint, float K2Node_Event_DeltaSeconds, class AActor* K2Node_Event_MyTarget, enum class EGameplayCueEvent K2Node_Event_EventType, const struct FGameplayCueParameters& K2Node_Event_Parameters, class AActor* CallFunc_GetOwner_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class AGGVehicle_Car* K2Node_DynamicCast_AsGGVehicle_Car, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_2, class AGGVehicle_Car* K2Node_DynamicCast_AsGGVehicle_Car_1, bool K2Node_DynamicCast_bSuccess_1, class AGGVehicle_Car* K2Node_DynamicCast_AsGGVehicle_Car_2, bool K2Node_DynamicCast_bSuccess_2, class ABP_Vehicle_Car_C* K2Node_DynamicCast_AsBP_Vehicle_Car, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_3, class AGGVehicle_Car* K2Node_DynamicCast_AsGGVehicle_Car_3, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsValid_ReturnValue_2, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class UAudioComponent* K2Node_CustomEvent_AudioComponent, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, class AActor* CallFunc_GetOwner_ReturnValue_4, class AGGVehicle_Car* K2Node_DynamicCast_AsGGVehicle_Car_4, bool K2Node_DynamicCast_bSuccess_5, class ABP_Vehicle_Car_C* K2Node_DynamicCast_AsBP_Vehicle_Car_1, bool K2Node_DynamicCast_bSuccess_6, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_SpeedBoost_C", "ExecuteUbergraph_GC_SpeedBoost");

	Params::AGC_SpeedBoost_C_ExecuteUbergraph_GC_SpeedBoost_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_Event_MyTarget = K2Node_Event_MyTarget;
	Parms.K2Node_Event_EventType = K2Node_Event_EventType;
	Parms.K2Node_Event_Parameters = K2Node_Event_Parameters;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsGGVehicle_Car = K2Node_DynamicCast_AsGGVehicle_Car;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue_2 = CallFunc_GetOwner_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsGGVehicle_Car_1 = K2Node_DynamicCast_AsGGVehicle_Car_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsGGVehicle_Car_2 = K2Node_DynamicCast_AsGGVehicle_Car_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsBP_Vehicle_Car = K2Node_DynamicCast_AsBP_Vehicle_Car;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue_1 = CallFunc_SpawnSoundAttached_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue_3 = CallFunc_GetOwner_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsGGVehicle_Car_3 = K2Node_DynamicCast_AsGGVehicle_Car_3;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue_2 = CallFunc_SpawnSoundAttached_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_CustomEvent_AudioComponent = K2Node_CustomEvent_AudioComponent;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetOwner_ReturnValue_4 = CallFunc_GetOwner_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsGGVehicle_Car_4 = K2Node_DynamicCast_AsGGVehicle_Car_4;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_DynamicCast_AsBP_Vehicle_Car_1 = K2Node_DynamicCast_AsBP_Vehicle_Car_1;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue_1 = CallFunc_SpawnEmitterAttached_ReturnValue_1;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue_2 = CallFunc_SpawnEmitterAttached_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


