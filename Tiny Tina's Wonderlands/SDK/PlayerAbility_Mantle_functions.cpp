#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerAbility_Mantle.PlayerAbility_Mantle_C
// (None)

class UClass* UPlayerAbility_Mantle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerAbility_Mantle_C");

	return Clss;
}


// PlayerAbility_Mantle_C PlayerAbility_Mantle.Default__PlayerAbility_Mantle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerAbility_Mantle_C* UPlayerAbility_Mantle_C::GetDefaultObj()
{
	static class UPlayerAbility_Mantle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerAbility_Mantle_C*>(UPlayerAbility_Mantle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerAbility_Mantle.PlayerAbility_Mantle_C.GbxInpActEvt_jump_K2Node_GbxInputActionEvent_Discrete_3
// (BlueprintEvent)
// Parameters:
// class FName                        Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerAbility_Mantle_C::GbxInpActEvt_jump_K2Node_GbxInputActionEvent_Discrete_3(class FName Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_Mantle_C", "GbxInpActEvt_jump_K2Node_GbxInputActionEvent_Discrete_3");

	Params::UPlayerAbility_Mantle_C_GbxInpActEvt_jump_K2Node_GbxInputActionEvent_Discrete_3_Params Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAbility_Mantle.PlayerAbility_Mantle_C.GbxInpActEvt_jump_K2Node_GbxInputActionEvent_Discrete_2
// (BlueprintEvent)
// Parameters:
// class FName                        Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerAbility_Mantle_C::GbxInpActEvt_jump_K2Node_GbxInputActionEvent_Discrete_2(class FName Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_Mantle_C", "GbxInpActEvt_jump_K2Node_GbxInputActionEvent_Discrete_2");

	Params::UPlayerAbility_Mantle_C_GbxInpActEvt_jump_K2Node_GbxInputActionEvent_Discrete_2_Params Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAbility_Mantle.PlayerAbility_Mantle_C.OnPaused
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPlayerAbility_Mantle_C::OnPaused()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_Mantle_C", "OnPaused");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerAbility_Mantle.PlayerAbility_Mantle_C.ExecuteUbergraph_PlayerAbility_Mantle
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_GbxInputActionEvent_Discrete_Action1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_GbxInputActionEvent_Discrete_Action                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerAbility_Mantle_C::ExecuteUbergraph_PlayerAbility_Mantle(int32 EntryPoint, class FName K2Node_GbxInputActionEvent_Discrete_Action1, class FName K2Node_GbxInputActionEvent_Discrete_Action, class FName Temp_name_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_Mantle_C", "ExecuteUbergraph_PlayerAbility_Mantle");

	Params::UPlayerAbility_Mantle_C_ExecuteUbergraph_PlayerAbility_Mantle_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_GbxInputActionEvent_Discrete_Action1 = K2Node_GbxInputActionEvent_Discrete_Action1;
	Parms.K2Node_GbxInputActionEvent_Discrete_Action = K2Node_GbxInputActionEvent_Discrete_Action;
	Parms.Temp_name_Variable = Temp_name_Variable;

	UObject::ProcessEvent(Func, &Parms);

}

}


