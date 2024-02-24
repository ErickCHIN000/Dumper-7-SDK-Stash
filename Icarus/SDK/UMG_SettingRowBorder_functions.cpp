#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_SettingRowBorder.UMG_SettingRowBorder_C
// (None)

class UClass* UUMG_SettingRowBorder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_SettingRowBorder_C");

	return Clss;
}


// UMG_SettingRowBorder_C UMG_SettingRowBorder.Default__UMG_SettingRowBorder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_SettingRowBorder_C* UUMG_SettingRowBorder_C::GetDefaultObj()
{
	static class UUMG_SettingRowBorder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_SettingRowBorder_C*>(UUMG_SettingRowBorder_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_SettingRowBorder.UMG_SettingRowBorder_C.Set Requirements
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<bool>                       States                                                           (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIcarusGameUserSettings*     CallFunc_GetIcarusGameUserSettings_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                CallFunc_Map_Values_Values                                       (ReferenceParm)
// TArray<int32>                      CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckSettingCondition_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SettingRowBorder_C::Set_Requirements(const TArray<bool>& States, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UIcarusGameUserSettings* CallFunc_GetIcarusGameUserSettings_ReturnValue, TArray<class FText>& CallFunc_Map_Values_Values, TArray<int32>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_CheckSettingCondition_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SettingRowBorder_C", "Set Requirements");

	Params::UUMG_SettingRowBorder_C_Set_Requirements_Params Parms{};

	Parms.States = States;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetIcarusGameUserSettings_ReturnValue = CallFunc_GetIcarusGameUserSettings_ReturnValue;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_CheckSettingCondition_ReturnValue = CallFunc_CheckSettingCondition_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_SettingRowBorder.UMG_SettingRowBorder_C.GetFocusWidget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bValid                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     Widget                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bThis                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetContent_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_IcarusWidget_C*         K2Node_DynamicCast_AsUMG_Icarus_Widget                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetFocusWidget_bValid                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetFocusWidget_Widget                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFocusWidget_bThis                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_SettingRowBorder_C::GetFocusWidget(bool* bValid, class UWidget** Widget, bool* bThis, class UWidget* CallFunc_GetContent_ReturnValue, class UUMG_IcarusWidget_C* K2Node_DynamicCast_AsUMG_Icarus_Widget, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetFocusWidget_bValid, class UWidget* CallFunc_GetFocusWidget_Widget, bool CallFunc_GetFocusWidget_bThis)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SettingRowBorder_C", "GetFocusWidget");

	Params::UUMG_SettingRowBorder_C_GetFocusWidget_Params Parms{};

	Parms.CallFunc_GetContent_ReturnValue = CallFunc_GetContent_ReturnValue;
	Parms.K2Node_DynamicCast_AsUMG_Icarus_Widget = K2Node_DynamicCast_AsUMG_Icarus_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetFocusWidget_bValid = CallFunc_GetFocusWidget_bValid;
	Parms.CallFunc_GetFocusWidget_Widget = CallFunc_GetFocusWidget_Widget;
	Parms.CallFunc_GetFocusWidget_bThis = CallFunc_GetFocusWidget_bThis;

	UObject::ProcessEvent(Func, &Parms);

	if (bValid != nullptr)
		*bValid = Parms.bValid;

	if (Widget != nullptr)
		*Widget = Parms.Widget;

	if (bThis != nullptr)
		*bThis = Parms.bThis;

}


// Function UMG_SettingRowBorder.UMG_SettingRowBorder_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_SettingRowBorder_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SettingRowBorder_C", "PreConstruct");

	Params::UUMG_SettingRowBorder_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_SettingRowBorder.UMG_SettingRowBorder_C.Post Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_SettingRowBorder_C::Post_Setup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SettingRowBorder_C", "Post Setup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_SettingRowBorder.UMG_SettingRowBorder_C.Update Enabled State
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_SettingRowBorder_C::Update_Enabled_State()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SettingRowBorder_C", "Update Enabled State");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_SettingRowBorder.UMG_SettingRowBorder_C.HideName
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_SettingRowBorder_C::HideName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SettingRowBorder_C", "HideName");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_SettingRowBorder.UMG_SettingRowBorder_C.Setup Restart Widget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_SettingRowBorder_C::Setup_Restart_Widget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SettingRowBorder_C", "Setup Restart Widget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_SettingRowBorder.UMG_SettingRowBorder_C.On Restart Requested
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SettingName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SettingRowBorder_C::On_Restart_Requested(class FName SettingName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SettingRowBorder_C", "On Restart Requested");

	Params::UUMG_SettingRowBorder_C_On_Restart_Requested_Params Parms{};

	Parms.SettingName = SettingName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_SettingRowBorder.UMG_SettingRowBorder_C.Connect To Restart Events
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_SettingRowBorder_C::Connect_To_Restart_Events()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SettingRowBorder_C", "Connect To Restart Events");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_SettingRowBorder.UMG_SettingRowBorder_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SettingRowBorder_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SettingRowBorder_C", "Tick");

	Params::UUMG_SettingRowBorder_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_SettingRowBorder.UMG_SettingRowBorder_C.ExecuteUbergraph_UMG_SettingRowBorder
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// class UHorizontalBoxSlot*          CallFunc_SlotAsHorizontalBoxSlot_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateChildSize             K2Node_MakeStruct_SlateChildSize                                 (NoDestructor)
// bool                               CallFunc_IsHovered_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_IcarusGameUserSettings_C*CallFunc_Get_Icarus_Game_User_Settings_Settings                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Length_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSettingEnabledForEdit_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// class UBP_IcarusGameUserSettings_C*CallFunc_Get_Icarus_Game_User_Settings_Settings_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UBP_IcarusGameUserSettings_C*CallFunc_Get_Icarus_Game_User_Settings_Settings_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_IcarusGameUserSettings_C*CallFunc_Get_Icarus_Game_User_Settings_Settings_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SettingRequiresRestart_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_SettingName                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_IcarusGameUserSettings_C*CallFunc_Get_Icarus_Game_User_Settings_Settings_4                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SettingRowBorder_C::ExecuteUbergraph_UMG_SettingRowBorder(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Has_Been_Initd_Variable, bool K2Node_Event_IsDesignTime, class FText CallFunc_TextToUpper_ReturnValue, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, bool CallFunc_IsHovered_ReturnValue, class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings, int32 CallFunc_Map_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsSettingEnabledForEdit_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings_2, class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings_3, bool CallFunc_SettingRequiresRestart_ReturnValue, class FName K2Node_CustomEvent_SettingName, class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings_4, bool CallFunc_EqualEqual_NameName_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SettingRowBorder_C", "ExecuteUbergraph_UMG_SettingRowBorder");

	Params::UUMG_SettingRowBorder_C_ExecuteUbergraph_UMG_SettingRowBorder_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_SlotAsHorizontalBoxSlot_ReturnValue = CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;
	Parms.K2Node_MakeStruct_SlateChildSize = K2Node_MakeStruct_SlateChildSize;
	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;
	Parms.CallFunc_Get_Icarus_Game_User_Settings_Settings = CallFunc_Get_Icarus_Game_User_Settings_Settings;
	Parms.CallFunc_Map_Length_ReturnValue = CallFunc_Map_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsSettingEnabledForEdit_ReturnValue = CallFunc_IsSettingEnabledForEdit_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_MakeColor_ReturnValue = CallFunc_MakeColor_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_Get_Icarus_Game_User_Settings_Settings_1 = CallFunc_Get_Icarus_Game_User_Settings_Settings_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Get_Icarus_Game_User_Settings_Settings_2 = CallFunc_Get_Icarus_Game_User_Settings_Settings_2;
	Parms.CallFunc_Get_Icarus_Game_User_Settings_Settings_3 = CallFunc_Get_Icarus_Game_User_Settings_Settings_3;
	Parms.CallFunc_SettingRequiresRestart_ReturnValue = CallFunc_SettingRequiresRestart_ReturnValue;
	Parms.K2Node_CustomEvent_SettingName = K2Node_CustomEvent_SettingName;
	Parms.CallFunc_Get_Icarus_Game_User_Settings_Settings_4 = CallFunc_Get_Icarus_Game_User_Settings_Settings_4;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_SettingRowBorder.UMG_SettingRowBorder_C.SettingOptionUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_SettingRowBorder_C*     SettingOption                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SettingRowBorder_C::SettingOptionUnhovered__DelegateSignature(class UUMG_SettingRowBorder_C* SettingOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SettingRowBorder_C", "SettingOptionUnhovered__DelegateSignature");

	Params::UUMG_SettingRowBorder_C_SettingOptionUnhovered__DelegateSignature_Params Parms{};

	Parms.SettingOption = SettingOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_SettingRowBorder.UMG_SettingRowBorder_C.SettingOptionHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_SettingRowBorder_C*     SettingOption                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SettingRowBorder_C::SettingOptionHovered__DelegateSignature(class UUMG_SettingRowBorder_C* SettingOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SettingRowBorder_C", "SettingOptionHovered__DelegateSignature");

	Params::UUMG_SettingRowBorder_C_SettingOptionHovered__DelegateSignature_Params Parms{};

	Parms.SettingOption = SettingOption;

	UObject::ProcessEvent(Func, &Parms);

}

}


