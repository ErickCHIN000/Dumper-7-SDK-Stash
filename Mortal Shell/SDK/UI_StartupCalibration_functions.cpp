#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_StartupCalibration.UI_StartupCalibration_C
// (None)

class UClass* UUI_StartupCalibration_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_StartupCalibration_C");

	return Clss;
}


// UI_StartupCalibration_C UI_StartupCalibration.Default__UI_StartupCalibration_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_StartupCalibration_C* UUI_StartupCalibration_C::GetDefaultObj()
{
	static class UUI_StartupCalibration_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_StartupCalibration_C*>(UUI_StartupCalibration_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_StartupCalibration.UI_StartupCalibration_C.SetHoldToDismiss
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetHoldToDismiss_Hold                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StartupCalibration_C::SetHoldToDismiss(bool CallFunc_GetHoldToDismiss_Hold, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "SetHoldToDismiss");

	Params::UUI_StartupCalibration_C_SetHoldToDismiss_Params Parms{};

	Parms.CallFunc_GetHoldToDismiss_Hold = CallFunc_GetHoldToDismiss_Hold;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.Text_SetHoldToDismiss
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hold                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

void UUI_StartupCalibration_C::Text_SetHoldToDismiss(bool Hold, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "Text_SetHoldToDismiss");

	Params::UUI_StartupCalibration_C_Text_SetHoldToDismiss_Params Parms{};

	Parms.Hold = Hold;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.GetHoldToDismiss
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hold                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetHoldToDismiss_Hold                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StartupCalibration_C::GetHoldToDismiss(bool* Hold, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetHoldToDismiss_Hold)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "GetHoldToDismiss");

	Params::UUI_StartupCalibration_C_GetHoldToDismiss_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetHoldToDismiss_Hold = CallFunc_GetHoldToDismiss_Hold;

	UObject::ProcessEvent(Func, &Parms);

	if (Hold != nullptr)
		*Hold = Parms.Hold;

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.SetDamageNumbers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDamageNumbers_Show                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StartupCalibration_C::SetDamageNumbers(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, bool CallFunc_GetDamageNumbers_Show, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "SetDamageNumbers");

	Params::UUI_StartupCalibration_C_SetDamageNumbers_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetDamageNumbers_Show = CallFunc_GetDamageNumbers_Show;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.GetDamageNumbers
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetDamageNumbers_Show                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StartupCalibration_C::GetDamageNumbers(bool* Show, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetDamageNumbers_Show)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "GetDamageNumbers");

	Params::UUI_StartupCalibration_C_GetDamageNumbers_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDamageNumbers_Show = CallFunc_GetDamageNumbers_Show;

	UObject::ProcessEvent(Func, &Parms);

	if (Show != nullptr)
		*Show = Parms.Show;

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.Text_SetDamageNumbers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

void UUI_StartupCalibration_C::Text_SetDamageNumbers(bool Show, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "Text_SetDamageNumbers");

	Params::UUI_StartupCalibration_C_Text_SetDamageNumbers_Params Parms{};

	Parms.Show = Show;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.SpinBox_Highlight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Highlight                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class USpinBox*>            CallFunc_GetSpinBoxes_Array                                      (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class USpinBox*                    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSpinBoxStyle               K2Node_Select_Default                                            (None)

void UUI_StartupCalibration_C::SpinBox_Highlight(int32 Index, bool Highlight, TArray<class USpinBox*>& CallFunc_GetSpinBoxes_Array, class USpinBox* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, const struct FSpinBoxStyle& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "SpinBox_Highlight");

	Params::UUI_StartupCalibration_C_SpinBox_Highlight_Params Parms{};

	Parms.Index = Index;
	Parms.Highlight = Highlight;
	Parms.CallFunc_GetSpinBoxes_Array = CallFunc_GetSpinBoxes_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.TextAutoLockOnUpdate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StartupCalibration_C::TextAutoLockOnUpdate(class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "TextAutoLockOnUpdate");

	Params::UUI_StartupCalibration_C_TextAutoLockOnUpdate_Params Parms{};

	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.GetCurrentSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetHoldToDismiss_Hold                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetDamageNumbers_Show                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StartupCalibration_C::GetCurrentSettings(bool CallFunc_GetHoldToDismiss_Hold, bool CallFunc_GetDamageNumbers_Show)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "GetCurrentSettings");

	Params::UUI_StartupCalibration_C_GetCurrentSettings_Params Parms{};

	Parms.CallFunc_GetHoldToDismiss_Hold = CallFunc_GetHoldToDismiss_Hold;
	Parms.CallFunc_GetDamageNumbers_Show = CallFunc_GetDamageNumbers_Show;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.ResetSpinBoxes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USpinBox*>            CallFunc_GetSpinBoxes_Array                                      (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USpinBox*                    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StartupCalibration_C::ResetSpinBoxes(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class USpinBox*>& CallFunc_GetSpinBoxes_Array, int32 CallFunc_Array_Length_ReturnValue, class USpinBox* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "ResetSpinBoxes");

	Params::UUI_StartupCalibration_C_ResetSpinBoxes_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetSpinBoxes_Array = CallFunc_GetSpinBoxes_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.ButtonReset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UTextBlock*>          CallFunc_GetTexts_GameSettings_Array                             (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UTextBlock*>          CallFunc_GetTextsValue_GameSettings_Array                        (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UTextBlock*                  CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                  CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UButton*>             CallFunc_GetSettingsButtons_Array                                (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UButton*                     CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StartupCalibration_C::ButtonReset(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, TArray<class UTextBlock*>& CallFunc_GetTexts_GameSettings_Array, TArray<class UTextBlock*>& CallFunc_GetTextsValue_GameSettings_Array, class UTextBlock* CallFunc_Array_Get_Item, class UTextBlock* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UButton*>& CallFunc_GetSettingsButtons_Array, class UButton* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "ButtonReset");

	Params::UUI_StartupCalibration_C_ButtonReset_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_GetTexts_GameSettings_Array = CallFunc_GetTexts_GameSettings_Array;
	Parms.CallFunc_GetTextsValue_GameSettings_Array = CallFunc_GetTextsValue_GameSettings_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetSettingsButtons_Array = CallFunc_GetSettingsButtons_Array;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.SetEnemyHPOpacity_Right
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_EnemyHPOpacity     CallFunc_GetEnemyHPOpa_Opacity                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_2                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_3                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_4                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StartupCalibration_C::SetEnemyHPOpacity_Right(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, enum class Enum_EnemyHPOpacity CallFunc_GetEnemyHPOpa_Opacity, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_2, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_SwitchEnum_CmpSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_3, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_4, bool K2Node_DynamicCast_bSuccess_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "SetEnemyHPOpacity_Right");

	Params::UUI_StartupCalibration_C_SetEnemyHPOpacity_Right_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetEnemyHPOpa_Opacity = CallFunc_GetEnemyHPOpa_Opacity;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_2 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_3 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_4 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.SetEnemyHPOpacity_Left
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_EnemyHPOpacity     CallFunc_GetEnemyHPOpa_Opacity                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_2                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_3                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_4                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StartupCalibration_C::SetEnemyHPOpacity_Left(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, enum class Enum_EnemyHPOpacity CallFunc_GetEnemyHPOpa_Opacity, bool K2Node_SwitchEnum_CmpSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_2, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_3, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_4, bool K2Node_DynamicCast_bSuccess_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "SetEnemyHPOpacity_Left");

	Params::UUI_StartupCalibration_C_SetEnemyHPOpacity_Left_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetEnemyHPOpa_Opacity = CallFunc_GetEnemyHPOpa_Opacity;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_2 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_3 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_4 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.SetEnemyHPVisibility_Right
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_EnemyHPVisibility  CallFunc_GetEnemyHPVis_Visibility                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_2                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_3                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_4                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StartupCalibration_C::SetEnemyHPVisibility_Right(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, enum class Enum_EnemyHPVisibility CallFunc_GetEnemyHPVis_Visibility, bool K2Node_SwitchEnum_CmpSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_2, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_3, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_4, bool K2Node_DynamicCast_bSuccess_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "SetEnemyHPVisibility_Right");

	Params::UUI_StartupCalibration_C_SetEnemyHPVisibility_Right_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetEnemyHPVis_Visibility = CallFunc_GetEnemyHPVis_Visibility;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_2 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_3 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_4 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.SetEnemyHPVisibility_Left
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_EnemyHPVisibility  CallFunc_GetEnemyHPVis_Visibility                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_2                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_3                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_4                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StartupCalibration_C::SetEnemyHPVisibility_Left(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, enum class Enum_EnemyHPVisibility CallFunc_GetEnemyHPVis_Visibility, bool K2Node_SwitchEnum_CmpSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_2, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_3, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_4, bool K2Node_DynamicCast_bSuccess_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "SetEnemyHPVisibility_Left");

	Params::UUI_StartupCalibration_C_SetEnemyHPVisibility_Left_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetEnemyHPVis_Visibility = CallFunc_GetEnemyHPVis_Visibility;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_2 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_3 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_4 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.AdjustSubtitlesScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CustomValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StartupCalibration_C::AdjustSubtitlesScale(float Delta, bool CustomValue, float Value, bool Temp_bool_Variable, float CallFunc_Add_FloatFloat_ReturnValue, float K2Node_Select_Default, float CallFunc_FClamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "AdjustSubtitlesScale");

	Params::UUI_StartupCalibration_C_AdjustSubtitlesScale_Params Parms{};

	Parms.Delta = Delta;
	Parms.CustomValue = CustomValue;
	Parms.Value = Value;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.SetAutoLockOn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StartupCalibration_C::SetAutoLockOn(bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "SetAutoLockOn");

	Params::UUI_StartupCalibration_C_SetAutoLockOn_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.SetHPOpacityAvailability
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_EnemyHPVisibility  CallFunc_GetEnemyHPVis_Visibility                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StartupCalibration_C::SetHPOpacityAvailability(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, enum class Enum_EnemyHPVisibility CallFunc_GetEnemyHPVis_Visibility, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "SetHPOpacityAvailability");

	Params::UUI_StartupCalibration_C_SetHPOpacityAvailability_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetEnemyHPVis_Visibility = CallFunc_GetEnemyHPVis_Visibility;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.Text_EnemyHPOpacity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_EnemyHPOpacity     CallFunc_GetEnemyHPOpa_Opacity                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)

void UUI_StartupCalibration_C::Text_EnemyHPOpacity(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, enum class Enum_EnemyHPOpacity CallFunc_GetEnemyHPOpa_Opacity, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "Text_EnemyHPOpacity");

	Params::UUI_StartupCalibration_C_Text_EnemyHPOpacity_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetEnemyHPOpa_Opacity = CallFunc_GetEnemyHPOpa_Opacity;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.Text_EnemyHPVisibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_EnemyHPVisibility  CallFunc_GetEnemyHPVis_Visibility                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UUI_StartupCalibration_C::Text_EnemyHPVisibility(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, enum class Enum_EnemyHPVisibility CallFunc_GetEnemyHPVis_Visibility, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "Text_EnemyHPVisibility");

	Params::UUI_StartupCalibration_C_Text_EnemyHPVisibility_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetEnemyHPVis_Visibility = CallFunc_GetEnemyHPVis_Visibility;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.SetSubtitlesScaleDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Custom                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_BuildString_Int_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UUI_StartupCalibration_C::SetSubtitlesScaleDetails(bool Custom, float Value, bool Temp_bool_Variable, float K2Node_Select_Default, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, const class FString& CallFunc_BuildString_Int_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "SetSubtitlesScaleDetails");

	Params::UUI_StartupCalibration_C_SetSubtitlesScaleDetails_Params Parms{};

	Parms.Custom = Custom;
	Parms.Value = Value;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_BuildString_Int_ReturnValue = CallFunc_BuildString_Int_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.Text_SetAutoLockOn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

void UUI_StartupCalibration_C::Text_SetAutoLockOn(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "Text_SetAutoLockOn");

	Params::UUI_StartupCalibration_C_Text_SetAutoLockOn_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.GetIfLanguageSelectionIsDisabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPlatform               CallFunc_GetPlatform_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StartupCalibration_C::GetIfLanguageSelectionIsDisabled(enum class EPlatform CallFunc_GetPlatform_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "GetIfLanguageSelectionIsDisabled");

	Params::UUI_StartupCalibration_C_GetIfLanguageSelectionIsDisabled_Params Parms{};

	Parms.CallFunc_GetPlatform_ReturnValue = CallFunc_GetPlatform_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.SetGameInstanceRef
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StartupCalibration_C::SetGameInstanceRef(class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "SetGameInstanceRef");

	Params::UUI_StartupCalibration_C_SetGameInstanceRef_Params Parms{};

	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.Sound_SelectedLanguage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StartupCalibration_C::Sound_SelectedLanguage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "Sound_SelectedLanguage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.GetTextsValue_GameSettings
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UTextBlock*>          Array                                                            (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UTextBlock*>          K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

void UUI_StartupCalibration_C::GetTextsValue_GameSettings(TArray<class UTextBlock*>* Array, TArray<class UTextBlock*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "GetTextsValue_GameSettings");

	Params::UUI_StartupCalibration_C_GetTextsValue_GameSettings_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.GetTextColor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_Select_Default                                            (None)

struct FSlateColor UUI_StartupCalibration_C::GetTextColor(int32 Index, bool Temp_bool_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FSlateColor& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "GetTextColor");

	Params::UUI_StartupCalibration_C_GetTextColor_Params Parms{};

	Parms.Index = Index;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.GetTexts_GameSettings
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UTextBlock*>          Array                                                            (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTextBlock*                  K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UTextBlock*>          K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

void UUI_StartupCalibration_C::GetTexts_GameSettings(TArray<class UTextBlock*>* Array, bool Temp_bool_Variable, class UTextBlock* K2Node_Select_Default, TArray<class UTextBlock*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "GetTexts_GameSettings");

	Params::UUI_StartupCalibration_C_GetTexts_GameSettings_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.GetSpinBoxes
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class USpinBox*>            Array                                                            (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class USpinBox*>            K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

void UUI_StartupCalibration_C::GetSpinBoxes(TArray<class USpinBox*>* Array, TArray<class USpinBox*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "GetSpinBoxes");

	Params::UUI_StartupCalibration_C_GetSpinBoxes_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.GetIndex_GameSettings
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              SelectedIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UButton*>             CallFunc_GetSettingsButtons_Array                                (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UUI_StartupCalibration_C::GetIndex_GameSettings(int32 SelectedIndex, int32 Delta, TArray<class UButton*>& CallFunc_GetSettingsButtons_Array, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "GetIndex_GameSettings");

	Params::UUI_StartupCalibration_C_GetIndex_GameSettings_Params Parms{};

	Parms.SelectedIndex = SelectedIndex;
	Parms.Delta = Delta;
	Parms.CallFunc_GetSettingsButtons_Array = CallFunc_GetSettingsButtons_Array;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.Nav_UpDown_GameSettings_Set
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseWidget                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SkipIndexCheck                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Hovering                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CustomIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SkipSound                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UButton*                     Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_UseWidget                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Local_ArrayIndex                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Index_Temp                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_SkipIndexCheck                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_SkipSound                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_CustomIndex                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Local_Delta                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_Hovering                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UButton*                     Local_Button                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Index_Selected                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetIndex_GameSettings_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UButton*>             CallFunc_GetSettingsButtons_Array                                (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UButton*>             CallFunc_GetSettingsButtons_Array_1                              (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UTextBlock*>          CallFunc_GetTextsValue_GameSettings_Array                        (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_GetTextColor_ReturnValue                                (None)
// class UTextBlock*                  CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_GetTextColor_ReturnValue_1                              (None)
// TArray<class UTextBlock*>          CallFunc_GetTexts_GameSettings_Array                             (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                  CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UButton*>             CallFunc_GetSettingsButtons_Array_2                              (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UButton*                     CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UButton*>             CallFunc_GetSettingsButtons_Array_3                              (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UButton*                     CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StartupCalibration_C::Nav_UpDown_GameSettings_Set(bool UseWidget, bool SkipIndexCheck, bool Hovering, bool CustomIndex, bool SkipSound, int32 Index, int32 Delta, class UButton* Button, bool Local_UseWidget, int32 Local_ArrayIndex, int32 Local_Index_Temp, bool Local_SkipIndexCheck, bool Local_SkipSound, bool Local_CustomIndex, int32 Local_Delta, bool Local_Hovering, class UButton* Local_Button, int32 Local_Index_Selected, int32 CallFunc_GetIndex_GameSettings_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<class UButton*>& CallFunc_GetSettingsButtons_Array, int32 Temp_int_Array_Index_Variable, TArray<class UButton*>& CallFunc_GetSettingsButtons_Array_1, int32 CallFunc_Array_Find_ReturnValue, TArray<class UTextBlock*>& CallFunc_GetTextsValue_GameSettings_Array, const struct FSlateColor& CallFunc_GetTextColor_ReturnValue, class UTextBlock* CallFunc_Array_Get_Item, const struct FSlateColor& CallFunc_GetTextColor_ReturnValue_1, TArray<class UTextBlock*>& CallFunc_GetTexts_GameSettings_Array, int32 Temp_int_Loop_Counter_Variable, class UTextBlock* CallFunc_Array_Get_Item_1, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UButton*>& CallFunc_GetSettingsButtons_Array_2, class UButton* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, TArray<class UButton*>& CallFunc_GetSettingsButtons_Array_3, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, bool CallFunc_EqualEqual_IntInt_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_1, class UButton* CallFunc_Array_Get_Item_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "Nav_UpDown_GameSettings_Set");

	Params::UUI_StartupCalibration_C_Nav_UpDown_GameSettings_Set_Params Parms{};

	Parms.UseWidget = UseWidget;
	Parms.SkipIndexCheck = SkipIndexCheck;
	Parms.Hovering = Hovering;
	Parms.CustomIndex = CustomIndex;
	Parms.SkipSound = SkipSound;
	Parms.Index = Index;
	Parms.Delta = Delta;
	Parms.Button = Button;
	Parms.Local_UseWidget = Local_UseWidget;
	Parms.Local_ArrayIndex = Local_ArrayIndex;
	Parms.Local_Index_Temp = Local_Index_Temp;
	Parms.Local_SkipIndexCheck = Local_SkipIndexCheck;
	Parms.Local_SkipSound = Local_SkipSound;
	Parms.Local_CustomIndex = Local_CustomIndex;
	Parms.Local_Delta = Local_Delta;
	Parms.Local_Hovering = Local_Hovering;
	Parms.Local_Button = Local_Button;
	Parms.Local_Index_Selected = Local_Index_Selected;
	Parms.CallFunc_GetIndex_GameSettings_ReturnValue = CallFunc_GetIndex_GameSettings_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetSettingsButtons_Array = CallFunc_GetSettingsButtons_Array;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetSettingsButtons_Array_1 = CallFunc_GetSettingsButtons_Array_1;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_GetTextsValue_GameSettings_Array = CallFunc_GetTextsValue_GameSettings_Array;
	Parms.CallFunc_GetTextColor_ReturnValue = CallFunc_GetTextColor_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetTextColor_ReturnValue_1 = CallFunc_GetTextColor_ReturnValue_1;
	Parms.CallFunc_GetTexts_GameSettings_Array = CallFunc_GetTexts_GameSettings_Array;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetSettingsButtons_Array_2 = CallFunc_GetSettingsButtons_Array_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetSettingsButtons_Array_3 = CallFunc_GetSettingsButtons_Array_3;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_4 = CallFunc_EqualEqual_IntInt_ReturnValue_4;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_5 = CallFunc_EqualEqual_IntInt_ReturnValue_5;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.UpdateLanguageOnClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StartupCalibration_C::UpdateLanguageOnClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "UpdateLanguageOnClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.GetSettingsButtons
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UButton*>             Array                                                            (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UButton*>             K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

void UUI_StartupCalibration_C::GetSettingsButtons(TArray<class UButton*>* Array, TArray<class UButton*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "GetSettingsButtons");

	Params::UUI_StartupCalibration_C_GetSettingsButtons_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.GetCurrentKeyboardMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKeyboardModeNotifierComponent_C*CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StartupCalibration_C::GetCurrentKeyboardMode(class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "GetCurrentKeyboardMode");

	Params::UUI_StartupCalibration_C_GetCurrentKeyboardMode_Params Parms{};

	Parms.CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier = CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.ResetMousePosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               KeyboardMode                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StartupCalibration_C::ResetMousePosition(bool KeyboardMode, class APlayerController* CallFunc_GetPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "ResetMousePosition");

	Params::UUI_StartupCalibration_C_ResetMousePosition_Params Parms{};

	Parms.KeyboardMode = KeyboardMode;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.HideLanguageSelectionScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StartupCalibration_C::HideLanguageSelectionScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "HideLanguageSelectionScreen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.DebugConfirm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

void UUI_StartupCalibration_C::DebugConfirm(const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "DebugConfirm");

	Params::UUI_StartupCalibration_C_DebugConfirm_Params Parms{};

	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.DebugState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_SelectString_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UUI_StartupCalibration_C::DebugState(int32 Temp_int_Variable, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& K2Node_Select_Default, const class FString& CallFunc_SelectString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "DebugState");

	Params::UUI_StartupCalibration_C_DebugState_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.Sound_Hover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StartupCalibration_C::Sound_Hover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "Sound_Hover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.PlayFadeOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StartupCalibration_C::PlayFadeOut(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "PlayFadeOut");

	Params::UUI_StartupCalibration_C_PlayFadeOut_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.PlayFadeIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StartupCalibration_C::PlayFadeIn(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "PlayFadeIn");

	Params::UUI_StartupCalibration_C_PlayFadeIn_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.Sound_Confirm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StartupCalibration_C::Sound_Confirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "Sound_Confirm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.GetIndex_Language
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UUI_StartupCalibration_C::GetIndex_Language(int32 Delta, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "GetIndex_Language");

	Params::UUI_StartupCalibration_C_GetIndex_Language_Params Parms{};

	Parms.Delta = Delta;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.Nav_UpDown_Language_Set
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SkipIndexCheck                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Hovering                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CustomIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SkipSound                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_ArrayIndex                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Index_Temp                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_SkipIndexCheck                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_SkipSound                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_CustomIndex                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Local_Delta                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_Hovering                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     Local_Widget                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_SelectedIndex                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetIndex_Language_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UKeyboardModeNotifierComponent_C*CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_LanguageOption_C*        K2Node_DynamicCast_AsUI_Language_Option                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_LanguageOption_C*        K2Node_DynamicCast_AsUI_Language_Option_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue_1                            (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StartupCalibration_C::Nav_UpDown_Language_Set(bool SkipIndexCheck, bool Hovering, bool CustomIndex, bool SkipSound, int32 Index, int32 Delta, int32 Local_ArrayIndex, int32 Local_Index_Temp, bool Local_SkipIndexCheck, bool Local_SkipSound, bool Local_CustomIndex, int32 Local_Delta, bool Local_Hovering, class UWidget* Local_Widget, int32 Local_SelectedIndex, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, int32 CallFunc_GetIndex_Language_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier, int32 CallFunc_Subtract_IntInt_ReturnValue, class UUI_LanguageOption_C* K2Node_DynamicCast_AsUI_Language_Option, bool K2Node_DynamicCast_bSuccess, class UUI_LanguageOption_C* K2Node_DynamicCast_AsUI_Language_Option_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, bool CallFunc_EqualEqual_IntInt_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_1, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_1, class UWidget* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "Nav_UpDown_Language_Set");

	Params::UUI_StartupCalibration_C_Nav_UpDown_Language_Set_Params Parms{};

	Parms.SkipIndexCheck = SkipIndexCheck;
	Parms.Hovering = Hovering;
	Parms.CustomIndex = CustomIndex;
	Parms.SkipSound = SkipSound;
	Parms.Index = Index;
	Parms.Delta = Delta;
	Parms.Local_ArrayIndex = Local_ArrayIndex;
	Parms.Local_Index_Temp = Local_Index_Temp;
	Parms.Local_SkipIndexCheck = Local_SkipIndexCheck;
	Parms.Local_SkipSound = Local_SkipSound;
	Parms.Local_CustomIndex = Local_CustomIndex;
	Parms.Local_Delta = Local_Delta;
	Parms.Local_Hovering = Local_Hovering;
	Parms.Local_Widget = Local_Widget;
	Parms.Local_SelectedIndex = Local_SelectedIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_GetIndex_Language_ReturnValue = CallFunc_GetIndex_Language_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier = CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Language_Option = K2Node_DynamicCast_AsUI_Language_Option;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsUI_Language_Option_1 = K2Node_DynamicCast_AsUI_Language_Option_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_4 = CallFunc_EqualEqual_IntInt_ReturnValue_4;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_5 = CallFunc_EqualEqual_IntInt_ReturnValue_5;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_GetAllChildren_ReturnValue_1 = CallFunc_GetAllChildren_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.NavUp_Listen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Callback                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_StartupCalibration_C::NavUp_Listen(FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "NavUp_Listen");

	Params::UUI_StartupCalibration_C_NavUp_Listen_Params Parms{};

	Parms.Callback = Callback;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.NavDown_Listen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Callback                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_StartupCalibration_C::NavDown_Listen(FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "NavDown_Listen");

	Params::UUI_StartupCalibration_C_NavDown_Listen_Params Parms{};

	Parms.Callback = Callback;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.CreateLanguageEntries
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                Local_Text                                                       (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<enum class Enum_Language>   Local_Keys                                                       (Edit, BlueprintVisible, HasGetValueTypeHash)
// TMap<enum class Enum_Language, class FText>Text_Languages                                                   (Edit, BlueprintVisible)
// class UUI_LanguageOption_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<enum class Enum_Language, class FText>K2Node_MakeVariable_MakeVariableOutput                           (None)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Array_Get_Item                                          (None)
// enum class Enum_Language           CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FText>                CallFunc_Map_Values_Values                                       (ReferenceParm, HasGetValueTypeHash)
// TArray<enum class Enum_Language>   CallFunc_Map_Keys_Keys                                           (ReferenceParm, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StartupCalibration_C::CreateLanguageEntries(const TArray<class FText>& Local_Text, const TArray<enum class Enum_Language>& Local_Keys, TMap<enum class Enum_Language, class FText> Text_Languages, class UUI_LanguageOption_C* CallFunc_Create_ReturnValue, TMap<enum class Enum_Language, class FText> K2Node_MakeVariable_MakeVariableOutput, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_Array_Get_Item, enum class Enum_Language CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class FText>& CallFunc_Map_Values_Values, TArray<enum class Enum_Language>& CallFunc_Map_Keys_Keys, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "CreateLanguageEntries");

	Params::UUI_StartupCalibration_C_CreateLanguageEntries_Params Parms{};

	Parms.Local_Text = Local_Text;
	Parms.Local_Keys = Local_Keys;
	Parms.Text_Languages = Text_Languages;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_MakeVariable_MakeVariableOutput = K2Node_MakeVariable_MakeVariableOutput;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.GetMainMenuPC
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AMainMenuPC_C*               AsMain_Menu_PC                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMainMenuPC_C*               K2Node_DynamicCast_AsMain_Menu_PC                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StartupCalibration_C::GetMainMenuPC(class AMainMenuPC_C** AsMain_Menu_PC, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AMainMenuPC_C* K2Node_DynamicCast_AsMain_Menu_PC, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "GetMainMenuPC");

	Params::UUI_StartupCalibration_C_GetMainMenuPC_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsMain_Menu_PC = K2Node_DynamicCast_AsMain_Menu_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AsMain_Menu_PC != nullptr)
		*AsMain_Menu_PC = Parms.AsMain_Menu_PC;

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.Sound_Navigate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StartupCalibration_C::Sound_Navigate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "Sound_Navigate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.Brightness_SpinBox
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyUserFocus_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AMainMenuPC_C*               CallFunc_GetMainMenuPC_AsMain_Menu_PC                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StartupCalibration_C::Brightness_SpinBox(float Value, bool CallFunc_HasAnyUserFocus_ReturnValue, class AMainMenuPC_C* CallFunc_GetMainMenuPC_AsMain_Menu_PC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "Brightness_SpinBox");

	Params::UUI_StartupCalibration_C_Brightness_SpinBox_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_HasAnyUserFocus_ReturnValue = CallFunc_HasAnyUserFocus_ReturnValue;
	Parms.CallFunc_GetMainMenuPC_AsMain_Menu_PC = CallFunc_GetMainMenuPC_AsMain_Menu_PC;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.Brightness_Right
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainMenuPC_C*               CallFunc_GetMainMenuPC_AsMain_Menu_PC                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetBrightnessRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StartupCalibration_C::Brightness_Right(class AMainMenuPC_C* CallFunc_GetMainMenuPC_AsMain_Menu_PC, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GetBrightnessRange_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "Brightness_Right");

	Params::UUI_StartupCalibration_C_Brightness_Right_Params Parms{};

	Parms.CallFunc_GetMainMenuPC_AsMain_Menu_PC = CallFunc_GetMainMenuPC_AsMain_Menu_PC;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GetBrightnessRange_ReturnValue = CallFunc_GetBrightnessRange_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.Brightness_SetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)

void UUI_StartupCalibration_C::Brightness_SetText(float Value, class FText CallFunc_Conv_FloatToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "Brightness_SetText");

	Params::UUI_StartupCalibration_C_Brightness_SetText_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.Brightness_Get
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StartupCalibration_C::Brightness_Get()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "Brightness_Get");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.Brightness_Left
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainMenuPC_C*               CallFunc_GetMainMenuPC_AsMain_Menu_PC                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetBrightnessRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StartupCalibration_C::Brightness_Left(class AMainMenuPC_C* CallFunc_GetMainMenuPC_AsMain_Menu_PC, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_GetBrightnessRange_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "Brightness_Left");

	Params::UUI_StartupCalibration_C_Brightness_Left_Params Parms{};

	Parms.CallFunc_GetMainMenuPC_AsMain_Menu_PC = CallFunc_GetMainMenuPC_AsMain_Menu_PC;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_GetBrightnessRange_ReturnValue = CallFunc_GetBrightnessRange_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.Brightness_Set
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Brightness                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StartupCalibration_C::Brightness_Set(float Brightness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "Brightness_Set");

	Params::UUI_StartupCalibration_C_Brightness_Set_Params Parms{};

	Parms.Brightness = Brightness;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.NavConfirm_Listen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Callback                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_StartupCalibration_C::NavConfirm_Listen(FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "NavConfirm_Listen");

	Params::UUI_StartupCalibration_C_NavConfirm_Listen_Params Parms{};

	Parms.Callback = Callback;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.NavRight_Listen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Callback                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_StartupCalibration_C::NavRight_Listen(FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "NavRight_Listen");

	Params::UUI_StartupCalibration_C_NavRight_Listen_Params Parms{};

	Parms.Callback = Callback;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.NavLeft_Listen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Callback                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_StartupCalibration_C::NavLeft_Listen(FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "NavLeft_Listen");

	Params::UUI_StartupCalibration_C_NavLeft_Listen_Params Parms{};

	Parms.Callback = Callback;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.OnOpen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StartupCalibration_C::OnOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "OnOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.NavLeft_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StartupCalibration_C::NavLeft_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "NavLeft_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.NavLeft_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StartupCalibration_C::NavLeft_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "NavLeft_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.NavRight_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StartupCalibration_C::NavRight_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "NavRight_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.NavRight_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StartupCalibration_C::NavRight_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "NavRight_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.NavConfirm_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StartupCalibration_C::NavConfirm_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "NavConfirm_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.NavConfirm_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StartupCalibration_C::NavConfirm_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "NavConfirm_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.OnEnabled_Language
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StartupCalibration_C::OnEnabled_Language()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "OnEnabled_Language");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.OnLanguageConfirm_Mid
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StartupCalibration_C::OnLanguageConfirm_Mid()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "OnLanguageConfirm_Mid");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.BndEvt__HandleLeft_Brightness_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StartupCalibration_C::BndEvt__HandleLeft_Brightness_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "BndEvt__HandleLeft_Brightness_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.BndEvt__HandleRight_Brightness_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StartupCalibration_C::BndEvt__HandleRight_Brightness_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "BndEvt__HandleRight_Brightness_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.BndEvt__SpinBox_Brightness_K2Node_ComponentBoundEvent_2_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StartupCalibration_C::BndEvt__SpinBox_Brightness_K2Node_ComponentBoundEvent_2_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "BndEvt__SpinBox_Brightness_K2Node_ComponentBoundEvent_2_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UUI_StartupCalibration_C_BndEvt__SpinBox_Brightness_K2Node_ComponentBoundEvent_2_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.BndEvt__UI_ControllerButton_Select_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_ControllerButton_C*      ControllerButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StartupCalibration_C::BndEvt__UI_ControllerButton_Select_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature(class UUI_ControllerButton_C* ControllerButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "BndEvt__UI_ControllerButton_Select_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature");

	Params::UUI_StartupCalibration_C_BndEvt__UI_ControllerButton_Select_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature_Params Parms{};

	Parms.ControllerButton = ControllerButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_StartupCalibration_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StartupCalibration_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "PreConstruct");

	Params::UUI_StartupCalibration_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.NavUp_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StartupCalibration_C::NavUp_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "NavUp_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.NavUp_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StartupCalibration_C::NavUp_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "NavUp_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.NavDown_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StartupCalibration_C::NavDown_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "NavDown_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.NavDown_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StartupCalibration_C::NavDown_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "NavDown_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_StartupCalibration_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.OnLanguageButtonHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StartupCalibration_C::OnLanguageButtonHovered(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "OnLanguageButtonHovered");

	Params::UUI_StartupCalibration_C_OnLanguageButtonHovered_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.OnLanguageConfirm_End
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StartupCalibration_C::OnLanguageConfirm_End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "OnLanguageConfirm_End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.OnLanguageConfirm_Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StartupCalibration_C::OnLanguageConfirm_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "OnLanguageConfirm_Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.OnGameplayConfirmed_Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StartupCalibration_C::OnGameplayConfirmed_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "OnGameplayConfirmed_Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.OnGameplayConfirmed_End
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StartupCalibration_C::OnGameplayConfirmed_End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "OnGameplayConfirmed_End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.OnLanguageButtonClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StartupCalibration_C::OnLanguageButtonClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "OnLanguageButtonClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.OnKeyboardModeChanged_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               KeyboardMode                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StartupCalibration_C::OnKeyboardModeChanged_Set(bool KeyboardMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "OnKeyboardModeChanged_Set");

	Params::UUI_StartupCalibration_C_OnKeyboardModeChanged_Set_Params Parms{};

	Parms.KeyboardMode = KeyboardMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.OnKeyboardModeChanged_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StartupCalibration_C::OnKeyboardModeChanged_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "OnKeyboardModeChanged_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.OnBrightnessConfirm_Mid
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StartupCalibration_C::OnBrightnessConfirm_Mid()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "OnBrightnessConfirm_Mid");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.OnBrightnessConfirm_End
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StartupCalibration_C::OnBrightnessConfirm_End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "OnBrightnessConfirm_End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.OnBrightnessConfirm_Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StartupCalibration_C::OnBrightnessConfirm_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "OnBrightnessConfirm_Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.BndEvt__Button_Right_AutoLockOn_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StartupCalibration_C::BndEvt__Button_Right_AutoLockOn_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "BndEvt__Button_Right_AutoLockOn_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.BndEvt__Button_Left_AutoLockOn_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StartupCalibration_C::BndEvt__Button_Left_AutoLockOn_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "BndEvt__Button_Left_AutoLockOn_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.BndEvt__Button_AutoLockOn_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StartupCalibration_C::BndEvt__Button_AutoLockOn_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "BndEvt__Button_AutoLockOn_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.BndEvt__Button_AutoLockOn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StartupCalibration_C::BndEvt__Button_AutoLockOn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "BndEvt__Button_AutoLockOn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.BndEvt__Button_SubtitlesScale_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StartupCalibration_C::BndEvt__Button_SubtitlesScale_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "BndEvt__Button_SubtitlesScale_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.BndEvt__Button_SubtitlesScale_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StartupCalibration_C::BndEvt__Button_SubtitlesScale_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "BndEvt__Button_SubtitlesScale_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.BndEvt__Button_Left_SubtitlesScale_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StartupCalibration_C::BndEvt__Button_Left_SubtitlesScale_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "BndEvt__Button_Left_SubtitlesScale_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.BndEvt__Button_Right_SubtitlesScale_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StartupCalibration_C::BndEvt__Button_Right_SubtitlesScale_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "BndEvt__Button_Right_SubtitlesScale_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.BndEvt__Button_EnemyHP_Visibility_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StartupCalibration_C::BndEvt__Button_EnemyHP_Visibility_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "BndEvt__Button_EnemyHP_Visibility_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.BndEvt__Button_EnemyHP_Visibility_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StartupCalibration_C::BndEvt__Button_EnemyHP_Visibility_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "BndEvt__Button_EnemyHP_Visibility_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.BndEvt__Button_Left_EnemyHP_Visibility_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StartupCalibration_C::BndEvt__Button_Left_EnemyHP_Visibility_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "BndEvt__Button_Left_EnemyHP_Visibility_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.BndEvt__Button_Right_EnemyHP_Visibility_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StartupCalibration_C::BndEvt__Button_Right_EnemyHP_Visibility_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "BndEvt__Button_Right_EnemyHP_Visibility_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.BndEvt__Button_EnemyHP_Opacity_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StartupCalibration_C::BndEvt__Button_EnemyHP_Opacity_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "BndEvt__Button_EnemyHP_Opacity_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.BndEvt__Button_EnemyHP_Opacity_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StartupCalibration_C::BndEvt__Button_EnemyHP_Opacity_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "BndEvt__Button_EnemyHP_Opacity_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.BndEvt__Button_Left_EnemyHP_Opacity_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StartupCalibration_C::BndEvt__Button_Left_EnemyHP_Opacity_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "BndEvt__Button_Left_EnemyHP_Opacity_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.BndEvt__Button_Right_EnemyHP_Opacity_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StartupCalibration_C::BndEvt__Button_Right_EnemyHP_Opacity_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "BndEvt__Button_Right_EnemyHP_Opacity_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.BndEvt__Button_DamageNumbers_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StartupCalibration_C::BndEvt__Button_DamageNumbers_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "BndEvt__Button_DamageNumbers_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.BndEvt__Button_DamageNumbers_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StartupCalibration_C::BndEvt__Button_DamageNumbers_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "BndEvt__Button_DamageNumbers_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.BndEvt__Button_Left_DamageNumbers_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StartupCalibration_C::BndEvt__Button_Left_DamageNumbers_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "BndEvt__Button_Left_DamageNumbers_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.BndEvt__Button_Right_DamageNumbers_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StartupCalibration_C::BndEvt__Button_Right_DamageNumbers_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "BndEvt__Button_Right_DamageNumbers_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.BndEvt__Button_HoldToDismiss_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StartupCalibration_C::BndEvt__Button_HoldToDismiss_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "BndEvt__Button_HoldToDismiss_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.BndEvt__Button_HoldToDismiss_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StartupCalibration_C::BndEvt__Button_HoldToDismiss_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "BndEvt__Button_HoldToDismiss_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.BndEvt__Button_Left_HoldToDismiss_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StartupCalibration_C::BndEvt__Button_Left_HoldToDismiss_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "BndEvt__Button_Left_HoldToDismiss_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.BndEvt__Button_Right_HoldToDismiss_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StartupCalibration_C::BndEvt__Button_Right_HoldToDismiss_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "BndEvt__Button_Right_HoldToDismiss_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StartupCalibration.UI_StartupCalibration_C.ExecuteUbergraph_UI_StartupCalibration
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IMainMenuInterface_C>K2Node_DynamicCast_AsMain_Menu_Interface                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// float                              K2Node_ComponentBoundEvent_InValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ControllerButton_C*      K2Node_ComponentBoundEvent_ControllerButton                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_Index                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess_5                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_KeyboardMode                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UKeyboardModeNotifierComponent_C*CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_6                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess_7                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UKeyboardModeNotifierComponent_C*CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier_1          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StartupCalibration_C::ExecuteUbergraph_UI_StartupCalibration(int32 EntryPoint, bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_SwitchInteger_CmpSuccess_1, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IMainMenuInterface_C> K2Node_DynamicCast_AsMain_Menu_Interface, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchInteger_CmpSuccess_2, bool K2Node_SwitchInteger_CmpSuccess_3, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Not_PreBool_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float K2Node_ComponentBoundEvent_InValue, class UUI_ControllerButton_C* K2Node_ComponentBoundEvent_ControllerButton, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool K2Node_Event_IsDesignTime, bool Temp_bool_Has_Been_Initd_Variable_1, int32 K2Node_CustomEvent_Index, bool K2Node_SwitchInteger_CmpSuccess_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool Temp_bool_IsClosed_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool Temp_bool_IsClosed_Variable_1, bool K2Node_SwitchInteger_CmpSuccess_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, bool K2Node_CustomEvent_KeyboardMode, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier, bool K2Node_SwitchInteger_CmpSuccess_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, bool Temp_bool_IsClosed_Variable_2, bool K2Node_SwitchInteger_CmpSuccess_7, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, bool Temp_bool_Has_Been_Initd_Variable_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StartupCalibration_C", "ExecuteUbergraph_UI_StartupCalibration");

	Params::UUI_StartupCalibration_C_ExecuteUbergraph_UI_StartupCalibration_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsMain_Menu_Interface = K2Node_DynamicCast_AsMain_Menu_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchInteger_CmpSuccess_2 = K2Node_SwitchInteger_CmpSuccess_2;
	Parms.K2Node_SwitchInteger_CmpSuccess_3 = K2Node_SwitchInteger_CmpSuccess_3;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_ComponentBoundEvent_InValue = K2Node_ComponentBoundEvent_InValue;
	Parms.K2Node_ComponentBoundEvent_ControllerButton = K2Node_ComponentBoundEvent_ControllerButton;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.K2Node_CustomEvent_Index = K2Node_CustomEvent_Index;
	Parms.K2Node_SwitchInteger_CmpSuccess_4 = K2Node_SwitchInteger_CmpSuccess_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.K2Node_SwitchInteger_CmpSuccess_5 = K2Node_SwitchInteger_CmpSuccess_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CustomEvent_KeyboardMode = K2Node_CustomEvent_KeyboardMode;
	Parms.CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier = CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier;
	Parms.K2Node_SwitchInteger_CmpSuccess_6 = K2Node_SwitchInteger_CmpSuccess_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.Temp_bool_IsClosed_Variable_2 = Temp_bool_IsClosed_Variable_2;
	Parms.K2Node_SwitchInteger_CmpSuccess_7 = K2Node_SwitchInteger_CmpSuccess_7;
	Parms.CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier_1 = CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.Temp_bool_Has_Been_Initd_Variable_2 = Temp_bool_Has_Been_Initd_Variable_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


