#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C
// (None)

class UClass* UBP_CharacterAppearanceComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CharacterAppearanceComponent_C");

	return Clss;
}


// BP_CharacterAppearanceComponent_C BP_CharacterAppearanceComponent.Default__BP_CharacterAppearanceComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CharacterAppearanceComponent_C* UBP_CharacterAppearanceComponent_C::GetDefaultObj()
{
	static class UBP_CharacterAppearanceComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CharacterAppearanceComponent_C*>(UBP_CharacterAppearanceComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsEyeLimbusOpacityOverriden
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bOverriden                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeSide                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEyeAppearance              K2Node_Select_Default                                            (NoDestructor)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::IsEyeLimbusOpacityOverriden(enum class EEyeSide Side, bool* bOverriden, enum class EEyeSide Temp_byte_Variable, const struct FEyeAppearance& K2Node_Select_Default, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "IsEyeLimbusOpacityOverriden");

	Params::UBP_CharacterAppearanceComponent_C_IsEyeLimbusOpacityOverriden_Params Parms{};

	Parms.Side = Side;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast = CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (bOverriden != nullptr)
		*bOverriden = Parms.bOverriden;

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetEyeLimbusOpacity
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             OutValue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeSide                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEyeLimbusOpacityOverriden_bOverriden                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterAppearance_Preset CallFunc_GetSelectedArchetypeData_OutArchetype                   (None)
// struct FEyeAppearance              K2Node_Select_Default                                            (NoDestructor)
// double                             K2Node_FunctionResult_OutValue_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_OutValue_ImplicitCast_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::GetEyeLimbusOpacity(enum class EEyeSide Side, double* OutValue, enum class EEyeSide Temp_byte_Variable, bool CallFunc_IsEyeLimbusOpacityOverriden_bOverriden, const struct FCharacterAppearance_Preset& CallFunc_GetSelectedArchetypeData_OutArchetype, const struct FEyeAppearance& K2Node_Select_Default, double K2Node_FunctionResult_OutValue_ImplicitCast, double K2Node_FunctionResult_OutValue_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "GetEyeLimbusOpacity");

	Params::UBP_CharacterAppearanceComponent_C_GetEyeLimbusOpacity_Params Parms{};

	Parms.Side = Side;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_IsEyeLimbusOpacityOverriden_bOverriden = CallFunc_IsEyeLimbusOpacityOverriden_bOverriden;
	Parms.CallFunc_GetSelectedArchetypeData_OutArchetype = CallFunc_GetSelectedArchetypeData_OutArchetype;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_FunctionResult_OutValue_ImplicitCast = K2Node_FunctionResult_OutValue_ImplicitCast;
	Parms.K2Node_FunctionResult_OutValue_ImplicitCast_1 = K2Node_FunctionResult_OutValue_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetEyeLimbusOpacityOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::ResetEyeLimbusOpacityOverride(enum class EEyeSide Side)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "ResetEyeLimbusOpacityOverride");

	Params::UBP_CharacterAppearanceComponent_C_ResetEyeLimbusOpacityOverride_Params Parms{};

	Parms.Side = Side;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetEyeLimbusOpacityOverride
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Override                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetEyeLimbusOpacity_OutValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeSide                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEyeAppearance              K2Node_Select_Default                                            (NoDestructor)
// struct FEyeAppearance              CallFunc_GetEyeData_OutValue                                     (NoDestructor)
// struct FEyeAppearance              K2Node_SetFieldsInStruct_StructOut                               (NoDestructor)
// float                              K2Node_SetFieldsInStruct_LimbusOpacity_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::SetEyeLimbusOpacityOverride(enum class EEyeSide Side, double Override, class AActor* CallFunc_GetOwner_ReturnValue, double CallFunc_GetEyeLimbusOpacity_OutValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class EEyeSide Temp_byte_Variable, const struct FEyeAppearance& K2Node_Select_Default, const struct FEyeAppearance& CallFunc_GetEyeData_OutValue, const struct FEyeAppearance& K2Node_SetFieldsInStruct_StructOut, float K2Node_SetFieldsInStruct_LimbusOpacity_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "SetEyeLimbusOpacityOverride");

	Params::UBP_CharacterAppearanceComponent_C_SetEyeLimbusOpacityOverride_Params Parms{};

	Parms.Side = Side;
	Parms.Override = Override;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetEyeLimbusOpacity_OutValue = CallFunc_GetEyeLimbusOpacity_OutValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetEyeData_OutValue = CallFunc_GetEyeData_OutValue;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;
	Parms.K2Node_SetFieldsInStruct_LimbusOpacity_ImplicitCast = K2Node_SetFieldsInStruct_LimbusOpacity_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsEyeIrisDetailOverriden
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bOverriden                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeSide                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEyeAppearance              K2Node_Select_Default                                            (NoDestructor)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::IsEyeIrisDetailOverriden(enum class EEyeSide Side, bool* bOverriden, enum class EEyeSide Temp_byte_Variable, const struct FEyeAppearance& K2Node_Select_Default, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "IsEyeIrisDetailOverriden");

	Params::UBP_CharacterAppearanceComponent_C_IsEyeIrisDetailOverriden_Params Parms{};

	Parms.Side = Side;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast = CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (bOverriden != nullptr)
		*bOverriden = Parms.bOverriden;

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetEyeIrisDetail
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             OutValue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeSide                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEyeIrisDetailOverriden_bOverriden                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterAppearance_Preset CallFunc_GetSelectedArchetypeData_OutArchetype                   (None)
// struct FEyeAppearance              K2Node_Select_Default                                            (NoDestructor)
// double                             K2Node_FunctionResult_OutValue_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_OutValue_ImplicitCast_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::GetEyeIrisDetail(enum class EEyeSide Side, double* OutValue, enum class EEyeSide Temp_byte_Variable, bool CallFunc_IsEyeIrisDetailOverriden_bOverriden, const struct FCharacterAppearance_Preset& CallFunc_GetSelectedArchetypeData_OutArchetype, const struct FEyeAppearance& K2Node_Select_Default, double K2Node_FunctionResult_OutValue_ImplicitCast, double K2Node_FunctionResult_OutValue_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "GetEyeIrisDetail");

	Params::UBP_CharacterAppearanceComponent_C_GetEyeIrisDetail_Params Parms{};

	Parms.Side = Side;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_IsEyeIrisDetailOverriden_bOverriden = CallFunc_IsEyeIrisDetailOverriden_bOverriden;
	Parms.CallFunc_GetSelectedArchetypeData_OutArchetype = CallFunc_GetSelectedArchetypeData_OutArchetype;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_FunctionResult_OutValue_ImplicitCast = K2Node_FunctionResult_OutValue_ImplicitCast;
	Parms.K2Node_FunctionResult_OutValue_ImplicitCast_1 = K2Node_FunctionResult_OutValue_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetEyeIrisDetailOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::ResetEyeIrisDetailOverride(enum class EEyeSide Side)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "ResetEyeIrisDetailOverride");

	Params::UBP_CharacterAppearanceComponent_C_ResetEyeIrisDetailOverride_Params Parms{};

	Parms.Side = Side;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetEyeIrisDetailOverride
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Override                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetEyeIrisDetail_OutValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeSide                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEyeAppearance              K2Node_Select_Default                                            (NoDestructor)
// struct FEyeAppearance              CallFunc_GetEyeData_OutValue                                     (NoDestructor)
// struct FEyeAppearance              K2Node_SetFieldsInStruct_StructOut                               (NoDestructor)
// float                              K2Node_SetFieldsInStruct_IrisDetail_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::SetEyeIrisDetailOverride(enum class EEyeSide Side, double Override, class AActor* CallFunc_GetOwner_ReturnValue, double CallFunc_GetEyeIrisDetail_OutValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class EEyeSide Temp_byte_Variable, const struct FEyeAppearance& K2Node_Select_Default, const struct FEyeAppearance& CallFunc_GetEyeData_OutValue, const struct FEyeAppearance& K2Node_SetFieldsInStruct_StructOut, float K2Node_SetFieldsInStruct_IrisDetail_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "SetEyeIrisDetailOverride");

	Params::UBP_CharacterAppearanceComponent_C_SetEyeIrisDetailOverride_Params Parms{};

	Parms.Side = Side;
	Parms.Override = Override;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetEyeIrisDetail_OutValue = CallFunc_GetEyeIrisDetail_OutValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetEyeData_OutValue = CallFunc_GetEyeData_OutValue;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;
	Parms.K2Node_SetFieldsInStruct_IrisDetail_ImplicitCast = K2Node_SetFieldsInStruct_IrisDetail_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetMakeupAppearance
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EMakeupType             Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMakeupAppearance           MakeupData                                                       (Parm, OutParm, NoDestructor)
// struct FDataTableRowHandle         CallFunc_GetMakeupData_Data                                      (NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetMakeupRoughness_Roughness                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetMakeupRoughness_Roughness_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetMakeupAlpha_Alpha                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetMakeupAlpha_Alpha_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetMakeupData_Data_1                                    (NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetMakeupData_Data_2                                    (NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetMakeupData_Data_3                                    (NoDestructor, HasGetValueTypeHash)
// struct FMakeupAppearance           K2Node_MakeStruct_MakeupAppearance                               (NoDestructor)
// float                              K2Node_MakeStruct_Color2Roughness_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_Color1Roughness_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_GlitterColorAlpha_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_ColorAlpha_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::GetMakeupAppearance(enum class EMakeupType Type, struct FMakeupAppearance* MakeupData, const struct FDataTableRowHandle& CallFunc_GetMakeupData_Data, double CallFunc_GetMakeupRoughness_Roughness, double CallFunc_GetMakeupRoughness_Roughness_1, double CallFunc_GetMakeupAlpha_Alpha, double CallFunc_GetMakeupAlpha_Alpha_1, const struct FDataTableRowHandle& CallFunc_GetMakeupData_Data_1, const struct FDataTableRowHandle& CallFunc_GetMakeupData_Data_2, const struct FDataTableRowHandle& CallFunc_GetMakeupData_Data_3, const struct FMakeupAppearance& K2Node_MakeStruct_MakeupAppearance, float K2Node_MakeStruct_Color2Roughness_ImplicitCast, float K2Node_MakeStruct_Color1Roughness_ImplicitCast, float K2Node_MakeStruct_GlitterColorAlpha_ImplicitCast, float K2Node_MakeStruct_ColorAlpha_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "GetMakeupAppearance");

	Params::UBP_CharacterAppearanceComponent_C_GetMakeupAppearance_Params Parms{};

	Parms.Type = Type;
	Parms.CallFunc_GetMakeupData_Data = CallFunc_GetMakeupData_Data;
	Parms.CallFunc_GetMakeupRoughness_Roughness = CallFunc_GetMakeupRoughness_Roughness;
	Parms.CallFunc_GetMakeupRoughness_Roughness_1 = CallFunc_GetMakeupRoughness_Roughness_1;
	Parms.CallFunc_GetMakeupAlpha_Alpha = CallFunc_GetMakeupAlpha_Alpha;
	Parms.CallFunc_GetMakeupAlpha_Alpha_1 = CallFunc_GetMakeupAlpha_Alpha_1;
	Parms.CallFunc_GetMakeupData_Data_1 = CallFunc_GetMakeupData_Data_1;
	Parms.CallFunc_GetMakeupData_Data_2 = CallFunc_GetMakeupData_Data_2;
	Parms.CallFunc_GetMakeupData_Data_3 = CallFunc_GetMakeupData_Data_3;
	Parms.K2Node_MakeStruct_MakeupAppearance = K2Node_MakeStruct_MakeupAppearance;
	Parms.K2Node_MakeStruct_Color2Roughness_ImplicitCast = K2Node_MakeStruct_Color2Roughness_ImplicitCast;
	Parms.K2Node_MakeStruct_Color1Roughness_ImplicitCast = K2Node_MakeStruct_Color1Roughness_ImplicitCast;
	Parms.K2Node_MakeStruct_GlitterColorAlpha_ImplicitCast = K2Node_MakeStruct_GlitterColorAlpha_ImplicitCast;
	Parms.K2Node_MakeStruct_ColorAlpha_ImplicitCast = K2Node_MakeStruct_ColorAlpha_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (MakeupData != nullptr)
		*MakeupData = std::move(Parms.MakeupData);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetFoundationData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_CharacterAppearanceComponent_C::ResetFoundationData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "ResetFoundationData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetFoundationData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FFoundationAppearance       OutFoundationData                                                (Parm, OutParm, NoDestructor)
// double                             CallFunc_GetFoundationRoughness_OutFoundationRoughness           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetFoundationBias_OutFoundationBias                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetFoundationOpacity_OutFoundationOpacity               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFoundationAppearance       K2Node_MakeStruct_FoundationAppearance                           (NoDestructor)
// float                              K2Node_MakeStruct_Roughness_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_Bias_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_Opacity_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::GetFoundationData(struct FFoundationAppearance* OutFoundationData, double CallFunc_GetFoundationRoughness_OutFoundationRoughness, double CallFunc_GetFoundationBias_OutFoundationBias, double CallFunc_GetFoundationOpacity_OutFoundationOpacity, const struct FFoundationAppearance& K2Node_MakeStruct_FoundationAppearance, float K2Node_MakeStruct_Roughness_ImplicitCast, float K2Node_MakeStruct_Bias_ImplicitCast, float K2Node_MakeStruct_Opacity_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "GetFoundationData");

	Params::UBP_CharacterAppearanceComponent_C_GetFoundationData_Params Parms{};

	Parms.CallFunc_GetFoundationRoughness_OutFoundationRoughness = CallFunc_GetFoundationRoughness_OutFoundationRoughness;
	Parms.CallFunc_GetFoundationBias_OutFoundationBias = CallFunc_GetFoundationBias_OutFoundationBias;
	Parms.CallFunc_GetFoundationOpacity_OutFoundationOpacity = CallFunc_GetFoundationOpacity_OutFoundationOpacity;
	Parms.K2Node_MakeStruct_FoundationAppearance = K2Node_MakeStruct_FoundationAppearance;
	Parms.K2Node_MakeStruct_Roughness_ImplicitCast = K2Node_MakeStruct_Roughness_ImplicitCast;
	Parms.K2Node_MakeStruct_Bias_ImplicitCast = K2Node_MakeStruct_Bias_ImplicitCast;
	Parms.K2Node_MakeStruct_Opacity_ImplicitCast = K2Node_MakeStruct_Opacity_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (OutFoundationData != nullptr)
		*OutFoundationData = std::move(Parms.OutFoundationData);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsFoundationRoughnessOverriden
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               bOverriden                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::IsFoundationRoughnessOverriden(bool* bOverriden, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "IsFoundationRoughnessOverriden");

	Params::UBP_CharacterAppearanceComponent_C_IsFoundationRoughnessOverriden_Params Parms{};

	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast = CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (bOverriden != nullptr)
		*bOverriden = Parms.bOverriden;

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetFoundationRoughness
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// double                             OutFoundationRoughness                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterAppearance_Preset CallFunc_GetSelectedArchetypeData_OutArchetype                   (None)
// bool                               CallFunc_IsFoundationRoughnessOverriden_bOverriden               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_OutFoundationRoughness_ImplicitCast        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_OutFoundationRoughness_ImplicitCast_1      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::GetFoundationRoughness(double* OutFoundationRoughness, const struct FCharacterAppearance_Preset& CallFunc_GetSelectedArchetypeData_OutArchetype, bool CallFunc_IsFoundationRoughnessOverriden_bOverriden, double K2Node_FunctionResult_OutFoundationRoughness_ImplicitCast, double K2Node_FunctionResult_OutFoundationRoughness_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "GetFoundationRoughness");

	Params::UBP_CharacterAppearanceComponent_C_GetFoundationRoughness_Params Parms{};

	Parms.CallFunc_GetSelectedArchetypeData_OutArchetype = CallFunc_GetSelectedArchetypeData_OutArchetype;
	Parms.CallFunc_IsFoundationRoughnessOverriden_bOverriden = CallFunc_IsFoundationRoughnessOverriden_bOverriden;
	Parms.K2Node_FunctionResult_OutFoundationRoughness_ImplicitCast = K2Node_FunctionResult_OutFoundationRoughness_ImplicitCast;
	Parms.K2Node_FunctionResult_OutFoundationRoughness_ImplicitCast_1 = K2Node_FunctionResult_OutFoundationRoughness_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (OutFoundationRoughness != nullptr)
		*OutFoundationRoughness = Parms.OutFoundationRoughness;

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetFoundationRoughnessOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_CharacterAppearanceComponent_C::ResetFoundationRoughnessOverride()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "ResetFoundationRoughnessOverride");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetFoundationRoughnessOverride
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewFoundationRoughness                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FFoundationAppearance       CallFunc_GetFoundationData_OutFoundationData                     (NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetFoundationRoughness_OutFoundationRoughness           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_Roughness_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::SetFoundationRoughnessOverride(double NewFoundationRoughness, class AActor* CallFunc_GetOwner_ReturnValue, const struct FFoundationAppearance& CallFunc_GetFoundationData_OutFoundationData, bool CallFunc_HasAuthority_ReturnValue, double CallFunc_GetFoundationRoughness_OutFoundationRoughness, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float K2Node_SetFieldsInStruct_Roughness_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "SetFoundationRoughnessOverride");

	Params::UBP_CharacterAppearanceComponent_C_SetFoundationRoughnessOverride_Params Parms{};

	Parms.NewFoundationRoughness = NewFoundationRoughness;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetFoundationData_OutFoundationData = CallFunc_GetFoundationData_OutFoundationData;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetFoundationRoughness_OutFoundationRoughness = CallFunc_GetFoundationRoughness_OutFoundationRoughness;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_SetFieldsInStruct_Roughness_ImplicitCast = K2Node_SetFieldsInStruct_Roughness_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsFoundationBiasOverriden
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               bOverriden                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::IsFoundationBiasOverriden(bool* bOverriden, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "IsFoundationBiasOverriden");

	Params::UBP_CharacterAppearanceComponent_C_IsFoundationBiasOverriden_Params Parms{};

	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast = CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (bOverriden != nullptr)
		*bOverriden = Parms.bOverriden;

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetFoundationBias
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// double                             OutFoundationBias                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterAppearance_Preset CallFunc_GetSelectedArchetypeData_OutArchetype                   (None)
// bool                               CallFunc_IsFoundationBiasOverriden_bOverriden                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_OutFoundationBias_ImplicitCast             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_OutFoundationBias_ImplicitCast_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::GetFoundationBias(double* OutFoundationBias, const struct FCharacterAppearance_Preset& CallFunc_GetSelectedArchetypeData_OutArchetype, bool CallFunc_IsFoundationBiasOverriden_bOverriden, double K2Node_FunctionResult_OutFoundationBias_ImplicitCast, double K2Node_FunctionResult_OutFoundationBias_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "GetFoundationBias");

	Params::UBP_CharacterAppearanceComponent_C_GetFoundationBias_Params Parms{};

	Parms.CallFunc_GetSelectedArchetypeData_OutArchetype = CallFunc_GetSelectedArchetypeData_OutArchetype;
	Parms.CallFunc_IsFoundationBiasOverriden_bOverriden = CallFunc_IsFoundationBiasOverriden_bOverriden;
	Parms.K2Node_FunctionResult_OutFoundationBias_ImplicitCast = K2Node_FunctionResult_OutFoundationBias_ImplicitCast;
	Parms.K2Node_FunctionResult_OutFoundationBias_ImplicitCast_1 = K2Node_FunctionResult_OutFoundationBias_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (OutFoundationBias != nullptr)
		*OutFoundationBias = Parms.OutFoundationBias;

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetFoundationBiasOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_CharacterAppearanceComponent_C::ResetFoundationBiasOverride()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "ResetFoundationBiasOverride");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetFoundationBiasOverride
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewFoundationBias                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FFoundationAppearance       CallFunc_GetFoundationData_OutFoundationData                     (NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetFoundationBias_OutFoundationBias                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_Bias_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::SetFoundationBiasOverride(double NewFoundationBias, class AActor* CallFunc_GetOwner_ReturnValue, const struct FFoundationAppearance& CallFunc_GetFoundationData_OutFoundationData, bool CallFunc_HasAuthority_ReturnValue, double CallFunc_GetFoundationBias_OutFoundationBias, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float K2Node_SetFieldsInStruct_Bias_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "SetFoundationBiasOverride");

	Params::UBP_CharacterAppearanceComponent_C_SetFoundationBiasOverride_Params Parms{};

	Parms.NewFoundationBias = NewFoundationBias;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetFoundationData_OutFoundationData = CallFunc_GetFoundationData_OutFoundationData;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetFoundationBias_OutFoundationBias = CallFunc_GetFoundationBias_OutFoundationBias;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_SetFieldsInStruct_Bias_ImplicitCast = K2Node_SetFieldsInStruct_Bias_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsFoundationOpacityOverriden
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               bOverriden                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::IsFoundationOpacityOverriden(bool* bOverriden, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "IsFoundationOpacityOverriden");

	Params::UBP_CharacterAppearanceComponent_C_IsFoundationOpacityOverriden_Params Parms{};

	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast = CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (bOverriden != nullptr)
		*bOverriden = Parms.bOverriden;

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetFoundationOpacity
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// double                             OutFoundationOpacity                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterAppearance_Preset CallFunc_GetSelectedArchetypeData_OutArchetype                   (None)
// bool                               CallFunc_IsFoundationOpacityOverriden_bOverriden                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_OutFoundationOpacity_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_OutFoundationOpacity_ImplicitCast_1        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::GetFoundationOpacity(double* OutFoundationOpacity, const struct FCharacterAppearance_Preset& CallFunc_GetSelectedArchetypeData_OutArchetype, bool CallFunc_IsFoundationOpacityOverriden_bOverriden, double K2Node_FunctionResult_OutFoundationOpacity_ImplicitCast, double K2Node_FunctionResult_OutFoundationOpacity_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "GetFoundationOpacity");

	Params::UBP_CharacterAppearanceComponent_C_GetFoundationOpacity_Params Parms{};

	Parms.CallFunc_GetSelectedArchetypeData_OutArchetype = CallFunc_GetSelectedArchetypeData_OutArchetype;
	Parms.CallFunc_IsFoundationOpacityOverriden_bOverriden = CallFunc_IsFoundationOpacityOverriden_bOverriden;
	Parms.K2Node_FunctionResult_OutFoundationOpacity_ImplicitCast = K2Node_FunctionResult_OutFoundationOpacity_ImplicitCast;
	Parms.K2Node_FunctionResult_OutFoundationOpacity_ImplicitCast_1 = K2Node_FunctionResult_OutFoundationOpacity_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (OutFoundationOpacity != nullptr)
		*OutFoundationOpacity = Parms.OutFoundationOpacity;

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetFoundationOpacityOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_CharacterAppearanceComponent_C::ResetFoundationOpacityOverride()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "ResetFoundationOpacityOverride");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetFoundationOpacityOverride
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewFoundationOpacity                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FFoundationAppearance       CallFunc_GetFoundationData_OutFoundationData                     (NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetFoundationOpacity_OutFoundationOpacity               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_Opacity_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::SetFoundationOpacityOverride(double NewFoundationOpacity, class AActor* CallFunc_GetOwner_ReturnValue, const struct FFoundationAppearance& CallFunc_GetFoundationData_OutFoundationData, bool CallFunc_HasAuthority_ReturnValue, double CallFunc_GetFoundationOpacity_OutFoundationOpacity, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float K2Node_SetFieldsInStruct_Opacity_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "SetFoundationOpacityOverride");

	Params::UBP_CharacterAppearanceComponent_C_SetFoundationOpacityOverride_Params Parms{};

	Parms.NewFoundationOpacity = NewFoundationOpacity;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetFoundationData_OutFoundationData = CallFunc_GetFoundationData_OutFoundationData;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetFoundationOpacity_OutFoundationOpacity = CallFunc_GetFoundationOpacity_OutFoundationOpacity;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_SetFieldsInStruct_Opacity_ImplicitCast = K2Node_SetFieldsInStruct_Opacity_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsLipGlossOverriden
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               bOverriden                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::IsLipGlossOverriden(bool* bOverriden, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "IsLipGlossOverriden");

	Params::UBP_CharacterAppearanceComponent_C_IsLipGlossOverriden_Params Parms{};

	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bOverriden != nullptr)
		*bOverriden = Parms.bOverriden;

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetLipGloss
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// double                             OutLipGloss                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterAppearance_Preset CallFunc_GetSelectedArchetypeData_OutArchetype                   (None)
// bool                               CallFunc_IsLipGlossOverriden_bOverriden                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_OutLipGloss_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::GetLipGloss(double* OutLipGloss, const struct FCharacterAppearance_Preset& CallFunc_GetSelectedArchetypeData_OutArchetype, bool CallFunc_IsLipGlossOverriden_bOverriden, double K2Node_FunctionResult_OutLipGloss_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "GetLipGloss");

	Params::UBP_CharacterAppearanceComponent_C_GetLipGloss_Params Parms{};

	Parms.CallFunc_GetSelectedArchetypeData_OutArchetype = CallFunc_GetSelectedArchetypeData_OutArchetype;
	Parms.CallFunc_IsLipGlossOverriden_bOverriden = CallFunc_IsLipGlossOverriden_bOverriden;
	Parms.K2Node_FunctionResult_OutLipGloss_ImplicitCast = K2Node_FunctionResult_OutLipGloss_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (OutLipGloss != nullptr)
		*OutLipGloss = Parms.OutLipGloss;

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetLipGlossOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_CharacterAppearanceComponent_C::ResetLipGlossOverride()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "ResetLipGlossOverride");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetLipGlossOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewLipGloss                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetLipGloss_OutLipGloss                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetLipGloss_OutLipGloss_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::SetLipGlossOverride(double NewLipGloss, class AActor* CallFunc_GetOwner_ReturnValue, double CallFunc_GetLipGloss_OutLipGloss, bool CallFunc_HasAuthority_ReturnValue, double CallFunc_GetLipGloss_OutLipGloss_1, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "SetLipGlossOverride");

	Params::UBP_CharacterAppearanceComponent_C_SetLipGlossOverride_Params Parms{};

	Parms.NewLipGloss = NewLipGloss;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetLipGloss_OutLipGloss = CallFunc_GetLipGloss_OutLipGloss;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetLipGloss_OutLipGloss_1 = CallFunc_GetLipGloss_OutLipGloss_1;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsRednessOverriden
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               bOverriden                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::IsRednessOverriden(bool* bOverriden, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "IsRednessOverriden");

	Params::UBP_CharacterAppearanceComponent_C_IsRednessOverriden_Params Parms{};

	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bOverriden != nullptr)
		*bOverriden = Parms.bOverriden;

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetRedness
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// double                             OutRedness                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterAppearance_Preset CallFunc_GetSelectedArchetypeData_OutArchetype                   (None)
// bool                               CallFunc_IsRednessOverriden_bOverriden                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_OutRedness_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::GetRedness(double* OutRedness, const struct FCharacterAppearance_Preset& CallFunc_GetSelectedArchetypeData_OutArchetype, bool CallFunc_IsRednessOverriden_bOverriden, double K2Node_FunctionResult_OutRedness_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "GetRedness");

	Params::UBP_CharacterAppearanceComponent_C_GetRedness_Params Parms{};

	Parms.CallFunc_GetSelectedArchetypeData_OutArchetype = CallFunc_GetSelectedArchetypeData_OutArchetype;
	Parms.CallFunc_IsRednessOverriden_bOverriden = CallFunc_IsRednessOverriden_bOverriden;
	Parms.K2Node_FunctionResult_OutRedness_ImplicitCast = K2Node_FunctionResult_OutRedness_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (OutRedness != nullptr)
		*OutRedness = Parms.OutRedness;

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetRednessOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_CharacterAppearanceComponent_C::ResetRednessOverride()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "ResetRednessOverride");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetRednessOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewRedness                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetRedness_OutRedness                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetRedness_OutRedness_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::SetRednessOverride(double NewRedness, class AActor* CallFunc_GetOwner_ReturnValue, double CallFunc_GetRedness_OutRedness, bool CallFunc_HasAuthority_ReturnValue, double CallFunc_GetRedness_OutRedness_1, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "SetRednessOverride");

	Params::UBP_CharacterAppearanceComponent_C_SetRednessOverride_Params Parms{};

	Parms.NewRedness = NewRedness;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetRedness_OutRedness = CallFunc_GetRedness_OutRedness;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetRedness_OutRedness_1 = CallFunc_GetRedness_OutRedness_1;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetDefaultRealmDifficulty
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class ERealmDifficulty        RealmDifficulty                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERealmDifficulty        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERealmDifficulty        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFeatureFlagEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERealmDifficulty        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::GetDefaultRealmDifficulty(enum class ERealmDifficulty* RealmDifficulty, bool Temp_bool_Variable, enum class ERealmDifficulty Temp_byte_Variable, enum class ERealmDifficulty Temp_byte_Variable_1, bool CallFunc_IsFeatureFlagEnabled_ReturnValue, enum class ERealmDifficulty K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "GetDefaultRealmDifficulty");

	Params::UBP_CharacterAppearanceComponent_C_GetDefaultRealmDifficulty_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_IsFeatureFlagEnabled_ReturnValue = CallFunc_IsFeatureFlagEnabled_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (RealmDifficulty != nullptr)
		*RealmDifficulty = Parms.RealmDifficulty;

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsMottlingOverriden
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               bOverriden                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::IsMottlingOverriden(bool* bOverriden, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "IsMottlingOverriden");

	Params::UBP_CharacterAppearanceComponent_C_IsMottlingOverriden_Params Parms{};

	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bOverriden != nullptr)
		*bOverriden = Parms.bOverriden;

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetMottling
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// double                             OutMottling                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMottlingOverriden_bOverriden                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::GetMottling(double* OutMottling, bool CallFunc_IsMottlingOverriden_bOverriden)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "GetMottling");

	Params::UBP_CharacterAppearanceComponent_C_GetMottling_Params Parms{};

	Parms.CallFunc_IsMottlingOverriden_bOverriden = CallFunc_IsMottlingOverriden_bOverriden;

	UObject::ProcessEvent(Func, &Parms);

	if (OutMottling != nullptr)
		*OutMottling = Parms.OutMottling;

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetMottlingOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_CharacterAppearanceComponent_C::ResetMottlingOverride()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "ResetMottlingOverride");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetMottlingOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewMottling                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetMottling_OutMottling                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetMottling_OutMottling_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::SetMottlingOverride(double NewMottling, class AActor* CallFunc_GetOwner_ReturnValue, double CallFunc_GetMottling_OutMottling, bool CallFunc_HasAuthority_ReturnValue, double CallFunc_GetMottling_OutMottling_1, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "SetMottlingOverride");

	Params::UBP_CharacterAppearanceComponent_C_SetMottlingOverride_Params Parms{};

	Parms.NewMottling = NewMottling;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetMottling_OutMottling = CallFunc_GetMottling_OutMottling;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetMottling_OutMottling_1 = CallFunc_GetMottling_OutMottling_1;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsEyeScaleOverriden
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               bOverriden                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::IsEyeScaleOverriden(bool* bOverriden, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "IsEyeScaleOverriden");

	Params::UBP_CharacterAppearanceComponent_C_IsEyeScaleOverriden_Params Parms{};

	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bOverriden != nullptr)
		*bOverriden = Parms.bOverriden;

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetEyeScale
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// double                             OutEyeScale                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEyeScaleOverriden_bOverriden                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterAppearance_Preset CallFunc_GetSelectedArchetypeData_OutArchetype                   (None)
// double                             K2Node_FunctionResult_OutEyeScale_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::GetEyeScale(double* OutEyeScale, bool CallFunc_IsEyeScaleOverriden_bOverriden, const struct FCharacterAppearance_Preset& CallFunc_GetSelectedArchetypeData_OutArchetype, double K2Node_FunctionResult_OutEyeScale_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "GetEyeScale");

	Params::UBP_CharacterAppearanceComponent_C_GetEyeScale_Params Parms{};

	Parms.CallFunc_IsEyeScaleOverriden_bOverriden = CallFunc_IsEyeScaleOverriden_bOverriden;
	Parms.CallFunc_GetSelectedArchetypeData_OutArchetype = CallFunc_GetSelectedArchetypeData_OutArchetype;
	Parms.K2Node_FunctionResult_OutEyeScale_ImplicitCast = K2Node_FunctionResult_OutEyeScale_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (OutEyeScale != nullptr)
		*OutEyeScale = Parms.OutEyeScale;

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetEyeScaleOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_CharacterAppearanceComponent_C::ResetEyeScaleOverride()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "ResetEyeScaleOverride");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetEyeScaleOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewEyeScale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetEyeScale_OutEyeScale                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetEyeScale_OutEyeScale_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::SetEyeScaleOverride(double NewEyeScale, class AActor* CallFunc_GetOwner_ReturnValue, double CallFunc_GetEyeScale_OutEyeScale, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_GetEyeScale_OutEyeScale_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "SetEyeScaleOverride");

	Params::UBP_CharacterAppearanceComponent_C_SetEyeScaleOverride_Params Parms{};

	Parms.NewEyeScale = NewEyeScale;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetEyeScale_OutEyeScale = CallFunc_GetEyeScale_OutEyeScale;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetEyeScale_OutEyeScale_1 = CallFunc_GetEyeScale_OutEyeScale_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetMakeupRoughness
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMakeupType             Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMakeupOption           Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::ResetMakeupRoughness(enum class EMakeupType Type, enum class EMakeupOption Option)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "ResetMakeupRoughness");

	Params::UBP_CharacterAppearanceComponent_C_ResetMakeupRoughness_Params Parms{};

	Parms.Type = Type;
	Parms.Option = Option;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsMakeupRoughnessOverriden
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EMakeupType             Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMakeupOption           Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsOverriden                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMakeupOption           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMakeupType             Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMakeupAppearance           K2Node_Select_Default                                            (NoDestructor)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::IsMakeupRoughnessOverriden(enum class EMakeupType Type, enum class EMakeupOption Option, bool* bIsOverriden, enum class EMakeupOption Temp_byte_Variable, float Temp_real_Variable, float Temp_real_Variable_1, enum class EMakeupType Temp_byte_Variable_1, const struct FMakeupAppearance& K2Node_Select_Default, float K2Node_Select_Default_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "IsMakeupRoughnessOverriden");

	Params::UBP_CharacterAppearanceComponent_C_IsMakeupRoughnessOverriden_Params Parms{};

	Parms.Type = Type;
	Parms.Option = Option;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast = CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsOverriden != nullptr)
		*bIsOverriden = Parms.bIsOverriden;

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetMakeupRoughness
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EMakeupType             Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMakeupOption           Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Roughness                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMakeupOption           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMakeupRoughnessOverriden_bIsOverriden                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMakeupType             Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMakeupOption           Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMakeupType             Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterAppearance_Preset CallFunc_GetSelectedArchetypeData_OutArchetype                   (None)
// struct FMakeupAppearance           K2Node_Select_Default                                            (NoDestructor)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMakeupAppearance           K2Node_Select_Default_2                                          (NoDestructor)
// float                              K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_Roughness_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_Roughness_ImplicitCast_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::GetMakeupRoughness(enum class EMakeupType Type, enum class EMakeupOption Option, double* Roughness, enum class EMakeupOption Temp_byte_Variable, bool CallFunc_IsMakeupRoughnessOverriden_bIsOverriden, float Temp_real_Variable, float Temp_real_Variable_1, enum class EMakeupType Temp_byte_Variable_1, enum class EMakeupOption Temp_byte_Variable_2, float Temp_real_Variable_2, float Temp_real_Variable_3, enum class EMakeupType Temp_byte_Variable_3, const struct FCharacterAppearance_Preset& CallFunc_GetSelectedArchetypeData_OutArchetype, const struct FMakeupAppearance& K2Node_Select_Default, float K2Node_Select_Default_1, const struct FMakeupAppearance& K2Node_Select_Default_2, float K2Node_Select_Default_3, double K2Node_FunctionResult_Roughness_ImplicitCast, double K2Node_FunctionResult_Roughness_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "GetMakeupRoughness");

	Params::UBP_CharacterAppearanceComponent_C_GetMakeupRoughness_Params Parms{};

	Parms.Type = Type;
	Parms.Option = Option;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_IsMakeupRoughnessOverriden_bIsOverriden = CallFunc_IsMakeupRoughnessOverriden_bIsOverriden;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_real_Variable_2 = Temp_real_Variable_2;
	Parms.Temp_real_Variable_3 = Temp_real_Variable_3;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_GetSelectedArchetypeData_OutArchetype = CallFunc_GetSelectedArchetypeData_OutArchetype;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_FunctionResult_Roughness_ImplicitCast = K2Node_FunctionResult_Roughness_ImplicitCast;
	Parms.K2Node_FunctionResult_Roughness_ImplicitCast_1 = K2Node_FunctionResult_Roughness_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Roughness != nullptr)
		*Roughness = Parms.Roughness;

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetMakeupRoughnessOverride
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMakeupType             Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMakeupOption           Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewRoughness                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMakeupType             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetMakeupRoughness_Roughness                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EMakeupType             Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetMakeupRoughness_Roughness_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMakeupAppearance           K2Node_Select_Default                                            (NoDestructor)
// struct FMakeupAppearance           K2Node_SetFieldsInStruct_StructOut                               (NoDestructor)
// double                             CallFunc_GetMakeupAlpha_Alpha                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetMakeupData_Data                                      (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMakeupAppearance           K2Node_Select_Default_1                                          (NoDestructor)
// struct FMakeupAppearance           K2Node_SetFieldsInStruct_StructOut_1                             (NoDestructor)
// float                              K2Node_SetFieldsInStruct_Color2Roughness_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_Color1Roughness_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::SetMakeupRoughnessOverride(enum class EMakeupType Type, enum class EMakeupOption Option, double NewRoughness, enum class EMakeupType Temp_byte_Variable, double CallFunc_GetMakeupRoughness_Roughness, class AActor* CallFunc_GetOwner_ReturnValue, enum class EMakeupType Temp_byte_Variable_1, bool CallFunc_HasAuthority_ReturnValue, double CallFunc_GetMakeupRoughness_Roughness_1, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FMakeupAppearance& K2Node_Select_Default, const struct FMakeupAppearance& K2Node_SetFieldsInStruct_StructOut, double CallFunc_GetMakeupAlpha_Alpha, const struct FDataTableRowHandle& CallFunc_GetMakeupData_Data, bool K2Node_SwitchEnum_CmpSuccess, const struct FMakeupAppearance& K2Node_Select_Default_1, const struct FMakeupAppearance& K2Node_SetFieldsInStruct_StructOut_1, float K2Node_SetFieldsInStruct_Color2Roughness_ImplicitCast, float K2Node_SetFieldsInStruct_Color1Roughness_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "SetMakeupRoughnessOverride");

	Params::UBP_CharacterAppearanceComponent_C_SetMakeupRoughnessOverride_Params Parms{};

	Parms.Type = Type;
	Parms.Option = Option;
	Parms.NewRoughness = NewRoughness;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetMakeupRoughness_Roughness = CallFunc_GetMakeupRoughness_Roughness;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetMakeupRoughness_Roughness_1 = CallFunc_GetMakeupRoughness_Roughness_1;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;
	Parms.CallFunc_GetMakeupAlpha_Alpha = CallFunc_GetMakeupAlpha_Alpha;
	Parms.CallFunc_GetMakeupData_Data = CallFunc_GetMakeupData_Data;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_SetFieldsInStruct_StructOut_1 = K2Node_SetFieldsInStruct_StructOut_1;
	Parms.K2Node_SetFieldsInStruct_Color2Roughness_ImplicitCast = K2Node_SetFieldsInStruct_Color2Roughness_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_Color1Roughness_ImplicitCast = K2Node_SetFieldsInStruct_Color1Roughness_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SendAllMakeupEvents
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetMakeupData_Data                                      (NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetMakeupAlpha_Alpha                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetMakeupRoughness_Roughness                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFoundationAppearance       CallFunc_GetFoundationData_OutFoundationData                     (NoDestructor)
// double                             CallFunc_GetLipGloss_OutLipGloss                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::SendAllMakeupEvents(int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, uint8 CallFunc_Conv_IntToByte_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_1, uint8 CallFunc_GetValidValue_ReturnValue_1, uint8 CallFunc_Conv_IntToByte_ReturnValue_3, const struct FDataTableRowHandle& CallFunc_GetMakeupData_Data, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue_1, double CallFunc_GetMakeupAlpha_Alpha, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, double CallFunc_GetMakeupRoughness_Roughness, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FFoundationAppearance& CallFunc_GetFoundationData_OutFoundationData, double CallFunc_GetLipGloss_OutLipGloss)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "SendAllMakeupEvents");

	Params::UBP_CharacterAppearanceComponent_C_SendAllMakeupEvents_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue = CallFunc_GetEnumeratorValueFromIndex_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_2 = CallFunc_Conv_IntToByte_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetValidValue_ReturnValue_1 = CallFunc_GetValidValue_ReturnValue_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_3 = CallFunc_Conv_IntToByte_ReturnValue_3;
	Parms.CallFunc_GetMakeupData_Data = CallFunc_GetMakeupData_Data;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue_1 = CallFunc_GetEnumeratorValueFromIndex_ReturnValue_1;
	Parms.CallFunc_GetMakeupAlpha_Alpha = CallFunc_GetMakeupAlpha_Alpha;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_1 = CallFunc_Conv_ByteToInt_ReturnValue_1;
	Parms.CallFunc_GetMakeupRoughness_Roughness = CallFunc_GetMakeupRoughness_Roughness;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_MakeLiteralInt_ReturnValue_1 = CallFunc_MakeLiteralInt_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetFoundationData_OutFoundationData = CallFunc_GetFoundationData_OutFoundationData;
	Parms.CallFunc_GetLipGloss_OutLipGloss = CallFunc_GetLipGloss_OutLipGloss;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetMakeupType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMakeupType             Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::ResetMakeupType(enum class EMakeupType Type, int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "ResetMakeupType");

	Params::UBP_CharacterAppearanceComponent_C_ResetMakeupType_Params Parms{};

	Parms.Type = Type;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue = CallFunc_GetEnumeratorValueFromIndex_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetAllMakeupData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::ResetAllMakeupData(int32 CallFunc_MakeLiteralInt_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "ResetAllMakeupData");

	Params::UBP_CharacterAppearanceComponent_C_ResetAllMakeupData_Params Parms{};

	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue = CallFunc_GetEnumeratorValueFromIndex_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetMakeupAlpha
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMakeupType             Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMakeupOption           Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::ResetMakeupAlpha(enum class EMakeupType Type, enum class EMakeupOption Option)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "ResetMakeupAlpha");

	Params::UBP_CharacterAppearanceComponent_C_ResetMakeupAlpha_Params Parms{};

	Parms.Type = Type;
	Parms.Option = Option;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetMakeupData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMakeupType             Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMakeupOption           Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::ResetMakeupData(enum class EMakeupType Type, enum class EMakeupOption Option)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "ResetMakeupData");

	Params::UBP_CharacterAppearanceComponent_C_ResetMakeupData_Params Parms{};

	Parms.Type = Type;
	Parms.Option = Option;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsMakeupAlphaOverriden
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EMakeupType             Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMakeupOption           Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsOverriden                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMakeupOption           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMakeupType             Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMakeupAppearance           K2Node_Select_Default                                            (NoDestructor)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::IsMakeupAlphaOverriden(enum class EMakeupType Type, enum class EMakeupOption Option, bool* bIsOverriden, enum class EMakeupOption Temp_byte_Variable, float Temp_real_Variable, enum class EMakeupType Temp_byte_Variable_1, const struct FMakeupAppearance& K2Node_Select_Default, float K2Node_Select_Default_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "IsMakeupAlphaOverriden");

	Params::UBP_CharacterAppearanceComponent_C_IsMakeupAlphaOverriden_Params Parms{};

	Parms.Type = Type;
	Parms.Option = Option;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast = CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsOverriden != nullptr)
		*bIsOverriden = Parms.bIsOverriden;

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsMakeupDataOverriden
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EMakeupType             Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMakeupOption           Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsOverriden                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMakeupOption           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMakeupType             Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMakeupAppearance           K2Node_Select_Default                                            (NoDestructor)
// struct FDataTableRowHandle         K2Node_Select_Default_1                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidRowHandle_IsValid                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::IsMakeupDataOverriden(enum class EMakeupType Type, enum class EMakeupOption Option, bool* bIsOverriden, enum class EMakeupOption Temp_byte_Variable, enum class EMakeupType Temp_byte_Variable_1, const struct FMakeupAppearance& K2Node_Select_Default, const struct FDataTableRowHandle& K2Node_Select_Default_1, bool CallFunc_IsValidRowHandle_IsValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "IsMakeupDataOverriden");

	Params::UBP_CharacterAppearanceComponent_C_IsMakeupDataOverriden_Params Parms{};

	Parms.Type = Type;
	Parms.Option = Option;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_IsValidRowHandle_IsValid = CallFunc_IsValidRowHandle_IsValid;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsOverriden != nullptr)
		*bIsOverriden = Parms.bIsOverriden;

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetMakeupAlpha
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EMakeupType             Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMakeupOption           Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             ALPHA                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMakeupOption           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMakeupAlphaOverriden_bIsOverriden                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMakeupType             Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMakeupOption           Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMakeupType             Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterAppearance_Preset CallFunc_GetSelectedArchetypeData_OutArchetype                   (None)
// struct FMakeupAppearance           K2Node_Select_Default                                            (NoDestructor)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMakeupAppearance           K2Node_Select_Default_2                                          (NoDestructor)
// float                              K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_Alpha_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_Alpha_ImplicitCast_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::GetMakeupAlpha(enum class EMakeupType Type, enum class EMakeupOption Option, double* ALPHA, enum class EMakeupOption Temp_byte_Variable, bool CallFunc_IsMakeupAlphaOverriden_bIsOverriden, float Temp_real_Variable, enum class EMakeupType Temp_byte_Variable_1, enum class EMakeupOption Temp_byte_Variable_2, float Temp_real_Variable_1, enum class EMakeupType Temp_byte_Variable_3, const struct FCharacterAppearance_Preset& CallFunc_GetSelectedArchetypeData_OutArchetype, const struct FMakeupAppearance& K2Node_Select_Default, float K2Node_Select_Default_1, const struct FMakeupAppearance& K2Node_Select_Default_2, float K2Node_Select_Default_3, double K2Node_FunctionResult_Alpha_ImplicitCast, double K2Node_FunctionResult_Alpha_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "GetMakeupAlpha");

	Params::UBP_CharacterAppearanceComponent_C_GetMakeupAlpha_Params Parms{};

	Parms.Type = Type;
	Parms.Option = Option;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_IsMakeupAlphaOverriden_bIsOverriden = CallFunc_IsMakeupAlphaOverriden_bIsOverriden;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_GetSelectedArchetypeData_OutArchetype = CallFunc_GetSelectedArchetypeData_OutArchetype;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_FunctionResult_Alpha_ImplicitCast = K2Node_FunctionResult_Alpha_ImplicitCast;
	Parms.K2Node_FunctionResult_Alpha_ImplicitCast_1 = K2Node_FunctionResult_Alpha_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (ALPHA != nullptr)
		*ALPHA = Parms.ALPHA;

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetMakeupData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EMakeupType             Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMakeupOption           Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         Data                                                             (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         DataToReturn                                                     (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// TMap<enum class EMakeupType, struct FDataTableRowHandle>DefaultMasks                                                     (Edit, BlueprintVisible)
// TMap<enum class EMakeupType, struct FDataTableRowHandle>K2Node_MakeVariable_MakeVariableOutput                           (None)
// bool                               CallFunc_IsMakeupDataOverriden_bIsOverriden                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMakeupType             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMakeupOption           Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMakeupType             Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMakeupOption           Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_Map_Find_Value                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesDataTableRowExist_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterAppearance_Preset CallFunc_GetSelectedArchetypeData_OutArchetype                   (None)
// struct FMakeupAppearance           K2Node_Select_Default                                            (NoDestructor)
// struct FDataTableRowHandle         K2Node_Select_Default_1                                          (NoDestructor, HasGetValueTypeHash)
// struct FMakeupAppearance           K2Node_Select_Default_2                                          (NoDestructor)
// struct FDataTableRowHandle         K2Node_Select_Default_3                                          (NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::GetMakeupData(enum class EMakeupType Type, enum class EMakeupOption Option, struct FDataTableRowHandle* Data, const struct FDataTableRowHandle& DataToReturn, TMap<enum class EMakeupType, struct FDataTableRowHandle> DefaultMasks, TMap<enum class EMakeupType, struct FDataTableRowHandle> K2Node_MakeVariable_MakeVariableOutput, bool CallFunc_IsMakeupDataOverriden_bIsOverriden, enum class EMakeupType Temp_byte_Variable, enum class EMakeupOption Temp_byte_Variable_1, enum class EMakeupType Temp_byte_Variable_2, enum class EMakeupOption Temp_byte_Variable_3, bool K2Node_SwitchEnum_CmpSuccess, const struct FDataTableRowHandle& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_DoesDataTableRowExist_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FCharacterAppearance_Preset& CallFunc_GetSelectedArchetypeData_OutArchetype, const struct FMakeupAppearance& K2Node_Select_Default, const struct FDataTableRowHandle& K2Node_Select_Default_1, const struct FMakeupAppearance& K2Node_Select_Default_2, const struct FDataTableRowHandle& K2Node_Select_Default_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "GetMakeupData");

	Params::UBP_CharacterAppearanceComponent_C_GetMakeupData_Params Parms{};

	Parms.Type = Type;
	Parms.Option = Option;
	Parms.DataToReturn = DataToReturn;
	Parms.DefaultMasks = DefaultMasks;
	Parms.K2Node_MakeVariable_MakeVariableOutput = K2Node_MakeVariable_MakeVariableOutput;
	Parms.CallFunc_IsMakeupDataOverriden_bIsOverriden = CallFunc_IsMakeupDataOverriden_bIsOverriden;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_DoesDataTableRowExist_ReturnValue = CallFunc_DoesDataTableRowExist_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSelectedArchetypeData_OutArchetype = CallFunc_GetSelectedArchetypeData_OutArchetype;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;

	UObject::ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = std::move(Parms.Data);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetMakeupAlphaOverride
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMakeupType             Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMakeupOption           Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewAlpha                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetMakeupAlpha_Alpha                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMakeupType             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMakeupType             Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMakeupAppearance           K2Node_Select_Default                                            (NoDestructor)
// struct FMakeupAppearance           K2Node_SetFieldsInStruct_StructOut                               (NoDestructor)
// double                             CallFunc_GetMakeupRoughness_Roughness                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetMakeupAlpha_Alpha_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetMakeupData_Data                                      (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMakeupAppearance           K2Node_Select_Default_1                                          (NoDestructor)
// struct FMakeupAppearance           K2Node_SetFieldsInStruct_StructOut_1                             (NoDestructor)
// float                              K2Node_SetFieldsInStruct_GlitterColorAlpha_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_ColorAlpha_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::SetMakeupAlphaOverride(enum class EMakeupType Type, enum class EMakeupOption Option, double NewAlpha, class AActor* CallFunc_GetOwner_ReturnValue, double CallFunc_GetMakeupAlpha_Alpha, bool CallFunc_HasAuthority_ReturnValue, enum class EMakeupType Temp_byte_Variable, enum class EMakeupType Temp_byte_Variable_1, const struct FMakeupAppearance& K2Node_Select_Default, const struct FMakeupAppearance& K2Node_SetFieldsInStruct_StructOut, double CallFunc_GetMakeupRoughness_Roughness, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_GetMakeupAlpha_Alpha_1, const struct FDataTableRowHandle& CallFunc_GetMakeupData_Data, bool K2Node_SwitchEnum_CmpSuccess, const struct FMakeupAppearance& K2Node_Select_Default_1, const struct FMakeupAppearance& K2Node_SetFieldsInStruct_StructOut_1, float K2Node_SetFieldsInStruct_GlitterColorAlpha_ImplicitCast, float K2Node_SetFieldsInStruct_ColorAlpha_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "SetMakeupAlphaOverride");

	Params::UBP_CharacterAppearanceComponent_C_SetMakeupAlphaOverride_Params Parms{};

	Parms.Type = Type;
	Parms.Option = Option;
	Parms.NewAlpha = NewAlpha;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetMakeupAlpha_Alpha = CallFunc_GetMakeupAlpha_Alpha;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;
	Parms.CallFunc_GetMakeupRoughness_Roughness = CallFunc_GetMakeupRoughness_Roughness;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetMakeupAlpha_Alpha_1 = CallFunc_GetMakeupAlpha_Alpha_1;
	Parms.CallFunc_GetMakeupData_Data = CallFunc_GetMakeupData_Data;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_SetFieldsInStruct_StructOut_1 = K2Node_SetFieldsInStruct_StructOut_1;
	Parms.K2Node_SetFieldsInStruct_GlitterColorAlpha_ImplicitCast = K2Node_SetFieldsInStruct_GlitterColorAlpha_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_ColorAlpha_ImplicitCast = K2Node_SetFieldsInStruct_ColorAlpha_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetMakeupDataOverride
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMakeupType             Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMakeupOption           Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         NewData                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// enum class EMakeupOption           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetMakeupData_Data                                      (NoDestructor, HasGetValueTypeHash)
// enum class EMakeupType             Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetMakeupRoughness_Roughness                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetMakeupAlpha_Alpha                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetMakeupData_Data_1                                    (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RowHandlesEqual_Equal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMakeupAppearance           K2Node_Select_Default                                            (NoDestructor)
// struct FDataTableRowHandle         K2Node_Select_Default_1                                          (NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::SetMakeupDataOverride(enum class EMakeupType Type, enum class EMakeupOption Option, const struct FDataTableRowHandle& NewData, enum class EMakeupOption Temp_byte_Variable, const struct FDataTableRowHandle& CallFunc_GetMakeupData_Data, enum class EMakeupType Temp_byte_Variable_1, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, double CallFunc_GetMakeupRoughness_Roughness, double CallFunc_GetMakeupAlpha_Alpha, const struct FDataTableRowHandle& CallFunc_GetMakeupData_Data_1, bool CallFunc_RowHandlesEqual_Equal, bool CallFunc_Not_PreBool_ReturnValue, const struct FMakeupAppearance& K2Node_Select_Default, const struct FDataTableRowHandle& K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "SetMakeupDataOverride");

	Params::UBP_CharacterAppearanceComponent_C_SetMakeupDataOverride_Params Parms{};

	Parms.Type = Type;
	Parms.Option = Option;
	Parms.NewData = NewData;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetMakeupData_Data = CallFunc_GetMakeupData_Data;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetMakeupRoughness_Roughness = CallFunc_GetMakeupRoughness_Roughness;
	Parms.CallFunc_GetMakeupAlpha_Alpha = CallFunc_GetMakeupAlpha_Alpha;
	Parms.CallFunc_GetMakeupData_Data_1 = CallFunc_GetMakeupData_Data_1;
	Parms.CallFunc_RowHandlesEqual_Equal = CallFunc_RowHandlesEqual_Equal;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.UpdateAncestry
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::UpdateAncestry(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "UpdateAncestry");

	Params::UBP_CharacterAppearanceComponent_C_UpdateAncestry_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetFamilyTree
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FDataTableRowHandle> FullFamilyTree                                                   (Parm, OutParm)

void UBP_CharacterAppearanceComponent_C::GetFamilyTree(TArray<struct FDataTableRowHandle>* FullFamilyTree)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "GetFamilyTree");

	Params::UBP_CharacterAppearanceComponent_C_GetFamilyTree_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (FullFamilyTree != nullptr)
		*FullFamilyTree = std::move(Parms.FullFamilyTree);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetActiveAncestorIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InheritanceIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FamilyTreeIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::SetActiveAncestorIndex(int32 InheritanceIndex, int32 FamilyTreeIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "SetActiveAncestorIndex");

	Params::UBP_CharacterAppearanceComponent_C_SetActiveAncestorIndex_Params Parms{};

	Parms.InheritanceIndex = InheritanceIndex;
	Parms.FamilyTreeIndex = FamilyTreeIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetFamilyTreeAppearance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         Appearance                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::SetFamilyTreeAppearance(int32 Index, const struct FDataTableRowHandle& Appearance, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "SetFamilyTreeAppearance");

	Params::UBP_CharacterAppearanceComponent_C_SetFamilyTreeAppearance_Params Parms{};

	Parms.Index = Index;
	Parms.Appearance = Appearance;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetVoiceSetDataOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_CharacterAppearanceComponent_C::ResetVoiceSetDataOverride()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "ResetVoiceSetDataOverride");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsVoiceSetDataOverriden
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               bOverriden                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::IsVoiceSetDataOverriden(bool* bOverriden, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "IsVoiceSetDataOverriden");

	Params::UBP_CharacterAppearanceComponent_C_IsVoiceSetDataOverriden_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bOverriden != nullptr)
		*bOverriden = Parms.bOverriden;

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetVoiceSetData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVoiceSetDataReference      Data                                                             (Parm, OutParm, HasGetValueTypeHash)
// TMap<enum class EBodyType, TSoftObjectPtr<class UVoiceSetDataAsset>>DefaultVoiceSets                                                 (Edit, BlueprintVisible)
// TMap<enum class EBodyType, TSoftObjectPtr<class UVoiceSetDataAsset>>K2Node_MakeVariable_MakeVariableOutput                           (None)
// struct FCharacterAppearance_Preset CallFunc_GetSelectedArchetypeData_OutArchetype                   (None)
// bool                               CallFunc_IsVoiceSetDataOverriden_bOverriden                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UVoiceSetDataAsset>CallFunc_Map_Find_Value                                          (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVoiceSetDataReference      CallFunc_MakeFromDataAsset_ReturnValue                           (HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::GetVoiceSetData(struct FVoiceSetDataReference* Data, TMap<enum class EBodyType, TSoftObjectPtr<class UVoiceSetDataAsset>> DefaultVoiceSets, TMap<enum class EBodyType, TSoftObjectPtr<class UVoiceSetDataAsset>> K2Node_MakeVariable_MakeVariableOutput, const struct FCharacterAppearance_Preset& CallFunc_GetSelectedArchetypeData_OutArchetype, bool CallFunc_IsVoiceSetDataOverriden_bOverriden, TSoftObjectPtr<class UVoiceSetDataAsset> CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FVoiceSetDataReference& CallFunc_MakeFromDataAsset_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "GetVoiceSetData");

	Params::UBP_CharacterAppearanceComponent_C_GetVoiceSetData_Params Parms{};

	Parms.DefaultVoiceSets = DefaultVoiceSets;
	Parms.K2Node_MakeVariable_MakeVariableOutput = K2Node_MakeVariable_MakeVariableOutput;
	Parms.CallFunc_GetSelectedArchetypeData_OutArchetype = CallFunc_GetSelectedArchetypeData_OutArchetype;
	Parms.CallFunc_IsVoiceSetDataOverriden_bOverriden = CallFunc_IsVoiceSetDataOverriden_bOverriden;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_MakeFromDataAsset_ReturnValue = CallFunc_MakeFromDataAsset_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = std::move(Parms.Data);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetVoiceSetOverride
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVoiceSetDataReference      NewData                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVoiceSetDataReference      CallFunc_GetVoiceSetData_Data                                    (HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVoiceSetDataReference      CallFunc_GetVoiceSetData_Data_1                                  (HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_FVoiceSetDataReference_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::SetVoiceSetOverride(const struct FVoiceSetDataReference& NewData, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVoiceSetDataReference& CallFunc_GetVoiceSetData_Data, bool CallFunc_HasAuthority_ReturnValue, const struct FVoiceSetDataReference& CallFunc_GetVoiceSetData_Data_1, bool CallFunc_NotEqual_FVoiceSetDataReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "SetVoiceSetOverride");

	Params::UBP_CharacterAppearanceComponent_C_SetVoiceSetOverride_Params Parms{};

	Parms.NewData = NewData;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetVoiceSetData_Data = CallFunc_GetVoiceSetData_Data;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetVoiceSetData_Data_1 = CallFunc_GetVoiceSetData_Data_1;
	Parms.CallFunc_NotEqual_FVoiceSetDataReference_ReturnValue = CallFunc_NotEqual_FVoiceSetDataReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetAllHairColorOverrides
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_CharacterAppearanceComponent_C::ResetAllHairColorOverrides()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "ResetAllHairColorOverrides");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetAllHairData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_CharacterAppearanceComponent_C::ResetAllHairData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "ResetAllHairData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetHairData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EHairAssetType          Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::ResetHairData(enum class EHairAssetType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "ResetHairData");

	Params::UBP_CharacterAppearanceComponent_C_ResetHairData_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetHairData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EHairAssetType          Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHairDataReference          NewData                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHairDataReference          CallFunc_GetHairData_OutData                                     (HasGetValueTypeHash)
// struct FHairDataReference          CallFunc_GetHairData_OutData_1                                   (HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_FHairDataReference_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHairAssetType          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHairDataReference          K2Node_Select_Default                                            (HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::SetHairData(enum class EHairAssetType Type, const struct FHairDataReference& NewData, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, const struct FHairDataReference& CallFunc_GetHairData_OutData, const struct FHairDataReference& CallFunc_GetHairData_OutData_1, bool CallFunc_NotEqual_FHairDataReference_ReturnValue, enum class EHairAssetType Temp_byte_Variable, const struct FHairDataReference& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "SetHairData");

	Params::UBP_CharacterAppearanceComponent_C_SetHairData_Params Parms{};

	Parms.Type = Type;
	Parms.NewData = NewData;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetHairData_OutData = CallFunc_GetHairData_OutData;
	Parms.CallFunc_GetHairData_OutData_1 = CallFunc_GetHairData_OutData_1;
	Parms.CallFunc_NotEqual_FHairDataReference_ReturnValue = CallFunc_NotEqual_FHairDataReference_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsHairDataOverriden
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EHairAssetType          Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bOverriden                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHairAssetType          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHairDataReference          K2Node_Select_Default                                            (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::IsHairDataOverriden(enum class EHairAssetType Type, bool* bOverriden, enum class EHairAssetType Temp_byte_Variable, const struct FHairDataReference& K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "IsHairDataOverriden");

	Params::UBP_CharacterAppearanceComponent_C_IsHairDataOverriden_Params Parms{};

	Parms.Type = Type;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bOverriden != nullptr)
		*bOverriden = Parms.bOverriden;

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetHairData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EHairAssetType          Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHairDataReference          OutData                                                          (Parm, OutParm, HasGetValueTypeHash)
// enum class EHairAssetType          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHairDataOverriden_bOverriden                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHairAssetType          Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterAppearance_Preset CallFunc_GetSelectedArchetypeData_OutArchetype                   (None)
// struct FHairDataReference          K2Node_Select_Default                                            (HasGetValueTypeHash)
// struct FHairAppearance             K2Node_Select_Default_1                                          (None)
// struct FHairDataReference          CallFunc_MakeFromDataAsset_ReturnValue                           (HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::GetHairData(enum class EHairAssetType Type, struct FHairDataReference* OutData, enum class EHairAssetType Temp_byte_Variable, bool CallFunc_IsHairDataOverriden_bOverriden, enum class EHairAssetType Temp_byte_Variable_1, const struct FCharacterAppearance_Preset& CallFunc_GetSelectedArchetypeData_OutArchetype, const struct FHairDataReference& K2Node_Select_Default, const struct FHairAppearance& K2Node_Select_Default_1, const struct FHairDataReference& CallFunc_MakeFromDataAsset_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "GetHairData");

	Params::UBP_CharacterAppearanceComponent_C_GetHairData_Params Parms{};

	Parms.Type = Type;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_IsHairDataOverriden_bOverriden = CallFunc_IsHairDataOverriden_bOverriden;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetSelectedArchetypeData_OutArchetype = CallFunc_GetSelectedArchetypeData_OutArchetype;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_MakeFromDataAsset_ReturnValue = CallFunc_MakeFromDataAsset_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutData != nullptr)
		*OutData = std::move(Parms.OutData);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetPlayerBackground
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EPlayerBackground       OutBackground                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::GetPlayerBackground(enum class EPlayerBackground* OutBackground)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "GetPlayerBackground");

	Params::UBP_CharacterAppearanceComponent_C_GetPlayerBackground_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OutBackground != nullptr)
		*OutBackground = Parms.OutBackground;

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetPlayerBackground
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPlayerBackground       InputPin                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::SetPlayerBackground(enum class EPlayerBackground InputPin, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "SetPlayerBackground");

	Params::UBP_CharacterAppearanceComponent_C_SetPlayerBackground_Params Parms{};

	Parms.InputPin = InputPin;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetAllEyeData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEyeSide                EyeSide                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEyeAppearance              EyeData                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetEyeBloodshotAmountOverride_Override_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetEyeVeinsOpacityOverride_Override_ImplicitCast        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetEyePupilScaleOverride_Override_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetEyeIrisScaleOverride_Override_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetEyeIrisDetailOverride_Override_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetEyeLimbusOpacityOverride_Override_ImplicitCast       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::SetAllEyeData(enum class EEyeSide EyeSide, const struct FEyeAppearance& EyeData, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, double CallFunc_SetEyeBloodshotAmountOverride_Override_ImplicitCast, double CallFunc_SetEyeVeinsOpacityOverride_Override_ImplicitCast, double CallFunc_SetEyePupilScaleOverride_Override_ImplicitCast, double CallFunc_SetEyeIrisScaleOverride_Override_ImplicitCast, double CallFunc_SetEyeIrisDetailOverride_Override_ImplicitCast, double CallFunc_SetEyeLimbusOpacityOverride_Override_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "SetAllEyeData");

	Params::UBP_CharacterAppearanceComponent_C_SetAllEyeData_Params Parms{};

	Parms.EyeSide = EyeSide;
	Parms.EyeData = EyeData;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_SetEyeBloodshotAmountOverride_Override_ImplicitCast = CallFunc_SetEyeBloodshotAmountOverride_Override_ImplicitCast;
	Parms.CallFunc_SetEyeVeinsOpacityOverride_Override_ImplicitCast = CallFunc_SetEyeVeinsOpacityOverride_Override_ImplicitCast;
	Parms.CallFunc_SetEyePupilScaleOverride_Override_ImplicitCast = CallFunc_SetEyePupilScaleOverride_Override_ImplicitCast;
	Parms.CallFunc_SetEyeIrisScaleOverride_Override_ImplicitCast = CallFunc_SetEyeIrisScaleOverride_Override_ImplicitCast;
	Parms.CallFunc_SetEyeIrisDetailOverride_Override_ImplicitCast = CallFunc_SetEyeIrisDetailOverride_Override_ImplicitCast;
	Parms.CallFunc_SetEyeLimbusOpacityOverride_Override_ImplicitCast = CallFunc_SetEyeLimbusOpacityOverride_Override_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsEyeLashTipColorOverriden
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeLashType            LashType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bOverriden                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeSide                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeLashType            Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEyeLashAppearance          K2Node_Select_Default                                            (NoDestructor)
// struct FEyeLashSettings            K2Node_Select_Default_1                                          (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesDataTableRowExist_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::IsEyeLashTipColorOverriden(enum class EEyeSide Side, enum class EEyeLashType LashType, bool* bOverriden, enum class EEyeSide Temp_byte_Variable, enum class EEyeLashType Temp_byte_Variable_1, const struct FEyeLashAppearance& K2Node_Select_Default, const struct FEyeLashSettings& K2Node_Select_Default_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_DoesDataTableRowExist_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "IsEyeLashTipColorOverriden");

	Params::UBP_CharacterAppearanceComponent_C_IsEyeLashTipColorOverriden_Params Parms{};

	Parms.Side = Side;
	Parms.LashType = LashType;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_DoesDataTableRowExist_ReturnValue = CallFunc_DoesDataTableRowExist_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bOverriden != nullptr)
		*bOverriden = Parms.bOverriden;

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetEyeLashTipColor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeLashType            LashType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         OutValue                                                         (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// enum class EEyeLashType            Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEyeLashTipColorOverriden_bOverriden                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeLashType            Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeSide                Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterAppearance_Preset CallFunc_GetSelectedArchetypeData_OutArchetype                   (None)
// struct FEyeLashAppearance          K2Node_Select_Default                                            (NoDestructor)
// struct FEyeLashSettings            K2Node_Select_Default_1                                          (NoDestructor)
// struct FEyeLashSettings            K2Node_Select_Default_2                                          (NoDestructor)

void UBP_CharacterAppearanceComponent_C::GetEyeLashTipColor(enum class EEyeSide Side, enum class EEyeLashType LashType, struct FDataTableRowHandle* OutValue, enum class EEyeLashType Temp_byte_Variable, bool CallFunc_IsEyeLashTipColorOverriden_bOverriden, enum class EEyeLashType Temp_byte_Variable_1, enum class EEyeSide Temp_byte_Variable_2, const struct FCharacterAppearance_Preset& CallFunc_GetSelectedArchetypeData_OutArchetype, const struct FEyeLashAppearance& K2Node_Select_Default, const struct FEyeLashSettings& K2Node_Select_Default_1, const struct FEyeLashSettings& K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "GetEyeLashTipColor");

	Params::UBP_CharacterAppearanceComponent_C_GetEyeLashTipColor_Params Parms{};

	Parms.Side = Side;
	Parms.LashType = LashType;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_IsEyeLashTipColorOverriden_bOverriden = CallFunc_IsEyeLashTipColorOverriden_bOverriden;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_GetSelectedArchetypeData_OutArchetype = CallFunc_GetSelectedArchetypeData_OutArchetype;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

	if (OutValue != nullptr)
		*OutValue = std::move(Parms.OutValue);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetEyeLashTipColorOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeLashType            LashType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::ResetEyeLashTipColorOverride(enum class EEyeSide Side, enum class EEyeLashType LashType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "ResetEyeLashTipColorOverride");

	Params::UBP_CharacterAppearanceComponent_C_ResetEyeLashTipColorOverride_Params Parms{};

	Parms.Side = Side;
	Parms.LashType = LashType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetEyeLashTipColorOverride
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeLashType            LashType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         Override                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FEyeLashSettings            CurrentLashSettings                                              (Edit, BlueprintVisible, NoDestructor)
// enum class EEyeLashType            Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetEyeLashRootColor_OutValue                            (NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RowHandlesEqual_Equal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeSide                Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeSide                Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeSide                Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEyeLashAppearance          K2Node_Select_Default                                            (NoDestructor)
// struct FEyeLashAppearance          K2Node_SetFieldsInStruct_StructOut                               (NoDestructor)
// struct FEyeLashAppearance          K2Node_Select_Default_1                                          (NoDestructor)
// struct FEyeLashAppearance          K2Node_Select_Default_2                                          (NoDestructor)
// struct FEyeLashSettings            K2Node_Select_Default_3                                          (NoDestructor)
// struct FEyeLashAppearance          K2Node_SetFieldsInStruct_StructOut_1                             (NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEyeLashAppearance          CallFunc_GetEyeLashData_OutValue                                 (NoDestructor)

void UBP_CharacterAppearanceComponent_C::SetEyeLashTipColorOverride(enum class EEyeSide Side, enum class EEyeLashType LashType, const struct FDataTableRowHandle& Override, const struct FEyeLashSettings& CurrentLashSettings, enum class EEyeLashType Temp_byte_Variable, const struct FDataTableRowHandle& CallFunc_GetEyeLashRootColor_OutValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_RowHandlesEqual_Equal, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class EEyeSide Temp_byte_Variable_1, enum class EEyeSide Temp_byte_Variable_2, enum class EEyeSide Temp_byte_Variable_3, const struct FEyeLashAppearance& K2Node_Select_Default, const struct FEyeLashAppearance& K2Node_SetFieldsInStruct_StructOut, const struct FEyeLashAppearance& K2Node_Select_Default_1, const struct FEyeLashAppearance& K2Node_Select_Default_2, const struct FEyeLashSettings& K2Node_Select_Default_3, const struct FEyeLashAppearance& K2Node_SetFieldsInStruct_StructOut_1, bool K2Node_SwitchEnum_CmpSuccess, const struct FEyeLashAppearance& CallFunc_GetEyeLashData_OutValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "SetEyeLashTipColorOverride");

	Params::UBP_CharacterAppearanceComponent_C_SetEyeLashTipColorOverride_Params Parms{};

	Parms.Side = Side;
	Parms.LashType = LashType;
	Parms.Override = Override;
	Parms.CurrentLashSettings = CurrentLashSettings;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetEyeLashRootColor_OutValue = CallFunc_GetEyeLashRootColor_OutValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_RowHandlesEqual_Equal = CallFunc_RowHandlesEqual_Equal;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_SetFieldsInStruct_StructOut_1 = K2Node_SetFieldsInStruct_StructOut_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetEyeLashData_OutValue = CallFunc_GetEyeLashData_OutValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsEyeLashRootColorOverriden
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeLashType            LashType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bOverriden                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeSide                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeLashType            Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEyeLashAppearance          K2Node_Select_Default                                            (NoDestructor)
// struct FEyeLashSettings            K2Node_Select_Default_1                                          (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesDataTableRowExist_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::IsEyeLashRootColorOverriden(enum class EEyeSide Side, enum class EEyeLashType LashType, bool* bOverriden, enum class EEyeSide Temp_byte_Variable, enum class EEyeLashType Temp_byte_Variable_1, const struct FEyeLashAppearance& K2Node_Select_Default, const struct FEyeLashSettings& K2Node_Select_Default_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_DoesDataTableRowExist_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "IsEyeLashRootColorOverriden");

	Params::UBP_CharacterAppearanceComponent_C_IsEyeLashRootColorOverriden_Params Parms{};

	Parms.Side = Side;
	Parms.LashType = LashType;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_DoesDataTableRowExist_ReturnValue = CallFunc_DoesDataTableRowExist_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bOverriden != nullptr)
		*bOverriden = Parms.bOverriden;

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetEyeLashRootColor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeLashType            LashType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         OutValue                                                         (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// enum class EEyeLashType            Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEyeLashRootColorOverriden_bOverriden                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeLashType            Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeSide                Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterAppearance_Preset CallFunc_GetSelectedArchetypeData_OutArchetype                   (None)
// struct FEyeLashAppearance          K2Node_Select_Default                                            (NoDestructor)
// struct FEyeLashSettings            K2Node_Select_Default_1                                          (NoDestructor)
// struct FEyeLashSettings            K2Node_Select_Default_2                                          (NoDestructor)

void UBP_CharacterAppearanceComponent_C::GetEyeLashRootColor(enum class EEyeSide Side, enum class EEyeLashType LashType, struct FDataTableRowHandle* OutValue, enum class EEyeLashType Temp_byte_Variable, bool CallFunc_IsEyeLashRootColorOverriden_bOverriden, enum class EEyeLashType Temp_byte_Variable_1, enum class EEyeSide Temp_byte_Variable_2, const struct FCharacterAppearance_Preset& CallFunc_GetSelectedArchetypeData_OutArchetype, const struct FEyeLashAppearance& K2Node_Select_Default, const struct FEyeLashSettings& K2Node_Select_Default_1, const struct FEyeLashSettings& K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "GetEyeLashRootColor");

	Params::UBP_CharacterAppearanceComponent_C_GetEyeLashRootColor_Params Parms{};

	Parms.Side = Side;
	Parms.LashType = LashType;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_IsEyeLashRootColorOverriden_bOverriden = CallFunc_IsEyeLashRootColorOverriden_bOverriden;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_GetSelectedArchetypeData_OutArchetype = CallFunc_GetSelectedArchetypeData_OutArchetype;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

	if (OutValue != nullptr)
		*OutValue = std::move(Parms.OutValue);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetEyeLashRootColorOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeLashType            LashType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::ResetEyeLashRootColorOverride(enum class EEyeSide Side, enum class EEyeLashType LashType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "ResetEyeLashRootColorOverride");

	Params::UBP_CharacterAppearanceComponent_C_ResetEyeLashRootColorOverride_Params Parms{};

	Parms.Side = Side;
	Parms.LashType = LashType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetEyeLashRootColorOverride
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeLashType            LashType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         Override                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FEyeLashSettings            CurrentLashSettings                                              (Edit, BlueprintVisible, NoDestructor)
// enum class EEyeLashType            Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetEyeLashRootColor_OutValue                            (NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RowHandlesEqual_Equal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeSide                Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeSide                Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeSide                Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEyeLashAppearance          K2Node_Select_Default                                            (NoDestructor)
// struct FEyeLashAppearance          K2Node_SetFieldsInStruct_StructOut                               (NoDestructor)
// struct FEyeLashAppearance          K2Node_Select_Default_1                                          (NoDestructor)
// struct FEyeLashAppearance          K2Node_Select_Default_2                                          (NoDestructor)
// struct FEyeLashSettings            K2Node_Select_Default_3                                          (NoDestructor)
// struct FEyeLashAppearance          K2Node_SetFieldsInStruct_StructOut_1                             (NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEyeLashAppearance          CallFunc_GetEyeLashData_OutValue                                 (NoDestructor)

void UBP_CharacterAppearanceComponent_C::SetEyeLashRootColorOverride(enum class EEyeSide Side, enum class EEyeLashType LashType, const struct FDataTableRowHandle& Override, const struct FEyeLashSettings& CurrentLashSettings, enum class EEyeLashType Temp_byte_Variable, const struct FDataTableRowHandle& CallFunc_GetEyeLashRootColor_OutValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_RowHandlesEqual_Equal, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class EEyeSide Temp_byte_Variable_1, enum class EEyeSide Temp_byte_Variable_2, enum class EEyeSide Temp_byte_Variable_3, const struct FEyeLashAppearance& K2Node_Select_Default, const struct FEyeLashAppearance& K2Node_SetFieldsInStruct_StructOut, const struct FEyeLashAppearance& K2Node_Select_Default_1, const struct FEyeLashAppearance& K2Node_Select_Default_2, const struct FEyeLashSettings& K2Node_Select_Default_3, const struct FEyeLashAppearance& K2Node_SetFieldsInStruct_StructOut_1, bool K2Node_SwitchEnum_CmpSuccess, const struct FEyeLashAppearance& CallFunc_GetEyeLashData_OutValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "SetEyeLashRootColorOverride");

	Params::UBP_CharacterAppearanceComponent_C_SetEyeLashRootColorOverride_Params Parms{};

	Parms.Side = Side;
	Parms.LashType = LashType;
	Parms.Override = Override;
	Parms.CurrentLashSettings = CurrentLashSettings;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetEyeLashRootColor_OutValue = CallFunc_GetEyeLashRootColor_OutValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_RowHandlesEqual_Equal = CallFunc_RowHandlesEqual_Equal;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_SetFieldsInStruct_StructOut_1 = K2Node_SetFieldsInStruct_StructOut_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetEyeLashData_OutValue = CallFunc_GetEyeLashData_OutValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsEyeLashLengthOverriden
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeLashType            LashType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bOverriden                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeSide                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeLashType            Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEyeLashAppearance          K2Node_Select_Default                                            (NoDestructor)
// struct FEyeLashSettings            K2Node_Select_Default_1                                          (NoDestructor)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::IsEyeLashLengthOverriden(enum class EEyeSide Side, enum class EEyeLashType LashType, bool* bOverriden, enum class EEyeSide Temp_byte_Variable, enum class EEyeLashType Temp_byte_Variable_1, const struct FEyeLashAppearance& K2Node_Select_Default, const struct FEyeLashSettings& K2Node_Select_Default_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "IsEyeLashLengthOverriden");

	Params::UBP_CharacterAppearanceComponent_C_IsEyeLashLengthOverriden_Params Parms{};

	Parms.Side = Side;
	Parms.LashType = LashType;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast = CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (bOverriden != nullptr)
		*bOverriden = Parms.bOverriden;

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetEyeLashLength
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeLashType            LashType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             OutValue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeLashType            Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEyeLashLengthOverriden_bOverriden                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeLashType            Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeSide                Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterAppearance_Preset CallFunc_GetSelectedArchetypeData_OutArchetype                   (None)
// struct FEyeLashAppearance          K2Node_Select_Default                                            (NoDestructor)
// struct FEyeLashSettings            K2Node_Select_Default_1                                          (NoDestructor)
// struct FEyeLashSettings            K2Node_Select_Default_2                                          (NoDestructor)
// double                             K2Node_FunctionResult_OutValue_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_OutValue_ImplicitCast_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::GetEyeLashLength(enum class EEyeSide Side, enum class EEyeLashType LashType, double* OutValue, enum class EEyeLashType Temp_byte_Variable, bool CallFunc_IsEyeLashLengthOverriden_bOverriden, enum class EEyeLashType Temp_byte_Variable_1, enum class EEyeSide Temp_byte_Variable_2, const struct FCharacterAppearance_Preset& CallFunc_GetSelectedArchetypeData_OutArchetype, const struct FEyeLashAppearance& K2Node_Select_Default, const struct FEyeLashSettings& K2Node_Select_Default_1, const struct FEyeLashSettings& K2Node_Select_Default_2, double K2Node_FunctionResult_OutValue_ImplicitCast, double K2Node_FunctionResult_OutValue_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "GetEyeLashLength");

	Params::UBP_CharacterAppearanceComponent_C_GetEyeLashLength_Params Parms{};

	Parms.Side = Side;
	Parms.LashType = LashType;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_IsEyeLashLengthOverriden_bOverriden = CallFunc_IsEyeLashLengthOverriden_bOverriden;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_GetSelectedArchetypeData_OutArchetype = CallFunc_GetSelectedArchetypeData_OutArchetype;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_FunctionResult_OutValue_ImplicitCast = K2Node_FunctionResult_OutValue_ImplicitCast;
	Parms.K2Node_FunctionResult_OutValue_ImplicitCast_1 = K2Node_FunctionResult_OutValue_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetEyeLashLengthOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeLashType            LashType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::ResetEyeLashLengthOverride(enum class EEyeSide Side, enum class EEyeLashType LashType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "ResetEyeLashLengthOverride");

	Params::UBP_CharacterAppearanceComponent_C_ResetEyeLashLengthOverride_Params Parms{};

	Parms.Side = Side;
	Parms.LashType = LashType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetEyeLashLengthOverride
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeLashType            LashType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Override                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEyeLashSettings            CurrentLashSettings                                              (Edit, BlueprintVisible, NoDestructor)
// enum class EEyeLashType            Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetEyeLashLength_OutValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeSide                Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeSide                Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeSide                Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEyeLashAppearance          K2Node_Select_Default                                            (NoDestructor)
// struct FEyeLashAppearance          K2Node_SetFieldsInStruct_StructOut                               (NoDestructor)
// struct FEyeLashAppearance          K2Node_Select_Default_1                                          (NoDestructor)
// struct FEyeLashAppearance          K2Node_Select_Default_2                                          (NoDestructor)
// struct FEyeLashSettings            K2Node_Select_Default_3                                          (NoDestructor)
// struct FEyeLashAppearance          K2Node_SetFieldsInStruct_StructOut_1                             (NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEyeLashAppearance          CallFunc_GetEyeLashData_OutValue                                 (NoDestructor)
// float                              K2Node_SetFieldsInStruct_Length_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::SetEyeLashLengthOverride(enum class EEyeSide Side, enum class EEyeLashType LashType, double Override, const struct FEyeLashSettings& CurrentLashSettings, enum class EEyeLashType Temp_byte_Variable, double CallFunc_GetEyeLashLength_OutValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class EEyeSide Temp_byte_Variable_1, enum class EEyeSide Temp_byte_Variable_2, enum class EEyeSide Temp_byte_Variable_3, const struct FEyeLashAppearance& K2Node_Select_Default, const struct FEyeLashAppearance& K2Node_SetFieldsInStruct_StructOut, const struct FEyeLashAppearance& K2Node_Select_Default_1, const struct FEyeLashAppearance& K2Node_Select_Default_2, const struct FEyeLashSettings& K2Node_Select_Default_3, const struct FEyeLashAppearance& K2Node_SetFieldsInStruct_StructOut_1, bool K2Node_SwitchEnum_CmpSuccess, const struct FEyeLashAppearance& CallFunc_GetEyeLashData_OutValue, float K2Node_SetFieldsInStruct_Length_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "SetEyeLashLengthOverride");

	Params::UBP_CharacterAppearanceComponent_C_SetEyeLashLengthOverride_Params Parms{};

	Parms.Side = Side;
	Parms.LashType = LashType;
	Parms.Override = Override;
	Parms.CurrentLashSettings = CurrentLashSettings;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetEyeLashLength_OutValue = CallFunc_GetEyeLashLength_OutValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_SetFieldsInStruct_StructOut_1 = K2Node_SetFieldsInStruct_StructOut_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetEyeLashData_OutValue = CallFunc_GetEyeLashData_OutValue;
	Parms.K2Node_SetFieldsInStruct_Length_ImplicitCast = K2Node_SetFieldsInStruct_Length_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetAllEyeLashOverrides
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::ResetAllEyeLashOverrides(int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, uint8 CallFunc_Conv_IntToByte_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_1, uint8 CallFunc_GetValidValue_ReturnValue_1, uint8 CallFunc_Conv_IntToByte_ReturnValue_3, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, int32 CallFunc_MakeLiteralInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "ResetAllEyeLashOverrides");

	Params::UBP_CharacterAppearanceComponent_C_ResetAllEyeLashOverrides_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue = CallFunc_GetEnumeratorValueFromIndex_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_2 = CallFunc_Conv_IntToByte_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetValidValue_ReturnValue_1 = CallFunc_GetValidValue_ReturnValue_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_3 = CallFunc_Conv_IntToByte_ReturnValue_3;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue_1 = CallFunc_GetEnumeratorValueFromIndex_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_1 = CallFunc_Conv_ByteToInt_ReturnValue_1;
	Parms.CallFunc_MakeLiteralInt_ReturnValue_1 = CallFunc_MakeLiteralInt_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetEyeLashData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEyeLashAppearance          OutValue                                                         (Parm, OutParm, NoDestructor)
// struct FDataTableRowHandle         CallFunc_GetEyeLashTipColor_OutValue                             (NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetEyeLashTipColor_OutValue_1                           (NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetEyeLashRootColor_OutValue                            (NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetEyeLashRootColor_OutValue_1                          (NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetEyeLashLength_OutValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetEyeLashLength_OutValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEyeLashSettings            K2Node_MakeStruct_EyeLashSettings                                (NoDestructor)
// struct FEyeLashSettings            K2Node_MakeStruct_EyeLashSettings_1                              (NoDestructor)
// struct FEyeLashAppearance          K2Node_MakeStruct_EyeLashAppearance                              (NoDestructor)
// float                              K2Node_MakeStruct_Length_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_Length_ImplicitCast_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::GetEyeLashData(enum class EEyeSide Side, struct FEyeLashAppearance* OutValue, const struct FDataTableRowHandle& CallFunc_GetEyeLashTipColor_OutValue, const struct FDataTableRowHandle& CallFunc_GetEyeLashTipColor_OutValue_1, const struct FDataTableRowHandle& CallFunc_GetEyeLashRootColor_OutValue, const struct FDataTableRowHandle& CallFunc_GetEyeLashRootColor_OutValue_1, double CallFunc_GetEyeLashLength_OutValue, double CallFunc_GetEyeLashLength_OutValue_1, const struct FEyeLashSettings& K2Node_MakeStruct_EyeLashSettings, const struct FEyeLashSettings& K2Node_MakeStruct_EyeLashSettings_1, const struct FEyeLashAppearance& K2Node_MakeStruct_EyeLashAppearance, float K2Node_MakeStruct_Length_ImplicitCast, float K2Node_MakeStruct_Length_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "GetEyeLashData");

	Params::UBP_CharacterAppearanceComponent_C_GetEyeLashData_Params Parms{};

	Parms.Side = Side;
	Parms.CallFunc_GetEyeLashTipColor_OutValue = CallFunc_GetEyeLashTipColor_OutValue;
	Parms.CallFunc_GetEyeLashTipColor_OutValue_1 = CallFunc_GetEyeLashTipColor_OutValue_1;
	Parms.CallFunc_GetEyeLashRootColor_OutValue = CallFunc_GetEyeLashRootColor_OutValue;
	Parms.CallFunc_GetEyeLashRootColor_OutValue_1 = CallFunc_GetEyeLashRootColor_OutValue_1;
	Parms.CallFunc_GetEyeLashLength_OutValue = CallFunc_GetEyeLashLength_OutValue;
	Parms.CallFunc_GetEyeLashLength_OutValue_1 = CallFunc_GetEyeLashLength_OutValue_1;
	Parms.K2Node_MakeStruct_EyeLashSettings = K2Node_MakeStruct_EyeLashSettings;
	Parms.K2Node_MakeStruct_EyeLashSettings_1 = K2Node_MakeStruct_EyeLashSettings_1;
	Parms.K2Node_MakeStruct_EyeLashAppearance = K2Node_MakeStruct_EyeLashAppearance;
	Parms.K2Node_MakeStruct_Length_ImplicitCast = K2Node_MakeStruct_Length_ImplicitCast;
	Parms.K2Node_MakeStruct_Length_ImplicitCast_1 = K2Node_MakeStruct_Length_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (OutValue != nullptr)
		*OutValue = std::move(Parms.OutValue);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsEyeVeinsOpacityOverriden
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bOverriden                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeSide                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEyeAppearance              K2Node_Select_Default                                            (NoDestructor)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::IsEyeVeinsOpacityOverriden(enum class EEyeSide Side, bool* bOverriden, enum class EEyeSide Temp_byte_Variable, const struct FEyeAppearance& K2Node_Select_Default, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "IsEyeVeinsOpacityOverriden");

	Params::UBP_CharacterAppearanceComponent_C_IsEyeVeinsOpacityOverriden_Params Parms{};

	Parms.Side = Side;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast = CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (bOverriden != nullptr)
		*bOverriden = Parms.bOverriden;

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetEyeVeinOpacity
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             OutValue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeSide                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEyeVeinsOpacityOverriden_bOverriden                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterAppearance_Preset CallFunc_GetSelectedArchetypeData_OutArchetype                   (None)
// struct FEyeAppearance              K2Node_Select_Default                                            (NoDestructor)
// double                             K2Node_FunctionResult_OutValue_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_OutValue_ImplicitCast_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::GetEyeVeinOpacity(enum class EEyeSide Side, double* OutValue, enum class EEyeSide Temp_byte_Variable, bool CallFunc_IsEyeVeinsOpacityOverriden_bOverriden, const struct FCharacterAppearance_Preset& CallFunc_GetSelectedArchetypeData_OutArchetype, const struct FEyeAppearance& K2Node_Select_Default, double K2Node_FunctionResult_OutValue_ImplicitCast, double K2Node_FunctionResult_OutValue_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "GetEyeVeinOpacity");

	Params::UBP_CharacterAppearanceComponent_C_GetEyeVeinOpacity_Params Parms{};

	Parms.Side = Side;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_IsEyeVeinsOpacityOverriden_bOverriden = CallFunc_IsEyeVeinsOpacityOverriden_bOverriden;
	Parms.CallFunc_GetSelectedArchetypeData_OutArchetype = CallFunc_GetSelectedArchetypeData_OutArchetype;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_FunctionResult_OutValue_ImplicitCast = K2Node_FunctionResult_OutValue_ImplicitCast;
	Parms.K2Node_FunctionResult_OutValue_ImplicitCast_1 = K2Node_FunctionResult_OutValue_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetEyeVeinsOpacityOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::ResetEyeVeinsOpacityOverride(enum class EEyeSide Side)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "ResetEyeVeinsOpacityOverride");

	Params::UBP_CharacterAppearanceComponent_C_ResetEyeVeinsOpacityOverride_Params Parms{};

	Parms.Side = Side;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetEyeVeinsOpacityOverride
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Override                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetEyeVeinOpacity_OutValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeSide                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEyeAppearance              K2Node_Select_Default                                            (NoDestructor)
// struct FEyeAppearance              CallFunc_GetEyeData_OutValue                                     (NoDestructor)
// struct FEyeAppearance              K2Node_SetFieldsInStruct_StructOut                               (NoDestructor)
// float                              K2Node_SetFieldsInStruct_VeinOpacity_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::SetEyeVeinsOpacityOverride(enum class EEyeSide Side, double Override, class AActor* CallFunc_GetOwner_ReturnValue, double CallFunc_GetEyeVeinOpacity_OutValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class EEyeSide Temp_byte_Variable, const struct FEyeAppearance& K2Node_Select_Default, const struct FEyeAppearance& CallFunc_GetEyeData_OutValue, const struct FEyeAppearance& K2Node_SetFieldsInStruct_StructOut, float K2Node_SetFieldsInStruct_VeinOpacity_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "SetEyeVeinsOpacityOverride");

	Params::UBP_CharacterAppearanceComponent_C_SetEyeVeinsOpacityOverride_Params Parms{};

	Parms.Side = Side;
	Parms.Override = Override;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetEyeVeinOpacity_OutValue = CallFunc_GetEyeVeinOpacity_OutValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetEyeData_OutValue = CallFunc_GetEyeData_OutValue;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;
	Parms.K2Node_SetFieldsInStruct_VeinOpacity_ImplicitCast = K2Node_SetFieldsInStruct_VeinOpacity_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsAgeValueOverriden
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               bOverriden                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::IsAgeValueOverriden(bool* bOverriden, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "IsAgeValueOverriden");

	Params::UBP_CharacterAppearanceComponent_C_IsAgeValueOverriden_Params Parms{};

	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bOverriden != nullptr)
		*bOverriden = Parms.bOverriden;

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetAgeValue
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// double                             OutAgeValue                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterAppearance_Preset CallFunc_GetSelectedArchetypeData_OutArchetype                   (None)
// bool                               CallFunc_IsAgeValueOverriden_bOverriden                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_OutAgeValue_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::GetAgeValue(double* OutAgeValue, const struct FCharacterAppearance_Preset& CallFunc_GetSelectedArchetypeData_OutArchetype, bool CallFunc_IsAgeValueOverriden_bOverriden, double K2Node_FunctionResult_OutAgeValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "GetAgeValue");

	Params::UBP_CharacterAppearanceComponent_C_GetAgeValue_Params Parms{};

	Parms.CallFunc_GetSelectedArchetypeData_OutArchetype = CallFunc_GetSelectedArchetypeData_OutArchetype;
	Parms.CallFunc_IsAgeValueOverriden_bOverriden = CallFunc_IsAgeValueOverriden_bOverriden;
	Parms.K2Node_FunctionResult_OutAgeValue_ImplicitCast = K2Node_FunctionResult_OutAgeValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (OutAgeValue != nullptr)
		*OutAgeValue = Parms.OutAgeValue;

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetAgeValueOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_CharacterAppearanceComponent_C::ResetAgeValueOverride()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "ResetAgeValueOverride");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetAgeValueOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewAgeValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetAgeValue_OutAgeValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::SetAgeValueOverride(double NewAgeValue, class AActor* CallFunc_GetOwner_ReturnValue, double CallFunc_GetAgeValue_OutAgeValue, bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "SetAgeValueOverride");

	Params::UBP_CharacterAppearanceComponent_C_SetAgeValueOverride_Params Parms{};

	Parms.NewAgeValue = NewAgeValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetAgeValue_OutAgeValue = CallFunc_GetAgeValue_OutAgeValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsEyeScleraCornerColorOverriden
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bOverriden                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeSide                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEyeAppearance              K2Node_Select_Default                                            (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesDataTableRowExist_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::IsEyeScleraCornerColorOverriden(enum class EEyeSide Side, bool* bOverriden, enum class EEyeSide Temp_byte_Variable, const struct FEyeAppearance& K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, bool CallFunc_DoesDataTableRowExist_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "IsEyeScleraCornerColorOverriden");

	Params::UBP_CharacterAppearanceComponent_C_IsEyeScleraCornerColorOverriden_Params Parms{};

	Parms.Side = Side;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_DoesDataTableRowExist_ReturnValue = CallFunc_DoesDataTableRowExist_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bOverriden != nullptr)
		*bOverriden = Parms.bOverriden;

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetEyeScleraCornerColor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         OutValue                                                         (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// enum class EEyeSide                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEyeScleraCornerColorOverriden_bOverriden              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterAppearance_Preset CallFunc_GetSelectedArchetypeData_OutArchetype                   (None)
// struct FEyeAppearance              K2Node_Select_Default                                            (NoDestructor)

void UBP_CharacterAppearanceComponent_C::GetEyeScleraCornerColor(enum class EEyeSide Side, struct FDataTableRowHandle* OutValue, enum class EEyeSide Temp_byte_Variable, bool CallFunc_IsEyeScleraCornerColorOverriden_bOverriden, const struct FCharacterAppearance_Preset& CallFunc_GetSelectedArchetypeData_OutArchetype, const struct FEyeAppearance& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "GetEyeScleraCornerColor");

	Params::UBP_CharacterAppearanceComponent_C_GetEyeScleraCornerColor_Params Parms{};

	Parms.Side = Side;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_IsEyeScleraCornerColorOverriden_bOverriden = CallFunc_IsEyeScleraCornerColorOverriden_bOverriden;
	Parms.CallFunc_GetSelectedArchetypeData_OutArchetype = CallFunc_GetSelectedArchetypeData_OutArchetype;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (OutValue != nullptr)
		*OutValue = std::move(Parms.OutValue);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetEyeScleraCornerColorOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::ResetEyeScleraCornerColorOverride(enum class EEyeSide Side)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "ResetEyeScleraCornerColorOverride");

	Params::UBP_CharacterAppearanceComponent_C_ResetEyeScleraCornerColorOverride_Params Parms{};

	Parms.Side = Side;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetEyeScleraCornerColorOverride
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         Override                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetEyeScleraCornerColor_OutValue                        (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RowHandlesEqual_Equal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeSide                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEyeAppearance              K2Node_Select_Default                                            (NoDestructor)
// struct FEyeAppearance              CallFunc_GetEyeData_OutValue                                     (NoDestructor)
// struct FEyeAppearance              K2Node_SetFieldsInStruct_StructOut                               (NoDestructor)

void UBP_CharacterAppearanceComponent_C::SetEyeScleraCornerColorOverride(enum class EEyeSide Side, const struct FDataTableRowHandle& Override, class AActor* CallFunc_GetOwner_ReturnValue, const struct FDataTableRowHandle& CallFunc_GetEyeScleraCornerColor_OutValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_RowHandlesEqual_Equal, bool CallFunc_Not_PreBool_ReturnValue, enum class EEyeSide Temp_byte_Variable, const struct FEyeAppearance& K2Node_Select_Default, const struct FEyeAppearance& CallFunc_GetEyeData_OutValue, const struct FEyeAppearance& K2Node_SetFieldsInStruct_StructOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "SetEyeScleraCornerColorOverride");

	Params::UBP_CharacterAppearanceComponent_C_SetEyeScleraCornerColorOverride_Params Parms{};

	Parms.Side = Side;
	Parms.Override = Override;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetEyeScleraCornerColor_OutValue = CallFunc_GetEyeScleraCornerColor_OutValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_RowHandlesEqual_Equal = CallFunc_RowHandlesEqual_Equal;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetEyeData_OutValue = CallFunc_GetEyeData_OutValue;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsEyeScleraColorOverriden
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bOverriden                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeSide                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEyeAppearance              K2Node_Select_Default                                            (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesDataTableRowExist_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::IsEyeScleraColorOverriden(enum class EEyeSide Side, bool* bOverriden, enum class EEyeSide Temp_byte_Variable, const struct FEyeAppearance& K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, bool CallFunc_DoesDataTableRowExist_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "IsEyeScleraColorOverriden");

	Params::UBP_CharacterAppearanceComponent_C_IsEyeScleraColorOverriden_Params Parms{};

	Parms.Side = Side;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_DoesDataTableRowExist_ReturnValue = CallFunc_DoesDataTableRowExist_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bOverriden != nullptr)
		*bOverriden = Parms.bOverriden;

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetEyeScleraColor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         OutValue                                                         (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// enum class EEyeSide                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEyeScleraColorOverriden_bOverriden                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterAppearance_Preset CallFunc_GetSelectedArchetypeData_OutArchetype                   (None)
// struct FEyeAppearance              K2Node_Select_Default                                            (NoDestructor)

void UBP_CharacterAppearanceComponent_C::GetEyeScleraColor(enum class EEyeSide Side, struct FDataTableRowHandle* OutValue, enum class EEyeSide Temp_byte_Variable, bool CallFunc_IsEyeScleraColorOverriden_bOverriden, const struct FCharacterAppearance_Preset& CallFunc_GetSelectedArchetypeData_OutArchetype, const struct FEyeAppearance& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "GetEyeScleraColor");

	Params::UBP_CharacterAppearanceComponent_C_GetEyeScleraColor_Params Parms{};

	Parms.Side = Side;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_IsEyeScleraColorOverriden_bOverriden = CallFunc_IsEyeScleraColorOverriden_bOverriden;
	Parms.CallFunc_GetSelectedArchetypeData_OutArchetype = CallFunc_GetSelectedArchetypeData_OutArchetype;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (OutValue != nullptr)
		*OutValue = std::move(Parms.OutValue);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetEyeScleraColorOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::ResetEyeScleraColorOverride(enum class EEyeSide Side)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "ResetEyeScleraColorOverride");

	Params::UBP_CharacterAppearanceComponent_C_ResetEyeScleraColorOverride_Params Parms{};

	Parms.Side = Side;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetEyeScleraColorOverride
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         Override                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetEyeScleraColor_OutValue                              (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RowHandlesEqual_Equal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeSide                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEyeAppearance              K2Node_Select_Default                                            (NoDestructor)
// struct FEyeAppearance              CallFunc_GetEyeData_OutValue                                     (NoDestructor)
// struct FEyeAppearance              K2Node_SetFieldsInStruct_StructOut                               (NoDestructor)

void UBP_CharacterAppearanceComponent_C::SetEyeScleraColorOverride(enum class EEyeSide Side, const struct FDataTableRowHandle& Override, class AActor* CallFunc_GetOwner_ReturnValue, const struct FDataTableRowHandle& CallFunc_GetEyeScleraColor_OutValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_RowHandlesEqual_Equal, bool CallFunc_Not_PreBool_ReturnValue, enum class EEyeSide Temp_byte_Variable, const struct FEyeAppearance& K2Node_Select_Default, const struct FEyeAppearance& CallFunc_GetEyeData_OutValue, const struct FEyeAppearance& K2Node_SetFieldsInStruct_StructOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "SetEyeScleraColorOverride");

	Params::UBP_CharacterAppearanceComponent_C_SetEyeScleraColorOverride_Params Parms{};

	Parms.Side = Side;
	Parms.Override = Override;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetEyeScleraColor_OutValue = CallFunc_GetEyeScleraColor_OutValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_RowHandlesEqual_Equal = CallFunc_RowHandlesEqual_Equal;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetEyeData_OutValue = CallFunc_GetEyeData_OutValue;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ClearAncestorData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      K2Node_MakeArray_Array                                           (ReferenceParm)

void UBP_CharacterAppearanceComponent_C::ClearAncestorData(TArray<int32>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "ClearAncestorData");

	Params::UBP_CharacterAppearanceComponent_C_ClearAncestorData_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetAncestorData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FAppearanceAncestorData>OutAncestorData                                                  (Parm, OutParm)

void UBP_CharacterAppearanceComponent_C::GetAncestorData(TArray<struct FAppearanceAncestorData>* OutAncestorData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "GetAncestorData");

	Params::UBP_CharacterAppearanceComponent_C_GetAncestorData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OutAncestorData != nullptr)
		*OutAncestorData = std::move(Parms.OutAncestorData);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetAncestorData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<double>                     AncestorWeights                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_Contribution_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::SetAncestorData(TArray<double>& AncestorWeights, class AActor* CallFunc_GetOwner_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Array_Index_Variable, double CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float K2Node_SetFieldsInStruct_Contribution_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "SetAncestorData");

	Params::UBP_CharacterAppearanceComponent_C_SetAncestorData_Params Parms{};

	Parms.AncestorWeights = AncestorWeights;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_SetFieldsInStruct_Contribution_ImplicitCast = K2Node_SetFieldsInStruct_Contribution_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsEyeIrisScaleOverriden
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bOverriden                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeSide                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEyeAppearance              K2Node_Select_Default                                            (NoDestructor)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::IsEyeIrisScaleOverriden(enum class EEyeSide Side, bool* bOverriden, enum class EEyeSide Temp_byte_Variable, const struct FEyeAppearance& K2Node_Select_Default, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "IsEyeIrisScaleOverriden");

	Params::UBP_CharacterAppearanceComponent_C_IsEyeIrisScaleOverriden_Params Parms{};

	Parms.Side = Side;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast = CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (bOverriden != nullptr)
		*bOverriden = Parms.bOverriden;

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetEyeIrisScale
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             OutValue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeSide                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEyeIrisScaleOverriden_bOverriden                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterAppearance_Preset CallFunc_GetSelectedArchetypeData_OutArchetype                   (None)
// struct FEyeAppearance              K2Node_Select_Default                                            (NoDestructor)
// double                             K2Node_FunctionResult_OutValue_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_OutValue_ImplicitCast_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::GetEyeIrisScale(enum class EEyeSide Side, double* OutValue, enum class EEyeSide Temp_byte_Variable, bool CallFunc_IsEyeIrisScaleOverriden_bOverriden, const struct FCharacterAppearance_Preset& CallFunc_GetSelectedArchetypeData_OutArchetype, const struct FEyeAppearance& K2Node_Select_Default, double K2Node_FunctionResult_OutValue_ImplicitCast, double K2Node_FunctionResult_OutValue_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "GetEyeIrisScale");

	Params::UBP_CharacterAppearanceComponent_C_GetEyeIrisScale_Params Parms{};

	Parms.Side = Side;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_IsEyeIrisScaleOverriden_bOverriden = CallFunc_IsEyeIrisScaleOverriden_bOverriden;
	Parms.CallFunc_GetSelectedArchetypeData_OutArchetype = CallFunc_GetSelectedArchetypeData_OutArchetype;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_FunctionResult_OutValue_ImplicitCast = K2Node_FunctionResult_OutValue_ImplicitCast;
	Parms.K2Node_FunctionResult_OutValue_ImplicitCast_1 = K2Node_FunctionResult_OutValue_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetEyeIrisScaleOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::ResetEyeIrisScaleOverride(enum class EEyeSide Side)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "ResetEyeIrisScaleOverride");

	Params::UBP_CharacterAppearanceComponent_C_ResetEyeIrisScaleOverride_Params Parms{};

	Parms.Side = Side;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetEyeIrisScaleOverride
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Override                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetEyeIrisScale_OutValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeSide                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEyeAppearance              K2Node_Select_Default                                            (NoDestructor)
// struct FEyeAppearance              CallFunc_GetEyeData_OutValue                                     (NoDestructor)
// struct FEyeAppearance              K2Node_SetFieldsInStruct_StructOut                               (NoDestructor)
// float                              K2Node_SetFieldsInStruct_IrisScale_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::SetEyeIrisScaleOverride(enum class EEyeSide Side, double Override, class AActor* CallFunc_GetOwner_ReturnValue, double CallFunc_GetEyeIrisScale_OutValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class EEyeSide Temp_byte_Variable, const struct FEyeAppearance& K2Node_Select_Default, const struct FEyeAppearance& CallFunc_GetEyeData_OutValue, const struct FEyeAppearance& K2Node_SetFieldsInStruct_StructOut, float K2Node_SetFieldsInStruct_IrisScale_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "SetEyeIrisScaleOverride");

	Params::UBP_CharacterAppearanceComponent_C_SetEyeIrisScaleOverride_Params Parms{};

	Parms.Side = Side;
	Parms.Override = Override;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetEyeIrisScale_OutValue = CallFunc_GetEyeIrisScale_OutValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetEyeData_OutValue = CallFunc_GetEyeData_OutValue;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;
	Parms.K2Node_SetFieldsInStruct_IrisScale_ImplicitCast = K2Node_SetFieldsInStruct_IrisScale_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsEyeOffsetOverriden
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               bOverriden                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::IsEyeOffsetOverriden(bool* bOverriden, bool CallFunc_NotEqual_VectorVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "IsEyeOffsetOverriden");

	Params::UBP_CharacterAppearanceComponent_C_IsEyeOffsetOverriden_Params Parms{};

	Parms.CallFunc_NotEqual_VectorVector_ReturnValue = CallFunc_NotEqual_VectorVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bOverriden != nullptr)
		*bOverriden = Parms.bOverriden;

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetEyeOffset
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                     EyeOffset                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterAppearance_Preset CallFunc_GetSelectedArchetypeData_OutArchetype                   (None)
// bool                               CallFunc_IsEyeOffsetOverriden_bOverriden                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::GetEyeOffset(struct FVector* EyeOffset, const struct FCharacterAppearance_Preset& CallFunc_GetSelectedArchetypeData_OutArchetype, bool CallFunc_IsEyeOffsetOverriden_bOverriden)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "GetEyeOffset");

	Params::UBP_CharacterAppearanceComponent_C_GetEyeOffset_Params Parms{};

	Parms.CallFunc_GetSelectedArchetypeData_OutArchetype = CallFunc_GetSelectedArchetypeData_OutArchetype;
	Parms.CallFunc_IsEyeOffsetOverriden_bOverriden = CallFunc_IsEyeOffsetOverriden_bOverriden;

	UObject::ProcessEvent(Func, &Parms);

	if (EyeOffset != nullptr)
		*EyeOffset = std::move(Parms.EyeOffset);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetEyeOffsetOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_CharacterAppearanceComponent_C::ResetEyeOffsetOverride()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "ResetEyeOffsetOverride");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetEyeOffsetOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     EyeOffsetOverride                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetEyeOffset_EyeOffset                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::SetEyeOffsetOverride(const struct FVector& EyeOffsetOverride, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_GetEyeOffset_EyeOffset, bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "SetEyeOffsetOverride");

	Params::UBP_CharacterAppearanceComponent_C_SetEyeOffsetOverride_Params Parms{};

	Parms.EyeOffsetOverride = EyeOffsetOverride;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetEyeOffset_EyeOffset = CallFunc_GetEyeOffset_EyeOffset;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.CaptureAppearanceData
// (Exec, Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UHairDataAsset>EyeBrowAsset                                                     (Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash)
// TSoftObjectPtr<class UHairDataAsset>FacialHairAsset                                                  (Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash)
// TSoftObjectPtr<class UHairDataAsset>HairAsset                                                        (Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash)
// TMap<class FName, float>           BodyMorphs                                                       (Edit, BlueprintVisible)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetLipGloss_OutLipGloss                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFoundationAppearance       CallFunc_GetFoundationData_OutFoundationData                     (NoDestructor)
// struct FMakeupAppearance           CallFunc_GetMakeupAppearance_MakeupData                          (NoDestructor)
// struct FMakeupAppearance           CallFunc_GetMakeupAppearance_MakeupData_1                        (NoDestructor)
// struct FMakeupAppearance           CallFunc_GetMakeupAppearance_MakeupData_2                        (NoDestructor)
// struct FMakeupAppearance           CallFunc_GetMakeupAppearance_MakeupData_3                        (NoDestructor)
// double                             CallFunc_GetRedness_OutRedness                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHairDataReference          CallFunc_GetHairData_OutData                                     (HasGetValueTypeHash)
// struct FHairDataReference          CallFunc_GetHairData_OutData_1                                   (HasGetValueTypeHash)
// TSoftObjectPtr<class UHairDataAsset>CallFunc_GetSoftObjectFromReference_ReturnValue                  (UObjectWrapper, HasGetValueTypeHash)
// TSoftObjectPtr<class UHairDataAsset>CallFunc_GetSoftObjectFromReference_ReturnValue_1                (UObjectWrapper, HasGetValueTypeHash)
// struct FHairDataReference          CallFunc_GetHairData_OutData_2                                   (HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UHairDataAsset>CallFunc_GetSoftObjectFromReference_ReturnValue_2                (UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_ObjectIsA_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetHairColor_OutHairColor                               (NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetHairColor_OutHairColor_1                             (NoDestructor, HasGetValueTypeHash)
// struct FHairAppearance             K2Node_MakeStruct_HairAppearance                                 (None)
// struct FHairAppearance             K2Node_MakeStruct_HairAppearance_1                               (None)
// TArray<struct FAppearanceMorphTarget>CallFunc_GetBodyMorphTargets_OutCurrentMorphs                    (ReferenceParm)
// double                             CallFunc_GetAgeValue_OutAgeValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAppearanceMorphTarget      CallFunc_Array_Get_Item                                          (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEyeLashAppearance          CallFunc_GetEyeLashData_OutValue                                 (NoDestructor)
// struct FGuid                       CallFunc_NewGuid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEditor_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_GuidToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTeethAppearance            CallFunc_GetTeethData_OutValue                                   (NoDestructor)
// struct FDataTableRowHandle         CallFunc_GetHairColor_OutHairColor_2                             (NoDestructor, HasGetValueTypeHash)
// struct FEyeAppearance              CallFunc_GetEyeData_OutValue                                     (NoDestructor)
// struct FHairAppearance             K2Node_MakeStruct_HairAppearance_2                               (None)
// struct FDataTableRowHandle         CallFunc_GetSkinColor_OutSkinColor                               (NoDestructor, HasGetValueTypeHash)
// struct FCharacterAppearance_Preset CallFunc_GetSelectedArchetypeData_OutArchetype                   (None)
// struct FBodyAppearance             K2Node_MakeStruct_BodyAppearance                                 (None)
// struct FCharacterAppearance_Preset K2Node_MakeStruct_CharacterAppearance_Preset                     (None)
// bool                               CallFunc_DataTable_AddDataRow_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_DefaultLipGloss_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_DefaultRedness_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_DefaultEyeScale_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_DefaultAge_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::CaptureAppearanceData(TSoftObjectPtr<class UHairDataAsset> EyeBrowAsset, TSoftObjectPtr<class UHairDataAsset> FacialHairAsset, TSoftObjectPtr<class UHairDataAsset> HairAsset, TMap<class FName, float> BodyMorphs, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_GetLipGloss_OutLipGloss, const struct FFoundationAppearance& CallFunc_GetFoundationData_OutFoundationData, const struct FMakeupAppearance& CallFunc_GetMakeupAppearance_MakeupData, const struct FMakeupAppearance& CallFunc_GetMakeupAppearance_MakeupData_1, const struct FMakeupAppearance& CallFunc_GetMakeupAppearance_MakeupData_2, const struct FMakeupAppearance& CallFunc_GetMakeupAppearance_MakeupData_3, double CallFunc_GetRedness_OutRedness, const struct FHairDataReference& CallFunc_GetHairData_OutData, const struct FHairDataReference& CallFunc_GetHairData_OutData_1, TSoftObjectPtr<class UHairDataAsset> CallFunc_GetSoftObjectFromReference_ReturnValue, TSoftObjectPtr<class UHairDataAsset> CallFunc_GetSoftObjectFromReference_ReturnValue_1, const struct FHairDataReference& CallFunc_GetHairData_OutData_2, class AActor* CallFunc_GetOwner_ReturnValue, TSoftObjectPtr<class UHairDataAsset> CallFunc_GetSoftObjectFromReference_ReturnValue_2, bool CallFunc_ObjectIsA_ReturnValue, const struct FDataTableRowHandle& CallFunc_GetHairColor_OutHairColor, const struct FDataTableRowHandle& CallFunc_GetHairColor_OutHairColor_1, const struct FHairAppearance& K2Node_MakeStruct_HairAppearance, const struct FHairAppearance& K2Node_MakeStruct_HairAppearance_1, TArray<struct FAppearanceMorphTarget>& CallFunc_GetBodyMorphTargets_OutCurrentMorphs, double CallFunc_GetAgeValue_OutAgeValue, const struct FAppearanceMorphTarget& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FEyeLashAppearance& CallFunc_GetEyeLashData_OutValue, const struct FGuid& CallFunc_NewGuid_ReturnValue, bool CallFunc_IsEditor_ReturnValue, const class FString& CallFunc_Conv_GuidToString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FTeethAppearance& CallFunc_GetTeethData_OutValue, const struct FDataTableRowHandle& CallFunc_GetHairColor_OutHairColor_2, const struct FEyeAppearance& CallFunc_GetEyeData_OutValue, const struct FHairAppearance& K2Node_MakeStruct_HairAppearance_2, const struct FDataTableRowHandle& CallFunc_GetSkinColor_OutSkinColor, const struct FCharacterAppearance_Preset& CallFunc_GetSelectedArchetypeData_OutArchetype, const struct FBodyAppearance& K2Node_MakeStruct_BodyAppearance, const struct FCharacterAppearance_Preset& K2Node_MakeStruct_CharacterAppearance_Preset, bool CallFunc_DataTable_AddDataRow_ReturnValue, float K2Node_MakeStruct_DefaultLipGloss_ImplicitCast, float K2Node_MakeStruct_DefaultRedness_ImplicitCast, float K2Node_MakeStruct_DefaultEyeScale_ImplicitCast, float K2Node_MakeStruct_DefaultAge_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "CaptureAppearanceData");

	Params::UBP_CharacterAppearanceComponent_C_CaptureAppearanceData_Params Parms{};

	Parms.EyeBrowAsset = EyeBrowAsset;
	Parms.FacialHairAsset = FacialHairAsset;
	Parms.HairAsset = HairAsset;
	Parms.BodyMorphs = BodyMorphs;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetLipGloss_OutLipGloss = CallFunc_GetLipGloss_OutLipGloss;
	Parms.CallFunc_GetFoundationData_OutFoundationData = CallFunc_GetFoundationData_OutFoundationData;
	Parms.CallFunc_GetMakeupAppearance_MakeupData = CallFunc_GetMakeupAppearance_MakeupData;
	Parms.CallFunc_GetMakeupAppearance_MakeupData_1 = CallFunc_GetMakeupAppearance_MakeupData_1;
	Parms.CallFunc_GetMakeupAppearance_MakeupData_2 = CallFunc_GetMakeupAppearance_MakeupData_2;
	Parms.CallFunc_GetMakeupAppearance_MakeupData_3 = CallFunc_GetMakeupAppearance_MakeupData_3;
	Parms.CallFunc_GetRedness_OutRedness = CallFunc_GetRedness_OutRedness;
	Parms.CallFunc_GetHairData_OutData = CallFunc_GetHairData_OutData;
	Parms.CallFunc_GetHairData_OutData_1 = CallFunc_GetHairData_OutData_1;
	Parms.CallFunc_GetSoftObjectFromReference_ReturnValue = CallFunc_GetSoftObjectFromReference_ReturnValue;
	Parms.CallFunc_GetSoftObjectFromReference_ReturnValue_1 = CallFunc_GetSoftObjectFromReference_ReturnValue_1;
	Parms.CallFunc_GetHairData_OutData_2 = CallFunc_GetHairData_OutData_2;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetSoftObjectFromReference_ReturnValue_2 = CallFunc_GetSoftObjectFromReference_ReturnValue_2;
	Parms.CallFunc_ObjectIsA_ReturnValue = CallFunc_ObjectIsA_ReturnValue;
	Parms.CallFunc_GetHairColor_OutHairColor = CallFunc_GetHairColor_OutHairColor;
	Parms.CallFunc_GetHairColor_OutHairColor_1 = CallFunc_GetHairColor_OutHairColor_1;
	Parms.K2Node_MakeStruct_HairAppearance = K2Node_MakeStruct_HairAppearance;
	Parms.K2Node_MakeStruct_HairAppearance_1 = K2Node_MakeStruct_HairAppearance_1;
	Parms.CallFunc_GetBodyMorphTargets_OutCurrentMorphs = CallFunc_GetBodyMorphTargets_OutCurrentMorphs;
	Parms.CallFunc_GetAgeValue_OutAgeValue = CallFunc_GetAgeValue_OutAgeValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetEyeLashData_OutValue = CallFunc_GetEyeLashData_OutValue;
	Parms.CallFunc_NewGuid_ReturnValue = CallFunc_NewGuid_ReturnValue;
	Parms.CallFunc_IsEditor_ReturnValue = CallFunc_IsEditor_ReturnValue;
	Parms.CallFunc_Conv_GuidToString_ReturnValue = CallFunc_Conv_GuidToString_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetTeethData_OutValue = CallFunc_GetTeethData_OutValue;
	Parms.CallFunc_GetHairColor_OutHairColor_2 = CallFunc_GetHairColor_OutHairColor_2;
	Parms.CallFunc_GetEyeData_OutValue = CallFunc_GetEyeData_OutValue;
	Parms.K2Node_MakeStruct_HairAppearance_2 = K2Node_MakeStruct_HairAppearance_2;
	Parms.CallFunc_GetSkinColor_OutSkinColor = CallFunc_GetSkinColor_OutSkinColor;
	Parms.CallFunc_GetSelectedArchetypeData_OutArchetype = CallFunc_GetSelectedArchetypeData_OutArchetype;
	Parms.K2Node_MakeStruct_BodyAppearance = K2Node_MakeStruct_BodyAppearance;
	Parms.K2Node_MakeStruct_CharacterAppearance_Preset = K2Node_MakeStruct_CharacterAppearance_Preset;
	Parms.CallFunc_DataTable_AddDataRow_ReturnValue = CallFunc_DataTable_AddDataRow_ReturnValue;
	Parms.K2Node_MakeStruct_DefaultLipGloss_ImplicitCast = K2Node_MakeStruct_DefaultLipGloss_ImplicitCast;
	Parms.K2Node_MakeStruct_DefaultRedness_ImplicitCast = K2Node_MakeStruct_DefaultRedness_ImplicitCast;
	Parms.K2Node_MakeStruct_DefaultEyeScale_ImplicitCast = K2Node_MakeStruct_DefaultEyeScale_ImplicitCast;
	Parms.K2Node_MakeStruct_DefaultAge_ImplicitCast = K2Node_MakeStruct_DefaultAge_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetBodyMorphTargets
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FAppearanceMorphTarget>OutCurrentMorphs                                                 (Parm, OutParm)
// TMap<class FName, float>           CombinedMorphTargets                                             (Edit, BlueprintVisible)
// TArray<struct FAppearanceMorphTarget>AllMorphs                                                        (Edit, BlueprintVisible)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAppearanceMorphTarget      K2Node_MakeStruct_AppearanceMorphTarget                          (NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterAppearance_Preset CallFunc_GetSelectedArchetypeData_OutArchetype                   (None)
// struct FAppearanceMorphTarget      CallFunc_Array_Get_Item_1                                        (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::GetBodyMorphTargets(TArray<struct FAppearanceMorphTarget>* OutCurrentMorphs, TMap<class FName, float> CombinedMorphTargets, const TArray<struct FAppearanceMorphTarget>& AllMorphs, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, TArray<class FName>& CallFunc_Map_Keys_Keys, int32 CallFunc_Add_IntInt_ReturnValue_1, class FName CallFunc_Array_Get_Item, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FAppearanceMorphTarget& K2Node_MakeStruct_AppearanceMorphTarget, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct FCharacterAppearance_Preset& CallFunc_GetSelectedArchetypeData_OutArchetype, const struct FAppearanceMorphTarget& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "GetBodyMorphTargets");

	Params::UBP_CharacterAppearanceComponent_C_GetBodyMorphTargets_Params Parms{};

	Parms.CombinedMorphTargets = CombinedMorphTargets;
	Parms.AllMorphs = AllMorphs;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_MakeStruct_AppearanceMorphTarget = K2Node_MakeStruct_AppearanceMorphTarget;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetSelectedArchetypeData_OutArchetype = CallFunc_GetSelectedArchetypeData_OutArchetype;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (OutCurrentMorphs != nullptr)
		*OutCurrentMorphs = std::move(Parms.OutCurrentMorphs);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ClearAllBodyMorphTargets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAppearanceMorphTarget>CallFunc_GetBodyMorphTargets_OutCurrentMorphs                    (ReferenceParm)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::ClearAllBodyMorphTargets(class AActor* CallFunc_GetOwner_ReturnValue, TArray<struct FAppearanceMorphTarget>& CallFunc_GetBodyMorphTargets_OutCurrentMorphs, bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "ClearAllBodyMorphTargets");

	Params::UBP_CharacterAppearanceComponent_C_ClearAllBodyMorphTargets_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetBodyMorphTargets_OutCurrentMorphs = CallFunc_GetBodyMorphTargets_OutCurrentMorphs;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.RemoveBodyMorphTarget_Internal
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        MorphName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAppearanceMorphTarget      CallFunc_Array_Get_Item                                          (NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::RemoveBodyMorphTarget_Internal(class FName MorphName, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FAppearanceMorphTarget& CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "RemoveBodyMorphTarget_Internal");

	Params::UBP_CharacterAppearanceComponent_C_RemoveBodyMorphTarget_Internal_Params Parms{};

	Parms.MorphName = MorphName;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.RemoveBodyMorphTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        MorphName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAppearanceMorphTarget>CallFunc_GetBodyMorphTargets_OutCurrentMorphs                    (ReferenceParm)

void UBP_CharacterAppearanceComponent_C::RemoveBodyMorphTarget(class FName MorphName, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, TArray<struct FAppearanceMorphTarget>& CallFunc_GetBodyMorphTargets_OutCurrentMorphs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "RemoveBodyMorphTarget");

	Params::UBP_CharacterAppearanceComponent_C_RemoveBodyMorphTarget_Params Parms{};

	Parms.MorphName = MorphName;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetBodyMorphTargets_OutCurrentMorphs = CallFunc_GetBodyMorphTargets_OutCurrentMorphs;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetBodyMorphTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        MorphName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAppearanceMorphTarget>CallFunc_GetBodyMorphTargets_OutCurrentMorphs                    (ReferenceParm)
// struct FAppearanceMorphTarget      K2Node_MakeStruct_AppearanceMorphTarget                          (NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_Value_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::SetBodyMorphTarget(class FName MorphName, double Value, int32 CurrentIndex, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, TArray<struct FAppearanceMorphTarget>& CallFunc_GetBodyMorphTargets_OutCurrentMorphs, const struct FAppearanceMorphTarget& K2Node_MakeStruct_AppearanceMorphTarget, int32 CallFunc_Array_Add_ReturnValue, float K2Node_MakeStruct_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "SetBodyMorphTarget");

	Params::UBP_CharacterAppearanceComponent_C_SetBodyMorphTarget_Params Parms{};

	Parms.MorphName = MorphName;
	Parms.Value = Value;
	Parms.CurrentIndex = CurrentIndex;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetBodyMorphTargets_OutCurrentMorphs = CallFunc_GetBodyMorphTargets_OutCurrentMorphs;
	Parms.K2Node_MakeStruct_AppearanceMorphTarget = K2Node_MakeStruct_AppearanceMorphTarget;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_MakeStruct_Value_ImplicitCast = K2Node_MakeStruct_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetAllTeethOverrides
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_CharacterAppearanceComponent_C::ResetAllTeethOverrides()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "ResetAllTeethOverrides");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetAllEyeOverrides
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::ResetAllEyeOverrides(int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "ResetAllEyeOverrides");

	Params::UBP_CharacterAppearanceComponent_C_ResetAllEyeOverrides_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue = CallFunc_GetEnumeratorValueFromIndex_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsToothMetalIndexOverriden
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               bOverriden                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::IsToothMetalIndexOverriden(bool* bOverriden, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "IsToothMetalIndexOverriden");

	Params::UBP_CharacterAppearanceComponent_C_IsToothMetalIndexOverriden_Params Parms{};

	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bOverriden != nullptr)
		*bOverriden = Parms.bOverriden;

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetToothMetalIndex
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              OutValue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsToothMetalIndexOverriden_bOverriden                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterAppearance_Preset CallFunc_GetSelectedArchetypeData_OutArchetype                   (None)

void UBP_CharacterAppearanceComponent_C::GetToothMetalIndex(int32* OutValue, bool CallFunc_IsToothMetalIndexOverriden_bOverriden, const struct FCharacterAppearance_Preset& CallFunc_GetSelectedArchetypeData_OutArchetype)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "GetToothMetalIndex");

	Params::UBP_CharacterAppearanceComponent_C_GetToothMetalIndex_Params Parms{};

	Parms.CallFunc_IsToothMetalIndexOverriden_bOverriden = CallFunc_IsToothMetalIndexOverriden_bOverriden;
	Parms.CallFunc_GetSelectedArchetypeData_OutArchetype = CallFunc_GetSelectedArchetypeData_OutArchetype;

	UObject::ProcessEvent(Func, &Parms);

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetToothMetalIndexOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_CharacterAppearanceComponent_C::ResetToothMetalIndexOverride()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "ResetToothMetalIndexOverride");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetToothMetalIndexOverride
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Override                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTeethAppearance            CallFunc_GetTeethData_OutValue                                   (NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::SetToothMetalIndexOverride(int32 Override, class AActor* CallFunc_GetOwner_ReturnValue, const struct FTeethAppearance& CallFunc_GetTeethData_OutValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "SetToothMetalIndexOverride");

	Params::UBP_CharacterAppearanceComponent_C_SetToothMetalIndexOverride_Params Parms{};

	Parms.Override = Override;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetTeethData_OutValue = CallFunc_GetTeethData_OutValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsMetalToothIndexOverride
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               bOverriden                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::IsMetalToothIndexOverride(bool* bOverriden, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "IsMetalToothIndexOverride");

	Params::UBP_CharacterAppearanceComponent_C_IsMetalToothIndexOverride_Params Parms{};

	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bOverriden != nullptr)
		*bOverriden = Parms.bOverriden;

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetMetalToothIndex
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              OutValue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMetalToothIndexOverride_bOverriden                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterAppearance_Preset CallFunc_GetSelectedArchetypeData_OutArchetype                   (None)

void UBP_CharacterAppearanceComponent_C::GetMetalToothIndex(int32* OutValue, bool CallFunc_IsMetalToothIndexOverride_bOverriden, const struct FCharacterAppearance_Preset& CallFunc_GetSelectedArchetypeData_OutArchetype)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "GetMetalToothIndex");

	Params::UBP_CharacterAppearanceComponent_C_GetMetalToothIndex_Params Parms{};

	Parms.CallFunc_IsMetalToothIndexOverride_bOverriden = CallFunc_IsMetalToothIndexOverride_bOverriden;
	Parms.CallFunc_GetSelectedArchetypeData_OutArchetype = CallFunc_GetSelectedArchetypeData_OutArchetype;

	UObject::ProcessEvent(Func, &Parms);

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetMetalToothIndexOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_CharacterAppearanceComponent_C::ResetMetalToothIndexOverride()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "ResetMetalToothIndexOverride");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetMetalToothIndexOverride
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Override                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTeethAppearance            CallFunc_GetTeethData_OutValue                                   (NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::SetMetalToothIndexOverride(int32 Override, class AActor* CallFunc_GetOwner_ReturnValue, const struct FTeethAppearance& CallFunc_GetTeethData_OutValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "SetMetalToothIndexOverride");

	Params::UBP_CharacterAppearanceComponent_C_SetMetalToothIndexOverride_Params Parms{};

	Parms.Override = Override;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetTeethData_OutValue = CallFunc_GetTeethData_OutValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetTeethData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FTeethAppearance            OutValue                                                         (Parm, OutParm, NoDestructor)
// int32                              CallFunc_GetToothMetalIndex_OutValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMetalToothIndex_OutValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetToothDecay_OutValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTeethAppearance            K2Node_MakeStruct_TeethAppearance                                (NoDestructor)
// float                              K2Node_MakeStruct_ToothDecay_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::GetTeethData(struct FTeethAppearance* OutValue, int32 CallFunc_GetToothMetalIndex_OutValue, int32 CallFunc_GetMetalToothIndex_OutValue, double CallFunc_GetToothDecay_OutValue, const struct FTeethAppearance& K2Node_MakeStruct_TeethAppearance, float K2Node_MakeStruct_ToothDecay_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "GetTeethData");

	Params::UBP_CharacterAppearanceComponent_C_GetTeethData_Params Parms{};

	Parms.CallFunc_GetToothMetalIndex_OutValue = CallFunc_GetToothMetalIndex_OutValue;
	Parms.CallFunc_GetMetalToothIndex_OutValue = CallFunc_GetMetalToothIndex_OutValue;
	Parms.CallFunc_GetToothDecay_OutValue = CallFunc_GetToothDecay_OutValue;
	Parms.K2Node_MakeStruct_TeethAppearance = K2Node_MakeStruct_TeethAppearance;
	Parms.K2Node_MakeStruct_ToothDecay_ImplicitCast = K2Node_MakeStruct_ToothDecay_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (OutValue != nullptr)
		*OutValue = std::move(Parms.OutValue);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsToothDecayOverriden
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               bOverriden                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::IsToothDecayOverriden(bool* bOverriden, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "IsToothDecayOverriden");

	Params::UBP_CharacterAppearanceComponent_C_IsToothDecayOverriden_Params Parms{};

	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast = CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (bOverriden != nullptr)
		*bOverriden = Parms.bOverriden;

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetToothDecay
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// double                             OutValue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsToothDecayOverriden_bOverriden                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterAppearance_Preset CallFunc_GetSelectedArchetypeData_OutArchetype                   (None)
// double                             K2Node_FunctionResult_OutValue_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_OutValue_ImplicitCast_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::GetToothDecay(double* OutValue, bool CallFunc_IsToothDecayOverriden_bOverriden, const struct FCharacterAppearance_Preset& CallFunc_GetSelectedArchetypeData_OutArchetype, double K2Node_FunctionResult_OutValue_ImplicitCast, double K2Node_FunctionResult_OutValue_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "GetToothDecay");

	Params::UBP_CharacterAppearanceComponent_C_GetToothDecay_Params Parms{};

	Parms.CallFunc_IsToothDecayOverriden_bOverriden = CallFunc_IsToothDecayOverriden_bOverriden;
	Parms.CallFunc_GetSelectedArchetypeData_OutArchetype = CallFunc_GetSelectedArchetypeData_OutArchetype;
	Parms.K2Node_FunctionResult_OutValue_ImplicitCast = K2Node_FunctionResult_OutValue_ImplicitCast;
	Parms.K2Node_FunctionResult_OutValue_ImplicitCast_1 = K2Node_FunctionResult_OutValue_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetToothDecayOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_CharacterAppearanceComponent_C::ResetToothDecayOverride()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "ResetToothDecayOverride");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetToothDecayOverride
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Override                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTeethAppearance            CallFunc_GetTeethData_OutValue                                   (NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_ToothDecay_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::SetToothDecayOverride(double Override, class AActor* CallFunc_GetOwner_ReturnValue, const struct FTeethAppearance& CallFunc_GetTeethData_OutValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float K2Node_SetFieldsInStruct_ToothDecay_ImplicitCast, double CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "SetToothDecayOverride");

	Params::UBP_CharacterAppearanceComponent_C_SetToothDecayOverride_Params Parms{};

	Parms.Override = Override;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetTeethData_OutValue = CallFunc_GetTeethData_OutValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_SetFieldsInStruct_ToothDecay_ImplicitCast = K2Node_SetFieldsInStruct_ToothDecay_ImplicitCast;
	Parms.CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast = CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetEyeData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEyeAppearance              OutValue                                                         (Parm, OutParm, NoDestructor)
// struct FDataTableRowHandle         CallFunc_GetEyeInnerColor_OutValue                               (NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetEyeLimbusOpacity_OutValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetEyeIrisDetail_OutValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetEyeVeinOpacity_OutValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetEyeScleraCornerColor_OutValue                        (NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetEyeScleraColor_OutValue                              (NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetEyeIrisScale_OutValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetEyePupilScale_OutValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetEyeBloodshotAmount_OutValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetEyeEmissiveColor_OutValue                            (NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetEyeOuterColor_OutValue                               (NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetEyeMiddleColor_OutValue                              (NoDestructor, HasGetValueTypeHash)
// struct FEyeAppearance              K2Node_MakeStruct_EyeAppearance                                  (NoDestructor)
// float                              K2Node_MakeStruct_LimbusOpacity_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_IrisDetail_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_VeinOpacity_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_IrisScale_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_PupilScale_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_BloodshotAmount_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::GetEyeData(enum class EEyeSide Side, struct FEyeAppearance* OutValue, const struct FDataTableRowHandle& CallFunc_GetEyeInnerColor_OutValue, double CallFunc_GetEyeLimbusOpacity_OutValue, double CallFunc_GetEyeIrisDetail_OutValue, double CallFunc_GetEyeVeinOpacity_OutValue, const struct FDataTableRowHandle& CallFunc_GetEyeScleraCornerColor_OutValue, const struct FDataTableRowHandle& CallFunc_GetEyeScleraColor_OutValue, double CallFunc_GetEyeIrisScale_OutValue, double CallFunc_GetEyePupilScale_OutValue, double CallFunc_GetEyeBloodshotAmount_OutValue, const struct FDataTableRowHandle& CallFunc_GetEyeEmissiveColor_OutValue, const struct FDataTableRowHandle& CallFunc_GetEyeOuterColor_OutValue, const struct FDataTableRowHandle& CallFunc_GetEyeMiddleColor_OutValue, const struct FEyeAppearance& K2Node_MakeStruct_EyeAppearance, float K2Node_MakeStruct_LimbusOpacity_ImplicitCast, float K2Node_MakeStruct_IrisDetail_ImplicitCast, float K2Node_MakeStruct_VeinOpacity_ImplicitCast, float K2Node_MakeStruct_IrisScale_ImplicitCast, float K2Node_MakeStruct_PupilScale_ImplicitCast, float K2Node_MakeStruct_BloodshotAmount_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "GetEyeData");

	Params::UBP_CharacterAppearanceComponent_C_GetEyeData_Params Parms{};

	Parms.Side = Side;
	Parms.CallFunc_GetEyeInnerColor_OutValue = CallFunc_GetEyeInnerColor_OutValue;
	Parms.CallFunc_GetEyeLimbusOpacity_OutValue = CallFunc_GetEyeLimbusOpacity_OutValue;
	Parms.CallFunc_GetEyeIrisDetail_OutValue = CallFunc_GetEyeIrisDetail_OutValue;
	Parms.CallFunc_GetEyeVeinOpacity_OutValue = CallFunc_GetEyeVeinOpacity_OutValue;
	Parms.CallFunc_GetEyeScleraCornerColor_OutValue = CallFunc_GetEyeScleraCornerColor_OutValue;
	Parms.CallFunc_GetEyeScleraColor_OutValue = CallFunc_GetEyeScleraColor_OutValue;
	Parms.CallFunc_GetEyeIrisScale_OutValue = CallFunc_GetEyeIrisScale_OutValue;
	Parms.CallFunc_GetEyePupilScale_OutValue = CallFunc_GetEyePupilScale_OutValue;
	Parms.CallFunc_GetEyeBloodshotAmount_OutValue = CallFunc_GetEyeBloodshotAmount_OutValue;
	Parms.CallFunc_GetEyeEmissiveColor_OutValue = CallFunc_GetEyeEmissiveColor_OutValue;
	Parms.CallFunc_GetEyeOuterColor_OutValue = CallFunc_GetEyeOuterColor_OutValue;
	Parms.CallFunc_GetEyeMiddleColor_OutValue = CallFunc_GetEyeMiddleColor_OutValue;
	Parms.K2Node_MakeStruct_EyeAppearance = K2Node_MakeStruct_EyeAppearance;
	Parms.K2Node_MakeStruct_LimbusOpacity_ImplicitCast = K2Node_MakeStruct_LimbusOpacity_ImplicitCast;
	Parms.K2Node_MakeStruct_IrisDetail_ImplicitCast = K2Node_MakeStruct_IrisDetail_ImplicitCast;
	Parms.K2Node_MakeStruct_VeinOpacity_ImplicitCast = K2Node_MakeStruct_VeinOpacity_ImplicitCast;
	Parms.K2Node_MakeStruct_IrisScale_ImplicitCast = K2Node_MakeStruct_IrisScale_ImplicitCast;
	Parms.K2Node_MakeStruct_PupilScale_ImplicitCast = K2Node_MakeStruct_PupilScale_ImplicitCast;
	Parms.K2Node_MakeStruct_BloodshotAmount_ImplicitCast = K2Node_MakeStruct_BloodshotAmount_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (OutValue != nullptr)
		*OutValue = std::move(Parms.OutValue);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsEyePupilScaleOverriden
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bOverriden                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeSide                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEyeAppearance              K2Node_Select_Default                                            (NoDestructor)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::IsEyePupilScaleOverriden(enum class EEyeSide Side, bool* bOverriden, enum class EEyeSide Temp_byte_Variable, const struct FEyeAppearance& K2Node_Select_Default, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "IsEyePupilScaleOverriden");

	Params::UBP_CharacterAppearanceComponent_C_IsEyePupilScaleOverriden_Params Parms{};

	Parms.Side = Side;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast = CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (bOverriden != nullptr)
		*bOverriden = Parms.bOverriden;

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetEyePupilScale
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             OutValue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeSide                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEyePupilScaleOverriden_bOverriden                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterAppearance_Preset CallFunc_GetSelectedArchetypeData_OutArchetype                   (None)
// struct FEyeAppearance              K2Node_Select_Default                                            (NoDestructor)
// double                             K2Node_FunctionResult_OutValue_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_OutValue_ImplicitCast_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::GetEyePupilScale(enum class EEyeSide Side, double* OutValue, enum class EEyeSide Temp_byte_Variable, bool CallFunc_IsEyePupilScaleOverriden_bOverriden, const struct FCharacterAppearance_Preset& CallFunc_GetSelectedArchetypeData_OutArchetype, const struct FEyeAppearance& K2Node_Select_Default, double K2Node_FunctionResult_OutValue_ImplicitCast, double K2Node_FunctionResult_OutValue_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "GetEyePupilScale");

	Params::UBP_CharacterAppearanceComponent_C_GetEyePupilScale_Params Parms{};

	Parms.Side = Side;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_IsEyePupilScaleOverriden_bOverriden = CallFunc_IsEyePupilScaleOverriden_bOverriden;
	Parms.CallFunc_GetSelectedArchetypeData_OutArchetype = CallFunc_GetSelectedArchetypeData_OutArchetype;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_FunctionResult_OutValue_ImplicitCast = K2Node_FunctionResult_OutValue_ImplicitCast;
	Parms.K2Node_FunctionResult_OutValue_ImplicitCast_1 = K2Node_FunctionResult_OutValue_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetEyePupilScaleOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::ResetEyePupilScaleOverride(enum class EEyeSide Side)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "ResetEyePupilScaleOverride");

	Params::UBP_CharacterAppearanceComponent_C_ResetEyePupilScaleOverride_Params Parms{};

	Parms.Side = Side;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetEyePupilScaleOverride
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Override                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetEyePupilScale_OutValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeSide                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEyeAppearance              K2Node_Select_Default                                            (NoDestructor)
// struct FEyeAppearance              CallFunc_GetEyeData_OutValue                                     (NoDestructor)
// struct FEyeAppearance              K2Node_SetFieldsInStruct_StructOut                               (NoDestructor)
// float                              K2Node_SetFieldsInStruct_PupilScale_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::SetEyePupilScaleOverride(enum class EEyeSide Side, double Override, class AActor* CallFunc_GetOwner_ReturnValue, double CallFunc_GetEyePupilScale_OutValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class EEyeSide Temp_byte_Variable, const struct FEyeAppearance& K2Node_Select_Default, const struct FEyeAppearance& CallFunc_GetEyeData_OutValue, const struct FEyeAppearance& K2Node_SetFieldsInStruct_StructOut, float K2Node_SetFieldsInStruct_PupilScale_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "SetEyePupilScaleOverride");

	Params::UBP_CharacterAppearanceComponent_C_SetEyePupilScaleOverride_Params Parms{};

	Parms.Side = Side;
	Parms.Override = Override;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetEyePupilScale_OutValue = CallFunc_GetEyePupilScale_OutValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetEyeData_OutValue = CallFunc_GetEyeData_OutValue;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;
	Parms.K2Node_SetFieldsInStruct_PupilScale_ImplicitCast = K2Node_SetFieldsInStruct_PupilScale_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsEyeBloodshotAmountOverriden
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bOverriden                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeSide                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEyeAppearance              K2Node_Select_Default                                            (NoDestructor)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::IsEyeBloodshotAmountOverriden(enum class EEyeSide Side, bool* bOverriden, enum class EEyeSide Temp_byte_Variable, const struct FEyeAppearance& K2Node_Select_Default, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "IsEyeBloodshotAmountOverriden");

	Params::UBP_CharacterAppearanceComponent_C_IsEyeBloodshotAmountOverriden_Params Parms{};

	Parms.Side = Side;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast = CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (bOverriden != nullptr)
		*bOverriden = Parms.bOverriden;

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetEyeBloodshotAmount
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             OutValue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeSide                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEyeBloodshotAmountOverriden_bOverriden                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterAppearance_Preset CallFunc_GetSelectedArchetypeData_OutArchetype                   (None)
// struct FEyeAppearance              K2Node_Select_Default                                            (NoDestructor)
// double                             K2Node_FunctionResult_OutValue_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_OutValue_ImplicitCast_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::GetEyeBloodshotAmount(enum class EEyeSide Side, double* OutValue, enum class EEyeSide Temp_byte_Variable, bool CallFunc_IsEyeBloodshotAmountOverriden_bOverriden, const struct FCharacterAppearance_Preset& CallFunc_GetSelectedArchetypeData_OutArchetype, const struct FEyeAppearance& K2Node_Select_Default, double K2Node_FunctionResult_OutValue_ImplicitCast, double K2Node_FunctionResult_OutValue_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "GetEyeBloodshotAmount");

	Params::UBP_CharacterAppearanceComponent_C_GetEyeBloodshotAmount_Params Parms{};

	Parms.Side = Side;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_IsEyeBloodshotAmountOverriden_bOverriden = CallFunc_IsEyeBloodshotAmountOverriden_bOverriden;
	Parms.CallFunc_GetSelectedArchetypeData_OutArchetype = CallFunc_GetSelectedArchetypeData_OutArchetype;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_FunctionResult_OutValue_ImplicitCast = K2Node_FunctionResult_OutValue_ImplicitCast;
	Parms.K2Node_FunctionResult_OutValue_ImplicitCast_1 = K2Node_FunctionResult_OutValue_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetEyeBloodshotAmountOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::ResetEyeBloodshotAmountOverride(enum class EEyeSide Side)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "ResetEyeBloodshotAmountOverride");

	Params::UBP_CharacterAppearanceComponent_C_ResetEyeBloodshotAmountOverride_Params Parms{};

	Parms.Side = Side;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetEyeBloodshotAmountOverride
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Override                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetEyeBloodshotAmount_OutValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeSide                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEyeAppearance              K2Node_Select_Default                                            (NoDestructor)
// struct FEyeAppearance              CallFunc_GetEyeData_OutValue                                     (NoDestructor)
// struct FEyeAppearance              K2Node_SetFieldsInStruct_StructOut                               (NoDestructor)
// float                              K2Node_SetFieldsInStruct_BloodshotAmount_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::SetEyeBloodshotAmountOverride(enum class EEyeSide Side, double Override, class AActor* CallFunc_GetOwner_ReturnValue, double CallFunc_GetEyeBloodshotAmount_OutValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class EEyeSide Temp_byte_Variable, const struct FEyeAppearance& K2Node_Select_Default, const struct FEyeAppearance& CallFunc_GetEyeData_OutValue, const struct FEyeAppearance& K2Node_SetFieldsInStruct_StructOut, float K2Node_SetFieldsInStruct_BloodshotAmount_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "SetEyeBloodshotAmountOverride");

	Params::UBP_CharacterAppearanceComponent_C_SetEyeBloodshotAmountOverride_Params Parms{};

	Parms.Side = Side;
	Parms.Override = Override;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetEyeBloodshotAmount_OutValue = CallFunc_GetEyeBloodshotAmount_OutValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetEyeData_OutValue = CallFunc_GetEyeData_OutValue;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;
	Parms.K2Node_SetFieldsInStruct_BloodshotAmount_ImplicitCast = K2Node_SetFieldsInStruct_BloodshotAmount_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsEyeEmissiveColorOverriden
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bOverriden                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeSide                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEyeAppearance              K2Node_Select_Default                                            (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesDataTableRowExist_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::IsEyeEmissiveColorOverriden(enum class EEyeSide Side, bool* bOverriden, enum class EEyeSide Temp_byte_Variable, const struct FEyeAppearance& K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, bool CallFunc_DoesDataTableRowExist_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "IsEyeEmissiveColorOverriden");

	Params::UBP_CharacterAppearanceComponent_C_IsEyeEmissiveColorOverriden_Params Parms{};

	Parms.Side = Side;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_DoesDataTableRowExist_ReturnValue = CallFunc_DoesDataTableRowExist_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bOverriden != nullptr)
		*bOverriden = Parms.bOverriden;

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetEyeEmissiveColor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         OutValue                                                         (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// enum class EEyeSide                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEyeEmissiveColorOverriden_bOverriden                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterAppearance_Preset CallFunc_GetSelectedArchetypeData_OutArchetype                   (None)
// struct FEyeAppearance              K2Node_Select_Default                                            (NoDestructor)

void UBP_CharacterAppearanceComponent_C::GetEyeEmissiveColor(enum class EEyeSide Side, struct FDataTableRowHandle* OutValue, enum class EEyeSide Temp_byte_Variable, bool CallFunc_IsEyeEmissiveColorOverriden_bOverriden, const struct FCharacterAppearance_Preset& CallFunc_GetSelectedArchetypeData_OutArchetype, const struct FEyeAppearance& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "GetEyeEmissiveColor");

	Params::UBP_CharacterAppearanceComponent_C_GetEyeEmissiveColor_Params Parms{};

	Parms.Side = Side;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_IsEyeEmissiveColorOverriden_bOverriden = CallFunc_IsEyeEmissiveColorOverriden_bOverriden;
	Parms.CallFunc_GetSelectedArchetypeData_OutArchetype = CallFunc_GetSelectedArchetypeData_OutArchetype;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (OutValue != nullptr)
		*OutValue = std::move(Parms.OutValue);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetEyeEmissiveColorOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::ResetEyeEmissiveColorOverride(enum class EEyeSide Side, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "ResetEyeEmissiveColorOverride");

	Params::UBP_CharacterAppearanceComponent_C_ResetEyeEmissiveColorOverride_Params Parms{};

	Parms.Side = Side;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetEyeEmissiveColorOverride
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         Override                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetEyeEmissiveColor_OutValue                            (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RowHandlesEqual_Equal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeSide                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEyeAppearance              K2Node_Select_Default                                            (NoDestructor)
// struct FEyeAppearance              CallFunc_GetEyeData_OutValue                                     (NoDestructor)
// struct FEyeAppearance              K2Node_SetFieldsInStruct_StructOut                               (NoDestructor)

void UBP_CharacterAppearanceComponent_C::SetEyeEmissiveColorOverride(enum class EEyeSide Side, const struct FDataTableRowHandle& Override, class AActor* CallFunc_GetOwner_ReturnValue, const struct FDataTableRowHandle& CallFunc_GetEyeEmissiveColor_OutValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_RowHandlesEqual_Equal, bool CallFunc_Not_PreBool_ReturnValue, enum class EEyeSide Temp_byte_Variable, const struct FEyeAppearance& K2Node_Select_Default, const struct FEyeAppearance& CallFunc_GetEyeData_OutValue, const struct FEyeAppearance& K2Node_SetFieldsInStruct_StructOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "SetEyeEmissiveColorOverride");

	Params::UBP_CharacterAppearanceComponent_C_SetEyeEmissiveColorOverride_Params Parms{};

	Parms.Side = Side;
	Parms.Override = Override;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetEyeEmissiveColor_OutValue = CallFunc_GetEyeEmissiveColor_OutValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_RowHandlesEqual_Equal = CallFunc_RowHandlesEqual_Equal;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetEyeData_OutValue = CallFunc_GetEyeData_OutValue;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsEyeOuterColorOverriden
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bOverriden                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeSide                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEyeAppearance              K2Node_Select_Default                                            (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesDataTableRowExist_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::IsEyeOuterColorOverriden(enum class EEyeSide Side, bool* bOverriden, enum class EEyeSide Temp_byte_Variable, const struct FEyeAppearance& K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, bool CallFunc_DoesDataTableRowExist_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "IsEyeOuterColorOverriden");

	Params::UBP_CharacterAppearanceComponent_C_IsEyeOuterColorOverriden_Params Parms{};

	Parms.Side = Side;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_DoesDataTableRowExist_ReturnValue = CallFunc_DoesDataTableRowExist_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bOverriden != nullptr)
		*bOverriden = Parms.bOverriden;

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetEyeOuterColor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         OutValue                                                         (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// enum class EEyeSide                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEyeOuterColorOverriden_bOverriden                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterAppearance_Preset CallFunc_GetSelectedArchetypeData_OutArchetype                   (None)
// struct FEyeAppearance              K2Node_Select_Default                                            (NoDestructor)

void UBP_CharacterAppearanceComponent_C::GetEyeOuterColor(enum class EEyeSide Side, struct FDataTableRowHandle* OutValue, enum class EEyeSide Temp_byte_Variable, bool CallFunc_IsEyeOuterColorOverriden_bOverriden, const struct FCharacterAppearance_Preset& CallFunc_GetSelectedArchetypeData_OutArchetype, const struct FEyeAppearance& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "GetEyeOuterColor");

	Params::UBP_CharacterAppearanceComponent_C_GetEyeOuterColor_Params Parms{};

	Parms.Side = Side;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_IsEyeOuterColorOverriden_bOverriden = CallFunc_IsEyeOuterColorOverriden_bOverriden;
	Parms.CallFunc_GetSelectedArchetypeData_OutArchetype = CallFunc_GetSelectedArchetypeData_OutArchetype;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (OutValue != nullptr)
		*OutValue = std::move(Parms.OutValue);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetEyeOuterColorOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::ResetEyeOuterColorOverride(enum class EEyeSide Side, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "ResetEyeOuterColorOverride");

	Params::UBP_CharacterAppearanceComponent_C_ResetEyeOuterColorOverride_Params Parms{};

	Parms.Side = Side;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetEyeOuterColorOverride
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         Override                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetEyeOuterColor_OutValue                               (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RowHandlesEqual_Equal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeSide                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEyeAppearance              K2Node_Select_Default                                            (NoDestructor)
// struct FEyeAppearance              CallFunc_GetEyeData_OutValue                                     (NoDestructor)
// struct FEyeAppearance              K2Node_SetFieldsInStruct_StructOut                               (NoDestructor)

void UBP_CharacterAppearanceComponent_C::SetEyeOuterColorOverride(enum class EEyeSide Side, const struct FDataTableRowHandle& Override, class AActor* CallFunc_GetOwner_ReturnValue, const struct FDataTableRowHandle& CallFunc_GetEyeOuterColor_OutValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_RowHandlesEqual_Equal, bool CallFunc_Not_PreBool_ReturnValue, enum class EEyeSide Temp_byte_Variable, const struct FEyeAppearance& K2Node_Select_Default, const struct FEyeAppearance& CallFunc_GetEyeData_OutValue, const struct FEyeAppearance& K2Node_SetFieldsInStruct_StructOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "SetEyeOuterColorOverride");

	Params::UBP_CharacterAppearanceComponent_C_SetEyeOuterColorOverride_Params Parms{};

	Parms.Side = Side;
	Parms.Override = Override;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetEyeOuterColor_OutValue = CallFunc_GetEyeOuterColor_OutValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_RowHandlesEqual_Equal = CallFunc_RowHandlesEqual_Equal;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetEyeData_OutValue = CallFunc_GetEyeData_OutValue;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsEyeMiddleColorOverriden
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bOverriden                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeSide                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEyeAppearance              K2Node_Select_Default                                            (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesDataTableRowExist_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::IsEyeMiddleColorOverriden(enum class EEyeSide Side, bool* bOverriden, enum class EEyeSide Temp_byte_Variable, const struct FEyeAppearance& K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, bool CallFunc_DoesDataTableRowExist_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "IsEyeMiddleColorOverriden");

	Params::UBP_CharacterAppearanceComponent_C_IsEyeMiddleColorOverriden_Params Parms{};

	Parms.Side = Side;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_DoesDataTableRowExist_ReturnValue = CallFunc_DoesDataTableRowExist_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bOverriden != nullptr)
		*bOverriden = Parms.bOverriden;

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetEyeMiddleColor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         OutValue                                                         (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// enum class EEyeSide                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEyeMiddleColorOverriden_bOverriden                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterAppearance_Preset CallFunc_GetSelectedArchetypeData_OutArchetype                   (None)
// struct FEyeAppearance              K2Node_Select_Default                                            (NoDestructor)

void UBP_CharacterAppearanceComponent_C::GetEyeMiddleColor(enum class EEyeSide Side, struct FDataTableRowHandle* OutValue, enum class EEyeSide Temp_byte_Variable, bool CallFunc_IsEyeMiddleColorOverriden_bOverriden, const struct FCharacterAppearance_Preset& CallFunc_GetSelectedArchetypeData_OutArchetype, const struct FEyeAppearance& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "GetEyeMiddleColor");

	Params::UBP_CharacterAppearanceComponent_C_GetEyeMiddleColor_Params Parms{};

	Parms.Side = Side;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_IsEyeMiddleColorOverriden_bOverriden = CallFunc_IsEyeMiddleColorOverriden_bOverriden;
	Parms.CallFunc_GetSelectedArchetypeData_OutArchetype = CallFunc_GetSelectedArchetypeData_OutArchetype;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (OutValue != nullptr)
		*OutValue = std::move(Parms.OutValue);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetEyeMiddleColorOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::ResetEyeMiddleColorOverride(enum class EEyeSide Side, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "ResetEyeMiddleColorOverride");

	Params::UBP_CharacterAppearanceComponent_C_ResetEyeMiddleColorOverride_Params Parms{};

	Parms.Side = Side;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetEyeMiddleColorOverride
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         Override                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetEyeMiddleColor_OutValue                              (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RowHandlesEqual_Equal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeSide                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEyeAppearance              K2Node_Select_Default                                            (NoDestructor)
// struct FEyeAppearance              CallFunc_GetEyeData_OutValue                                     (NoDestructor)
// struct FEyeAppearance              K2Node_SetFieldsInStruct_StructOut                               (NoDestructor)

void UBP_CharacterAppearanceComponent_C::SetEyeMiddleColorOverride(enum class EEyeSide Side, const struct FDataTableRowHandle& Override, class AActor* CallFunc_GetOwner_ReturnValue, const struct FDataTableRowHandle& CallFunc_GetEyeMiddleColor_OutValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_RowHandlesEqual_Equal, bool CallFunc_Not_PreBool_ReturnValue, enum class EEyeSide Temp_byte_Variable, const struct FEyeAppearance& K2Node_Select_Default, const struct FEyeAppearance& CallFunc_GetEyeData_OutValue, const struct FEyeAppearance& K2Node_SetFieldsInStruct_StructOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "SetEyeMiddleColorOverride");

	Params::UBP_CharacterAppearanceComponent_C_SetEyeMiddleColorOverride_Params Parms{};

	Parms.Side = Side;
	Parms.Override = Override;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetEyeMiddleColor_OutValue = CallFunc_GetEyeMiddleColor_OutValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_RowHandlesEqual_Equal = CallFunc_RowHandlesEqual_Equal;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetEyeData_OutValue = CallFunc_GetEyeData_OutValue;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsEyeInnerColorOverriden
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bOverriden                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeSide                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEyeAppearance              K2Node_Select_Default                                            (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesDataTableRowExist_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::IsEyeInnerColorOverriden(enum class EEyeSide Side, bool* bOverriden, enum class EEyeSide Temp_byte_Variable, const struct FEyeAppearance& K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, bool CallFunc_DoesDataTableRowExist_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "IsEyeInnerColorOverriden");

	Params::UBP_CharacterAppearanceComponent_C_IsEyeInnerColorOverriden_Params Parms{};

	Parms.Side = Side;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_DoesDataTableRowExist_ReturnValue = CallFunc_DoesDataTableRowExist_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bOverriden != nullptr)
		*bOverriden = Parms.bOverriden;

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetEyeInnerColor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         OutValue                                                         (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// enum class EEyeSide                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEyeInnerColorOverriden_bOverriden                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterAppearance_Preset CallFunc_GetSelectedArchetypeData_OutArchetype                   (None)
// struct FEyeAppearance              K2Node_Select_Default                                            (NoDestructor)

void UBP_CharacterAppearanceComponent_C::GetEyeInnerColor(enum class EEyeSide Side, struct FDataTableRowHandle* OutValue, enum class EEyeSide Temp_byte_Variable, bool CallFunc_IsEyeInnerColorOverriden_bOverriden, const struct FCharacterAppearance_Preset& CallFunc_GetSelectedArchetypeData_OutArchetype, const struct FEyeAppearance& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "GetEyeInnerColor");

	Params::UBP_CharacterAppearanceComponent_C_GetEyeInnerColor_Params Parms{};

	Parms.Side = Side;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_IsEyeInnerColorOverriden_bOverriden = CallFunc_IsEyeInnerColorOverriden_bOverriden;
	Parms.CallFunc_GetSelectedArchetypeData_OutArchetype = CallFunc_GetSelectedArchetypeData_OutArchetype;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (OutValue != nullptr)
		*OutValue = std::move(Parms.OutValue);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetEyeInnerColorOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::ResetEyeInnerColorOverride(enum class EEyeSide Side, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "ResetEyeInnerColorOverride");

	Params::UBP_CharacterAppearanceComponent_C_ResetEyeInnerColorOverride_Params Parms{};

	Parms.Side = Side;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetEyeInnerColorOverride
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEyeSide                Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         Override                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetEyeInnerColor_OutValue                               (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RowHandlesEqual_Equal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEyeSide                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEyeAppearance              K2Node_Select_Default                                            (NoDestructor)
// struct FEyeAppearance              CallFunc_GetEyeData_OutValue                                     (NoDestructor)
// struct FEyeAppearance              K2Node_SetFieldsInStruct_StructOut                               (NoDestructor)

void UBP_CharacterAppearanceComponent_C::SetEyeInnerColorOverride(enum class EEyeSide Side, const struct FDataTableRowHandle& Override, class AActor* CallFunc_GetOwner_ReturnValue, const struct FDataTableRowHandle& CallFunc_GetEyeInnerColor_OutValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_RowHandlesEqual_Equal, bool CallFunc_Not_PreBool_ReturnValue, enum class EEyeSide Temp_byte_Variable, const struct FEyeAppearance& K2Node_Select_Default, const struct FEyeAppearance& CallFunc_GetEyeData_OutValue, const struct FEyeAppearance& K2Node_SetFieldsInStruct_StructOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "SetEyeInnerColorOverride");

	Params::UBP_CharacterAppearanceComponent_C_SetEyeInnerColorOverride_Params Parms{};

	Parms.Side = Side;
	Parms.Override = Override;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetEyeInnerColor_OutValue = CallFunc_GetEyeInnerColor_OutValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_RowHandlesEqual_Equal = CallFunc_RowHandlesEqual_Equal;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetEyeData_OutValue = CallFunc_GetEyeData_OutValue;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetSelectedDifficulty
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class ERealmDifficulty        SelectedDifficulty                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::GetSelectedDifficulty(enum class ERealmDifficulty* SelectedDifficulty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "GetSelectedDifficulty");

	Params::UBP_CharacterAppearanceComponent_C_GetSelectedDifficulty_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SelectedDifficulty != nullptr)
		*SelectedDifficulty = Parms.SelectedDifficulty;

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetSelectedDifficulty
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERealmDifficulty        NewDifficulty                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERealmDifficulty        PreviousDifficulty                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                K2Node_DynamicCast_AsPlayer_State                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::SetSelectedDifficulty(enum class ERealmDifficulty NewDifficulty, enum class ERealmDifficulty PreviousDifficulty, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class APlayerState* K2Node_DynamicCast_AsPlayer_State, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "SetSelectedDifficulty");

	Params::UBP_CharacterAppearanceComponent_C_SetSelectedDifficulty_Params Parms{};

	Parms.NewDifficulty = NewDifficulty;
	Parms.PreviousDifficulty = PreviousDifficulty;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPlayer_State = K2Node_DynamicCast_AsPlayer_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetSelectedInitialLoadout
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FPlayerLoadoutDataReference SelectedInitialLoadout                                           (Parm, OutParm, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::GetSelectedInitialLoadout(struct FPlayerLoadoutDataReference* SelectedInitialLoadout)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "GetSelectedInitialLoadout");

	Params::UBP_CharacterAppearanceComponent_C_GetSelectedInitialLoadout_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SelectedInitialLoadout != nullptr)
		*SelectedInitialLoadout = std::move(Parms.SelectedInitialLoadout);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetSelectedInitialLoadout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerLoadoutDataReference NewLoadoutHandle                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::SetSelectedInitialLoadout(const struct FPlayerLoadoutDataReference& NewLoadoutHandle, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "SetSelectedInitialLoadout");

	Params::UBP_CharacterAppearanceComponent_C_SetSelectedInitialLoadout_Params Parms{};

	Parms.NewLoadoutHandle = NewLoadoutHandle;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetHairColorOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EHairAssetType          Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::ResetHairColorOverride(enum class EHairAssetType Type, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "ResetHairColorOverride");

	Params::UBP_CharacterAppearanceComponent_C_ResetHairColorOverride_Params Parms{};

	Parms.Type = Type;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetHairColorOverride
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EHairAssetType          Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         HairColorOverride                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetHairColor_OutHairColor                               (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RowHandlesEqual_Equal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHairAssetType          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_Select_Default                                            (NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetHairColor_OutHairColor_1                             (NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::SetHairColorOverride(enum class EHairAssetType Type, const struct FDataTableRowHandle& HairColorOverride, class AActor* CallFunc_GetOwner_ReturnValue, const struct FDataTableRowHandle& CallFunc_GetHairColor_OutHairColor, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_RowHandlesEqual_Equal, bool CallFunc_Not_PreBool_ReturnValue, enum class EHairAssetType Temp_byte_Variable, const struct FDataTableRowHandle& K2Node_Select_Default, const struct FDataTableRowHandle& CallFunc_GetHairColor_OutHairColor_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "SetHairColorOverride");

	Params::UBP_CharacterAppearanceComponent_C_SetHairColorOverride_Params Parms{};

	Parms.Type = Type;
	Parms.HairColorOverride = HairColorOverride;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetHairColor_OutHairColor = CallFunc_GetHairColor_OutHairColor;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_RowHandlesEqual_Equal = CallFunc_RowHandlesEqual_Equal;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetHairColor_OutHairColor_1 = CallFunc_GetHairColor_OutHairColor_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetSelectedArchetypeData
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FCharacterAppearance_Preset OutArchetype                                                     (Parm, OutParm)
// struct FCharacterAppearance_Preset CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::GetSelectedArchetypeData(struct FCharacterAppearance_Preset* OutArchetype, const struct FCharacterAppearance_Preset& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "GetSelectedArchetypeData");

	Params::UBP_CharacterAppearanceComponent_C_GetSelectedArchetypeData_Params Parms{};

	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutArchetype != nullptr)
		*OutArchetype = std::move(Parms.OutArchetype);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsHairColorOverriden
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EHairAssetType          Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bOverriden                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHairAssetType          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_Select_Default                                            (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesDataTableRowExist_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::IsHairColorOverriden(enum class EHairAssetType Type, bool* bOverriden, enum class EHairAssetType Temp_byte_Variable, const struct FDataTableRowHandle& K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, bool CallFunc_DoesDataTableRowExist_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "IsHairColorOverriden");

	Params::UBP_CharacterAppearanceComponent_C_IsHairColorOverriden_Params Parms{};

	Parms.Type = Type;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_DoesDataTableRowExist_ReturnValue = CallFunc_DoesDataTableRowExist_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bOverriden != nullptr)
		*bOverriden = Parms.bOverriden;

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetHairColor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EHairAssetType          Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         OutHairColor                                                     (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// enum class EHairAssetType          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHairColorOverriden_bOverriden                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHairAssetType          Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterAppearance_Preset CallFunc_GetSelectedArchetypeData_OutArchetype                   (None)
// struct FDataTableRowHandle         K2Node_Select_Default                                            (NoDestructor, HasGetValueTypeHash)
// struct FHairAppearance             K2Node_Select_Default_1                                          (None)

void UBP_CharacterAppearanceComponent_C::GetHairColor(enum class EHairAssetType Type, struct FDataTableRowHandle* OutHairColor, enum class EHairAssetType Temp_byte_Variable, bool CallFunc_IsHairColorOverriden_bOverriden, enum class EHairAssetType Temp_byte_Variable_1, const struct FCharacterAppearance_Preset& CallFunc_GetSelectedArchetypeData_OutArchetype, const struct FDataTableRowHandle& K2Node_Select_Default, const struct FHairAppearance& K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "GetHairColor");

	Params::UBP_CharacterAppearanceComponent_C_GetHairColor_Params Parms{};

	Parms.Type = Type;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_IsHairColorOverriden_bOverriden = CallFunc_IsHairColorOverriden_bOverriden;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetSelectedArchetypeData_OutArchetype = CallFunc_GetSelectedArchetypeData_OutArchetype;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

	if (OutHairColor != nullptr)
		*OutHairColor = std::move(Parms.OutHairColor);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetSkinColorOverride
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetSkinColor_OutSkinColor                               (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::ResetSkinColorOverride(class AActor* CallFunc_GetOwner_ReturnValue, const struct FDataTableRowHandle& CallFunc_GetSkinColor_OutSkinColor, bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "ResetSkinColorOverride");

	Params::UBP_CharacterAppearanceComponent_C_ResetSkinColorOverride_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetSkinColor_OutSkinColor = CallFunc_GetSkinColor_OutSkinColor;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetSkinColorOverride
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         SkinColorOverride                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetSkinColor_OutSkinColor                               (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RowHandlesEqual_Equal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::SetSkinColorOverride(const struct FDataTableRowHandle& SkinColorOverride, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, const struct FDataTableRowHandle& CallFunc_GetSkinColor_OutSkinColor, bool CallFunc_RowHandlesEqual_Equal, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "SetSkinColorOverride");

	Params::UBP_CharacterAppearanceComponent_C_SetSkinColorOverride_Params Parms{};

	Parms.SkinColorOverride = SkinColorOverride;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetSkinColor_OutSkinColor = CallFunc_GetSkinColor_OutSkinColor;
	Parms.CallFunc_RowHandlesEqual_Equal = CallFunc_RowHandlesEqual_Equal;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ResetAllOverrides
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERealmDifficulty        CallFunc_GetDefaultRealmDifficulty_RealmDifficulty               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::ResetAllOverrides(class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, enum class ERealmDifficulty CallFunc_GetDefaultRealmDifficulty_RealmDifficulty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "ResetAllOverrides");

	Params::UBP_CharacterAppearanceComponent_C_ResetAllOverrides_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetDefaultRealmDifficulty_RealmDifficulty = CallFunc_GetDefaultRealmDifficulty_RealmDifficulty;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.IsSkinColorOverriden
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               bOverriden                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesDataTableRowExist_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::IsSkinColorOverriden(bool* bOverriden, bool CallFunc_IsValid_ReturnValue, bool CallFunc_DoesDataTableRowExist_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "IsSkinColorOverriden");

	Params::UBP_CharacterAppearanceComponent_C_IsSkinColorOverriden_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_DoesDataTableRowExist_ReturnValue = CallFunc_DoesDataTableRowExist_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bOverriden != nullptr)
		*bOverriden = Parms.bOverriden;

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetSkinColor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FDataTableRowHandle         OutSkinColor                                                     (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// struct FCharacterAppearance_Preset CallFunc_GetSelectedArchetypeData_OutArchetype                   (None)
// bool                               CallFunc_IsSkinColorOverriden_bOverriden                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::GetSkinColor(struct FDataTableRowHandle* OutSkinColor, const struct FCharacterAppearance_Preset& CallFunc_GetSelectedArchetypeData_OutArchetype, bool CallFunc_IsSkinColorOverriden_bOverriden)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "GetSkinColor");

	Params::UBP_CharacterAppearanceComponent_C_GetSkinColor_Params Parms{};

	Parms.CallFunc_GetSelectedArchetypeData_OutArchetype = CallFunc_GetSelectedArchetypeData_OutArchetype;
	Parms.CallFunc_IsSkinColorOverriden_bOverriden = CallFunc_IsSkinColorOverriden_bOverriden;

	UObject::ProcessEvent(Func, &Parms);

	if (OutSkinColor != nullptr)
		*OutSkinColor = std::move(Parms.OutSkinColor);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.GetSelectedArchetype
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FDataTableRowHandle         SelectedArchetype                                                (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::GetSelectedArchetype(struct FDataTableRowHandle* SelectedArchetype)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "GetSelectedArchetype");

	Params::UBP_CharacterAppearanceComponent_C_GetSelectedArchetype_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SelectedArchetype != nullptr)
		*SelectedArchetype = std::move(Parms.SelectedArchetype);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SetCharacterAppearance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         AppearancePresetRow                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::SetCharacterAppearance(const struct FDataTableRowHandle& AppearancePresetRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "SetCharacterAppearance");

	Params::UBP_CharacterAppearanceComponent_C_SetCharacterAppearance_Params Parms{};

	Parms.AppearancePresetRow = AppearancePresetRow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SendAllPropertyEvents
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_CharacterAppearanceComponent_C::SendAllPropertyEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "SendAllPropertyEvents");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.Server_SetRealmDifficulty
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERealmDifficulty        NewDifficulty                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::Server_SetRealmDifficulty(enum class ERealmDifficulty NewDifficulty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "Server_SetRealmDifficulty");

	Params::UBP_CharacterAppearanceComponent_C_Server_SetRealmDifficulty_Params Parms{};

	Parms.NewDifficulty = NewDifficulty;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.ExecuteUbergraph_BP_CharacterAppearanceComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAppearanceMorphTarget>CallFunc_GetBodyMorphTargets_OutCurrentMorphs                    (ReferenceParm)
// struct FDataTableRowHandle         CallFunc_GetSkinColor_OutSkinColor                               (NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetHairColor_OutHairColor                               (NoDestructor, HasGetValueTypeHash)
// enum class ERealmDifficulty        K2Node_CustomEvent_NewDifficulty                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEyeAppearance              CallFunc_GetEyeData_OutValue                                     (NoDestructor)
// struct FEyeAppearance              CallFunc_GetEyeData_OutValue_1                                   (NoDestructor)
// struct FTeethAppearance            CallFunc_GetTeethData_OutValue                                   (NoDestructor)
// struct FVector                     CallFunc_GetEyeOffset_EyeOffset                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetAgeValue_OutAgeValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEyeLashAppearance          CallFunc_GetEyeLashData_OutValue                                 (NoDestructor)
// struct FEyeLashAppearance          CallFunc_GetEyeLashData_OutValue_1                               (NoDestructor)
// struct FHairDataReference          CallFunc_GetHairData_OutData                                     (HasGetValueTypeHash)
// struct FHairDataReference          CallFunc_GetHairData_OutData_1                                   (HasGetValueTypeHash)
// struct FHairDataReference          CallFunc_GetHairData_OutData_2                                   (HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetHairColor_OutHairColor_1                             (NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetHairColor_OutHairColor_2                             (NoDestructor, HasGetValueTypeHash)
// struct FVoiceSetDataReference      CallFunc_GetVoiceSetData_Data                                    (HasGetValueTypeHash)
// double                             CallFunc_GetEyeScale_OutEyeScale                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetRedness_OutRedness                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::ExecuteUbergraph_BP_CharacterAppearanceComponent(int32 EntryPoint, TArray<struct FAppearanceMorphTarget>& CallFunc_GetBodyMorphTargets_OutCurrentMorphs, const struct FDataTableRowHandle& CallFunc_GetSkinColor_OutSkinColor, const struct FDataTableRowHandle& CallFunc_GetHairColor_OutHairColor, enum class ERealmDifficulty K2Node_CustomEvent_NewDifficulty, const struct FEyeAppearance& CallFunc_GetEyeData_OutValue, const struct FEyeAppearance& CallFunc_GetEyeData_OutValue_1, const struct FTeethAppearance& CallFunc_GetTeethData_OutValue, const struct FVector& CallFunc_GetEyeOffset_EyeOffset, double CallFunc_GetAgeValue_OutAgeValue, const struct FEyeLashAppearance& CallFunc_GetEyeLashData_OutValue, const struct FEyeLashAppearance& CallFunc_GetEyeLashData_OutValue_1, const struct FHairDataReference& CallFunc_GetHairData_OutData, const struct FHairDataReference& CallFunc_GetHairData_OutData_1, const struct FHairDataReference& CallFunc_GetHairData_OutData_2, const struct FDataTableRowHandle& CallFunc_GetHairColor_OutHairColor_1, const struct FDataTableRowHandle& CallFunc_GetHairColor_OutHairColor_2, const struct FVoiceSetDataReference& CallFunc_GetVoiceSetData_Data, double CallFunc_GetEyeScale_OutEyeScale, double CallFunc_GetRedness_OutRedness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "ExecuteUbergraph_BP_CharacterAppearanceComponent");

	Params::UBP_CharacterAppearanceComponent_C_ExecuteUbergraph_BP_CharacterAppearanceComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetBodyMorphTargets_OutCurrentMorphs = CallFunc_GetBodyMorphTargets_OutCurrentMorphs;
	Parms.CallFunc_GetSkinColor_OutSkinColor = CallFunc_GetSkinColor_OutSkinColor;
	Parms.CallFunc_GetHairColor_OutHairColor = CallFunc_GetHairColor_OutHairColor;
	Parms.K2Node_CustomEvent_NewDifficulty = K2Node_CustomEvent_NewDifficulty;
	Parms.CallFunc_GetEyeData_OutValue = CallFunc_GetEyeData_OutValue;
	Parms.CallFunc_GetEyeData_OutValue_1 = CallFunc_GetEyeData_OutValue_1;
	Parms.CallFunc_GetTeethData_OutValue = CallFunc_GetTeethData_OutValue;
	Parms.CallFunc_GetEyeOffset_EyeOffset = CallFunc_GetEyeOffset_EyeOffset;
	Parms.CallFunc_GetAgeValue_OutAgeValue = CallFunc_GetAgeValue_OutAgeValue;
	Parms.CallFunc_GetEyeLashData_OutValue = CallFunc_GetEyeLashData_OutValue;
	Parms.CallFunc_GetEyeLashData_OutValue_1 = CallFunc_GetEyeLashData_OutValue_1;
	Parms.CallFunc_GetHairData_OutData = CallFunc_GetHairData_OutData;
	Parms.CallFunc_GetHairData_OutData_1 = CallFunc_GetHairData_OutData_1;
	Parms.CallFunc_GetHairData_OutData_2 = CallFunc_GetHairData_OutData_2;
	Parms.CallFunc_GetHairColor_OutHairColor_1 = CallFunc_GetHairColor_OutHairColor_1;
	Parms.CallFunc_GetHairColor_OutHairColor_2 = CallFunc_GetHairColor_OutHairColor_2;
	Parms.CallFunc_GetVoiceSetData_Data = CallFunc_GetVoiceSetData_Data;
	Parms.CallFunc_GetEyeScale_OutEyeScale = CallFunc_GetEyeScale_OutEyeScale;
	Parms.CallFunc_GetRedness_OutRedness = CallFunc_GetRedness_OutRedness;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.FoundationChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFoundationAppearance       FoundationData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UBP_CharacterAppearanceComponent_C::FoundationChanged__DelegateSignature(const struct FFoundationAppearance& FoundationData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "FoundationChanged__DelegateSignature");

	Params::UBP_CharacterAppearanceComponent_C_FoundationChanged__DelegateSignature_Params Parms{};

	Parms.FoundationData = FoundationData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.LipGlossChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Lipgloss                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::LipGlossChanged__DelegateSignature(double Lipgloss)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "LipGlossChanged__DelegateSignature");

	Params::UBP_CharacterAppearanceComponent_C_LipGlossChanged__DelegateSignature_Params Parms{};

	Parms.Lipgloss = Lipgloss;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.RednessChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Redness                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::RednessChanged__DelegateSignature(double Redness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "RednessChanged__DelegateSignature");

	Params::UBP_CharacterAppearanceComponent_C_RednessChanged__DelegateSignature_Params Parms{};

	Parms.Redness = Redness;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.MottlingChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Mottling                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::MottlingChanged__DelegateSignature(double Mottling)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "MottlingChanged__DelegateSignature");

	Params::UBP_CharacterAppearanceComponent_C_MottlingChanged__DelegateSignature_Params Parms{};

	Parms.Mottling = Mottling;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.EyeScaledChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             EyeScale                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::EyeScaledChanged__DelegateSignature(double EyeScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "EyeScaledChanged__DelegateSignature");

	Params::UBP_CharacterAppearanceComponent_C_EyeScaledChanged__DelegateSignature_Params Parms{};

	Parms.EyeScale = EyeScale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.FamilyTreeChanged__DelegateSignature
// (Public, Delegate, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDataTableRowHandle> FamilyTree                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_CharacterAppearanceComponent_C::FamilyTreeChanged__DelegateSignature(TArray<struct FDataTableRowHandle>& FamilyTree)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "FamilyTreeChanged__DelegateSignature");

	Params::UBP_CharacterAppearanceComponent_C_FamilyTreeChanged__DelegateSignature_Params Parms{};

	Parms.FamilyTree = FamilyTree;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.MakeupDataChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMakeupType             Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMakeupOption           Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         NewData                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// double                             NewAlpha                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewRoughness                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::MakeupDataChanged__DelegateSignature(enum class EMakeupType Type, enum class EMakeupOption Option, const struct FDataTableRowHandle& NewData, double NewAlpha, double NewRoughness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "MakeupDataChanged__DelegateSignature");

	Params::UBP_CharacterAppearanceComponent_C_MakeupDataChanged__DelegateSignature_Params Parms{};

	Parms.Type = Type;
	Parms.Option = Option;
	Parms.NewData = NewData;
	Parms.NewAlpha = NewAlpha;
	Parms.NewRoughness = NewRoughness;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.VoiceSetDataChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVoiceSetDataReference      Data                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::VoiceSetDataChanged__DelegateSignature(const struct FVoiceSetDataReference& Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "VoiceSetDataChanged__DelegateSignature");

	Params::UBP_CharacterAppearanceComponent_C_VoiceSetDataChanged__DelegateSignature_Params Parms{};

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.HairDataChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EHairAssetType          Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHairDataReference          NewData                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::HairDataChanged__DelegateSignature(enum class EHairAssetType Type, const struct FHairDataReference& NewData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "HairDataChanged__DelegateSignature");

	Params::UBP_CharacterAppearanceComponent_C_HairDataChanged__DelegateSignature_Params Parms{};

	Parms.Type = Type;
	Parms.NewData = NewData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.EyeLashChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEyeSide                EyeSide                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEyeLashAppearance          EyeLashData                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UBP_CharacterAppearanceComponent_C::EyeLashChanged__DelegateSignature(enum class EEyeSide EyeSide, const struct FEyeLashAppearance& EyeLashData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "EyeLashChanged__DelegateSignature");

	Params::UBP_CharacterAppearanceComponent_C_EyeLashChanged__DelegateSignature_Params Parms{};

	Parms.EyeSide = EyeSide;
	Parms.EyeLashData = EyeLashData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.AgeValueChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewAgeValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::AgeValueChanged__DelegateSignature(double NewAgeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "AgeValueChanged__DelegateSignature");

	Params::UBP_CharacterAppearanceComponent_C_AgeValueChanged__DelegateSignature_Params Parms{};

	Parms.NewAgeValue = NewAgeValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.AncestorDataChanged__DelegateSignature
// (Public, Delegate, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAppearanceAncestorData>AncestorData                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_CharacterAppearanceComponent_C::AncestorDataChanged__DelegateSignature(TArray<struct FAppearanceAncestorData>& AncestorData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "AncestorDataChanged__DelegateSignature");

	Params::UBP_CharacterAppearanceComponent_C_AncestorDataChanged__DelegateSignature_Params Parms{};

	Parms.AncestorData = AncestorData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.EyeOffsetChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     EyeOffset                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::EyeOffsetChanged__DelegateSignature(const struct FVector& EyeOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "EyeOffsetChanged__DelegateSignature");

	Params::UBP_CharacterAppearanceComponent_C_EyeOffsetChanged__DelegateSignature_Params Parms{};

	Parms.EyeOffset = EyeOffset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.BodyMorphTargetsChanged__DelegateSignature
// (Public, Delegate, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAppearanceMorphTarget>MorphTargets                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_CharacterAppearanceComponent_C::BodyMorphTargetsChanged__DelegateSignature(TArray<struct FAppearanceMorphTarget>& MorphTargets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "BodyMorphTargetsChanged__DelegateSignature");

	Params::UBP_CharacterAppearanceComponent_C_BodyMorphTargetsChanged__DelegateSignature_Params Parms{};

	Parms.MorphTargets = MorphTargets;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.TeethChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTeethAppearance            TeethData                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UBP_CharacterAppearanceComponent_C::TeethChanged__DelegateSignature(const struct FTeethAppearance& TeethData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "TeethChanged__DelegateSignature");

	Params::UBP_CharacterAppearanceComponent_C_TeethChanged__DelegateSignature_Params Parms{};

	Parms.TeethData = TeethData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.EyeChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEyeSide                EyeSide                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEyeAppearance              EyeData                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UBP_CharacterAppearanceComponent_C::EyeChanged__DelegateSignature(enum class EEyeSide EyeSide, const struct FEyeAppearance& EyeData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "EyeChanged__DelegateSignature");

	Params::UBP_CharacterAppearanceComponent_C_EyeChanged__DelegateSignature_Params Parms{};

	Parms.EyeSide = EyeSide;
	Parms.EyeData = EyeData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SelectedLoadoutChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerLoadoutDataReference NewLoadout                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// enum class EPlayerBackground       PlayerBackground                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::SelectedLoadoutChanged__DelegateSignature(const struct FPlayerLoadoutDataReference& NewLoadout, enum class EPlayerBackground PlayerBackground)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "SelectedLoadoutChanged__DelegateSignature");

	Params::UBP_CharacterAppearanceComponent_C_SelectedLoadoutChanged__DelegateSignature_Params Parms{};

	Parms.NewLoadout = NewLoadout;
	Parms.PlayerBackground = PlayerBackground;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.HairColorChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EHairAssetType          Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         HairColor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::HairColorChanged__DelegateSignature(enum class EHairAssetType Type, const struct FDataTableRowHandle& HairColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "HairColorChanged__DelegateSignature");

	Params::UBP_CharacterAppearanceComponent_C_HairColorChanged__DelegateSignature_Params Parms{};

	Parms.Type = Type;
	Parms.HairColor = HairColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SkinColorChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         SkinColor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::SkinColorChanged__DelegateSignature(const struct FDataTableRowHandle& SkinColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "SkinColorChanged__DelegateSignature");

	Params::UBP_CharacterAppearanceComponent_C_SkinColorChanged__DelegateSignature_Params Parms{};

	Parms.SkinColor = SkinColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterAppearanceComponent.BP_CharacterAppearanceComponent_C.SelectedArchetypeChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         NewData                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterAppearanceComponent_C::SelectedArchetypeChanged__DelegateSignature(const struct FDataTableRowHandle& NewData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterAppearanceComponent_C", "SelectedArchetypeChanged__DelegateSignature");

	Params::UBP_CharacterAppearanceComponent_C_SelectedArchetypeChanged__DelegateSignature_Params Parms{};

	Parms.NewData = NewData;

	UObject::ProcessEvent(Func, &Parms);

}

}


