#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_PS_JAK_Reload_01.Action_PS_JAK_Reload_01_C
// (None)

class UClass* UAction_PS_JAK_Reload_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_PS_JAK_Reload_01_C");

	return Clss;
}


// Action_PS_JAK_Reload_01_C Action_PS_JAK_Reload_01.Default__Action_PS_JAK_Reload_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_PS_JAK_Reload_01_C* UAction_PS_JAK_Reload_01_C::GetDefaultObj()
{
	static class UAction_PS_JAK_Reload_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_PS_JAK_Reload_01_C*>(UAction_PS_JAK_Reload_01_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Action_PS_JAK_Reload_01.Action_PS_JAK_Reload_01_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EGbxActionEndState      ActionEndState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_PS_JAK_Reload_01_C::OnEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_PS_JAK_Reload_01_C", "OnEnd");

	Params::UAction_PS_JAK_Reload_01_C_OnEnd_Params Parms{};

	Parms.ActionEndState = ActionEndState;
	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_PS_JAK_Reload_01.Action_PS_JAK_Reload_01_C.OnAnimEnd
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_PS_JAK_Reload_01_C::OnAnimEnd(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_PS_JAK_Reload_01_C", "OnAnimEnd");

	Params::UAction_PS_JAK_Reload_01_C_OnAnimEnd_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_PS_JAK_Reload_01.Action_PS_JAK_Reload_01_C.ExecuteUbergraph_Action_PS_JAK_Reload_01
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWeapon*                     CallFunc_K2_GetWeapon_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGbxActionEndState      K2Node_Event_ActionEndState                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_PS_JAK_Reload_01_C::ExecuteUbergraph_Action_PS_JAK_Reload_01(int32 EntryPoint, class AWeapon* CallFunc_K2_GetWeapon_ReturnValue, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor1, class AActor* K2Node_Event_Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_PS_JAK_Reload_01_C", "ExecuteUbergraph_Action_PS_JAK_Reload_01");

	Params::UAction_PS_JAK_Reload_01_C_ExecuteUbergraph_Action_PS_JAK_Reload_01_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetWeapon_ReturnValue = CallFunc_K2_GetWeapon_ReturnValue;
	Parms.K2Node_Event_ActionEndState = K2Node_Event_ActionEndState;
	Parms.K2Node_Event_Actor1 = K2Node_Event_Actor1;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;

	UObject::ProcessEvent(Func, &Parms);

}

}

