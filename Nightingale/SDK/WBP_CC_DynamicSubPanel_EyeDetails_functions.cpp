#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CC_DynamicSubPanel_EyeDetails.WBP_CC_DynamicSubPanel_EyeDetails_C
// (None)

class UClass* UWBP_CC_DynamicSubPanel_EyeDetails_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CC_DynamicSubPanel_EyeDetails_C");

	return Clss;
}


// WBP_CC_DynamicSubPanel_EyeDetails_C WBP_CC_DynamicSubPanel_EyeDetails.Default__WBP_CC_DynamicSubPanel_EyeDetails_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CC_DynamicSubPanel_EyeDetails_C* UWBP_CC_DynamicSubPanel_EyeDetails_C::GetDefaultObj()
{
	static class UWBP_CC_DynamicSubPanel_EyeDetails_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CC_DynamicSubPanel_EyeDetails_C*>(UWBP_CC_DynamicSubPanel_EyeDetails_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CC_DynamicSubPanel_EyeDetails.WBP_CC_DynamicSubPanel_EyeDetails_C.OnInputMethodChanged
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        CurrentInputType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_BP_GetDesiredFocusTarget_ReturnValue                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_EyeDetails_C::OnInputMethodChanged(enum class ECommonInputType CurrentInputType, bool K2Node_SwitchEnum_CmpSuccess, class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeDetails_C", "OnInputMethodChanged");

	Params::UWBP_CC_DynamicSubPanel_EyeDetails_C_OnInputMethodChanged_Params Parms{};

	Parms.CurrentInputType = CurrentInputType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_BP_GetDesiredFocusTarget_ReturnValue = CallFunc_BP_GetDesiredFocusTarget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_EyeDetails.WBP_CC_DynamicSubPanel_EyeDetails_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_BP_GetDesiredFocusTarget_ReturnValue                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_CC_DynamicSubPanel_EyeDetails_C::BP_GetDesiredFocusTarget(class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeDetails_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_CC_DynamicSubPanel_EyeDetails_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_BP_GetDesiredFocusTarget_ReturnValue = CallFunc_BP_GetDesiredFocusTarget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_CC_DynamicSubPanel_EyeDetails.WBP_CC_DynamicSubPanel_EyeDetails_C.RandomizeEyes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetRandomEyeColorDTRow_Output                           (NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetRandomEyeColorDTRow_Output_1                         (NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetRandomEyeColorDTRow_Output_2                         (NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEyeAppearance              K2Node_MakeStruct_EyeAppearance                                  (NoDestructor)
// struct FEyeAppearance              K2Node_MakeStruct_EyeAppearance_1                                (NoDestructor)
// float                              K2Node_MakeStruct_IrisDetail_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_LimbusOpacity_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_IrisScale_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_IrisScale_ImplicitCast_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_PupilScale_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_PupilScale_ImplicitCast_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_VeinOpacity_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_VeinOpacity_ImplicitCast_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_BloodshotAmount_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_BloodshotAmount_ImplicitCast_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_EyeDetails_C::RandomizeEyes(double CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FDataTableRowHandle& CallFunc_GetRandomEyeColorDTRow_Output, const struct FDataTableRowHandle& CallFunc_GetRandomEyeColorDTRow_Output_1, const struct FDataTableRowHandle& CallFunc_GetRandomEyeColorDTRow_Output_2, double CallFunc_RandomFloatInRange_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue_2, double CallFunc_RandomFloatInRange_ReturnValue_3, double CallFunc_RandomFloatInRange_ReturnValue_4, const struct FEyeAppearance& K2Node_MakeStruct_EyeAppearance, const struct FEyeAppearance& K2Node_MakeStruct_EyeAppearance_1, float K2Node_MakeStruct_IrisDetail_ImplicitCast, float K2Node_MakeStruct_LimbusOpacity_ImplicitCast, float K2Node_MakeStruct_IrisScale_ImplicitCast, float K2Node_MakeStruct_IrisScale_ImplicitCast_1, float K2Node_MakeStruct_PupilScale_ImplicitCast, float K2Node_MakeStruct_PupilScale_ImplicitCast_1, float K2Node_MakeStruct_VeinOpacity_ImplicitCast, float K2Node_MakeStruct_VeinOpacity_ImplicitCast_1, float K2Node_MakeStruct_BloodshotAmount_ImplicitCast, float K2Node_MakeStruct_BloodshotAmount_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeDetails_C", "RandomizeEyes");

	Params::UWBP_CC_DynamicSubPanel_EyeDetails_C_RandomizeEyes_Params Parms{};

	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetRandomEyeColorDTRow_Output = CallFunc_GetRandomEyeColorDTRow_Output;
	Parms.CallFunc_GetRandomEyeColorDTRow_Output_1 = CallFunc_GetRandomEyeColorDTRow_Output_1;
	Parms.CallFunc_GetRandomEyeColorDTRow_Output_2 = CallFunc_GetRandomEyeColorDTRow_Output_2;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_2 = CallFunc_RandomFloatInRange_ReturnValue_2;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_3 = CallFunc_RandomFloatInRange_ReturnValue_3;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_4 = CallFunc_RandomFloatInRange_ReturnValue_4;
	Parms.K2Node_MakeStruct_EyeAppearance = K2Node_MakeStruct_EyeAppearance;
	Parms.K2Node_MakeStruct_EyeAppearance_1 = K2Node_MakeStruct_EyeAppearance_1;
	Parms.K2Node_MakeStruct_IrisDetail_ImplicitCast = K2Node_MakeStruct_IrisDetail_ImplicitCast;
	Parms.K2Node_MakeStruct_LimbusOpacity_ImplicitCast = K2Node_MakeStruct_LimbusOpacity_ImplicitCast;
	Parms.K2Node_MakeStruct_IrisScale_ImplicitCast = K2Node_MakeStruct_IrisScale_ImplicitCast;
	Parms.K2Node_MakeStruct_IrisScale_ImplicitCast_1 = K2Node_MakeStruct_IrisScale_ImplicitCast_1;
	Parms.K2Node_MakeStruct_PupilScale_ImplicitCast = K2Node_MakeStruct_PupilScale_ImplicitCast;
	Parms.K2Node_MakeStruct_PupilScale_ImplicitCast_1 = K2Node_MakeStruct_PupilScale_ImplicitCast_1;
	Parms.K2Node_MakeStruct_VeinOpacity_ImplicitCast = K2Node_MakeStruct_VeinOpacity_ImplicitCast;
	Parms.K2Node_MakeStruct_VeinOpacity_ImplicitCast_1 = K2Node_MakeStruct_VeinOpacity_ImplicitCast_1;
	Parms.K2Node_MakeStruct_BloodshotAmount_ImplicitCast = K2Node_MakeStruct_BloodshotAmount_ImplicitCast;
	Parms.K2Node_MakeStruct_BloodshotAmount_ImplicitCast_1 = K2Node_MakeStruct_BloodshotAmount_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_EyeDetails.WBP_CC_DynamicSubPanel_EyeDetails_C.CollectSideData
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TMap<class FString, struct FCharacterCreateTelemetryValuePairs>InOutMap                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class EEyeSide                EyeSide                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Prefix                                                           (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// struct FEyeAppearance              OldData                                                          (Edit, BlueprintVisible, NoDestructor)
// struct FEyeAppearance              CurrentData                                                      (Edit, BlueprintVisible, NoDestructor)
// enum class EEyeSide                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// enum class EEyeSide                Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_1                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_2                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_3                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_3                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_4                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_4                         (ZeroConstructor, HasGetValueTypeHash)
// struct FCharacterCreateTelemetryValuePairsK2Node_MakeStruct_CharacterCreateTelemetryValuePairs             (None)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_5                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_6                       (ZeroConstructor, HasGetValueTypeHash)
// struct FCharacterCreateTelemetryValuePairsK2Node_MakeStruct_CharacterCreateTelemetryValuePairs_1           (None)
// struct FCharacterCreateTelemetryValuePairsK2Node_MakeStruct_CharacterCreateTelemetryValuePairs_2           (None)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_7                       (ZeroConstructor, HasGetValueTypeHash)
// struct FCharacterCreateTelemetryValuePairsK2Node_MakeStruct_CharacterCreateTelemetryValuePairs_3           (None)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_5                         (ZeroConstructor, HasGetValueTypeHash)
// struct FCharacterCreateTelemetryValuePairsK2Node_MakeStruct_CharacterCreateTelemetryValuePairs_4           (None)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_6                         (ZeroConstructor, HasGetValueTypeHash)
// struct FCharacterCreateTelemetryValuePairsK2Node_MakeStruct_CharacterCreateTelemetryValuePairs_5           (None)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_7                         (ZeroConstructor, HasGetValueTypeHash)
// struct FCharacterCreateTelemetryValuePairsK2Node_MakeStruct_CharacterCreateTelemetryValuePairs_6           (None)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_8                         (ZeroConstructor, HasGetValueTypeHash)
// struct FCharacterCreateTelemetryValuePairsK2Node_MakeStruct_CharacterCreateTelemetryValuePairs_7           (None)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_9                         (ZeroConstructor, HasGetValueTypeHash)
// struct FCharacterCreateTelemetryValuePairsK2Node_MakeStruct_CharacterCreateTelemetryValuePairs_8           (None)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_10                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_11                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// struct FCharacterCreateTelemetryValuePairsK2Node_MakeStruct_CharacterCreateTelemetryValuePairs_9           (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_9                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_10                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_11                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_12                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_13                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_14                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_15                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_16                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_17                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_18                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_19                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// struct FEyeAppearance              CallFunc_GetEyeData_OutValue                                     (NoDestructor)
// struct FEyeAppearance              K2Node_Select_Default_1                                          (NoDestructor)
// double                             CallFunc_Conv_DoubleToString_InDouble_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_3             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_4             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_5             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_6             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_7             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_EyeDetails_C::CollectSideData(TMap<class FString, struct FCharacterCreateTelemetryValuePairs>& InOutMap, enum class EEyeSide EyeSide, const class FString& Prefix, const struct FEyeAppearance& OldData, const struct FEyeAppearance& CurrentData, enum class EEyeSide Temp_byte_Variable, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, enum class EEyeSide Temp_byte_Variable_1, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_1, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_2, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_3, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, const class FString& CallFunc_Conv_NameToString_ReturnValue_2, const class FString& CallFunc_Conv_NameToString_ReturnValue_3, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_4, const class FString& CallFunc_Conv_NameToString_ReturnValue_4, const struct FCharacterCreateTelemetryValuePairs& K2Node_MakeStruct_CharacterCreateTelemetryValuePairs, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_5, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_6, const struct FCharacterCreateTelemetryValuePairs& K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_1, const struct FCharacterCreateTelemetryValuePairs& K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_2, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_7, const struct FCharacterCreateTelemetryValuePairs& K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_3, const class FString& CallFunc_Conv_NameToString_ReturnValue_5, const struct FCharacterCreateTelemetryValuePairs& K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_4, const class FString& CallFunc_Conv_NameToString_ReturnValue_6, const struct FCharacterCreateTelemetryValuePairs& K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_5, const class FString& CallFunc_Conv_NameToString_ReturnValue_7, const struct FCharacterCreateTelemetryValuePairs& K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_6, const class FString& CallFunc_Conv_NameToString_ReturnValue_8, const struct FCharacterCreateTelemetryValuePairs& K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_7, const class FString& CallFunc_Conv_NameToString_ReturnValue_9, const struct FCharacterCreateTelemetryValuePairs& K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_8, const class FString& CallFunc_Conv_NameToString_ReturnValue_10, const class FString& CallFunc_Conv_NameToString_ReturnValue_11, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FCharacterCreateTelemetryValuePairs& K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_9, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, const class FString& CallFunc_Concat_StrStr_ReturnValue_11, const class FString& CallFunc_Concat_StrStr_ReturnValue_12, const class FString& CallFunc_Concat_StrStr_ReturnValue_13, const class FString& CallFunc_Concat_StrStr_ReturnValue_14, const class FString& CallFunc_Concat_StrStr_ReturnValue_15, const class FString& CallFunc_Concat_StrStr_ReturnValue_16, const class FString& CallFunc_Concat_StrStr_ReturnValue_17, const class FString& CallFunc_Concat_StrStr_ReturnValue_18, const class FString& CallFunc_Concat_StrStr_ReturnValue_19, const class FString& K2Node_Select_Default, const struct FEyeAppearance& CallFunc_GetEyeData_OutValue, const struct FEyeAppearance& K2Node_Select_Default_1, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_1, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_2, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_3, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_4, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_5, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_6, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeDetails_C", "CollectSideData");

	Params::UWBP_CC_DynamicSubPanel_EyeDetails_C_CollectSideData_Params Parms{};

	Parms.InOutMap = InOutMap;
	Parms.EyeSide = EyeSide;
	Parms.Prefix = Prefix;
	Parms.OldData = OldData;
	Parms.CurrentData = CurrentData;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue = CallFunc_Conv_DoubleToString_ReturnValue;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_1 = CallFunc_Conv_DoubleToString_ReturnValue_1;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_2 = CallFunc_Conv_DoubleToString_ReturnValue_2;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_3 = CallFunc_Conv_DoubleToString_ReturnValue_3;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.CallFunc_Conv_NameToString_ReturnValue_2 = CallFunc_Conv_NameToString_ReturnValue_2;
	Parms.CallFunc_Conv_NameToString_ReturnValue_3 = CallFunc_Conv_NameToString_ReturnValue_3;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_4 = CallFunc_Conv_DoubleToString_ReturnValue_4;
	Parms.CallFunc_Conv_NameToString_ReturnValue_4 = CallFunc_Conv_NameToString_ReturnValue_4;
	Parms.K2Node_MakeStruct_CharacterCreateTelemetryValuePairs = K2Node_MakeStruct_CharacterCreateTelemetryValuePairs;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_5 = CallFunc_Conv_DoubleToString_ReturnValue_5;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_6 = CallFunc_Conv_DoubleToString_ReturnValue_6;
	Parms.K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_1 = K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_1;
	Parms.K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_2 = K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_2;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_7 = CallFunc_Conv_DoubleToString_ReturnValue_7;
	Parms.K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_3 = K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_3;
	Parms.CallFunc_Conv_NameToString_ReturnValue_5 = CallFunc_Conv_NameToString_ReturnValue_5;
	Parms.K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_4 = K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_4;
	Parms.CallFunc_Conv_NameToString_ReturnValue_6 = CallFunc_Conv_NameToString_ReturnValue_6;
	Parms.K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_5 = K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_5;
	Parms.CallFunc_Conv_NameToString_ReturnValue_7 = CallFunc_Conv_NameToString_ReturnValue_7;
	Parms.K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_6 = K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_6;
	Parms.CallFunc_Conv_NameToString_ReturnValue_8 = CallFunc_Conv_NameToString_ReturnValue_8;
	Parms.K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_7 = K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_7;
	Parms.CallFunc_Conv_NameToString_ReturnValue_9 = CallFunc_Conv_NameToString_ReturnValue_9;
	Parms.K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_8 = K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_8;
	Parms.CallFunc_Conv_NameToString_ReturnValue_10 = CallFunc_Conv_NameToString_ReturnValue_10;
	Parms.CallFunc_Conv_NameToString_ReturnValue_11 = CallFunc_Conv_NameToString_ReturnValue_11;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_9 = K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_9;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.CallFunc_Concat_StrStr_ReturnValue_9 = CallFunc_Concat_StrStr_ReturnValue_9;
	Parms.CallFunc_Concat_StrStr_ReturnValue_10 = CallFunc_Concat_StrStr_ReturnValue_10;
	Parms.CallFunc_Concat_StrStr_ReturnValue_11 = CallFunc_Concat_StrStr_ReturnValue_11;
	Parms.CallFunc_Concat_StrStr_ReturnValue_12 = CallFunc_Concat_StrStr_ReturnValue_12;
	Parms.CallFunc_Concat_StrStr_ReturnValue_13 = CallFunc_Concat_StrStr_ReturnValue_13;
	Parms.CallFunc_Concat_StrStr_ReturnValue_14 = CallFunc_Concat_StrStr_ReturnValue_14;
	Parms.CallFunc_Concat_StrStr_ReturnValue_15 = CallFunc_Concat_StrStr_ReturnValue_15;
	Parms.CallFunc_Concat_StrStr_ReturnValue_16 = CallFunc_Concat_StrStr_ReturnValue_16;
	Parms.CallFunc_Concat_StrStr_ReturnValue_17 = CallFunc_Concat_StrStr_ReturnValue_17;
	Parms.CallFunc_Concat_StrStr_ReturnValue_18 = CallFunc_Concat_StrStr_ReturnValue_18;
	Parms.CallFunc_Concat_StrStr_ReturnValue_19 = CallFunc_Concat_StrStr_ReturnValue_19;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetEyeData_OutValue = CallFunc_GetEyeData_OutValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Conv_DoubleToString_InDouble_ImplicitCast = CallFunc_Conv_DoubleToString_InDouble_ImplicitCast;
	Parms.CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_1 = CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_1;
	Parms.CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_2 = CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_2;
	Parms.CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_3 = CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_3;
	Parms.CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_4 = CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_4;
	Parms.CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_5 = CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_5;
	Parms.CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_6 = CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_6;
	Parms.CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_7 = CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_7;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_EyeDetails.WBP_CC_DynamicSubPanel_EyeDetails_C.CollectPanelValues
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TMap<class FString, struct FCharacterCreateTelemetryValuePairs>OutValues                                                        (Parm, OutParm)
// class FString                      OutPanelName                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// TMap<class FString, struct FCharacterCreateTelemetryValuePairs>Values                                                           (Edit, BlueprintVisible)

void UWBP_CC_DynamicSubPanel_EyeDetails_C::CollectPanelValues(TMap<class FString, struct FCharacterCreateTelemetryValuePairs>* OutValues, class FString* OutPanelName, TMap<class FString, struct FCharacterCreateTelemetryValuePairs> Values)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeDetails_C", "CollectPanelValues");

	Params::UWBP_CC_DynamicSubPanel_EyeDetails_C_CollectPanelValues_Params Parms{};

	Parms.Values = Values;

	UObject::ProcessEvent(Func, &Parms);

	if (OutValues != nullptr)
		*OutValues = Parms.OutValues;

	if (OutPanelName != nullptr)
		*OutPanelName = std::move(Parms.OutPanelName);

}


// Function WBP_CC_DynamicSubPanel_EyeDetails.WBP_CC_DynamicSubPanel_EyeDetails_C.CacheStartingPanelValues
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEyeAppearance              CallFunc_GetEyeData_OutValue                                     (NoDestructor)
// struct FEyeAppearance              CallFunc_GetEyeData_OutValue_1                                   (NoDestructor)

void UWBP_CC_DynamicSubPanel_EyeDetails_C::CacheStartingPanelValues(const struct FEyeAppearance& CallFunc_GetEyeData_OutValue, const struct FEyeAppearance& CallFunc_GetEyeData_OutValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeDetails_C", "CacheStartingPanelValues");

	Params::UWBP_CC_DynamicSubPanel_EyeDetails_C_CacheStartingPanelValues_Params Parms{};

	Parms.CallFunc_GetEyeData_OutValue = CallFunc_GetEyeData_OutValue;
	Parms.CallFunc_GetEyeData_OutValue_1 = CallFunc_GetEyeData_OutValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_EyeDetails.WBP_CC_DynamicSubPanel_EyeDetails_C.GetRandomEyeColorDTRow
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDataTableRowHandle         Output                                                           (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDataTableRowHandle> CallFunc_GetDataTableRowHandles_RowHandles                       (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_EyeDetails_C::GetRandomEyeColorDTRow(struct FDataTableRowHandle* Output, TArray<struct FDataTableRowHandle>& CallFunc_GetDataTableRowHandles_RowHandles, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FDataTableRowHandle& CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeDetails_C", "GetRandomEyeColorDTRow");

	Params::UWBP_CC_DynamicSubPanel_EyeDetails_C_GetRandomEyeColorDTRow_Params Parms{};

	Parms.CallFunc_GetDataTableRowHandles_RowHandles = CallFunc_GetDataTableRowHandles_RowHandles;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

}


// Function WBP_CC_DynamicSubPanel_EyeDetails.WBP_CC_DynamicSubPanel_EyeDetails_C.RefreshPickers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWBP_CC_Appearance_CategoryButton_C*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_CC_Appearance_CategoryButton_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_EyeDetails_C::RefreshPickers(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWBP_CC_Appearance_CategoryButton_C*>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, class UWBP_CC_Appearance_CategoryButton_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeDetails_C", "RefreshPickers");

	Params::UWBP_CC_DynamicSubPanel_EyeDetails_C_RefreshPickers_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_EyeDetails.WBP_CC_DynamicSubPanel_EyeDetails_C.GetSavedValuesforOptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEyeSide                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeSide                Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeSide                Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeSide                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEyeAppearance              CallFunc_GetEyeData_OutValue                                     (NoDestructor)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeVector2D_X_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeVector2D_Y_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeVector2D_X_ImplicitCast_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeVector2D_Y_ImplicitCast_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeVector2D_X_ImplicitCast_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeVector2D_Y_ImplicitCast_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_EyeDetails_C::GetSavedValuesforOptions(enum class EEyeSide Temp_byte_Variable, enum class EEyeSide Temp_byte_Variable_1, enum class EEyeSide Temp_byte_Variable_2, int32 Temp_int_Variable, enum class EEyeSide K2Node_Select_Default, const struct FEyeAppearance& CallFunc_GetEyeData_OutValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, double CallFunc_MakeVector2D_X_ImplicitCast, double CallFunc_MakeVector2D_Y_ImplicitCast, double CallFunc_MakeVector2D_X_ImplicitCast_1, double CallFunc_MakeVector2D_Y_ImplicitCast_1, double CallFunc_MakeVector2D_X_ImplicitCast_2, double CallFunc_MakeVector2D_Y_ImplicitCast_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeDetails_C", "GetSavedValuesforOptions");

	Params::UWBP_CC_DynamicSubPanel_EyeDetails_C_GetSavedValuesforOptions_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetEyeData_OutValue = CallFunc_GetEyeData_OutValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue_1 = CallFunc_MakeVector2D_ReturnValue_1;
	Parms.CallFunc_MakeVector2D_ReturnValue_2 = CallFunc_MakeVector2D_ReturnValue_2;
	Parms.CallFunc_MakeVector2D_X_ImplicitCast = CallFunc_MakeVector2D_X_ImplicitCast;
	Parms.CallFunc_MakeVector2D_Y_ImplicitCast = CallFunc_MakeVector2D_Y_ImplicitCast;
	Parms.CallFunc_MakeVector2D_X_ImplicitCast_1 = CallFunc_MakeVector2D_X_ImplicitCast_1;
	Parms.CallFunc_MakeVector2D_Y_ImplicitCast_1 = CallFunc_MakeVector2D_Y_ImplicitCast_1;
	Parms.CallFunc_MakeVector2D_X_ImplicitCast_2 = CallFunc_MakeVector2D_X_ImplicitCast_2;
	Parms.CallFunc_MakeVector2D_Y_ImplicitCast_2 = CallFunc_MakeVector2D_Y_ImplicitCast_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_EyeDetails.WBP_CC_DynamicSubPanel_EyeDetails_C.SetupLightingBinding
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UWBP_CC_Appearance_CategoryButton_C*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_CC_Appearance_CategoryButton_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_EyeDetails_C::SetupLightingBinding(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class UWBP_CC_Appearance_CategoryButton_C*>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, class UWBP_CC_Appearance_CategoryButton_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeDetails_C", "SetupLightingBinding");

	Params::UWBP_CC_DynamicSubPanel_EyeDetails_C_SetupLightingBinding_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_EyeDetails.WBP_CC_DynamicSubPanel_EyeDetails_C.DefaultLighting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_CC_Appearance_CategoryButton_C*Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_EyeDetails_C::DefaultLighting(class UWBP_CC_Appearance_CategoryButton_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeDetails_C", "DefaultLighting");

	Params::UWBP_CC_DynamicSubPanel_EyeDetails_C_DefaultLighting_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_EyeDetails.WBP_CC_DynamicSubPanel_EyeDetails_C.Set_IrisBleedColor_WIP
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         Override                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCustomization_ColorSample  CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesDataTableRowExist_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_NPCCustomization_C>CallFunc_GetBody_self_CastInput                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetBody_BodyComponent                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    K2Node_DynamicCast_AsMaterial_Instance_Dynamic                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_EyeDetails_C::Set_IrisBleedColor_WIP(const struct FDataTableRowHandle& Override, bool CallFunc_IsValid_ReturnValue, const struct FCustomization_ColorSample& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_DoesDataTableRowExist_ReturnValue, TScriptInterface<class IBPI_NPCCustomization_C> CallFunc_GetBody_self_CastInput, class USkeletalMeshComponent* CallFunc_GetBody_BodyComponent, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeDetails_C", "Set_IrisBleedColor_WIP");

	Params::UWBP_CC_DynamicSubPanel_EyeDetails_C_Set_IrisBleedColor_WIP_Params Parms{};

	Parms.Override = Override;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_DoesDataTableRowExist_ReturnValue = CallFunc_DoesDataTableRowExist_ReturnValue;
	Parms.CallFunc_GetBody_self_CastInput = CallFunc_GetBody_self_CastInput;
	Parms.CallFunc_GetBody_BodyComponent = CallFunc_GetBody_BodyComponent;
	Parms.CallFunc_GetMaterial_ReturnValue = CallFunc_GetMaterial_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsMaterial_Instance_Dynamic = K2Node_DynamicCast_AsMaterial_Instance_Dynamic;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_EyeDetails.WBP_CC_DynamicSubPanel_EyeDetails_C.SetEyeColour_ScleraDark
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         Override                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_EyeDetails_C::SetEyeColour_ScleraDark(const struct FDataTableRowHandle& Override, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeDetails_C", "SetEyeColour_ScleraDark");

	Params::UWBP_CC_DynamicSubPanel_EyeDetails_C_SetEyeColour_ScleraDark_Params Parms{};

	Parms.Override = Override;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_EyeDetails.WBP_CC_DynamicSubPanel_EyeDetails_C.SetEyeColour_Sclera
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         Override                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_EyeDetails_C::SetEyeColour_Sclera(const struct FDataTableRowHandle& Override, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeDetails_C", "SetEyeColour_Sclera");

	Params::UWBP_CC_DynamicSubPanel_EyeDetails_C_SetEyeColour_Sclera_Params Parms{};

	Parms.Override = Override;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_EyeDetails.WBP_CC_DynamicSubPanel_EyeDetails_C.ResetAll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_EyeDetails_C::ResetAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeDetails_C", "ResetAll");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_EyeDetails.WBP_CC_DynamicSubPanel_EyeDetails_C.Set_LimbusDetail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Override                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_EyeDetails_C::Set_LimbusDetail(double Override, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeDetails_C", "Set_LimbusDetail");

	Params::UWBP_CC_DynamicSubPanel_EyeDetails_C_Set_LimbusDetail_Params Parms{};

	Parms.Override = Override;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_EyeDetails.WBP_CC_DynamicSubPanel_EyeDetails_C.Set_IrisDetail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Override                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_EyeDetails_C::Set_IrisDetail(double Override, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeDetails_C", "Set_IrisDetail");

	Params::UWBP_CC_DynamicSubPanel_EyeDetails_C_Set_IrisDetail_Params Parms{};

	Parms.Override = Override;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_EyeDetails.WBP_CC_DynamicSubPanel_EyeDetails_C.Set_VeinOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Override                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_EyeDetails_C::Set_VeinOpacity(double Override, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeDetails_C", "Set_VeinOpacity");

	Params::UWBP_CC_DynamicSubPanel_EyeDetails_C_Set_VeinOpacity_Params Parms{};

	Parms.Override = Override;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_EyeDetails.WBP_CC_DynamicSubPanel_EyeDetails_C.RefreshEyeCamera
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_CC_CharacterPose      Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CC_CharacterPose      Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CC_CharacterPose      Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// enum class E_CC_CharacterPose      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_EyeDetails_C::RefreshEyeCamera(enum class E_CC_CharacterPose Temp_byte_Variable, enum class E_CC_CharacterPose Temp_byte_Variable_1, enum class E_CC_CharacterPose Temp_byte_Variable_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Variable, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, enum class E_CC_CharacterPose K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeDetails_C", "RefreshEyeCamera");

	Params::UWBP_CC_DynamicSubPanel_EyeDetails_C_RefreshEyeCamera_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_EyeDetails.WBP_CC_DynamicSubPanel_EyeDetails_C.Set_BloodinessOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Override                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_EyeDetails_C::Set_BloodinessOpacity(double Override, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeDetails_C", "Set_BloodinessOpacity");

	Params::UWBP_CC_DynamicSubPanel_EyeDetails_C_Set_BloodinessOpacity_Params Parms{};

	Parms.Override = Override;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_EyeDetails.WBP_CC_DynamicSubPanel_EyeDetails_C.SetIrisScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Override                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_EyeDetails_C::SetIrisScale(double Override, double CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeDetails_C", "SetIrisScale");

	Params::UWBP_CC_DynamicSubPanel_EyeDetails_C_SetIrisScale_Params Parms{};

	Parms.Override = Override;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_EyeDetails.WBP_CC_DynamicSubPanel_EyeDetails_C.SetPupilScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Override                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_EyeDetails_C::SetPupilScale(double Override, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeDetails_C", "SetPupilScale");

	Params::UWBP_CC_DynamicSubPanel_EyeDetails_C_SetPupilScale_Params Parms{};

	Parms.Override = Override;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_EyeDetails.WBP_CC_DynamicSubPanel_EyeDetails_C.Reset_EyeColour_Emissive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_EyeDetails_C::Reset_EyeColour_Emissive(bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeDetails_C", "Reset_EyeColour_Emissive");

	Params::UWBP_CC_DynamicSubPanel_EyeDetails_C_Reset_EyeColour_Emissive_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_EyeDetails.WBP_CC_DynamicSubPanel_EyeDetails_C.Reset_EyeColour_Outer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_EyeDetails_C::Reset_EyeColour_Outer(bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeDetails_C", "Reset_EyeColour_Outer");

	Params::UWBP_CC_DynamicSubPanel_EyeDetails_C_Reset_EyeColour_Outer_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_EyeDetails.WBP_CC_DynamicSubPanel_EyeDetails_C.Reset_EyeColour_Mid
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_EyeDetails_C::Reset_EyeColour_Mid(bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeDetails_C", "Reset_EyeColour_Mid");

	Params::UWBP_CC_DynamicSubPanel_EyeDetails_C_Reset_EyeColour_Mid_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_EyeDetails.WBP_CC_DynamicSubPanel_EyeDetails_C.Reset_EyeColour_Inner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_EyeDetails_C::Reset_EyeColour_Inner(bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeDetails_C", "Reset_EyeColour_Inner");

	Params::UWBP_CC_DynamicSubPanel_EyeDetails_C_Reset_EyeColour_Inner_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_EyeDetails.WBP_CC_DynamicSubPanel_EyeDetails_C.SetEyeColour_Emissive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         Override                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_EyeDetails_C::SetEyeColour_Emissive(const struct FDataTableRowHandle& Override, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeDetails_C", "SetEyeColour_Emissive");

	Params::UWBP_CC_DynamicSubPanel_EyeDetails_C_SetEyeColour_Emissive_Params Parms{};

	Parms.Override = Override;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_EyeDetails.WBP_CC_DynamicSubPanel_EyeDetails_C.SetEyeColour_Outer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         Override                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_EyeDetails_C::SetEyeColour_Outer(const struct FDataTableRowHandle& Override, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeDetails_C", "SetEyeColour_Outer");

	Params::UWBP_CC_DynamicSubPanel_EyeDetails_C_SetEyeColour_Outer_Params Parms{};

	Parms.Override = Override;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_EyeDetails.WBP_CC_DynamicSubPanel_EyeDetails_C.SetEyeColour_Mid
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         Override                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_EyeDetails_C::SetEyeColour_Mid(const struct FDataTableRowHandle& Override, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeDetails_C", "SetEyeColour_Mid");

	Params::UWBP_CC_DynamicSubPanel_EyeDetails_C_SetEyeColour_Mid_Params Parms{};

	Parms.Override = Override;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_EyeDetails.WBP_CC_DynamicSubPanel_EyeDetails_C.SetEyeColour_Inner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         Override                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_EyeDetails_C::SetEyeColour_Inner(const struct FDataTableRowHandle& Override, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeDetails_C", "SetEyeColour_Inner");

	Params::UWBP_CC_DynamicSubPanel_EyeDetails_C_SetEyeColour_Inner_Params Parms{};

	Parms.Override = Override;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_EyeDetails.WBP_CC_DynamicSubPanel_EyeDetails_C.UpdateEyeSwatchGrids
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWBP_CC_Appearance_CategoryButton_C*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// class UWBP_CC_Appearance_CategoryButton_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_EyeDetails_C::UpdateEyeSwatchGrids(int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, TArray<class UWBP_CC_Appearance_CategoryButton_C*>& K2Node_MakeArray_Array, class UWBP_CC_Appearance_CategoryButton_C* CallFunc_Array_Get_Item, int32 K2Node_Select_Default, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeDetails_C", "UpdateEyeSwatchGrids");

	Params::UWBP_CC_DynamicSubPanel_EyeDetails_C_UpdateEyeSwatchGrids_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_EyeDetails.WBP_CC_DynamicSubPanel_EyeDetails_C.BndEvt__WBP_CC_DynamicSubPanel_EyeColour_Face_Eyes_EyeColour_Emissive_K2Node_ComponentBoundEvent_8_CC_ColorSwatch_Selected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         ColorID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              GridIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ColorSwatch_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RgbSwatch___Disable_tints                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_EyeDetails_C::BndEvt__WBP_CC_DynamicSubPanel_EyeColour_Face_Eyes_EyeColour_Emissive_K2Node_ComponentBoundEvent_8_CC_ColorSwatch_Selected__DelegateSignature(const struct FDataTableRowHandle& ColorID, int32 GridIndex, bool ColorSwatch_, bool RgbSwatch___Disable_tints)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeDetails_C", "BndEvt__WBP_CC_DynamicSubPanel_EyeColour_Face_Eyes_EyeColour_Emissive_K2Node_ComponentBoundEvent_8_CC_ColorSwatch_Selected__DelegateSignature");

	Params::UWBP_CC_DynamicSubPanel_EyeDetails_C_BndEvt__WBP_CC_DynamicSubPanel_EyeColour_Face_Eyes_EyeColour_Emissive_K2Node_ComponentBoundEvent_8_CC_ColorSwatch_Selected__DelegateSignature_Params Parms{};

	Parms.ColorID = ColorID;
	Parms.GridIndex = GridIndex;
	Parms.ColorSwatch_ = ColorSwatch_;
	Parms.RgbSwatch___Disable_tints = RgbSwatch___Disable_tints;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_EyeDetails.WBP_CC_DynamicSubPanel_EyeDetails_C.BndEvt__WBP_CC_DynamicSubPanel_EyeColour_Face_Eyes_EyeColour_Emissive_K2Node_ComponentBoundEvent_9_CategoryButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_CC_Appearance_CategoryButton_C*Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_EyeDetails_C::BndEvt__WBP_CC_DynamicSubPanel_EyeColour_Face_Eyes_EyeColour_Emissive_K2Node_ComponentBoundEvent_9_CategoryButtonClicked__DelegateSignature(class UWBP_CC_Appearance_CategoryButton_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeDetails_C", "BndEvt__WBP_CC_DynamicSubPanel_EyeColour_Face_Eyes_EyeColour_Emissive_K2Node_ComponentBoundEvent_9_CategoryButtonClicked__DelegateSignature");

	Params::UWBP_CC_DynamicSubPanel_EyeDetails_C_BndEvt__WBP_CC_DynamicSubPanel_EyeColour_Face_Eyes_EyeColour_Emissive_K2Node_ComponentBoundEvent_9_CategoryButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_EyeDetails.WBP_CC_DynamicSubPanel_EyeDetails_C.BndEvt__WBP_CC_DynamicSubPanel_EyeColour_BU_CustomizeSize_K2Node_ComponentBoundEvent_12_CategoryButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_CC_Appearance_CategoryButton_C*Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_EyeDetails_C::BndEvt__WBP_CC_DynamicSubPanel_EyeColour_BU_CustomizeSize_K2Node_ComponentBoundEvent_12_CategoryButtonClicked__DelegateSignature(class UWBP_CC_Appearance_CategoryButton_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeDetails_C", "BndEvt__WBP_CC_DynamicSubPanel_EyeColour_BU_CustomizeSize_K2Node_ComponentBoundEvent_12_CategoryButtonClicked__DelegateSignature");

	Params::UWBP_CC_DynamicSubPanel_EyeDetails_C_BndEvt__WBP_CC_DynamicSubPanel_EyeColour_BU_CustomizeSize_K2Node_ComponentBoundEvent_12_CategoryButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_EyeDetails.WBP_CC_DynamicSubPanel_EyeDetails_C.BndEvt__WBP_CC_DynamicSubPanel_EyeColour_Customize_K2Node_ComponentBoundEvent_6_CategoryButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_CC_Appearance_CategoryButton_C*Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_EyeDetails_C::BndEvt__WBP_CC_DynamicSubPanel_EyeColour_Customize_K2Node_ComponentBoundEvent_6_CategoryButtonClicked__DelegateSignature(class UWBP_CC_Appearance_CategoryButton_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeDetails_C", "BndEvt__WBP_CC_DynamicSubPanel_EyeColour_Customize_K2Node_ComponentBoundEvent_6_CategoryButtonClicked__DelegateSignature");

	Params::UWBP_CC_DynamicSubPanel_EyeDetails_C_BndEvt__WBP_CC_DynamicSubPanel_EyeColour_Customize_K2Node_ComponentBoundEvent_6_CategoryButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_EyeDetails.WBP_CC_DynamicSubPanel_EyeDetails_C.BndEvt__WBP_CC_DynamicSubPanel_EyeColour_Face_Eyes_EyeColour_Sclera_K2Node_ComponentBoundEvent_4_CC_ColorSwatch_Selected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         ColorID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              GridIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ColorSwatch_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RgbSwatch___Disable_tints                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_EyeDetails_C::BndEvt__WBP_CC_DynamicSubPanel_EyeColour_Face_Eyes_EyeColour_Sclera_K2Node_ComponentBoundEvent_4_CC_ColorSwatch_Selected__DelegateSignature(const struct FDataTableRowHandle& ColorID, int32 GridIndex, bool ColorSwatch_, bool RgbSwatch___Disable_tints)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeDetails_C", "BndEvt__WBP_CC_DynamicSubPanel_EyeColour_Face_Eyes_EyeColour_Sclera_K2Node_ComponentBoundEvent_4_CC_ColorSwatch_Selected__DelegateSignature");

	Params::UWBP_CC_DynamicSubPanel_EyeDetails_C_BndEvt__WBP_CC_DynamicSubPanel_EyeColour_Face_Eyes_EyeColour_Sclera_K2Node_ComponentBoundEvent_4_CC_ColorSwatch_Selected__DelegateSignature_Params Parms{};

	Parms.ColorID = ColorID;
	Parms.GridIndex = GridIndex;
	Parms.ColorSwatch_ = ColorSwatch_;
	Parms.RgbSwatch___Disable_tints = RgbSwatch___Disable_tints;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_EyeDetails.WBP_CC_DynamicSubPanel_EyeDetails_C.BndEvt__WBP_CC_DynamicSubPanel_EyeColour_Face_Eyes_EyeColour_ScleraDark_K2Node_ComponentBoundEvent_10_CC_ColorSwatch_Selected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         ColorID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              GridIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ColorSwatch_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RgbSwatch___Disable_tints                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_EyeDetails_C::BndEvt__WBP_CC_DynamicSubPanel_EyeColour_Face_Eyes_EyeColour_ScleraDark_K2Node_ComponentBoundEvent_10_CC_ColorSwatch_Selected__DelegateSignature(const struct FDataTableRowHandle& ColorID, int32 GridIndex, bool ColorSwatch_, bool RgbSwatch___Disable_tints)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeDetails_C", "BndEvt__WBP_CC_DynamicSubPanel_EyeColour_Face_Eyes_EyeColour_ScleraDark_K2Node_ComponentBoundEvent_10_CC_ColorSwatch_Selected__DelegateSignature");

	Params::UWBP_CC_DynamicSubPanel_EyeDetails_C_BndEvt__WBP_CC_DynamicSubPanel_EyeColour_Face_Eyes_EyeColour_ScleraDark_K2Node_ComponentBoundEvent_10_CC_ColorSwatch_Selected__DelegateSignature_Params Parms{};

	Parms.ColorID = ColorID;
	Parms.GridIndex = GridIndex;
	Parms.ColorSwatch_ = ColorSwatch_;
	Parms.RgbSwatch___Disable_tints = RgbSwatch___Disable_tints;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_EyeDetails.WBP_CC_DynamicSubPanel_EyeDetails_C.RandomizePanelContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_EyeDetails_C::RandomizePanelContent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeDetails_C", "RandomizePanelContent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_EyeDetails.WBP_CC_DynamicSubPanel_EyeDetails_C.RefreshPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_EyeDetails_C::RefreshPanel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeDetails_C", "RefreshPanel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_EyeDetails.WBP_CC_DynamicSubPanel_EyeDetails_C.ResetPanelContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_EyeDetails_C::ResetPanelContent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeDetails_C", "ResetPanelContent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_EyeDetails.WBP_CC_DynamicSubPanel_EyeDetails_C.BndEvt__WBP_CC_DynamicSubPanel_EyeDetails_WBP_cc_sw_Slider_2D_K2Node_ComponentBoundEvent_11_ED_SliderValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FVector2D                   Slider_Value                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_EyeDetails_C::BndEvt__WBP_CC_DynamicSubPanel_EyeDetails_WBP_cc_sw_Slider_2D_K2Node_ComponentBoundEvent_11_ED_SliderValueChanged__DelegateSignature(const struct FVector2D& Slider_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeDetails_C", "BndEvt__WBP_CC_DynamicSubPanel_EyeDetails_WBP_cc_sw_Slider_2D_K2Node_ComponentBoundEvent_11_ED_SliderValueChanged__DelegateSignature");

	Params::UWBP_CC_DynamicSubPanel_EyeDetails_C_BndEvt__WBP_CC_DynamicSubPanel_EyeDetails_WBP_cc_sw_Slider_2D_K2Node_ComponentBoundEvent_11_ED_SliderValueChanged__DelegateSignature_Params Parms{};

	Parms.Slider_Value = Slider_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_EyeDetails.WBP_CC_DynamicSubPanel_EyeDetails_C.BndEvt__WBP_CC_DynamicSubPanel_EyeDetails_2dSlider_VeinBloodiness_K2Node_ComponentBoundEvent_20_ED_SliderValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FVector2D                   Slider_Value                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_EyeDetails_C::BndEvt__WBP_CC_DynamicSubPanel_EyeDetails_2dSlider_VeinBloodiness_K2Node_ComponentBoundEvent_20_ED_SliderValueChanged__DelegateSignature(const struct FVector2D& Slider_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeDetails_C", "BndEvt__WBP_CC_DynamicSubPanel_EyeDetails_2dSlider_VeinBloodiness_K2Node_ComponentBoundEvent_20_ED_SliderValueChanged__DelegateSignature");

	Params::UWBP_CC_DynamicSubPanel_EyeDetails_C_BndEvt__WBP_CC_DynamicSubPanel_EyeDetails_2dSlider_VeinBloodiness_K2Node_ComponentBoundEvent_20_ED_SliderValueChanged__DelegateSignature_Params Parms{};

	Parms.Slider_Value = Slider_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_EyeDetails.WBP_CC_DynamicSubPanel_EyeDetails_C.BndEvt__WBP_CC_DynamicSubPanel_EyeDetails_2dSlider_Detail_K2Node_ComponentBoundEvent_21_ED_SliderValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FVector2D                   Slider_Value                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_EyeDetails_C::BndEvt__WBP_CC_DynamicSubPanel_EyeDetails_2dSlider_Detail_K2Node_ComponentBoundEvent_21_ED_SliderValueChanged__DelegateSignature(const struct FVector2D& Slider_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeDetails_C", "BndEvt__WBP_CC_DynamicSubPanel_EyeDetails_2dSlider_Detail_K2Node_ComponentBoundEvent_21_ED_SliderValueChanged__DelegateSignature");

	Params::UWBP_CC_DynamicSubPanel_EyeDetails_C_BndEvt__WBP_CC_DynamicSubPanel_EyeDetails_2dSlider_Detail_K2Node_ComponentBoundEvent_21_ED_SliderValueChanged__DelegateSignature_Params Parms{};

	Parms.Slider_Value = Slider_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_EyeDetails.WBP_CC_DynamicSubPanel_EyeDetails_C.BndEvt__WBP_CC_DynamicSubPanel_EyeColour_Eye_Tabs_ActiveEyeSelection_K2Node_ComponentBoundEvent_3_TabSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                        SelectedTabName                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              ActiveTab                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_EyeDetails_C::BndEvt__WBP_CC_DynamicSubPanel_EyeColour_Eye_Tabs_ActiveEyeSelection_K2Node_ComponentBoundEvent_3_TabSelected__DelegateSignature(class FText SelectedTabName, int32 ActiveTab)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeDetails_C", "BndEvt__WBP_CC_DynamicSubPanel_EyeColour_Eye_Tabs_ActiveEyeSelection_K2Node_ComponentBoundEvent_3_TabSelected__DelegateSignature");

	Params::UWBP_CC_DynamicSubPanel_EyeDetails_C_BndEvt__WBP_CC_DynamicSubPanel_EyeColour_Eye_Tabs_ActiveEyeSelection_K2Node_ComponentBoundEvent_3_TabSelected__DelegateSignature_Params Parms{};

	Parms.SelectedTabName = SelectedTabName;
	Parms.ActiveTab = ActiveTab;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_EyeDetails.WBP_CC_DynamicSubPanel_EyeDetails_C.BndEvt__WBP_CC_DynamicSubPanel_EyeColour_Face_Eyes_EyeColour_Outer_K2Node_ComponentBoundEvent_2_CC_ColorSwatch_Selected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         ColorID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              GridIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ColorSwatch_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RgbSwatch___Disable_tints                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_EyeDetails_C::BndEvt__WBP_CC_DynamicSubPanel_EyeColour_Face_Eyes_EyeColour_Outer_K2Node_ComponentBoundEvent_2_CC_ColorSwatch_Selected__DelegateSignature(const struct FDataTableRowHandle& ColorID, int32 GridIndex, bool ColorSwatch_, bool RgbSwatch___Disable_tints)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeDetails_C", "BndEvt__WBP_CC_DynamicSubPanel_EyeColour_Face_Eyes_EyeColour_Outer_K2Node_ComponentBoundEvent_2_CC_ColorSwatch_Selected__DelegateSignature");

	Params::UWBP_CC_DynamicSubPanel_EyeDetails_C_BndEvt__WBP_CC_DynamicSubPanel_EyeColour_Face_Eyes_EyeColour_Outer_K2Node_ComponentBoundEvent_2_CC_ColorSwatch_Selected__DelegateSignature_Params Parms{};

	Parms.ColorID = ColorID;
	Parms.GridIndex = GridIndex;
	Parms.ColorSwatch_ = ColorSwatch_;
	Parms.RgbSwatch___Disable_tints = RgbSwatch___Disable_tints;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_EyeDetails.WBP_CC_DynamicSubPanel_EyeDetails_C.BndEvt__WBP_CC_DynamicSubPanel_EyeColour_Face_Eyes_EyeColour_Mid_K2Node_ComponentBoundEvent_1_CC_ColorSwatch_Selected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         ColorID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              GridIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ColorSwatch_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RgbSwatch___Disable_tints                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_EyeDetails_C::BndEvt__WBP_CC_DynamicSubPanel_EyeColour_Face_Eyes_EyeColour_Mid_K2Node_ComponentBoundEvent_1_CC_ColorSwatch_Selected__DelegateSignature(const struct FDataTableRowHandle& ColorID, int32 GridIndex, bool ColorSwatch_, bool RgbSwatch___Disable_tints)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeDetails_C", "BndEvt__WBP_CC_DynamicSubPanel_EyeColour_Face_Eyes_EyeColour_Mid_K2Node_ComponentBoundEvent_1_CC_ColorSwatch_Selected__DelegateSignature");

	Params::UWBP_CC_DynamicSubPanel_EyeDetails_C_BndEvt__WBP_CC_DynamicSubPanel_EyeColour_Face_Eyes_EyeColour_Mid_K2Node_ComponentBoundEvent_1_CC_ColorSwatch_Selected__DelegateSignature_Params Parms{};

	Parms.ColorID = ColorID;
	Parms.GridIndex = GridIndex;
	Parms.ColorSwatch_ = ColorSwatch_;
	Parms.RgbSwatch___Disable_tints = RgbSwatch___Disable_tints;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_EyeDetails.WBP_CC_DynamicSubPanel_EyeDetails_C.BndEvt__WBP_CC_DynamicSubPanel_EyeColour_Face_Eyes_EyeColour_Inner_K2Node_ComponentBoundEvent_0_CC_ColorSwatch_Selected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         ColorID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              GridIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ColorSwatch_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RgbSwatch___Disable_tints                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_EyeDetails_C::BndEvt__WBP_CC_DynamicSubPanel_EyeColour_Face_Eyes_EyeColour_Inner_K2Node_ComponentBoundEvent_0_CC_ColorSwatch_Selected__DelegateSignature(const struct FDataTableRowHandle& ColorID, int32 GridIndex, bool ColorSwatch_, bool RgbSwatch___Disable_tints)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeDetails_C", "BndEvt__WBP_CC_DynamicSubPanel_EyeColour_Face_Eyes_EyeColour_Inner_K2Node_ComponentBoundEvent_0_CC_ColorSwatch_Selected__DelegateSignature");

	Params::UWBP_CC_DynamicSubPanel_EyeDetails_C_BndEvt__WBP_CC_DynamicSubPanel_EyeColour_Face_Eyes_EyeColour_Inner_K2Node_ComponentBoundEvent_0_CC_ColorSwatch_Selected__DelegateSignature_Params Parms{};

	Parms.ColorID = ColorID;
	Parms.GridIndex = GridIndex;
	Parms.ColorSwatch_ = ColorSwatch_;
	Parms.RgbSwatch___Disable_tints = RgbSwatch___Disable_tints;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_EyeDetails.WBP_CC_DynamicSubPanel_EyeDetails_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_EyeDetails_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeDetails_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_EyeDetails.WBP_CC_DynamicSubPanel_EyeDetails_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_EyeDetails_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeDetails_C", "PreConstruct");

	Params::UWBP_CC_DynamicSubPanel_EyeDetails_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_EyeDetails.WBP_CC_DynamicSubPanel_EyeDetails_C.BndEvt__WBP_CC_DynamicSubPanel_EyeDetails_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_5_OnResetSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_EyeDetails_C::BndEvt__WBP_CC_DynamicSubPanel_EyeDetails_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_5_OnResetSelected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeDetails_C", "BndEvt__WBP_CC_DynamicSubPanel_EyeDetails_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_5_OnResetSelected__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_EyeDetails.WBP_CC_DynamicSubPanel_EyeDetails_C.BndEvt__WBP_CC_DynamicSubPanel_EyeDetails_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_7_OnRandomizeSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_EyeDetails_C::BndEvt__WBP_CC_DynamicSubPanel_EyeDetails_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_7_OnRandomizeSelected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeDetails_C", "BndEvt__WBP_CC_DynamicSubPanel_EyeDetails_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_7_OnRandomizeSelected__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_EyeDetails.WBP_CC_DynamicSubPanel_EyeDetails_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_EyeDetails_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeDetails_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_EyeDetails.WBP_CC_DynamicSubPanel_EyeDetails_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_EyeDetails_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeDetails_C", "BP_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_EyeDetails.WBP_CC_DynamicSubPanel_EyeDetails_C.ExecuteUbergraph_WBP_CC_DynamicSubPanel_EyeDetails
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CC_CameraMode         Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CC_CameraMode         Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_ComponentBoundEvent_ColorID_5                             (NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_GridIndex_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_ColorSwatch__5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints_5           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_CC_Appearance_CategoryButton_C*K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_CC_Appearance_CategoryButton_C*K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class E_CC_CameraMode         K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_CC_Appearance_CategoryButton_C*K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_ComponentBoundEvent_ColorID_4                             (NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_GridIndex_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_ColorSwatch__4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints_4           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_ComponentBoundEvent_ColorID_3                             (NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_GridIndex_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_ColorSwatch__3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints_3           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_ComponentBoundEvent_Slider_Value_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_ComponentBoundEvent_Slider_Value_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_ComponentBoundEvent_Slider_Value                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_SelectedTabName                       (None)
// int32                              K2Node_ComponentBoundEvent_ActiveTab                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_ComponentBoundEvent_ColorID_2                             (NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_GridIndex_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_ColorSwatch__2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints_2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_ComponentBoundEvent_ColorID_1                             (NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_GridIndex_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_ColorSwatch__1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_ComponentBoundEvent_ColorID                               (NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_GridIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_ColorSwatch_                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_EyeDetails_C::ExecuteUbergraph_WBP_CC_DynamicSubPanel_EyeDetails(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class E_CC_CameraMode Temp_byte_Variable_2, enum class E_CC_CameraMode Temp_byte_Variable_3, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, const struct FDataTableRowHandle& K2Node_ComponentBoundEvent_ColorID_5, int32 K2Node_ComponentBoundEvent_GridIndex_5, bool K2Node_ComponentBoundEvent_ColorSwatch__5, bool K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints_5, bool CallFunc_IsVisible_ReturnValue, class UWBP_CC_Appearance_CategoryButton_C* K2Node_ComponentBoundEvent_Button_2, class UWBP_CC_Appearance_CategoryButton_C* K2Node_ComponentBoundEvent_Button_1, enum class E_CC_CameraMode K2Node_Select_Default, bool CallFunc_IsVisible_ReturnValue_1, class UWBP_CC_Appearance_CategoryButton_C* K2Node_ComponentBoundEvent_Button, enum class ESlateVisibility K2Node_Select_Default_1, const struct FDataTableRowHandle& K2Node_ComponentBoundEvent_ColorID_4, int32 K2Node_ComponentBoundEvent_GridIndex_4, bool K2Node_ComponentBoundEvent_ColorSwatch__4, bool K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints_4, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, bool Temp_bool_Variable_2, enum class ESlateVisibility K2Node_Select_Default_2, const struct FDataTableRowHandle& K2Node_ComponentBoundEvent_ColorID_3, int32 K2Node_ComponentBoundEvent_GridIndex_3, bool K2Node_ComponentBoundEvent_ColorSwatch__3, bool K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints_3, const struct FVector2D& K2Node_ComponentBoundEvent_Slider_Value_2, const struct FVector2D& K2Node_ComponentBoundEvent_Slider_Value_1, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double CallFunc_BreakVector2D_X_2, double CallFunc_BreakVector2D_Y_2, const struct FVector2D& K2Node_ComponentBoundEvent_Slider_Value, double CallFunc_BreakVector2D_X_3, double CallFunc_BreakVector2D_Y_3, class FText K2Node_ComponentBoundEvent_SelectedTabName, int32 K2Node_ComponentBoundEvent_ActiveTab, const struct FDataTableRowHandle& K2Node_ComponentBoundEvent_ColorID_2, int32 K2Node_ComponentBoundEvent_GridIndex_2, bool K2Node_ComponentBoundEvent_ColorSwatch__2, bool K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints_2, const struct FDataTableRowHandle& K2Node_ComponentBoundEvent_ColorID_1, int32 K2Node_ComponentBoundEvent_GridIndex_1, bool K2Node_ComponentBoundEvent_ColorSwatch__1, bool K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints_1, const struct FDataTableRowHandle& K2Node_ComponentBoundEvent_ColorID, int32 K2Node_ComponentBoundEvent_GridIndex, bool K2Node_ComponentBoundEvent_ColorSwatch_, bool K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints, bool K2Node_Event_IsDesignTime, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeDetails_C", "ExecuteUbergraph_WBP_CC_DynamicSubPanel_EyeDetails");

	Params::UWBP_CC_DynamicSubPanel_EyeDetails_C_ExecuteUbergraph_WBP_CC_DynamicSubPanel_EyeDetails_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.K2Node_ComponentBoundEvent_ColorID_5 = K2Node_ComponentBoundEvent_ColorID_5;
	Parms.K2Node_ComponentBoundEvent_GridIndex_5 = K2Node_ComponentBoundEvent_GridIndex_5;
	Parms.K2Node_ComponentBoundEvent_ColorSwatch__5 = K2Node_ComponentBoundEvent_ColorSwatch__5;
	Parms.K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints_5 = K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints_5;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsVisible_ReturnValue_1 = CallFunc_IsVisible_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_ComponentBoundEvent_ColorID_4 = K2Node_ComponentBoundEvent_ColorID_4;
	Parms.K2Node_ComponentBoundEvent_GridIndex_4 = K2Node_ComponentBoundEvent_GridIndex_4;
	Parms.K2Node_ComponentBoundEvent_ColorSwatch__4 = K2Node_ComponentBoundEvent_ColorSwatch__4;
	Parms.K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints_4 = K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints_4;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_ComponentBoundEvent_ColorID_3 = K2Node_ComponentBoundEvent_ColorID_3;
	Parms.K2Node_ComponentBoundEvent_GridIndex_3 = K2Node_ComponentBoundEvent_GridIndex_3;
	Parms.K2Node_ComponentBoundEvent_ColorSwatch__3 = K2Node_ComponentBoundEvent_ColorSwatch__3;
	Parms.K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints_3 = K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints_3;
	Parms.K2Node_ComponentBoundEvent_Slider_Value_2 = K2Node_ComponentBoundEvent_Slider_Value_2;
	Parms.K2Node_ComponentBoundEvent_Slider_Value_1 = K2Node_ComponentBoundEvent_Slider_Value_1;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_BreakVector2D_X_2 = CallFunc_BreakVector2D_X_2;
	Parms.CallFunc_BreakVector2D_Y_2 = CallFunc_BreakVector2D_Y_2;
	Parms.K2Node_ComponentBoundEvent_Slider_Value = K2Node_ComponentBoundEvent_Slider_Value;
	Parms.CallFunc_BreakVector2D_X_3 = CallFunc_BreakVector2D_X_3;
	Parms.CallFunc_BreakVector2D_Y_3 = CallFunc_BreakVector2D_Y_3;
	Parms.K2Node_ComponentBoundEvent_SelectedTabName = K2Node_ComponentBoundEvent_SelectedTabName;
	Parms.K2Node_ComponentBoundEvent_ActiveTab = K2Node_ComponentBoundEvent_ActiveTab;
	Parms.K2Node_ComponentBoundEvent_ColorID_2 = K2Node_ComponentBoundEvent_ColorID_2;
	Parms.K2Node_ComponentBoundEvent_GridIndex_2 = K2Node_ComponentBoundEvent_GridIndex_2;
	Parms.K2Node_ComponentBoundEvent_ColorSwatch__2 = K2Node_ComponentBoundEvent_ColorSwatch__2;
	Parms.K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints_2 = K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints_2;
	Parms.K2Node_ComponentBoundEvent_ColorID_1 = K2Node_ComponentBoundEvent_ColorID_1;
	Parms.K2Node_ComponentBoundEvent_GridIndex_1 = K2Node_ComponentBoundEvent_GridIndex_1;
	Parms.K2Node_ComponentBoundEvent_ColorSwatch__1 = K2Node_ComponentBoundEvent_ColorSwatch__1;
	Parms.K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints_1 = K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints_1;
	Parms.K2Node_ComponentBoundEvent_ColorID = K2Node_ComponentBoundEvent_ColorID;
	Parms.K2Node_ComponentBoundEvent_GridIndex = K2Node_ComponentBoundEvent_GridIndex;
	Parms.K2Node_ComponentBoundEvent_ColorSwatch_ = K2Node_ComponentBoundEvent_ColorSwatch_;
	Parms.K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints = K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast = CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast;
	Parms.CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast = CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


