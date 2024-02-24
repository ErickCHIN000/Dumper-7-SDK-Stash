#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CC_sw_CharacterNameConfirm.WBP_CC_sw_CharacterNameConfirm_C
// (None)

class UClass* UWBP_CC_sw_CharacterNameConfirm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CC_sw_CharacterNameConfirm_C");

	return Clss;
}


// WBP_CC_sw_CharacterNameConfirm_C WBP_CC_sw_CharacterNameConfirm.Default__WBP_CC_sw_CharacterNameConfirm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CC_sw_CharacterNameConfirm_C* UWBP_CC_sw_CharacterNameConfirm_C::GetDefaultObj()
{
	static class UWBP_CC_sw_CharacterNameConfirm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CC_sw_CharacterNameConfirm_C*>(UWBP_CC_sw_CharacterNameConfirm_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CC_sw_CharacterNameConfirm.WBP_CC_sw_CharacterNameConfirm_C.OnUILoginStateChangeHandleCreateProfileFailure
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_UILoginState          UILoginState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXUILoginSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUILoginInfo                CallFunc_GetInfo_ReturnValue                                     (ConstParm)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_sw_CharacterNameConfirm_C::OnUILoginStateChangeHandleCreateProfileFailure(enum class E_UILoginState UILoginState, class UNWXUILoginSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FUILoginInfo& CallFunc_GetInfo_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_sw_CharacterNameConfirm_C", "OnUILoginStateChangeHandleCreateProfileFailure");

	Params::UWBP_CC_sw_CharacterNameConfirm_C_OnUILoginStateChangeHandleCreateProfileFailure_Params Parms{};

	Parms.UILoginState = UILoginState;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetInfo_ReturnValue = CallFunc_GetInfo_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_sw_CharacterNameConfirm.WBP_CC_sw_CharacterNameConfirm_C.DisplayNameValidationMessageAndResetConfirmationUI
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UWBP_CC_sw_CharacterNameConfirm_C::DisplayNameValidationMessageAndResetConfirmationUI(TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_sw_CharacterNameConfirm_C", "DisplayNameValidationMessageAndResetConfirmationUI");

	Params::UWBP_CC_sw_CharacterNameConfirm_C_DisplayNameValidationMessageAndResetConfirmationUI_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_sw_CharacterNameConfirm.WBP_CC_sw_CharacterNameConfirm_C.Send Telemetry End
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bCancelled                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_Guid_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXUILoginSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUILoginInfo                CallFunc_GetInfo_ReturnValue                                     (ConstParm)
// struct FDateTime                   CallFunc_UtcNow_ReturnValue                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_DateTimeToUnixTimestamp_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Subtract_Int64Int64_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_GuidToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_Int64ToInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_sw_CharacterNameConfirm_C::Send_Telemetry_End(bool bCancelled, bool CallFunc_IsValid_Guid_ReturnValue, class UNWXUILoginSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FUILoginInfo& CallFunc_GetInfo_ReturnValue, const struct FDateTime& CallFunc_UtcNow_ReturnValue, int64 CallFunc_DateTimeToUnixTimestamp_ReturnValue, int64 CallFunc_Subtract_Int64Int64_ReturnValue, const class FString& CallFunc_Conv_GuidToString_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_sw_CharacterNameConfirm_C", "Send Telemetry End");

	Params::UWBP_CC_sw_CharacterNameConfirm_C_Send_Telemetry_End_Params Parms{};

	Parms.bCancelled = bCancelled;
	Parms.CallFunc_IsValid_Guid_ReturnValue = CallFunc_IsValid_Guid_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetInfo_ReturnValue = CallFunc_GetInfo_ReturnValue;
	Parms.CallFunc_UtcNow_ReturnValue = CallFunc_UtcNow_ReturnValue;
	Parms.CallFunc_DateTimeToUnixTimestamp_ReturnValue = CallFunc_DateTimeToUnixTimestamp_ReturnValue;
	Parms.CallFunc_Subtract_Int64Int64_ReturnValue = CallFunc_Subtract_Int64Int64_ReturnValue;
	Parms.CallFunc_Conv_GuidToString_ReturnValue = CallFunc_Conv_GuidToString_ReturnValue;
	Parms.CallFunc_Conv_Int64ToInt_ReturnValue = CallFunc_Conv_Int64ToInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_sw_CharacterNameConfirm.WBP_CC_sw_CharacterNameConfirm_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_CC_sw_CharacterNameConfirm_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_sw_CharacterNameConfirm_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_CC_sw_CharacterNameConfirm_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_CC_sw_CharacterNameConfirm.WBP_CC_sw_CharacterNameConfirm_C.GetPrivateName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      PrivateName                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void UWBP_CC_sw_CharacterNameConfirm_C::GetPrivateName(class FString* PrivateName, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_sw_CharacterNameConfirm_C", "GetPrivateName");

	Params::UWBP_CC_sw_CharacterNameConfirm_C_GetPrivateName_Params Parms{};

	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PrivateName != nullptr)
		*PrivateName = std::move(Parms.PrivateName);

}


// Function WBP_CC_sw_CharacterNameConfirm.WBP_CC_sw_CharacterNameConfirm_C.Get_dropdown_ToolTipWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class UWBP_GenericTooltip_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_CC_sw_CharacterNameConfirm_C::Get_dropdown_ToolTipWidget(class FText Temp_text_Variable, class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_sw_CharacterNameConfirm_C", "Get_dropdown_ToolTipWidget");

	Params::UWBP_CC_sw_CharacterNameConfirm_C_Get_dropdown_ToolTipWidget_Params Parms{};

	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_CC_sw_CharacterNameConfirm.WBP_CC_sw_CharacterNameConfirm_C.RandomizeTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CC_sw_CharacterNameConfirm_C::RandomizeTitle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_sw_CharacterNameConfirm_C", "RandomizeTitle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_sw_CharacterNameConfirm.WBP_CC_sw_CharacterNameConfirm_C.NameConfirm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             SelectionType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_sw_CharacterNameConfirm_C::NameConfirm(const class FString& SelectedItem, enum class ESelectInfo SelectionType, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_sw_CharacterNameConfirm_C", "NameConfirm");

	Params::UWBP_CC_sw_CharacterNameConfirm_C_NameConfirm_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_sw_CharacterNameConfirm.WBP_CC_sw_CharacterNameConfirm_C.GetPublicSelectedName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

class FString UWBP_CC_sw_CharacterNameConfirm_C::GetPublicSelectedName(class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_sw_CharacterNameConfirm_C", "GetPublicSelectedName");

	Params::UWBP_CC_sw_CharacterNameConfirm_C_GetPublicSelectedName_Params Parms{};

	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_CC_sw_CharacterNameConfirm.WBP_CC_sw_CharacterNameConfirm_C.GetTooltipWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class UWBP_GenericTooltip_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_CC_sw_CharacterNameConfirm_C::GetTooltipWidget(class FText Temp_text_Variable, class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_sw_CharacterNameConfirm_C", "GetTooltipWidget");

	Params::UWBP_CC_sw_CharacterNameConfirm_C_GetTooltipWidget_Params Parms{};

	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_CC_sw_CharacterNameConfirm.WBP_CC_sw_CharacterNameConfirm_C.SetupDropDownName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              Names                                                            (Edit, BlueprintVisible)

void UWBP_CC_sw_CharacterNameConfirm_C::SetupDropDownName(const TArray<class FString>& Names)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_sw_CharacterNameConfirm_C", "SetupDropDownName");

	Params::UWBP_CC_sw_CharacterNameConfirm_C_SetupDropDownName_Params Parms{};

	Parms.Names = Names;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_sw_CharacterNameConfirm.WBP_CC_sw_CharacterNameConfirm_C.Get_BU_RandomName_ToolTipWidget_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        RandomText                                                       (Edit, BlueprintVisible)
// class UWBP_GenericTooltip_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_CC_sw_CharacterNameConfirm_C::Get_BU_RandomName_ToolTipWidget_0(class FText RandomText, class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_sw_CharacterNameConfirm_C", "Get_BU_RandomName_ToolTipWidget_0");

	Params::UWBP_CC_sw_CharacterNameConfirm_C_Get_BU_RandomName_ToolTipWidget_0_Params Parms{};

	Parms.RandomText = RandomText;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_CC_sw_CharacterNameConfirm.WBP_CC_sw_CharacterNameConfirm_C.BndEvt__WBP_CC_sw_CharacterNameConfirm_txt_Name_K2Node_ComponentBoundEvent_3_OnEditableTextChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_CC_sw_CharacterNameConfirm_C::BndEvt__WBP_CC_sw_CharacterNameConfirm_txt_Name_K2Node_ComponentBoundEvent_3_OnEditableTextChangedEvent__DelegateSignature(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_sw_CharacterNameConfirm_C", "BndEvt__WBP_CC_sw_CharacterNameConfirm_txt_Name_K2Node_ComponentBoundEvent_3_OnEditableTextChangedEvent__DelegateSignature");

	Params::UWBP_CC_sw_CharacterNameConfirm_C_BndEvt__WBP_CC_sw_CharacterNameConfirm_txt_Name_K2Node_ComponentBoundEvent_3_OnEditableTextChangedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_sw_CharacterNameConfirm.WBP_CC_sw_CharacterNameConfirm_C.OnValidateProfileName
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bNameIsValid                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              ValidationErrors                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_CC_sw_CharacterNameConfirm_C::OnValidateProfileName(bool bNameIsValid, TArray<class FString>& ValidationErrors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_sw_CharacterNameConfirm_C", "OnValidateProfileName");

	Params::UWBP_CC_sw_CharacterNameConfirm_C_OnValidateProfileName_Params Parms{};

	Parms.bNameIsValid = bNameIsValid;
	Parms.ValidationErrors = ValidationErrors;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_sw_CharacterNameConfirm.WBP_CC_sw_CharacterNameConfirm_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_CC_sw_CharacterNameConfirm_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_sw_CharacterNameConfirm_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_sw_CharacterNameConfirm.WBP_CC_sw_CharacterNameConfirm_C.BndEvt__WBP_CC_sw_CharacterNameConfirm_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_sw_CharacterNameConfirm_C::BndEvt__WBP_CC_sw_CharacterNameConfirm_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_sw_CharacterNameConfirm_C", "BndEvt__WBP_CC_sw_CharacterNameConfirm_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_CC_sw_CharacterNameConfirm_C_BndEvt__WBP_CC_sw_CharacterNameConfirm_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_sw_CharacterNameConfirm.WBP_CC_sw_CharacterNameConfirm_C.BndEvt__WBP_CC_sw_CharacterNameConfirm_CBU_NameCancel_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_sw_CharacterNameConfirm_C::BndEvt__WBP_CC_sw_CharacterNameConfirm_CBU_NameCancel_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_sw_CharacterNameConfirm_C", "BndEvt__WBP_CC_sw_CharacterNameConfirm_CBU_NameCancel_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_CC_sw_CharacterNameConfirm_C_BndEvt__WBP_CC_sw_CharacterNameConfirm_CBU_NameCancel_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_sw_CharacterNameConfirm.WBP_CC_sw_CharacterNameConfirm_C.BndEvt__WBP_CC_sw_CharacterNameConfirm_CBU_NameConfirm_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_sw_CharacterNameConfirm_C::BndEvt__WBP_CC_sw_CharacterNameConfirm_CBU_NameConfirm_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_sw_CharacterNameConfirm_C", "BndEvt__WBP_CC_sw_CharacterNameConfirm_CBU_NameConfirm_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_CC_sw_CharacterNameConfirm_C_BndEvt__WBP_CC_sw_CharacterNameConfirm_CBU_NameConfirm_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_sw_CharacterNameConfirm.WBP_CC_sw_CharacterNameConfirm_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_CC_sw_CharacterNameConfirm_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_sw_CharacterNameConfirm_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_sw_CharacterNameConfirm.WBP_CC_sw_CharacterNameConfirm_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_CC_sw_CharacterNameConfirm_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_sw_CharacterNameConfirm_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_sw_CharacterNameConfirm.WBP_CC_sw_CharacterNameConfirm_C.OnFadeOutFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CC_sw_CharacterNameConfirm_C::OnFadeOutFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_sw_CharacterNameConfirm_C", "OnFadeOutFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_sw_CharacterNameConfirm.WBP_CC_sw_CharacterNameConfirm_C.ExecuteUbergraph_WBP_CC_sw_CharacterNameConfirm
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXUILoginSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXUILoginSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDataTableRowHandle> CallFunc_GetDataTableRowHandles_RowHandles                       (ReferenceParm)
// TArray<struct FDataTableRowHandle> CallFunc_GetDataTableRowHandles_RowHandles_1                     (ReferenceParm)
// class UNWXUILoginSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue_2                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUILoginInfo                CallFunc_GetInfo_ReturnValue                                     (ConstParm)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// struct FS_NPCVictorianName         CallFunc_GetDataTableRowFromName_OutRow                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (ConstParm)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPublicSelectedName_ReturnValue                       (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bNameIsValid                                  (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_CustomEvent_ValidationErrors                              (ConstParm, ReferenceParm)
// class FString                      CallFunc_GetPrivateName_PrivateName                              (ZeroConstructor, HasGetValueTypeHash)
// struct FCreateProfile              K2Node_MakeStruct_CreateProfile                                  (None)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_sw_CharacterNameConfirm_C::ExecuteUbergraph_WBP_CC_sw_CharacterNameConfirm(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UNWXUILoginSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UNWXUILoginSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TArray<struct FDataTableRowHandle>& CallFunc_GetDataTableRowHandles_RowHandles, TArray<struct FDataTableRowHandle>& CallFunc_GetDataTableRowHandles_RowHandles_1, class UNWXUILoginSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, const struct FUILoginInfo& CallFunc_GetInfo_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, const struct FS_NPCVictorianName& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText K2Node_ComponentBoundEvent_Text, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_GetPublicSelectedName_ReturnValue, class FText CallFunc_GetText_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, bool K2Node_CustomEvent_bNameIsValid, TArray<class FString>& K2Node_CustomEvent_ValidationErrors, const class FString& CallFunc_GetPrivateName_PrivateName, const struct FCreateProfile& K2Node_MakeStruct_CreateProfile, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_sw_CharacterNameConfirm_C", "ExecuteUbergraph_WBP_CC_sw_CharacterNameConfirm");

	Params::UWBP_CC_sw_CharacterNameConfirm_C_ExecuteUbergraph_WBP_CC_sw_CharacterNameConfirm_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetDataTableRowHandles_RowHandles = CallFunc_GetDataTableRowHandles_RowHandles;
	Parms.CallFunc_GetDataTableRowHandles_RowHandles_1 = CallFunc_GetDataTableRowHandles_RowHandles_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_2 = CallFunc_GetGameInstanceSubsystem_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetInfo_ReturnValue = CallFunc_GetInfo_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Text = K2Node_ComponentBoundEvent_Text;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetPublicSelectedName_ReturnValue = CallFunc_GetPublicSelectedName_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.K2Node_CustomEvent_bNameIsValid = K2Node_CustomEvent_bNameIsValid;
	Parms.K2Node_CustomEvent_ValidationErrors = K2Node_CustomEvent_ValidationErrors;
	Parms.CallFunc_GetPrivateName_PrivateName = CallFunc_GetPrivateName_PrivateName;
	Parms.K2Node_MakeStruct_CreateProfile = K2Node_MakeStruct_CreateProfile;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_sw_CharacterNameConfirm.WBP_CC_sw_CharacterNameConfirm_C.JoinGameAsNewProfile__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCreateProfile              Profile                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_CC_sw_CharacterNameConfirm_C::JoinGameAsNewProfile__DelegateSignature(const struct FCreateProfile& Profile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_sw_CharacterNameConfirm_C", "JoinGameAsNewProfile__DelegateSignature");

	Params::UWBP_CC_sw_CharacterNameConfirm_C_JoinGameAsNewProfile__DelegateSignature_Params Parms{};

	Parms.Profile = Profile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_sw_CharacterNameConfirm.WBP_CC_sw_CharacterNameConfirm_C.NameConfirmed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Confirmed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_sw_CharacterNameConfirm_C::NameConfirmed__DelegateSignature(bool Confirmed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_sw_CharacterNameConfirm_C", "NameConfirmed__DelegateSignature");

	Params::UWBP_CC_sw_CharacterNameConfirm_C_NameConfirmed__DelegateSignature_Params Parms{};

	Parms.Confirmed = Confirmed;

	UObject::ProcessEvent(Func, &Parms);

}

}


