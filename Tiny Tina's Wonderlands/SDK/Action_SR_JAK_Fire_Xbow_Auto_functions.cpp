#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_SR_JAK_Fire_Xbow_Auto.Action_SR_JAK_Fire_Xbow_Auto_C
// (None)

class UClass* UAction_SR_JAK_Fire_Xbow_Auto_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_SR_JAK_Fire_Xbow_Auto_C");

	return Clss;
}


// Action_SR_JAK_Fire_Xbow_Auto_C Action_SR_JAK_Fire_Xbow_Auto.Default__Action_SR_JAK_Fire_Xbow_Auto_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_SR_JAK_Fire_Xbow_Auto_C* UAction_SR_JAK_Fire_Xbow_Auto_C::GetDefaultObj()
{
	static class UAction_SR_JAK_Fire_Xbow_Auto_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_SR_JAK_Fire_Xbow_Auto_C*>(UAction_SR_JAK_Fire_Xbow_Auto_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Action_SR_JAK_Fire_Xbow_Auto.Action_SR_JAK_Fire_Xbow_Auto_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EGbxActionEndState      ActionEndState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_SR_JAK_Fire_Xbow_Auto_C::OnEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_SR_JAK_Fire_Xbow_Auto_C", "OnEnd");

	Params::UAction_SR_JAK_Fire_Xbow_Auto_C_OnEnd_Params Parms{};

	Parms.ActionEndState = ActionEndState;
	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_SR_JAK_Fire_Xbow_Auto.Action_SR_JAK_Fire_Xbow_Auto_C.ExecuteUbergraph_Action_SR_JAK_Fire_Xbow_Auto
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGbxActionEndState      K2Node_Event_ActionEndState                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_SR_JAK_Fire_Xbow_Auto_C::ExecuteUbergraph_Action_SR_JAK_Fire_Xbow_Auto(int32 EntryPoint, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_SR_JAK_Fire_Xbow_Auto_C", "ExecuteUbergraph_Action_SR_JAK_Fire_Xbow_Auto");

	Params::UAction_SR_JAK_Fire_Xbow_Auto_C_ExecuteUbergraph_Action_SR_JAK_Fire_Xbow_Auto_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ActionEndState = K2Node_Event_ActionEndState;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


