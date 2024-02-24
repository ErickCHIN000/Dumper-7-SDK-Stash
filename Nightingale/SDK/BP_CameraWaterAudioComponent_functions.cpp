#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CameraWaterAudioComponent.BP_CameraWaterAudioComponent_C
// (None)

class UClass* UBP_CameraWaterAudioComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CameraWaterAudioComponent_C");

	return Clss;
}


// BP_CameraWaterAudioComponent_C BP_CameraWaterAudioComponent.Default__BP_CameraWaterAudioComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CameraWaterAudioComponent_C* UBP_CameraWaterAudioComponent_C::GetDefaultObj()
{
	static class UBP_CameraWaterAudioComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CameraWaterAudioComponent_C*>(UBP_CameraWaterAudioComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CameraWaterAudioComponent.BP_CameraWaterAudioComponent_C.FindAudioEventTarget
// (BlueprintCosmetic, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScopedAkComponent*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             PlayerCharacter                                                  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_GetScopedAkBody_ReturnValue                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             CallFunc_GetLocalCharacter_PlayerCharacter                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

class UScopedAkComponent* UBP_CameraWaterAudioComponent_C::FindAudioEventTarget(class ABP_Character_C* PlayerCharacter, bool CallFunc_IsDedicatedServer_ReturnValue, class UScopedAkComponent* CallFunc_GetScopedAkBody_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CameraWaterAudioComponent_C", "FindAudioEventTarget");

	Params::UBP_CameraWaterAudioComponent_C_FindAudioEventTarget_Params Parms{};

	Parms.PlayerCharacter = PlayerCharacter;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_GetScopedAkBody_ReturnValue = CallFunc_GetScopedAkBody_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetLocalCharacter_PlayerCharacter = CallFunc_GetLocalCharacter_PlayerCharacter;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


