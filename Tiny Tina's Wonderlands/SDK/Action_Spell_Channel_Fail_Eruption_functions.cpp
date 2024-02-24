#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_Spell_Channel_Fail_Eruption.Action_Spell_Channel_Fail_Eruption_C
// (None)

class UClass* UAction_Spell_Channel_Fail_Eruption_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_Spell_Channel_Fail_Eruption_C");

	return Clss;
}


// Action_Spell_Channel_Fail_Eruption_C Action_Spell_Channel_Fail_Eruption.Default__Action_Spell_Channel_Fail_Eruption_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_Spell_Channel_Fail_Eruption_C* UAction_Spell_Channel_Fail_Eruption_C::GetDefaultObj()
{
	static class UAction_Spell_Channel_Fail_Eruption_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_Spell_Channel_Fail_Eruption_C*>(UAction_Spell_Channel_Fail_Eruption_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Action_Spell_Channel_Fail_Eruption.Action_Spell_Channel_Fail_Eruption_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Spell_Channel_Fail_Eruption_C::OnBegin(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Spell_Channel_Fail_Eruption_C", "OnBegin");

	Params::UAction_Spell_Channel_Fail_Eruption_C_OnBegin_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_Spell_Channel_Fail_Eruption.Action_Spell_Channel_Fail_Eruption_C.ExecuteUbergraph_Action_Spell_Channel_Fail_Eruption
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Spell_Channel_Fail_Eruption_C::ExecuteUbergraph_Action_Spell_Channel_Fail_Eruption(int32 EntryPoint, class AActor* K2Node_Event_Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Spell_Channel_Fail_Eruption_C", "ExecuteUbergraph_Action_Spell_Channel_Fail_Eruption");

	Params::UAction_Spell_Channel_Fail_Eruption_C_ExecuteUbergraph_Action_Spell_Channel_Fail_Eruption_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;

	UObject::ProcessEvent(Func, &Parms);

}

}


