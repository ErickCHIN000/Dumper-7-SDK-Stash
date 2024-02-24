#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_KeyBind_New.WBP_KeyBind_New_C
// (None)

class UClass* UWBP_KeyBind_New_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_KeyBind_New_C");

	return Clss;
}


// WBP_KeyBind_New_C WBP_KeyBind_New.Default__WBP_KeyBind_New_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_KeyBind_New_C* UWBP_KeyBind_New_C::GetDefaultObj()
{
	static class UWBP_KeyBind_New_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_KeyBind_New_C*>(UWBP_KeyBind_New_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_KeyBind_New.WBP_KeyBind_New_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UWBP_KeyBind_New_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_KeyBind_New_C", "OnMouseButtonDown");

	Params::UWBP_KeyBind_New_C_OnMouseButtonDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_KeyBind_New.WBP_KeyBind_New_C.UpdateKBMAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputAction                InputActionKBM                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_KeyBind_New_C::UpdateKBMAction(const struct FInputAction& InputActionKBM)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_KeyBind_New_C", "UpdateKBMAction");

	Params::UWBP_KeyBind_New_C_UpdateKBMAction_Params Parms{};

	Parms.InputActionKBM = InputActionKBM;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_KeyBind_New.WBP_KeyBind_New_C.WaitingKey_KBM
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)

void UWBP_KeyBind_New_C::WaitingKey_KBM(class FText CallFunc_MakeLiteralText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_KeyBind_New_C", "WaitingKey_KBM");

	Params::UWBP_KeyBind_New_C_WaitingKey_KBM_Params Parms{};

	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_KeyBind_New.WBP_KeyBind_New_C.WaitingKey_Controller
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)

void UWBP_KeyBind_New_C::WaitingKey_Controller(class FText CallFunc_MakeLiteralText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_KeyBind_New_C", "WaitingKey_Controller");

	Params::UWBP_KeyBind_New_C_WaitingKey_Controller_Params Parms{};

	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_KeyBind_New.WBP_KeyBind_New_C.UpdateControllerAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputAction                InputActionController                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_KeyBind_New_C::UpdateControllerAction(const struct FInputAction& InputActionController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_KeyBind_New_C", "UpdateControllerAction");

	Params::UWBP_KeyBind_New_C_UpdateControllerAction_Params Parms{};

	Parms.InputActionController = InputActionController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_KeyBind_New.WBP_KeyBind_New_C.Unhover_Controller
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_KeyBind_New_C::Unhover_Controller()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_KeyBind_New_C", "Unhover_Controller");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_KeyBind_New.WBP_KeyBind_New_C.Hover_Controller
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_KeyBind_New_C::Hover_Controller()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_KeyBind_New_C", "Hover_Controller");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_KeyBind_New.WBP_KeyBind_New_C.SetKBMKey
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Temp_string_Variable                                             (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// struct FInputAction                CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// bool                               CallFunc_GetKeyAsTexture_KeyFound                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  CallFunc_GetKeyAsTexture_Texture                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetKeyAsTexture_KeyString                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetKeyAsTexture_KeyFound_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  CallFunc_GetKeyAsTexture_Texture_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetKeyAsTexture_KeyString_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_3                         (None)

void UWBP_KeyBind_New_C::SetKBMKey(const class FString& Temp_string_Variable, const struct FInputAction& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, bool CallFunc_GetKeyAsTexture_KeyFound, class UTexture2D* CallFunc_GetKeyAsTexture_Texture, const class FString& CallFunc_GetKeyAsTexture_KeyString, class FText CallFunc_Conv_StringToText_ReturnValue_2, bool K2Node_SwitchString_CmpSuccess, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_GetKeyAsTexture_KeyFound_1, class UTexture2D* CallFunc_GetKeyAsTexture_Texture_1, const class FString& CallFunc_GetKeyAsTexture_KeyString_1, class FText CallFunc_Conv_StringToText_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_KeyBind_New_C", "SetKBMKey");

	Params::UWBP_KeyBind_New_C_SetKBMKey_Params Parms{};

	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_GetKeyAsTexture_KeyFound = CallFunc_GetKeyAsTexture_KeyFound;
	Parms.CallFunc_GetKeyAsTexture_Texture = CallFunc_GetKeyAsTexture_Texture;
	Parms.CallFunc_GetKeyAsTexture_KeyString = CallFunc_GetKeyAsTexture_KeyString;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_GetKeyAsTexture_KeyFound_1 = CallFunc_GetKeyAsTexture_KeyFound_1;
	Parms.CallFunc_GetKeyAsTexture_Texture_1 = CallFunc_GetKeyAsTexture_Texture_1;
	Parms.CallFunc_GetKeyAsTexture_KeyString_1 = CallFunc_GetKeyAsTexture_KeyString_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_3 = CallFunc_Conv_StringToText_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_KeyBind_New.WBP_KeyBind_New_C.SetControllerKey
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Temp_string_Variable                                             (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_2                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_3                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FInputAction                CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetKeyAsTexture_KeyFound                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  CallFunc_GetKeyAsTexture_Texture                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetKeyAsTexture_KeyString                               (ZeroConstructor, HasGetValueTypeHash)
// struct FInputAction                CallFunc_Map_Find_Value_1                                        (None)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetKeyAsTexture_KeyFound_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  CallFunc_GetKeyAsTexture_Texture_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetKeyAsTexture_KeyString_1                             (ZeroConstructor, HasGetValueTypeHash)
// struct FInputAction                CallFunc_Map_Find_Value_2                                        (None)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetKeyAsTexture_KeyFound_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  CallFunc_GetKeyAsTexture_Texture_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetKeyAsTexture_KeyString_2                             (ZeroConstructor, HasGetValueTypeHash)
// struct FInputAction                CallFunc_Map_Find_Value_3                                        (None)
// bool                               CallFunc_Map_Find_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Temp_string_Variable_4                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetKeyAsTexture_KeyFound_3                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  CallFunc_GetKeyAsTexture_Texture_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetKeyAsTexture_KeyString_3                             (ZeroConstructor, HasGetValueTypeHash)
// struct FInputAction                CallFunc_Map_Find_Value_4                                        (None)
// bool                               CallFunc_Map_Find_ReturnValue_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetKeyAsTexture_KeyFound_4                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  CallFunc_GetKeyAsTexture_Texture_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetKeyAsTexture_KeyString_4                             (ZeroConstructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         K2Node_DynamicCast_AsGame_Info_Instance                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetKeyAsTexture_KeyFound_5                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  CallFunc_GetKeyAsTexture_Texture_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetKeyAsTexture_KeyString_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)

void UWBP_KeyBind_New_C::SetControllerKey(const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, const class FString& Temp_string_Variable_2, bool Temp_bool_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, const class FString& Temp_string_Variable_3, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FInputAction& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_GetKeyAsTexture_KeyFound, class UTexture2D* CallFunc_GetKeyAsTexture_Texture, const class FString& CallFunc_GetKeyAsTexture_KeyString, const struct FInputAction& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_GetKeyAsTexture_KeyFound_1, class UTexture2D* CallFunc_GetKeyAsTexture_Texture_1, const class FString& CallFunc_GetKeyAsTexture_KeyString_1, const struct FInputAction& CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, bool CallFunc_GetKeyAsTexture_KeyFound_2, class UTexture2D* CallFunc_GetKeyAsTexture_Texture_2, const class FString& CallFunc_GetKeyAsTexture_KeyString_2, const struct FInputAction& CallFunc_Map_Find_Value_3, bool CallFunc_Map_Find_ReturnValue_3, const class FString& Temp_string_Variable_4, bool CallFunc_GetKeyAsTexture_KeyFound_3, class UTexture2D* CallFunc_GetKeyAsTexture_Texture_3, const class FString& CallFunc_GetKeyAsTexture_KeyString_3, const struct FInputAction& CallFunc_Map_Find_Value_4, bool CallFunc_Map_Find_ReturnValue_4, bool CallFunc_GetKeyAsTexture_KeyFound_4, class UTexture2D* CallFunc_GetKeyAsTexture_Texture_4, const class FString& CallFunc_GetKeyAsTexture_KeyString_4, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess, class UTexture2D* K2Node_Select_Default, bool K2Node_SwitchString_CmpSuccess, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_GetKeyAsTexture_KeyFound_5, class UTexture2D* CallFunc_GetKeyAsTexture_Texture_5, const class FString& CallFunc_GetKeyAsTexture_KeyString_5, class FText CallFunc_Conv_StringToText_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_KeyBind_New_C", "SetControllerKey");

	Params::UWBP_KeyBind_New_C_SetControllerKey_Params Parms{};

	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.Temp_string_Variable_2 = Temp_string_Variable_2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_string_Variable_3 = Temp_string_Variable_3;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetKeyAsTexture_KeyFound = CallFunc_GetKeyAsTexture_KeyFound;
	Parms.CallFunc_GetKeyAsTexture_Texture = CallFunc_GetKeyAsTexture_Texture;
	Parms.CallFunc_GetKeyAsTexture_KeyString = CallFunc_GetKeyAsTexture_KeyString;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_GetKeyAsTexture_KeyFound_1 = CallFunc_GetKeyAsTexture_KeyFound_1;
	Parms.CallFunc_GetKeyAsTexture_Texture_1 = CallFunc_GetKeyAsTexture_Texture_1;
	Parms.CallFunc_GetKeyAsTexture_KeyString_1 = CallFunc_GetKeyAsTexture_KeyString_1;
	Parms.CallFunc_Map_Find_Value_2 = CallFunc_Map_Find_Value_2;
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;
	Parms.CallFunc_GetKeyAsTexture_KeyFound_2 = CallFunc_GetKeyAsTexture_KeyFound_2;
	Parms.CallFunc_GetKeyAsTexture_Texture_2 = CallFunc_GetKeyAsTexture_Texture_2;
	Parms.CallFunc_GetKeyAsTexture_KeyString_2 = CallFunc_GetKeyAsTexture_KeyString_2;
	Parms.CallFunc_Map_Find_Value_3 = CallFunc_Map_Find_Value_3;
	Parms.CallFunc_Map_Find_ReturnValue_3 = CallFunc_Map_Find_ReturnValue_3;
	Parms.Temp_string_Variable_4 = Temp_string_Variable_4;
	Parms.CallFunc_GetKeyAsTexture_KeyFound_3 = CallFunc_GetKeyAsTexture_KeyFound_3;
	Parms.CallFunc_GetKeyAsTexture_Texture_3 = CallFunc_GetKeyAsTexture_Texture_3;
	Parms.CallFunc_GetKeyAsTexture_KeyString_3 = CallFunc_GetKeyAsTexture_KeyString_3;
	Parms.CallFunc_Map_Find_Value_4 = CallFunc_Map_Find_Value_4;
	Parms.CallFunc_Map_Find_ReturnValue_4 = CallFunc_Map_Find_ReturnValue_4;
	Parms.CallFunc_GetKeyAsTexture_KeyFound_4 = CallFunc_GetKeyAsTexture_KeyFound_4;
	Parms.CallFunc_GetKeyAsTexture_Texture_4 = CallFunc_GetKeyAsTexture_Texture_4;
	Parms.CallFunc_GetKeyAsTexture_KeyString_4 = CallFunc_GetKeyAsTexture_KeyString_4;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Info_Instance = K2Node_DynamicCast_AsGame_Info_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_GetKeyAsTexture_KeyFound_5 = CallFunc_GetKeyAsTexture_KeyFound_5;
	Parms.CallFunc_GetKeyAsTexture_Texture_5 = CallFunc_GetKeyAsTexture_Texture_5;
	Parms.CallFunc_GetKeyAsTexture_KeyString_5 = CallFunc_GetKeyAsTexture_KeyString_5;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_KeyBind_New.WBP_KeyBind_New_C.UI_Sound_Navigate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_KeyBind_New_C::UI_Sound_Navigate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_KeyBind_New_C", "UI_Sound_Navigate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_KeyBind_New.WBP_KeyBind_New_C.SetKeyBind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_KeyBind_New_C::SetKeyBind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_KeyBind_New_C", "SetKeyBind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_KeyBind_New.WBP_KeyBind_New_C.BndEvt__Button_KBM_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_KeyBind_New_C::BndEvt__Button_KBM_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_KeyBind_New_C", "BndEvt__Button_KBM_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_KeyBind_New.WBP_KeyBind_New_C.BndEvt__Button_Controller_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_KeyBind_New_C::BndEvt__Button_Controller_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_KeyBind_New_C", "BndEvt__Button_Controller_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_KeyBind_New.WBP_KeyBind_New_C.BndEvt__Button_Controller_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_KeyBind_New_C::BndEvt__Button_Controller_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_KeyBind_New_C", "BndEvt__Button_Controller_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_KeyBind_New.WBP_KeyBind_New_C.BndEvt__Button_Controller_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_KeyBind_New_C::BndEvt__Button_Controller_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_KeyBind_New_C", "BndEvt__Button_Controller_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_KeyBind_New.WBP_KeyBind_New_C.ExecuteUbergraph_WBP_KeyBind_New
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_KeyBind_New_C::ExecuteUbergraph_WBP_KeyBind_New(int32 EntryPoint, bool K2Node_SwitchString_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_KeyBind_New_C", "ExecuteUbergraph_WBP_KeyBind_New");

	Params::UWBP_KeyBind_New_C_ExecuteUbergraph_WBP_KeyBind_New_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


