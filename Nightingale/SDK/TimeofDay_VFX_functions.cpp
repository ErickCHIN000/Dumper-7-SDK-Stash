#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TimeofDay_VFX.TimeofDay_VFX_C
// (None)

class UClass* UTimeofDay_VFX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TimeofDay_VFX_C");

	return Clss;
}


// TimeofDay_VFX_C TimeofDay_VFX.Default__TimeofDay_VFX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTimeofDay_VFX_C* UTimeofDay_VFX_C::GetDefaultObj()
{
	static class UTimeofDay_VFX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTimeofDay_VFX_C*>(UTimeofDay_VFX_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TimeofDay_VFX.TimeofDay_VFX_C.Volume Fog Cache
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              VolumeFogLevel                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Volume_Fog_Level         CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_VFX_C::Volume_Fog_Cache(int32* VolumeFogLevel, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, const struct FS_Volume_Fog_Level& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_VFX_C", "Volume Fog Cache");

	Params::UTimeofDay_VFX_C_Volume_Fog_Cache_Params Parms{};

	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (VolumeFogLevel != nullptr)
		*VolumeFogLevel = Parms.VolumeFogLevel;

}


// Function TimeofDay_VFX.TimeofDay_VFX_C.VFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<double>                     Fog_Emissive_Night_Array                                         (Edit, BlueprintVisible)
// TArray<double>                     Fog_Emissive_DawnDusk_Array                                      (Edit, BlueprintVisible)
// TArray<double>                     Fog_Alpha_Night_Array                                            (Edit, BlueprintVisible)
// TArray<double>                     Fog_Alpha_DawnDusk_Array                                         (Edit, BlueprintVisible)
// TArray<double>                     Fog_Emissive_Day_Array                                           (Edit, BlueprintVisible)
// double                             Fog_Emissive_Night                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Fog_Emissive_DawnDusk                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Fog_Emissive_Day                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 Volume_Fog_Lerp_Night                                            (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 Volume_Fog_Lerp_Day                                              (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Fog_Alpha_Night                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Fog_Alpha_DawnDusk                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<double>                     Fog_Alpha_Day_Array                                              (Edit, BlueprintVisible)
// double                             Fog_Alpha_Day                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UDataTable*>          Fog_Data_Table_Array                                             (Edit, BlueprintVisible)
// TArray<class UCurveFloat*>         Fog_Emissive_Scale_Array                                         (Edit, BlueprintVisible)
// TArray<class UCurveFloat*>         Fog_Alpha_Scale_Array                                            (Edit, BlueprintVisible)
// class UCurveFloat*                 Fog_Emissive_Scale_Curve                                         (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 Fog_Alpha_Scale_Curve                                            (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 VFX_Brightness                                                   (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             AdjustedTime24Hour                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<double>                     K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<double>                     K2Node_MakeArray_Array_1                                         (ReferenceParm)
// TArray<double>                     K2Node_MakeArray_Array_2                                         (ReferenceParm)
// TArray<double>                     K2Node_MakeArray_Array_3                                         (ReferenceParm)
// TArray<double>                     K2Node_MakeArray_Array_4                                         (ReferenceParm)
// TArray<class UDataTable*>          K2Node_MakeArray_Array_5                                         (ReferenceParm)
// TArray<class UCurveFloat*>         K2Node_MakeArray_Array_6                                         (ReferenceParm)
// TArray<class UCurveFloat*>         K2Node_MakeArray_Array_7                                         (ReferenceParm)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraParameterCollectionInstance*CallFunc_GetNiagaraParameterCollection_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraParameterCollectionInstance*CallFunc_GetNiagaraParameterCollection_ReturnValue_1             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// double                             CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_1                      (ReferenceParm)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_2                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Atmosphere_Master        CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Clouds                   CallFunc_GetDataTableRowFromName_OutRow_1                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_6                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_6                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_7                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraParameterCollectionInstance*CallFunc_GetNiagaraParameterCollection_ReturnValue_2             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraParameterCollectionInstance*CallFunc_GetNiagaraParameterCollection_ReturnValue_3             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_3                      (ReferenceParm)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_7                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Atmosphere_Master        CallFunc_GetDataTableRowFromName_OutRow_2                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_8                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_9                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Clouds                   CallFunc_GetDataTableRowFromName_OutRow_3                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_10                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_11                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_5                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_12                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_6                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_13                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_14                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_7                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_15                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_16                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_8                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_4                      (ReferenceParm)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_5                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_17                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Atmosphere_Master        CallFunc_GetDataTableRowFromName_OutRow_4                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_18                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_8                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_19                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_6                      (ReferenceParm)
// double                             CallFunc_Conv_ByteToDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_20                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Clouds                   CallFunc_GetDataTableRowFromName_OutRow_5                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_5                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_21                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_VE_Preset_Master         CallFunc_GetDataTableRowFromName_OutRow_6                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_6                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_22                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraParameterCollectionInstance*CallFunc_GetNiagaraParameterCollection_ReturnValue_4             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNiagaraParameterCollectionInstance*CallFunc_GetNiagaraParameterCollection_ReturnValue_5             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_9                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_10                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_9                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_10                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_11                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_11                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_12                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraParameterCollectionInstance*CallFunc_GetNiagaraParameterCollection_ReturnValue_6             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_12                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_13                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraParameterCollectionInstance*CallFunc_GetNiagaraParameterCollection_ReturnValue_7             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNiagaraParameterCollectionInstance*CallFunc_GetNiagaraParameterCollection_ReturnValue_8             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraParameterCollectionInstance*CallFunc_GetNiagaraParameterCollection_ReturnValue_9             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_InValue_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_InValue_ImplicitCast_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_6                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_7                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_InValue_ImplicitCast_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_InValue_ImplicitCast_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_InValue_ImplicitCast_4                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_3   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_4   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_5   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_6   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_7   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_8   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_9   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_8                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_InValue_ImplicitCast_5                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_InValue_ImplicitCast_6                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_9                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_10                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_9                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_10                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_11                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_12                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_InValue_ImplicitCast_7                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_11                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_InValue_ImplicitCast_8                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_InValue_ImplicitCast_9                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_VFX_C::VFX(const TArray<double>& Fog_Emissive_Night_Array, const TArray<double>& Fog_Emissive_DawnDusk_Array, const TArray<double>& Fog_Alpha_Night_Array, const TArray<double>& Fog_Alpha_DawnDusk_Array, const TArray<double>& Fog_Emissive_Day_Array, double Fog_Emissive_Night, double Fog_Emissive_DawnDusk, double Fog_Emissive_Day, class UCurveFloat* Volume_Fog_Lerp_Night, class UCurveFloat* Volume_Fog_Lerp_Day, double Fog_Alpha_Night, double Fog_Alpha_DawnDusk, const TArray<double>& Fog_Alpha_Day_Array, double Fog_Alpha_Day, const TArray<class UDataTable*>& Fog_Data_Table_Array, const TArray<class UCurveFloat*>& Fog_Emissive_Scale_Array, const TArray<class UCurveFloat*>& Fog_Alpha_Scale_Array, class UCurveFloat* Fog_Emissive_Scale_Curve, class UCurveFloat* Fog_Alpha_Scale_Curve, class UCurveFloat* VFX_Brightness, double AdjustedTime24Hour, TArray<double>& K2Node_MakeArray_Array, TArray<double>& K2Node_MakeArray_Array_1, TArray<double>& K2Node_MakeArray_Array_2, TArray<double>& K2Node_MakeArray_Array_3, TArray<double>& K2Node_MakeArray_Array_4, TArray<class UDataTable*>& K2Node_MakeArray_Array_5, TArray<class UCurveFloat*>& K2Node_MakeArray_Array_6, TArray<class UCurveFloat*>& K2Node_MakeArray_Array_7, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_GetFloatValue_ReturnValue_1, float CallFunc_GetFloatValue_ReturnValue_2, class UNiagaraParameterCollectionInstance* CallFunc_GetNiagaraParameterCollection_ReturnValue, float CallFunc_GetFloatValue_ReturnValue_3, class UNiagaraParameterCollectionInstance* CallFunc_GetNiagaraParameterCollection_ReturnValue_1, int32 CallFunc_Conv_BoolToInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, double CallFunc_Array_Get_Item, double CallFunc_Array_Get_Item_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, double CallFunc_Array_Get_Item_2, double CallFunc_Array_Get_Item_3, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_2, class FName CallFunc_Array_Get_Item_4, const struct FS_Atmosphere_Master& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class FName CallFunc_Array_Get_Item_5, const struct FS_Clouds& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, float CallFunc_GetFloatValue_ReturnValue_4, double CallFunc_Lerp_ReturnValue, const struct FLinearColor& CallFunc_Array_Get_Item_6, float CallFunc_GetFloatValue_ReturnValue_5, double CallFunc_Lerp_ReturnValue_1, float CallFunc_GetFloatValue_ReturnValue_6, double CallFunc_Lerp_ReturnValue_2, float CallFunc_GetFloatValue_ReturnValue_7, class UNiagaraParameterCollectionInstance* CallFunc_GetNiagaraParameterCollection_ReturnValue_2, double CallFunc_Lerp_ReturnValue_3, class UNiagaraParameterCollectionInstance* CallFunc_GetNiagaraParameterCollection_ReturnValue_3, int32 CallFunc_Conv_BoolToInt_ReturnValue_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_3, bool K2Node_SwitchInteger_CmpSuccess_1, class FName CallFunc_Array_Get_Item_7, const struct FS_Atmosphere_Master& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, double CallFunc_Array_Get_Item_8, double CallFunc_Lerp_ReturnValue_4, class FName CallFunc_Array_Get_Item_9, const struct FS_Clouds& CallFunc_GetDataTableRowFromName_OutRow_3, bool CallFunc_GetDataTableRowFromName_ReturnValue_3, const struct FLinearColor& CallFunc_Array_Get_Item_10, double CallFunc_Array_Get_Item_11, double CallFunc_Lerp_ReturnValue_5, double CallFunc_Array_Get_Item_12, double CallFunc_Lerp_ReturnValue_6, const struct FLinearColor& CallFunc_Array_Get_Item_13, double CallFunc_Array_Get_Item_14, double CallFunc_Lerp_ReturnValue_7, double CallFunc_Array_Get_Item_15, bool K2Node_SwitchInteger_CmpSuccess_2, bool K2Node_SwitchInteger_CmpSuccess_3, double CallFunc_Array_Get_Item_16, float CallFunc_GetFloatValue_ReturnValue_8, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_4, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_5, class FName CallFunc_Array_Get_Item_17, const struct FS_Atmosphere_Master& CallFunc_GetDataTableRowFromName_OutRow_4, bool CallFunc_GetDataTableRowFromName_ReturnValue_4, double CallFunc_Array_Get_Item_18, double CallFunc_Lerp_ReturnValue_8, double CallFunc_Array_Get_Item_19, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_6, double CallFunc_Conv_ByteToDouble_ReturnValue, class FName CallFunc_Array_Get_Item_20, int32 CallFunc_FTrunc_ReturnValue, const struct FS_Clouds& CallFunc_GetDataTableRowFromName_OutRow_5, bool CallFunc_GetDataTableRowFromName_ReturnValue_5, class FName CallFunc_Array_Get_Item_21, const struct FS_VE_Preset_Master& CallFunc_GetDataTableRowFromName_OutRow_6, bool CallFunc_GetDataTableRowFromName_ReturnValue_6, const struct FLinearColor& CallFunc_Array_Get_Item_22, int32 CallFunc_Conv_BoolToInt_ReturnValue_2, bool K2Node_SwitchInteger_CmpSuccess_4, class UNiagaraParameterCollectionInstance* CallFunc_GetNiagaraParameterCollection_ReturnValue_4, class UNiagaraParameterCollectionInstance* CallFunc_GetNiagaraParameterCollection_ReturnValue_5, float CallFunc_GetFloatValue_ReturnValue_9, float CallFunc_GetFloatValue_ReturnValue_10, double CallFunc_Lerp_ReturnValue_9, double CallFunc_Lerp_ReturnValue_10, float CallFunc_GetFloatValue_ReturnValue_11, double CallFunc_Lerp_ReturnValue_11, float CallFunc_GetFloatValue_ReturnValue_12, class UNiagaraParameterCollectionInstance* CallFunc_GetNiagaraParameterCollection_ReturnValue_6, double CallFunc_Lerp_ReturnValue_12, double CallFunc_Lerp_ReturnValue_13, class UNiagaraParameterCollectionInstance* CallFunc_GetNiagaraParameterCollection_ReturnValue_7, class UNiagaraParameterCollectionInstance* CallFunc_GetNiagaraParameterCollection_ReturnValue_8, int32 CallFunc_Conv_BoolToInt_ReturnValue_3, bool K2Node_SwitchInteger_CmpSuccess_5, class UNiagaraParameterCollectionInstance* CallFunc_GetNiagaraParameterCollection_ReturnValue_9, double CallFunc_Multiply_DoubleDouble_ReturnValue, float CallFunc_SetFloatParameter_InValue_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast_1, double CallFunc_Lerp_Alpha_ImplicitCast_1, float CallFunc_GetFloatValue_InTime_ImplicitCast_2, double CallFunc_Lerp_Alpha_ImplicitCast_2, float CallFunc_GetFloatValue_InTime_ImplicitCast_3, double CallFunc_Lerp_Alpha_ImplicitCast_3, float CallFunc_GetFloatValue_InTime_ImplicitCast_4, double CallFunc_Lerp_Alpha_ImplicitCast_4, float CallFunc_GetFloatValue_InTime_ImplicitCast_5, double CallFunc_Lerp_Alpha_ImplicitCast_5, float CallFunc_SetFloatParameter_InValue_ImplicitCast_1, float CallFunc_GetFloatValue_InTime_ImplicitCast_6, double CallFunc_Lerp_Alpha_ImplicitCast_6, float CallFunc_GetFloatValue_InTime_ImplicitCast_7, double CallFunc_Lerp_Alpha_ImplicitCast_7, float CallFunc_SetFloatParameter_InValue_ImplicitCast_2, float CallFunc_SetFloatParameter_InValue_ImplicitCast_3, float CallFunc_SetFloatParameter_InValue_ImplicitCast_4, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_3, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_4, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_5, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_6, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_7, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_8, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_9, float CallFunc_GetFloatValue_InTime_ImplicitCast_8, double CallFunc_Lerp_Alpha_ImplicitCast_8, float CallFunc_SetFloatParameter_InValue_ImplicitCast_5, float CallFunc_SetFloatParameter_InValue_ImplicitCast_6, float CallFunc_GetFloatValue_InTime_ImplicitCast_9, float CallFunc_GetFloatValue_InTime_ImplicitCast_10, double CallFunc_Lerp_Alpha_ImplicitCast_9, double CallFunc_Lerp_Alpha_ImplicitCast_10, float CallFunc_GetFloatValue_InTime_ImplicitCast_11, float CallFunc_GetFloatValue_InTime_ImplicitCast_12, float CallFunc_SetFloatParameter_InValue_ImplicitCast_7, double CallFunc_Lerp_Alpha_ImplicitCast_11, float CallFunc_SetFloatParameter_InValue_ImplicitCast_8, float CallFunc_SetFloatParameter_InValue_ImplicitCast_9)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_VFX_C", "VFX");

	Params::UTimeofDay_VFX_C_VFX_Params Parms{};

	Parms.Fog_Emissive_Night_Array = Fog_Emissive_Night_Array;
	Parms.Fog_Emissive_DawnDusk_Array = Fog_Emissive_DawnDusk_Array;
	Parms.Fog_Alpha_Night_Array = Fog_Alpha_Night_Array;
	Parms.Fog_Alpha_DawnDusk_Array = Fog_Alpha_DawnDusk_Array;
	Parms.Fog_Emissive_Day_Array = Fog_Emissive_Day_Array;
	Parms.Fog_Emissive_Night = Fog_Emissive_Night;
	Parms.Fog_Emissive_DawnDusk = Fog_Emissive_DawnDusk;
	Parms.Fog_Emissive_Day = Fog_Emissive_Day;
	Parms.Volume_Fog_Lerp_Night = Volume_Fog_Lerp_Night;
	Parms.Volume_Fog_Lerp_Day = Volume_Fog_Lerp_Day;
	Parms.Fog_Alpha_Night = Fog_Alpha_Night;
	Parms.Fog_Alpha_DawnDusk = Fog_Alpha_DawnDusk;
	Parms.Fog_Alpha_Day_Array = Fog_Alpha_Day_Array;
	Parms.Fog_Alpha_Day = Fog_Alpha_Day;
	Parms.Fog_Data_Table_Array = Fog_Data_Table_Array;
	Parms.Fog_Emissive_Scale_Array = Fog_Emissive_Scale_Array;
	Parms.Fog_Alpha_Scale_Array = Fog_Alpha_Scale_Array;
	Parms.Fog_Emissive_Scale_Curve = Fog_Emissive_Scale_Curve;
	Parms.Fog_Alpha_Scale_Curve = Fog_Alpha_Scale_Curve;
	Parms.VFX_Brightness = VFX_Brightness;
	Parms.AdjustedTime24Hour = AdjustedTime24Hour;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.K2Node_MakeArray_Array_5 = K2Node_MakeArray_Array_5;
	Parms.K2Node_MakeArray_Array_6 = K2Node_MakeArray_Array_6;
	Parms.K2Node_MakeArray_Array_7 = K2Node_MakeArray_Array_7;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue_1 = CallFunc_GetFloatValue_ReturnValue_1;
	Parms.CallFunc_GetFloatValue_ReturnValue_2 = CallFunc_GetFloatValue_ReturnValue_2;
	Parms.CallFunc_GetNiagaraParameterCollection_ReturnValue = CallFunc_GetNiagaraParameterCollection_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue_3 = CallFunc_GetFloatValue_ReturnValue_3;
	Parms.CallFunc_GetNiagaraParameterCollection_ReturnValue_1 = CallFunc_GetNiagaraParameterCollection_ReturnValue_1;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_1 = CallFunc_GetDataTableRowNames_OutRowNames_1;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_2 = CallFunc_GetDataTableRowNames_OutRowNames_2;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_GetFloatValue_ReturnValue_4 = CallFunc_GetFloatValue_ReturnValue_4;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_GetFloatValue_ReturnValue_5 = CallFunc_GetFloatValue_ReturnValue_5;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_GetFloatValue_ReturnValue_6 = CallFunc_GetFloatValue_ReturnValue_6;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.CallFunc_GetFloatValue_ReturnValue_7 = CallFunc_GetFloatValue_ReturnValue_7;
	Parms.CallFunc_GetNiagaraParameterCollection_ReturnValue_2 = CallFunc_GetNiagaraParameterCollection_ReturnValue_2;
	Parms.CallFunc_Lerp_ReturnValue_3 = CallFunc_Lerp_ReturnValue_3;
	Parms.CallFunc_GetNiagaraParameterCollection_ReturnValue_3 = CallFunc_GetNiagaraParameterCollection_ReturnValue_3;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_1 = CallFunc_Conv_BoolToInt_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_3 = CallFunc_GetDataTableRowNames_OutRowNames_3;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_2 = CallFunc_GetDataTableRowFromName_OutRow_2;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_2 = CallFunc_GetDataTableRowFromName_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_8 = CallFunc_Array_Get_Item_8;
	Parms.CallFunc_Lerp_ReturnValue_4 = CallFunc_Lerp_ReturnValue_4;
	Parms.CallFunc_Array_Get_Item_9 = CallFunc_Array_Get_Item_9;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_3 = CallFunc_GetDataTableRowFromName_OutRow_3;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_3 = CallFunc_GetDataTableRowFromName_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_10 = CallFunc_Array_Get_Item_10;
	Parms.CallFunc_Array_Get_Item_11 = CallFunc_Array_Get_Item_11;
	Parms.CallFunc_Lerp_ReturnValue_5 = CallFunc_Lerp_ReturnValue_5;
	Parms.CallFunc_Array_Get_Item_12 = CallFunc_Array_Get_Item_12;
	Parms.CallFunc_Lerp_ReturnValue_6 = CallFunc_Lerp_ReturnValue_6;
	Parms.CallFunc_Array_Get_Item_13 = CallFunc_Array_Get_Item_13;
	Parms.CallFunc_Array_Get_Item_14 = CallFunc_Array_Get_Item_14;
	Parms.CallFunc_Lerp_ReturnValue_7 = CallFunc_Lerp_ReturnValue_7;
	Parms.CallFunc_Array_Get_Item_15 = CallFunc_Array_Get_Item_15;
	Parms.K2Node_SwitchInteger_CmpSuccess_2 = K2Node_SwitchInteger_CmpSuccess_2;
	Parms.K2Node_SwitchInteger_CmpSuccess_3 = K2Node_SwitchInteger_CmpSuccess_3;
	Parms.CallFunc_Array_Get_Item_16 = CallFunc_Array_Get_Item_16;
	Parms.CallFunc_GetFloatValue_ReturnValue_8 = CallFunc_GetFloatValue_ReturnValue_8;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_4 = CallFunc_GetDataTableRowNames_OutRowNames_4;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_5 = CallFunc_GetDataTableRowNames_OutRowNames_5;
	Parms.CallFunc_Array_Get_Item_17 = CallFunc_Array_Get_Item_17;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_4 = CallFunc_GetDataTableRowFromName_OutRow_4;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_4 = CallFunc_GetDataTableRowFromName_ReturnValue_4;
	Parms.CallFunc_Array_Get_Item_18 = CallFunc_Array_Get_Item_18;
	Parms.CallFunc_Lerp_ReturnValue_8 = CallFunc_Lerp_ReturnValue_8;
	Parms.CallFunc_Array_Get_Item_19 = CallFunc_Array_Get_Item_19;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_6 = CallFunc_GetDataTableRowNames_OutRowNames_6;
	Parms.CallFunc_Conv_ByteToDouble_ReturnValue = CallFunc_Conv_ByteToDouble_ReturnValue;
	Parms.CallFunc_Array_Get_Item_20 = CallFunc_Array_Get_Item_20;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_5 = CallFunc_GetDataTableRowFromName_OutRow_5;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_5 = CallFunc_GetDataTableRowFromName_ReturnValue_5;
	Parms.CallFunc_Array_Get_Item_21 = CallFunc_Array_Get_Item_21;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_6 = CallFunc_GetDataTableRowFromName_OutRow_6;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_6 = CallFunc_GetDataTableRowFromName_ReturnValue_6;
	Parms.CallFunc_Array_Get_Item_22 = CallFunc_Array_Get_Item_22;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_2 = CallFunc_Conv_BoolToInt_ReturnValue_2;
	Parms.K2Node_SwitchInteger_CmpSuccess_4 = K2Node_SwitchInteger_CmpSuccess_4;
	Parms.CallFunc_GetNiagaraParameterCollection_ReturnValue_4 = CallFunc_GetNiagaraParameterCollection_ReturnValue_4;
	Parms.CallFunc_GetNiagaraParameterCollection_ReturnValue_5 = CallFunc_GetNiagaraParameterCollection_ReturnValue_5;
	Parms.CallFunc_GetFloatValue_ReturnValue_9 = CallFunc_GetFloatValue_ReturnValue_9;
	Parms.CallFunc_GetFloatValue_ReturnValue_10 = CallFunc_GetFloatValue_ReturnValue_10;
	Parms.CallFunc_Lerp_ReturnValue_9 = CallFunc_Lerp_ReturnValue_9;
	Parms.CallFunc_Lerp_ReturnValue_10 = CallFunc_Lerp_ReturnValue_10;
	Parms.CallFunc_GetFloatValue_ReturnValue_11 = CallFunc_GetFloatValue_ReturnValue_11;
	Parms.CallFunc_Lerp_ReturnValue_11 = CallFunc_Lerp_ReturnValue_11;
	Parms.CallFunc_GetFloatValue_ReturnValue_12 = CallFunc_GetFloatValue_ReturnValue_12;
	Parms.CallFunc_GetNiagaraParameterCollection_ReturnValue_6 = CallFunc_GetNiagaraParameterCollection_ReturnValue_6;
	Parms.CallFunc_Lerp_ReturnValue_12 = CallFunc_Lerp_ReturnValue_12;
	Parms.CallFunc_Lerp_ReturnValue_13 = CallFunc_Lerp_ReturnValue_13;
	Parms.CallFunc_GetNiagaraParameterCollection_ReturnValue_7 = CallFunc_GetNiagaraParameterCollection_ReturnValue_7;
	Parms.CallFunc_GetNiagaraParameterCollection_ReturnValue_8 = CallFunc_GetNiagaraParameterCollection_ReturnValue_8;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_3 = CallFunc_Conv_BoolToInt_ReturnValue_3;
	Parms.K2Node_SwitchInteger_CmpSuccess_5 = K2Node_SwitchInteger_CmpSuccess_5;
	Parms.CallFunc_GetNiagaraParameterCollection_ReturnValue_9 = CallFunc_GetNiagaraParameterCollection_ReturnValue_9;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_SetFloatParameter_InValue_ImplicitCast = CallFunc_SetFloatParameter_InValue_ImplicitCast;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast = CallFunc_GetFloatValue_InTime_ImplicitCast;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast = CallFunc_Lerp_Alpha_ImplicitCast;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_1 = CallFunc_GetFloatValue_InTime_ImplicitCast_1;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_1 = CallFunc_Lerp_Alpha_ImplicitCast_1;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_2 = CallFunc_GetFloatValue_InTime_ImplicitCast_2;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_2 = CallFunc_Lerp_Alpha_ImplicitCast_2;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_3 = CallFunc_GetFloatValue_InTime_ImplicitCast_3;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_3 = CallFunc_Lerp_Alpha_ImplicitCast_3;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_4 = CallFunc_GetFloatValue_InTime_ImplicitCast_4;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_4 = CallFunc_Lerp_Alpha_ImplicitCast_4;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_5 = CallFunc_GetFloatValue_InTime_ImplicitCast_5;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_5 = CallFunc_Lerp_Alpha_ImplicitCast_5;
	Parms.CallFunc_SetFloatParameter_InValue_ImplicitCast_1 = CallFunc_SetFloatParameter_InValue_ImplicitCast_1;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_6 = CallFunc_GetFloatValue_InTime_ImplicitCast_6;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_6 = CallFunc_Lerp_Alpha_ImplicitCast_6;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_7 = CallFunc_GetFloatValue_InTime_ImplicitCast_7;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_7 = CallFunc_Lerp_Alpha_ImplicitCast_7;
	Parms.CallFunc_SetFloatParameter_InValue_ImplicitCast_2 = CallFunc_SetFloatParameter_InValue_ImplicitCast_2;
	Parms.CallFunc_SetFloatParameter_InValue_ImplicitCast_3 = CallFunc_SetFloatParameter_InValue_ImplicitCast_3;
	Parms.CallFunc_SetFloatParameter_InValue_ImplicitCast_4 = CallFunc_SetFloatParameter_InValue_ImplicitCast_4;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_3 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_3;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_4 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_4;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_5 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_5;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_6 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_6;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_7 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_7;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_8 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_8;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_9 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_9;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_8 = CallFunc_GetFloatValue_InTime_ImplicitCast_8;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_8 = CallFunc_Lerp_Alpha_ImplicitCast_8;
	Parms.CallFunc_SetFloatParameter_InValue_ImplicitCast_5 = CallFunc_SetFloatParameter_InValue_ImplicitCast_5;
	Parms.CallFunc_SetFloatParameter_InValue_ImplicitCast_6 = CallFunc_SetFloatParameter_InValue_ImplicitCast_6;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_9 = CallFunc_GetFloatValue_InTime_ImplicitCast_9;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_10 = CallFunc_GetFloatValue_InTime_ImplicitCast_10;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_9 = CallFunc_Lerp_Alpha_ImplicitCast_9;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_10 = CallFunc_Lerp_Alpha_ImplicitCast_10;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_11 = CallFunc_GetFloatValue_InTime_ImplicitCast_11;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_12 = CallFunc_GetFloatValue_InTime_ImplicitCast_12;
	Parms.CallFunc_SetFloatParameter_InValue_ImplicitCast_7 = CallFunc_SetFloatParameter_InValue_ImplicitCast_7;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_11 = CallFunc_Lerp_Alpha_ImplicitCast_11;
	Parms.CallFunc_SetFloatParameter_InValue_ImplicitCast_8 = CallFunc_SetFloatParameter_InValue_ImplicitCast_8;
	Parms.CallFunc_SetFloatParameter_InValue_ImplicitCast_9 = CallFunc_SetFloatParameter_InValue_ImplicitCast_9;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TimeofDay_VFX.TimeofDay_VFX_C.Initialize_VFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Adjusted_Time                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_VFX_C::Initialize_VFX(double Adjusted_Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_VFX_C", "Initialize_VFX");

	Params::UTimeofDay_VFX_C_Initialize_VFX_Params Parms{};

	Parms.Adjusted_Time = Adjusted_Time;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TimeofDay_VFX.TimeofDay_VFX_C.Set_up_references
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Volume_Fog_Override                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Manual_Fog_Alpha_Scale                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Manual_Fog_Emissive_Scale                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Cloud                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Atmosphere_Master_Select                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Fog_Alpha_Scale_Int                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Fog_Emissive_Scale_Int                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Visual_Environment_Preset_Override                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAtmosphere_Master      Visual_Environment_Preset                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Cave_Override                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Fog_Volume_Level                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Nightmare_Override                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_VFX_C::Set_up_references(bool Volume_Fog_Override, double Manual_Fog_Alpha_Scale, double Manual_Fog_Emissive_Scale, int32 Realm_Minus_Cloud, int32 Realm_Minus_Atmosphere_Master_Select, int32 Fog_Alpha_Scale_Int, int32 Fog_Emissive_Scale_Int, bool Visual_Environment_Preset_Override, enum class EAtmosphere_Master Visual_Environment_Preset, int32 Realm_Minus_Cave_Override, int32 Realm_Minus_Fog_Volume_Level, bool Nightmare_Override)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_VFX_C", "Set_up_references");

	Params::UTimeofDay_VFX_C_Set_up_references_Params Parms{};

	Parms.Volume_Fog_Override = Volume_Fog_Override;
	Parms.Manual_Fog_Alpha_Scale = Manual_Fog_Alpha_Scale;
	Parms.Manual_Fog_Emissive_Scale = Manual_Fog_Emissive_Scale;
	Parms.Realm_Minus_Cloud = Realm_Minus_Cloud;
	Parms.Realm_Minus_Atmosphere_Master_Select = Realm_Minus_Atmosphere_Master_Select;
	Parms.Fog_Alpha_Scale_Int = Fog_Alpha_Scale_Int;
	Parms.Fog_Emissive_Scale_Int = Fog_Emissive_Scale_Int;
	Parms.Visual_Environment_Preset_Override = Visual_Environment_Preset_Override;
	Parms.Visual_Environment_Preset = Visual_Environment_Preset;
	Parms.Realm_Minus_Cave_Override = Realm_Minus_Cave_Override;
	Parms.Realm_Minus_Fog_Volume_Level = Realm_Minus_Fog_Volume_Level;
	Parms.Nightmare_Override = Nightmare_Override;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TimeofDay_VFX.TimeofDay_VFX_C.ExecuteUbergraph_TimeofDay_VFX
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Volume_Fog_Cache_VolumeFogLevel                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Adjusted_Time                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Volume_Fog_Override                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Manual_Fog_Alpha_Scale                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Manual_Fog_Emissive_Scale                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Cloud                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Atmosphere_Master_Select              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Fog_Alpha_Scale_Int                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Fog_Emissive_Scale_Int                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Visual_Environment_Preset_Override            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAtmosphere_Master      K2Node_CustomEvent_Visual_Environment_Preset                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Cave_Override                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Fog_Volume_Level                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Nightmare_Override                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_VFX_C::ExecuteUbergraph_TimeofDay_VFX(int32 EntryPoint, int32 CallFunc_Volume_Fog_Cache_VolumeFogLevel, double K2Node_CustomEvent_Adjusted_Time, bool K2Node_CustomEvent_Volume_Fog_Override, double K2Node_CustomEvent_Manual_Fog_Alpha_Scale, double K2Node_CustomEvent_Manual_Fog_Emissive_Scale, int32 K2Node_CustomEvent_Realm___Cloud, int32 K2Node_CustomEvent_Realm___Atmosphere_Master_Select, int32 K2Node_CustomEvent_Fog_Alpha_Scale_Int, int32 K2Node_CustomEvent_Fog_Emissive_Scale_Int, bool K2Node_CustomEvent_Visual_Environment_Preset_Override, enum class EAtmosphere_Master K2Node_CustomEvent_Visual_Environment_Preset, int32 K2Node_CustomEvent_Realm___Cave_Override, int32 K2Node_CustomEvent_Realm___Fog_Volume_Level, bool K2Node_CustomEvent_Nightmare_Override)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_VFX_C", "ExecuteUbergraph_TimeofDay_VFX");

	Params::UTimeofDay_VFX_C_ExecuteUbergraph_TimeofDay_VFX_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Volume_Fog_Cache_VolumeFogLevel = CallFunc_Volume_Fog_Cache_VolumeFogLevel;
	Parms.K2Node_CustomEvent_Adjusted_Time = K2Node_CustomEvent_Adjusted_Time;
	Parms.K2Node_CustomEvent_Volume_Fog_Override = K2Node_CustomEvent_Volume_Fog_Override;
	Parms.K2Node_CustomEvent_Manual_Fog_Alpha_Scale = K2Node_CustomEvent_Manual_Fog_Alpha_Scale;
	Parms.K2Node_CustomEvent_Manual_Fog_Emissive_Scale = K2Node_CustomEvent_Manual_Fog_Emissive_Scale;
	Parms.K2Node_CustomEvent_Realm___Cloud = K2Node_CustomEvent_Realm___Cloud;
	Parms.K2Node_CustomEvent_Realm___Atmosphere_Master_Select = K2Node_CustomEvent_Realm___Atmosphere_Master_Select;
	Parms.K2Node_CustomEvent_Fog_Alpha_Scale_Int = K2Node_CustomEvent_Fog_Alpha_Scale_Int;
	Parms.K2Node_CustomEvent_Fog_Emissive_Scale_Int = K2Node_CustomEvent_Fog_Emissive_Scale_Int;
	Parms.K2Node_CustomEvent_Visual_Environment_Preset_Override = K2Node_CustomEvent_Visual_Environment_Preset_Override;
	Parms.K2Node_CustomEvent_Visual_Environment_Preset = K2Node_CustomEvent_Visual_Environment_Preset;
	Parms.K2Node_CustomEvent_Realm___Cave_Override = K2Node_CustomEvent_Realm___Cave_Override;
	Parms.K2Node_CustomEvent_Realm___Fog_Volume_Level = K2Node_CustomEvent_Realm___Fog_Volume_Level;
	Parms.K2Node_CustomEvent_Nightmare_Override = K2Node_CustomEvent_Nightmare_Override;

	UObject::ProcessEvent(Func, &Parms);

}

}


