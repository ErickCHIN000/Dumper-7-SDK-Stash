#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Options_Audio.WBP_Options_Audio_C
// (None)

class UClass* UWBP_Options_Audio_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Options_Audio_C");

	return Clss;
}


// WBP_Options_Audio_C WBP_Options_Audio.Default__WBP_Options_Audio_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Options_Audio_C* UWBP_Options_Audio_C::GetDefaultObj()
{
	static class UWBP_Options_Audio_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Options_Audio_C*>(UWBP_Options_Audio_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Options_Audio.WBP_Options_Audio_C.CREATEDELEGATE_PROXYFUNCTION_7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_OnVoiceVolumeUpdated_SliderValue_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Audio_C::CREATEDELEGATE_PROXYFUNCTION_7(float NewValue, double CallFunc_OnVoiceVolumeUpdated_SliderValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Audio_C", "CREATEDELEGATE_PROXYFUNCTION_7");

	Params::UWBP_Options_Audio_C_CREATEDELEGATE_PROXYFUNCTION_7_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.CallFunc_OnVoiceVolumeUpdated_SliderValue_ImplicitCast = CallFunc_OnVoiceVolumeUpdated_SliderValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Audio.WBP_Options_Audio_C.CREATEDELEGATE_PROXYFUNCTION_6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_OnMusicVolumeUpdated_SliderValue_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Audio_C::CREATEDELEGATE_PROXYFUNCTION_6(float NewValue, double CallFunc_OnMusicVolumeUpdated_SliderValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Audio_C", "CREATEDELEGATE_PROXYFUNCTION_6");

	Params::UWBP_Options_Audio_C_CREATEDELEGATE_PROXYFUNCTION_6_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.CallFunc_OnMusicVolumeUpdated_SliderValue_ImplicitCast = CallFunc_OnMusicVolumeUpdated_SliderValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Audio.WBP_Options_Audio_C.CREATEDELEGATE_PROXYFUNCTION_5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_OnSFXVolumeUpdated_SliderValue_ImplicitCast             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Audio_C::CREATEDELEGATE_PROXYFUNCTION_5(float NewValue, double CallFunc_OnSFXVolumeUpdated_SliderValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Audio_C", "CREATEDELEGATE_PROXYFUNCTION_5");

	Params::UWBP_Options_Audio_C_CREATEDELEGATE_PROXYFUNCTION_5_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.CallFunc_OnSFXVolumeUpdated_SliderValue_ImplicitCast = CallFunc_OnSFXVolumeUpdated_SliderValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Audio.WBP_Options_Audio_C.CREATEDELEGATE_PROXYFUNCTION_4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_OnMasterVolumeUpdated_SliderValue_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Audio_C::CREATEDELEGATE_PROXYFUNCTION_4(float NewValue, double CallFunc_OnMasterVolumeUpdated_SliderValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Audio_C", "CREATEDELEGATE_PROXYFUNCTION_4");

	Params::UWBP_Options_Audio_C_CREATEDELEGATE_PROXYFUNCTION_4_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.CallFunc_OnMasterVolumeUpdated_SliderValue_ImplicitCast = CallFunc_OnMasterVolumeUpdated_SliderValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Audio.WBP_Options_Audio_C.CREATEDELEGATE_PROXYFUNCTION_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_OnVoiceVolumeUpdated_SliderValue_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Audio_C::CREATEDELEGATE_PROXYFUNCTION_3(float NewValue, double CallFunc_OnVoiceVolumeUpdated_SliderValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Audio_C", "CREATEDELEGATE_PROXYFUNCTION_3");

	Params::UWBP_Options_Audio_C_CREATEDELEGATE_PROXYFUNCTION_3_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.CallFunc_OnVoiceVolumeUpdated_SliderValue_ImplicitCast = CallFunc_OnVoiceVolumeUpdated_SliderValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Audio.WBP_Options_Audio_C.CREATEDELEGATE_PROXYFUNCTION_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_OnMusicVolumeUpdated_SliderValue_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Audio_C::CREATEDELEGATE_PROXYFUNCTION_2(float NewValue, double CallFunc_OnMusicVolumeUpdated_SliderValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Audio_C", "CREATEDELEGATE_PROXYFUNCTION_2");

	Params::UWBP_Options_Audio_C_CREATEDELEGATE_PROXYFUNCTION_2_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.CallFunc_OnMusicVolumeUpdated_SliderValue_ImplicitCast = CallFunc_OnMusicVolumeUpdated_SliderValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Audio.WBP_Options_Audio_C.CREATEDELEGATE_PROXYFUNCTION_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_OnSFXVolumeUpdated_SliderValue_ImplicitCast             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Audio_C::CREATEDELEGATE_PROXYFUNCTION_1(float NewValue, double CallFunc_OnSFXVolumeUpdated_SliderValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Audio_C", "CREATEDELEGATE_PROXYFUNCTION_1");

	Params::UWBP_Options_Audio_C_CREATEDELEGATE_PROXYFUNCTION_1_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.CallFunc_OnSFXVolumeUpdated_SliderValue_ImplicitCast = CallFunc_OnSFXVolumeUpdated_SliderValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Audio.WBP_Options_Audio_C.CREATEDELEGATE_PROXYFUNCTION_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_OnMasterVolumeUpdated_SliderValue_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Audio_C::CREATEDELEGATE_PROXYFUNCTION_0(float NewValue, double CallFunc_OnMasterVolumeUpdated_SliderValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Audio_C", "CREATEDELEGATE_PROXYFUNCTION_0");

	Params::UWBP_Options_Audio_C_CREATEDELEGATE_PROXYFUNCTION_0_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.CallFunc_OnMasterVolumeUpdated_SliderValue_ImplicitCast = CallFunc_OnMasterVolumeUpdated_SliderValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Audio.WBP_Options_Audio_C.PrepareOptionsArray
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UNWXUserWidget*>      K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)

void UWBP_Options_Audio_C::PrepareOptionsArray(TArray<class UNWXUserWidget*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Audio_C", "PrepareOptionsArray");

	Params::UWBP_Options_Audio_C_PrepareOptionsArray_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Audio.WBP_Options_Audio_C.DoCustomNavigation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     FocusedWidget                                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue_1                            (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasFocusedDescendants_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXUserWidget*              K2Node_DynamicCast_AsNWXUser_Widget                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetDefaultFocusWidget_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasFocusedDescendants_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXUserWidget*              K2Node_DynamicCast_AsNWXUser_Widget_1                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsEnabled_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetDefaultFocusWidget_ReturnValue_1                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_Options_Audio_C::DoCustomNavigation(enum class EUINavigation Navigation, class UWidget* FocusedWidget, int32 Temp_int_Array_Index_Variable, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UWidget* CallFunc_Array_Get_Item, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_1, class UWidget* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_HasFocusedDescendants_ReturnValue, class UNWXUserWidget* K2Node_DynamicCast_AsNWXUser_Widget, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetIsEnabled_ReturnValue, class UWidget* CallFunc_GetDefaultFocusWidget_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_HasFocusedDescendants_ReturnValue_1, class UNWXUserWidget* K2Node_DynamicCast_AsNWXUser_Widget_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetIsEnabled_ReturnValue_1, class UWidget* CallFunc_GetDefaultFocusWidget_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Audio_C", "DoCustomNavigation");

	Params::UWBP_Options_Audio_C_DoCustomNavigation_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.FocusedWidget = FocusedWidget;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetAllChildren_ReturnValue_1 = CallFunc_GetAllChildren_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_HasFocusedDescendants_ReturnValue = CallFunc_HasFocusedDescendants_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXUser_Widget = K2Node_DynamicCast_AsNWXUser_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.CallFunc_GetDefaultFocusWidget_ReturnValue = CallFunc_GetDefaultFocusWidget_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_HasFocusedDescendants_ReturnValue_1 = CallFunc_HasFocusedDescendants_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsNWXUser_Widget_1 = K2Node_DynamicCast_AsNWXUser_Widget_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetIsEnabled_ReturnValue_1 = CallFunc_GetIsEnabled_ReturnValue_1;
	Parms.CallFunc_GetDefaultFocusWidget_ReturnValue_1 = CallFunc_GetDefaultFocusWidget_ReturnValue_1;
	Parms.CallFunc_IsVisible_ReturnValue_1 = CallFunc_IsVisible_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Options_Audio.WBP_Options_Audio_C.OnMonoMixChanged
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Audio_C::OnMonoMixChanged(bool NewValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Audio_C", "OnMonoMixChanged");

	Params::UWBP_Options_Audio_C_OnMonoMixChanged_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Audio.WBP_Options_Audio_C.UpdateMicInputLevel
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewVolDecibels                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGlobalAudioSubsystem*       CallFunc_GetEngineSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInputMicLevelDecibels_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGlobalAudioSubsystem*       CallFunc_GetEngineSubsystem_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVUMeterDisplayColor_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetVUMeterDisplayColor_ValueDecibels_ImplicitCast       (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_NewVolDecibels_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Audio_C::UpdateMicInputLevel(double NewVolDecibels, class UGlobalAudioSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, float CallFunc_GetInputMicLevelDecibels_ReturnValue, class UGlobalAudioSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, const struct FLinearColor& CallFunc_GetVUMeterDisplayColor_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, float CallFunc_GetVUMeterDisplayColor_ValueDecibels_ImplicitCast, double K2Node_VariableSet_NewVolDecibels_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Audio_C", "UpdateMicInputLevel");

	Params::UWBP_Options_Audio_C_UpdateMicInputLevel_Params Parms{};

	Parms.NewVolDecibels = NewVolDecibels;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.CallFunc_GetInputMicLevelDecibels_ReturnValue = CallFunc_GetInputMicLevelDecibels_ReturnValue;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_1 = CallFunc_GetEngineSubsystem_ReturnValue_1;
	Parms.CallFunc_GetVUMeterDisplayColor_ReturnValue = CallFunc_GetVUMeterDisplayColor_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_GetVUMeterDisplayColor_ValueDecibels_ImplicitCast = CallFunc_GetVUMeterDisplayColor_ValueDecibels_ImplicitCast;
	Parms.K2Node_VariableSet_NewVolDecibels_ImplicitCast = K2Node_VariableSet_NewVolDecibels_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Audio.WBP_Options_Audio_C.OnMicVolumeChanged
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Audio_C::OnMicVolumeChanged(float NewValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Audio_C", "OnMicVolumeChanged");

	Params::UWBP_Options_Audio_C_OnMicVolumeChanged_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Audio.WBP_Options_Audio_C.OnVoiceChatVolumeChanged
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Audio_C::OnVoiceChatVolumeChanged(float NewValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Audio_C", "OnVoiceChatVolumeChanged");

	Params::UWBP_Options_Audio_C_OnVoiceChatVolumeChanged_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Audio.WBP_Options_Audio_C.OnValueChangedVoipMicTest
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGlobalAudioSubsystem*       CallFunc_GetEngineSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetConsoleVariableIntValue_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Audio_C::OnValueChangedVoipMicTest(bool NewValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UGlobalAudioSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, int32 CallFunc_GetConsoleVariableIntValue_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Audio_C", "OnValueChangedVoipMicTest");

	Params::UWBP_Options_Audio_C_OnValueChangedVoipMicTest_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.CallFunc_GetConsoleVariableIntValue_ReturnValue = CallFunc_GetConsoleVariableIntValue_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Audio.WBP_Options_Audio_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetDefaultFocusWidget_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_Options_Audio_C::BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetDefaultFocusWidget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Audio_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_Options_Audio_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_GetDefaultFocusWidget_ReturnValue = CallFunc_GetDefaultFocusWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Options_Audio.WBP_Options_Audio_C.OnValueChangedVoipEffect
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVoiceChatVoiceEffectModeTemp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVoiceChatVoiceEffectModeTemp_byte_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVoiceChatVoiceEffectModeTemp_byte_Variable_2                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVoiceChatVoiceEffectModeTemp_byte_Variable_3                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVoiceChatVoiceEffectModeTemp_byte_Variable_4                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVoiceChatVoiceEffectModeTemp_byte_Variable_5                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVoiceChatVoiceEffectModeTemp_byte_Variable_6                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVoiceChatVoiceEffectModeTemp_byte_Variable_7                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVoiceChatVoiceEffectModeK2Node_Select_Default                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Audio_C::OnValueChangedVoipEffect(int32 NewValue, const class FString& Option, int32 Temp_int_Variable, enum class EVoiceChatVoiceEffectMode Temp_byte_Variable, enum class EVoiceChatVoiceEffectMode Temp_byte_Variable_1, enum class EVoiceChatVoiceEffectMode Temp_byte_Variable_2, enum class EVoiceChatVoiceEffectMode Temp_byte_Variable_3, enum class EVoiceChatVoiceEffectMode Temp_byte_Variable_4, enum class EVoiceChatVoiceEffectMode Temp_byte_Variable_5, enum class EVoiceChatVoiceEffectMode Temp_byte_Variable_6, enum class EVoiceChatVoiceEffectMode Temp_byte_Variable_7, enum class EVoiceChatVoiceEffectMode K2Node_Select_Default, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Audio_C", "OnValueChangedVoipEffect");

	Params::UWBP_Options_Audio_C_OnValueChangedVoipEffect_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.Option = Option;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Audio.WBP_Options_Audio_C.HandleVoipControlsEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFeatureFlagStatus      CallFunc_FeatureFlagBranch_Result                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAudioVoiceChatEnabled_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVoiceChatMode          CallFunc_GetAudioVoiceChatListenMode_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Audio_C::HandleVoipControlsEnable(enum class EFeatureFlagStatus CallFunc_FeatureFlagBranch_Result, bool K2Node_SwitchEnum_CmpSuccess, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_1, bool CallFunc_GetAudioVoiceChatEnabled_ReturnValue, enum class EVoiceChatMode CallFunc_GetAudioVoiceChatListenMode_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Audio_C", "HandleVoipControlsEnable");

	Params::UWBP_Options_Audio_C_HandleVoipControlsEnable_Params Parms{};

	Parms.CallFunc_FeatureFlagBranch_Result = CallFunc_FeatureFlagBranch_Result;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_1 = CallFunc_GetNWXGameUserSettings_ReturnValue_1;
	Parms.CallFunc_GetAudioVoiceChatEnabled_ReturnValue = CallFunc_GetAudioVoiceChatEnabled_ReturnValue;
	Parms.CallFunc_GetAudioVoiceChatListenMode_ReturnValue = CallFunc_GetAudioVoiceChatListenMode_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Audio.WBP_Options_Audio_C.OnValueChangedVoipMicMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVoiceChatMicMode       Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVoiceChatMicMode       Temp_byte_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVoiceChatMicMode       K2Node_Select_Default                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Audio_C::OnValueChangedVoipMicMode(int32 NewValue, const class FString& Option, int32 Temp_int_Variable, enum class EVoiceChatMicMode Temp_byte_Variable, enum class EVoiceChatMicMode Temp_byte_Variable_1, enum class EVoiceChatMicMode K2Node_Select_Default, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Audio_C", "OnValueChangedVoipMicMode");

	Params::UWBP_Options_Audio_C_OnValueChangedVoipMicMode_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.Option = Option;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Audio.WBP_Options_Audio_C.OnValueChangedVoipSendMode
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVoiceChatMode          Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVoiceChatMode          Temp_byte_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVoiceChatMode          K2Node_Select_Default                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Audio_C::OnValueChangedVoipSendMode(int32 NewValue, const class FString& Option, int32 Temp_int_Variable, enum class EVoiceChatMode Temp_byte_Variable, enum class EVoiceChatMode Temp_byte_Variable_1, enum class EVoiceChatMode K2Node_Select_Default, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Audio_C", "OnValueChangedVoipSendMode");

	Params::UWBP_Options_Audio_C_OnValueChangedVoipSendMode_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.Option = Option;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Audio.WBP_Options_Audio_C.OnValueChangedVoipMainMode
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVoiceChatMode          Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVoiceChatMode          Temp_byte_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVoiceChatMode          K2Node_Select_Default                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Audio_C::OnValueChangedVoipMainMode(int32 NewValue, const class FString& Option, int32 Temp_int_Variable, enum class EVoiceChatMode Temp_byte_Variable, enum class EVoiceChatMode Temp_byte_Variable_1, enum class EVoiceChatMode K2Node_Select_Default, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Audio_C", "OnValueChangedVoipMainMode");

	Params::UWBP_Options_Audio_C_OnValueChangedVoipMainMode_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.Option = Option;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Audio.WBP_Options_Audio_C.InitalizeVoipSettings
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                VoipModes                                                        (Edit, BlueprintVisible)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAudioVoiceChatMicVolume_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAudioVoiceChatVolume_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_2                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EVoiceChatVoiceEffectModeCallFunc_GetAudioVoiceChatVoiceEffect_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_3                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_4                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAudioVoiceChatEnabled_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVoiceChatMicMode       CallFunc_GetAudioVoiceChatMicMode_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                K2Node_MakeArray_Array_2                                         (ConstParm, ReferenceParm)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_5                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_6                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EVoiceChatMode          CallFunc_GetAudioVoiceChatSendMode_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVoiceChatMode          CallFunc_GetAudioVoiceChatListenMode_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Audio_C::InitalizeVoipSettings(const TArray<class FText>& VoipModes, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_1, float CallFunc_GetAudioVoiceChatMicVolume_ReturnValue, float CallFunc_GetAudioVoiceChatVolume_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_2, enum class EVoiceChatVoiceEffectMode CallFunc_GetAudioVoiceChatVoiceEffect_ReturnValue, TArray<class FText>& K2Node_MakeArray_Array, int32 CallFunc_Conv_ByteToInt_ReturnValue, TArray<class FText>& K2Node_MakeArray_Array_1, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_3, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_4, bool CallFunc_GetAudioVoiceChatEnabled_ReturnValue, enum class EVoiceChatMicMode CallFunc_GetAudioVoiceChatMicMode_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, TArray<class FText>& K2Node_MakeArray_Array_2, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_5, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_6, enum class EVoiceChatMode CallFunc_GetAudioVoiceChatSendMode_ReturnValue, enum class EVoiceChatMode CallFunc_GetAudioVoiceChatListenMode_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_2, int32 CallFunc_Conv_ByteToInt_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Audio_C", "InitalizeVoipSettings");

	Params::UWBP_Options_Audio_C_InitalizeVoipSettings_Params Parms{};

	Parms.VoipModes = VoipModes;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_1 = CallFunc_GetNWXGameUserSettings_ReturnValue_1;
	Parms.CallFunc_GetAudioVoiceChatMicVolume_ReturnValue = CallFunc_GetAudioVoiceChatMicVolume_ReturnValue;
	Parms.CallFunc_GetAudioVoiceChatVolume_ReturnValue = CallFunc_GetAudioVoiceChatVolume_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_2 = CallFunc_GetNWXGameUserSettings_ReturnValue_2;
	Parms.CallFunc_GetAudioVoiceChatVoiceEffect_ReturnValue = CallFunc_GetAudioVoiceChatVoiceEffect_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_3 = CallFunc_GetNWXGameUserSettings_ReturnValue_3;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_4 = CallFunc_GetNWXGameUserSettings_ReturnValue_4;
	Parms.CallFunc_GetAudioVoiceChatEnabled_ReturnValue = CallFunc_GetAudioVoiceChatEnabled_ReturnValue;
	Parms.CallFunc_GetAudioVoiceChatMicMode_ReturnValue = CallFunc_GetAudioVoiceChatMicMode_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_1 = CallFunc_Conv_ByteToInt_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_5 = CallFunc_GetNWXGameUserSettings_ReturnValue_5;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_6 = CallFunc_GetNWXGameUserSettings_ReturnValue_6;
	Parms.CallFunc_GetAudioVoiceChatSendMode_ReturnValue = CallFunc_GetAudioVoiceChatSendMode_ReturnValue;
	Parms.CallFunc_GetAudioVoiceChatListenMode_ReturnValue = CallFunc_GetAudioVoiceChatListenMode_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_2 = CallFunc_Conv_ByteToInt_ReturnValue_2;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_3 = CallFunc_Conv_ByteToInt_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Audio.WBP_Options_Audio_C.HandleVisibility
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFeatureFlagStatus      CallFunc_FeatureFlagBranch_Result                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFeatureFlagStatus      CallFunc_FeatureFlagBranch_Result_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFeatureFlagStatus      CallFunc_FeatureFlagBranch_Result_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Audio_C::HandleVisibility(enum class EFeatureFlagStatus CallFunc_FeatureFlagBranch_Result, bool K2Node_SwitchEnum_CmpSuccess, enum class EFeatureFlagStatus CallFunc_FeatureFlagBranch_Result_1, bool K2Node_SwitchEnum_CmpSuccess_1, enum class EFeatureFlagStatus CallFunc_FeatureFlagBranch_Result_2, bool K2Node_SwitchEnum_CmpSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Audio_C", "HandleVisibility");

	Params::UWBP_Options_Audio_C_HandleVisibility_Params Parms{};

	Parms.CallFunc_FeatureFlagBranch_Result = CallFunc_FeatureFlagBranch_Result;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_FeatureFlagBranch_Result_1 = CallFunc_FeatureFlagBranch_Result_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_FeatureFlagBranch_Result_2 = CallFunc_FeatureFlagBranch_Result_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Audio.WBP_Options_Audio_C.OnEnableVoiceChatUpdated
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Audio_C::OnEnableVoiceChatUpdated(bool NewValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Audio_C", "OnEnableVoiceChatUpdated");

	Params::UWBP_Options_Audio_C_OnEnableVoiceChatUpdated_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Audio.WBP_Options_Audio_C.OnEnableTextToSpeechVoicesUpdated
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Audio_C::OnEnableTextToSpeechVoicesUpdated(bool NewValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Audio_C", "OnEnableTextToSpeechVoicesUpdated");

	Params::UWBP_Options_Audio_C_OnEnableTextToSpeechVoicesUpdated_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Audio.WBP_Options_Audio_C.OnReducedEmotesUpdated
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Audio_C::OnReducedEmotesUpdated(bool NewValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Audio_C", "OnReducedEmotesUpdated");

	Params::UWBP_Options_Audio_C_OnReducedEmotesUpdated_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Audio.WBP_Options_Audio_C.OnEmoteVolumeUpdated
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Audio_C::OnEmoteVolumeUpdated(float NewValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Audio_C", "OnEmoteVolumeUpdated");

	Params::UWBP_Options_Audio_C_OnEmoteVolumeUpdated_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Audio.WBP_Options_Audio_C.InitializeSettingValues
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAudioMonoMixEnabled_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAudioTextToSpeechVoicesEnabled_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_2                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAudioReducedPlayerBreathEmotes_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_3                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAudioPlayerVoiceEmoteLevel_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_4                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetHeadphonePanningEnabled_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_5                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAudioVolumeVoice_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_6                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_7                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAudioVolumeMusic_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAudioVolumeSFX_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_8                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAudioVolumeMaster_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Audio_C::InitializeSettingValues(class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, bool CallFunc_GetAudioMonoMixEnabled_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_1, bool CallFunc_GetAudioTextToSpeechVoicesEnabled_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_2, bool CallFunc_GetAudioReducedPlayerBreathEmotes_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_3, float CallFunc_GetAudioPlayerVoiceEmoteLevel_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_4, bool CallFunc_GetHeadphonePanningEnabled_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_5, float CallFunc_GetAudioVolumeVoice_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_6, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_7, float CallFunc_GetAudioVolumeMusic_ReturnValue, float CallFunc_GetAudioVolumeSFX_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_8, float CallFunc_GetAudioVolumeMaster_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Audio_C", "InitializeSettingValues");

	Params::UWBP_Options_Audio_C_InitializeSettingValues_Params Parms{};

	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.CallFunc_GetAudioMonoMixEnabled_ReturnValue = CallFunc_GetAudioMonoMixEnabled_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_1 = CallFunc_GetNWXGameUserSettings_ReturnValue_1;
	Parms.CallFunc_GetAudioTextToSpeechVoicesEnabled_ReturnValue = CallFunc_GetAudioTextToSpeechVoicesEnabled_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_2 = CallFunc_GetNWXGameUserSettings_ReturnValue_2;
	Parms.CallFunc_GetAudioReducedPlayerBreathEmotes_ReturnValue = CallFunc_GetAudioReducedPlayerBreathEmotes_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_3 = CallFunc_GetNWXGameUserSettings_ReturnValue_3;
	Parms.CallFunc_GetAudioPlayerVoiceEmoteLevel_ReturnValue = CallFunc_GetAudioPlayerVoiceEmoteLevel_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_4 = CallFunc_GetNWXGameUserSettings_ReturnValue_4;
	Parms.CallFunc_GetHeadphonePanningEnabled_ReturnValue = CallFunc_GetHeadphonePanningEnabled_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_5 = CallFunc_GetNWXGameUserSettings_ReturnValue_5;
	Parms.CallFunc_GetAudioVolumeVoice_ReturnValue = CallFunc_GetAudioVolumeVoice_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_6 = CallFunc_GetNWXGameUserSettings_ReturnValue_6;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_7 = CallFunc_GetNWXGameUserSettings_ReturnValue_7;
	Parms.CallFunc_GetAudioVolumeMusic_ReturnValue = CallFunc_GetAudioVolumeMusic_ReturnValue;
	Parms.CallFunc_GetAudioVolumeSFX_ReturnValue = CallFunc_GetAudioVolumeSFX_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_8 = CallFunc_GetNWXGameUserSettings_ReturnValue_8;
	Parms.CallFunc_GetAudioVolumeMaster_ReturnValue = CallFunc_GetAudioVolumeMaster_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Audio.WBP_Options_Audio_C.OnHeadphoneOptionUpdated
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Audio_C::OnHeadphoneOptionUpdated(bool IsEnabled, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Audio_C", "OnHeadphoneOptionUpdated");

	Params::UWBP_Options_Audio_C_OnHeadphoneOptionUpdated_Params Parms{};

	Parms.IsEnabled = IsEnabled;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Audio.WBP_Options_Audio_C.OnVoiceVolumeUpdated
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             SliderValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetAudioVolumeVoice_VolumeVoice_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Audio_C::OnVoiceVolumeUpdated(double SliderValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, float CallFunc_SetAudioVolumeVoice_VolumeVoice_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Audio_C", "OnVoiceVolumeUpdated");

	Params::UWBP_Options_Audio_C_OnVoiceVolumeUpdated_Params Parms{};

	Parms.SliderValue = SliderValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.CallFunc_SetAudioVolumeVoice_VolumeVoice_ImplicitCast = CallFunc_SetAudioVolumeVoice_VolumeVoice_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Audio.WBP_Options_Audio_C.OnMusicVolumeUpdated
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             SliderValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetAudioVolumeMusic_VolumeMusic_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Audio_C::OnMusicVolumeUpdated(double SliderValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, float CallFunc_SetAudioVolumeMusic_VolumeMusic_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Audio_C", "OnMusicVolumeUpdated");

	Params::UWBP_Options_Audio_C_OnMusicVolumeUpdated_Params Parms{};

	Parms.SliderValue = SliderValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.CallFunc_SetAudioVolumeMusic_VolumeMusic_ImplicitCast = CallFunc_SetAudioVolumeMusic_VolumeMusic_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Audio.WBP_Options_Audio_C.OnSFXVolumeUpdated
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             SliderValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetAudioVolumeSFX_VolumeSFX_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Audio_C::OnSFXVolumeUpdated(double SliderValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, float CallFunc_SetAudioVolumeSFX_VolumeSFX_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Audio_C", "OnSFXVolumeUpdated");

	Params::UWBP_Options_Audio_C_OnSFXVolumeUpdated_Params Parms{};

	Parms.SliderValue = SliderValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.CallFunc_SetAudioVolumeSFX_VolumeSFX_ImplicitCast = CallFunc_SetAudioVolumeSFX_VolumeSFX_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Audio.WBP_Options_Audio_C.OnMasterVolumeUpdated
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             SliderValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetAudioVolumeMaster_VolumeMaster_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Audio_C::OnMasterVolumeUpdated(double SliderValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, float CallFunc_SetAudioVolumeMaster_VolumeMaster_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Audio_C", "OnMasterVolumeUpdated");

	Params::UWBP_Options_Audio_C_OnMasterVolumeUpdated_Params Parms{};

	Parms.SliderValue = SliderValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.CallFunc_SetAudioVolumeMaster_VolumeMaster_ImplicitCast = CallFunc_SetAudioVolumeMaster_VolumeMaster_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Audio.WBP_Options_Audio_C.RemoveBindings
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_16                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Audio_C::RemoveBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Audio_C", "RemoveBindings");

	Params::UWBP_Options_Audio_C_RemoveBindings_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.K2Node_CreateDelegate_OutputDelegate_15 = K2Node_CreateDelegate_OutputDelegate_15;
	Parms.K2Node_CreateDelegate_OutputDelegate_16 = K2Node_CreateDelegate_OutputDelegate_16;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Audio.WBP_Options_Audio_C.SetupBindings
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_16                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Audio_C::SetupBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Audio_C", "SetupBindings");

	Params::UWBP_Options_Audio_C_SetupBindings_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.K2Node_CreateDelegate_OutputDelegate_15 = K2Node_CreateDelegate_OutputDelegate_15;
	Parms.K2Node_CreateDelegate_OutputDelegate_16 = K2Node_CreateDelegate_OutputDelegate_16;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Audio.WBP_Options_Audio_C.GetDefaultFocusWidget
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetDesiredFocusTarget_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_Options_Audio_C::GetDefaultFocusWidget(class UWidget* CallFunc_GetDesiredFocusTarget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Audio_C", "GetDefaultFocusWidget");

	Params::UWBP_Options_Audio_C_GetDefaultFocusWidget_Params Parms{};

	Parms.CallFunc_GetDesiredFocusTarget_ReturnValue = CallFunc_GetDesiredFocusTarget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Options_Audio.WBP_Options_Audio_C.UpdateAudio
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_UserSettingsComponent_C* CallFunc_GetLocalGameUserSettingsComponent_ReturnValue           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Audio_C::UpdateAudio(class UBP_UserSettingsComponent_C* CallFunc_GetLocalGameUserSettingsComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Audio_C", "UpdateAudio");

	Params::UWBP_Options_Audio_C_UpdateAudio_Params Parms{};

	Parms.CallFunc_GetLocalGameUserSettingsComponent_ReturnValue = CallFunc_GetLocalGameUserSettingsComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Audio.WBP_Options_Audio_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_Options_Audio_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Audio_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Options_Audio.WBP_Options_Audio_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_Options_Audio_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Audio_C", "BP_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Options_Audio.WBP_Options_Audio_C.ExecuteUbergraph_WBP_Options_Audio
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGlobalAudioSubsystem*       CallFunc_GetEngineSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Audio_C::ExecuteUbergraph_WBP_Options_Audio(int32 EntryPoint, class UGlobalAudioSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Audio_C", "ExecuteUbergraph_WBP_Options_Audio");

	Params::UWBP_Options_Audio_C_ExecuteUbergraph_WBP_Options_Audio_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


