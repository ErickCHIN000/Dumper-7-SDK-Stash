#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_EnterLadderTop.Action_EnterLadderTop_C
// (None)

class UClass* UAction_EnterLadderTop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_EnterLadderTop_C");

	return Clss;
}


// Action_EnterLadderTop_C Action_EnterLadderTop.Default__Action_EnterLadderTop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_EnterLadderTop_C* UAction_EnterLadderTop_C::GetDefaultObj()
{
	static class UAction_EnterLadderTop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_EnterLadderTop_C*>(UAction_EnterLadderTop_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Action_EnterLadderTop.Action_EnterLadderTop_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_EnterLadderTop_C::OnBegin(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_EnterLadderTop_C", "OnBegin");

	Params::UAction_EnterLadderTop_C_OnBegin_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_EnterLadderTop.Action_EnterLadderTop_C.ExecuteUbergraph_Action_EnterLadderTop
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_EnterLadderTop_C::ExecuteUbergraph_Action_EnterLadderTop(int32 EntryPoint, class AActor* K2Node_Event_Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_EnterLadderTop_C", "ExecuteUbergraph_Action_EnterLadderTop");

	Params::UAction_EnterLadderTop_C_ExecuteUbergraph_Action_EnterLadderTop_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;

	UObject::ProcessEvent(Func, &Parms);

}

}


