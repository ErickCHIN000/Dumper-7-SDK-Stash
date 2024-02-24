#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_JoinConquestTutorial.WBP_JoinConquestTutorial_C
// (None)

class UClass* UWBP_JoinConquestTutorial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_JoinConquestTutorial_C");

	return Clss;
}


// WBP_JoinConquestTutorial_C WBP_JoinConquestTutorial.Default__WBP_JoinConquestTutorial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_JoinConquestTutorial_C* UWBP_JoinConquestTutorial_C::GetDefaultObj()
{
	static class UWBP_JoinConquestTutorial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_JoinConquestTutorial_C*>(UWBP_JoinConquestTutorial_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_JoinConquestTutorial.WBP_JoinConquestTutorial_C.GetText_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

class FText UWBP_JoinConquestTutorial_C::GetText_0(int32 Temp_int_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JoinConquestTutorial_C", "GetText_0");

	Params::UWBP_JoinConquestTutorial_C_GetText_0_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_JoinConquestTutorial.WBP_JoinConquestTutorial_C.WBP_JoinConquestTutorial_AutoGenFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_JoinConquestTutorial_C::WBP_JoinConquestTutorial_AutoGenFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JoinConquestTutorial_C", "WBP_JoinConquestTutorial_AutoGenFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_JoinConquestTutorial.WBP_JoinConquestTutorial_C.BP_DoBindings
// (Event, Protected, BlueprintEvent)
// Parameters:
// class USophiaInputComponent*       InputComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputDeviceType        E                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_JoinConquestTutorial_C::BP_DoBindings(class USophiaInputComponent* InputComp, enum class EInputDeviceType E)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JoinConquestTutorial_C", "BP_DoBindings");

	Params::UWBP_JoinConquestTutorial_C_BP_DoBindings_Params Parms{};

	Parms.InputComp = InputComp;
	Parms.E = E;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_JoinConquestTutorial.WBP_JoinConquestTutorial_C.OnExitClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_JoinConquestTutorial_C::OnExitClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JoinConquestTutorial_C", "OnExitClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_JoinConquestTutorial.WBP_JoinConquestTutorial_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_JoinConquestTutorial_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JoinConquestTutorial_C", "CustomEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_JoinConquestTutorial.WBP_JoinConquestTutorial_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_JoinConquestTutorial_C::CustomEvent_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JoinConquestTutorial_C", "CustomEvent_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_JoinConquestTutorial.WBP_JoinConquestTutorial_C.BndEvt__WBP_JoinConquestTutorial_WBP_StyledButton_K2Node_ComponentBoundEvent_2_Pressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_JoinConquestTutorial_C::BndEvt__WBP_JoinConquestTutorial_WBP_StyledButton_K2Node_ComponentBoundEvent_2_Pressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JoinConquestTutorial_C", "BndEvt__WBP_JoinConquestTutorial_WBP_StyledButton_K2Node_ComponentBoundEvent_2_Pressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_JoinConquestTutorial.WBP_JoinConquestTutorial_C.BndEvt__WBP_JoinConquestTutorial_CancelButton_K2Node_ComponentBoundEvent_3_Pressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_JoinConquestTutorial_C::BndEvt__WBP_JoinConquestTutorial_CancelButton_K2Node_ComponentBoundEvent_3_Pressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JoinConquestTutorial_C", "BndEvt__WBP_JoinConquestTutorial_CancelButton_K2Node_ComponentBoundEvent_3_Pressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_JoinConquestTutorial.WBP_JoinConquestTutorial_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_JoinConquestTutorial_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JoinConquestTutorial_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_JoinConquestTutorial.WBP_JoinConquestTutorial_C.ExecuteUbergraph_WBP_JoinConquestTutorial
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASophiaCharacter*            K2Node_DynamicCast_AsSophia_Character                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInGridMode_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventPrompt                CallFunc_GetEventPromptState_ReturnValue                         (NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_inPowerMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USophiaInputComponent*       K2Node_Event_inputComp                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputDeviceType        K2Node_Event_e                                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue                        (None)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue_1                      (None)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue_2                      (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// class USophiaGameInstance*         K2Node_DynamicCast_AsSophia_Game_Instance                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue_3                      (None)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue_4                      (None)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue_5                      (None)

void UWBP_JoinConquestTutorial_C::ExecuteUbergraph_WBP_JoinConquestTutorial(int32 EntryPoint, int32 Temp_int_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class ASophiaCharacter* K2Node_DynamicCast_AsSophia_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsInGridMode_ReturnValue, const struct FEventPrompt& CallFunc_GetEventPromptState_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_inPowerMode_ReturnValue, class USophiaInputComponent* K2Node_Event_inputComp, enum class EInputDeviceType K2Node_Event_e, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue_1, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, const class FString& K2Node_Select_Default, class USophiaGameInstance* K2Node_DynamicCast_AsSophia_Game_Instance, bool K2Node_DynamicCast_bSuccess_1, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue_3, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue_4, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JoinConquestTutorial_C", "ExecuteUbergraph_WBP_JoinConquestTutorial");

	Params::UWBP_JoinConquestTutorial_C_ExecuteUbergraph_WBP_JoinConquestTutorial_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_DynamicCast_AsSophia_Character = K2Node_DynamicCast_AsSophia_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsInGridMode_ReturnValue = CallFunc_IsInGridMode_ReturnValue;
	Parms.CallFunc_GetEventPromptState_ReturnValue = CallFunc_GetEventPromptState_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_inPowerMode_ReturnValue = CallFunc_inPowerMode_ReturnValue;
	Parms.K2Node_Event_inputComp = K2Node_Event_inputComp;
	Parms.K2Node_Event_e = K2Node_Event_e;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue = CallFunc_MakeBrushFromTexture_ReturnValue;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue_1 = CallFunc_MakeBrushFromTexture_ReturnValue_1;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue_2 = CallFunc_MakeBrushFromTexture_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_DynamicCast_AsSophia_Game_Instance = K2Node_DynamicCast_AsSophia_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue_3 = CallFunc_MakeBrushFromTexture_ReturnValue_3;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue_4 = CallFunc_MakeBrushFromTexture_ReturnValue_4;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue_5 = CallFunc_MakeBrushFromTexture_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_JoinConquestTutorial.WBP_JoinConquestTutorial_C.TutorialClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_JoinConquestTutorial_C::TutorialClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JoinConquestTutorial_C", "TutorialClosed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


