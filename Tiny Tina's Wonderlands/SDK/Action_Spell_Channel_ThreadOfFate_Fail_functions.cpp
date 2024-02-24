#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_Spell_Channel_ThreadOfFate_Fail.Action_Spell_Channel_ThreadOfFate_Fail_C
// (None)

class UClass* UAction_Spell_Channel_ThreadOfFate_Fail_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_Spell_Channel_ThreadOfFate_Fail_C");

	return Clss;
}


// Action_Spell_Channel_ThreadOfFate_Fail_C Action_Spell_Channel_ThreadOfFate_Fail.Default__Action_Spell_Channel_ThreadOfFate_Fail_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_Spell_Channel_ThreadOfFate_Fail_C* UAction_Spell_Channel_ThreadOfFate_Fail_C::GetDefaultObj()
{
	static class UAction_Spell_Channel_ThreadOfFate_Fail_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_Spell_Channel_ThreadOfFate_Fail_C*>(UAction_Spell_Channel_ThreadOfFate_Fail_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Action_Spell_Channel_ThreadOfFate_Fail.Action_Spell_Channel_ThreadOfFate_Fail_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Spell_Channel_ThreadOfFate_Fail_C::OnBegin(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Spell_Channel_ThreadOfFate_Fail_C", "OnBegin");

	Params::UAction_Spell_Channel_ThreadOfFate_Fail_C_OnBegin_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_Spell_Channel_ThreadOfFate_Fail.Action_Spell_Channel_ThreadOfFate_Fail_C.ExecuteUbergraph_Action_Spell_Channel_ThreadOfFate_Fail
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Spell_Channel_ThreadOfFate_Fail_C::ExecuteUbergraph_Action_Spell_Channel_ThreadOfFate_Fail(int32 EntryPoint, class AActor* K2Node_Event_Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Spell_Channel_ThreadOfFate_Fail_C", "ExecuteUbergraph_Action_Spell_Channel_ThreadOfFate_Fail");

	Params::UAction_Spell_Channel_ThreadOfFate_Fail_C_ExecuteUbergraph_Action_Spell_Channel_ThreadOfFate_Fail_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;

	UObject::ProcessEvent(Func, &Parms);

}

}


