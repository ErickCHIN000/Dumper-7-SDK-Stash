#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_Mood_Angry.Action_Mood_Angry_C
// (None)

class UClass* UAction_Mood_Angry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_Mood_Angry_C");

	return Clss;
}


// Action_Mood_Angry_C Action_Mood_Angry.Default__Action_Mood_Angry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_Mood_Angry_C* UAction_Mood_Angry_C::GetDefaultObj()
{
	static class UAction_Mood_Angry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_Mood_Angry_C*>(UAction_Mood_Angry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Action_Mood_Angry.Action_Mood_Angry_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Mood_Angry_C::OnBegin(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Mood_Angry_C", "OnBegin");

	Params::UAction_Mood_Angry_C_OnBegin_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_Mood_Angry.Action_Mood_Angry_C.ExecuteUbergraph_Action_Mood_Angry
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Mood_Angry_C::ExecuteUbergraph_Action_Mood_Angry(int32 EntryPoint, class AActor* K2Node_Event_Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Mood_Angry_C", "ExecuteUbergraph_Action_Mood_Angry");

	Params::UAction_Mood_Angry_C_ExecuteUbergraph_Action_Mood_Angry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;

	UObject::ProcessEvent(Func, &Parms);

}

}


