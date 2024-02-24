#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_EnterLadderBottom.Action_EnterLadderBottom_C
// (None)

class UClass* UAction_EnterLadderBottom_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_EnterLadderBottom_C");

	return Clss;
}


// Action_EnterLadderBottom_C Action_EnterLadderBottom.Default__Action_EnterLadderBottom_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_EnterLadderBottom_C* UAction_EnterLadderBottom_C::GetDefaultObj()
{
	static class UAction_EnterLadderBottom_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_EnterLadderBottom_C*>(UAction_EnterLadderBottom_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Action_EnterLadderBottom.Action_EnterLadderBottom_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_EnterLadderBottom_C::OnBegin(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_EnterLadderBottom_C", "OnBegin");

	Params::UAction_EnterLadderBottom_C_OnBegin_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_EnterLadderBottom.Action_EnterLadderBottom_C.ExecuteUbergraph_Action_EnterLadderBottom
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_EnterLadderBottom_C::ExecuteUbergraph_Action_EnterLadderBottom(int32 EntryPoint, class AActor* K2Node_Event_Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_EnterLadderBottom_C", "ExecuteUbergraph_Action_EnterLadderBottom");

	Params::UAction_EnterLadderBottom_C_ExecuteUbergraph_Action_EnterLadderBottom_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;

	UObject::ProcessEvent(Func, &Parms);

}

}


