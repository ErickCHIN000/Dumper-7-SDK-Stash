#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_PS_JAK_Fire_Xbow_Speed_Zoom.Action_PS_JAK_Fire_Xbow_Speed_Zoom_C
// (None)

class UClass* UAction_PS_JAK_Fire_Xbow_Speed_Zoom_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_PS_JAK_Fire_Xbow_Speed_Zoom_C");

	return Clss;
}


// Action_PS_JAK_Fire_Xbow_Speed_Zoom_C Action_PS_JAK_Fire_Xbow_Speed_Zoom.Default__Action_PS_JAK_Fire_Xbow_Speed_Zoom_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_PS_JAK_Fire_Xbow_Speed_Zoom_C* UAction_PS_JAK_Fire_Xbow_Speed_Zoom_C::GetDefaultObj()
{
	static class UAction_PS_JAK_Fire_Xbow_Speed_Zoom_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_PS_JAK_Fire_Xbow_Speed_Zoom_C*>(UAction_PS_JAK_Fire_Xbow_Speed_Zoom_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Action_PS_JAK_Fire_Xbow_Speed_Zoom.Action_PS_JAK_Fire_Xbow_Speed_Zoom_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_PS_JAK_Fire_Xbow_Speed_Zoom_C::OnBegin(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_PS_JAK_Fire_Xbow_Speed_Zoom_C", "OnBegin");

	Params::UAction_PS_JAK_Fire_Xbow_Speed_Zoom_C_OnBegin_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_PS_JAK_Fire_Xbow_Speed_Zoom.Action_PS_JAK_Fire_Xbow_Speed_Zoom_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EGbxActionEndState      ActionEndState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_PS_JAK_Fire_Xbow_Speed_Zoom_C::OnEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_PS_JAK_Fire_Xbow_Speed_Zoom_C", "OnEnd");

	Params::UAction_PS_JAK_Fire_Xbow_Speed_Zoom_C_OnEnd_Params Parms{};

	Parms.ActionEndState = ActionEndState;
	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_PS_JAK_Fire_Xbow_Speed_Zoom.Action_PS_JAK_Fire_Xbow_Speed_Zoom_C.ExecuteUbergraph_Action_PS_JAK_Fire_Xbow_Speed_Zoom
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGbxActionEndState      K2Node_Event_ActionEndState                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_PS_JAK_Fire_Xbow_Speed_Zoom_C::ExecuteUbergraph_Action_PS_JAK_Fire_Xbow_Speed_Zoom(int32 EntryPoint, class AActor* K2Node_Event_Actor1, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_PS_JAK_Fire_Xbow_Speed_Zoom_C", "ExecuteUbergraph_Action_PS_JAK_Fire_Xbow_Speed_Zoom");

	Params::UAction_PS_JAK_Fire_Xbow_Speed_Zoom_C_ExecuteUbergraph_Action_PS_JAK_Fire_Xbow_Speed_Zoom_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Actor1 = K2Node_Event_Actor1;
	Parms.K2Node_Event_ActionEndState = K2Node_Event_ActionEndState;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;

	UObject::ProcessEvent(Func, &Parms);

}

}


