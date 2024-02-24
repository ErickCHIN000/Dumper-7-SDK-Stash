#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_cc_sw_MakeupPicker.WBP_cc_sw_MakeupPicker_C
// (None)

class UClass* UWBP_cc_sw_MakeupPicker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_cc_sw_MakeupPicker_C");

	return Clss;
}


// WBP_cc_sw_MakeupPicker_C WBP_cc_sw_MakeupPicker.Default__WBP_cc_sw_MakeupPicker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_cc_sw_MakeupPicker_C* UWBP_cc_sw_MakeupPicker_C::GetDefaultObj()
{
	static class UWBP_cc_sw_MakeupPicker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_cc_sw_MakeupPicker_C*>(UWBP_cc_sw_MakeupPicker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_cc_sw_MakeupPicker.WBP_cc_sw_MakeupPicker_C.SetupBasicFormatting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_cc_sw_MakeupPicker_C::SetupBasicFormatting(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_MakeupPicker_C", "SetupBasicFormatting");

	Params::UWBP_cc_sw_MakeupPicker_C_SetupBasicFormatting_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_cc_sw_MakeupPicker.WBP_cc_sw_MakeupPicker_C.AudioCooldown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_cc_sw_MakeupPicker_C::AudioCooldown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_MakeupPicker_C", "AudioCooldown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_cc_sw_MakeupPicker.WBP_cc_sw_MakeupPicker_C.OnValueChangedSFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Round64_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_Int64Int64_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// class UAkComponent*                CallFunc_SpawnAkComponentAtLocation_ReturnValue                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostAkEvent_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_cc_sw_MakeupPicker_C::OnValueChangedSFX(double Value, bool CallFunc_IsValid_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int64 CallFunc_Round64_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_NotEqual_Int64Int64_ReturnValue, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, class UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_MakeupPicker_C", "OnValueChangedSFX");

	Params::UWBP_cc_sw_MakeupPicker_C_OnValueChangedSFX_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Round64_ReturnValue = CallFunc_Round64_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_NotEqual_Int64Int64_ReturnValue = CallFunc_NotEqual_Int64Int64_ReturnValue;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_SpawnAkComponentAtLocation_ReturnValue = CallFunc_SpawnAkComponentAtLocation_ReturnValue;
	Parms.CallFunc_PostAkEvent_ReturnValue = CallFunc_PostAkEvent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_cc_sw_MakeupPicker.WBP_cc_sw_MakeupPicker_C.SetValues
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         NewColor                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         NewMask                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// double                             NewAlpha                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDataTableRowHandle> CallFunc_GetDataTableRowHandles_RowHandles                       (ReferenceParm)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetValue_InValue_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetValue_InValue_ImplicitCast_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_cc_sw_MakeupPicker_C::SetValues(const struct FDataTableRowHandle& NewColor, const struct FDataTableRowHandle& NewMask, double NewAlpha, TArray<struct FDataTableRowHandle>& CallFunc_GetDataTableRowHandles_RowHandles, int32 CallFunc_Array_Find_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, float CallFunc_SetValue_InValue_ImplicitCast, float CallFunc_SetValue_InValue_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_MakeupPicker_C", "SetValues");

	Params::UWBP_cc_sw_MakeupPicker_C_SetValues_Params Parms{};

	Parms.NewColor = NewColor;
	Parms.NewMask = NewMask;
	Parms.NewAlpha = NewAlpha;
	Parms.CallFunc_GetDataTableRowHandles_RowHandles = CallFunc_GetDataTableRowHandles_RowHandles;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_SetValue_InValue_ImplicitCast = CallFunc_SetValue_InValue_ImplicitCast;
	Parms.CallFunc_SetValue_InValue_ImplicitCast_1 = CallFunc_SetValue_InValue_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_cc_sw_MakeupPicker.WBP_cc_sw_MakeupPicker_C.RefreshData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDataTableRowHandle> CallFunc_GetDataTableRowHandles_RowHandles                       (ReferenceParm)
// struct FDataTableRowHandle         CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesDataTableRowExist_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCustomization_Mask         CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Round_A_ImplicitCast                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_cc_sw_MakeupPicker_C::RefreshData(float CallFunc_GetValue_ReturnValue, int32 CallFunc_Round_ReturnValue, TArray<struct FDataTableRowHandle>& CallFunc_GetDataTableRowHandles_RowHandles, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, bool CallFunc_DoesDataTableRowExist_ReturnValue, const struct FCustomization_Mask& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, double CallFunc_Round_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_MakeupPicker_C", "RefreshData");

	Params::UWBP_cc_sw_MakeupPicker_C_RefreshData_Params Parms{};

	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_GetDataTableRowHandles_RowHandles = CallFunc_GetDataTableRowHandles_RowHandles;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_DoesDataTableRowExist_ReturnValue = CallFunc_DoesDataTableRowExist_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_Round_A_ImplicitCast = CallFunc_Round_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_cc_sw_MakeupPicker.WBP_cc_sw_MakeupPicker_C.RefreshColorID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         Color_ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UWBP_cc_sw_MakeupPicker_C::RefreshColorID(const struct FDataTableRowHandle& Color_ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_MakeupPicker_C", "RefreshColorID");

	Params::UWBP_cc_sw_MakeupPicker_C_RefreshColorID_Params Parms{};

	Parms.Color_ID = Color_ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_cc_sw_MakeupPicker.WBP_cc_sw_MakeupPicker_C.BndEvt__WBP_cc_sw_MakeupPicker_WBP_button_base_2_K2Node_ComponentBoundEvent_6_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_cc_sw_MakeupPicker_C::BndEvt__WBP_cc_sw_MakeupPicker_WBP_button_base_2_K2Node_ComponentBoundEvent_6_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_MakeupPicker_C", "BndEvt__WBP_cc_sw_MakeupPicker_WBP_button_base_2_K2Node_ComponentBoundEvent_6_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_cc_sw_MakeupPicker.WBP_cc_sw_MakeupPicker_C.BndEvt__WBP_cc_sw_MakeupPicker_WBP_button_base_72_K2Node_ComponentBoundEvent_5_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_cc_sw_MakeupPicker_C::BndEvt__WBP_cc_sw_MakeupPicker_WBP_button_base_72_K2Node_ComponentBoundEvent_5_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_MakeupPicker_C", "BndEvt__WBP_cc_sw_MakeupPicker_WBP_button_base_72_K2Node_ComponentBoundEvent_5_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_cc_sw_MakeupPicker.WBP_cc_sw_MakeupPicker_C.BndEvt__WBP_cc_sw_MakeupPicker_Slider_Style_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_cc_sw_MakeupPicker_C::BndEvt__WBP_cc_sw_MakeupPicker_Slider_Style_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_MakeupPicker_C", "BndEvt__WBP_cc_sw_MakeupPicker_Slider_Style_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature");

	Params::UWBP_cc_sw_MakeupPicker_C_BndEvt__WBP_cc_sw_MakeupPicker_Slider_Style_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_cc_sw_MakeupPicker.WBP_cc_sw_MakeupPicker_C.BndEvt__WBP_cc_sw_MakeupPicker_ColorPicker_K2Node_ComponentBoundEvent_1_CC_ColorSwatch_Selected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         ColorID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              GridIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ColorSwatch_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RgbSwatch___Disable_tints                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_cc_sw_MakeupPicker_C::BndEvt__WBP_cc_sw_MakeupPicker_ColorPicker_K2Node_ComponentBoundEvent_1_CC_ColorSwatch_Selected__DelegateSignature(const struct FDataTableRowHandle& ColorID, int32 GridIndex, bool ColorSwatch_, bool RgbSwatch___Disable_tints)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_MakeupPicker_C", "BndEvt__WBP_cc_sw_MakeupPicker_ColorPicker_K2Node_ComponentBoundEvent_1_CC_ColorSwatch_Selected__DelegateSignature");

	Params::UWBP_cc_sw_MakeupPicker_C_BndEvt__WBP_cc_sw_MakeupPicker_ColorPicker_K2Node_ComponentBoundEvent_1_CC_ColorSwatch_Selected__DelegateSignature_Params Parms{};

	Parms.ColorID = ColorID;
	Parms.GridIndex = GridIndex;
	Parms.ColorSwatch_ = ColorSwatch_;
	Parms.RgbSwatch___Disable_tints = RgbSwatch___Disable_tints;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_cc_sw_MakeupPicker.WBP_cc_sw_MakeupPicker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_cc_sw_MakeupPicker_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_MakeupPicker_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_cc_sw_MakeupPicker.WBP_cc_sw_MakeupPicker_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_cc_sw_MakeupPicker_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_MakeupPicker_C", "PreConstruct");

	Params::UWBP_cc_sw_MakeupPicker_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_cc_sw_MakeupPicker.WBP_cc_sw_MakeupPicker_C.BndEvt__WBP_cc_sw_MakeupPicker_Slider_Intensity_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_cc_sw_MakeupPicker_C::BndEvt__WBP_cc_sw_MakeupPicker_Slider_Intensity_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_MakeupPicker_C", "BndEvt__WBP_cc_sw_MakeupPicker_Slider_Intensity_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");

	Params::UWBP_cc_sw_MakeupPicker_C_BndEvt__WBP_cc_sw_MakeupPicker_Slider_Intensity_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_cc_sw_MakeupPicker.WBP_cc_sw_MakeupPicker_C.ExecuteUbergraph_WBP_cc_sw_MakeupPicker
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Value_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_ComponentBoundEvent_ColorID                               (NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_GridIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_ColorSwatch_                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDataTableRowHandle> CallFunc_GetDataTableRowHandles_RowHandles                       (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetMaxValue_InValue_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_OnValueChangedSFX_Value_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_cc_sw_MakeupPicker_C::ExecuteUbergraph_WBP_cc_sw_MakeupPicker(int32 EntryPoint, float K2Node_ComponentBoundEvent_Value_1, const struct FDataTableRowHandle& K2Node_ComponentBoundEvent_ColorID, int32 K2Node_ComponentBoundEvent_GridIndex, bool K2Node_ComponentBoundEvent_ColorSwatch_, bool K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints, TArray<struct FDataTableRowHandle>& CallFunc_GetDataTableRowHandles_RowHandles, int32 CallFunc_Array_Length_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, bool K2Node_Event_IsDesignTime, float K2Node_ComponentBoundEvent_Value, float CallFunc_SetMaxValue_InValue_ImplicitCast, double CallFunc_OnValueChangedSFX_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_MakeupPicker_C", "ExecuteUbergraph_WBP_cc_sw_MakeupPicker");

	Params::UWBP_cc_sw_MakeupPicker_C_ExecuteUbergraph_WBP_cc_sw_MakeupPicker_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Value_1 = K2Node_ComponentBoundEvent_Value_1;
	Parms.K2Node_ComponentBoundEvent_ColorID = K2Node_ComponentBoundEvent_ColorID;
	Parms.K2Node_ComponentBoundEvent_GridIndex = K2Node_ComponentBoundEvent_GridIndex;
	Parms.K2Node_ComponentBoundEvent_ColorSwatch_ = K2Node_ComponentBoundEvent_ColorSwatch_;
	Parms.K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints = K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints;
	Parms.CallFunc_GetDataTableRowHandles_RowHandles = CallFunc_GetDataTableRowHandles_RowHandles;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.CallFunc_SetMaxValue_InValue_ImplicitCast = CallFunc_SetMaxValue_InValue_ImplicitCast;
	Parms.CallFunc_OnValueChangedSFX_Value_ImplicitCast = CallFunc_OnValueChangedSFX_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_cc_sw_MakeupPicker.WBP_cc_sw_MakeupPicker_C.ClearSetting__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_cc_sw_MakeupPicker_C::ClearSetting__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_MakeupPicker_C", "ClearSetting__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_cc_sw_MakeupPicker.WBP_cc_sw_MakeupPicker_C.MakeupUpdate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_cc_sw_MakeupPicker_C::MakeupUpdate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_MakeupPicker_C", "MakeupUpdate__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


