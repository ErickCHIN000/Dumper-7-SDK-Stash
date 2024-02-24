#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_Spell_Repeat_Loop_Boltlash.Action_Spell_Repeat_Loop_Boltlash_C
// (None)

class UClass* UAction_Spell_Repeat_Loop_Boltlash_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_Spell_Repeat_Loop_Boltlash_C");

	return Clss;
}


// Action_Spell_Repeat_Loop_Boltlash_C Action_Spell_Repeat_Loop_Boltlash.Default__Action_Spell_Repeat_Loop_Boltlash_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_Spell_Repeat_Loop_Boltlash_C* UAction_Spell_Repeat_Loop_Boltlash_C::GetDefaultObj()
{
	static class UAction_Spell_Repeat_Loop_Boltlash_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_Spell_Repeat_Loop_Boltlash_C*>(UAction_Spell_Repeat_Loop_Boltlash_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Action_Spell_Repeat_Loop_Boltlash.Action_Spell_Repeat_Loop_Boltlash_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Spell_Repeat_Loop_Boltlash_C::OnBegin(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Spell_Repeat_Loop_Boltlash_C", "OnBegin");

	Params::UAction_Spell_Repeat_Loop_Boltlash_C_OnBegin_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_Spell_Repeat_Loop_Boltlash.Action_Spell_Repeat_Loop_Boltlash_C.SpellCharge
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_Spell_Repeat_Loop_Boltlash_C::SpellCharge()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Spell_Repeat_Loop_Boltlash_C", "SpellCharge");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_Spell_Repeat_Loop_Boltlash.Action_Spell_Repeat_Loop_Boltlash_C.Notify_Spellcast1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_Spell_Repeat_Loop_Boltlash_C::Notify_Spellcast1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Spell_Repeat_Loop_Boltlash_C", "Notify_Spellcast1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_Spell_Repeat_Loop_Boltlash.Action_Spell_Repeat_Loop_Boltlash_C.Notify_Spellcast2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_Spell_Repeat_Loop_Boltlash_C::Notify_Spellcast2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Spell_Repeat_Loop_Boltlash_C", "Notify_Spellcast2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_Spell_Repeat_Loop_Boltlash.Action_Spell_Repeat_Loop_Boltlash_C.Notify_Spellcast3
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_Spell_Repeat_Loop_Boltlash_C::Notify_Spellcast3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Spell_Repeat_Loop_Boltlash_C", "Notify_Spellcast3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_Spell_Repeat_Loop_Boltlash.Action_Spell_Repeat_Loop_Boltlash_C.ExecuteUbergraph_Action_Spell_Repeat_Loop_Boltlash
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             CallFunc_GetCollectionFX_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_PlayFX_1stFXComponent                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_PlayFX_3rdFXComponent                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_PlayFX_Socket                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOakElementalType       CallFunc_GetSpellElement_ReturnedElement                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWwiseEvent*                 CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_Spell_Repeat_Loop_Boltlash_C::ExecuteUbergraph_Action_Spell_Repeat_Loop_Boltlash(int32 EntryPoint, class AActor* K2Node_Event_Actor, class UParticleSystem* CallFunc_GetCollectionFX_ReturnValue, class UParticleSystemComponent* CallFunc_PlayFX_1stFXComponent, class UParticleSystemComponent* CallFunc_PlayFX_3rdFXComponent, class FName CallFunc_PlayFX_Socket, enum class EOakElementalType CallFunc_GetSpellElement_ReturnedElement, class UWwiseEvent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Spell_Repeat_Loop_Boltlash_C", "ExecuteUbergraph_Action_Spell_Repeat_Loop_Boltlash");

	Params::UAction_Spell_Repeat_Loop_Boltlash_C_ExecuteUbergraph_Action_Spell_Repeat_Loop_Boltlash_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;
	Parms.CallFunc_GetCollectionFX_ReturnValue = CallFunc_GetCollectionFX_ReturnValue;
	Parms.CallFunc_PlayFX_1stFXComponent = CallFunc_PlayFX_1stFXComponent;
	Parms.CallFunc_PlayFX_3rdFXComponent = CallFunc_PlayFX_3rdFXComponent;
	Parms.CallFunc_PlayFX_Socket = CallFunc_PlayFX_Socket;
	Parms.CallFunc_GetSpellElement_ReturnedElement = CallFunc_GetSpellElement_ReturnedElement;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


