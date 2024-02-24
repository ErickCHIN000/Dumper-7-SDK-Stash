#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_SandBoxTutorial.WBP_SandBoxTutorial_C
// (None)

class UClass* UWBP_SandBoxTutorial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_SandBoxTutorial_C");

	return Clss;
}


// WBP_SandBoxTutorial_C WBP_SandBoxTutorial.Default__WBP_SandBoxTutorial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_SandBoxTutorial_C* UWBP_SandBoxTutorial_C::GetDefaultObj()
{
	static class UWBP_SandBoxTutorial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_SandBoxTutorial_C*>(UWBP_SandBoxTutorial_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_SandBoxTutorial.WBP_SandBoxTutorial_C.GetText_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// TArray<class FString>              NodeMode                                                         (Edit, BlueprintVisible)
// TArray<class FString>              GridMode                                                         (Edit, BlueprintVisible)
// TArray<class FString>              DefaultMode                                                      (Edit, BlueprintVisible)
// TArray<class FString>              K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<class FString>              K2Node_MakeArray_Array_1                                         (ReferenceParm)
// TArray<class FString>              K2Node_MakeArray_Array_2                                         (ReferenceParm)
// class FString                      CallFunc_JoinStringArray_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FString                      CallFunc_JoinStringArray_ReturnValue_1                           (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class FString                      CallFunc_JoinStringArray_ReturnValue_2                           (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

class FText UWBP_SandBoxTutorial_C::GetText_0(const TArray<class FString>& NodeMode, const TArray<class FString>& GridMode, const TArray<class FString>& DefaultMode, TArray<class FString>& K2Node_MakeArray_Array, TArray<class FString>& K2Node_MakeArray_Array_1, TArray<class FString>& K2Node_MakeArray_Array_2, const class FString& CallFunc_JoinStringArray_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_JoinStringArray_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, const class FString& CallFunc_JoinStringArray_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue_2, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SandBoxTutorial_C", "GetText_0");

	Params::UWBP_SandBoxTutorial_C_GetText_0_Params Parms{};

	Parms.NodeMode = NodeMode;
	Parms.GridMode = GridMode;
	Parms.DefaultMode = DefaultMode;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_JoinStringArray_ReturnValue = CallFunc_JoinStringArray_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_JoinStringArray_ReturnValue_1 = CallFunc_JoinStringArray_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_JoinStringArray_ReturnValue_2 = CallFunc_JoinStringArray_ReturnValue_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_SandBoxTutorial.WBP_SandBoxTutorial_C.BndEvt__WBP_Tutorial_Button_82_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_SandBoxTutorial_C::BndEvt__WBP_Tutorial_Button_82_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SandBoxTutorial_C", "BndEvt__WBP_Tutorial_Button_82_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SandBoxTutorial.WBP_SandBoxTutorial_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_SandBoxTutorial_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SandBoxTutorial_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SandBoxTutorial.WBP_SandBoxTutorial_C.OnExitClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_SandBoxTutorial_C::OnExitClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SandBoxTutorial_C", "OnExitClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SandBoxTutorial.WBP_SandBoxTutorial_C.BP_DoBindings
// (Event, Protected, BlueprintEvent)
// Parameters:
// class USophiaInputComponent*       InputComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputDeviceType        E                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SandBoxTutorial_C::BP_DoBindings(class USophiaInputComponent* InputComp, enum class EInputDeviceType E)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SandBoxTutorial_C", "BP_DoBindings");

	Params::UWBP_SandBoxTutorial_C_BP_DoBindings_Params Parms{};

	Parms.InputComp = InputComp;
	Parms.E = E;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SandBoxTutorial.WBP_SandBoxTutorial_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SandBoxTutorial_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SandBoxTutorial_C", "CustomEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SandBoxTutorial.WBP_SandBoxTutorial_C.ExecuteUbergraph_WBP_SandBoxTutorial
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASophiaCharacter*            K2Node_DynamicCast_AsSophia_Character                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInGridMode_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_inPowerMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USophiaInputComponent*       K2Node_Event_inputComp                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputDeviceType        K2Node_Event_e                                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SandBoxTutorial_C::ExecuteUbergraph_WBP_SandBoxTutorial(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class ASophiaCharacter* K2Node_DynamicCast_AsSophia_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsInGridMode_ReturnValue, bool CallFunc_inPowerMode_ReturnValue, class USophiaInputComponent* K2Node_Event_inputComp, enum class EInputDeviceType K2Node_Event_e)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SandBoxTutorial_C", "ExecuteUbergraph_WBP_SandBoxTutorial");

	Params::UWBP_SandBoxTutorial_C_ExecuteUbergraph_WBP_SandBoxTutorial_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsSophia_Character = K2Node_DynamicCast_AsSophia_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsInGridMode_ReturnValue = CallFunc_IsInGridMode_ReturnValue;
	Parms.CallFunc_inPowerMode_ReturnValue = CallFunc_inPowerMode_ReturnValue;
	Parms.K2Node_Event_inputComp = K2Node_Event_inputComp;
	Parms.K2Node_Event_e = K2Node_Event_e;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SandBoxTutorial.WBP_SandBoxTutorial_C.TutorialClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SandBoxTutorial_C::TutorialClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SandBoxTutorial_C", "TutorialClosed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


