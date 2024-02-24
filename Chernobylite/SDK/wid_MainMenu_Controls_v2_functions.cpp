#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_MainMenu_Controls_v2.wid_MainMenu_Controls_v2_C
// (None)

class UClass* UWid_MainMenu_Controls_v2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_MainMenu_Controls_v2_C");

	return Clss;
}


// wid_MainMenu_Controls_v2_C wid_MainMenu_Controls_v2.Default__wid_MainMenu_Controls_v2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_MainMenu_Controls_v2_C* UWid_MainMenu_Controls_v2_C::GetDefaultObj()
{
	static class UWid_MainMenu_Controls_v2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_MainMenu_Controls_v2_C*>(UWid_MainMenu_Controls_v2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_MainMenu_Controls_v2.wid_MainMenu_Controls_v2_C.SaveSettings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWid_MainMenu_ButtonIndicator_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// class UWid_MainMenu_ButtonIndicator_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWid_ButtonIndicator_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets_1                     (ReferenceParm, ContainsInstancedReference)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_ButtonIndicator_C*      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_Controls_v2_C::SaveSettings(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, TArray<class UWid_MainMenu_ButtonIndicator_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UWid_MainMenu_ButtonIndicator_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class UWid_ButtonIndicator_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_1, class UInputSettings* CallFunc_GetInputSettings_ReturnValue, class UWid_ButtonIndicator_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_v2_C", "SaveSettings");

	Params::UWid_MainMenu_Controls_v2_C_SaveSettings_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets_1 = CallFunc_GetAllWidgetsOfClass_FoundWidgets_1;
	Parms.CallFunc_GetInputSettings_ReturnValue = CallFunc_GetInputSettings_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Controls_v2.wid_MainMenu_Controls_v2_C.CloseControlSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Controls_v2_C::CloseControlSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_v2_C", "CloseControlSettings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Controls_v2.wid_MainMenu_Controls_v2_C.BackPressed
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue_1                                   (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindUnassignedBindings_Empty_Found                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FText>                CallFunc_FindUnassignedBindings_EmptyBindsNames                  (ReferenceParm)
// class FText                        CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_Controls_v2_C::BackPressed(const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable, bool CallFunc_NotEqual_IntInt_ReturnValue, const class FString& K2Node_Select_Default, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Replace_ReturnValue, const class FString& CallFunc_Replace_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_TextToUpper_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_FindUnassignedBindings_Empty_Found, TArray<class FText>& CallFunc_FindUnassignedBindings_EmptyBindsNames, class FText CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_v2_C", "BackPressed");

	Params::UWid_MainMenu_Controls_v2_C_BackPressed_Params Parms{};

	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Replace_ReturnValue = CallFunc_Replace_ReturnValue;
	Parms.CallFunc_Replace_ReturnValue_1 = CallFunc_Replace_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_FindUnassignedBindings_Empty_Found = CallFunc_FindUnassignedBindings_Empty_Found;
	Parms.CallFunc_FindUnassignedBindings_EmptyBindsNames = CallFunc_FindUnassignedBindings_EmptyBindsNames;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Controls_v2.wid_MainMenu_Controls_v2_C.SetupEvents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)

void UWid_MainMenu_Controls_v2_C::SetupEvents(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_v2_C", "SetupEvents");

	Params::UWid_MainMenu_Controls_v2_C_SetupEvents_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Controls_v2.wid_MainMenu_Controls_v2_C.ResetKeybinds
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_Controls_v2_C::ResetKeybinds(class UInputSettings* CallFunc_GetInputSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_v2_C", "ResetKeybinds");

	Params::UWid_MainMenu_Controls_v2_C_ResetKeybinds_Params Parms{};

	Parms.CallFunc_GetInputSettings_ReturnValue = CallFunc_GetInputSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Controls_v2.wid_MainMenu_Controls_v2_C.PopupHide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Controls_v2_C::PopupHide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_v2_C", "PopupHide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Controls_v2.wid_MainMenu_Controls_v2_C.FindUnassignedBindings
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Empty_Found                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FText>                EmptyBindsNames                                                  (Parm, OutParm)
// TArray<class FText>                EmptyBindsList                                                   (Edit, BlueprintVisible)
// bool                               HasEmptyBind                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_2                           (None)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_MainMenu_Input_Entry_C* K2Node_DynamicCast_AsWid_Main_Menu_Input_Entry                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Key_GetDisplayName_ReturnValue                          (None)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Key_GetDisplayName_ReturnValue_1                        (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_3                           (None)
// int32                              CallFunc_GetChildrenCount_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue_1                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_MainMenu_Input_Entry_C* K2Node_DynamicCast_AsWid_Main_Menu_Input_Entry_1                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetText_ReturnValue_1                                   (None)
// int32                              CallFunc_Array_AddUnique_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Key_GetDisplayName_ReturnValue_2                        (None)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Key_GetDisplayName_ReturnValue_3                        (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_Controls_v2_C::FindUnassignedBindings(bool* Empty_Found, TArray<class FText>* EmptyBindsNames, const TArray<class FText>& EmptyBindsList, bool HasEmptyBind, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, int32 Temp_int_Variable_1, class FText CallFunc_MakeLiteralText_ReturnValue_2, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWid_MainMenu_Input_Entry_C* K2Node_DynamicCast_AsWid_Main_Menu_Input_Entry, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, class FText CallFunc_GetText_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, class FText CallFunc_Key_GetDisplayName_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, class FText CallFunc_Key_GetDisplayName_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_3, int32 CallFunc_GetChildrenCount_ReturnValue_1, class UWidget* CallFunc_GetChildAt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, class UWid_MainMenu_Input_Entry_C* K2Node_DynamicCast_AsWid_Main_Menu_Input_Entry_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, class FText CallFunc_GetText_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue_1, class FText CallFunc_Key_GetDisplayName_ReturnValue_2, bool CallFunc_EqualEqual_TextText_ReturnValue_2, class FText CallFunc_Key_GetDisplayName_ReturnValue_3, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, bool CallFunc_EqualEqual_TextText_ReturnValue_3, bool CallFunc_NotEqual_NameName_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_EqualEqual_KeyKey_ReturnValue_3, bool CallFunc_NotEqual_NameName_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_v2_C", "FindUnassignedBindings");

	Params::UWid_MainMenu_Controls_v2_C_FindUnassignedBindings_Params Parms{};

	Parms.EmptyBindsList = EmptyBindsList;
	Parms.HasEmptyBind = HasEmptyBind;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue_2 = CallFunc_MakeLiteralText_ReturnValue_2;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWid_Main_Menu_Input_Entry = K2Node_DynamicCast_AsWid_Main_Menu_Input_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Key_GetDisplayName_ReturnValue = CallFunc_Key_GetDisplayName_ReturnValue;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.CallFunc_Key_GetDisplayName_ReturnValue_1 = CallFunc_Key_GetDisplayName_ReturnValue_1;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue_1 = CallFunc_EqualEqual_TextText_ReturnValue_1;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_1 = CallFunc_NotEqual_NameName_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue_3 = CallFunc_MakeLiteralText_ReturnValue_3;
	Parms.CallFunc_GetChildrenCount_ReturnValue_1 = CallFunc_GetChildrenCount_ReturnValue_1;
	Parms.CallFunc_GetChildAt_ReturnValue_1 = CallFunc_GetChildAt_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsWid_Main_Menu_Input_Entry_1 = K2Node_DynamicCast_AsWid_Main_Menu_Input_Entry_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_GetText_ReturnValue_1 = CallFunc_GetText_ReturnValue_1;
	Parms.CallFunc_Array_AddUnique_ReturnValue_1 = CallFunc_Array_AddUnique_ReturnValue_1;
	Parms.CallFunc_Key_GetDisplayName_ReturnValue_2 = CallFunc_Key_GetDisplayName_ReturnValue_2;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue_2 = CallFunc_EqualEqual_TextText_ReturnValue_2;
	Parms.CallFunc_Key_GetDisplayName_ReturnValue_3 = CallFunc_Key_GetDisplayName_ReturnValue_3;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_2 = CallFunc_EqualEqual_KeyKey_ReturnValue_2;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue_3 = CallFunc_EqualEqual_TextText_ReturnValue_3;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_2 = CallFunc_NotEqual_NameName_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_3 = CallFunc_EqualEqual_KeyKey_ReturnValue_3;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_3 = CallFunc_NotEqual_NameName_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_5 = CallFunc_BooleanOR_ReturnValue_5;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (Empty_Found != nullptr)
		*Empty_Found = Parms.Empty_Found;

	if (EmptyBindsNames != nullptr)
		*EmptyBindsNames = std::move(Parms.EmptyBindsNames);

}


// Function wid_MainMenu_Controls_v2.wid_MainMenu_Controls_v2_C.RemoveSameKeyBindings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_MainMenu_Input_Entry_C* K2Node_DynamicCast_AsWid_Main_Menu_Input_Entry                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetChildrenCount_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue_1                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_MainMenu_Input_Entry_C* K2Node_DynamicCast_AsWid_Main_Menu_Input_Entry_1                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInputActionKeyMapping      K2Node_MakeStruct_InputActionKeyMapping                          (None)
// struct FInputAxisKeyMapping        K2Node_MakeStruct_InputAxisKeyMapping                            (None)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue_2                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_MainMenu_Input_Entry_C* K2Node_DynamicCast_AsWid_Main_Menu_Input_Entry_2                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetChildrenCount_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInputActionKeyMapping      K2Node_MakeStruct_InputActionKeyMapping_1                        (None)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue_3                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_MainMenu_Input_Entry_C* K2Node_DynamicCast_AsWid_Main_Menu_Input_Entry_3                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInputAxisKeyMapping        K2Node_MakeStruct_InputAxisKeyMapping_1                          (None)

void UWid_MainMenu_Controls_v2_C::RemoveSameKeyBindings(const struct FKey& Key, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_GetChildrenCount_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UWid_MainMenu_Input_Entry_C* K2Node_DynamicCast_AsWid_Main_Menu_Input_Entry, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetChildrenCount_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 Temp_int_Variable_3, class UWidget* CallFunc_GetChildAt_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue, class UWid_MainMenu_Input_Entry_C* K2Node_DynamicCast_AsWid_Main_Menu_Input_Entry_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, const struct FInputActionKeyMapping& K2Node_MakeStruct_InputActionKeyMapping, const struct FInputAxisKeyMapping& K2Node_MakeStruct_InputAxisKeyMapping, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_GetChildrenCount_ReturnValue_2, class UWidget* CallFunc_GetChildAt_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_2, class UWid_MainMenu_Input_Entry_C* K2Node_DynamicCast_AsWid_Main_Menu_Input_Entry_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_LessEqual_IntInt_ReturnValue_2, int32 CallFunc_GetChildrenCount_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue_3, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, bool CallFunc_LessEqual_IntInt_ReturnValue_3, const struct FInputActionKeyMapping& K2Node_MakeStruct_InputActionKeyMapping_1, class UWidget* CallFunc_GetChildAt_ReturnValue_3, class UWid_MainMenu_Input_Entry_C* K2Node_DynamicCast_AsWid_Main_Menu_Input_Entry_3, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_EqualEqual_KeyKey_ReturnValue_3, const struct FInputAxisKeyMapping& K2Node_MakeStruct_InputAxisKeyMapping_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_v2_C", "RemoveSameKeyBindings");

	Params::UWid_MainMenu_Controls_v2_C_RemoveSameKeyBindings_Params Parms{};

	Parms.Key = Key;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWid_Main_Menu_Input_Entry = K2Node_DynamicCast_AsWid_Main_Menu_Input_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetChildrenCount_ReturnValue_1 = CallFunc_GetChildrenCount_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.CallFunc_GetChildAt_ReturnValue_1 = CallFunc_GetChildAt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.K2Node_DynamicCast_AsWid_Main_Menu_Input_Entry_1 = K2Node_DynamicCast_AsWid_Main_Menu_Input_Entry_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;
	Parms.K2Node_MakeStruct_InputActionKeyMapping = K2Node_MakeStruct_InputActionKeyMapping;
	Parms.K2Node_MakeStruct_InputAxisKeyMapping = K2Node_MakeStruct_InputAxisKeyMapping;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_GetChildrenCount_ReturnValue_2 = CallFunc_GetChildrenCount_ReturnValue_2;
	Parms.CallFunc_GetChildAt_ReturnValue_2 = CallFunc_GetChildAt_ReturnValue_2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_2 = CallFunc_Subtract_IntInt_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsWid_Main_Menu_Input_Entry_2 = K2Node_DynamicCast_AsWid_Main_Menu_Input_Entry_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_2 = CallFunc_LessEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_GetChildrenCount_ReturnValue_3 = CallFunc_GetChildrenCount_ReturnValue_3;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_3 = CallFunc_Subtract_IntInt_ReturnValue_3;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_2 = CallFunc_EqualEqual_KeyKey_ReturnValue_2;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_3 = CallFunc_LessEqual_IntInt_ReturnValue_3;
	Parms.K2Node_MakeStruct_InputActionKeyMapping_1 = K2Node_MakeStruct_InputActionKeyMapping_1;
	Parms.CallFunc_GetChildAt_ReturnValue_3 = CallFunc_GetChildAt_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsWid_Main_Menu_Input_Entry_3 = K2Node_DynamicCast_AsWid_Main_Menu_Input_Entry_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_3 = CallFunc_EqualEqual_KeyKey_ReturnValue_3;
	Parms.K2Node_MakeStruct_InputAxisKeyMapping_1 = K2Node_MakeStruct_InputAxisKeyMapping_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Controls_v2.wid_MainMenu_Controls_v2_C.FillDuplicatedBindings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputActionKeyMapping      OldMapping                                                       (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FInputActionKeyMapping>CallFunc_GetActionMappingByName_OutMappings                      (ReferenceParm)
// struct FInputActionKeyMapping      CallFunc_Array_Get_Item_1                                        (None)
// class FName                        CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FInputAxisKeyMapping>CallFunc_GetAxisMappingByName_OutMappings                        (ReferenceParm)
// struct FInputAxisKeyMapping        CallFunc_Array_Get_Item_2                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Key_IsMouseButton_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Key_IsKeyboardKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInputActionKeyMapping      K2Node_MakeStruct_InputActionKeyMapping                          (UObjectWrapper)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_Controls_v2_C::FillDuplicatedBindings(const struct FInputActionKeyMapping& OldMapping, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Percent_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, class UInputSettings* CallFunc_GetInputSettings_ReturnValue, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_1, TArray<class FName>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, TArray<struct FInputActionKeyMapping>& CallFunc_GetActionMappingByName_OutMappings, const struct FInputActionKeyMapping& CallFunc_Array_Get_Item_1, class FName CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<struct FInputAxisKeyMapping>& CallFunc_GetAxisMappingByName_OutMappings, const struct FInputAxisKeyMapping& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Key_IsMouseButton_ReturnValue, bool CallFunc_Key_IsKeyboardKey_ReturnValue, const struct FInputActionKeyMapping& K2Node_MakeStruct_InputActionKeyMapping, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_v2_C", "FillDuplicatedBindings");

	Params::UWid_MainMenu_Controls_v2_C_FillDuplicatedBindings_Params Parms{};

	Parms.OldMapping = OldMapping;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetInputSettings_ReturnValue = CallFunc_GetInputSettings_ReturnValue;
	Parms.CallFunc_GetInputSettings_ReturnValue_1 = CallFunc_GetInputSettings_ReturnValue_1;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetActionMappingByName_OutMappings = CallFunc_GetActionMappingByName_OutMappings;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetAxisMappingByName_OutMappings = CallFunc_GetAxisMappingByName_OutMappings;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Key_IsMouseButton_ReturnValue = CallFunc_Key_IsMouseButton_ReturnValue;
	Parms.CallFunc_Key_IsKeyboardKey_ReturnValue = CallFunc_Key_IsKeyboardKey_ReturnValue;
	Parms.K2Node_MakeStruct_InputActionKeyMapping = K2Node_MakeStruct_InputActionKeyMapping;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue_1 = CallFunc_EqualEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Controls_v2.wid_MainMenu_Controls_v2_C.Unselect Options
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Controls_v2_C::Unselect_Options()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_v2_C", "Unselect Options");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Controls_v2.wid_MainMenu_Controls_v2_C.ListBindings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Shortcuts                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_MainMenu_Input_Entry_C* CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_MainMenu_Input_Entry_C* CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class UVerticalBox*                K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// class UVerticalBox*                K2Node_Select_Default_1                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_2                           (None)
// TArray<class FName>                K2Node_Select_Default_2                                          (ReferenceParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_3                           (None)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_4                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_5                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_6                           (None)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInputAxisKeyMapping>CallFunc_GetAxisMappingByName_OutMappings                        (ReferenceParm)
// class UVerticalBox*                K2Node_Select_Default_3                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputAxisKeyMapping        CallFunc_Array_Get_Item_2                                        (None)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue_1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetKeyDisplayNameEnglish_English_Display_Name           (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IgnoreCase_TextText_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IgnoreCase_TextText_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IgnoreCase_TextText_ReturnValue_2              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IgnoreCase_TextText_ReturnValue_3              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_Buttons_PC         CallFunc_MapKeyNameToEnum_EnumValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Key_IsMouseButton_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Key_IsKeyboardKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Select_Default_4                                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_InputAction_Desc        CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// class FText                        CallFunc_TextToUpper_ReturnValue_1                               (None)
// TArray<struct FInputActionKeyMapping>CallFunc_GetActionMappingByName_OutMappings                      (ReferenceParm)
// struct FInputActionKeyMapping      CallFunc_Array_Get_Item_3                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_NameToText_ReturnValue_1                           (None)
// class FText                        CallFunc_GetKeyDisplayNameEnglish_English_Display_Name_1         (None)
// class FText                        CallFunc_TextToUpper_ReturnValue_2                               (None)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IgnoreCase_TextText_ReturnValue_4              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_Buttons_PC         CallFunc_MapKeyNameToEnum_EnumValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Key_IsMouseButton_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Key_IsKeyboardKey_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSt_InputAction_Desc        CallFunc_GetDataTableRowFromName_OutRow_1                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_TextToUpper_ReturnValue_3                               (None)

void UWid_MainMenu_Controls_v2_C::ListBindings(bool Shortcuts, class UWid_MainMenu_Input_Entry_C* CallFunc_Create_ReturnValue, class UWid_MainMenu_Input_Entry_C* CallFunc_Create_ReturnValue_1, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_3, bool Temp_bool_Variable_3, class FText CallFunc_MakeLiteralText_ReturnValue, class UVerticalBox* K2Node_Select_Default, class FText CallFunc_MakeLiteralText_ReturnValue_1, class UVerticalBox* K2Node_Select_Default_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_2, TArray<class FName>& K2Node_Select_Default_2, class FText CallFunc_MakeLiteralText_ReturnValue_3, class FName CallFunc_Array_Get_Item, class FName CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_4, class FText CallFunc_MakeLiteralText_ReturnValue_5, class FText CallFunc_MakeLiteralText_ReturnValue_6, bool Temp_bool_Variable_4, class UInputSettings* CallFunc_GetInputSettings_ReturnValue, TArray<struct FInputAxisKeyMapping>& CallFunc_GetAxisMappingByName_OutMappings, class UVerticalBox* K2Node_Select_Default_3, const struct FInputAxisKeyMapping& CallFunc_Array_Get_Item_2, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, class FText CallFunc_GetKeyDisplayNameEnglish_English_Display_Name, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_TextText_ReturnValue, bool CallFunc_NotEqual_IgnoreCase_TextText_ReturnValue, bool CallFunc_NotEqual_IgnoreCase_TextText_ReturnValue_1, bool CallFunc_NotEqual_IgnoreCase_TextText_ReturnValue_2, bool CallFunc_NotEqual_IgnoreCase_TextText_ReturnValue_3, enum class Enum_Buttons_PC CallFunc_MapKeyNameToEnum_EnumValue, bool CallFunc_Key_IsMouseButton_ReturnValue, bool CallFunc_Key_IsKeyboardKey_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, const class FString& K2Node_Select_Default_4, bool CallFunc_BooleanAND_ReturnValue_3, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FSt_InputAction_Desc& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue_1, TArray<struct FInputActionKeyMapping>& CallFunc_GetActionMappingByName_OutMappings, const struct FInputActionKeyMapping& CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, class FText CallFunc_Conv_NameToText_ReturnValue_1, class FText CallFunc_GetKeyDisplayNameEnglish_English_Display_Name_1, class FText CallFunc_TextToUpper_ReturnValue_2, bool CallFunc_EqualEqual_TextText_ReturnValue_1, bool CallFunc_NotEqual_IgnoreCase_TextText_ReturnValue_4, enum class Enum_Buttons_PC CallFunc_MapKeyNameToEnum_EnumValue_1, bool CallFunc_Key_IsMouseButton_ReturnValue_1, bool CallFunc_Key_IsKeyboardKey_ReturnValue_1, const struct FSt_InputAction_Desc& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4, class FText CallFunc_TextToUpper_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_v2_C", "ListBindings");

	Params::UWid_MainMenu_Controls_v2_C_ListBindings_Params Parms{};

	Parms.Shortcuts = Shortcuts;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_2 = CallFunc_MakeLiteralText_ReturnValue_2;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_MakeLiteralText_ReturnValue_3 = CallFunc_MakeLiteralText_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue_4 = CallFunc_MakeLiteralText_ReturnValue_4;
	Parms.CallFunc_MakeLiteralText_ReturnValue_5 = CallFunc_MakeLiteralText_ReturnValue_5;
	Parms.CallFunc_MakeLiteralText_ReturnValue_6 = CallFunc_MakeLiteralText_ReturnValue_6;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.CallFunc_GetInputSettings_ReturnValue = CallFunc_GetInputSettings_ReturnValue;
	Parms.CallFunc_GetAxisMappingByName_OutMappings = CallFunc_GetAxisMappingByName_OutMappings;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue_1 = CallFunc_AddChildToVerticalBox_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_GetKeyDisplayNameEnglish_English_Display_Name = CallFunc_GetKeyDisplayNameEnglish_English_Display_Name;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.CallFunc_NotEqual_IgnoreCase_TextText_ReturnValue = CallFunc_NotEqual_IgnoreCase_TextText_ReturnValue;
	Parms.CallFunc_NotEqual_IgnoreCase_TextText_ReturnValue_1 = CallFunc_NotEqual_IgnoreCase_TextText_ReturnValue_1;
	Parms.CallFunc_NotEqual_IgnoreCase_TextText_ReturnValue_2 = CallFunc_NotEqual_IgnoreCase_TextText_ReturnValue_2;
	Parms.CallFunc_NotEqual_IgnoreCase_TextText_ReturnValue_3 = CallFunc_NotEqual_IgnoreCase_TextText_ReturnValue_3;
	Parms.CallFunc_MapKeyNameToEnum_EnumValue = CallFunc_MapKeyNameToEnum_EnumValue;
	Parms.CallFunc_Key_IsMouseButton_ReturnValue = CallFunc_Key_IsMouseButton_ReturnValue;
	Parms.CallFunc_Key_IsKeyboardKey_ReturnValue = CallFunc_Key_IsKeyboardKey_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue_1 = CallFunc_TextToUpper_ReturnValue_1;
	Parms.CallFunc_GetActionMappingByName_OutMappings = CallFunc_GetActionMappingByName_OutMappings;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Conv_NameToText_ReturnValue_1 = CallFunc_Conv_NameToText_ReturnValue_1;
	Parms.CallFunc_GetKeyDisplayNameEnglish_English_Display_Name_1 = CallFunc_GetKeyDisplayNameEnglish_English_Display_Name_1;
	Parms.CallFunc_TextToUpper_ReturnValue_2 = CallFunc_TextToUpper_ReturnValue_2;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue_1 = CallFunc_EqualEqual_TextText_ReturnValue_1;
	Parms.CallFunc_NotEqual_IgnoreCase_TextText_ReturnValue_4 = CallFunc_NotEqual_IgnoreCase_TextText_ReturnValue_4;
	Parms.CallFunc_MapKeyNameToEnum_EnumValue_1 = CallFunc_MapKeyNameToEnum_EnumValue_1;
	Parms.CallFunc_Key_IsMouseButton_ReturnValue_1 = CallFunc_Key_IsMouseButton_ReturnValue_1;
	Parms.CallFunc_Key_IsKeyboardKey_ReturnValue_1 = CallFunc_Key_IsKeyboardKey_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_TextToUpper_ReturnValue_3 = CallFunc_TextToUpper_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Controls_v2.wid_MainMenu_Controls_v2_C.ResetInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_Controls_v2_C::ResetInput(class UInputSettings* CallFunc_GetInputSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_v2_C", "ResetInput");

	Params::UWid_MainMenu_Controls_v2_C_ResetInput_Params Parms{};

	Parms.CallFunc_GetInputSettings_ReturnValue = CallFunc_GetInputSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Controls_v2.wid_MainMenu_Controls_v2_C.SaveInput
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// int32                              Temp_int_Array_Index_Variable_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputAxisKeyMapping        CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// struct FInputAxisKeyMapping        CallFunc_Array_Get_Item_1                                        (None)
// struct FInputActionKeyMapping      CallFunc_Array_Get_Item_2                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_5                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_9                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_9                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_10                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_11                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_6                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInputActionKeyMapping>CallFunc_GetActionMappingByName_OutMappings                      (ReferenceParm)
// TArray<struct FInputActionKeyMapping>CallFunc_GetActionMappingByName_OutMappings_1                    (ReferenceParm)
// struct FInputActionKeyMapping      CallFunc_Array_Get_Item_5                                        (None)
// struct FInputActionKeyMapping      CallFunc_Array_Get_Item_6                                        (None)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Key_IsMouseButton_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Key_IsKeyboardKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Key_IsMouseButton_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Key_IsKeyboardKey_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInputAxisKeyMapping>CallFunc_GetAxisMappingByName_OutMappings                        (ReferenceParm)
// bool                               CallFunc_Less_IntInt_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInputAxisKeyMapping        CallFunc_Array_Get_Item_7                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputAxisKeyMapping        K2Node_MakeStruct_InputAxisKeyMapping                            (UObjectWrapper)
// bool                               CallFunc_Less_IntInt_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputAxisKeyMapping        K2Node_MakeStruct_InputAxisKeyMapping_1                          (UObjectWrapper)
// class FText                        CallFunc_Key_GetDisplayName_ReturnValue                          (None)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Key_IsMouseButton_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Key_IsKeyboardKey_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FInputAxisKeyMapping>CallFunc_GetAxisMappingByName_OutMappings_1                      (ReferenceParm)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInputAxisKeyMapping        CallFunc_Array_Get_Item_8                                        (None)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInputAxisKeyMapping        K2Node_MakeStruct_InputAxisKeyMapping_2                          (UObjectWrapper)
// int32                              CallFunc_Array_Add_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputAxisKeyMapping        K2Node_MakeStruct_InputAxisKeyMapping_3                          (UObjectWrapper)
// class FText                        CallFunc_Key_GetDisplayName_ReturnValue_1                        (None)
// int32                              CallFunc_Array_Add_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue_1            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Key_IsMouseButton_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Key_IsKeyboardKey_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_9                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_8                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_8                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_9                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_9                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputActionKeyMapping      CallFunc_Array_Get_Item_9                                        (None)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_MainMenu_Input_Entry_C* K2Node_DynamicCast_AsWid_Main_Menu_Input_Entry                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Key_IsValid_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Key_IsValid_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_7                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_8                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_9                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue_1                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_MainMenu_Input_Entry_C* K2Node_DynamicCast_AsWid_Main_Menu_Input_Entry_1                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_Controls_v2_C::SaveInput(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Array_Index_Variable_4, int32 Temp_int_Loop_Counter_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Array_Index_Variable_5, int32 Temp_int_Loop_Counter_Variable_5, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 Temp_int_Loop_Counter_Variable_6, int32 Temp_int_Loop_Counter_Variable_7, int32 CallFunc_Add_IntInt_ReturnValue_6, int32 CallFunc_Add_IntInt_ReturnValue_7, int32 Temp_int_Array_Index_Variable_6, int32 Temp_int_Loop_Counter_Variable_8, int32 CallFunc_Add_IntInt_ReturnValue_8, class UInputSettings* CallFunc_GetInputSettings_ReturnValue, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue, int32 Temp_int_Array_Index_Variable_7, const struct FInputAxisKeyMapping& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Array_Index_Variable_8, bool CallFunc_Less_IntInt_ReturnValue_1, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_2, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_3, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_4, class FText CallFunc_MakeLiteralText_ReturnValue_1, const struct FInputAxisKeyMapping& CallFunc_Array_Get_Item_1, const struct FInputActionKeyMapping& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_3, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_5, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_9, int32 Temp_int_Loop_Counter_Variable_9, int32 CallFunc_Add_IntInt_ReturnValue_10, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_11, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_6, class FName CallFunc_Array_Get_Item_3, class FName CallFunc_Array_Get_Item_4, TArray<struct FInputActionKeyMapping>& CallFunc_GetActionMappingByName_OutMappings, TArray<struct FInputActionKeyMapping>& CallFunc_GetActionMappingByName_OutMappings_1, const struct FInputActionKeyMapping& CallFunc_Array_Get_Item_5, const struct FInputActionKeyMapping& CallFunc_Array_Get_Item_6, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_Key_IsMouseButton_ReturnValue, bool CallFunc_Key_IsKeyboardKey_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Key_IsMouseButton_ReturnValue_1, bool CallFunc_Key_IsKeyboardKey_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_5, TArray<struct FInputAxisKeyMapping>& CallFunc_GetAxisMappingByName_OutMappings, bool CallFunc_Less_IntInt_ReturnValue_5, const struct FInputAxisKeyMapping& CallFunc_Array_Get_Item_7, int32 CallFunc_Array_Length_ReturnValue_6, const struct FInputAxisKeyMapping& K2Node_MakeStruct_InputAxisKeyMapping, bool CallFunc_Less_IntInt_ReturnValue_6, int32 CallFunc_Array_Add_ReturnValue_2, const struct FInputAxisKeyMapping& K2Node_MakeStruct_InputAxisKeyMapping_1, class FText CallFunc_Key_GetDisplayName_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_3, bool CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, bool CallFunc_Key_IsMouseButton_ReturnValue_2, bool CallFunc_Key_IsKeyboardKey_ReturnValue_2, TArray<struct FInputAxisKeyMapping>& CallFunc_GetAxisMappingByName_OutMappings_1, bool CallFunc_BooleanOR_ReturnValue_4, const struct FInputAxisKeyMapping& CallFunc_Array_Get_Item_8, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_6, const struct FInputAxisKeyMapping& K2Node_MakeStruct_InputAxisKeyMapping_2, int32 CallFunc_Array_Add_ReturnValue_4, const struct FInputAxisKeyMapping& K2Node_MakeStruct_InputAxisKeyMapping_3, class FText CallFunc_Key_GetDisplayName_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_5, bool CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_3, bool CallFunc_Key_IsMouseButton_ReturnValue_3, bool CallFunc_Key_IsKeyboardKey_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_7, bool CallFunc_Less_IntInt_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_8, bool CallFunc_BooleanOR_ReturnValue_9, int32 CallFunc_Array_Length_ReturnValue_8, bool CallFunc_Less_IntInt_ReturnValue_8, int32 CallFunc_Array_Length_ReturnValue_9, bool CallFunc_Less_IntInt_ReturnValue_9, int32 Temp_int_Array_Index_Variable_9, const struct FInputActionKeyMapping& CallFunc_Array_Get_Item_9, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UWid_MainMenu_Input_Entry_C* K2Node_DynamicCast_AsWid_Main_Menu_Input_Entry, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_Key_IsValid_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Key_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_7, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_8, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_9, int32 CallFunc_GetChildrenCount_ReturnValue_1, class UWidget* CallFunc_GetChildAt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, class UWid_MainMenu_Input_Entry_C* K2Node_DynamicCast_AsWid_Main_Menu_Input_Entry_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_v2_C", "SaveInput");

	Params::UWid_MainMenu_Controls_v2_C_SaveInput_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.Temp_int_Array_Index_Variable_5 = Temp_int_Array_Index_Variable_5;
	Parms.Temp_int_Loop_Counter_Variable_5 = Temp_int_Loop_Counter_Variable_5;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.Temp_int_Loop_Counter_Variable_6 = Temp_int_Loop_Counter_Variable_6;
	Parms.Temp_int_Loop_Counter_Variable_7 = Temp_int_Loop_Counter_Variable_7;
	Parms.CallFunc_Add_IntInt_ReturnValue_6 = CallFunc_Add_IntInt_ReturnValue_6;
	Parms.CallFunc_Add_IntInt_ReturnValue_7 = CallFunc_Add_IntInt_ReturnValue_7;
	Parms.Temp_int_Array_Index_Variable_6 = Temp_int_Array_Index_Variable_6;
	Parms.Temp_int_Loop_Counter_Variable_8 = Temp_int_Loop_Counter_Variable_8;
	Parms.CallFunc_Add_IntInt_ReturnValue_8 = CallFunc_Add_IntInt_ReturnValue_8;
	Parms.CallFunc_GetInputSettings_ReturnValue = CallFunc_GetInputSettings_ReturnValue;
	Parms.CallFunc_GetInputSettings_ReturnValue_1 = CallFunc_GetInputSettings_ReturnValue_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_7 = Temp_int_Array_Index_Variable_7;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_8 = Temp_int_Array_Index_Variable_8;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetInputSettings_ReturnValue_2 = CallFunc_GetInputSettings_ReturnValue_2;
	Parms.CallFunc_GetInputSettings_ReturnValue_3 = CallFunc_GetInputSettings_ReturnValue_3;
	Parms.CallFunc_GetInputSettings_ReturnValue_4 = CallFunc_GetInputSettings_ReturnValue_4;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_GetInputSettings_ReturnValue_5 = CallFunc_GetInputSettings_ReturnValue_5;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_9 = CallFunc_Add_IntInt_ReturnValue_9;
	Parms.Temp_int_Loop_Counter_Variable_9 = Temp_int_Loop_Counter_Variable_9;
	Parms.CallFunc_Add_IntInt_ReturnValue_10 = CallFunc_Add_IntInt_ReturnValue_10;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_11 = CallFunc_Add_IntInt_ReturnValue_11;
	Parms.CallFunc_GetInputSettings_ReturnValue_6 = CallFunc_GetInputSettings_ReturnValue_6;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_GetActionMappingByName_OutMappings = CallFunc_GetActionMappingByName_OutMappings;
	Parms.CallFunc_GetActionMappingByName_OutMappings_1 = CallFunc_GetActionMappingByName_OutMappings_1;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_Key_IsMouseButton_ReturnValue = CallFunc_Key_IsMouseButton_ReturnValue;
	Parms.CallFunc_Key_IsKeyboardKey_ReturnValue = CallFunc_Key_IsKeyboardKey_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_Key_IsMouseButton_ReturnValue_1 = CallFunc_Key_IsMouseButton_ReturnValue_1;
	Parms.CallFunc_Key_IsKeyboardKey_ReturnValue_1 = CallFunc_Key_IsKeyboardKey_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.CallFunc_GetAxisMappingByName_OutMappings = CallFunc_GetAxisMappingByName_OutMappings;
	Parms.CallFunc_Less_IntInt_ReturnValue_5 = CallFunc_Less_IntInt_ReturnValue_5;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_Array_Length_ReturnValue_6 = CallFunc_Array_Length_ReturnValue_6;
	Parms.K2Node_MakeStruct_InputAxisKeyMapping = K2Node_MakeStruct_InputAxisKeyMapping;
	Parms.CallFunc_Less_IntInt_ReturnValue_6 = CallFunc_Less_IntInt_ReturnValue_6;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.K2Node_MakeStruct_InputAxisKeyMapping_1 = K2Node_MakeStruct_InputAxisKeyMapping_1;
	Parms.CallFunc_Key_GetDisplayName_ReturnValue = CallFunc_Key_GetDisplayName_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue = CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_2 = CallFunc_EqualEqual_KeyKey_ReturnValue_2;
	Parms.CallFunc_Key_IsMouseButton_ReturnValue_2 = CallFunc_Key_IsMouseButton_ReturnValue_2;
	Parms.CallFunc_Key_IsKeyboardKey_ReturnValue_2 = CallFunc_Key_IsKeyboardKey_ReturnValue_2;
	Parms.CallFunc_GetAxisMappingByName_OutMappings_1 = CallFunc_GetAxisMappingByName_OutMappings_1;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.CallFunc_Array_Get_Item_8 = CallFunc_Array_Get_Item_8;
	Parms.CallFunc_BooleanOR_ReturnValue_5 = CallFunc_BooleanOR_ReturnValue_5;
	Parms.CallFunc_BooleanOR_ReturnValue_6 = CallFunc_BooleanOR_ReturnValue_6;
	Parms.K2Node_MakeStruct_InputAxisKeyMapping_2 = K2Node_MakeStruct_InputAxisKeyMapping_2;
	Parms.CallFunc_Array_Add_ReturnValue_4 = CallFunc_Array_Add_ReturnValue_4;
	Parms.K2Node_MakeStruct_InputAxisKeyMapping_3 = K2Node_MakeStruct_InputAxisKeyMapping_3;
	Parms.CallFunc_Key_GetDisplayName_ReturnValue_1 = CallFunc_Key_GetDisplayName_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_5 = CallFunc_Array_Add_ReturnValue_5;
	Parms.CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue_1 = CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue_1;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_3 = CallFunc_EqualEqual_KeyKey_ReturnValue_3;
	Parms.CallFunc_Key_IsMouseButton_ReturnValue_3 = CallFunc_Key_IsMouseButton_ReturnValue_3;
	Parms.CallFunc_Key_IsKeyboardKey_ReturnValue_3 = CallFunc_Key_IsKeyboardKey_ReturnValue_3;
	Parms.CallFunc_Array_Length_ReturnValue_7 = CallFunc_Array_Length_ReturnValue_7;
	Parms.CallFunc_BooleanOR_ReturnValue_7 = CallFunc_BooleanOR_ReturnValue_7;
	Parms.CallFunc_Less_IntInt_ReturnValue_7 = CallFunc_Less_IntInt_ReturnValue_7;
	Parms.CallFunc_BooleanOR_ReturnValue_8 = CallFunc_BooleanOR_ReturnValue_8;
	Parms.CallFunc_BooleanOR_ReturnValue_9 = CallFunc_BooleanOR_ReturnValue_9;
	Parms.CallFunc_Array_Length_ReturnValue_8 = CallFunc_Array_Length_ReturnValue_8;
	Parms.CallFunc_Less_IntInt_ReturnValue_8 = CallFunc_Less_IntInt_ReturnValue_8;
	Parms.CallFunc_Array_Length_ReturnValue_9 = CallFunc_Array_Length_ReturnValue_9;
	Parms.CallFunc_Less_IntInt_ReturnValue_9 = CallFunc_Less_IntInt_ReturnValue_9;
	Parms.Temp_int_Array_Index_Variable_9 = Temp_int_Array_Index_Variable_9;
	Parms.CallFunc_Array_Get_Item_9 = CallFunc_Array_Get_Item_9;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.K2Node_DynamicCast_AsWid_Main_Menu_Input_Entry = K2Node_DynamicCast_AsWid_Main_Menu_Input_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Key_IsValid_ReturnValue = CallFunc_Key_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_4 = CallFunc_EqualEqual_KeyKey_ReturnValue_4;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Key_IsValid_ReturnValue_1 = CallFunc_Key_IsValid_ReturnValue_1;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_5 = CallFunc_EqualEqual_KeyKey_ReturnValue_5;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_GetInputSettings_ReturnValue_7 = CallFunc_GetInputSettings_ReturnValue_7;
	Parms.CallFunc_GetInputSettings_ReturnValue_8 = CallFunc_GetInputSettings_ReturnValue_8;
	Parms.CallFunc_GetInputSettings_ReturnValue_9 = CallFunc_GetInputSettings_ReturnValue_9;
	Parms.CallFunc_GetChildrenCount_ReturnValue_1 = CallFunc_GetChildrenCount_ReturnValue_1;
	Parms.CallFunc_GetChildAt_ReturnValue_1 = CallFunc_GetChildAt_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsWid_Main_Menu_Input_Entry_1 = K2Node_DynamicCast_AsWid_Main_Menu_Input_Entry_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Controls_v2.wid_MainMenu_Controls_v2_C.AssignKey
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FInputActionKeyMapping      Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FInputAxisKeyMapping        Axis                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputAxisKeyMapping        K2Node_MakeStruct_InputAxisKeyMapping                            (UObjectWrapper)
// class UWid_MainMenu_Input_Entry_C* K2Node_DynamicCast_AsWid_Main_Menu_Input_Entry                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_Buttons_PC         CallFunc_MapKeyNameToEnum_EnumValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputAxisKeyMapping        K2Node_MakeStruct_InputAxisKeyMapping_1                          (UObjectWrapper)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInputActionKeyMapping      K2Node_MakeStruct_InputActionKeyMapping                          (UObjectWrapper)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInputActionKeyMapping      K2Node_MakeStruct_InputActionKeyMapping_1                        (UObjectWrapper)
// bool                               CallFunc_Key_IsGamepadKey_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue_1                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_MainMenu_Input_Entry_C* K2Node_DynamicCast_AsWid_Main_Menu_Input_Entry_1                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_Buttons_PC         CallFunc_MapKeyNameToEnum_EnumValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue_2                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue_3                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_MainMenu_Input_Entry_C* K2Node_DynamicCast_AsWid_Main_Menu_Input_Entry_2                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_MainMenu_Input_Entry_C* K2Node_DynamicCast_AsWid_Main_Menu_Input_Entry_3                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_Buttons_PC         CallFunc_MapKeyNameToEnum_EnumValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Buttons_PC         CallFunc_MapKeyNameToEnum_EnumValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_Controls_v2_C::AssignKey(const struct FKey& Key, const struct FInputActionKeyMapping& Action, const struct FInputAxisKeyMapping& Axis, int32 Index, class UWidget* CallFunc_GetChildAt_ReturnValue, const struct FInputAxisKeyMapping& K2Node_MakeStruct_InputAxisKeyMapping, class UWid_MainMenu_Input_Entry_C* K2Node_DynamicCast_AsWid_Main_Menu_Input_Entry, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_NameName_ReturnValue, enum class Enum_Buttons_PC CallFunc_MapKeyNameToEnum_EnumValue, const struct FInputAxisKeyMapping& K2Node_MakeStruct_InputAxisKeyMapping_1, bool CallFunc_NotEqual_NameName_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue_2, const struct FInputActionKeyMapping& K2Node_MakeStruct_InputActionKeyMapping, bool CallFunc_NotEqual_NameName_ReturnValue_3, const struct FInputActionKeyMapping& K2Node_MakeStruct_InputActionKeyMapping_1, bool CallFunc_Key_IsGamepadKey_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue_1, class UWid_MainMenu_Input_Entry_C* K2Node_DynamicCast_AsWid_Main_Menu_Input_Entry_1, bool K2Node_DynamicCast_bSuccess_1, enum class Enum_Buttons_PC CallFunc_MapKeyNameToEnum_EnumValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, int32 CallFunc_PostEvent_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue_2, class UWidget* CallFunc_GetChildAt_ReturnValue_3, class UWid_MainMenu_Input_Entry_C* K2Node_DynamicCast_AsWid_Main_Menu_Input_Entry_2, bool K2Node_DynamicCast_bSuccess_2, class UWid_MainMenu_Input_Entry_C* K2Node_DynamicCast_AsWid_Main_Menu_Input_Entry_3, bool K2Node_DynamicCast_bSuccess_3, enum class Enum_Buttons_PC CallFunc_MapKeyNameToEnum_EnumValue_2, enum class Enum_Buttons_PC CallFunc_MapKeyNameToEnum_EnumValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_v2_C", "AssignKey");

	Params::UWid_MainMenu_Controls_v2_C_AssignKey_Params Parms{};

	Parms.Key = Key;
	Parms.Action = Action;
	Parms.Axis = Axis;
	Parms.Index = Index;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_MakeStruct_InputAxisKeyMapping = K2Node_MakeStruct_InputAxisKeyMapping;
	Parms.K2Node_DynamicCast_AsWid_Main_Menu_Input_Entry = K2Node_DynamicCast_AsWid_Main_Menu_Input_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_MapKeyNameToEnum_EnumValue = CallFunc_MapKeyNameToEnum_EnumValue;
	Parms.K2Node_MakeStruct_InputAxisKeyMapping_1 = K2Node_MakeStruct_InputAxisKeyMapping_1;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_1 = CallFunc_NotEqual_NameName_ReturnValue_1;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_2 = CallFunc_NotEqual_NameName_ReturnValue_2;
	Parms.K2Node_MakeStruct_InputActionKeyMapping = K2Node_MakeStruct_InputActionKeyMapping;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_3 = CallFunc_NotEqual_NameName_ReturnValue_3;
	Parms.K2Node_MakeStruct_InputActionKeyMapping_1 = K2Node_MakeStruct_InputActionKeyMapping_1;
	Parms.CallFunc_Key_IsGamepadKey_ReturnValue = CallFunc_Key_IsGamepadKey_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue_1 = CallFunc_GetChildAt_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsWid_Main_Menu_Input_Entry_1 = K2Node_DynamicCast_AsWid_Main_Menu_Input_Entry_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_MapKeyNameToEnum_EnumValue_1 = CallFunc_MapKeyNameToEnum_EnumValue_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue_2 = CallFunc_GetChildAt_ReturnValue_2;
	Parms.CallFunc_GetChildAt_ReturnValue_3 = CallFunc_GetChildAt_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsWid_Main_Menu_Input_Entry_2 = K2Node_DynamicCast_AsWid_Main_Menu_Input_Entry_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsWid_Main_Menu_Input_Entry_3 = K2Node_DynamicCast_AsWid_Main_Menu_Input_Entry_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_MapKeyNameToEnum_EnumValue_2 = CallFunc_MapKeyNameToEnum_EnumValue_2;
	Parms.CallFunc_MapKeyNameToEnum_EnumValue_3 = CallFunc_MapKeyNameToEnum_EnumValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Controls_v2.wid_MainMenu_Controls_v2_C.SwitchList
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Controls_v2_C::SwitchList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_v2_C", "SwitchList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Controls_v2.wid_MainMenu_Controls_v2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Controls_v2_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_v2_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Controls_v2.wid_MainMenu_Controls_v2_C.Right
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Controls_v2_C::Right()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_v2_C", "Right");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Controls_v2.wid_MainMenu_Controls_v2_C.Accept
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Controls_v2_C::Accept()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_v2_C", "Accept");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Controls_v2.wid_MainMenu_Controls_v2_C.ControlsPlus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Controls_v2_C::ControlsPlus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_v2_C", "ControlsPlus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Controls_v2.wid_MainMenu_Controls_v2_C.ControlsMinus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Controls_v2_C::ControlsMinus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_v2_C", "ControlsMinus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Controls_v2.wid_MainMenu_Controls_v2_C.ClearAllSelection
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Controls_v2_C::ClearAllSelection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_v2_C", "ClearAllSelection");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Controls_v2.wid_MainMenu_Controls_v2_C.Left
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Controls_v2_C::Left()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_v2_C", "Left");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Controls_v2.wid_MainMenu_Controls_v2_C.Down
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Controls_v2_C::Down()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_v2_C", "Down");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Controls_v2.wid_MainMenu_Controls_v2_C.Up
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Controls_v2_C::Up()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_v2_C", "Up");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Controls_v2.wid_MainMenu_Controls_v2_C.SetDefault
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Controls_v2_C::SetDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_v2_C", "SetDefault");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Controls_v2.wid_MainMenu_Controls_v2_C.BackBtn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Controls_v2_C::BackBtn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_v2_C", "BackBtn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Controls_v2.wid_MainMenu_Controls_v2_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_Controls_v2_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_v2_C", "Tick");

	Params::UWid_MainMenu_Controls_v2_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Controls_v2.wid_MainMenu_Controls_v2_C.ExecuteUbergraph_wid_MainMenu_Controls_v2
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlatformName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_StriStri_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Array_Get_Item                                          (None)
// class FText                        CallFunc_Array_Get_Item_1                                        (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// class FText                        CallFunc_TextToUpper_ReturnValue_1                               (None)
// class FText                        CallFunc_Array_Get_Item_2                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_TextToUpper_ReturnValue_2                               (None)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_Controls_v2_C::ExecuteUbergraph_wid_MainMenu_Controls_v2(int32 EntryPoint, const class FString& CallFunc_GetPlatformName_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_NotEqual_StriStri_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, bool Temp_bool_Variable_3, enum class ESlateVisibility Temp_byte_Variable_8, enum class ESlateVisibility Temp_byte_Variable_9, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_Array_Get_Item, class FText CallFunc_Array_Get_Item_1, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue_1, class FText CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue_2, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool Temp_bool_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default_2, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, enum class ESlateVisibility K2Node_Select_Default_3, enum class ESlateVisibility K2Node_Select_Default_4, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_v2_C", "ExecuteUbergraph_wid_MainMenu_Controls_v2");

	Params::UWid_MainMenu_Controls_v2_C_ExecuteUbergraph_wid_MainMenu_Controls_v2_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlatformName_ReturnValue = CallFunc_GetPlatformName_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_NotEqual_StriStri_ReturnValue = CallFunc_NotEqual_StriStri_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_byte_Variable_8 = Temp_byte_Variable_8;
	Parms.Temp_byte_Variable_9 = Temp_byte_Variable_9;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue_1 = CallFunc_TextToUpper_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue_2 = CallFunc_TextToUpper_ReturnValue_2;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Percent_IntInt_ReturnValue_1 = CallFunc_Percent_IntInt_ReturnValue_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


