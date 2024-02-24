#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_MainMenu_Escape.WBP_MainMenu_Escape_C
// (None)

class UClass* UWBP_MainMenu_Escape_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_MainMenu_Escape_C");

	return Clss;
}


// WBP_MainMenu_Escape_C WBP_MainMenu_Escape.Default__WBP_MainMenu_Escape_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_MainMenu_Escape_C* UWBP_MainMenu_Escape_C::GetDefaultObj()
{
	static class UWBP_MainMenu_Escape_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_MainMenu_Escape_C*>(UWBP_MainMenu_Escape_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_MainMenu_Escape.WBP_MainMenu_Escape_C.SetButtonVisibilityFromRealmSettings
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRealmSettings              CallFunc_GetCurrentRealmSettings_OutRealmSettings                (None)
// bool                               CallFunc_GetCurrentRealmSettings_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasOnboardingRealmsTags_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Escape_C::SetButtonVisibilityFromRealmSettings(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, const struct FRealmSettings& CallFunc_GetCurrentRealmSettings_OutRealmSettings, bool CallFunc_GetCurrentRealmSettings_ReturnValue, bool CallFunc_HasOnboardingRealmsTags_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Escape_C", "SetButtonVisibilityFromRealmSettings");

	Params::UWBP_MainMenu_Escape_C_SetButtonVisibilityFromRealmSettings_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetCurrentRealmSettings_OutRealmSettings = CallFunc_GetCurrentRealmSettings_OutRealmSettings;
	Parms.CallFunc_GetCurrentRealmSettings_ReturnValue = CallFunc_GetCurrentRealmSettings_ReturnValue;
	Parms.CallFunc_HasOnboardingRealmsTags_ReturnValue = CallFunc_HasOnboardingRealmsTags_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Escape.WBP_MainMenu_Escape_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_MainMenu_Escape_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Escape_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_MainMenu_Escape_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_MainMenu_Escape.WBP_MainMenu_Escape_C.GetDefaultFocusWidget
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_MainMenu_Escape_C::GetDefaultFocusWidget(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Escape_C", "GetDefaultFocusWidget");

	Params::UWBP_MainMenu_Escape_C_GetDefaultFocusWidget_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_MainMenu_Escape.WBP_MainMenu_Escape_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FEventReply UWBP_MainMenu_Escape_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Escape_C", "OnKeyDown");

	Params::UWBP_MainMenu_Escape_C_OnKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_MainMenu_Escape.WBP_MainMenu_Escape_C.ResetCursorToCenter
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetAlignmentInViewport_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Escape_C::ResetCursorToCenter(double Temp_real_Variable, bool Temp_bool_Variable, double Temp_real_Variable_1, bool Temp_bool_Variable_1, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, const struct FVector2D& CallFunc_GetAlignmentInViewport_ReturnValue, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_1, double K2Node_Select_Default, double K2Node_Select_Default_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Escape_C", "ResetCursorToCenter");

	Params::UWBP_MainMenu_Escape_C_ResetCursorToCenter_Params Parms{};

	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController = CallFunc_GetLocalPlayerController_LocalPlayerController;
	Parms.CallFunc_GetAlignmentInViewport_ReturnValue = CallFunc_GetAlignmentInViewport_ReturnValue;
	Parms.CallFunc_GetViewportSize_ReturnValue = CallFunc_GetViewportSize_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue_1 = CallFunc_EqualEqual_DoubleDouble_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Escape.WBP_MainMenu_Escape_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Escape_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Escape_C", "PreConstruct");

	Params::UWBP_MainMenu_Escape_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Escape.WBP_MainMenu_Escape_C.EscMenu_OpenToUniquePage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                GuidebookCategory                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Escape_C::EscMenu_OpenToUniquePage(const struct FGameplayTag& GuidebookCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Escape_C", "EscMenu_OpenToUniquePage");

	Params::UWBP_MainMenu_Escape_C_EscMenu_OpenToUniquePage_Params Parms{};

	Parms.GuidebookCategory = GuidebookCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Escape.WBP_MainMenu_Escape_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_Escape_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Escape_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_Escape.WBP_MainMenu_Escape_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_Escape_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Escape_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_Escape.WBP_MainMenu_Escape_C.BndEvt__WBP_MainMenu_Escape_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Escape_C::BndEvt__WBP_MainMenu_Escape_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Escape_C", "BndEvt__WBP_MainMenu_Escape_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_MainMenu_Escape_C_BndEvt__WBP_MainMenu_Escape_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Escape.WBP_MainMenu_Escape_C.BndEvt__WBP_MainMenu_Escape_CBU_Map_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Escape_C::BndEvt__WBP_MainMenu_Escape_CBU_Map_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Escape_C", "BndEvt__WBP_MainMenu_Escape_CBU_Map_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_MainMenu_Escape_C_BndEvt__WBP_MainMenu_Escape_CBU_Map_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Escape.WBP_MainMenu_Escape_C.BndEvt__WBP_MainMenu_Escape_CBU_Party_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Escape_C::BndEvt__WBP_MainMenu_Escape_CBU_Party_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Escape_C", "BndEvt__WBP_MainMenu_Escape_CBU_Party_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_MainMenu_Escape_C_BndEvt__WBP_MainMenu_Escape_CBU_Party_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Escape.WBP_MainMenu_Escape_C.BndEvt__WBP_MainMenu_Escape_CBU_Inventory_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Escape_C::BndEvt__WBP_MainMenu_Escape_CBU_Inventory_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Escape_C", "BndEvt__WBP_MainMenu_Escape_CBU_Inventory_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_MainMenu_Escape_C_BndEvt__WBP_MainMenu_Escape_CBU_Inventory_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Escape.WBP_MainMenu_Escape_C.BndEvt__WBP_MainMenu_Escape_CBU_Resume_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Escape_C::BndEvt__WBP_MainMenu_Escape_CBU_Resume_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Escape_C", "BndEvt__WBP_MainMenu_Escape_CBU_Resume_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_MainMenu_Escape_C_BndEvt__WBP_MainMenu_Escape_CBU_Resume_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Escape.WBP_MainMenu_Escape_C.BndEvt__WBP_MainMenu_Escape_CBU_Settings_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Escape_C::BndEvt__WBP_MainMenu_Escape_CBU_Settings_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Escape_C", "BndEvt__WBP_MainMenu_Escape_CBU_Settings_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_MainMenu_Escape_C_BndEvt__WBP_MainMenu_Escape_CBU_Settings_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Escape.WBP_MainMenu_Escape_C.BndEvt__WBP_MainMenu_Escape_CBU_Stuck_K2Node_ComponentBoundEvent_13_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Escape_C::BndEvt__WBP_MainMenu_Escape_CBU_Stuck_K2Node_ComponentBoundEvent_13_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Escape_C", "BndEvt__WBP_MainMenu_Escape_CBU_Stuck_K2Node_ComponentBoundEvent_13_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_MainMenu_Escape_C_BndEvt__WBP_MainMenu_Escape_CBU_Stuck_K2Node_ComponentBoundEvent_13_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Escape.WBP_MainMenu_Escape_C.BndEvt__WBP_MainMenu_Escape_CBU_ReportBug_K2Node_ComponentBoundEvent_14_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Escape_C::BndEvt__WBP_MainMenu_Escape_CBU_ReportBug_K2Node_ComponentBoundEvent_14_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Escape_C", "BndEvt__WBP_MainMenu_Escape_CBU_ReportBug_K2Node_ComponentBoundEvent_14_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_MainMenu_Escape_C_BndEvt__WBP_MainMenu_Escape_CBU_ReportBug_K2Node_ComponentBoundEvent_14_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Escape.WBP_MainMenu_Escape_C.BndEvt__WBP_MainMenu_Escape_CBU_Quit_K2Node_ComponentBoundEvent_15_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Escape_C::BndEvt__WBP_MainMenu_Escape_CBU_Quit_K2Node_ComponentBoundEvent_15_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Escape_C", "BndEvt__WBP_MainMenu_Escape_CBU_Quit_K2Node_ComponentBoundEvent_15_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_MainMenu_Escape_C_BndEvt__WBP_MainMenu_Escape_CBU_Quit_K2Node_ComponentBoundEvent_15_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Escape.WBP_MainMenu_Escape_C.BndEvt__WBP_MainMenu_Escape_CBU_Logout_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Escape_C::BndEvt__WBP_MainMenu_Escape_CBU_Logout_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Escape_C", "BndEvt__WBP_MainMenu_Escape_CBU_Logout_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_MainMenu_Escape_C_BndEvt__WBP_MainMenu_Escape_CBU_Logout_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Escape.WBP_MainMenu_Escape_C.BndEvt__WBP_MainMenu_Escape_CBU_Redemptions_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Escape_C::BndEvt__WBP_MainMenu_Escape_CBU_Redemptions_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Escape_C", "BndEvt__WBP_MainMenu_Escape_CBU_Redemptions_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_MainMenu_Escape_C_BndEvt__WBP_MainMenu_Escape_CBU_Redemptions_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Escape.WBP_MainMenu_Escape_C.ExecuteUbergraph_WBP_MainMenu_Escape
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_GuidebookCategory                             (NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           CallFunc_GetLocalPlayerState_PlayerState                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_UI_PersistenceComponent_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             CallFunc_GetLocalCharacter_PlayerCharacter                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInAnyDeathState_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_MakeLiteralString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class UGlobalAudioSubsystem*       CallFunc_GetEngineSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGlobalAudioSubsystem*       CallFunc_GetEngineSubsystem_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULocalPlayer*                CallFunc_GetLocalPlayerFromController_ReturnValue                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_Popup_QuitGame_C*       CallFunc_CreateWidgetInstanceFromLayer_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ULocalPlayer*                CallFunc_GetLocalPlayerFromController_ReturnValue_1              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_PlayerMap_Screen_C*     CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_1             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue_2                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ULocalPlayer*                CallFunc_GetLocalPlayerFromController_ReturnValue_2              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_GuideBook_Screen_C*     CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_2             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue_3                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue_4                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ULocalPlayer*                CallFunc_GetLocalPlayerFromController_ReturnValue_3              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ULocalPlayer*                CallFunc_GetLocalPlayerFromController_ReturnValue_4              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_GuideBook_Screen_C*     CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_3             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_InventoryScreen_C*      CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_4             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXLocalPlayer*             CallFunc_GetOwningLocalPlayer_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_SocialScreen_C*         CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_5             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXLocalPlayer*             CallFunc_GetOwningLocalPlayer_ReturnValue_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_Options_C*              CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_6             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_10                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_9                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_8                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_7                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_6                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_5                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_4                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_3                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXGameInstance*            K2Node_DynamicCast_AsNWXGame_Instance                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOnConsolePlatform_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue_5                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue_6                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      K2Node_DynamicCast_AsBP_Player_Controller                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXLocalPlayer*             CallFunc_GetOwningLocalPlayer_ReturnValue_2                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_Redemption_Screen_C*    CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_7             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Escape_C::ExecuteUbergraph_WBP_MainMenu_Escape(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FGameplayTag& K2Node_CustomEvent_GuidebookCategory, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState, class UBP_UI_PersistenceComponent_C* CallFunc_GetComponentByClass_ReturnValue, class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter, bool CallFunc_IsInAnyDeathState_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_MakeLiteralString_ReturnValue, class UGlobalAudioSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, class UGlobalAudioSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue, class UWBP_Popup_QuitGame_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue_1, class UWBP_PlayerMap_Screen_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_1, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_2, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue_2, bool Temp_bool_Variable, class UWBP_GuideBook_Screen_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_3, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_4, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue_3, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue_4, class UWBP_GuideBook_Screen_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_3, class UWBP_InventoryScreen_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_4, double Temp_real_Variable, class UNWXLocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, class UWBP_SocialScreen_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_5, double Temp_real_Variable_1, class UNWXLocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue_1, class UWBP_Options_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_6, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_10, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_9, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_8, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_7, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_6, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_5, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_4, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_3, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UNWXGameInstance* K2Node_DynamicCast_AsNWXGame_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsOnConsolePlatform_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_5, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_6, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, bool Temp_bool_Variable_1, class UNWXLocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue_2, class UWBP_Redemption_Screen_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_7, double K2Node_Select_Default_1, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Escape_C", "ExecuteUbergraph_WBP_MainMenu_Escape");

	Params::UWBP_MainMenu_Escape_C_ExecuteUbergraph_WBP_MainMenu_Escape_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_GuidebookCategory = K2Node_CustomEvent_GuidebookCategory;
	Parms.CallFunc_GetLocalPlayerState_PlayerState = CallFunc_GetLocalPlayerState_PlayerState;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetLocalCharacter_PlayerCharacter = CallFunc_GetLocalCharacter_PlayerCharacter;
	Parms.CallFunc_IsInAnyDeathState_ReturnValue = CallFunc_IsInAnyDeathState_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_MakeLiteralString_ReturnValue = CallFunc_MakeLiteralString_ReturnValue;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_1 = CallFunc_GetEngineSubsystem_ReturnValue_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetLocalPlayerFromController_ReturnValue = CallFunc_GetLocalPlayerFromController_ReturnValue;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue_1 = CallFunc_GetOwningPlayerController_ReturnValue_1;
	Parms.CallFunc_GetLocalPlayerFromController_ReturnValue_1 = CallFunc_GetLocalPlayerFromController_ReturnValue_1;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_1 = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue_2 = CallFunc_GetOwningPlayerController_ReturnValue_2;
	Parms.CallFunc_GetLocalPlayerFromController_ReturnValue_2 = CallFunc_GetLocalPlayerFromController_ReturnValue_2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_2 = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue_3 = CallFunc_GetOwningPlayerController_ReturnValue_3;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue_4 = CallFunc_GetOwningPlayerController_ReturnValue_4;
	Parms.CallFunc_GetLocalPlayerFromController_ReturnValue_3 = CallFunc_GetLocalPlayerFromController_ReturnValue_3;
	Parms.CallFunc_GetLocalPlayerFromController_ReturnValue_4 = CallFunc_GetLocalPlayerFromController_ReturnValue_4;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_3 = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_3;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_4 = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_4;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.CallFunc_GetOwningLocalPlayer_ReturnValue = CallFunc_GetOwningLocalPlayer_ReturnValue;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_5 = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_5;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.CallFunc_GetOwningLocalPlayer_ReturnValue_1 = CallFunc_GetOwningLocalPlayer_ReturnValue_1;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_6 = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_6;
	Parms.K2Node_ComponentBoundEvent_Button_10 = K2Node_ComponentBoundEvent_Button_10;
	Parms.K2Node_ComponentBoundEvent_Button_9 = K2Node_ComponentBoundEvent_Button_9;
	Parms.K2Node_ComponentBoundEvent_Button_8 = K2Node_ComponentBoundEvent_Button_8;
	Parms.K2Node_ComponentBoundEvent_Button_7 = K2Node_ComponentBoundEvent_Button_7;
	Parms.K2Node_ComponentBoundEvent_Button_6 = K2Node_ComponentBoundEvent_Button_6;
	Parms.K2Node_ComponentBoundEvent_Button_5 = K2Node_ComponentBoundEvent_Button_5;
	Parms.K2Node_ComponentBoundEvent_Button_4 = K2Node_ComponentBoundEvent_Button_4;
	Parms.K2Node_ComponentBoundEvent_Button_3 = K2Node_ComponentBoundEvent_Button_3;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXGame_Instance = K2Node_DynamicCast_AsNWXGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsOnConsolePlatform_ReturnValue = CallFunc_IsOnConsolePlatform_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue_5 = CallFunc_GetOwningPlayerController_ReturnValue_5;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue_6 = CallFunc_GetOwningPlayerController_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsBP_Player_Controller = K2Node_DynamicCast_AsBP_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetOwningLocalPlayer_ReturnValue_2 = CallFunc_GetOwningLocalPlayer_ReturnValue_2;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_7 = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_7;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_SetRenderOpacity_InOpacity_ImplicitCast = CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


