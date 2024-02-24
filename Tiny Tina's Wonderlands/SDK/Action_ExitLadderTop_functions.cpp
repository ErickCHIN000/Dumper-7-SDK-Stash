#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_ExitLadderTop.Action_ExitLadderTop_C
// (None)

class UClass* UAction_ExitLadderTop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_ExitLadderTop_C");

	return Clss;
}


// Action_ExitLadderTop_C Action_ExitLadderTop.Default__Action_ExitLadderTop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_ExitLadderTop_C* UAction_ExitLadderTop_C::GetDefaultObj()
{
	static class UAction_ExitLadderTop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_ExitLadderTop_C*>(UAction_ExitLadderTop_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Action_ExitLadderTop.Action_ExitLadderTop_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_ExitLadderTop_C::OnBegin(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_ExitLadderTop_C", "OnBegin");

	Params::UAction_ExitLadderTop_C_OnBegin_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_ExitLadderTop.Action_ExitLadderTop_C.ExecuteUbergraph_Action_ExitLadderTop
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_ExitLadderTop_C::ExecuteUbergraph_Action_ExitLadderTop(int32 EntryPoint, class AActor* K2Node_Event_Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_ExitLadderTop_C", "ExecuteUbergraph_Action_ExitLadderTop");

	Params::UAction_ExitLadderTop_C_ExecuteUbergraph_Action_ExitLadderTop_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;

	UObject::ProcessEvent(Func, &Parms);

}

}


