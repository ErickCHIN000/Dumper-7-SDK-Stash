#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_ExitLadderBottom.Action_ExitLadderBottom_C
// (None)

class UClass* UAction_ExitLadderBottom_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_ExitLadderBottom_C");

	return Clss;
}


// Action_ExitLadderBottom_C Action_ExitLadderBottom.Default__Action_ExitLadderBottom_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_ExitLadderBottom_C* UAction_ExitLadderBottom_C::GetDefaultObj()
{
	static class UAction_ExitLadderBottom_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_ExitLadderBottom_C*>(UAction_ExitLadderBottom_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Action_ExitLadderBottom.Action_ExitLadderBottom_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_ExitLadderBottom_C::OnBegin(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_ExitLadderBottom_C", "OnBegin");

	Params::UAction_ExitLadderBottom_C_OnBegin_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_ExitLadderBottom.Action_ExitLadderBottom_C.ExecuteUbergraph_Action_ExitLadderBottom
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_ExitLadderBottom_C::ExecuteUbergraph_Action_ExitLadderBottom(int32 EntryPoint, class AActor* K2Node_Event_Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_ExitLadderBottom_C", "ExecuteUbergraph_Action_ExitLadderBottom");

	Params::UAction_ExitLadderBottom_C_ExecuteUbergraph_Action_ExitLadderBottom_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;

	UObject::ProcessEvent(Func, &Parms);

}

}


