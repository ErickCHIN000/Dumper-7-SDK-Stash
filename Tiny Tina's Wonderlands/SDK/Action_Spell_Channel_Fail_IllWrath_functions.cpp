#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_Spell_Channel_Fail_IllWrath.Action_Spell_Channel_Fail_IllWrath_C
// (None)

class UClass* UAction_Spell_Channel_Fail_IllWrath_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_Spell_Channel_Fail_IllWrath_C");

	return Clss;
}


// Action_Spell_Channel_Fail_IllWrath_C Action_Spell_Channel_Fail_IllWrath.Default__Action_Spell_Channel_Fail_IllWrath_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_Spell_Channel_Fail_IllWrath_C* UAction_Spell_Channel_Fail_IllWrath_C::GetDefaultObj()
{
	static class UAction_Spell_Channel_Fail_IllWrath_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_Spell_Channel_Fail_IllWrath_C*>(UAction_Spell_Channel_Fail_IllWrath_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Action_Spell_Channel_Fail_IllWrath.Action_Spell_Channel_Fail_IllWrath_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Spell_Channel_Fail_IllWrath_C::OnBegin(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Spell_Channel_Fail_IllWrath_C", "OnBegin");

	Params::UAction_Spell_Channel_Fail_IllWrath_C_OnBegin_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_Spell_Channel_Fail_IllWrath.Action_Spell_Channel_Fail_IllWrath_C.ExecuteUbergraph_Action_Spell_Channel_Fail_IllWrath
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             CallFunc_GetSpellFX_SpellActionFX                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_PlayFX_1stFXComponent                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_PlayFX_3rdFXComponent                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_PlayFX_Socket                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Spell_Channel_Fail_IllWrath_C::ExecuteUbergraph_Action_Spell_Channel_Fail_IllWrath(int32 EntryPoint, class AActor* K2Node_Event_Actor, class UParticleSystem* CallFunc_GetSpellFX_SpellActionFX, class UParticleSystemComponent* CallFunc_PlayFX_1stFXComponent, class UParticleSystemComponent* CallFunc_PlayFX_3rdFXComponent, class FName CallFunc_PlayFX_Socket)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Spell_Channel_Fail_IllWrath_C", "ExecuteUbergraph_Action_Spell_Channel_Fail_IllWrath");

	Params::UAction_Spell_Channel_Fail_IllWrath_C_ExecuteUbergraph_Action_Spell_Channel_Fail_IllWrath_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;
	Parms.CallFunc_GetSpellFX_SpellActionFX = CallFunc_GetSpellFX_SpellActionFX;
	Parms.CallFunc_PlayFX_1stFXComponent = CallFunc_PlayFX_1stFXComponent;
	Parms.CallFunc_PlayFX_3rdFXComponent = CallFunc_PlayFX_3rdFXComponent;
	Parms.CallFunc_PlayFX_Socket = CallFunc_PlayFX_Socket;

	UObject::ProcessEvent(Func, &Parms);

}

}

