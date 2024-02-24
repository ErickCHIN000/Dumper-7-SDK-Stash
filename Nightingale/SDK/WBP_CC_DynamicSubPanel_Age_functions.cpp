#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CC_DynamicSubPanel_Age.WBP_CC_DynamicSubPanel_Age_C
// (None)

class UClass* UWBP_CC_DynamicSubPanel_Age_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CC_DynamicSubPanel_Age_C");

	return Clss;
}


// WBP_CC_DynamicSubPanel_Age_C WBP_CC_DynamicSubPanel_Age.Default__WBP_CC_DynamicSubPanel_Age_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CC_DynamicSubPanel_Age_C* UWBP_CC_DynamicSubPanel_Age_C::GetDefaultObj()
{
	static class UWBP_CC_DynamicSubPanel_Age_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CC_DynamicSubPanel_Age_C*>(UWBP_CC_DynamicSubPanel_Age_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CC_DynamicSubPanel_Age.WBP_CC_DynamicSubPanel_Age_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_CC_DynamicSubPanel_Age_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Age_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_CC_DynamicSubPanel_Age_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_CC_DynamicSubPanel_Age.WBP_CC_DynamicSubPanel_Age_C.AudioCooldown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_Age_C::AudioCooldown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Age_C", "AudioCooldown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_Age.WBP_CC_DynamicSubPanel_Age_C.OnValueChangedSFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Round64_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_Int64Int64_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// int32                              CallFunc_PostAkEvent_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                CallFunc_SpawnAkComponentAtLocation_ReturnValue                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Age_C::OnValueChangedSFX(double Value, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double CallFunc_MapRangeClamped_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int64 CallFunc_Round64_ReturnValue, FDelegateProperty_ Temp_delegate_Variable, bool CallFunc_NotEqual_Int64Int64_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, int32 CallFunc_PostAkEvent_ReturnValue, class UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Age_C", "OnValueChangedSFX");

	Params::UWBP_CC_DynamicSubPanel_Age_C_OnValueChangedSFX_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_Round64_ReturnValue = CallFunc_Round64_ReturnValue;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.CallFunc_NotEqual_Int64Int64_ReturnValue = CallFunc_NotEqual_Int64Int64_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_PostAkEvent_ReturnValue = CallFunc_PostAkEvent_ReturnValue;
	Parms.CallFunc_SpawnAkComponentAtLocation_ReturnValue = CallFunc_SpawnAkComponentAtLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Age.WBP_CC_DynamicSubPanel_Age_C.CollectPanelValues
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TMap<class FString, struct FCharacterCreateTelemetryValuePairs>OutValues                                                        (Parm, OutParm)
// class FString                      OutPanelName                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// int64                              CallFunc_FFloor64_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetAgeValue_OutAgeValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_Int64ToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// int64                              CallFunc_FFloor64_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_Int64ToString_ReturnValue_1                        (ZeroConstructor, HasGetValueTypeHash)
// struct FCharacterCreateTelemetryValuePairsK2Node_MakeStruct_CharacterCreateTelemetryValuePairs             (None)
// TMap<class FString, struct FCharacterCreateTelemetryValuePairs>K2Node_MakeMap_Map                                               (None)

void UWBP_CC_DynamicSubPanel_Age_C::CollectPanelValues(TMap<class FString, struct FCharacterCreateTelemetryValuePairs>* OutValues, class FString* OutPanelName, int64 CallFunc_FFloor64_ReturnValue, double CallFunc_GetAgeValue_OutAgeValue, const class FString& CallFunc_Conv_Int64ToString_ReturnValue, int64 CallFunc_FFloor64_ReturnValue_1, const class FString& CallFunc_Conv_Int64ToString_ReturnValue_1, const struct FCharacterCreateTelemetryValuePairs& K2Node_MakeStruct_CharacterCreateTelemetryValuePairs, TMap<class FString, struct FCharacterCreateTelemetryValuePairs> K2Node_MakeMap_Map)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Age_C", "CollectPanelValues");

	Params::UWBP_CC_DynamicSubPanel_Age_C_CollectPanelValues_Params Parms{};

	Parms.CallFunc_FFloor64_ReturnValue = CallFunc_FFloor64_ReturnValue;
	Parms.CallFunc_GetAgeValue_OutAgeValue = CallFunc_GetAgeValue_OutAgeValue;
	Parms.CallFunc_Conv_Int64ToString_ReturnValue = CallFunc_Conv_Int64ToString_ReturnValue;
	Parms.CallFunc_FFloor64_ReturnValue_1 = CallFunc_FFloor64_ReturnValue_1;
	Parms.CallFunc_Conv_Int64ToString_ReturnValue_1 = CallFunc_Conv_Int64ToString_ReturnValue_1;
	Parms.K2Node_MakeStruct_CharacterCreateTelemetryValuePairs = K2Node_MakeStruct_CharacterCreateTelemetryValuePairs;
	Parms.K2Node_MakeMap_Map = K2Node_MakeMap_Map;

	UObject::ProcessEvent(Func, &Parms);

	if (OutValues != nullptr)
		*OutValues = Parms.OutValues;

	if (OutPanelName != nullptr)
		*OutPanelName = std::move(Parms.OutPanelName);

}


// Function WBP_CC_DynamicSubPanel_Age.WBP_CC_DynamicSubPanel_Age_C.CacheStartingPanelValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_GetAgeValue_OutAgeValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Age_C::CacheStartingPanelValues(double CallFunc_GetAgeValue_OutAgeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Age_C", "CacheStartingPanelValues");

	Params::UWBP_CC_DynamicSubPanel_Age_C_CacheStartingPanelValues_Params Parms{};

	Parms.CallFunc_GetAgeValue_OutAgeValue = CallFunc_GetAgeValue_OutAgeValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Age.WBP_CC_DynamicSubPanel_Age_C.Get Age
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        DateofBirthtext                                                  (Edit, BlueprintVisible)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        Temp_text_Variable_4                                             (None)
// class FText                        Temp_text_Variable_5                                             (None)
// class FText                        Temp_text_Variable_6                                             (None)
// class FText                        Temp_text_Variable_7                                             (None)
// class FText                        Temp_text_Variable_8                                             (None)
// class FText                        Temp_text_Variable_9                                             (None)
// class FText                        Temp_text_Variable_10                                            (None)
// class FText                        Temp_text_Variable_11                                            (None)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetAgeValue_OutAgeValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Fraction_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// float                              CallFunc_SetValue_InValue_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Age_C::Get_Age(class FText DateofBirthtext, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, class FText Temp_text_Variable_9, class FText Temp_text_Variable_10, class FText Temp_text_Variable_11, int32 Temp_int_Variable, double CallFunc_GetAgeValue_OutAgeValue, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_Fraction_ReturnValue, int32 CallFunc_Round_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Round_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText K2Node_Select_Default, class FText CallFunc_Conv_IntToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, float CallFunc_SetValue_InValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Age_C", "Get Age");

	Params::UWBP_CC_DynamicSubPanel_Age_C_Get_Age_Params Parms{};

	Parms.DateofBirthtext = DateofBirthtext;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.Temp_text_Variable_7 = Temp_text_Variable_7;
	Parms.Temp_text_Variable_8 = Temp_text_Variable_8;
	Parms.Temp_text_Variable_9 = Temp_text_Variable_9;
	Parms.Temp_text_Variable_10 = Temp_text_Variable_10;
	Parms.Temp_text_Variable_11 = Temp_text_Variable_11;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetAgeValue_OutAgeValue = CallFunc_GetAgeValue_OutAgeValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_Fraction_ReturnValue = CallFunc_Fraction_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Round_ReturnValue_1 = CallFunc_Round_ReturnValue_1;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_SetValue_InValue_ImplicitCast = CallFunc_SetValue_InValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Age.WBP_CC_DynamicSubPanel_Age_C.Set Age
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        Temp_text_Variable_4                                             (None)
// class FText                        Temp_text_Variable_5                                             (None)
// class FText                        Temp_text_Variable_6                                             (None)
// class FText                        Temp_text_Variable_7                                             (None)
// class FText                        Temp_text_Variable_8                                             (None)
// class FText                        Temp_text_Variable_9                                             (None)
// class FText                        Temp_text_Variable_10                                            (None)
// class FText                        Temp_text_Variable_11                                            (None)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Fraction_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// int32                              CallFunc_Round_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// class FText                        K2Node_Select_Default                                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// double                             CallFunc_SetAgeValueOverride_NewAgeValue_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Age_C::Set_Age(class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, class FText Temp_text_Variable_9, class FText Temp_text_Variable_10, class FText Temp_text_Variable_11, int32 Temp_int_Variable, float CallFunc_GetValue_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, int32 CallFunc_Round_ReturnValue, double CallFunc_Fraction_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_Round_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_IntToText_ReturnValue_1, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, double CallFunc_SetAgeValueOverride_NewAgeValue_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Age_C", "Set Age");

	Params::UWBP_CC_DynamicSubPanel_Age_C_Set_Age_Params Parms{};

	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.Temp_text_Variable_7 = Temp_text_Variable_7;
	Parms.Temp_text_Variable_8 = Temp_text_Variable_8;
	Parms.Temp_text_Variable_9 = Temp_text_Variable_9;
	Parms.Temp_text_Variable_10 = Temp_text_Variable_10;
	Parms.Temp_text_Variable_11 = Temp_text_Variable_11;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Fraction_ReturnValue = CallFunc_Fraction_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Round_ReturnValue_1 = CallFunc_Round_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_SetAgeValueOverride_NewAgeValue_ImplicitCast = CallFunc_SetAgeValueOverride_NewAgeValue_ImplicitCast;
	Parms.CallFunc_MapRangeClamped_Value_ImplicitCast = CallFunc_MapRangeClamped_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Age.WBP_CC_DynamicSubPanel_Age_C.GetArchetypeBlendTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         CallFunc_GetSelectedArchetype_SelectedArchetype                  (NoDestructor, HasGetValueTypeHash)
// struct FCharacterAppearance_Preset CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Age_C::GetArchetypeBlendTarget(const struct FDataTableRowHandle& CallFunc_GetSelectedArchetype_SelectedArchetype, const struct FCharacterAppearance_Preset& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, TArray<class FName>& CallFunc_Map_Keys_Keys, class FName CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Age_C", "GetArchetypeBlendTarget");

	Params::UWBP_CC_DynamicSubPanel_Age_C_GetArchetypeBlendTarget_Params Parms{};

	Parms.CallFunc_GetSelectedArchetype_SelectedArchetype = CallFunc_GetSelectedArchetype_SelectedArchetype;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Age.WBP_CC_DynamicSubPanel_Age_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Age_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Age_C", "PreConstruct");

	Params::UWBP_CC_DynamicSubPanel_Age_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Age.WBP_CC_DynamicSubPanel_Age_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_Age_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Age_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_Age.WBP_CC_DynamicSubPanel_Age_C.BndEvt__WBP_CC_DynamicSubPanel_Age_RadialSlider_318_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Age_C::BndEvt__WBP_CC_DynamicSubPanel_Age_RadialSlider_318_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Age_C", "BndEvt__WBP_CC_DynamicSubPanel_Age_RadialSlider_318_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature");

	Params::UWBP_CC_DynamicSubPanel_Age_C_BndEvt__WBP_CC_DynamicSubPanel_Age_RadialSlider_318_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Age.WBP_CC_DynamicSubPanel_Age_C.RandomizePanelContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_Age_C::RandomizePanelContent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Age_C", "RandomizePanelContent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_Age.WBP_CC_DynamicSubPanel_Age_C.RefreshPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_Age_C::RefreshPanel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Age_C", "RefreshPanel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_Age.WBP_CC_DynamicSubPanel_Age_C.ResetPanelContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_Age_C::ResetPanelContent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Age_C", "ResetPanelContent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_Age.WBP_CC_DynamicSubPanel_Age_C.BndEvt__WBP_CC_DynamicSubPanel_Age_WBP_RandomizeButton_K2Node_ComponentBoundEvent_4_OnRandomizeSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_Age_C::BndEvt__WBP_CC_DynamicSubPanel_Age_WBP_RandomizeButton_K2Node_ComponentBoundEvent_4_OnRandomizeSelected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Age_C", "BndEvt__WBP_CC_DynamicSubPanel_Age_WBP_RandomizeButton_K2Node_ComponentBoundEvent_4_OnRandomizeSelected__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_Age.WBP_CC_DynamicSubPanel_Age_C.BndEvt__WBP_CC_DynamicSubPanel_Age_WBP_RandomizeButton_K2Node_ComponentBoundEvent_0_OnResetSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_Age_C::BndEvt__WBP_CC_DynamicSubPanel_Age_WBP_RandomizeButton_K2Node_ComponentBoundEvent_0_OnResetSelected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Age_C", "BndEvt__WBP_CC_DynamicSubPanel_Age_WBP_RandomizeButton_K2Node_ComponentBoundEvent_0_OnResetSelected__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_Age.WBP_CC_DynamicSubPanel_Age_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_Age_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Age_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_Age.WBP_CC_DynamicSubPanel_Age_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_Age_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Age_C", "BP_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_Age.WBP_CC_DynamicSubPanel_Age_C.ExecuteUbergraph_WBP_CC_DynamicSubPanel_Age
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_OnValueChangedSFX_Value_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetValue_InValue_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Age_C::ExecuteUbergraph_WBP_CC_DynamicSubPanel_Age(int32 EntryPoint, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, float K2Node_ComponentBoundEvent_Value, double CallFunc_RandomFloatInRange_ReturnValue, bool K2Node_Event_IsDesignTime, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast, double CallFunc_OnValueChangedSFX_Value_ImplicitCast, float CallFunc_SetValue_InValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Age_C", "ExecuteUbergraph_WBP_CC_DynamicSubPanel_Age");

	Params::UWBP_CC_DynamicSubPanel_Age_C_ExecuteUbergraph_WBP_CC_DynamicSubPanel_Age_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast = CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast;
	Parms.CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast = CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast;
	Parms.CallFunc_OnValueChangedSFX_Value_ImplicitCast = CallFunc_OnValueChangedSFX_Value_ImplicitCast;
	Parms.CallFunc_SetValue_InValue_ImplicitCast = CallFunc_SetValue_InValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


