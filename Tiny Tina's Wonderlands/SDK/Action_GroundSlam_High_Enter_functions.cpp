#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_GroundSlam_High_Enter.Action_GroundSlam_High_Enter_C
// (None)

class UClass* UAction_GroundSlam_High_Enter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_GroundSlam_High_Enter_C");

	return Clss;
}


// Action_GroundSlam_High_Enter_C Action_GroundSlam_High_Enter.Default__Action_GroundSlam_High_Enter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_GroundSlam_High_Enter_C* UAction_GroundSlam_High_Enter_C::GetDefaultObj()
{
	static class UAction_GroundSlam_High_Enter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_GroundSlam_High_Enter_C*>(UAction_GroundSlam_High_Enter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Action_GroundSlam_High_Enter.Action_GroundSlam_High_Enter_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_GroundSlam_High_Enter_C::OnBegin(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_GroundSlam_High_Enter_C", "OnBegin");

	Params::UAction_GroundSlam_High_Enter_C_OnBegin_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_GroundSlam_High_Enter.Action_GroundSlam_High_Enter_C.ExecuteUbergraph_Action_GroundSlam_High_Enter
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIBPChar_Player_C>K2Node_DynamicCast_AsIBPChar_Player                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_GroundSlam_High_Enter_C::ExecuteUbergraph_Action_GroundSlam_High_Enter(int32 EntryPoint, class AActor* K2Node_Event_Actor, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_GroundSlam_High_Enter_C", "ExecuteUbergraph_Action_GroundSlam_High_Enter");

	Params::UAction_GroundSlam_High_Enter_C_ExecuteUbergraph_Action_GroundSlam_High_Enter_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;
	Parms.K2Node_DynamicCast_AsIBPChar_Player = K2Node_DynamicCast_AsIBPChar_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


