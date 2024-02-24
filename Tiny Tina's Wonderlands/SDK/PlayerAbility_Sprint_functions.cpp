#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerAbility_Sprint.PlayerAbility_Sprint_C
// (None)

class UClass* UPlayerAbility_Sprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerAbility_Sprint_C");

	return Clss;
}


// PlayerAbility_Sprint_C PlayerAbility_Sprint.Default__PlayerAbility_Sprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerAbility_Sprint_C* UPlayerAbility_Sprint_C::GetDefaultObj()
{
	static class UPlayerAbility_Sprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerAbility_Sprint_C*>(UPlayerAbility_Sprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerAbility_Sprint.PlayerAbility_Sprint_C.IsSprintToggle
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGbxProfile*                 CallFunc_GetPlayerProfile_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerAbility_Sprint_C::IsSprintToggle(bool* Res, class UGbxProfile* CallFunc_GetPlayerProfile_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_Sprint_C", "IsSprintToggle");

	Params::UPlayerAbility_Sprint_C_IsSprintToggle_Params Parms{};

	Parms.CallFunc_GetPlayerProfile_ReturnValue = CallFunc_GetPlayerProfile_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function PlayerAbility_Sprint.PlayerAbility_Sprint_C.GbxInpActEvt_sprint_K2Node_GbxInputActionEvent_Discrete_3
// (BlueprintEvent)
// Parameters:
// class FName                        Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerAbility_Sprint_C::GbxInpActEvt_sprint_K2Node_GbxInputActionEvent_Discrete_3(class FName Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_Sprint_C", "GbxInpActEvt_sprint_K2Node_GbxInputActionEvent_Discrete_3");

	Params::UPlayerAbility_Sprint_C_GbxInpActEvt_sprint_K2Node_GbxInputActionEvent_Discrete_3_Params Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAbility_Sprint.PlayerAbility_Sprint_C.GbxInpActEvt_sprint_K2Node_GbxInputActionEvent_Discrete_2
// (BlueprintEvent)
// Parameters:
// class FName                        Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerAbility_Sprint_C::GbxInpActEvt_sprint_K2Node_GbxInputActionEvent_Discrete_2(class FName Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_Sprint_C", "GbxInpActEvt_sprint_K2Node_GbxInputActionEvent_Discrete_2");

	Params::UPlayerAbility_Sprint_C_GbxInpActEvt_sprint_K2Node_GbxInputActionEvent_Discrete_2_Params Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAbility_Sprint.PlayerAbility_Sprint_C.ExecuteUbergraph_PlayerAbility_Sprint
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_GbxInputActionEvent_Discrete_Action                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSprintToggle_Res                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetWantsToSprint_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_GbxInputActionEvent_Discrete_Action1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSprintToggle_Res1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerAbility_Sprint_C::ExecuteUbergraph_PlayerAbility_Sprint(int32 EntryPoint, class FName K2Node_GbxInputActionEvent_Discrete_Action, class FName Temp_name_Variable, bool CallFunc_IsSprintToggle_Res, bool CallFunc_GetWantsToSprint_ReturnValue, class FName K2Node_GbxInputActionEvent_Discrete_Action1, bool CallFunc_IsSprintToggle_Res1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_Sprint_C", "ExecuteUbergraph_PlayerAbility_Sprint");

	Params::UPlayerAbility_Sprint_C_ExecuteUbergraph_PlayerAbility_Sprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_GbxInputActionEvent_Discrete_Action = K2Node_GbxInputActionEvent_Discrete_Action;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_IsSprintToggle_Res = CallFunc_IsSprintToggle_Res;
	Parms.CallFunc_GetWantsToSprint_ReturnValue = CallFunc_GetWantsToSprint_ReturnValue;
	Parms.K2Node_GbxInputActionEvent_Discrete_Action1 = K2Node_GbxInputActionEvent_Discrete_Action1;
	Parms.CallFunc_IsSprintToggle_Res1 = CallFunc_IsSprintToggle_Res1;

	UObject::ProcessEvent(Func, &Parms);

}

}


