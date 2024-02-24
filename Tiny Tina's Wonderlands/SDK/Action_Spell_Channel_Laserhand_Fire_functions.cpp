#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_Spell_Channel_Laserhand_Fire.Action_Spell_Channel_Laserhand_Fire_C
// (None)

class UClass* UAction_Spell_Channel_Laserhand_Fire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_Spell_Channel_Laserhand_Fire_C");

	return Clss;
}


// Action_Spell_Channel_Laserhand_Fire_C Action_Spell_Channel_Laserhand_Fire.Default__Action_Spell_Channel_Laserhand_Fire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_Spell_Channel_Laserhand_Fire_C* UAction_Spell_Channel_Laserhand_Fire_C::GetDefaultObj()
{
	static class UAction_Spell_Channel_Laserhand_Fire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_Spell_Channel_Laserhand_Fire_C*>(UAction_Spell_Channel_Laserhand_Fire_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Action_Spell_Channel_Laserhand_Fire.Action_Spell_Channel_Laserhand_Fire_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Spell_Channel_Laserhand_Fire_C::OnBegin(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Spell_Channel_Laserhand_Fire_C", "OnBegin");

	Params::UAction_Spell_Channel_Laserhand_Fire_C_OnBegin_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_Spell_Channel_Laserhand_Fire.Action_Spell_Channel_Laserhand_Fire_C.SpellCharge
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_Spell_Channel_Laserhand_Fire_C::SpellCharge()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Spell_Channel_Laserhand_Fire_C", "SpellCharge");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_Spell_Channel_Laserhand_Fire.Action_Spell_Channel_Laserhand_Fire_C.SpellThrow
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_Spell_Channel_Laserhand_Fire_C::SpellThrow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Spell_Channel_Laserhand_Fire_C", "SpellThrow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_Spell_Channel_Laserhand_Fire.Action_Spell_Channel_Laserhand_Fire_C.ExecuteUbergraph_Action_Spell_Channel_Laserhand_Fire
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             CallFunc_GetCollectionFX_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             CallFunc_GetCollectionFX_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_PlayFX_1stFXComponent                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_PlayFX_3rdFXComponent                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_PlayFX_Socket                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_PlayFX_1stFXComponent1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_PlayFX_3rdFXComponent1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_PlayFX_Socket1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWwiseAudioComponent*        CallFunc_GetDefaultWwiseComponent_ReturnValue                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWwisePlaybackInstance      CallFunc_PostWwiseEvent_ReturnValue                              (None)

void UAction_Spell_Channel_Laserhand_Fire_C::ExecuteUbergraph_Action_Spell_Channel_Laserhand_Fire(int32 EntryPoint, class AActor* K2Node_Event_Actor, class UParticleSystem* CallFunc_GetCollectionFX_ReturnValue, class UParticleSystem* CallFunc_GetCollectionFX_ReturnValue1, class UParticleSystemComponent* CallFunc_PlayFX_1stFXComponent, class UParticleSystemComponent* CallFunc_PlayFX_3rdFXComponent, class FName CallFunc_PlayFX_Socket, class UParticleSystemComponent* CallFunc_PlayFX_1stFXComponent1, class UParticleSystemComponent* CallFunc_PlayFX_3rdFXComponent1, class FName CallFunc_PlayFX_Socket1, class AActor* CallFunc_K2_GetActor_ReturnValue, class UWwiseAudioComponent* CallFunc_GetDefaultWwiseComponent_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Spell_Channel_Laserhand_Fire_C", "ExecuteUbergraph_Action_Spell_Channel_Laserhand_Fire");

	Params::UAction_Spell_Channel_Laserhand_Fire_C_ExecuteUbergraph_Action_Spell_Channel_Laserhand_Fire_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;
	Parms.CallFunc_GetCollectionFX_ReturnValue = CallFunc_GetCollectionFX_ReturnValue;
	Parms.CallFunc_GetCollectionFX_ReturnValue1 = CallFunc_GetCollectionFX_ReturnValue1;
	Parms.CallFunc_PlayFX_1stFXComponent = CallFunc_PlayFX_1stFXComponent;
	Parms.CallFunc_PlayFX_3rdFXComponent = CallFunc_PlayFX_3rdFXComponent;
	Parms.CallFunc_PlayFX_Socket = CallFunc_PlayFX_Socket;
	Parms.CallFunc_PlayFX_1stFXComponent1 = CallFunc_PlayFX_1stFXComponent1;
	Parms.CallFunc_PlayFX_3rdFXComponent1 = CallFunc_PlayFX_3rdFXComponent1;
	Parms.CallFunc_PlayFX_Socket1 = CallFunc_PlayFX_Socket1;
	Parms.CallFunc_K2_GetActor_ReturnValue = CallFunc_K2_GetActor_ReturnValue;
	Parms.CallFunc_GetDefaultWwiseComponent_ReturnValue = CallFunc_GetDefaultWwiseComponent_ReturnValue;
	Parms.CallFunc_PostWwiseEvent_ReturnValue = CallFunc_PostWwiseEvent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


