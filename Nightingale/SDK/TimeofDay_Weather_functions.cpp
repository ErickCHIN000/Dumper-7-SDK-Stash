#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TimeofDay_Weather.TimeofDay_Weather_C
// (None)

class UClass* UTimeofDay_Weather_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TimeofDay_Weather_C");

	return Clss;
}


// TimeofDay_Weather_C TimeofDay_Weather.Default__TimeofDay_Weather_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTimeofDay_Weather_C* UTimeofDay_Weather_C::GetDefaultObj()
{
	static class UTimeofDay_Weather_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTimeofDay_Weather_C*>(UTimeofDay_Weather_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TimeofDay_Weather.TimeofDay_Weather_C.VE_Preset Fog Albedo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Fog_Albedo                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FLinearColor>        Color_Saturation_Main_Celestial                                  (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Color_Saturation_Sky_Lum                                         (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Color_Saturation_Array                                           (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Color_Saturation_Low                                             (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Color_Saturation_Med                                             (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Color_Saturation_High                                            (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<struct FLinearColor>        K2Node_MakeArray_Array_1                                         (ReferenceParm)
// TArray<struct FLinearColor>        K2Node_MakeArray_Array_2                                         (ReferenceParm)
// TArray<struct FLinearColor>        K2Node_MakeArray_Array_3                                         (ReferenceParm)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// double                             CallFunc_Conv_ByteToDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_VE_Preset_Master         CallFunc_GetDataTableRowFromName_OutRow                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FLinearColor>        K2Node_MakeArray_Array_4                                         (ReferenceParm)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_1                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Color_Table_Master       CallFunc_GetDataTableRowFromName_OutRow_1                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_2                      (ReferenceParm)
// class UDataTable*                  CallFunc_Array_Get_Item_2                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_3                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Color_Master             CallFunc_GetDataTableRowFromName_OutRow_2                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_6                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Color_Saturations        CallFunc_GetDataTableRowFromName_OutRow_3                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_7                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Weather_C::VE_Preset_Fog_Albedo(struct FLinearColor* Fog_Albedo, const TArray<struct FLinearColor>& Color_Saturation_Main_Celestial, const TArray<struct FLinearColor>& Color_Saturation_Sky_Lum, const TArray<struct FLinearColor>& Color_Saturation_Array, const TArray<struct FLinearColor>& Color_Saturation_Low, const TArray<struct FLinearColor>& Color_Saturation_Med, const TArray<struct FLinearColor>& Color_Saturation_High, TArray<struct FLinearColor>& K2Node_MakeArray_Array, TArray<struct FLinearColor>& K2Node_MakeArray_Array_1, TArray<struct FLinearColor>& K2Node_MakeArray_Array_2, TArray<struct FLinearColor>& K2Node_MakeArray_Array_3, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, double CallFunc_Conv_ByteToDouble_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, class FName CallFunc_Array_Get_Item, const struct FS_VE_Preset_Master& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, TArray<struct FLinearColor>& K2Node_MakeArray_Array_4, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_1, class FName CallFunc_Array_Get_Item_1, const struct FS_Color_Table_Master& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_2, class UDataTable* CallFunc_Array_Get_Item_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_3, class FName CallFunc_Array_Get_Item_3, const struct FS_Color_Master& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, const struct FLinearColor& CallFunc_Array_Get_Item_4, float CallFunc_GetFloatValue_ReturnValue, class FName CallFunc_Array_Get_Item_5, const struct FLinearColor& CallFunc_Array_Get_Item_6, const struct FS_Color_Saturations& CallFunc_GetDataTableRowFromName_OutRow_3, bool CallFunc_GetDataTableRowFromName_ReturnValue_3, const struct FLinearColor& CallFunc_Array_Get_Item_7, bool K2Node_SwitchInteger_CmpSuccess, float CallFunc_GetFloatValue_ReturnValue_1, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_1, float CallFunc_GetFloatValue_InTime_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Weather_C", "VE_Preset Fog Albedo");

	Params::UTimeofDay_Weather_C_VE_Preset_Fog_Albedo_Params Parms{};

	Parms.Color_Saturation_Main_Celestial = Color_Saturation_Main_Celestial;
	Parms.Color_Saturation_Sky_Lum = Color_Saturation_Sky_Lum;
	Parms.Color_Saturation_Array = Color_Saturation_Array;
	Parms.Color_Saturation_Low = Color_Saturation_Low;
	Parms.Color_Saturation_Med = Color_Saturation_Med;
	Parms.Color_Saturation_High = Color_Saturation_High;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Conv_ByteToDouble_ReturnValue = CallFunc_Conv_ByteToDouble_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_1 = CallFunc_GetDataTableRowNames_OutRowNames_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_2 = CallFunc_GetDataTableRowNames_OutRowNames_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_3 = CallFunc_GetDataTableRowNames_OutRowNames_3;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_2 = CallFunc_GetDataTableRowFromName_OutRow_2;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_2 = CallFunc_GetDataTableRowFromName_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_3 = CallFunc_GetDataTableRowFromName_OutRow_3;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_3 = CallFunc_GetDataTableRowFromName_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_GetFloatValue_ReturnValue_1 = CallFunc_GetFloatValue_ReturnValue_1;
	Parms.CallFunc_LinearColorLerp_ReturnValue = CallFunc_LinearColorLerp_ReturnValue;
	Parms.CallFunc_LinearColorLerp_ReturnValue_1 = CallFunc_LinearColorLerp_ReturnValue_1;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast = CallFunc_GetFloatValue_InTime_ImplicitCast;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_1 = CallFunc_GetFloatValue_InTime_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Fog_Albedo != nullptr)
		*Fog_Albedo = std::move(Parms.Fog_Albedo);

}


// Function TimeofDay_Weather.TimeofDay_Weather_C.VE Preset Fog Attributes
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Fog_Scatter_Dist                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Fog_Extinction_Scale                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Fog_Distance                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Fog_Density                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Fog_Height_Falloff                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Fog_Max_Opacity                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<double>                     Fog_Density_Array_Night                                          (Edit, BlueprintVisible)
// TArray<double>                     Fog_Density_Array_Day                                            (Edit, BlueprintVisible)
// TArray<double>                     Fog_Density_Array_DawnDusk                                       (Edit, BlueprintVisible)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_1                      (ReferenceParm)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_2                      (ReferenceParm)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_3                      (ReferenceParm)
// TArray<double>                     K2Node_MakeArray_Array                                           (ReferenceParm)
// float                              CallFunc_GetFloatValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<double>                     K2Node_MakeArray_Array_1                                         (ReferenceParm)
// TArray<double>                     K2Node_MakeArray_Array_2                                         (ReferenceParm)
// float                              CallFunc_GetFloatValue_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_4                      (ReferenceParm)
// double                             CallFunc_Conv_ByteToDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_VE_Preset_Master         CallFunc_GetDataTableRowFromName_OutRow                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_6                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Fog_Day                  CallFunc_GetDataTableRowFromName_OutRow_1                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Fog_Day                  CallFunc_GetDataTableRowFromName_OutRow_2                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_6                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_7                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Fog_Day                  CallFunc_GetDataTableRowFromName_OutRow_3                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_8                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_9                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_10                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_11                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_12                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_13                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_14                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Fog_Day                  CallFunc_GetDataTableRowFromName_OutRow_4                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_15                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_16                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_5                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_17                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_6                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_6                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Weather_C::VE_Preset_Fog_Attributes(double* Fog_Scatter_Dist, double* Fog_Extinction_Scale, double* Fog_Distance, double* Fog_Density, double* Fog_Height_Falloff, double* Fog_Max_Opacity, const TArray<double>& Fog_Density_Array_Night, const TArray<double>& Fog_Density_Array_Day, const TArray<double>& Fog_Density_Array_DawnDusk, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_2, float CallFunc_GetFloatValue_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_3, TArray<double>& K2Node_MakeArray_Array, float CallFunc_GetFloatValue_ReturnValue_1, TArray<double>& K2Node_MakeArray_Array_1, TArray<double>& K2Node_MakeArray_Array_2, float CallFunc_GetFloatValue_ReturnValue_2, float CallFunc_GetFloatValue_ReturnValue_3, float CallFunc_GetFloatValue_ReturnValue_4, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_4, double CallFunc_Conv_ByteToDouble_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, class FName CallFunc_Array_Get_Item, const struct FS_VE_Preset_Master& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, float CallFunc_GetFloatValue_ReturnValue_5, class FName CallFunc_Array_Get_Item_1, float CallFunc_GetFloatValue_ReturnValue_6, const struct FS_Fog_Day& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, class FName CallFunc_Array_Get_Item_2, const struct FS_Fog_Day& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, double CallFunc_Array_Get_Item_3, double CallFunc_Array_Get_Item_4, double CallFunc_Array_Get_Item_5, class FName CallFunc_Array_Get_Item_6, double CallFunc_Array_Get_Item_7, const struct FS_Fog_Day& CallFunc_GetDataTableRowFromName_OutRow_3, bool CallFunc_GetDataTableRowFromName_ReturnValue_3, double CallFunc_Array_Get_Item_8, double CallFunc_Array_Get_Item_9, double CallFunc_Array_Get_Item_10, double CallFunc_Array_Get_Item_11, double CallFunc_Lerp_ReturnValue, double CallFunc_Lerp_ReturnValue_1, double CallFunc_Array_Get_Item_12, double CallFunc_Array_Get_Item_13, class FName CallFunc_Array_Get_Item_14, double CallFunc_Lerp_ReturnValue_2, const struct FS_Fog_Day& CallFunc_GetDataTableRowFromName_OutRow_4, bool CallFunc_GetDataTableRowFromName_ReturnValue_4, double CallFunc_Lerp_ReturnValue_3, double CallFunc_Array_Get_Item_15, double CallFunc_Array_Get_Item_16, double CallFunc_Lerp_ReturnValue_4, double CallFunc_Lerp_ReturnValue_5, double CallFunc_Array_Get_Item_17, double CallFunc_Lerp_ReturnValue_6, float CallFunc_GetFloatValue_InTime_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast_1, double CallFunc_Lerp_Alpha_ImplicitCast_1, float CallFunc_GetFloatValue_InTime_ImplicitCast_2, double CallFunc_Lerp_Alpha_ImplicitCast_2, float CallFunc_GetFloatValue_InTime_ImplicitCast_3, double CallFunc_Lerp_Alpha_ImplicitCast_3, float CallFunc_GetFloatValue_InTime_ImplicitCast_4, double CallFunc_Lerp_Alpha_ImplicitCast_4, float CallFunc_GetFloatValue_InTime_ImplicitCast_5, double CallFunc_Lerp_Alpha_ImplicitCast_5, float CallFunc_GetFloatValue_InTime_ImplicitCast_6, double CallFunc_Lerp_Alpha_ImplicitCast_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Weather_C", "VE Preset Fog Attributes");

	Params::UTimeofDay_Weather_C_VE_Preset_Fog_Attributes_Params Parms{};

	Parms.Fog_Density_Array_Night = Fog_Density_Array_Night;
	Parms.Fog_Density_Array_Day = Fog_Density_Array_Day;
	Parms.Fog_Density_Array_DawnDusk = Fog_Density_Array_DawnDusk;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_1 = CallFunc_GetDataTableRowNames_OutRowNames_1;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_2 = CallFunc_GetDataTableRowNames_OutRowNames_2;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_3 = CallFunc_GetDataTableRowNames_OutRowNames_3;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetFloatValue_ReturnValue_1 = CallFunc_GetFloatValue_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_GetFloatValue_ReturnValue_2 = CallFunc_GetFloatValue_ReturnValue_2;
	Parms.CallFunc_GetFloatValue_ReturnValue_3 = CallFunc_GetFloatValue_ReturnValue_3;
	Parms.CallFunc_GetFloatValue_ReturnValue_4 = CallFunc_GetFloatValue_ReturnValue_4;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_4 = CallFunc_GetDataTableRowNames_OutRowNames_4;
	Parms.CallFunc_Conv_ByteToDouble_ReturnValue = CallFunc_Conv_ByteToDouble_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue_5 = CallFunc_GetFloatValue_ReturnValue_5;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetFloatValue_ReturnValue_6 = CallFunc_GetFloatValue_ReturnValue_6;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_2 = CallFunc_GetDataTableRowFromName_OutRow_2;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_2 = CallFunc_GetDataTableRowFromName_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_3 = CallFunc_GetDataTableRowFromName_OutRow_3;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_3 = CallFunc_GetDataTableRowFromName_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_8 = CallFunc_Array_Get_Item_8;
	Parms.CallFunc_Array_Get_Item_9 = CallFunc_Array_Get_Item_9;
	Parms.CallFunc_Array_Get_Item_10 = CallFunc_Array_Get_Item_10;
	Parms.CallFunc_Array_Get_Item_11 = CallFunc_Array_Get_Item_11;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_12 = CallFunc_Array_Get_Item_12;
	Parms.CallFunc_Array_Get_Item_13 = CallFunc_Array_Get_Item_13;
	Parms.CallFunc_Array_Get_Item_14 = CallFunc_Array_Get_Item_14;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_4 = CallFunc_GetDataTableRowFromName_OutRow_4;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_4 = CallFunc_GetDataTableRowFromName_ReturnValue_4;
	Parms.CallFunc_Lerp_ReturnValue_3 = CallFunc_Lerp_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_15 = CallFunc_Array_Get_Item_15;
	Parms.CallFunc_Array_Get_Item_16 = CallFunc_Array_Get_Item_16;
	Parms.CallFunc_Lerp_ReturnValue_4 = CallFunc_Lerp_ReturnValue_4;
	Parms.CallFunc_Lerp_ReturnValue_5 = CallFunc_Lerp_ReturnValue_5;
	Parms.CallFunc_Array_Get_Item_17 = CallFunc_Array_Get_Item_17;
	Parms.CallFunc_Lerp_ReturnValue_6 = CallFunc_Lerp_ReturnValue_6;
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
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_6 = CallFunc_GetFloatValue_InTime_ImplicitCast_6;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_6 = CallFunc_Lerp_Alpha_ImplicitCast_6;

	UObject::ProcessEvent(Func, &Parms);

	if (Fog_Scatter_Dist != nullptr)
		*Fog_Scatter_Dist = Parms.Fog_Scatter_Dist;

	if (Fog_Extinction_Scale != nullptr)
		*Fog_Extinction_Scale = Parms.Fog_Extinction_Scale;

	if (Fog_Distance != nullptr)
		*Fog_Distance = Parms.Fog_Distance;

	if (Fog_Density != nullptr)
		*Fog_Density = Parms.Fog_Density;

	if (Fog_Height_Falloff != nullptr)
		*Fog_Height_Falloff = Parms.Fog_Height_Falloff;

	if (Fog_Max_Opacity != nullptr)
		*Fog_Max_Opacity = Parms.Fog_Max_Opacity;

}


// Function TimeofDay_Weather.TimeofDay_Weather_C.Primary_Fog_Attributes
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Fog_Scatter_Dist                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Fog_Extinction_Scale                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Fog_Distance                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Fog_Density                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Fog_Height_Falloff                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Fog_Max_Opacity                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<double>                     Fog_Density_Array_Night                                          (Edit, BlueprintVisible)
// TArray<double>                     Fog_Density_Array_Day                                            (Edit, BlueprintVisible)
// TArray<double>                     Fog_Density_Array_DawnDusk                                       (Edit, BlueprintVisible)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_1                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Fog_Day                  CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_2                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Fog_Day                  CallFunc_GetDataTableRowFromName_OutRow_1                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_3                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<double>                     K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FS_Fog_Day                  CallFunc_GetDataTableRowFromName_OutRow_2                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<double>                     K2Node_MakeArray_Array_1                                         (ReferenceParm)
// float                              CallFunc_GetFloatValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<double>                     K2Node_MakeArray_Array_2                                         (ReferenceParm)
// double                             CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_6                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_7                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_8                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Fog_Day                  CallFunc_GetDataTableRowFromName_OutRow_3                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_9                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_10                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_11                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_12                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_13                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_14                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_15                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_16                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_6                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_5                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_6                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_6                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Weather_C::Primary_Fog_Attributes(double* Fog_Scatter_Dist, double* Fog_Extinction_Scale, double* Fog_Distance, double* Fog_Density, double* Fog_Height_Falloff, double* Fog_Max_Opacity, const TArray<double>& Fog_Density_Array_Night, const TArray<double>& Fog_Density_Array_Day, const TArray<double>& Fog_Density_Array_DawnDusk, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_1, class FName CallFunc_Array_Get_Item, const struct FS_Fog_Day& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_2, class FName CallFunc_Array_Get_Item_1, const struct FS_Fog_Day& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, float CallFunc_GetFloatValue_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_3, class FName CallFunc_Array_Get_Item_2, TArray<double>& K2Node_MakeArray_Array, const struct FS_Fog_Day& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, TArray<double>& K2Node_MakeArray_Array_1, float CallFunc_GetFloatValue_ReturnValue_1, TArray<double>& K2Node_MakeArray_Array_2, double CallFunc_Array_Get_Item_3, double CallFunc_Array_Get_Item_4, float CallFunc_GetFloatValue_ReturnValue_2, double CallFunc_Array_Get_Item_5, double CallFunc_Lerp_ReturnValue, double CallFunc_Array_Get_Item_6, float CallFunc_GetFloatValue_ReturnValue_3, double CallFunc_Lerp_ReturnValue_1, float CallFunc_GetFloatValue_ReturnValue_4, class FName CallFunc_Array_Get_Item_7, double CallFunc_Array_Get_Item_8, const struct FS_Fog_Day& CallFunc_GetDataTableRowFromName_OutRow_3, bool CallFunc_GetDataTableRowFromName_ReturnValue_3, double CallFunc_Array_Get_Item_9, double CallFunc_Lerp_ReturnValue_2, double CallFunc_Array_Get_Item_10, double CallFunc_Array_Get_Item_11, double CallFunc_Array_Get_Item_12, double CallFunc_Array_Get_Item_13, double CallFunc_Array_Get_Item_14, double CallFunc_Array_Get_Item_15, double CallFunc_Lerp_ReturnValue_3, double CallFunc_Array_Get_Item_16, double CallFunc_Lerp_ReturnValue_4, float CallFunc_GetFloatValue_ReturnValue_5, float CallFunc_GetFloatValue_ReturnValue_6, double CallFunc_Lerp_ReturnValue_5, double CallFunc_Lerp_ReturnValue_6, float CallFunc_GetFloatValue_InTime_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast_1, double CallFunc_Lerp_Alpha_ImplicitCast_1, float CallFunc_GetFloatValue_InTime_ImplicitCast_2, double CallFunc_Lerp_Alpha_ImplicitCast_2, float CallFunc_GetFloatValue_InTime_ImplicitCast_3, double CallFunc_Lerp_Alpha_ImplicitCast_3, float CallFunc_GetFloatValue_InTime_ImplicitCast_4, double CallFunc_Lerp_Alpha_ImplicitCast_4, float CallFunc_GetFloatValue_InTime_ImplicitCast_5, float CallFunc_GetFloatValue_InTime_ImplicitCast_6, double CallFunc_Lerp_Alpha_ImplicitCast_5, double CallFunc_Lerp_Alpha_ImplicitCast_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Weather_C", "Primary_Fog_Attributes");

	Params::UTimeofDay_Weather_C_Primary_Fog_Attributes_Params Parms{};

	Parms.Fog_Density_Array_Night = Fog_Density_Array_Night;
	Parms.Fog_Density_Array_Day = Fog_Density_Array_Day;
	Parms.Fog_Density_Array_DawnDusk = Fog_Density_Array_DawnDusk;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_1 = CallFunc_GetDataTableRowNames_OutRowNames_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_2 = CallFunc_GetDataTableRowNames_OutRowNames_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_3 = CallFunc_GetDataTableRowNames_OutRowNames_3;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_2 = CallFunc_GetDataTableRowFromName_OutRow_2;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_2 = CallFunc_GetDataTableRowFromName_ReturnValue_2;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_GetFloatValue_ReturnValue_1 = CallFunc_GetFloatValue_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_GetFloatValue_ReturnValue_2 = CallFunc_GetFloatValue_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_GetFloatValue_ReturnValue_3 = CallFunc_GetFloatValue_ReturnValue_3;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_GetFloatValue_ReturnValue_4 = CallFunc_GetFloatValue_ReturnValue_4;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_Array_Get_Item_8 = CallFunc_Array_Get_Item_8;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_3 = CallFunc_GetDataTableRowFromName_OutRow_3;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_3 = CallFunc_GetDataTableRowFromName_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_9 = CallFunc_Array_Get_Item_9;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_10 = CallFunc_Array_Get_Item_10;
	Parms.CallFunc_Array_Get_Item_11 = CallFunc_Array_Get_Item_11;
	Parms.CallFunc_Array_Get_Item_12 = CallFunc_Array_Get_Item_12;
	Parms.CallFunc_Array_Get_Item_13 = CallFunc_Array_Get_Item_13;
	Parms.CallFunc_Array_Get_Item_14 = CallFunc_Array_Get_Item_14;
	Parms.CallFunc_Array_Get_Item_15 = CallFunc_Array_Get_Item_15;
	Parms.CallFunc_Lerp_ReturnValue_3 = CallFunc_Lerp_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_16 = CallFunc_Array_Get_Item_16;
	Parms.CallFunc_Lerp_ReturnValue_4 = CallFunc_Lerp_ReturnValue_4;
	Parms.CallFunc_GetFloatValue_ReturnValue_5 = CallFunc_GetFloatValue_ReturnValue_5;
	Parms.CallFunc_GetFloatValue_ReturnValue_6 = CallFunc_GetFloatValue_ReturnValue_6;
	Parms.CallFunc_Lerp_ReturnValue_5 = CallFunc_Lerp_ReturnValue_5;
	Parms.CallFunc_Lerp_ReturnValue_6 = CallFunc_Lerp_ReturnValue_6;
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
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_6 = CallFunc_GetFloatValue_InTime_ImplicitCast_6;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_5 = CallFunc_Lerp_Alpha_ImplicitCast_5;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_6 = CallFunc_Lerp_Alpha_ImplicitCast_6;

	UObject::ProcessEvent(Func, &Parms);

	if (Fog_Scatter_Dist != nullptr)
		*Fog_Scatter_Dist = Parms.Fog_Scatter_Dist;

	if (Fog_Extinction_Scale != nullptr)
		*Fog_Extinction_Scale = Parms.Fog_Extinction_Scale;

	if (Fog_Distance != nullptr)
		*Fog_Distance = Parms.Fog_Distance;

	if (Fog_Density != nullptr)
		*Fog_Density = Parms.Fog_Density;

	if (Fog_Height_Falloff != nullptr)
		*Fog_Height_Falloff = Parms.Fog_Height_Falloff;

	if (Fog_Max_Opacity != nullptr)
		*Fog_Max_Opacity = Parms.Fog_Max_Opacity;

}


// Function TimeofDay_Weather.TimeofDay_Weather_C.Primary Fog Albedo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Fog_Albedo                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FLinearColor>        Color_Saturation_Main_Celestial                                  (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Color_Saturation_Sky_Lum                                         (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Color_Saturation_Array                                           (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Color_Saturation_Low                                             (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Color_Saturation_Med                                             (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Color_Saturation_High                                            (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<struct FLinearColor>        K2Node_MakeArray_Array_1                                         (ReferenceParm)
// TArray<struct FLinearColor>        K2Node_MakeArray_Array_2                                         (ReferenceParm)
// TArray<struct FLinearColor>        K2Node_MakeArray_Array_3                                         (ReferenceParm)
// TArray<struct FLinearColor>        K2Node_MakeArray_Array_4                                         (ReferenceParm)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Color_Table_Master       CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_1                      (ReferenceParm)
// class UDataTable*                  CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_2                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Color_Master             CallFunc_GetDataTableRowFromName_OutRow_1                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Color_Saturations        CallFunc_GetDataTableRowFromName_OutRow_2                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_6                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Weather_C::Primary_Fog_Albedo(struct FLinearColor* Fog_Albedo, const TArray<struct FLinearColor>& Color_Saturation_Main_Celestial, const TArray<struct FLinearColor>& Color_Saturation_Sky_Lum, const TArray<struct FLinearColor>& Color_Saturation_Array, const TArray<struct FLinearColor>& Color_Saturation_Low, const TArray<struct FLinearColor>& Color_Saturation_Med, const TArray<struct FLinearColor>& Color_Saturation_High, TArray<struct FLinearColor>& K2Node_MakeArray_Array, TArray<struct FLinearColor>& K2Node_MakeArray_Array_1, TArray<struct FLinearColor>& K2Node_MakeArray_Array_2, TArray<struct FLinearColor>& K2Node_MakeArray_Array_3, TArray<struct FLinearColor>& K2Node_MakeArray_Array_4, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, const struct FS_Color_Table_Master& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_1, class UDataTable* CallFunc_Array_Get_Item_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_2, class FName CallFunc_Array_Get_Item_2, const struct FS_Color_Master& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, const struct FLinearColor& CallFunc_Array_Get_Item_3, class FName CallFunc_Array_Get_Item_4, const struct FLinearColor& CallFunc_Array_Get_Item_5, const struct FS_Color_Saturations& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, const struct FLinearColor& CallFunc_Array_Get_Item_6, bool K2Node_SwitchInteger_CmpSuccess, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_GetFloatValue_ReturnValue_1, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_1, float CallFunc_GetFloatValue_InTime_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Weather_C", "Primary Fog Albedo");

	Params::UTimeofDay_Weather_C_Primary_Fog_Albedo_Params Parms{};

	Parms.Color_Saturation_Main_Celestial = Color_Saturation_Main_Celestial;
	Parms.Color_Saturation_Sky_Lum = Color_Saturation_Sky_Lum;
	Parms.Color_Saturation_Array = Color_Saturation_Array;
	Parms.Color_Saturation_Low = Color_Saturation_Low;
	Parms.Color_Saturation_Med = Color_Saturation_Med;
	Parms.Color_Saturation_High = Color_Saturation_High;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_1 = CallFunc_GetDataTableRowNames_OutRowNames_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_2 = CallFunc_GetDataTableRowNames_OutRowNames_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_2 = CallFunc_GetDataTableRowFromName_OutRow_2;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_2 = CallFunc_GetDataTableRowFromName_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue_1 = CallFunc_GetFloatValue_ReturnValue_1;
	Parms.CallFunc_LinearColorLerp_ReturnValue = CallFunc_LinearColorLerp_ReturnValue;
	Parms.CallFunc_LinearColorLerp_ReturnValue_1 = CallFunc_LinearColorLerp_ReturnValue_1;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast = CallFunc_GetFloatValue_InTime_ImplicitCast;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_1 = CallFunc_GetFloatValue_InTime_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Fog_Albedo != nullptr)
		*Fog_Albedo = std::move(Parms.Fog_Albedo);

}


// Function TimeofDay_Weather.TimeofDay_Weather_C.DirtyWeatherCache
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTimeofDay_Weather_C::DirtyWeatherCache()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Weather_C", "DirtyWeatherCache");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TimeofDay_Weather.TimeofDay_Weather_C.UpdateWeatherCache
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_Weather_Cache_WindSpeed                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Weather_Cache_WindDirection                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Vault_Override_Cache_Cached_Vault_Override              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Weather_C::UpdateWeatherCache(double CallFunc_Weather_Cache_WindSpeed, const struct FVector& CallFunc_Weather_Cache_WindDirection, int32 CallFunc_Vault_Override_Cache_Cached_Vault_Override, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Weather_C", "UpdateWeatherCache");

	Params::UTimeofDay_Weather_C_UpdateWeatherCache_Params Parms{};

	Parms.CallFunc_Weather_Cache_WindSpeed = CallFunc_Weather_Cache_WindSpeed;
	Parms.CallFunc_Weather_Cache_WindDirection = CallFunc_Weather_Cache_WindDirection;
	Parms.CallFunc_Vault_Override_Cache_Cached_Vault_Override = CallFunc_Vault_Override_Cache_Cached_Vault_Override;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TimeofDay_Weather.TimeofDay_Weather_C.Weather Cache
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             WindSpeed                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     WindDirection                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Weather                  CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Weather_C::Weather_Cache(double* WindSpeed, struct FVector* WindDirection, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, const struct FS_Weather& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Weather_C", "Weather Cache");

	Params::UTimeofDay_Weather_C_Weather_Cache_Params Parms{};

	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (WindSpeed != nullptr)
		*WindSpeed = Parms.WindSpeed;

	if (WindDirection != nullptr)
		*WindDirection = std::move(Parms.WindDirection);

}


// Function TimeofDay_Weather.TimeofDay_Weather_C.Vault Override Cache
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Cached_Vault_Override                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Vault_Override           CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Weather_C::Vault_Override_Cache(int32* Cached_Vault_Override, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, const struct FS_Vault_Override& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Weather_C", "Vault Override Cache");

	Params::UTimeofDay_Weather_C_Vault_Override_Cache_Params Parms{};

	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Cached_Vault_Override != nullptr)
		*Cached_Vault_Override = Parms.Cached_Vault_Override;

}


// Function TimeofDay_Weather.TimeofDay_Weather_C.Fog Cache
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<double>                     Fog_Density_Array_Day                                            (Edit, BlueprintVisible)
// TArray<double>                     Fog_Density_Array_Night                                          (Edit, BlueprintVisible)
// TArray<double>                     Fog_Density_Array_DawnDusk                                       (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Color_Saturation_Low                                             (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Color_Saturation_Med                                             (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Color_Saturation_High                                            (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Color_Saturation_Sky_Lum                                         (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Color_Saturation_Main_Celestial                                  (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Color_Saturation_Array                                           (Edit, BlueprintVisible)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_1                      (ReferenceParm)
// struct FS_Fog_Day                  CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Fog_Day                  CallFunc_GetDataTableRowFromName_OutRow_1                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_2                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_3                      (ReferenceParm)
// struct FS_Fog_Day                  CallFunc_GetDataTableRowFromName_OutRow_2                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_6                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Fog_Day                  CallFunc_GetDataTableRowFromName_OutRow_3                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_7                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_8                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FLinearColor>        K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<struct FLinearColor>        K2Node_MakeArray_Array_1                                         (ReferenceParm)
// double                             CallFunc_Array_Get_Item_9                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FLinearColor>        K2Node_MakeArray_Array_2                                         (ReferenceParm)
// TArray<struct FLinearColor>        K2Node_MakeArray_Array_3                                         (ReferenceParm)
// double                             CallFunc_Array_Get_Item_10                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FLinearColor>        K2Node_MakeArray_Array_4                                         (ReferenceParm)
// TArray<double>                     K2Node_MakeArray_Array_5                                         (ReferenceParm)
// TArray<double>                     K2Node_MakeArray_Array_6                                         (ReferenceParm)
// double                             CallFunc_Array_Get_Item_11                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_12                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<double>                     K2Node_MakeArray_Array_7                                         (ReferenceParm)
// double                             CallFunc_Array_Get_Item_13                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_14                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_15                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_16                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_4                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_17                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Color_Table_Master       CallFunc_GetDataTableRowFromName_OutRow_4                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_5                      (ReferenceParm)
// class UDataTable*                  CallFunc_Array_Get_Item_18                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_6                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_19                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Color_Master             CallFunc_GetDataTableRowFromName_OutRow_5                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_5                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_20                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_21                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_22                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Color_Saturations        CallFunc_GetDataTableRowFromName_OutRow_6                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_6                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_23                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Weather_C::Fog_Cache(const TArray<double>& Fog_Density_Array_Day, const TArray<double>& Fog_Density_Array_Night, const TArray<double>& Fog_Density_Array_DawnDusk, const TArray<struct FLinearColor>& Color_Saturation_Low, const TArray<struct FLinearColor>& Color_Saturation_Med, const TArray<struct FLinearColor>& Color_Saturation_High, const TArray<struct FLinearColor>& Color_Saturation_Sky_Lum, const TArray<struct FLinearColor>& Color_Saturation_Main_Celestial, const TArray<struct FLinearColor>& Color_Saturation_Array, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_1, const struct FS_Fog_Day& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class FName CallFunc_Array_Get_Item_1, const struct FS_Fog_Day& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, double CallFunc_Array_Get_Item_2, double CallFunc_Array_Get_Item_3, double CallFunc_Array_Get_Item_4, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_2, class FName CallFunc_Array_Get_Item_5, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_3, const struct FS_Fog_Day& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, class FName CallFunc_Array_Get_Item_6, const struct FS_Fog_Day& CallFunc_GetDataTableRowFromName_OutRow_3, bool CallFunc_GetDataTableRowFromName_ReturnValue_3, double CallFunc_Array_Get_Item_7, double CallFunc_Array_Get_Item_8, TArray<struct FLinearColor>& K2Node_MakeArray_Array, TArray<struct FLinearColor>& K2Node_MakeArray_Array_1, double CallFunc_Array_Get_Item_9, TArray<struct FLinearColor>& K2Node_MakeArray_Array_2, TArray<struct FLinearColor>& K2Node_MakeArray_Array_3, double CallFunc_Array_Get_Item_10, TArray<struct FLinearColor>& K2Node_MakeArray_Array_4, TArray<double>& K2Node_MakeArray_Array_5, TArray<double>& K2Node_MakeArray_Array_6, double CallFunc_Array_Get_Item_11, double CallFunc_Array_Get_Item_12, TArray<double>& K2Node_MakeArray_Array_7, double CallFunc_Array_Get_Item_13, double CallFunc_Array_Get_Item_14, double CallFunc_Array_Get_Item_15, double CallFunc_Array_Get_Item_16, double CallFunc_Multiply_DoubleDouble_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_4, class FName CallFunc_Array_Get_Item_17, const struct FS_Color_Table_Master& CallFunc_GetDataTableRowFromName_OutRow_4, bool CallFunc_GetDataTableRowFromName_ReturnValue_4, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_5, class UDataTable* CallFunc_Array_Get_Item_18, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_6, class FName CallFunc_Array_Get_Item_19, const struct FS_Color_Master& CallFunc_GetDataTableRowFromName_OutRow_5, bool CallFunc_GetDataTableRowFromName_ReturnValue_5, const struct FLinearColor& CallFunc_Array_Get_Item_20, class FName CallFunc_Array_Get_Item_21, const struct FLinearColor& CallFunc_Array_Get_Item_22, const struct FS_Color_Saturations& CallFunc_GetDataTableRowFromName_OutRow_6, bool CallFunc_GetDataTableRowFromName_ReturnValue_6, const struct FLinearColor& CallFunc_Array_Get_Item_23, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Weather_C", "Fog Cache");

	Params::UTimeofDay_Weather_C_Fog_Cache_Params Parms{};

	Parms.Fog_Density_Array_Day = Fog_Density_Array_Day;
	Parms.Fog_Density_Array_Night = Fog_Density_Array_Night;
	Parms.Fog_Density_Array_DawnDusk = Fog_Density_Array_DawnDusk;
	Parms.Color_Saturation_Low = Color_Saturation_Low;
	Parms.Color_Saturation_Med = Color_Saturation_Med;
	Parms.Color_Saturation_High = Color_Saturation_High;
	Parms.Color_Saturation_Sky_Lum = Color_Saturation_Sky_Lum;
	Parms.Color_Saturation_Main_Celestial = Color_Saturation_Main_Celestial;
	Parms.Color_Saturation_Array = Color_Saturation_Array;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_1 = CallFunc_GetDataTableRowNames_OutRowNames_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_2 = CallFunc_GetDataTableRowNames_OutRowNames_2;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_3 = CallFunc_GetDataTableRowNames_OutRowNames_3;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_2 = CallFunc_GetDataTableRowFromName_OutRow_2;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_2 = CallFunc_GetDataTableRowFromName_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_3 = CallFunc_GetDataTableRowFromName_OutRow_3;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_3 = CallFunc_GetDataTableRowFromName_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_Array_Get_Item_8 = CallFunc_Array_Get_Item_8;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Array_Get_Item_9 = CallFunc_Array_Get_Item_9;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_Array_Get_Item_10 = CallFunc_Array_Get_Item_10;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.K2Node_MakeArray_Array_5 = K2Node_MakeArray_Array_5;
	Parms.K2Node_MakeArray_Array_6 = K2Node_MakeArray_Array_6;
	Parms.CallFunc_Array_Get_Item_11 = CallFunc_Array_Get_Item_11;
	Parms.CallFunc_Array_Get_Item_12 = CallFunc_Array_Get_Item_12;
	Parms.K2Node_MakeArray_Array_7 = K2Node_MakeArray_Array_7;
	Parms.CallFunc_Array_Get_Item_13 = CallFunc_Array_Get_Item_13;
	Parms.CallFunc_Array_Get_Item_14 = CallFunc_Array_Get_Item_14;
	Parms.CallFunc_Array_Get_Item_15 = CallFunc_Array_Get_Item_15;
	Parms.CallFunc_Array_Get_Item_16 = CallFunc_Array_Get_Item_16;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_4 = CallFunc_GetDataTableRowNames_OutRowNames_4;
	Parms.CallFunc_Array_Get_Item_17 = CallFunc_Array_Get_Item_17;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_4 = CallFunc_GetDataTableRowFromName_OutRow_4;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_4 = CallFunc_GetDataTableRowFromName_ReturnValue_4;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_5 = CallFunc_GetDataTableRowNames_OutRowNames_5;
	Parms.CallFunc_Array_Get_Item_18 = CallFunc_Array_Get_Item_18;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_6 = CallFunc_GetDataTableRowNames_OutRowNames_6;
	Parms.CallFunc_Array_Get_Item_19 = CallFunc_Array_Get_Item_19;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_5 = CallFunc_GetDataTableRowFromName_OutRow_5;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_5 = CallFunc_GetDataTableRowFromName_ReturnValue_5;
	Parms.CallFunc_Array_Get_Item_20 = CallFunc_Array_Get_Item_20;
	Parms.CallFunc_Array_Get_Item_21 = CallFunc_Array_Get_Item_21;
	Parms.CallFunc_Array_Get_Item_22 = CallFunc_Array_Get_Item_22;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_6 = CallFunc_GetDataTableRowFromName_OutRow_6;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_6 = CallFunc_GetDataTableRowFromName_ReturnValue_6;
	Parms.CallFunc_Array_Get_Item_23 = CallFunc_Array_Get_Item_23;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TimeofDay_Weather.TimeofDay_Weather_C.Volumetric Cloud Layer Scale
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Distance_Between_Layers                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Two_Layers                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Layer_Scale                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Weather_C::Volumetric_Cloud_Layer_Scale(double Distance_Between_Layers, bool Two_Layers, double* Layer_Scale, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Weather_C", "Volumetric Cloud Layer Scale");

	Params::UTimeofDay_Weather_C_Volumetric_Cloud_Layer_Scale_Params Parms{};

	Parms.Distance_Between_Layers = Distance_Between_Layers;
	Parms.Two_Layers = Two_Layers;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Layer_Scale != nullptr)
		*Layer_Scale = Parms.Layer_Scale;

}


// Function TimeofDay_Weather.TimeofDay_Weather_C.Current Volumetric Cloud Macro Variation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Macro_Variation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UTimeofDay_Weather_C::Current_Volumetric_Cloud_Macro_Variation(double Macro_Variation, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Weather_C", "Current Volumetric Cloud Macro Variation");

	Params::UTimeofDay_Weather_C_Current_Volumetric_Cloud_Macro_Variation_Params Parms{};

	Parms.Macro_Variation = Macro_Variation;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TimeofDay_Weather.TimeofDay_Weather_C.Volumetric Clouds Top Bottom Distribution
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Out                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Weather_C::Volumetric_Clouds_Top_Bottom_Distribution(double* Out, double CallFunc_SelectFloat_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Weather_C", "Volumetric Clouds Top Bottom Distribution");

	Params::UTimeofDay_Weather_C_Volumetric_Clouds_Top_Bottom_Distribution_Params Parms{};

	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Out != nullptr)
		*Out = Parms.Out;

}


// Function TimeofDay_Weather.TimeofDay_Weather_C.Volumetric Cloud Floor Variation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Base_Floor_Variation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Overcast_Floor_Variation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Height                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Color                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Ease_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Weather_C::Volumetric_Cloud_Floor_Variation(double Base_Floor_Variation, double Overcast_Floor_Variation, double* Height, double* Color, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Abs_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, double CallFunc_Ease_ReturnValue, double CallFunc_Lerp_ReturnValue, double CallFunc_Lerp_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Weather_C", "Volumetric Cloud Floor Variation");

	Params::UTimeofDay_Weather_C_Volumetric_Cloud_Floor_Variation_Params Parms{};

	Parms.Base_Floor_Variation = Base_Floor_Variation;
	Parms.Overcast_Floor_Variation = Overcast_Floor_Variation;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_Ease_ReturnValue = CallFunc_Ease_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Height != nullptr)
		*Height = Parms.Height;

	if (Color != nullptr)
		*Color = Parms.Color;

}


// Function TimeofDay_Weather.TimeofDay_Weather_C.Current Volumetric Cloud Subnoise Amount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             SubNoise_Erosion                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Erosion                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Weather_C::Current_Volumetric_Cloud_Subnoise_Amount(double SubNoise_Erosion, double* Erosion, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Weather_C", "Current Volumetric Cloud Subnoise Amount");

	Params::UTimeofDay_Weather_C_Current_Volumetric_Cloud_Subnoise_Amount_Params Parms{};

	Parms.SubNoise_Erosion = SubNoise_Erosion;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Erosion != nullptr)
		*Erosion = Parms.Erosion;

}


// Function TimeofDay_Weather.TimeofDay_Weather_C.Current Volumetric Cloud Taper Position
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Taper                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Weather_C::Current_Volumetric_Cloud_Taper_Position(double* Taper, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Weather_C", "Current Volumetric Cloud Taper Position");

	Params::UTimeofDay_Weather_C_Current_Volumetric_Cloud_Taper_Position_Params Parms{};

	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Taper != nullptr)
		*Taper = Parms.Taper;

}


// Function TimeofDay_Weather.TimeofDay_Weather_C.Get Current Volumetric Cloud Extinction Scales
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Top_Input                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Bottom_Input                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Volumetric_Clouds_Scale                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Top                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Bottom                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Weather_C::Get_Current_Volumetric_Cloud_Extinction_Scales(double Top_Input, double Bottom_Input, double Volumetric_Clouds_Scale, double* Top, double* Bottom, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Weather_C", "Get Current Volumetric Cloud Extinction Scales");

	Params::UTimeofDay_Weather_C_Get_Current_Volumetric_Cloud_Extinction_Scales_Params Parms{};

	Parms.Top_Input = Top_Input;
	Parms.Bottom_Input = Bottom_Input;
	Parms.Volumetric_Clouds_Scale = Volumetric_Clouds_Scale;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Top != nullptr)
		*Top = Parms.Top;

	if (Bottom != nullptr)
		*Bottom = Parms.Bottom;

}


// Function TimeofDay_Weather.TimeofDay_Weather_C.Volumetric Cloud Layer Height
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Distance_Between_Layers                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Two_Layers                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Layer_Height                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Weather_C::Volumetric_Cloud_Layer_Height(double Distance_Between_Layers, bool Two_Layers, double* Layer_Height, double CallFunc_SelectFloat_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Weather_C", "Volumetric Cloud Layer Height");

	Params::UTimeofDay_Weather_C_Volumetric_Cloud_Layer_Height_Params Parms{};

	Parms.Distance_Between_Layers = Distance_Between_Layers;
	Parms.Two_Layers = Two_Layers;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Layer_Height != nullptr)
		*Layer_Height = Parms.Layer_Height;

}


// Function TimeofDay_Weather.TimeofDay_Weather_C.Volumetric Cloud Base Cloud Height
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Volumetric_Clouds_Scale                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Base_Cloud_Height                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Weather_C::Volumetric_Cloud_Base_Cloud_Height(double Volumetric_Clouds_Scale, double* Base_Cloud_Height, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, double CallFunc_FClamp_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Weather_C", "Volumetric Cloud Base Cloud Height");

	Params::UTimeofDay_Weather_C_Volumetric_Cloud_Base_Cloud_Height_Params Parms{};

	Parms.Volumetric_Clouds_Scale = Volumetric_Clouds_Scale;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Base_Cloud_Height != nullptr)
		*Base_Cloud_Height = Parms.Base_Cloud_Height;

}


// Function TimeofDay_Weather.TimeofDay_Weather_C.Current View Sample Scale
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Cloud_Coverage                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Two_Layers                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Out                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Scale_Sample_Count_out                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Weather_C::Current_View_Sample_Scale(double Cloud_Coverage, bool Two_Layers, double* Out, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Scale_Sample_Count_out)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Weather_C", "Current View Sample Scale");

	Params::UTimeofDay_Weather_C_Current_View_Sample_Scale_Params Parms{};

	Parms.Cloud_Coverage = Cloud_Coverage;
	Parms.Two_Layers = Two_Layers;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Scale_Sample_Count_out = CallFunc_Scale_Sample_Count_out;

	UObject::ProcessEvent(Func, &Parms);

	if (Out != nullptr)
		*Out = Parms.Out;

}


// Function TimeofDay_Weather.TimeofDay_Weather_C.Current Volumetric Cloud Multiscattering Occlusion
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Multiscattering_Occlusion_Factor                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Occlusion                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Weather_C::Current_Volumetric_Cloud_Multiscattering_Occlusion(double Multiscattering_Occlusion_Factor, double* Occlusion, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Weather_C", "Current Volumetric Cloud Multiscattering Occlusion");

	Params::UTimeofDay_Weather_C_Current_Volumetric_Cloud_Multiscattering_Occlusion_Params Parms{};

	Parms.Multiscattering_Occlusion_Factor = Multiscattering_Occlusion_Factor;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Occlusion != nullptr)
		*Occlusion = Parms.Occlusion;

}


// Function TimeofDay_Weather.TimeofDay_Weather_C.Current Volumetric Cloud Shadow Tracing Distance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Volumetric_Cloud_Scale                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Shadow_Tracing_Distance                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Out                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Weather_C::Current_Volumetric_Cloud_Shadow_Tracing_Distance(double Volumetric_Cloud_Scale, double Shadow_Tracing_Distance, double* Out, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Weather_C", "Current Volumetric Cloud Shadow Tracing Distance");

	Params::UTimeofDay_Weather_C_Current_Volumetric_Cloud_Shadow_Tracing_Distance_Params Parms{};

	Parms.Volumetric_Cloud_Scale = Volumetric_Cloud_Scale;
	Parms.Shadow_Tracing_Distance = Shadow_Tracing_Distance;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Out != nullptr)
		*Out = Parms.Out;

}


// Function TimeofDay_Weather.TimeofDay_Weather_C.Current Lerp to Simplified Clouds
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             ALPHA                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Weather_C::Current_Lerp_to_Simplified_Clouds(double* ALPHA, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue, double CallFunc_FClamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Weather_C", "Current Lerp to Simplified Clouds");

	Params::UTimeofDay_Weather_C_Current_Lerp_to_Simplified_Clouds_Params Parms{};

	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ALPHA != nullptr)
		*ALPHA = Parms.ALPHA;

}


// Function TimeofDay_Weather.TimeofDay_Weather_C.Current Z Disturbance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Out                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Current_Lerp_to_Simplified_Clouds_Alpha                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Weather_C::Current_Z_Disturbance(double* Out, double CallFunc_Current_Lerp_to_Simplified_Clouds_Alpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Weather_C", "Current Z Disturbance");

	Params::UTimeofDay_Weather_C_Current_Z_Disturbance_Params Parms{};

	Parms.CallFunc_Current_Lerp_to_Simplified_Clouds_Alpha = CallFunc_Current_Lerp_to_Simplified_Clouds_Alpha;

	UObject::ProcessEvent(Func, &Parms);

	if (Out != nullptr)
		*Out = Parms.Out;

}


// Function TimeofDay_Weather.TimeofDay_Weather_C.Volumetric Clouds SubNoise Scales
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Volume_Cloud_Scale                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             ThreeD_Noise_Scale                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                High                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Low                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Medium                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Weather_C::Volumetric_Clouds_SubNoise_Scales(double Volume_Cloud_Scale, double ThreeD_Noise_Scale, struct FLinearColor* High, struct FLinearColor* Low, struct FLinearColor* Medium, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_1, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Weather_C", "Volumetric Clouds SubNoise Scales");

	Params::UTimeofDay_Weather_C_Volumetric_Clouds_SubNoise_Scales_Params Parms{};

	Parms.Volume_Cloud_Scale = Volume_Cloud_Scale;
	Parms.ThreeD_Noise_Scale = ThreeD_Noise_Scale;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue_1 = CallFunc_Conv_VectorToLinearColor_ReturnValue_1;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue_2 = CallFunc_Conv_VectorToLinearColor_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (High != nullptr)
		*High = std::move(Parms.High);

	if (Low != nullptr)
		*Low = std::move(Parms.Low);

	if (Medium != nullptr)
		*Medium = std::move(Parms.Medium);

}


// Function TimeofDay_Weather.TimeofDay_Weather_C.Scale Sample Count
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             In                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Out                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRenderingMaterialQualityLevel_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Weather_C::Scale_Sample_Count(double In, double* Out, int32 Temp_int_Variable, double Temp_real_Variable, int32 CallFunc_GetRenderingMaterialQualityLevel_ReturnValue, double K2Node_Select_Default, double CallFunc_Multiply_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Weather_C", "Scale Sample Count");

	Params::UTimeofDay_Weather_C_Scale_Sample_Count_Params Parms{};

	Parms.In = In;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.CallFunc_GetRenderingMaterialQualityLevel_ReturnValue = CallFunc_GetRenderingMaterialQualityLevel_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Out != nullptr)
		*Out = Parms.Out;

}


// Function TimeofDay_Weather.TimeofDay_Weather_C.Apply Volumetric Mode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EVolRT_Mode             Mode                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Weather_C::Apply_Volumetric_Mode(enum class EVolRT_Mode Mode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Weather_C", "Apply Volumetric Mode");

	Params::UTimeofDay_Weather_C_Apply_Volumetric_Mode_Params Parms{};

	Parms.Mode = Mode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TimeofDay_Weather.TimeofDay_Weather_C.Current Base Cloud Scale
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Base_Clouds_Scale                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Volume_Clouds_Scale                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UTimeofDay_Weather_C::Current_Base_Cloud_Scale(double Base_Clouds_Scale, double Volume_Clouds_Scale, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Weather_C", "Current Base Cloud Scale");

	Params::UTimeofDay_Weather_C_Current_Base_Cloud_Scale_Params Parms{};

	Parms.Base_Clouds_Scale = Base_Clouds_Scale;
	Parms.Volume_Clouds_Scale = Volume_Clouds_Scale;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TimeofDay_Weather.TimeofDay_Weather_C.OnRep_Fog_Height - Inherit
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTimeofDay_Weather_C::OnRep_Fog_Height_Minus_Inherit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Weather_C", "OnRep_Fog_Height - Inherit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TimeofDay_Weather.TimeofDay_Weather_C.OnRep_Fog_Density - Inherit
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTimeofDay_Weather_C::OnRep_Fog_Density_Minus_Inherit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Weather_C", "OnRep_Fog_Density - Inherit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TimeofDay_Weather.TimeofDay_Weather_C.SetTimes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Adjusted_Time                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             ActualTime                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Weather_C::SetTimes(double Adjusted_Time, double ActualTime, double CallFunc_Multiply_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Weather_C", "SetTimes");

	Params::UTimeofDay_Weather_C_SetTimes_Params Parms{};

	Parms.Adjusted_Time = Adjusted_Time;
	Parms.ActualTime = ActualTime;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TimeofDay_Weather.TimeofDay_Weather_C.WindModulation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             AdjustedTime24h                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             ActualTime                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             WindDelta                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             RealmWindSpeed                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     RealmWindDirection                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             DynamicWindSpeed                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     DynamicWindDirection                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_MakePerlinNoiseAndRemap_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_MakePerlinNoiseAndRemap_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_VectorToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_6                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_MakePerlinNoiseAndRemap_RangeOutMax_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_MakePerlinNoiseAndRemap_RangeOutMax_ImplicitCast_1   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_MakePerlinNoiseAndRemap_RangeOutMin_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_MakePerlinNoiseAndRemap_RangeOutMin_ImplicitCast_1   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_MakePerlinNoiseAndRemap_Value_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_MakePerlinNoiseAndRemap_Value_ImplicitCast_1         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_VectorFloat_B_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Weather_C::WindModulation(double AdjustedTime24h, double ActualTime, double WindDelta, double RealmWindSpeed, const struct FVector& RealmWindDirection, double* DynamicWindSpeed, struct FVector* DynamicWindDirection, const struct FVector& CallFunc_Normal_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, double CallFunc_Multiply_DoubleDouble_ReturnValue_5, float CallFunc_K2_MakePerlinNoiseAndRemap_ReturnValue, float CallFunc_K2_MakePerlinNoiseAndRemap_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue_1, float CallFunc_GetFloatValue_ReturnValue, const class FString& CallFunc_Conv_VectorToString_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_6, double CallFunc_FClamp_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, float CallFunc_GetFloatValue_InTime_ImplicitCast, float CallFunc_K2_MakePerlinNoiseAndRemap_RangeOutMax_ImplicitCast, float CallFunc_K2_MakePerlinNoiseAndRemap_RangeOutMax_ImplicitCast_1, float CallFunc_K2_MakePerlinNoiseAndRemap_RangeOutMin_ImplicitCast, float CallFunc_K2_MakePerlinNoiseAndRemap_RangeOutMin_ImplicitCast_1, float CallFunc_K2_MakePerlinNoiseAndRemap_Value_ImplicitCast, float CallFunc_K2_MakePerlinNoiseAndRemap_Value_ImplicitCast_1, double CallFunc_Multiply_VectorFloat_B_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Weather_C", "WindModulation");

	Params::UTimeofDay_Weather_C_WindModulation_Params Parms{};

	Parms.AdjustedTime24h = AdjustedTime24h;
	Parms.ActualTime = ActualTime;
	Parms.WindDelta = WindDelta;
	Parms.RealmWindSpeed = RealmWindSpeed;
	Parms.RealmWindDirection = RealmWindDirection;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_3 = CallFunc_Multiply_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_4 = CallFunc_Multiply_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_5 = CallFunc_Multiply_DoubleDouble_ReturnValue_5;
	Parms.CallFunc_K2_MakePerlinNoiseAndRemap_ReturnValue = CallFunc_K2_MakePerlinNoiseAndRemap_ReturnValue;
	Parms.CallFunc_K2_MakePerlinNoiseAndRemap_ReturnValue_1 = CallFunc_K2_MakePerlinNoiseAndRemap_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue_1 = CallFunc_Normal_ReturnValue_1;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_Conv_VectorToString_ReturnValue = CallFunc_Conv_VectorToString_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_6 = CallFunc_Multiply_DoubleDouble_ReturnValue_6;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue = CallFunc_Conv_DoubleToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast = CallFunc_GetFloatValue_InTime_ImplicitCast;
	Parms.CallFunc_K2_MakePerlinNoiseAndRemap_RangeOutMax_ImplicitCast = CallFunc_K2_MakePerlinNoiseAndRemap_RangeOutMax_ImplicitCast;
	Parms.CallFunc_K2_MakePerlinNoiseAndRemap_RangeOutMax_ImplicitCast_1 = CallFunc_K2_MakePerlinNoiseAndRemap_RangeOutMax_ImplicitCast_1;
	Parms.CallFunc_K2_MakePerlinNoiseAndRemap_RangeOutMin_ImplicitCast = CallFunc_K2_MakePerlinNoiseAndRemap_RangeOutMin_ImplicitCast;
	Parms.CallFunc_K2_MakePerlinNoiseAndRemap_RangeOutMin_ImplicitCast_1 = CallFunc_K2_MakePerlinNoiseAndRemap_RangeOutMin_ImplicitCast_1;
	Parms.CallFunc_K2_MakePerlinNoiseAndRemap_Value_ImplicitCast = CallFunc_K2_MakePerlinNoiseAndRemap_Value_ImplicitCast;
	Parms.CallFunc_K2_MakePerlinNoiseAndRemap_Value_ImplicitCast_1 = CallFunc_K2_MakePerlinNoiseAndRemap_Value_ImplicitCast_1;
	Parms.CallFunc_Multiply_VectorFloat_B_ImplicitCast = CallFunc_Multiply_VectorFloat_B_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (DynamicWindSpeed != nullptr)
		*DynamicWindSpeed = Parms.DynamicWindSpeed;

	if (DynamicWindDirection != nullptr)
		*DynamicWindDirection = std::move(Parms.DynamicWindDirection);

}


// Function TimeofDay_Weather.TimeofDay_Weather_C.Texture_Quality
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EnumTexturesQualityVC   NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Weather_C::Texture_Quality(enum class EnumTexturesQualityVC NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Weather_C", "Texture_Quality");

	Params::UTimeofDay_Weather_C_Texture_Quality_Params Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TimeofDay_Weather.TimeofDay_Weather_C.ShaderQuality
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EnumShadingQualityVC    Shading_Quality_Setting                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetViewSampleCountScale_NewValue_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetShadowViewSampleCountScale_NewValue_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetReflectionViewSampleCountScale_NewValue_ImplicitCast (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetShadowReflectionViewSampleCountScale_NewValue_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetShadowTracingDistance_NewValue_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Weather_C::ShaderQuality(enum class EnumShadingQualityVC Shading_Quality_Setting, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_SetViewSampleCountScale_NewValue_ImplicitCast, float CallFunc_SetShadowViewSampleCountScale_NewValue_ImplicitCast, float CallFunc_SetReflectionViewSampleCountScale_NewValue_ImplicitCast, float CallFunc_SetShadowReflectionViewSampleCountScale_NewValue_ImplicitCast, float CallFunc_SetShadowTracingDistance_NewValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Weather_C", "ShaderQuality");

	Params::UTimeofDay_Weather_C_ShaderQuality_Params Parms{};

	Parms.Shading_Quality_Setting = Shading_Quality_Setting;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_SetViewSampleCountScale_NewValue_ImplicitCast = CallFunc_SetViewSampleCountScale_NewValue_ImplicitCast;
	Parms.CallFunc_SetShadowViewSampleCountScale_NewValue_ImplicitCast = CallFunc_SetShadowViewSampleCountScale_NewValue_ImplicitCast;
	Parms.CallFunc_SetReflectionViewSampleCountScale_NewValue_ImplicitCast = CallFunc_SetReflectionViewSampleCountScale_NewValue_ImplicitCast;
	Parms.CallFunc_SetShadowReflectionViewSampleCountScale_NewValue_ImplicitCast = CallFunc_SetShadowReflectionViewSampleCountScale_NewValue_ImplicitCast;
	Parms.CallFunc_SetShadowTracingDistance_NewValue_ImplicitCast = CallFunc_SetShadowTracingDistance_NewValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TimeofDay_Weather.TimeofDay_Weather_C.Fog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<double>                     Fog_Density_Array_Night                                          (Edit, BlueprintVisible)
// TArray<double>                     Fog_Density_Array_Day                                            (Edit, BlueprintVisible)
// TArray<double>                     Fog_Density_Array_DawnDusk                                       (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Color_Saturation_Main_Celestial_Cool                             (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Color_Saturation_Main_Celestial                                  (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Color_Saturation_Sky_Lum                                         (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Color_Saturation_DELETE                                          (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Color_Saturation_Array                                           (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Color_Saturation_High                                            (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Color_Saturation_Med                                             (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Color_Saturation_Low                                             (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Color_Saturation_V_Low                                           (Edit, BlueprintVisible)
// double                             Inscattering_Color                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UCurveLinearColor*>   Volumetric_Emissive                                              (Edit, BlueprintVisible)
// TArray<class UCurveLinearColor*>   Volumetric_saturation_array                                      (Edit, BlueprintVisible)
// TArray<class UCurveLinearColor*>   Volumetric_Color_Array_Full                                      (Edit, BlueprintVisible)
// TArray<class UCurveLinearColor*>   Volumetric_Color_Array_Sat                                       (Edit, BlueprintVisible)
// TArray<class UCurveLinearColor*>   Volumetric_Color_Array_Des                                       (Edit, BlueprintVisible)
// double                             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VE_Preset_Fog_Attributes_Fog_Scatter_Dist               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VE_Preset_Fog_Attributes_Fog_Extinction_Scale           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VE_Preset_Fog_Attributes_Fog_Distance                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VE_Preset_Fog_Attributes_Fog_Density                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VE_Preset_Fog_Attributes_Fog_Height_Falloff             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VE_Preset_Fog_Attributes_Fog_Max_Opacity                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_5                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_6                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_7                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_8                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_9                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_10                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_11                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_VE_Preset_Fog_Albedo_Fog_Albedo                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_12                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Color_Table_Master       CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  CallFunc_Array_Get_Item_13                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_1                      (ReferenceParm)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_14                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Color_Master             CallFunc_GetDataTableRowFromName_OutRow_1                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_15                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_16                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_17                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_6                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_7                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_18                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_8                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_9                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_19                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_20                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_6                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_7                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_10                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_21                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_22                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UCurveLinearColor*>   K2Node_MakeArray_Array                                           (ReferenceParm)
// float                              CallFunc_GetFloatValue_ReturnValue_8                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UCurveLinearColor*>   K2Node_MakeArray_Array_1                                         (ReferenceParm)
// double                             CallFunc_Lerp_ReturnValue_11                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UCurveLinearColor*>   K2Node_MakeArray_Array_2                                         (ReferenceParm)
// double                             CallFunc_Array_Get_Item_23                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_24                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UCurveLinearColor*>   K2Node_MakeArray_Array_3                                         (ReferenceParm)
// float                              CallFunc_GetFloatValue_ReturnValue_9                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_12                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_25                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_26                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FLinearColor>        K2Node_MakeArray_Array_4                                         (ReferenceParm)
// float                              CallFunc_GetFloatValue_ReturnValue_10                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_13                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FLinearColor>        K2Node_MakeArray_Array_5                                         (ReferenceParm)
// float                              CallFunc_GetFloatValue_ReturnValue_11                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FLinearColor>        K2Node_MakeArray_Array_6                                         (ReferenceParm)
// double                             CallFunc_Lerp_ReturnValue_14                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_12                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_13                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_27                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_15                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_28                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_16                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_14                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_15                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FLinearColor>        K2Node_MakeArray_Array_7                                         (ReferenceParm)
// TArray<struct FLinearColor>        K2Node_MakeArray_Array_8                                         (ReferenceParm)
// TArray<struct FLinearColor>        K2Node_MakeArray_Array_9                                         (ReferenceParm)
// TArray<struct FLinearColor>        K2Node_MakeArray_Array_10                                        (ReferenceParm)
// double                             CallFunc_Array_Get_Item_29                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_30                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_31                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_16                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_17                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_17                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FLinearColor>        K2Node_MakeArray_Array_11                                        (ReferenceParm)
// double                             CallFunc_Lerp_ReturnValue_18                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<double>                     K2Node_MakeArray_Array_12                                        (ReferenceParm)
// double                             CallFunc_Lerp_ReturnValue_19                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<double>                     K2Node_MakeArray_Array_13                                        (ReferenceParm)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_20                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_21                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<double>                     K2Node_MakeArray_Array_14                                        (ReferenceParm)
// struct FLinearColor                CallFunc_Array_Get_Item_32                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_33                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_18                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_19                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_34                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_35                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_36                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_20                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_21                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_37                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue_5                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_38                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_39                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_22                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_23                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_40                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_6                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_7                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue_6                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_41                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_42                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_24                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_25                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_43                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_8                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_7                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_9                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_9                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue_7                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_22                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_23                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_44                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_45                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_26                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_27                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_46                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_10                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_8                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_11                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_10                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue_8                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_47                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_48                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_28                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_29                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_49                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_12                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_9                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_13                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_11                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue_9                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_50                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_51                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_52                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_30                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_31                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_14                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_15                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_10                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_12                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue_10                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_53                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_54                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_32                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_33                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_55                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_16                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_11                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_17                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_13                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue_11                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_56                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_57                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_58                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_34                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_35                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_18                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_19                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_12                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_14                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue_12                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_59                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_60                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_36                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_37                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_61                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_20                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_13                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_21                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_15                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue_13                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_62                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_63                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_38                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_39                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_64                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_22                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_65                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_23                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue_14                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_66                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_40                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_41                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_67                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_24                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_14                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_25                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_16                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue_15                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_15                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_17                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_68                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_69                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_42                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_43                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_70                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_26                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_16                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_27                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_18                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue_16                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_19                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_71                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_72                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_73                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_44                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_45                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_28                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_29                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_17                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_20                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue_17                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_74                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_75                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_76                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_46                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_47                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_30                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_31                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_18                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_21                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue_18                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_19                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_22                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_77                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_78                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_79                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_48                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_49                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_32                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_24                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_33                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_25                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue_19                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_26                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_2                      (ReferenceParm)
// double                             CallFunc_Lerp_ReturnValue_27                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_80                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Color_Saturations        CallFunc_GetDataTableRowFromName_OutRow_2                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_23                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetVolumetricFogScatteringDistribution_NewValue_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFogMaxOpacity_Value_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFogHeightFalloff_Value_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFogDensity_Value_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetVolumetricFogDistance_NewValue_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetVolumetricFogExtinctionScale_NewValue_ImplicitCast   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetVolumetricFogDistance_NewValue_ImplicitCast_1        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetVolumetricFogExtinctionScale_NewValue_ImplicitCast_1 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_6                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_7                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFogMaxOpacity_Value_ImplicitCast_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_8                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFogHeightFalloff_Value_ImplicitCast_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_9                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetVolumetricFogExtinctionScale_NewValue_ImplicitCast_2 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_10                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetVolumetricFogDistance_NewValue_ImplicitCast_2        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_11                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_9                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetVolumetricFogScatteringDistribution_NewValue_ImplicitCast_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_12                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_13                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_10                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_11                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFogMaxOpacity_Value_ImplicitCast_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFogHeightFalloff_Value_ImplicitCast_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_14                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_15                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_12                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_13                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_16                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_14                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_17                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_15                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFogDensity_Value_ImplicitCast_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFogDensity_Value_ImplicitCast_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_18                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_19                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_20                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_21                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_22                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_23                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_24                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_25                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFogHeightFalloff_Value_ImplicitCast_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_26                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_27                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_28                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_29                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_30                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_31                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_32                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_33                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_34                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_35                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_36                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_37                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_38                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_39                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_40                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_41                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_42                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_43                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_44                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_45                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_46                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_47                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_48                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_49                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFogMaxOpacity_Value_ImplicitCast_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetVolumetricFogScatteringDistribution_NewValue_ImplicitCast_2(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Weather_C::Fog(const TArray<double>& Fog_Density_Array_Night, const TArray<double>& Fog_Density_Array_Day, const TArray<double>& Fog_Density_Array_DawnDusk, const TArray<struct FLinearColor>& Color_Saturation_Main_Celestial_Cool, const TArray<struct FLinearColor>& Color_Saturation_Main_Celestial, const TArray<struct FLinearColor>& Color_Saturation_Sky_Lum, const TArray<struct FLinearColor>& Color_Saturation_DELETE, const TArray<struct FLinearColor>& Color_Saturation_Array, const TArray<struct FLinearColor>& Color_Saturation_High, const TArray<struct FLinearColor>& Color_Saturation_Med, const TArray<struct FLinearColor>& Color_Saturation_Low, const TArray<struct FLinearColor>& Color_Saturation_V_Low, double Inscattering_Color, const TArray<class UCurveLinearColor*>& Volumetric_Emissive, const TArray<class UCurveLinearColor*>& Volumetric_saturation_array, const TArray<class UCurveLinearColor*>& Volumetric_Color_Array_Full, const TArray<class UCurveLinearColor*>& Volumetric_Color_Array_Sat, const TArray<class UCurveLinearColor*>& Volumetric_Color_Array_Des, double CallFunc_Array_Get_Item, double CallFunc_Lerp_ReturnValue, double CallFunc_Array_Get_Item_1, double CallFunc_Array_Get_Item_2, double CallFunc_Lerp_ReturnValue_1, double CallFunc_Lerp_ReturnValue_2, double CallFunc_Array_Get_Item_3, double CallFunc_Array_Get_Item_4, double CallFunc_Lerp_ReturnValue_3, double CallFunc_Lerp_ReturnValue_4, double CallFunc_VE_Preset_Fog_Attributes_Fog_Scatter_Dist, double CallFunc_VE_Preset_Fog_Attributes_Fog_Extinction_Scale, double CallFunc_VE_Preset_Fog_Attributes_Fog_Distance, double CallFunc_VE_Preset_Fog_Attributes_Fog_Density, double CallFunc_VE_Preset_Fog_Attributes_Fog_Height_Falloff, double CallFunc_VE_Preset_Fog_Attributes_Fog_Max_Opacity, double CallFunc_Array_Get_Item_5, double CallFunc_Lerp_ReturnValue_5, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, double CallFunc_Array_Get_Item_6, double CallFunc_Array_Get_Item_7, double CallFunc_Array_Get_Item_8, bool K2Node_SwitchInteger_CmpSuccess_1, double CallFunc_Array_Get_Item_9, double CallFunc_Array_Get_Item_10, double CallFunc_Array_Get_Item_11, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue_1, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue_2, const struct FLinearColor& CallFunc_VE_Preset_Fog_Albedo_Fog_Albedo, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item_12, float CallFunc_GetFloatValue_ReturnValue, const struct FS_Color_Table_Master& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess_2, class UDataTable* CallFunc_Array_Get_Item_13, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_1, int32 CallFunc_Conv_BoolToInt_ReturnValue_1, class FName CallFunc_Array_Get_Item_14, bool K2Node_SwitchInteger_CmpSuccess_3, const struct FS_Color_Master& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, double CallFunc_Array_Get_Item_15, double CallFunc_Array_Get_Item_16, float CallFunc_GetFloatValue_ReturnValue_1, float CallFunc_GetFloatValue_ReturnValue_2, double CallFunc_Array_Get_Item_17, double CallFunc_Lerp_ReturnValue_6, double CallFunc_Lerp_ReturnValue_7, float CallFunc_GetFloatValue_ReturnValue_3, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, double CallFunc_Array_Get_Item_18, float CallFunc_GetFloatValue_ReturnValue_4, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_1, double CallFunc_Lerp_ReturnValue_8, double CallFunc_Lerp_ReturnValue_9, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue_3, float CallFunc_GetFloatValue_ReturnValue_5, double CallFunc_Array_Get_Item_19, double CallFunc_Array_Get_Item_20, float CallFunc_GetFloatValue_ReturnValue_6, float CallFunc_GetFloatValue_ReturnValue_7, double CallFunc_Lerp_ReturnValue_10, double CallFunc_Array_Get_Item_21, double CallFunc_Array_Get_Item_22, TArray<class UCurveLinearColor*>& K2Node_MakeArray_Array, float CallFunc_GetFloatValue_ReturnValue_8, TArray<class UCurveLinearColor*>& K2Node_MakeArray_Array_1, double CallFunc_Lerp_ReturnValue_11, TArray<class UCurveLinearColor*>& K2Node_MakeArray_Array_2, double CallFunc_Array_Get_Item_23, double CallFunc_Array_Get_Item_24, TArray<class UCurveLinearColor*>& K2Node_MakeArray_Array_3, float CallFunc_GetFloatValue_ReturnValue_9, double CallFunc_Lerp_ReturnValue_12, double CallFunc_Array_Get_Item_25, double CallFunc_Array_Get_Item_26, TArray<struct FLinearColor>& K2Node_MakeArray_Array_4, float CallFunc_GetFloatValue_ReturnValue_10, double CallFunc_Lerp_ReturnValue_13, TArray<struct FLinearColor>& K2Node_MakeArray_Array_5, float CallFunc_GetFloatValue_ReturnValue_11, TArray<struct FLinearColor>& K2Node_MakeArray_Array_6, double CallFunc_Lerp_ReturnValue_14, float CallFunc_GetFloatValue_ReturnValue_12, float CallFunc_GetFloatValue_ReturnValue_13, double CallFunc_Array_Get_Item_27, double CallFunc_Lerp_ReturnValue_15, double CallFunc_Array_Get_Item_28, double CallFunc_Lerp_ReturnValue_16, float CallFunc_GetFloatValue_ReturnValue_14, float CallFunc_GetFloatValue_ReturnValue_15, TArray<struct FLinearColor>& K2Node_MakeArray_Array_7, TArray<struct FLinearColor>& K2Node_MakeArray_Array_8, TArray<struct FLinearColor>& K2Node_MakeArray_Array_9, TArray<struct FLinearColor>& K2Node_MakeArray_Array_10, double CallFunc_Array_Get_Item_29, double CallFunc_Array_Get_Item_30, double CallFunc_Array_Get_Item_31, float CallFunc_GetFloatValue_ReturnValue_16, double CallFunc_Lerp_ReturnValue_17, float CallFunc_GetFloatValue_ReturnValue_17, TArray<struct FLinearColor>& K2Node_MakeArray_Array_11, double CallFunc_Lerp_ReturnValue_18, TArray<double>& K2Node_MakeArray_Array_12, double CallFunc_Lerp_ReturnValue_19, int32 CallFunc_Conv_BoolToInt_ReturnValue_2, bool K2Node_SwitchInteger_CmpSuccess_4, TArray<double>& K2Node_MakeArray_Array_13, int32 CallFunc_Conv_BoolToInt_ReturnValue_3, double CallFunc_Lerp_ReturnValue_20, bool K2Node_SwitchInteger_CmpSuccess_5, double CallFunc_Lerp_ReturnValue_21, TArray<double>& K2Node_MakeArray_Array_14, const struct FLinearColor& CallFunc_Array_Get_Item_32, const struct FLinearColor& CallFunc_Array_Get_Item_33, float CallFunc_GetFloatValue_ReturnValue_18, float CallFunc_GetFloatValue_ReturnValue_19, const struct FLinearColor& CallFunc_Array_Get_Item_34, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_2, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_3, const struct FLinearColor& CallFunc_Array_Get_Item_35, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue_4, const struct FLinearColor& CallFunc_Array_Get_Item_36, float CallFunc_GetFloatValue_ReturnValue_20, float CallFunc_GetFloatValue_ReturnValue_21, const struct FLinearColor& CallFunc_Array_Get_Item_37, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_4, int32 CallFunc_Conv_BoolToInt_ReturnValue_4, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_5, bool K2Node_SwitchInteger_CmpSuccess_6, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue_5, int32 CallFunc_Conv_BoolToInt_ReturnValue_5, bool K2Node_SwitchInteger_CmpSuccess_7, const struct FLinearColor& CallFunc_Array_Get_Item_38, const struct FLinearColor& CallFunc_Array_Get_Item_39, float CallFunc_GetFloatValue_ReturnValue_22, float CallFunc_GetFloatValue_ReturnValue_23, const struct FLinearColor& CallFunc_Array_Get_Item_40, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_6, int32 CallFunc_Conv_BoolToInt_ReturnValue_6, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_7, bool K2Node_SwitchInteger_CmpSuccess_8, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue_6, const struct FLinearColor& CallFunc_Array_Get_Item_41, const struct FLinearColor& CallFunc_Array_Get_Item_42, float CallFunc_GetFloatValue_ReturnValue_24, float CallFunc_GetFloatValue_ReturnValue_25, const struct FLinearColor& CallFunc_Array_Get_Item_43, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_8, int32 CallFunc_Conv_BoolToInt_ReturnValue_7, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_9, bool K2Node_SwitchInteger_CmpSuccess_9, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue_7, double CallFunc_Lerp_ReturnValue_22, double CallFunc_Lerp_ReturnValue_23, const struct FLinearColor& CallFunc_Array_Get_Item_44, const struct FLinearColor& CallFunc_Array_Get_Item_45, float CallFunc_GetFloatValue_ReturnValue_26, float CallFunc_GetFloatValue_ReturnValue_27, const struct FLinearColor& CallFunc_Array_Get_Item_46, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_10, int32 CallFunc_Conv_BoolToInt_ReturnValue_8, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_11, bool K2Node_SwitchInteger_CmpSuccess_10, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue_8, const struct FLinearColor& CallFunc_Array_Get_Item_47, const struct FLinearColor& CallFunc_Array_Get_Item_48, float CallFunc_GetFloatValue_ReturnValue_28, float CallFunc_GetFloatValue_ReturnValue_29, const struct FLinearColor& CallFunc_Array_Get_Item_49, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_12, int32 CallFunc_Conv_BoolToInt_ReturnValue_9, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_13, bool K2Node_SwitchInteger_CmpSuccess_11, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue_9, const struct FLinearColor& CallFunc_Array_Get_Item_50, const struct FLinearColor& CallFunc_Array_Get_Item_51, const struct FLinearColor& CallFunc_Array_Get_Item_52, float CallFunc_GetFloatValue_ReturnValue_30, float CallFunc_GetFloatValue_ReturnValue_31, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_14, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_15, int32 CallFunc_Conv_BoolToInt_ReturnValue_10, bool K2Node_SwitchInteger_CmpSuccess_12, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue_10, const struct FLinearColor& CallFunc_Array_Get_Item_53, const struct FLinearColor& CallFunc_Array_Get_Item_54, float CallFunc_GetFloatValue_ReturnValue_32, float CallFunc_GetFloatValue_ReturnValue_33, const struct FLinearColor& CallFunc_Array_Get_Item_55, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_16, int32 CallFunc_Conv_BoolToInt_ReturnValue_11, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_17, bool K2Node_SwitchInteger_CmpSuccess_13, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue_11, const struct FLinearColor& CallFunc_Array_Get_Item_56, const struct FLinearColor& CallFunc_Array_Get_Item_57, const struct FLinearColor& CallFunc_Array_Get_Item_58, float CallFunc_GetFloatValue_ReturnValue_34, float CallFunc_GetFloatValue_ReturnValue_35, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_18, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_19, int32 CallFunc_Conv_BoolToInt_ReturnValue_12, bool K2Node_SwitchInteger_CmpSuccess_14, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue_12, const struct FLinearColor& CallFunc_Array_Get_Item_59, const struct FLinearColor& CallFunc_Array_Get_Item_60, float CallFunc_GetFloatValue_ReturnValue_36, float CallFunc_GetFloatValue_ReturnValue_37, const struct FLinearColor& CallFunc_Array_Get_Item_61, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_20, int32 CallFunc_Conv_BoolToInt_ReturnValue_13, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_21, bool K2Node_SwitchInteger_CmpSuccess_15, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue_13, const struct FLinearColor& CallFunc_Array_Get_Item_62, const struct FLinearColor& CallFunc_Array_Get_Item_63, float CallFunc_GetFloatValue_ReturnValue_38, float CallFunc_GetFloatValue_ReturnValue_39, const struct FLinearColor& CallFunc_Array_Get_Item_64, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_22, const struct FLinearColor& CallFunc_Array_Get_Item_65, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_23, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue_14, const struct FLinearColor& CallFunc_Array_Get_Item_66, float CallFunc_GetFloatValue_ReturnValue_40, float CallFunc_GetFloatValue_ReturnValue_41, const struct FLinearColor& CallFunc_Array_Get_Item_67, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_24, int32 CallFunc_Conv_BoolToInt_ReturnValue_14, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_25, bool K2Node_SwitchInteger_CmpSuccess_16, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue_15, int32 CallFunc_Conv_BoolToInt_ReturnValue_15, bool K2Node_SwitchInteger_CmpSuccess_17, const struct FLinearColor& CallFunc_Array_Get_Item_68, const struct FLinearColor& CallFunc_Array_Get_Item_69, float CallFunc_GetFloatValue_ReturnValue_42, float CallFunc_GetFloatValue_ReturnValue_43, const struct FLinearColor& CallFunc_Array_Get_Item_70, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_26, int32 CallFunc_Conv_BoolToInt_ReturnValue_16, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_27, bool K2Node_SwitchInteger_CmpSuccess_18, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue_16, bool K2Node_SwitchInteger_CmpSuccess_19, const struct FLinearColor& CallFunc_Array_Get_Item_71, const struct FLinearColor& CallFunc_Array_Get_Item_72, const struct FLinearColor& CallFunc_Array_Get_Item_73, float CallFunc_GetFloatValue_ReturnValue_44, float CallFunc_GetFloatValue_ReturnValue_45, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_28, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_29, int32 CallFunc_Conv_BoolToInt_ReturnValue_17, bool K2Node_SwitchInteger_CmpSuccess_20, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue_17, const struct FLinearColor& CallFunc_Array_Get_Item_74, const struct FLinearColor& CallFunc_Array_Get_Item_75, const struct FLinearColor& CallFunc_Array_Get_Item_76, float CallFunc_GetFloatValue_ReturnValue_46, float CallFunc_GetFloatValue_ReturnValue_47, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_30, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_31, int32 CallFunc_Conv_BoolToInt_ReturnValue_18, bool K2Node_SwitchInteger_CmpSuccess_21, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue_18, int32 CallFunc_Conv_BoolToInt_ReturnValue_19, bool K2Node_SwitchInteger_CmpSuccess_22, const struct FLinearColor& CallFunc_Array_Get_Item_77, const struct FLinearColor& CallFunc_Array_Get_Item_78, const struct FLinearColor& CallFunc_Array_Get_Item_79, float CallFunc_GetFloatValue_ReturnValue_48, float CallFunc_GetFloatValue_ReturnValue_49, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_32, double CallFunc_Lerp_ReturnValue_24, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_33, double CallFunc_Lerp_ReturnValue_25, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue_19, double CallFunc_Lerp_ReturnValue_26, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_2, double CallFunc_Lerp_ReturnValue_27, class FName CallFunc_Array_Get_Item_80, const struct FS_Color_Saturations& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess_23, double CallFunc_Multiply_DoubleDouble_ReturnValue, float CallFunc_SetVolumetricFogScatteringDistribution_NewValue_ImplicitCast, float CallFunc_SetFogMaxOpacity_Value_ImplicitCast, float CallFunc_SetFogHeightFalloff_Value_ImplicitCast, float CallFunc_SetFogDensity_Value_ImplicitCast, float CallFunc_SetVolumetricFogDistance_NewValue_ImplicitCast, float CallFunc_SetVolumetricFogExtinctionScale_NewValue_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast_1, float CallFunc_GetFloatValue_InTime_ImplicitCast_2, double CallFunc_Lerp_Alpha_ImplicitCast, float CallFunc_SetVolumetricFogDistance_NewValue_ImplicitCast_1, float CallFunc_GetFloatValue_InTime_ImplicitCast_3, double CallFunc_Lerp_Alpha_ImplicitCast_1, float CallFunc_GetFloatValue_InTime_ImplicitCast_4, double CallFunc_Lerp_Alpha_ImplicitCast_2, float CallFunc_SetVolumetricFogExtinctionScale_NewValue_ImplicitCast_1, float CallFunc_GetFloatValue_InTime_ImplicitCast_5, double CallFunc_Lerp_Alpha_ImplicitCast_3, float CallFunc_GetFloatValue_InTime_ImplicitCast_6, float CallFunc_GetFloatValue_InTime_ImplicitCast_7, double CallFunc_Lerp_Alpha_ImplicitCast_4, double CallFunc_Lerp_Alpha_ImplicitCast_5, float CallFunc_SetFogMaxOpacity_Value_ImplicitCast_1, float CallFunc_GetFloatValue_InTime_ImplicitCast_8, double CallFunc_Lerp_Alpha_ImplicitCast_6, float CallFunc_SetFogHeightFalloff_Value_ImplicitCast_1, float CallFunc_GetFloatValue_InTime_ImplicitCast_9, double CallFunc_Lerp_Alpha_ImplicitCast_7, float CallFunc_SetVolumetricFogExtinctionScale_NewValue_ImplicitCast_2, float CallFunc_GetFloatValue_InTime_ImplicitCast_10, double CallFunc_Lerp_Alpha_ImplicitCast_8, float CallFunc_SetVolumetricFogDistance_NewValue_ImplicitCast_2, float CallFunc_GetFloatValue_InTime_ImplicitCast_11, double CallFunc_Lerp_Alpha_ImplicitCast_9, float CallFunc_SetVolumetricFogScatteringDistribution_NewValue_ImplicitCast_1, float CallFunc_GetFloatValue_InTime_ImplicitCast_12, float CallFunc_GetFloatValue_InTime_ImplicitCast_13, double CallFunc_Lerp_Alpha_ImplicitCast_10, double CallFunc_Lerp_Alpha_ImplicitCast_11, float CallFunc_SetFogMaxOpacity_Value_ImplicitCast_2, float CallFunc_SetFogHeightFalloff_Value_ImplicitCast_2, float CallFunc_GetFloatValue_InTime_ImplicitCast_14, float CallFunc_GetFloatValue_InTime_ImplicitCast_15, double CallFunc_Lerp_Alpha_ImplicitCast_12, double CallFunc_Lerp_Alpha_ImplicitCast_13, float CallFunc_GetFloatValue_InTime_ImplicitCast_16, double CallFunc_Lerp_Alpha_ImplicitCast_14, float CallFunc_GetFloatValue_InTime_ImplicitCast_17, double CallFunc_Lerp_Alpha_ImplicitCast_15, float CallFunc_SetFogDensity_Value_ImplicitCast_1, float CallFunc_SetFogDensity_Value_ImplicitCast_2, float CallFunc_GetFloatValue_InTime_ImplicitCast_18, float CallFunc_GetFloatValue_InTime_ImplicitCast_19, float CallFunc_GetFloatValue_InTime_ImplicitCast_20, float CallFunc_GetFloatValue_InTime_ImplicitCast_21, float CallFunc_GetFloatValue_InTime_ImplicitCast_22, float CallFunc_GetFloatValue_InTime_ImplicitCast_23, float CallFunc_GetFloatValue_InTime_ImplicitCast_24, float CallFunc_GetFloatValue_InTime_ImplicitCast_25, float CallFunc_SetFogHeightFalloff_Value_ImplicitCast_3, float CallFunc_GetFloatValue_InTime_ImplicitCast_26, float CallFunc_GetFloatValue_InTime_ImplicitCast_27, float CallFunc_GetFloatValue_InTime_ImplicitCast_28, float CallFunc_GetFloatValue_InTime_ImplicitCast_29, float CallFunc_GetFloatValue_InTime_ImplicitCast_30, float CallFunc_GetFloatValue_InTime_ImplicitCast_31, float CallFunc_GetFloatValue_InTime_ImplicitCast_32, float CallFunc_GetFloatValue_InTime_ImplicitCast_33, float CallFunc_GetFloatValue_InTime_ImplicitCast_34, float CallFunc_GetFloatValue_InTime_ImplicitCast_35, float CallFunc_GetFloatValue_InTime_ImplicitCast_36, float CallFunc_GetFloatValue_InTime_ImplicitCast_37, float CallFunc_GetFloatValue_InTime_ImplicitCast_38, float CallFunc_GetFloatValue_InTime_ImplicitCast_39, float CallFunc_GetFloatValue_InTime_ImplicitCast_40, float CallFunc_GetFloatValue_InTime_ImplicitCast_41, float CallFunc_GetFloatValue_InTime_ImplicitCast_42, float CallFunc_GetFloatValue_InTime_ImplicitCast_43, float CallFunc_GetFloatValue_InTime_ImplicitCast_44, float CallFunc_GetFloatValue_InTime_ImplicitCast_45, float CallFunc_GetFloatValue_InTime_ImplicitCast_46, float CallFunc_GetFloatValue_InTime_ImplicitCast_47, float CallFunc_GetFloatValue_InTime_ImplicitCast_48, float CallFunc_GetFloatValue_InTime_ImplicitCast_49, float CallFunc_SetFogMaxOpacity_Value_ImplicitCast_3, float CallFunc_SetVolumetricFogScatteringDistribution_NewValue_ImplicitCast_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Weather_C", "Fog");

	Params::UTimeofDay_Weather_C_Fog_Params Parms{};

	Parms.Fog_Density_Array_Night = Fog_Density_Array_Night;
	Parms.Fog_Density_Array_Day = Fog_Density_Array_Day;
	Parms.Fog_Density_Array_DawnDusk = Fog_Density_Array_DawnDusk;
	Parms.Color_Saturation_Main_Celestial_Cool = Color_Saturation_Main_Celestial_Cool;
	Parms.Color_Saturation_Main_Celestial = Color_Saturation_Main_Celestial;
	Parms.Color_Saturation_Sky_Lum = Color_Saturation_Sky_Lum;
	Parms.Color_Saturation_DELETE = Color_Saturation_DELETE;
	Parms.Color_Saturation_Array = Color_Saturation_Array;
	Parms.Color_Saturation_High = Color_Saturation_High;
	Parms.Color_Saturation_Med = Color_Saturation_Med;
	Parms.Color_Saturation_Low = Color_Saturation_Low;
	Parms.Color_Saturation_V_Low = Color_Saturation_V_Low;
	Parms.Inscattering_Color = Inscattering_Color;
	Parms.Volumetric_Emissive = Volumetric_Emissive;
	Parms.Volumetric_saturation_array = Volumetric_saturation_array;
	Parms.Volumetric_Color_Array_Full = Volumetric_Color_Array_Full;
	Parms.Volumetric_Color_Array_Sat = Volumetric_Color_Array_Sat;
	Parms.Volumetric_Color_Array_Des = Volumetric_Color_Array_Des;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Lerp_ReturnValue_3 = CallFunc_Lerp_ReturnValue_3;
	Parms.CallFunc_Lerp_ReturnValue_4 = CallFunc_Lerp_ReturnValue_4;
	Parms.CallFunc_VE_Preset_Fog_Attributes_Fog_Scatter_Dist = CallFunc_VE_Preset_Fog_Attributes_Fog_Scatter_Dist;
	Parms.CallFunc_VE_Preset_Fog_Attributes_Fog_Extinction_Scale = CallFunc_VE_Preset_Fog_Attributes_Fog_Extinction_Scale;
	Parms.CallFunc_VE_Preset_Fog_Attributes_Fog_Distance = CallFunc_VE_Preset_Fog_Attributes_Fog_Distance;
	Parms.CallFunc_VE_Preset_Fog_Attributes_Fog_Density = CallFunc_VE_Preset_Fog_Attributes_Fog_Density;
	Parms.CallFunc_VE_Preset_Fog_Attributes_Fog_Height_Falloff = CallFunc_VE_Preset_Fog_Attributes_Fog_Height_Falloff;
	Parms.CallFunc_VE_Preset_Fog_Attributes_Fog_Max_Opacity = CallFunc_VE_Preset_Fog_Attributes_Fog_Max_Opacity;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_Lerp_ReturnValue_5 = CallFunc_Lerp_ReturnValue_5;
	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue = CallFunc_Conv_LinearColorToColor_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_Array_Get_Item_8 = CallFunc_Array_Get_Item_8;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.CallFunc_Array_Get_Item_9 = CallFunc_Array_Get_Item_9;
	Parms.CallFunc_Array_Get_Item_10 = CallFunc_Array_Get_Item_10;
	Parms.CallFunc_Array_Get_Item_11 = CallFunc_Array_Get_Item_11;
	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue_1 = CallFunc_Conv_LinearColorToColor_ReturnValue_1;
	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue_2 = CallFunc_Conv_LinearColorToColor_ReturnValue_2;
	Parms.CallFunc_VE_Preset_Fog_Albedo_Fog_Albedo = CallFunc_VE_Preset_Fog_Albedo_Fog_Albedo;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Get_Item_12 = CallFunc_Array_Get_Item_12;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess_2 = K2Node_SwitchInteger_CmpSuccess_2;
	Parms.CallFunc_Array_Get_Item_13 = CallFunc_Array_Get_Item_13;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_1 = CallFunc_GetDataTableRowNames_OutRowNames_1;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_1 = CallFunc_Conv_BoolToInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_14 = CallFunc_Array_Get_Item_14;
	Parms.K2Node_SwitchInteger_CmpSuccess_3 = K2Node_SwitchInteger_CmpSuccess_3;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_15 = CallFunc_Array_Get_Item_15;
	Parms.CallFunc_Array_Get_Item_16 = CallFunc_Array_Get_Item_16;
	Parms.CallFunc_GetFloatValue_ReturnValue_1 = CallFunc_GetFloatValue_ReturnValue_1;
	Parms.CallFunc_GetFloatValue_ReturnValue_2 = CallFunc_GetFloatValue_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_17 = CallFunc_Array_Get_Item_17;
	Parms.CallFunc_Lerp_ReturnValue_6 = CallFunc_Lerp_ReturnValue_6;
	Parms.CallFunc_Lerp_ReturnValue_7 = CallFunc_Lerp_ReturnValue_7;
	Parms.CallFunc_GetFloatValue_ReturnValue_3 = CallFunc_GetFloatValue_ReturnValue_3;
	Parms.CallFunc_LinearColorLerp_ReturnValue = CallFunc_LinearColorLerp_ReturnValue;
	Parms.CallFunc_Array_Get_Item_18 = CallFunc_Array_Get_Item_18;
	Parms.CallFunc_GetFloatValue_ReturnValue_4 = CallFunc_GetFloatValue_ReturnValue_4;
	Parms.CallFunc_LinearColorLerp_ReturnValue_1 = CallFunc_LinearColorLerp_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_8 = CallFunc_Lerp_ReturnValue_8;
	Parms.CallFunc_Lerp_ReturnValue_9 = CallFunc_Lerp_ReturnValue_9;
	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue_3 = CallFunc_Conv_LinearColorToColor_ReturnValue_3;
	Parms.CallFunc_GetFloatValue_ReturnValue_5 = CallFunc_GetFloatValue_ReturnValue_5;
	Parms.CallFunc_Array_Get_Item_19 = CallFunc_Array_Get_Item_19;
	Parms.CallFunc_Array_Get_Item_20 = CallFunc_Array_Get_Item_20;
	Parms.CallFunc_GetFloatValue_ReturnValue_6 = CallFunc_GetFloatValue_ReturnValue_6;
	Parms.CallFunc_GetFloatValue_ReturnValue_7 = CallFunc_GetFloatValue_ReturnValue_7;
	Parms.CallFunc_Lerp_ReturnValue_10 = CallFunc_Lerp_ReturnValue_10;
	Parms.CallFunc_Array_Get_Item_21 = CallFunc_Array_Get_Item_21;
	Parms.CallFunc_Array_Get_Item_22 = CallFunc_Array_Get_Item_22;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetFloatValue_ReturnValue_8 = CallFunc_GetFloatValue_ReturnValue_8;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Lerp_ReturnValue_11 = CallFunc_Lerp_ReturnValue_11;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Array_Get_Item_23 = CallFunc_Array_Get_Item_23;
	Parms.CallFunc_Array_Get_Item_24 = CallFunc_Array_Get_Item_24;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_GetFloatValue_ReturnValue_9 = CallFunc_GetFloatValue_ReturnValue_9;
	Parms.CallFunc_Lerp_ReturnValue_12 = CallFunc_Lerp_ReturnValue_12;
	Parms.CallFunc_Array_Get_Item_25 = CallFunc_Array_Get_Item_25;
	Parms.CallFunc_Array_Get_Item_26 = CallFunc_Array_Get_Item_26;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.CallFunc_GetFloatValue_ReturnValue_10 = CallFunc_GetFloatValue_ReturnValue_10;
	Parms.CallFunc_Lerp_ReturnValue_13 = CallFunc_Lerp_ReturnValue_13;
	Parms.K2Node_MakeArray_Array_5 = K2Node_MakeArray_Array_5;
	Parms.CallFunc_GetFloatValue_ReturnValue_11 = CallFunc_GetFloatValue_ReturnValue_11;
	Parms.K2Node_MakeArray_Array_6 = K2Node_MakeArray_Array_6;
	Parms.CallFunc_Lerp_ReturnValue_14 = CallFunc_Lerp_ReturnValue_14;
	Parms.CallFunc_GetFloatValue_ReturnValue_12 = CallFunc_GetFloatValue_ReturnValue_12;
	Parms.CallFunc_GetFloatValue_ReturnValue_13 = CallFunc_GetFloatValue_ReturnValue_13;
	Parms.CallFunc_Array_Get_Item_27 = CallFunc_Array_Get_Item_27;
	Parms.CallFunc_Lerp_ReturnValue_15 = CallFunc_Lerp_ReturnValue_15;
	Parms.CallFunc_Array_Get_Item_28 = CallFunc_Array_Get_Item_28;
	Parms.CallFunc_Lerp_ReturnValue_16 = CallFunc_Lerp_ReturnValue_16;
	Parms.CallFunc_GetFloatValue_ReturnValue_14 = CallFunc_GetFloatValue_ReturnValue_14;
	Parms.CallFunc_GetFloatValue_ReturnValue_15 = CallFunc_GetFloatValue_ReturnValue_15;
	Parms.K2Node_MakeArray_Array_7 = K2Node_MakeArray_Array_7;
	Parms.K2Node_MakeArray_Array_8 = K2Node_MakeArray_Array_8;
	Parms.K2Node_MakeArray_Array_9 = K2Node_MakeArray_Array_9;
	Parms.K2Node_MakeArray_Array_10 = K2Node_MakeArray_Array_10;
	Parms.CallFunc_Array_Get_Item_29 = CallFunc_Array_Get_Item_29;
	Parms.CallFunc_Array_Get_Item_30 = CallFunc_Array_Get_Item_30;
	Parms.CallFunc_Array_Get_Item_31 = CallFunc_Array_Get_Item_31;
	Parms.CallFunc_GetFloatValue_ReturnValue_16 = CallFunc_GetFloatValue_ReturnValue_16;
	Parms.CallFunc_Lerp_ReturnValue_17 = CallFunc_Lerp_ReturnValue_17;
	Parms.CallFunc_GetFloatValue_ReturnValue_17 = CallFunc_GetFloatValue_ReturnValue_17;
	Parms.K2Node_MakeArray_Array_11 = K2Node_MakeArray_Array_11;
	Parms.CallFunc_Lerp_ReturnValue_18 = CallFunc_Lerp_ReturnValue_18;
	Parms.K2Node_MakeArray_Array_12 = K2Node_MakeArray_Array_12;
	Parms.CallFunc_Lerp_ReturnValue_19 = CallFunc_Lerp_ReturnValue_19;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_2 = CallFunc_Conv_BoolToInt_ReturnValue_2;
	Parms.K2Node_SwitchInteger_CmpSuccess_4 = K2Node_SwitchInteger_CmpSuccess_4;
	Parms.K2Node_MakeArray_Array_13 = K2Node_MakeArray_Array_13;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_3 = CallFunc_Conv_BoolToInt_ReturnValue_3;
	Parms.CallFunc_Lerp_ReturnValue_20 = CallFunc_Lerp_ReturnValue_20;
	Parms.K2Node_SwitchInteger_CmpSuccess_5 = K2Node_SwitchInteger_CmpSuccess_5;
	Parms.CallFunc_Lerp_ReturnValue_21 = CallFunc_Lerp_ReturnValue_21;
	Parms.K2Node_MakeArray_Array_14 = K2Node_MakeArray_Array_14;
	Parms.CallFunc_Array_Get_Item_32 = CallFunc_Array_Get_Item_32;
	Parms.CallFunc_Array_Get_Item_33 = CallFunc_Array_Get_Item_33;
	Parms.CallFunc_GetFloatValue_ReturnValue_18 = CallFunc_GetFloatValue_ReturnValue_18;
	Parms.CallFunc_GetFloatValue_ReturnValue_19 = CallFunc_GetFloatValue_ReturnValue_19;
	Parms.CallFunc_Array_Get_Item_34 = CallFunc_Array_Get_Item_34;
	Parms.CallFunc_LinearColorLerp_ReturnValue_2 = CallFunc_LinearColorLerp_ReturnValue_2;
	Parms.CallFunc_LinearColorLerp_ReturnValue_3 = CallFunc_LinearColorLerp_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_35 = CallFunc_Array_Get_Item_35;
	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue_4 = CallFunc_Conv_LinearColorToColor_ReturnValue_4;
	Parms.CallFunc_Array_Get_Item_36 = CallFunc_Array_Get_Item_36;
	Parms.CallFunc_GetFloatValue_ReturnValue_20 = CallFunc_GetFloatValue_ReturnValue_20;
	Parms.CallFunc_GetFloatValue_ReturnValue_21 = CallFunc_GetFloatValue_ReturnValue_21;
	Parms.CallFunc_Array_Get_Item_37 = CallFunc_Array_Get_Item_37;
	Parms.CallFunc_LinearColorLerp_ReturnValue_4 = CallFunc_LinearColorLerp_ReturnValue_4;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_4 = CallFunc_Conv_BoolToInt_ReturnValue_4;
	Parms.CallFunc_LinearColorLerp_ReturnValue_5 = CallFunc_LinearColorLerp_ReturnValue_5;
	Parms.K2Node_SwitchInteger_CmpSuccess_6 = K2Node_SwitchInteger_CmpSuccess_6;
	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue_5 = CallFunc_Conv_LinearColorToColor_ReturnValue_5;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_5 = CallFunc_Conv_BoolToInt_ReturnValue_5;
	Parms.K2Node_SwitchInteger_CmpSuccess_7 = K2Node_SwitchInteger_CmpSuccess_7;
	Parms.CallFunc_Array_Get_Item_38 = CallFunc_Array_Get_Item_38;
	Parms.CallFunc_Array_Get_Item_39 = CallFunc_Array_Get_Item_39;
	Parms.CallFunc_GetFloatValue_ReturnValue_22 = CallFunc_GetFloatValue_ReturnValue_22;
	Parms.CallFunc_GetFloatValue_ReturnValue_23 = CallFunc_GetFloatValue_ReturnValue_23;
	Parms.CallFunc_Array_Get_Item_40 = CallFunc_Array_Get_Item_40;
	Parms.CallFunc_LinearColorLerp_ReturnValue_6 = CallFunc_LinearColorLerp_ReturnValue_6;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_6 = CallFunc_Conv_BoolToInt_ReturnValue_6;
	Parms.CallFunc_LinearColorLerp_ReturnValue_7 = CallFunc_LinearColorLerp_ReturnValue_7;
	Parms.K2Node_SwitchInteger_CmpSuccess_8 = K2Node_SwitchInteger_CmpSuccess_8;
	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue_6 = CallFunc_Conv_LinearColorToColor_ReturnValue_6;
	Parms.CallFunc_Array_Get_Item_41 = CallFunc_Array_Get_Item_41;
	Parms.CallFunc_Array_Get_Item_42 = CallFunc_Array_Get_Item_42;
	Parms.CallFunc_GetFloatValue_ReturnValue_24 = CallFunc_GetFloatValue_ReturnValue_24;
	Parms.CallFunc_GetFloatValue_ReturnValue_25 = CallFunc_GetFloatValue_ReturnValue_25;
	Parms.CallFunc_Array_Get_Item_43 = CallFunc_Array_Get_Item_43;
	Parms.CallFunc_LinearColorLerp_ReturnValue_8 = CallFunc_LinearColorLerp_ReturnValue_8;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_7 = CallFunc_Conv_BoolToInt_ReturnValue_7;
	Parms.CallFunc_LinearColorLerp_ReturnValue_9 = CallFunc_LinearColorLerp_ReturnValue_9;
	Parms.K2Node_SwitchInteger_CmpSuccess_9 = K2Node_SwitchInteger_CmpSuccess_9;
	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue_7 = CallFunc_Conv_LinearColorToColor_ReturnValue_7;
	Parms.CallFunc_Lerp_ReturnValue_22 = CallFunc_Lerp_ReturnValue_22;
	Parms.CallFunc_Lerp_ReturnValue_23 = CallFunc_Lerp_ReturnValue_23;
	Parms.CallFunc_Array_Get_Item_44 = CallFunc_Array_Get_Item_44;
	Parms.CallFunc_Array_Get_Item_45 = CallFunc_Array_Get_Item_45;
	Parms.CallFunc_GetFloatValue_ReturnValue_26 = CallFunc_GetFloatValue_ReturnValue_26;
	Parms.CallFunc_GetFloatValue_ReturnValue_27 = CallFunc_GetFloatValue_ReturnValue_27;
	Parms.CallFunc_Array_Get_Item_46 = CallFunc_Array_Get_Item_46;
	Parms.CallFunc_LinearColorLerp_ReturnValue_10 = CallFunc_LinearColorLerp_ReturnValue_10;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_8 = CallFunc_Conv_BoolToInt_ReturnValue_8;
	Parms.CallFunc_LinearColorLerp_ReturnValue_11 = CallFunc_LinearColorLerp_ReturnValue_11;
	Parms.K2Node_SwitchInteger_CmpSuccess_10 = K2Node_SwitchInteger_CmpSuccess_10;
	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue_8 = CallFunc_Conv_LinearColorToColor_ReturnValue_8;
	Parms.CallFunc_Array_Get_Item_47 = CallFunc_Array_Get_Item_47;
	Parms.CallFunc_Array_Get_Item_48 = CallFunc_Array_Get_Item_48;
	Parms.CallFunc_GetFloatValue_ReturnValue_28 = CallFunc_GetFloatValue_ReturnValue_28;
	Parms.CallFunc_GetFloatValue_ReturnValue_29 = CallFunc_GetFloatValue_ReturnValue_29;
	Parms.CallFunc_Array_Get_Item_49 = CallFunc_Array_Get_Item_49;
	Parms.CallFunc_LinearColorLerp_ReturnValue_12 = CallFunc_LinearColorLerp_ReturnValue_12;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_9 = CallFunc_Conv_BoolToInt_ReturnValue_9;
	Parms.CallFunc_LinearColorLerp_ReturnValue_13 = CallFunc_LinearColorLerp_ReturnValue_13;
	Parms.K2Node_SwitchInteger_CmpSuccess_11 = K2Node_SwitchInteger_CmpSuccess_11;
	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue_9 = CallFunc_Conv_LinearColorToColor_ReturnValue_9;
	Parms.CallFunc_Array_Get_Item_50 = CallFunc_Array_Get_Item_50;
	Parms.CallFunc_Array_Get_Item_51 = CallFunc_Array_Get_Item_51;
	Parms.CallFunc_Array_Get_Item_52 = CallFunc_Array_Get_Item_52;
	Parms.CallFunc_GetFloatValue_ReturnValue_30 = CallFunc_GetFloatValue_ReturnValue_30;
	Parms.CallFunc_GetFloatValue_ReturnValue_31 = CallFunc_GetFloatValue_ReturnValue_31;
	Parms.CallFunc_LinearColorLerp_ReturnValue_14 = CallFunc_LinearColorLerp_ReturnValue_14;
	Parms.CallFunc_LinearColorLerp_ReturnValue_15 = CallFunc_LinearColorLerp_ReturnValue_15;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_10 = CallFunc_Conv_BoolToInt_ReturnValue_10;
	Parms.K2Node_SwitchInteger_CmpSuccess_12 = K2Node_SwitchInteger_CmpSuccess_12;
	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue_10 = CallFunc_Conv_LinearColorToColor_ReturnValue_10;
	Parms.CallFunc_Array_Get_Item_53 = CallFunc_Array_Get_Item_53;
	Parms.CallFunc_Array_Get_Item_54 = CallFunc_Array_Get_Item_54;
	Parms.CallFunc_GetFloatValue_ReturnValue_32 = CallFunc_GetFloatValue_ReturnValue_32;
	Parms.CallFunc_GetFloatValue_ReturnValue_33 = CallFunc_GetFloatValue_ReturnValue_33;
	Parms.CallFunc_Array_Get_Item_55 = CallFunc_Array_Get_Item_55;
	Parms.CallFunc_LinearColorLerp_ReturnValue_16 = CallFunc_LinearColorLerp_ReturnValue_16;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_11 = CallFunc_Conv_BoolToInt_ReturnValue_11;
	Parms.CallFunc_LinearColorLerp_ReturnValue_17 = CallFunc_LinearColorLerp_ReturnValue_17;
	Parms.K2Node_SwitchInteger_CmpSuccess_13 = K2Node_SwitchInteger_CmpSuccess_13;
	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue_11 = CallFunc_Conv_LinearColorToColor_ReturnValue_11;
	Parms.CallFunc_Array_Get_Item_56 = CallFunc_Array_Get_Item_56;
	Parms.CallFunc_Array_Get_Item_57 = CallFunc_Array_Get_Item_57;
	Parms.CallFunc_Array_Get_Item_58 = CallFunc_Array_Get_Item_58;
	Parms.CallFunc_GetFloatValue_ReturnValue_34 = CallFunc_GetFloatValue_ReturnValue_34;
	Parms.CallFunc_GetFloatValue_ReturnValue_35 = CallFunc_GetFloatValue_ReturnValue_35;
	Parms.CallFunc_LinearColorLerp_ReturnValue_18 = CallFunc_LinearColorLerp_ReturnValue_18;
	Parms.CallFunc_LinearColorLerp_ReturnValue_19 = CallFunc_LinearColorLerp_ReturnValue_19;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_12 = CallFunc_Conv_BoolToInt_ReturnValue_12;
	Parms.K2Node_SwitchInteger_CmpSuccess_14 = K2Node_SwitchInteger_CmpSuccess_14;
	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue_12 = CallFunc_Conv_LinearColorToColor_ReturnValue_12;
	Parms.CallFunc_Array_Get_Item_59 = CallFunc_Array_Get_Item_59;
	Parms.CallFunc_Array_Get_Item_60 = CallFunc_Array_Get_Item_60;
	Parms.CallFunc_GetFloatValue_ReturnValue_36 = CallFunc_GetFloatValue_ReturnValue_36;
	Parms.CallFunc_GetFloatValue_ReturnValue_37 = CallFunc_GetFloatValue_ReturnValue_37;
	Parms.CallFunc_Array_Get_Item_61 = CallFunc_Array_Get_Item_61;
	Parms.CallFunc_LinearColorLerp_ReturnValue_20 = CallFunc_LinearColorLerp_ReturnValue_20;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_13 = CallFunc_Conv_BoolToInt_ReturnValue_13;
	Parms.CallFunc_LinearColorLerp_ReturnValue_21 = CallFunc_LinearColorLerp_ReturnValue_21;
	Parms.K2Node_SwitchInteger_CmpSuccess_15 = K2Node_SwitchInteger_CmpSuccess_15;
	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue_13 = CallFunc_Conv_LinearColorToColor_ReturnValue_13;
	Parms.CallFunc_Array_Get_Item_62 = CallFunc_Array_Get_Item_62;
	Parms.CallFunc_Array_Get_Item_63 = CallFunc_Array_Get_Item_63;
	Parms.CallFunc_GetFloatValue_ReturnValue_38 = CallFunc_GetFloatValue_ReturnValue_38;
	Parms.CallFunc_GetFloatValue_ReturnValue_39 = CallFunc_GetFloatValue_ReturnValue_39;
	Parms.CallFunc_Array_Get_Item_64 = CallFunc_Array_Get_Item_64;
	Parms.CallFunc_LinearColorLerp_ReturnValue_22 = CallFunc_LinearColorLerp_ReturnValue_22;
	Parms.CallFunc_Array_Get_Item_65 = CallFunc_Array_Get_Item_65;
	Parms.CallFunc_LinearColorLerp_ReturnValue_23 = CallFunc_LinearColorLerp_ReturnValue_23;
	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue_14 = CallFunc_Conv_LinearColorToColor_ReturnValue_14;
	Parms.CallFunc_Array_Get_Item_66 = CallFunc_Array_Get_Item_66;
	Parms.CallFunc_GetFloatValue_ReturnValue_40 = CallFunc_GetFloatValue_ReturnValue_40;
	Parms.CallFunc_GetFloatValue_ReturnValue_41 = CallFunc_GetFloatValue_ReturnValue_41;
	Parms.CallFunc_Array_Get_Item_67 = CallFunc_Array_Get_Item_67;
	Parms.CallFunc_LinearColorLerp_ReturnValue_24 = CallFunc_LinearColorLerp_ReturnValue_24;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_14 = CallFunc_Conv_BoolToInt_ReturnValue_14;
	Parms.CallFunc_LinearColorLerp_ReturnValue_25 = CallFunc_LinearColorLerp_ReturnValue_25;
	Parms.K2Node_SwitchInteger_CmpSuccess_16 = K2Node_SwitchInteger_CmpSuccess_16;
	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue_15 = CallFunc_Conv_LinearColorToColor_ReturnValue_15;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_15 = CallFunc_Conv_BoolToInt_ReturnValue_15;
	Parms.K2Node_SwitchInteger_CmpSuccess_17 = K2Node_SwitchInteger_CmpSuccess_17;
	Parms.CallFunc_Array_Get_Item_68 = CallFunc_Array_Get_Item_68;
	Parms.CallFunc_Array_Get_Item_69 = CallFunc_Array_Get_Item_69;
	Parms.CallFunc_GetFloatValue_ReturnValue_42 = CallFunc_GetFloatValue_ReturnValue_42;
	Parms.CallFunc_GetFloatValue_ReturnValue_43 = CallFunc_GetFloatValue_ReturnValue_43;
	Parms.CallFunc_Array_Get_Item_70 = CallFunc_Array_Get_Item_70;
	Parms.CallFunc_LinearColorLerp_ReturnValue_26 = CallFunc_LinearColorLerp_ReturnValue_26;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_16 = CallFunc_Conv_BoolToInt_ReturnValue_16;
	Parms.CallFunc_LinearColorLerp_ReturnValue_27 = CallFunc_LinearColorLerp_ReturnValue_27;
	Parms.K2Node_SwitchInteger_CmpSuccess_18 = K2Node_SwitchInteger_CmpSuccess_18;
	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue_16 = CallFunc_Conv_LinearColorToColor_ReturnValue_16;
	Parms.K2Node_SwitchInteger_CmpSuccess_19 = K2Node_SwitchInteger_CmpSuccess_19;
	Parms.CallFunc_Array_Get_Item_71 = CallFunc_Array_Get_Item_71;
	Parms.CallFunc_Array_Get_Item_72 = CallFunc_Array_Get_Item_72;
	Parms.CallFunc_Array_Get_Item_73 = CallFunc_Array_Get_Item_73;
	Parms.CallFunc_GetFloatValue_ReturnValue_44 = CallFunc_GetFloatValue_ReturnValue_44;
	Parms.CallFunc_GetFloatValue_ReturnValue_45 = CallFunc_GetFloatValue_ReturnValue_45;
	Parms.CallFunc_LinearColorLerp_ReturnValue_28 = CallFunc_LinearColorLerp_ReturnValue_28;
	Parms.CallFunc_LinearColorLerp_ReturnValue_29 = CallFunc_LinearColorLerp_ReturnValue_29;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_17 = CallFunc_Conv_BoolToInt_ReturnValue_17;
	Parms.K2Node_SwitchInteger_CmpSuccess_20 = K2Node_SwitchInteger_CmpSuccess_20;
	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue_17 = CallFunc_Conv_LinearColorToColor_ReturnValue_17;
	Parms.CallFunc_Array_Get_Item_74 = CallFunc_Array_Get_Item_74;
	Parms.CallFunc_Array_Get_Item_75 = CallFunc_Array_Get_Item_75;
	Parms.CallFunc_Array_Get_Item_76 = CallFunc_Array_Get_Item_76;
	Parms.CallFunc_GetFloatValue_ReturnValue_46 = CallFunc_GetFloatValue_ReturnValue_46;
	Parms.CallFunc_GetFloatValue_ReturnValue_47 = CallFunc_GetFloatValue_ReturnValue_47;
	Parms.CallFunc_LinearColorLerp_ReturnValue_30 = CallFunc_LinearColorLerp_ReturnValue_30;
	Parms.CallFunc_LinearColorLerp_ReturnValue_31 = CallFunc_LinearColorLerp_ReturnValue_31;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_18 = CallFunc_Conv_BoolToInt_ReturnValue_18;
	Parms.K2Node_SwitchInteger_CmpSuccess_21 = K2Node_SwitchInteger_CmpSuccess_21;
	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue_18 = CallFunc_Conv_LinearColorToColor_ReturnValue_18;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_19 = CallFunc_Conv_BoolToInt_ReturnValue_19;
	Parms.K2Node_SwitchInteger_CmpSuccess_22 = K2Node_SwitchInteger_CmpSuccess_22;
	Parms.CallFunc_Array_Get_Item_77 = CallFunc_Array_Get_Item_77;
	Parms.CallFunc_Array_Get_Item_78 = CallFunc_Array_Get_Item_78;
	Parms.CallFunc_Array_Get_Item_79 = CallFunc_Array_Get_Item_79;
	Parms.CallFunc_GetFloatValue_ReturnValue_48 = CallFunc_GetFloatValue_ReturnValue_48;
	Parms.CallFunc_GetFloatValue_ReturnValue_49 = CallFunc_GetFloatValue_ReturnValue_49;
	Parms.CallFunc_LinearColorLerp_ReturnValue_32 = CallFunc_LinearColorLerp_ReturnValue_32;
	Parms.CallFunc_Lerp_ReturnValue_24 = CallFunc_Lerp_ReturnValue_24;
	Parms.CallFunc_LinearColorLerp_ReturnValue_33 = CallFunc_LinearColorLerp_ReturnValue_33;
	Parms.CallFunc_Lerp_ReturnValue_25 = CallFunc_Lerp_ReturnValue_25;
	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue_19 = CallFunc_Conv_LinearColorToColor_ReturnValue_19;
	Parms.CallFunc_Lerp_ReturnValue_26 = CallFunc_Lerp_ReturnValue_26;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_2 = CallFunc_GetDataTableRowNames_OutRowNames_2;
	Parms.CallFunc_Lerp_ReturnValue_27 = CallFunc_Lerp_ReturnValue_27;
	Parms.CallFunc_Array_Get_Item_80 = CallFunc_Array_Get_Item_80;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_2 = CallFunc_GetDataTableRowFromName_OutRow_2;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_2 = CallFunc_GetDataTableRowFromName_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess_23 = K2Node_SwitchInteger_CmpSuccess_23;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_SetVolumetricFogScatteringDistribution_NewValue_ImplicitCast = CallFunc_SetVolumetricFogScatteringDistribution_NewValue_ImplicitCast;
	Parms.CallFunc_SetFogMaxOpacity_Value_ImplicitCast = CallFunc_SetFogMaxOpacity_Value_ImplicitCast;
	Parms.CallFunc_SetFogHeightFalloff_Value_ImplicitCast = CallFunc_SetFogHeightFalloff_Value_ImplicitCast;
	Parms.CallFunc_SetFogDensity_Value_ImplicitCast = CallFunc_SetFogDensity_Value_ImplicitCast;
	Parms.CallFunc_SetVolumetricFogDistance_NewValue_ImplicitCast = CallFunc_SetVolumetricFogDistance_NewValue_ImplicitCast;
	Parms.CallFunc_SetVolumetricFogExtinctionScale_NewValue_ImplicitCast = CallFunc_SetVolumetricFogExtinctionScale_NewValue_ImplicitCast;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast = CallFunc_GetFloatValue_InTime_ImplicitCast;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_1 = CallFunc_GetFloatValue_InTime_ImplicitCast_1;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_2 = CallFunc_GetFloatValue_InTime_ImplicitCast_2;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast = CallFunc_Lerp_Alpha_ImplicitCast;
	Parms.CallFunc_SetVolumetricFogDistance_NewValue_ImplicitCast_1 = CallFunc_SetVolumetricFogDistance_NewValue_ImplicitCast_1;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_3 = CallFunc_GetFloatValue_InTime_ImplicitCast_3;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_1 = CallFunc_Lerp_Alpha_ImplicitCast_1;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_4 = CallFunc_GetFloatValue_InTime_ImplicitCast_4;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_2 = CallFunc_Lerp_Alpha_ImplicitCast_2;
	Parms.CallFunc_SetVolumetricFogExtinctionScale_NewValue_ImplicitCast_1 = CallFunc_SetVolumetricFogExtinctionScale_NewValue_ImplicitCast_1;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_5 = CallFunc_GetFloatValue_InTime_ImplicitCast_5;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_3 = CallFunc_Lerp_Alpha_ImplicitCast_3;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_6 = CallFunc_GetFloatValue_InTime_ImplicitCast_6;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_7 = CallFunc_GetFloatValue_InTime_ImplicitCast_7;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_4 = CallFunc_Lerp_Alpha_ImplicitCast_4;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_5 = CallFunc_Lerp_Alpha_ImplicitCast_5;
	Parms.CallFunc_SetFogMaxOpacity_Value_ImplicitCast_1 = CallFunc_SetFogMaxOpacity_Value_ImplicitCast_1;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_8 = CallFunc_GetFloatValue_InTime_ImplicitCast_8;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_6 = CallFunc_Lerp_Alpha_ImplicitCast_6;
	Parms.CallFunc_SetFogHeightFalloff_Value_ImplicitCast_1 = CallFunc_SetFogHeightFalloff_Value_ImplicitCast_1;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_9 = CallFunc_GetFloatValue_InTime_ImplicitCast_9;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_7 = CallFunc_Lerp_Alpha_ImplicitCast_7;
	Parms.CallFunc_SetVolumetricFogExtinctionScale_NewValue_ImplicitCast_2 = CallFunc_SetVolumetricFogExtinctionScale_NewValue_ImplicitCast_2;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_10 = CallFunc_GetFloatValue_InTime_ImplicitCast_10;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_8 = CallFunc_Lerp_Alpha_ImplicitCast_8;
	Parms.CallFunc_SetVolumetricFogDistance_NewValue_ImplicitCast_2 = CallFunc_SetVolumetricFogDistance_NewValue_ImplicitCast_2;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_11 = CallFunc_GetFloatValue_InTime_ImplicitCast_11;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_9 = CallFunc_Lerp_Alpha_ImplicitCast_9;
	Parms.CallFunc_SetVolumetricFogScatteringDistribution_NewValue_ImplicitCast_1 = CallFunc_SetVolumetricFogScatteringDistribution_NewValue_ImplicitCast_1;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_12 = CallFunc_GetFloatValue_InTime_ImplicitCast_12;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_13 = CallFunc_GetFloatValue_InTime_ImplicitCast_13;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_10 = CallFunc_Lerp_Alpha_ImplicitCast_10;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_11 = CallFunc_Lerp_Alpha_ImplicitCast_11;
	Parms.CallFunc_SetFogMaxOpacity_Value_ImplicitCast_2 = CallFunc_SetFogMaxOpacity_Value_ImplicitCast_2;
	Parms.CallFunc_SetFogHeightFalloff_Value_ImplicitCast_2 = CallFunc_SetFogHeightFalloff_Value_ImplicitCast_2;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_14 = CallFunc_GetFloatValue_InTime_ImplicitCast_14;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_15 = CallFunc_GetFloatValue_InTime_ImplicitCast_15;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_12 = CallFunc_Lerp_Alpha_ImplicitCast_12;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_13 = CallFunc_Lerp_Alpha_ImplicitCast_13;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_16 = CallFunc_GetFloatValue_InTime_ImplicitCast_16;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_14 = CallFunc_Lerp_Alpha_ImplicitCast_14;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_17 = CallFunc_GetFloatValue_InTime_ImplicitCast_17;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_15 = CallFunc_Lerp_Alpha_ImplicitCast_15;
	Parms.CallFunc_SetFogDensity_Value_ImplicitCast_1 = CallFunc_SetFogDensity_Value_ImplicitCast_1;
	Parms.CallFunc_SetFogDensity_Value_ImplicitCast_2 = CallFunc_SetFogDensity_Value_ImplicitCast_2;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_18 = CallFunc_GetFloatValue_InTime_ImplicitCast_18;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_19 = CallFunc_GetFloatValue_InTime_ImplicitCast_19;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_20 = CallFunc_GetFloatValue_InTime_ImplicitCast_20;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_21 = CallFunc_GetFloatValue_InTime_ImplicitCast_21;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_22 = CallFunc_GetFloatValue_InTime_ImplicitCast_22;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_23 = CallFunc_GetFloatValue_InTime_ImplicitCast_23;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_24 = CallFunc_GetFloatValue_InTime_ImplicitCast_24;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_25 = CallFunc_GetFloatValue_InTime_ImplicitCast_25;
	Parms.CallFunc_SetFogHeightFalloff_Value_ImplicitCast_3 = CallFunc_SetFogHeightFalloff_Value_ImplicitCast_3;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_26 = CallFunc_GetFloatValue_InTime_ImplicitCast_26;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_27 = CallFunc_GetFloatValue_InTime_ImplicitCast_27;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_28 = CallFunc_GetFloatValue_InTime_ImplicitCast_28;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_29 = CallFunc_GetFloatValue_InTime_ImplicitCast_29;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_30 = CallFunc_GetFloatValue_InTime_ImplicitCast_30;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_31 = CallFunc_GetFloatValue_InTime_ImplicitCast_31;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_32 = CallFunc_GetFloatValue_InTime_ImplicitCast_32;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_33 = CallFunc_GetFloatValue_InTime_ImplicitCast_33;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_34 = CallFunc_GetFloatValue_InTime_ImplicitCast_34;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_35 = CallFunc_GetFloatValue_InTime_ImplicitCast_35;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_36 = CallFunc_GetFloatValue_InTime_ImplicitCast_36;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_37 = CallFunc_GetFloatValue_InTime_ImplicitCast_37;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_38 = CallFunc_GetFloatValue_InTime_ImplicitCast_38;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_39 = CallFunc_GetFloatValue_InTime_ImplicitCast_39;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_40 = CallFunc_GetFloatValue_InTime_ImplicitCast_40;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_41 = CallFunc_GetFloatValue_InTime_ImplicitCast_41;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_42 = CallFunc_GetFloatValue_InTime_ImplicitCast_42;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_43 = CallFunc_GetFloatValue_InTime_ImplicitCast_43;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_44 = CallFunc_GetFloatValue_InTime_ImplicitCast_44;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_45 = CallFunc_GetFloatValue_InTime_ImplicitCast_45;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_46 = CallFunc_GetFloatValue_InTime_ImplicitCast_46;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_47 = CallFunc_GetFloatValue_InTime_ImplicitCast_47;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_48 = CallFunc_GetFloatValue_InTime_ImplicitCast_48;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_49 = CallFunc_GetFloatValue_InTime_ImplicitCast_49;
	Parms.CallFunc_SetFogMaxOpacity_Value_ImplicitCast_3 = CallFunc_SetFogMaxOpacity_Value_ImplicitCast_3;
	Parms.CallFunc_SetVolumetricFogScatteringDistribution_NewValue_ImplicitCast_2 = CallFunc_SetVolumetricFogScatteringDistribution_NewValue_ImplicitCast_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TimeofDay_Weather.TimeofDay_Weather_C.Wind
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Wind_Max_Gust                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Wind_Min_Gust                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Wind_Radius                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraParameterCollectionInstance*CallFunc_GetNiagaraParameterCollection_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// double                             CallFunc_WindModulation_DynamicWindSpeed                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_WindModulation_DynamicWindDirection                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeUnclamped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeUnclamped_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeUnclamped_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeUnclamped_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeUnclamped_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraParameterCollectionInstance*CallFunc_GetNiagaraParameterCollection_ReturnValue_1             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeUnclamped_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// double                             CallFunc_MapRangeUnclamped_ReturnValue_6                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult_1                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeUnclamped_ReturnValue_7                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraParameterCollectionInstance*CallFunc_GetNiagaraParameterCollection_ReturnValue_2             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue_2                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult_2                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// double                             CallFunc_WindModulation_DynamicWindSpeed_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_WindModulation_DynamicWindDirection_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetStrength_InNewStrength_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetStrength_InNewStrength_ImplicitCast_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSpeed_InNewSpeed_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_InValue_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_3   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_4   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_InValue_ImplicitCast_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_5   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSpeed_InNewSpeed_ImplicitCast_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_InValue_ImplicitCast_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_6   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_InValue_ImplicitCast_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetMaximumGustAmount_InNewMaxGust_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetMinimumGustAmount_InNewMinGust_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRadius_InNewRadius_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Weather_C::Wind(double Wind_Max_Gust, double Wind_Min_Gust, double Wind_Radius, class UNiagaraParameterCollectionInstance* CallFunc_GetNiagaraParameterCollection_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, double CallFunc_WindModulation_DynamicWindSpeed, const struct FVector& CallFunc_WindModulation_DynamicWindDirection, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess, double CallFunc_MapRangeUnclamped_ReturnValue, double CallFunc_MapRangeUnclamped_ReturnValue_1, double CallFunc_MapRangeUnclamped_ReturnValue_2, double CallFunc_MapRangeUnclamped_ReturnValue_3, double CallFunc_MapRangeUnclamped_ReturnValue_4, double CallFunc_Multiply_DoubleDouble_ReturnValue, class UNiagaraParameterCollectionInstance* CallFunc_GetNiagaraParameterCollection_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_1, double CallFunc_MapRangeUnclamped_ReturnValue_5, int32 CallFunc_Conv_BoolToInt_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess_1, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue_1, double CallFunc_MapRangeUnclamped_ReturnValue_6, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult_1, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_MapRangeUnclamped_ReturnValue_7, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, class UNiagaraParameterCollectionInstance* CallFunc_GetNiagaraParameterCollection_ReturnValue_2, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, const struct FVector& CallFunc_MakeVector_ReturnValue_2, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue_2, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_2, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult_2, double CallFunc_WindModulation_DynamicWindSpeed_1, const struct FVector& CallFunc_WindModulation_DynamicWindDirection_1, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_FClamp_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, float CallFunc_SetStrength_InNewStrength_ImplicitCast, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1, float CallFunc_SetStrength_InNewStrength_ImplicitCast_1, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2, float CallFunc_SetSpeed_InNewSpeed_ImplicitCast, float CallFunc_SetFloatParameter_InValue_ImplicitCast, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_3, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_4, float CallFunc_SetFloatParameter_InValue_ImplicitCast_1, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_5, float CallFunc_SetSpeed_InNewSpeed_ImplicitCast_1, float CallFunc_SetFloatParameter_InValue_ImplicitCast_2, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_6, float CallFunc_SetFloatParameter_InValue_ImplicitCast_3, float CallFunc_SetMaximumGustAmount_InNewMaxGust_ImplicitCast, float CallFunc_SetMinimumGustAmount_InNewMinGust_ImplicitCast, float CallFunc_SetRadius_InNewRadius_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Weather_C", "Wind");

	Params::UTimeofDay_Weather_C_Wind_Params Parms{};

	Parms.Wind_Max_Gust = Wind_Max_Gust;
	Parms.Wind_Min_Gust = Wind_Min_Gust;
	Parms.Wind_Radius = Wind_Radius;
	Parms.CallFunc_GetNiagaraParameterCollection_ReturnValue = CallFunc_GetNiagaraParameterCollection_ReturnValue;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_FindLookAtRotation_ReturnValue = CallFunc_FindLookAtRotation_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult = CallFunc_K2_SetWorldRotation_SweepHitResult;
	Parms.CallFunc_WindModulation_DynamicWindSpeed = CallFunc_WindModulation_DynamicWindSpeed;
	Parms.CallFunc_WindModulation_DynamicWindDirection = CallFunc_WindModulation_DynamicWindDirection;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue = CallFunc_MapRangeUnclamped_ReturnValue;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue_1 = CallFunc_MapRangeUnclamped_ReturnValue_1;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue_2 = CallFunc_MapRangeUnclamped_ReturnValue_2;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue_3 = CallFunc_MapRangeUnclamped_ReturnValue_3;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue_4 = CallFunc_MapRangeUnclamped_ReturnValue_4;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetNiagaraParameterCollection_ReturnValue_1 = CallFunc_GetNiagaraParameterCollection_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue_1 = CallFunc_Conv_VectorToLinearColor_ReturnValue_1;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue_5 = CallFunc_MapRangeUnclamped_ReturnValue_5;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue_1 = CallFunc_K2_GetRootComponent_ReturnValue_1;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_FindLookAtRotation_ReturnValue_1 = CallFunc_FindLookAtRotation_ReturnValue_1;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue_6 = CallFunc_MapRangeUnclamped_ReturnValue_6;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult_1 = CallFunc_K2_SetWorldRotation_SweepHitResult_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue_7 = CallFunc_MapRangeUnclamped_ReturnValue_7;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_GetNiagaraParameterCollection_ReturnValue_2 = CallFunc_GetNiagaraParameterCollection_ReturnValue_2;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue_2 = CallFunc_Conv_VectorToLinearColor_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_MakeVector_ReturnValue_2 = CallFunc_MakeVector_ReturnValue_2;
	Parms.CallFunc_FindLookAtRotation_ReturnValue_2 = CallFunc_FindLookAtRotation_ReturnValue_2;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue_2 = CallFunc_K2_GetRootComponent_ReturnValue_2;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult_2 = CallFunc_K2_SetWorldRotation_SweepHitResult_2;
	Parms.CallFunc_WindModulation_DynamicWindSpeed_1 = CallFunc_WindModulation_DynamicWindSpeed_1;
	Parms.CallFunc_WindModulation_DynamicWindDirection_1 = CallFunc_WindModulation_DynamicWindDirection_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_SetStrength_InNewStrength_ImplicitCast = CallFunc_SetStrength_InNewStrength_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1;
	Parms.CallFunc_SetStrength_InNewStrength_ImplicitCast_1 = CallFunc_SetStrength_InNewStrength_ImplicitCast_1;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2;
	Parms.CallFunc_SetSpeed_InNewSpeed_ImplicitCast = CallFunc_SetSpeed_InNewSpeed_ImplicitCast;
	Parms.CallFunc_SetFloatParameter_InValue_ImplicitCast = CallFunc_SetFloatParameter_InValue_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_3 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_3;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_4 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_4;
	Parms.CallFunc_SetFloatParameter_InValue_ImplicitCast_1 = CallFunc_SetFloatParameter_InValue_ImplicitCast_1;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_5 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_5;
	Parms.CallFunc_SetSpeed_InNewSpeed_ImplicitCast_1 = CallFunc_SetSpeed_InNewSpeed_ImplicitCast_1;
	Parms.CallFunc_SetFloatParameter_InValue_ImplicitCast_2 = CallFunc_SetFloatParameter_InValue_ImplicitCast_2;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_6 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_6;
	Parms.CallFunc_SetFloatParameter_InValue_ImplicitCast_3 = CallFunc_SetFloatParameter_InValue_ImplicitCast_3;
	Parms.CallFunc_SetMaximumGustAmount_InNewMaxGust_ImplicitCast = CallFunc_SetMaximumGustAmount_InNewMaxGust_ImplicitCast;
	Parms.CallFunc_SetMinimumGustAmount_InNewMinGust_ImplicitCast = CallFunc_SetMinimumGustAmount_InNewMinGust_ImplicitCast;
	Parms.CallFunc_SetRadius_InNewRadius_ImplicitCast = CallFunc_SetRadius_InNewRadius_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TimeofDay_Weather.TimeofDay_Weather_C.Initialize_Weather
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             AdjustedTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             ActualTime                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             SpatialSynchFrequency                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Weather_C::Initialize_Weather(double AdjustedTime, double ActualTime, double SpatialSynchFrequency, double DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Weather_C", "Initialize_Weather");

	Params::UTimeofDay_Weather_C_Initialize_Weather_Params Parms{};

	Parms.AdjustedTime = AdjustedTime;
	Parms.ActualTime = ActualTime;
	Parms.SpatialSynchFrequency = SpatialSynchFrequency;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TimeofDay_Weather.TimeofDay_Weather_C.Set_up_references
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UExponentialHeightFogComponent*Exponential_Height_Fog                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UDirectionalLightComponent*  Directional_Light_Sun                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UDirectionalLightComponent*  Directional_Light_Celestial                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AWindDirectionalSource*      Wind_Directional_Source                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AWindDirectionalSource*      Wind_Directional_Source_Testing                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UDataTable*>          Color_Data_Table                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              Cloud_Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVolumetricCloudComponent*   Volumetric_Aurora                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Fog_Change_w_Weather_Disable                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_Color_Category        Color_Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UDataTable*>          Color_Data_Table_Categories                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Color_Saturation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Fog_Height                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Fog_Falloff                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_Cloud_Category        Cloud_Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Fog_Color_Override_Minus_Adv                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Fog_Color_Minus_Adv                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Fog_Color_Saturation_Minus_Adv                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RayLeigh_Color                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Main_Celestial_Color                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Main_Celestial_Color_Override_Adv                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Sky_Luminance_Color_Override_Adv                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Fog_Minus_Density                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Fog_Minus_Opacity                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Fog_Minus_Density_Minus_Night                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Fog_Minus_Opacity_Minus_Night                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Fog_Minus_Height_Minus_Night                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Fog_Minus_Falloff_Minus_Night                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Fog_Day                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Fog_Night                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Aurora                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Cloud                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Primary_Function_Override                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Rain                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Color_Minus_Category                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Color                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Celestial_Color                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Color_Saturation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Visual_Environment_Preset_Override                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Visual_Environment_Preset_                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Fog_Minus_Density                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Fog_Minus_Opacity                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Fog_Minus_Falloff                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Fog_Minus_Height                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Fog_Minus_Density_Minus_Night                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Fog_Minus_Opacity_Minus_Night                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Fog_Minus_Falloff_Minus_Night                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Fog_Minus_Height_Minus_Night                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Manual_Wind_Control                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Wind_Speed_Minus_Manual                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Wind_Strength_Minus_Manual                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Wind_Direction_Minus_Manual                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Cloud_Albedo                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Cloud_Albedo_Saturation                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Fog_Dev_Override                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Fog_Minus_Cave_Override                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Manual_Fog_Only_Override                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Fog_Color_Override                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Cloud_Aurora_Manual_Selection                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Color_Master_Table                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Color_Select                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Atmosphere_Master_Select                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAtmosphere_Master      Visual_Environmet_Preset                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Vault_Override                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Weather_C::Set_up_references(class UExponentialHeightFogComponent* Exponential_Height_Fog, class UDirectionalLightComponent* Directional_Light_Sun, class UDirectionalLightComponent* Directional_Light_Celestial, class AWindDirectionalSource* Wind_Directional_Source, class AWindDirectionalSource* Wind_Directional_Source_Testing, TArray<class UDataTable*>& Color_Data_Table, int32 Cloud_Type, class UVolumetricCloudComponent* Volumetric_Aurora, bool Fog_Change_w_Weather_Disable, enum class E_Color_Category Color_Category, TArray<class UDataTable*>& Color_Data_Table_Categories, int32 Color, int32 Color_Saturation, int32 Fog_Height, int32 Fog_Falloff, enum class E_Cloud_Category Cloud_Category, bool Fog_Color_Override_Minus_Adv, int32 Fog_Color_Minus_Adv, int32 Fog_Color_Saturation_Minus_Adv, int32 RayLeigh_Color, int32 Main_Celestial_Color, bool Main_Celestial_Color_Override_Adv, bool Sky_Luminance_Color_Override_Adv, int32 Fog_Minus_Density, int32 Fog_Minus_Opacity, int32 Fog_Minus_Density_Minus_Night, int32 Fog_Minus_Opacity_Minus_Night, int32 Fog_Minus_Height_Minus_Night, int32 Fog_Minus_Falloff_Minus_Night, int32 Realm_Minus_Fog_Day, int32 Realm_Minus_Fog_Night, int32 Realm_Minus_Aurora, int32 Realm_Minus_Cloud, bool Primary_Function_Override, int32 Realm_Minus_Rain, int32 Realm_Minus_Color_Minus_Category, int32 Realm_Minus_Color, int32 Realm_Minus_Celestial_Color, int32 Realm_Color_Saturation, bool Visual_Environment_Preset_Override, int32 Visual_Environment_Preset_, int32 Realm_Minus_Fog_Minus_Density, int32 Realm_Minus_Fog_Minus_Opacity, int32 Realm_Minus_Fog_Minus_Falloff, int32 Realm_Minus_Fog_Minus_Height, int32 Realm_Minus_Fog_Minus_Density_Minus_Night, int32 Realm_Minus_Fog_Minus_Opacity_Minus_Night, int32 Realm_Minus_Fog_Minus_Falloff_Minus_Night, int32 Realm_Minus_Fog_Minus_Height_Minus_Night, bool Manual_Wind_Control, double Wind_Speed_Minus_Manual, double Wind_Strength_Minus_Manual, const struct FVector& Wind_Direction_Minus_Manual, int32 Realm_Minus_Cloud_Albedo, int32 Realm_Minus_Cloud_Albedo_Saturation, bool Fog_Dev_Override, int32 Realm_Minus_Fog_Minus_Cave_Override, bool Manual_Fog_Only_Override, bool Fog_Color_Override, bool Cloud_Aurora_Manual_Selection, int32 Realm_Minus_Color_Master_Table, int32 Realm_Minus_Color_Select, int32 Realm_Minus_Atmosphere_Master_Select, enum class EAtmosphere_Master Visual_Environmet_Preset, int32 Realm_Minus_Vault_Override)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Weather_C", "Set_up_references");

	Params::UTimeofDay_Weather_C_Set_up_references_Params Parms{};

	Parms.Exponential_Height_Fog = Exponential_Height_Fog;
	Parms.Directional_Light_Sun = Directional_Light_Sun;
	Parms.Directional_Light_Celestial = Directional_Light_Celestial;
	Parms.Wind_Directional_Source = Wind_Directional_Source;
	Parms.Wind_Directional_Source_Testing = Wind_Directional_Source_Testing;
	Parms.Color_Data_Table = Color_Data_Table;
	Parms.Cloud_Type = Cloud_Type;
	Parms.Volumetric_Aurora = Volumetric_Aurora;
	Parms.Fog_Change_w_Weather_Disable = Fog_Change_w_Weather_Disable;
	Parms.Color_Category = Color_Category;
	Parms.Color_Data_Table_Categories = Color_Data_Table_Categories;
	Parms.Color = Color;
	Parms.Color_Saturation = Color_Saturation;
	Parms.Fog_Height = Fog_Height;
	Parms.Fog_Falloff = Fog_Falloff;
	Parms.Cloud_Category = Cloud_Category;
	Parms.Fog_Color_Override_Minus_Adv = Fog_Color_Override_Minus_Adv;
	Parms.Fog_Color_Minus_Adv = Fog_Color_Minus_Adv;
	Parms.Fog_Color_Saturation_Minus_Adv = Fog_Color_Saturation_Minus_Adv;
	Parms.RayLeigh_Color = RayLeigh_Color;
	Parms.Main_Celestial_Color = Main_Celestial_Color;
	Parms.Main_Celestial_Color_Override_Adv = Main_Celestial_Color_Override_Adv;
	Parms.Sky_Luminance_Color_Override_Adv = Sky_Luminance_Color_Override_Adv;
	Parms.Fog_Minus_Density = Fog_Minus_Density;
	Parms.Fog_Minus_Opacity = Fog_Minus_Opacity;
	Parms.Fog_Minus_Density_Minus_Night = Fog_Minus_Density_Minus_Night;
	Parms.Fog_Minus_Opacity_Minus_Night = Fog_Minus_Opacity_Minus_Night;
	Parms.Fog_Minus_Height_Minus_Night = Fog_Minus_Height_Minus_Night;
	Parms.Fog_Minus_Falloff_Minus_Night = Fog_Minus_Falloff_Minus_Night;
	Parms.Realm_Minus_Fog_Day = Realm_Minus_Fog_Day;
	Parms.Realm_Minus_Fog_Night = Realm_Minus_Fog_Night;
	Parms.Realm_Minus_Aurora = Realm_Minus_Aurora;
	Parms.Realm_Minus_Cloud = Realm_Minus_Cloud;
	Parms.Primary_Function_Override = Primary_Function_Override;
	Parms.Realm_Minus_Rain = Realm_Minus_Rain;
	Parms.Realm_Minus_Color_Minus_Category = Realm_Minus_Color_Minus_Category;
	Parms.Realm_Minus_Color = Realm_Minus_Color;
	Parms.Realm_Minus_Celestial_Color = Realm_Minus_Celestial_Color;
	Parms.Realm_Color_Saturation = Realm_Color_Saturation;
	Parms.Visual_Environment_Preset_Override = Visual_Environment_Preset_Override;
	Parms.Visual_Environment_Preset_ = Visual_Environment_Preset_;
	Parms.Realm_Minus_Fog_Minus_Density = Realm_Minus_Fog_Minus_Density;
	Parms.Realm_Minus_Fog_Minus_Opacity = Realm_Minus_Fog_Minus_Opacity;
	Parms.Realm_Minus_Fog_Minus_Falloff = Realm_Minus_Fog_Minus_Falloff;
	Parms.Realm_Minus_Fog_Minus_Height = Realm_Minus_Fog_Minus_Height;
	Parms.Realm_Minus_Fog_Minus_Density_Minus_Night = Realm_Minus_Fog_Minus_Density_Minus_Night;
	Parms.Realm_Minus_Fog_Minus_Opacity_Minus_Night = Realm_Minus_Fog_Minus_Opacity_Minus_Night;
	Parms.Realm_Minus_Fog_Minus_Falloff_Minus_Night = Realm_Minus_Fog_Minus_Falloff_Minus_Night;
	Parms.Realm_Minus_Fog_Minus_Height_Minus_Night = Realm_Minus_Fog_Minus_Height_Minus_Night;
	Parms.Manual_Wind_Control = Manual_Wind_Control;
	Parms.Wind_Speed_Minus_Manual = Wind_Speed_Minus_Manual;
	Parms.Wind_Strength_Minus_Manual = Wind_Strength_Minus_Manual;
	Parms.Wind_Direction_Minus_Manual = Wind_Direction_Minus_Manual;
	Parms.Realm_Minus_Cloud_Albedo = Realm_Minus_Cloud_Albedo;
	Parms.Realm_Minus_Cloud_Albedo_Saturation = Realm_Minus_Cloud_Albedo_Saturation;
	Parms.Fog_Dev_Override = Fog_Dev_Override;
	Parms.Realm_Minus_Fog_Minus_Cave_Override = Realm_Minus_Fog_Minus_Cave_Override;
	Parms.Manual_Fog_Only_Override = Manual_Fog_Only_Override;
	Parms.Fog_Color_Override = Fog_Color_Override;
	Parms.Cloud_Aurora_Manual_Selection = Cloud_Aurora_Manual_Selection;
	Parms.Realm_Minus_Color_Master_Table = Realm_Minus_Color_Master_Table;
	Parms.Realm_Minus_Color_Select = Realm_Minus_Color_Select;
	Parms.Realm_Minus_Atmosphere_Master_Select = Realm_Minus_Atmosphere_Master_Select;
	Parms.Visual_Environmet_Preset = Visual_Environmet_Preset;
	Parms.Realm_Minus_Vault_Override = Realm_Minus_Vault_Override;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TimeofDay_Weather.TimeofDay_Weather_C.ToggleWindSpeedDebug
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WindSpeedDebug                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Weather_C::ToggleWindSpeedDebug(bool WindSpeedDebug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Weather_C", "ToggleWindSpeedDebug");

	Params::UTimeofDay_Weather_C_ToggleWindSpeedDebug_Params Parms{};

	Parms.WindSpeedDebug = WindSpeedDebug;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TimeofDay_Weather.TimeofDay_Weather_C.SetActualTimeOverride
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             ActualTimeOverride                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Weather_C::SetActualTimeOverride(double ActualTimeOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Weather_C", "SetActualTimeOverride");

	Params::UTimeofDay_Weather_C_SetActualTimeOverride_Params Parms{};

	Parms.ActualTimeOverride = ActualTimeOverride;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TimeofDay_Weather.TimeofDay_Weather_C.ExecuteUbergraph_TimeofDay_Weather
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_AdjustedTime                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_ActualTime                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_SpatialSynchFrequency                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_DeltaSeconds                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UExponentialHeightFogComponent*K2Node_CustomEvent_Exponential_Height_Fog                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UDirectionalLightComponent*  K2Node_CustomEvent_Directional_Light_Sun                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UDirectionalLightComponent*  K2Node_CustomEvent_Directional_Light_Celestial                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AWindDirectionalSource*      K2Node_CustomEvent_Wind_Directional_Source                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AWindDirectionalSource*      K2Node_CustomEvent_Wind_Directional_Source_Testing               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UDataTable*>          K2Node_CustomEvent_Color_Data_Table                              (ConstParm, ReferenceParm)
// int32                              K2Node_CustomEvent_Cloud_Type                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVolumetricCloudComponent*   K2Node_CustomEvent_Volumetric_Aurora                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Fog_Change_w_Weather_Disable                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_Color_Category        K2Node_CustomEvent_Color_Category                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UDataTable*>          K2Node_CustomEvent_Color_Data_Table_Categories                   (ConstParm, ReferenceParm)
// int32                              K2Node_CustomEvent_Color                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Color_Saturation                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Fog_Height                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Fog_Falloff                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_Cloud_Category        K2Node_CustomEvent_Cloud_Category                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Fog_Color_Override___Adv                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Fog_Color___Adv                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Fog_Color_Saturation___Adv                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_RayLeigh_Color                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Main_Celestial_Color                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Main_Celestial_Color_Override_Adv             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Sky_Luminance_Color_Override_Adv              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Fog___Density                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Fog___Opacity                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Fog___Density___Night                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Fog___Opacity___Night                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Fog___Height___Night                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Fog___Falloff___Night                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Fog_Day                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Fog_Night                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Aurora                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Cloud                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Primary_Function_Override                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Rain                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Color___Category                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Color                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Celestial_Color                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm_Color_Saturation                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Visual_Environment_Preset_Override            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Visual_Environment_Preset_                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Fog___Density                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Fog___Opacity                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Fog___Falloff                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Fog___Height                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Fog___Density___Night                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Fog___Opacity___Night                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Fog___Falloff___Night                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Fog___Height___Night                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Manual_Wind_Control                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Wind_Speed___Manual                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Wind_Strength___Manual                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Wind_Direction___Manual                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Cloud_Albedo                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Cloud_Albedo_Saturation               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Fog_Dev_Override                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Fog___Cave_Override                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Manual_Fog_Only_Override                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Fog_Color_Override                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Cloud_Aurora_Manual_Selection                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Color_Master_Table                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Color_Select                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Atmosphere_Master_Select              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAtmosphere_Master      K2Node_CustomEvent_Visual_Environmet_Preset                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Vault_Override                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_WindSpeedDebug                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_ActualTimeOverride                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Weather_C::ExecuteUbergraph_TimeofDay_Weather(int32 EntryPoint, double K2Node_CustomEvent_AdjustedTime, double K2Node_CustomEvent_ActualTime, double K2Node_CustomEvent_SpatialSynchFrequency, double K2Node_CustomEvent_DeltaSeconds, class UExponentialHeightFogComponent* K2Node_CustomEvent_Exponential_Height_Fog, class UDirectionalLightComponent* K2Node_CustomEvent_Directional_Light_Sun, class UDirectionalLightComponent* K2Node_CustomEvent_Directional_Light_Celestial, class AWindDirectionalSource* K2Node_CustomEvent_Wind_Directional_Source, class AWindDirectionalSource* K2Node_CustomEvent_Wind_Directional_Source_Testing, TArray<class UDataTable*>& K2Node_CustomEvent_Color_Data_Table, int32 K2Node_CustomEvent_Cloud_Type, class UVolumetricCloudComponent* K2Node_CustomEvent_Volumetric_Aurora, bool K2Node_CustomEvent_Fog_Change_w_Weather_Disable, enum class E_Color_Category K2Node_CustomEvent_Color_Category, TArray<class UDataTable*>& K2Node_CustomEvent_Color_Data_Table_Categories, int32 K2Node_CustomEvent_Color, int32 K2Node_CustomEvent_Color_Saturation, int32 K2Node_CustomEvent_Fog_Height, int32 K2Node_CustomEvent_Fog_Falloff, enum class E_Cloud_Category K2Node_CustomEvent_Cloud_Category, bool K2Node_CustomEvent_Fog_Color_Override___Adv, int32 K2Node_CustomEvent_Fog_Color___Adv, int32 K2Node_CustomEvent_Fog_Color_Saturation___Adv, int32 K2Node_CustomEvent_RayLeigh_Color, int32 K2Node_CustomEvent_Main_Celestial_Color, bool K2Node_CustomEvent_Main_Celestial_Color_Override_Adv, bool K2Node_CustomEvent_Sky_Luminance_Color_Override_Adv, int32 K2Node_CustomEvent_Fog___Density, int32 K2Node_CustomEvent_Fog___Opacity, int32 K2Node_CustomEvent_Fog___Density___Night, int32 K2Node_CustomEvent_Fog___Opacity___Night, int32 K2Node_CustomEvent_Fog___Height___Night, int32 K2Node_CustomEvent_Fog___Falloff___Night, int32 K2Node_CustomEvent_Realm___Fog_Day, int32 K2Node_CustomEvent_Realm___Fog_Night, int32 K2Node_CustomEvent_Realm___Aurora, int32 K2Node_CustomEvent_Realm___Cloud, bool K2Node_CustomEvent_Primary_Function_Override, int32 K2Node_CustomEvent_Realm___Rain, int32 K2Node_CustomEvent_Realm___Color___Category, int32 K2Node_CustomEvent_Realm___Color, int32 K2Node_CustomEvent_Realm___Celestial_Color, int32 K2Node_CustomEvent_Realm_Color_Saturation, bool K2Node_CustomEvent_Visual_Environment_Preset_Override, int32 K2Node_CustomEvent_Visual_Environment_Preset_, int32 K2Node_CustomEvent_Realm___Fog___Density, int32 K2Node_CustomEvent_Realm___Fog___Opacity, int32 K2Node_CustomEvent_Realm___Fog___Falloff, int32 K2Node_CustomEvent_Realm___Fog___Height, int32 K2Node_CustomEvent_Realm___Fog___Density___Night, int32 K2Node_CustomEvent_Realm___Fog___Opacity___Night, int32 K2Node_CustomEvent_Realm___Fog___Falloff___Night, int32 K2Node_CustomEvent_Realm___Fog___Height___Night, bool K2Node_CustomEvent_Manual_Wind_Control, double K2Node_CustomEvent_Wind_Speed___Manual, double K2Node_CustomEvent_Wind_Strength___Manual, const struct FVector& K2Node_CustomEvent_Wind_Direction___Manual, int32 K2Node_CustomEvent_Realm___Cloud_Albedo, int32 K2Node_CustomEvent_Realm___Cloud_Albedo_Saturation, bool K2Node_CustomEvent_Fog_Dev_Override, int32 K2Node_CustomEvent_Realm___Fog___Cave_Override, bool K2Node_CustomEvent_Manual_Fog_Only_Override, bool K2Node_CustomEvent_Fog_Color_Override, bool K2Node_CustomEvent_Cloud_Aurora_Manual_Selection, int32 K2Node_CustomEvent_Realm___Color_Master_Table, int32 K2Node_CustomEvent_Realm___Color_Select, int32 K2Node_CustomEvent_Realm___Atmosphere_Master_Select, enum class EAtmosphere_Master K2Node_CustomEvent_Visual_Environmet_Preset, int32 K2Node_CustomEvent_Realm___Vault_Override, bool K2Node_CustomEvent_WindSpeedDebug, double K2Node_CustomEvent_ActualTimeOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Weather_C", "ExecuteUbergraph_TimeofDay_Weather");

	Params::UTimeofDay_Weather_C_ExecuteUbergraph_TimeofDay_Weather_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_AdjustedTime = K2Node_CustomEvent_AdjustedTime;
	Parms.K2Node_CustomEvent_ActualTime = K2Node_CustomEvent_ActualTime;
	Parms.K2Node_CustomEvent_SpatialSynchFrequency = K2Node_CustomEvent_SpatialSynchFrequency;
	Parms.K2Node_CustomEvent_DeltaSeconds = K2Node_CustomEvent_DeltaSeconds;
	Parms.K2Node_CustomEvent_Exponential_Height_Fog = K2Node_CustomEvent_Exponential_Height_Fog;
	Parms.K2Node_CustomEvent_Directional_Light_Sun = K2Node_CustomEvent_Directional_Light_Sun;
	Parms.K2Node_CustomEvent_Directional_Light_Celestial = K2Node_CustomEvent_Directional_Light_Celestial;
	Parms.K2Node_CustomEvent_Wind_Directional_Source = K2Node_CustomEvent_Wind_Directional_Source;
	Parms.K2Node_CustomEvent_Wind_Directional_Source_Testing = K2Node_CustomEvent_Wind_Directional_Source_Testing;
	Parms.K2Node_CustomEvent_Color_Data_Table = K2Node_CustomEvent_Color_Data_Table;
	Parms.K2Node_CustomEvent_Cloud_Type = K2Node_CustomEvent_Cloud_Type;
	Parms.K2Node_CustomEvent_Volumetric_Aurora = K2Node_CustomEvent_Volumetric_Aurora;
	Parms.K2Node_CustomEvent_Fog_Change_w_Weather_Disable = K2Node_CustomEvent_Fog_Change_w_Weather_Disable;
	Parms.K2Node_CustomEvent_Color_Category = K2Node_CustomEvent_Color_Category;
	Parms.K2Node_CustomEvent_Color_Data_Table_Categories = K2Node_CustomEvent_Color_Data_Table_Categories;
	Parms.K2Node_CustomEvent_Color = K2Node_CustomEvent_Color;
	Parms.K2Node_CustomEvent_Color_Saturation = K2Node_CustomEvent_Color_Saturation;
	Parms.K2Node_CustomEvent_Fog_Height = K2Node_CustomEvent_Fog_Height;
	Parms.K2Node_CustomEvent_Fog_Falloff = K2Node_CustomEvent_Fog_Falloff;
	Parms.K2Node_CustomEvent_Cloud_Category = K2Node_CustomEvent_Cloud_Category;
	Parms.K2Node_CustomEvent_Fog_Color_Override___Adv = K2Node_CustomEvent_Fog_Color_Override___Adv;
	Parms.K2Node_CustomEvent_Fog_Color___Adv = K2Node_CustomEvent_Fog_Color___Adv;
	Parms.K2Node_CustomEvent_Fog_Color_Saturation___Adv = K2Node_CustomEvent_Fog_Color_Saturation___Adv;
	Parms.K2Node_CustomEvent_RayLeigh_Color = K2Node_CustomEvent_RayLeigh_Color;
	Parms.K2Node_CustomEvent_Main_Celestial_Color = K2Node_CustomEvent_Main_Celestial_Color;
	Parms.K2Node_CustomEvent_Main_Celestial_Color_Override_Adv = K2Node_CustomEvent_Main_Celestial_Color_Override_Adv;
	Parms.K2Node_CustomEvent_Sky_Luminance_Color_Override_Adv = K2Node_CustomEvent_Sky_Luminance_Color_Override_Adv;
	Parms.K2Node_CustomEvent_Fog___Density = K2Node_CustomEvent_Fog___Density;
	Parms.K2Node_CustomEvent_Fog___Opacity = K2Node_CustomEvent_Fog___Opacity;
	Parms.K2Node_CustomEvent_Fog___Density___Night = K2Node_CustomEvent_Fog___Density___Night;
	Parms.K2Node_CustomEvent_Fog___Opacity___Night = K2Node_CustomEvent_Fog___Opacity___Night;
	Parms.K2Node_CustomEvent_Fog___Height___Night = K2Node_CustomEvent_Fog___Height___Night;
	Parms.K2Node_CustomEvent_Fog___Falloff___Night = K2Node_CustomEvent_Fog___Falloff___Night;
	Parms.K2Node_CustomEvent_Realm___Fog_Day = K2Node_CustomEvent_Realm___Fog_Day;
	Parms.K2Node_CustomEvent_Realm___Fog_Night = K2Node_CustomEvent_Realm___Fog_Night;
	Parms.K2Node_CustomEvent_Realm___Aurora = K2Node_CustomEvent_Realm___Aurora;
	Parms.K2Node_CustomEvent_Realm___Cloud = K2Node_CustomEvent_Realm___Cloud;
	Parms.K2Node_CustomEvent_Primary_Function_Override = K2Node_CustomEvent_Primary_Function_Override;
	Parms.K2Node_CustomEvent_Realm___Rain = K2Node_CustomEvent_Realm___Rain;
	Parms.K2Node_CustomEvent_Realm___Color___Category = K2Node_CustomEvent_Realm___Color___Category;
	Parms.K2Node_CustomEvent_Realm___Color = K2Node_CustomEvent_Realm___Color;
	Parms.K2Node_CustomEvent_Realm___Celestial_Color = K2Node_CustomEvent_Realm___Celestial_Color;
	Parms.K2Node_CustomEvent_Realm_Color_Saturation = K2Node_CustomEvent_Realm_Color_Saturation;
	Parms.K2Node_CustomEvent_Visual_Environment_Preset_Override = K2Node_CustomEvent_Visual_Environment_Preset_Override;
	Parms.K2Node_CustomEvent_Visual_Environment_Preset_ = K2Node_CustomEvent_Visual_Environment_Preset_;
	Parms.K2Node_CustomEvent_Realm___Fog___Density = K2Node_CustomEvent_Realm___Fog___Density;
	Parms.K2Node_CustomEvent_Realm___Fog___Opacity = K2Node_CustomEvent_Realm___Fog___Opacity;
	Parms.K2Node_CustomEvent_Realm___Fog___Falloff = K2Node_CustomEvent_Realm___Fog___Falloff;
	Parms.K2Node_CustomEvent_Realm___Fog___Height = K2Node_CustomEvent_Realm___Fog___Height;
	Parms.K2Node_CustomEvent_Realm___Fog___Density___Night = K2Node_CustomEvent_Realm___Fog___Density___Night;
	Parms.K2Node_CustomEvent_Realm___Fog___Opacity___Night = K2Node_CustomEvent_Realm___Fog___Opacity___Night;
	Parms.K2Node_CustomEvent_Realm___Fog___Falloff___Night = K2Node_CustomEvent_Realm___Fog___Falloff___Night;
	Parms.K2Node_CustomEvent_Realm___Fog___Height___Night = K2Node_CustomEvent_Realm___Fog___Height___Night;
	Parms.K2Node_CustomEvent_Manual_Wind_Control = K2Node_CustomEvent_Manual_Wind_Control;
	Parms.K2Node_CustomEvent_Wind_Speed___Manual = K2Node_CustomEvent_Wind_Speed___Manual;
	Parms.K2Node_CustomEvent_Wind_Strength___Manual = K2Node_CustomEvent_Wind_Strength___Manual;
	Parms.K2Node_CustomEvent_Wind_Direction___Manual = K2Node_CustomEvent_Wind_Direction___Manual;
	Parms.K2Node_CustomEvent_Realm___Cloud_Albedo = K2Node_CustomEvent_Realm___Cloud_Albedo;
	Parms.K2Node_CustomEvent_Realm___Cloud_Albedo_Saturation = K2Node_CustomEvent_Realm___Cloud_Albedo_Saturation;
	Parms.K2Node_CustomEvent_Fog_Dev_Override = K2Node_CustomEvent_Fog_Dev_Override;
	Parms.K2Node_CustomEvent_Realm___Fog___Cave_Override = K2Node_CustomEvent_Realm___Fog___Cave_Override;
	Parms.K2Node_CustomEvent_Manual_Fog_Only_Override = K2Node_CustomEvent_Manual_Fog_Only_Override;
	Parms.K2Node_CustomEvent_Fog_Color_Override = K2Node_CustomEvent_Fog_Color_Override;
	Parms.K2Node_CustomEvent_Cloud_Aurora_Manual_Selection = K2Node_CustomEvent_Cloud_Aurora_Manual_Selection;
	Parms.K2Node_CustomEvent_Realm___Color_Master_Table = K2Node_CustomEvent_Realm___Color_Master_Table;
	Parms.K2Node_CustomEvent_Realm___Color_Select = K2Node_CustomEvent_Realm___Color_Select;
	Parms.K2Node_CustomEvent_Realm___Atmosphere_Master_Select = K2Node_CustomEvent_Realm___Atmosphere_Master_Select;
	Parms.K2Node_CustomEvent_Visual_Environmet_Preset = K2Node_CustomEvent_Visual_Environmet_Preset;
	Parms.K2Node_CustomEvent_Realm___Vault_Override = K2Node_CustomEvent_Realm___Vault_Override;
	Parms.K2Node_CustomEvent_WindSpeedDebug = K2Node_CustomEvent_WindSpeedDebug;
	Parms.K2Node_CustomEvent_ActualTimeOverride = K2Node_CustomEvent_ActualTimeOverride;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TimeofDay_Weather.TimeofDay_Weather_C.On_Fog_Height_Inherit_Changed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Fog_Height_Inherit                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Weather_C::On_Fog_Height_Inherit_Changed__DelegateSignature(double Fog_Height_Inherit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Weather_C", "On_Fog_Height_Inherit_Changed__DelegateSignature");

	Params::UTimeofDay_Weather_C_On_Fog_Height_Inherit_Changed__DelegateSignature_Params Parms{};

	Parms.Fog_Height_Inherit = Fog_Height_Inherit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TimeofDay_Weather.TimeofDay_Weather_C.On_Fog_Density_Inherit_Changed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Fog_Density_Inherit                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Weather_C::On_Fog_Density_Inherit_Changed__DelegateSignature(double Fog_Density_Inherit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Weather_C", "On_Fog_Density_Inherit_Changed__DelegateSignature");

	Params::UTimeofDay_Weather_C_On_Fog_Density_Inherit_Changed__DelegateSignature_Params Parms{};

	Parms.Fog_Density_Inherit = Fog_Density_Inherit;

	UObject::ProcessEvent(Func, &Parms);

}

}


