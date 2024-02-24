#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CC_EyePresetOptionEntry.WBP_CC_EyePresetOptionEntry_C
// (None)

class UClass* UWBP_CC_EyePresetOptionEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CC_EyePresetOptionEntry_C");

	return Clss;
}


// WBP_CC_EyePresetOptionEntry_C WBP_CC_EyePresetOptionEntry.Default__WBP_CC_EyePresetOptionEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CC_EyePresetOptionEntry_C* UWBP_CC_EyePresetOptionEntry_C::GetDefaultObj()
{
	static class UWBP_CC_EyePresetOptionEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CC_EyePresetOptionEntry_C*>(UWBP_CC_EyePresetOptionEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CC_EyePresetOptionEntry.WBP_CC_EyePresetOptionEntry_C.UpdateSelectedCosmetics
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_EyePresetOptionEntry_C::UpdateSelectedCosmetics(bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, float Temp_real_Variable, float Temp_real_Variable_1, enum class ESlateVisibility K2Node_Select_Default, float K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_EyePresetOptionEntry_C", "UpdateSelectedCosmetics");

	Params::UWBP_CC_EyePresetOptionEntry_C_UpdateSelectedCosmetics_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_EyePresetOptionEntry.WBP_CC_EyePresetOptionEntry_C.UpdateSelectedState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSelected                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_EyePresetOptionEntry_C::UpdateSelectedState(bool IsSelected, bool CallFunc_NotEqual_BoolBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_EyePresetOptionEntry_C", "UpdateSelectedState");

	Params::UWBP_CC_EyePresetOptionEntry_C_UpdateSelectedState_Params Parms{};

	Parms.IsSelected = IsSelected;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_EyePresetOptionEntry.WBP_CC_EyePresetOptionEntry_C.OnInputMethodChanged
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        CurrentInputType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_EyePresetOptionEntry_C::OnInputMethodChanged(enum class ECommonInputType CurrentInputType, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_EyePresetOptionEntry_C", "OnInputMethodChanged");

	Params::UWBP_CC_EyePresetOptionEntry_C_OnInputMethodChanged_Params Parms{};

	Parms.CurrentInputType = CurrentInputType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_EyePresetOptionEntry.WBP_CC_EyePresetOptionEntry_C.Initialize
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        NewLocalVar                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetOwningPlayerInputType_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_EyePresetOptionEntry_C::Initialize(enum class ECommonInputType NewLocalVar, enum class ECommonInputType CallFunc_GetOwningPlayerInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_EyePresetOptionEntry_C", "Initialize");

	Params::UWBP_CC_EyePresetOptionEntry_C_Initialize_Params Parms{};

	Parms.NewLocalVar = NewLocalVar;
	Parms.CallFunc_GetOwningPlayerInputType_ReturnValue = CallFunc_GetOwningPlayerInputType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_EyePresetOptionEntry.WBP_CC_EyePresetOptionEntry_C.InitializeDesignerPreview
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValidRowHandle_IsValid                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_EyePresetOptionEntry_C::InitializeDesignerPreview(bool CallFunc_IsValidRowHandle_IsValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_EyePresetOptionEntry_C", "InitializeDesignerPreview");

	Params::UWBP_CC_EyePresetOptionEntry_C_InitializeDesignerPreview_Params Parms{};

	Parms.CallFunc_IsValidRowHandle_IsValid = CallFunc_IsValidRowHandle_IsValid;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_EyePresetOptionEntry.WBP_CC_EyePresetOptionEntry_C.BP_GetDesiredFocusTarget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_CC_EyePresetOptionEntry_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_EyePresetOptionEntry_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_CC_EyePresetOptionEntry_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_CC_EyePresetOptionEntry.WBP_CC_EyePresetOptionEntry_C.Refresh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPresetEyeSettings          CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesDataTableRowExist_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_EyePresetOptionEntry_C::Refresh(const struct FPresetEyeSettings& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_DoesDataTableRowExist_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_EyePresetOptionEntry_C", "Refresh");

	Params::UWBP_CC_EyePresetOptionEntry_C_Refresh_Params Parms{};

	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_DoesDataTableRowExist_ReturnValue = CallFunc_DoesDataTableRowExist_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_EyePresetOptionEntry.WBP_CC_EyePresetOptionEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_CC_EyePresetOptionEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_EyePresetOptionEntry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_EyePresetOptionEntry.WBP_CC_EyePresetOptionEntry_C.SimulateClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CC_EyePresetOptionEntry_C::SimulateClick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_EyePresetOptionEntry_C", "SimulateClick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_EyePresetOptionEntry.WBP_CC_EyePresetOptionEntry_C.BndEvt__WBP_CC_EyePresetOptionEntry_CBU_Button_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_EyePresetOptionEntry_C::BndEvt__WBP_CC_EyePresetOptionEntry_CBU_Button_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_EyePresetOptionEntry_C", "BndEvt__WBP_CC_EyePresetOptionEntry_CBU_Button_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_CC_EyePresetOptionEntry_C_BndEvt__WBP_CC_EyePresetOptionEntry_CBU_Button_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_EyePresetOptionEntry.WBP_CC_EyePresetOptionEntry_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_CC_EyePresetOptionEntry_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_EyePresetOptionEntry_C", "OnAddedToFocusPath");

	Params::UWBP_CC_EyePresetOptionEntry_C_OnAddedToFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_EyePresetOptionEntry.WBP_CC_EyePresetOptionEntry_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_CC_EyePresetOptionEntry_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_EyePresetOptionEntry_C", "OnRemovedFromFocusPath");

	Params::UWBP_CC_EyePresetOptionEntry_C_OnRemovedFromFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_EyePresetOptionEntry.WBP_CC_EyePresetOptionEntry_C.ExecuteUbergraph_WBP_CC_EyePresetOptionEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_SelectedLeftEventTag_ReturnValue                        (NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FFocusEvent                 K2Node_Event_InFocusEvent_1                                      (NoDestructor)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (NoDestructor)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_EyePresetOptionEntry_C::ExecuteUbergraph_WBP_CC_EyePresetOptionEntry(int32 EntryPoint, const struct FGameplayTag& CallFunc_SelectedLeftEventTag_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, const struct FFocusEvent& K2Node_Event_InFocusEvent, bool CallFunc_IsUsingGamepad_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_EyePresetOptionEntry_C", "ExecuteUbergraph_WBP_CC_EyePresetOptionEntry");

	Params::UWBP_CC_EyePresetOptionEntry_C_ExecuteUbergraph_WBP_CC_EyePresetOptionEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_SelectedLeftEventTag_ReturnValue = CallFunc_SelectedLeftEventTag_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_Event_InFocusEvent_1 = K2Node_Event_InFocusEvent_1;
	Parms.K2Node_Event_InFocusEvent = K2Node_Event_InFocusEvent;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.CallFunc_IsUsingGamepad_ReturnValue_1 = CallFunc_IsUsingGamepad_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_EyePresetOptionEntry.WBP_CC_EyePresetOptionEntry_C.AppearanceSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         Appearance_Row                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              GridIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_EyePresetOptionEntry_C::AppearanceSelected__DelegateSignature(const struct FDataTableRowHandle& Appearance_Row, int32 GridIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_EyePresetOptionEntry_C", "AppearanceSelected__DelegateSignature");

	Params::UWBP_CC_EyePresetOptionEntry_C_AppearanceSelected__DelegateSignature_Params Parms{};

	Parms.Appearance_Row = Appearance_Row;
	Parms.GridIndex = GridIndex;

	UObject::ProcessEvent(Func, &Parms);

}

}


