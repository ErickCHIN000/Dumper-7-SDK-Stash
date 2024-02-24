#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerAbility_Jump.PlayerAbility_Jump_C
// (None)

class UClass* UPlayerAbility_Jump_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerAbility_Jump_C");

	return Clss;
}


// PlayerAbility_Jump_C PlayerAbility_Jump.Default__PlayerAbility_Jump_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerAbility_Jump_C* UPlayerAbility_Jump_C::GetDefaultObj()
{
	static class UPlayerAbility_Jump_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerAbility_Jump_C*>(UPlayerAbility_Jump_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerAbility_Jump.PlayerAbility_Jump_C.GbxInpActEvt_jump_K2Node_GbxInputActionEvent_Discrete_3
// (BlueprintEvent)
// Parameters:
// class FName                        Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerAbility_Jump_C::GbxInpActEvt_jump_K2Node_GbxInputActionEvent_Discrete_3(class FName Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_Jump_C", "GbxInpActEvt_jump_K2Node_GbxInputActionEvent_Discrete_3");

	Params::UPlayerAbility_Jump_C_GbxInpActEvt_jump_K2Node_GbxInputActionEvent_Discrete_3_Params Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAbility_Jump.PlayerAbility_Jump_C.GbxInpActEvt_jump_K2Node_GbxInputActionEvent_Discrete_2
// (BlueprintEvent)
// Parameters:
// class FName                        Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerAbility_Jump_C::GbxInpActEvt_jump_K2Node_GbxInputActionEvent_Discrete_2(class FName Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_Jump_C", "GbxInpActEvt_jump_K2Node_GbxInputActionEvent_Discrete_2");

	Params::UPlayerAbility_Jump_C_GbxInpActEvt_jump_K2Node_GbxInputActionEvent_Discrete_2_Params Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAbility_Jump.PlayerAbility_Jump_C.ExecuteUbergraph_PlayerAbility_Jump
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_GbxInputActionEvent_Discrete_Action1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_GbxInputActionEvent_Discrete_Action                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerAbility_Jump_C::ExecuteUbergraph_PlayerAbility_Jump(int32 EntryPoint, class FName K2Node_GbxInputActionEvent_Discrete_Action1, class FName K2Node_GbxInputActionEvent_Discrete_Action, class FName Temp_name_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_Jump_C", "ExecuteUbergraph_PlayerAbility_Jump");

	Params::UPlayerAbility_Jump_C_ExecuteUbergraph_PlayerAbility_Jump_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_GbxInputActionEvent_Discrete_Action1 = K2Node_GbxInputActionEvent_Discrete_Action1;
	Parms.K2Node_GbxInputActionEvent_Discrete_Action = K2Node_GbxInputActionEvent_Discrete_Action;
	Parms.Temp_name_Variable = Temp_name_Variable;

	UObject::ProcessEvent(Func, &Parms);

}

}


