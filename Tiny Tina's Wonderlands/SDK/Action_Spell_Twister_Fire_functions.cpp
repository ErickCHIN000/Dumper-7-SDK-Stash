#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_Spell_Twister_Fire.Action_Spell_Twister_Fire_C
// (None)

class UClass* UAction_Spell_Twister_Fire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_Spell_Twister_Fire_C");

	return Clss;
}


// Action_Spell_Twister_Fire_C Action_Spell_Twister_Fire.Default__Action_Spell_Twister_Fire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_Spell_Twister_Fire_C* UAction_Spell_Twister_Fire_C::GetDefaultObj()
{
	static class UAction_Spell_Twister_Fire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_Spell_Twister_Fire_C*>(UAction_Spell_Twister_Fire_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Action_Spell_Twister_Fire.Action_Spell_Twister_Fire_C.SpellWarmUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_Spell_Twister_Fire_C::SpellWarmUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Spell_Twister_Fire_C", "SpellWarmUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_Spell_Twister_Fire.Action_Spell_Twister_Fire_C.SpellPush
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_Spell_Twister_Fire_C::SpellPush()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Spell_Twister_Fire_C", "SpellPush");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_Spell_Twister_Fire.Action_Spell_Twister_Fire_C.ExecuteUbergraph_Action_Spell_Twister_Fire
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Spell_Twister_Fire_C::ExecuteUbergraph_Action_Spell_Twister_Fire(int32 EntryPoint, class AActor* CallFunc_K2_GetActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Spell_Twister_Fire_C", "ExecuteUbergraph_Action_Spell_Twister_Fire");

	Params::UAction_Spell_Twister_Fire_C_ExecuteUbergraph_Action_Spell_Twister_Fire_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetActor_ReturnValue = CallFunc_K2_GetActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


