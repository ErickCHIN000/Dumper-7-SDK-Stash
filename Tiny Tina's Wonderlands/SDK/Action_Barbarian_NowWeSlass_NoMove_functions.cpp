#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_Barbarian_NowWeSlass_NoMove.Action_Barbarian_NowWeSlass_NoMove_C
// (None)

class UClass* UAction_Barbarian_NowWeSlass_NoMove_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_Barbarian_NowWeSlass_NoMove_C");

	return Clss;
}


// Action_Barbarian_NowWeSlass_NoMove_C Action_Barbarian_NowWeSlass_NoMove.Default__Action_Barbarian_NowWeSlass_NoMove_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_Barbarian_NowWeSlass_NoMove_C* UAction_Barbarian_NowWeSlass_NoMove_C::GetDefaultObj()
{
	static class UAction_Barbarian_NowWeSlass_NoMove_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_Barbarian_NowWeSlass_NoMove_C*>(UAction_Barbarian_NowWeSlass_NoMove_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Action_Barbarian_NowWeSlass_NoMove.Action_Barbarian_NowWeSlass_NoMove_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Barbarian_NowWeSlass_NoMove_C::OnBegin(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Barbarian_NowWeSlass_NoMove_C", "OnBegin");

	Params::UAction_Barbarian_NowWeSlass_NoMove_C_OnBegin_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_Barbarian_NowWeSlass_NoMove.Action_Barbarian_NowWeSlass_NoMove_C.ExecuteUbergraph_Action_Barbarian_NowWeSlass_NoMove
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Barbarian_NowWeSlass_NoMove_C::ExecuteUbergraph_Action_Barbarian_NowWeSlass_NoMove(int32 EntryPoint, class AActor* K2Node_Event_Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Barbarian_NowWeSlass_NoMove_C", "ExecuteUbergraph_Action_Barbarian_NowWeSlass_NoMove");

	Params::UAction_Barbarian_NowWeSlass_NoMove_C_ExecuteUbergraph_Action_Barbarian_NowWeSlass_NoMove_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;

	UObject::ProcessEvent(Func, &Parms);

}

}


