#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerAbility_Melee.PlayerAbility_Melee_C
// (None)

class UClass* UPlayerAbility_Melee_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerAbility_Melee_C");

	return Clss;
}


// PlayerAbility_Melee_C PlayerAbility_Melee.Default__PlayerAbility_Melee_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerAbility_Melee_C* UPlayerAbility_Melee_C::GetDefaultObj()
{
	static class UPlayerAbility_Melee_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerAbility_Melee_C*>(UPlayerAbility_Melee_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerAbility_Melee.PlayerAbility_Melee_C.GbxInpActEvt_melee_K2Node_GbxInputActionEvent_Discrete_3
// (BlueprintEvent)
// Parameters:
// class FName                        Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerAbility_Melee_C::GbxInpActEvt_melee_K2Node_GbxInputActionEvent_Discrete_3(class FName Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_Melee_C", "GbxInpActEvt_melee_K2Node_GbxInputActionEvent_Discrete_3");

	Params::UPlayerAbility_Melee_C_GbxInpActEvt_melee_K2Node_GbxInputActionEvent_Discrete_3_Params Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAbility_Melee.PlayerAbility_Melee_C.GbxInpActEvt_melee_K2Node_GbxInputActionEvent_Discrete_2
// (BlueprintEvent)
// Parameters:
// class FName                        Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerAbility_Melee_C::GbxInpActEvt_melee_K2Node_GbxInputActionEvent_Discrete_2(class FName Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_Melee_C", "GbxInpActEvt_melee_K2Node_GbxInputActionEvent_Discrete_2");

	Params::UPlayerAbility_Melee_C_GbxInpActEvt_melee_K2Node_GbxInputActionEvent_Discrete_2_Params Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAbility_Melee.PlayerAbility_Melee_C.ExecuteUbergraph_PlayerAbility_Melee
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_GbxInputActionEvent_Discrete_Action1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_GbxInputActionEvent_Discrete_Action                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPInterface_PlayerInputActions_C>K2Node_DynamicCast_AsBPInterface_Player_Input_Actions            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPInterface_PlayerInputActions_C>K2Node_DynamicCast_AsBPInterface_Player_Input_Actions1           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerAbility_Melee_C::ExecuteUbergraph_PlayerAbility_Melee(int32 EntryPoint, class FName K2Node_GbxInputActionEvent_Discrete_Action1, class FName Temp_name_Variable, class FName K2Node_GbxInputActionEvent_Discrete_Action, TScriptInterface<class IBPInterface_PlayerInputActions_C> K2Node_DynamicCast_AsBPInterface_Player_Input_Actions, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPInterface_PlayerInputActions_C> K2Node_DynamicCast_AsBPInterface_Player_Input_Actions1, bool K2Node_DynamicCast_bSuccess1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_Melee_C", "ExecuteUbergraph_PlayerAbility_Melee");

	Params::UPlayerAbility_Melee_C_ExecuteUbergraph_PlayerAbility_Melee_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_GbxInputActionEvent_Discrete_Action1 = K2Node_GbxInputActionEvent_Discrete_Action1;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.K2Node_GbxInputActionEvent_Discrete_Action = K2Node_GbxInputActionEvent_Discrete_Action;
	Parms.K2Node_DynamicCast_AsBPInterface_Player_Input_Actions = K2Node_DynamicCast_AsBPInterface_Player_Input_Actions;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBPInterface_Player_Input_Actions1 = K2Node_DynamicCast_AsBPInterface_Player_Input_Actions1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;

	UObject::ProcessEvent(Func, &Parms);

}

}


