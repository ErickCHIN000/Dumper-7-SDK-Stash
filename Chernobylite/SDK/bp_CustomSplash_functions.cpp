#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bp_CustomSplash.bp_CustomSplash_C
// (Actor)

class UClass* Abp_CustomSplash_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bp_CustomSplash_C");

	return Clss;
}


// bp_CustomSplash_C bp_CustomSplash.Default__bp_CustomSplash_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Abp_CustomSplash_C* Abp_CustomSplash_C::GetDefaultObj()
{
	static class Abp_CustomSplash_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Abp_CustomSplash_C*>(Abp_CustomSplash_C::StaticClass()->DefaultObject);

	return Default;
}


// Function bp_CustomSplash.bp_CustomSplash_C.InpActEvt_Utility_AnyGamepadKey_K2Node_InputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Abp_CustomSplash_C::InpActEvt_Utility_AnyGamepadKey_K2Node_InputActionEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_CustomSplash_C", "InpActEvt_Utility_AnyGamepadKey_K2Node_InputActionEvent_0");

	Params::Abp_CustomSplash_C_InpActEvt_Utility_AnyGamepadKey_K2Node_InputActionEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_CustomSplash.bp_CustomSplash_C.InpActEvt_AnyKey_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Abp_CustomSplash_C::InpActEvt_AnyKey_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_CustomSplash_C", "InpActEvt_AnyKey_K2Node_InputKeyEvent_0");

	Params::Abp_CustomSplash_C_InpActEvt_AnyKey_K2Node_InputKeyEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_CustomSplash.bp_CustomSplash_C.Show
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      WidgetClass                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_CustomSplash_C::Show(class UClass* WidgetClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_CustomSplash_C", "Show");

	Params::Abp_CustomSplash_C_Show_Params Parms{};

	Parms.WidgetClass = WidgetClass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_CustomSplash.bp_CustomSplash_C.Hide
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_CustomSplash_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_CustomSplash_C", "Hide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_CustomSplash.bp_CustomSplash_C.ExecuteUbergraph_bp_CustomSplash
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_CustomEvent_WidgetClass                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGMovementState*            CallFunc_SetNewMovementState_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGMovementState*            CallFunc_SetNewMovementState_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputKeyEvent_Key                                         (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key                                      (HasGetValueTypeHash)

void Abp_CustomSplash_C::ExecuteUbergraph_bp_CustomSplash(int32 EntryPoint, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_Has_Been_Initd_Variable, class UClass* K2Node_CustomEvent_WidgetClass, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UUserWidget* CallFunc_Create_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, bool Temp_bool_IsClosed_Variable, const struct FKey& K2Node_InputKeyEvent_Key, const struct FKey& K2Node_InputActionEvent_Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_CustomSplash_C", "ExecuteUbergraph_bp_CustomSplash");

	Params::Abp_CustomSplash_C_ExecuteUbergraph_bp_CustomSplash_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_CustomEvent_WidgetClass = K2Node_CustomEvent_WidgetClass;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_SetNewMovementState_ReturnValue = CallFunc_SetNewMovementState_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.CallFunc_SetNewMovementState_ReturnValue_1 = CallFunc_SetNewMovementState_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_InputKeyEvent_Key = K2Node_InputKeyEvent_Key;
	Parms.K2Node_InputActionEvent_Key = K2Node_InputActionEvent_Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_CustomSplash.bp_CustomSplash_C.FPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_CustomSplash_C::FPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_CustomSplash_C", "FPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


