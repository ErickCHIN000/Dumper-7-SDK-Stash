#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_Spell_Channel_Start_MagicMissile.Action_Spell_Channel_Start_MagicMissile_C
// (None)

class UClass* UAction_Spell_Channel_Start_MagicMissile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_Spell_Channel_Start_MagicMissile_C");

	return Clss;
}


// Action_Spell_Channel_Start_MagicMissile_C Action_Spell_Channel_Start_MagicMissile.Default__Action_Spell_Channel_Start_MagicMissile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_Spell_Channel_Start_MagicMissile_C* UAction_Spell_Channel_Start_MagicMissile_C::GetDefaultObj()
{
	static class UAction_Spell_Channel_Start_MagicMissile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_Spell_Channel_Start_MagicMissile_C*>(UAction_Spell_Channel_Start_MagicMissile_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Action_Spell_Channel_Start_MagicMissile.Action_Spell_Channel_Start_MagicMissile_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Spell_Channel_Start_MagicMissile_C::OnBegin(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Spell_Channel_Start_MagicMissile_C", "OnBegin");

	Params::UAction_Spell_Channel_Start_MagicMissile_C_OnBegin_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_Spell_Channel_Start_MagicMissile.Action_Spell_Channel_Start_MagicMissile_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EGbxActionEndState      ActionEndState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Spell_Channel_Start_MagicMissile_C::OnEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Spell_Channel_Start_MagicMissile_C", "OnEnd");

	Params::UAction_Spell_Channel_Start_MagicMissile_C_OnEnd_Params Parms{};

	Parms.ActionEndState = ActionEndState;
	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_Spell_Channel_Start_MagicMissile.Action_Spell_Channel_Start_MagicMissile_C.CastSpool
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_Spell_Channel_Start_MagicMissile_C::CastSpool()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Spell_Channel_Start_MagicMissile_C", "CastSpool");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_Spell_Channel_Start_MagicMissile.Action_Spell_Channel_Start_MagicMissile_C.Notify_SpellWarmup
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_Spell_Channel_Start_MagicMissile_C::Notify_SpellWarmup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Spell_Channel_Start_MagicMissile_C", "Notify_SpellWarmup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_Spell_Channel_Start_MagicMissile.Action_Spell_Channel_Start_MagicMissile_C.ExecuteUbergraph_Action_Spell_Channel_Start_MagicMissile
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGbxActionEndState      K2Node_Event_ActionEndState                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             CallFunc_GetCollectionFX_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOakElementalType       CallFunc_GetSpellElement_ReturnedElement                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_PlayFX_1stFXComponent                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_PlayFX_3rdFXComponent                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_PlayFX_Socket                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWwiseEvent*                 CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_Spell_Channel_Start_MagicMissile_C::ExecuteUbergraph_Action_Spell_Channel_Start_MagicMissile(int32 EntryPoint, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor, class AActor* K2Node_Event_Actor1, class UParticleSystem* CallFunc_GetCollectionFX_ReturnValue, enum class EOakElementalType CallFunc_GetSpellElement_ReturnedElement, class UParticleSystemComponent* CallFunc_PlayFX_1stFXComponent, class UParticleSystemComponent* CallFunc_PlayFX_3rdFXComponent, class FName CallFunc_PlayFX_Socket, class UWwiseEvent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Spell_Channel_Start_MagicMissile_C", "ExecuteUbergraph_Action_Spell_Channel_Start_MagicMissile");

	Params::UAction_Spell_Channel_Start_MagicMissile_C_ExecuteUbergraph_Action_Spell_Channel_Start_MagicMissile_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ActionEndState = K2Node_Event_ActionEndState;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;
	Parms.K2Node_Event_Actor1 = K2Node_Event_Actor1;
	Parms.CallFunc_GetCollectionFX_ReturnValue = CallFunc_GetCollectionFX_ReturnValue;
	Parms.CallFunc_GetSpellElement_ReturnedElement = CallFunc_GetSpellElement_ReturnedElement;
	Parms.CallFunc_PlayFX_1stFXComponent = CallFunc_PlayFX_1stFXComponent;
	Parms.CallFunc_PlayFX_3rdFXComponent = CallFunc_PlayFX_3rdFXComponent;
	Parms.CallFunc_PlayFX_Socket = CallFunc_PlayFX_Socket;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

