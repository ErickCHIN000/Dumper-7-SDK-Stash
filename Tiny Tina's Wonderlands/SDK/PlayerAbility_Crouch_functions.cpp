#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerAbility_Crouch.PlayerAbility_Crouch_C
// (None)

class UClass* UPlayerAbility_Crouch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerAbility_Crouch_C");

	return Clss;
}


// PlayerAbility_Crouch_C PlayerAbility_Crouch.Default__PlayerAbility_Crouch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerAbility_Crouch_C* UPlayerAbility_Crouch_C::GetDefaultObj()
{
	static class UPlayerAbility_Crouch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerAbility_Crouch_C*>(UPlayerAbility_Crouch_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerAbility_Crouch.PlayerAbility_Crouch_C.FlushCrouchInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsCrouchToggle_Res                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerAbility_Crouch_C::FlushCrouchInput(bool CallFunc_IsCrouchToggle_Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_Crouch_C", "FlushCrouchInput");

	Params::UPlayerAbility_Crouch_C_FlushCrouchInput_Params Parms{};

	Parms.CallFunc_IsCrouchToggle_Res = CallFunc_IsCrouchToggle_Res;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAbility_Crouch.PlayerAbility_Crouch_C.IsCrouchToggle
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGbxProfile*                 CallFunc_GetPlayerProfile_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerAbility_Crouch_C::IsCrouchToggle(bool* Res, class UGbxProfile* CallFunc_GetPlayerProfile_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_Crouch_C", "IsCrouchToggle");

	Params::UPlayerAbility_Crouch_C_IsCrouchToggle_Params Parms{};

	Parms.CallFunc_GetPlayerProfile_ReturnValue = CallFunc_GetPlayerProfile_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function PlayerAbility_Crouch.PlayerAbility_Crouch_C.GbxInpActEvt_crouch_K2Node_GbxInputActionEvent_Discrete_3
// (BlueprintEvent)
// Parameters:
// class FName                        Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerAbility_Crouch_C::GbxInpActEvt_crouch_K2Node_GbxInputActionEvent_Discrete_3(class FName Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_Crouch_C", "GbxInpActEvt_crouch_K2Node_GbxInputActionEvent_Discrete_3");

	Params::UPlayerAbility_Crouch_C_GbxInpActEvt_crouch_K2Node_GbxInputActionEvent_Discrete_3_Params Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAbility_Crouch.PlayerAbility_Crouch_C.GbxInpActEvt_crouch_K2Node_GbxInputActionEvent_Discrete_2
// (BlueprintEvent)
// Parameters:
// class FName                        Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerAbility_Crouch_C::GbxInpActEvt_crouch_K2Node_GbxInputActionEvent_Discrete_2(class FName Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_Crouch_C", "GbxInpActEvt_crouch_K2Node_GbxInputActionEvent_Discrete_2");

	Params::UPlayerAbility_Crouch_C_GbxInpActEvt_crouch_K2Node_GbxInputActionEvent_Discrete_2_Params Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAbility_Crouch.PlayerAbility_Crouch_C.OnPaused
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPlayerAbility_Crouch_C::OnPaused()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_Crouch_C", "OnPaused");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerAbility_Crouch.PlayerAbility_Crouch_C.ExecuteUbergraph_PlayerAbility_Crouch
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_GbxInputActionEvent_Discrete_Action                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AttemptGroundSlam_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMovingOnLadder_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCrouchToggle_Res                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCrouchToggle_Res1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetWantsToCrouch_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_GbxInputActionEvent_Discrete_Action1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMovingOnLadder_ReturnValue1                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerAbility_Crouch_C::ExecuteUbergraph_PlayerAbility_Crouch(int32 EntryPoint, class FName K2Node_GbxInputActionEvent_Discrete_Action, bool CallFunc_AttemptGroundSlam_ReturnValue, class FName Temp_name_Variable, bool CallFunc_IsMovingOnLadder_ReturnValue, bool CallFunc_IsCrouchToggle_Res, bool CallFunc_IsCrouchToggle_Res1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GetWantsToCrouch_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FName K2Node_GbxInputActionEvent_Discrete_Action1, bool CallFunc_IsMovingOnLadder_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_Crouch_C", "ExecuteUbergraph_PlayerAbility_Crouch");

	Params::UPlayerAbility_Crouch_C_ExecuteUbergraph_PlayerAbility_Crouch_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_GbxInputActionEvent_Discrete_Action = K2Node_GbxInputActionEvent_Discrete_Action;
	Parms.CallFunc_AttemptGroundSlam_ReturnValue = CallFunc_AttemptGroundSlam_ReturnValue;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_IsMovingOnLadder_ReturnValue = CallFunc_IsMovingOnLadder_ReturnValue;
	Parms.CallFunc_IsCrouchToggle_Res = CallFunc_IsCrouchToggle_Res;
	Parms.CallFunc_IsCrouchToggle_Res1 = CallFunc_IsCrouchToggle_Res1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetWantsToCrouch_ReturnValue = CallFunc_GetWantsToCrouch_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_GbxInputActionEvent_Discrete_Action1 = K2Node_GbxInputActionEvent_Discrete_Action1;
	Parms.CallFunc_IsMovingOnLadder_ReturnValue1 = CallFunc_IsMovingOnLadder_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}


