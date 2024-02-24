#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_LadderSlideLanding.Action_LadderSlideLanding_C
// (None)

class UClass* UAction_LadderSlideLanding_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_LadderSlideLanding_C");

	return Clss;
}


// Action_LadderSlideLanding_C Action_LadderSlideLanding.Default__Action_LadderSlideLanding_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_LadderSlideLanding_C* UAction_LadderSlideLanding_C::GetDefaultObj()
{
	static class UAction_LadderSlideLanding_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_LadderSlideLanding_C*>(UAction_LadderSlideLanding_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Action_LadderSlideLanding.Action_LadderSlideLanding_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_LadderSlideLanding_C::OnBegin(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_LadderSlideLanding_C", "OnBegin");

	Params::UAction_LadderSlideLanding_C_OnBegin_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_LadderSlideLanding.Action_LadderSlideLanding_C.ExecuteUbergraph_Action_LadderSlideLanding
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_LadderSlideLanding_C::ExecuteUbergraph_Action_LadderSlideLanding(int32 EntryPoint, class AActor* K2Node_Event_Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_LadderSlideLanding_C", "ExecuteUbergraph_Action_LadderSlideLanding");

	Params::UAction_LadderSlideLanding_C_ExecuteUbergraph_Action_LadderSlideLanding_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;

	UObject::ProcessEvent(Func, &Parms);

}

}


