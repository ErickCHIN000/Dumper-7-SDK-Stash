#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TimeofDay_Seasons.TimeofDay_Seasons_C
// (None)

class UClass* UTimeofDay_Seasons_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TimeofDay_Seasons_C");

	return Clss;
}


// TimeofDay_Seasons_C TimeofDay_Seasons.Default__TimeofDay_Seasons_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTimeofDay_Seasons_C* UTimeofDay_Seasons_C::GetDefaultObj()
{
	static class UTimeofDay_Seasons_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTimeofDay_Seasons_C*>(UTimeofDay_Seasons_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TimeofDay_Seasons.TimeofDay_Seasons_C.MPC Cache
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_MPC_Biome                CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_Cached_Biome_Index_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Seasons_C::MPC_Cache(TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, const struct FS_MPC_Biome& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, float K2Node_VariableSet_Cached_Biome_Index_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Seasons_C", "MPC Cache");

	Params::UTimeofDay_Seasons_C_MPC_Cache_Params Parms{};

	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.K2Node_VariableSet_Cached_Biome_Index_ImplicitCast = K2Node_VariableSet_Cached_Biome_Index_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TimeofDay_Seasons.TimeofDay_Seasons_C.Rapid Color Adjust Cache
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Rapid_Color_Biome        CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_1                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_RapidColorAdjust         CallFunc_GetDataTableRowFromName_OutRow_1                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_A_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_A_ImplicitCast_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_A_ImplicitCast_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_A_ImplicitCast_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_A_ImplicitCast_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_A_ImplicitCast_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Seasons_C::Rapid_Color_Adjust_Cache(TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, const struct FS_Rapid_Color_Biome& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UDataTable* CallFunc_Array_Get_Item_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_1, class FName CallFunc_Array_Get_Item_2, const struct FS_RapidColorAdjust& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& K2Node_MakeStruct_LinearColor_1, const struct FLinearColor& K2Node_MakeStruct_LinearColor_2, const struct FLinearColor& K2Node_MakeStruct_LinearColor_3, const struct FLinearColor& K2Node_MakeStruct_LinearColor_4, const struct FLinearColor& K2Node_MakeStruct_LinearColor_5, float K2Node_MakeStruct_A_ImplicitCast, float K2Node_MakeStruct_A_ImplicitCast_1, float K2Node_MakeStruct_A_ImplicitCast_2, float K2Node_MakeStruct_A_ImplicitCast_3, float K2Node_MakeStruct_A_ImplicitCast_4, float K2Node_MakeStruct_A_ImplicitCast_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Seasons_C", "Rapid Color Adjust Cache");

	Params::UTimeofDay_Seasons_C_Rapid_Color_Adjust_Cache_Params Parms{};

	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_1 = CallFunc_GetDataTableRowNames_OutRowNames_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.K2Node_MakeStruct_LinearColor_1 = K2Node_MakeStruct_LinearColor_1;
	Parms.K2Node_MakeStruct_LinearColor_2 = K2Node_MakeStruct_LinearColor_2;
	Parms.K2Node_MakeStruct_LinearColor_3 = K2Node_MakeStruct_LinearColor_3;
	Parms.K2Node_MakeStruct_LinearColor_4 = K2Node_MakeStruct_LinearColor_4;
	Parms.K2Node_MakeStruct_LinearColor_5 = K2Node_MakeStruct_LinearColor_5;
	Parms.K2Node_MakeStruct_A_ImplicitCast = K2Node_MakeStruct_A_ImplicitCast;
	Parms.K2Node_MakeStruct_A_ImplicitCast_1 = K2Node_MakeStruct_A_ImplicitCast_1;
	Parms.K2Node_MakeStruct_A_ImplicitCast_2 = K2Node_MakeStruct_A_ImplicitCast_2;
	Parms.K2Node_MakeStruct_A_ImplicitCast_3 = K2Node_MakeStruct_A_ImplicitCast_3;
	Parms.K2Node_MakeStruct_A_ImplicitCast_4 = K2Node_MakeStruct_A_ImplicitCast_4;
	Parms.K2Node_MakeStruct_A_ImplicitCast_5 = K2Node_MakeStruct_A_ImplicitCast_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TimeofDay_Seasons.TimeofDay_Seasons_C.Season Cache
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Cached_Season                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_SeasonType               CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Seasons_C::Season_Cache(double* Cached_Season, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, const struct FS_SeasonType& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Seasons_C", "Season Cache");

	Params::UTimeofDay_Seasons_C_Season_Cache_Params Parms{};

	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Cached_Season != nullptr)
		*Cached_Season = Parms.Cached_Season;

}


// Function TimeofDay_Seasons.TimeofDay_Seasons_C.Glowing_Resource_Adjust
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Seasons_C::Glowing_Resource_Adjust(const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& CallFunc_Array_Get_Item, const struct FLinearColor& K2Node_MakeStruct_LinearColor_1, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Seasons_C", "Glowing_Resource_Adjust");

	Params::UTimeofDay_Seasons_C_Glowing_Resource_Adjust_Params Parms{};

	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_MakeStruct_LinearColor_1 = K2Node_MakeStruct_LinearColor_1;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TimeofDay_Seasons.TimeofDay_Seasons_C.MPC_Biome_Settings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCurveFloat*                 Desert_Mirage_Lerp                                               (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             AdjustedTime24Hour                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeUnclamped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeUnclamped_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeUnclamped_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_1                      (ReferenceParm)
// double                             CallFunc_Conv_ByteToDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_VE_Preset_Master         CallFunc_GetDataTableRowFromName_OutRow                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_MPC_Biome                CallFunc_GetDataTableRowFromName_OutRow_1                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_3   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_4   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_5   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_6   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_7   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_8   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_9   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_10  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_11  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_12  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_13  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_14  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_15  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_16  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_17  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_18  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_19  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_20  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_21  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_22  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Seasons_C::MPC_Biome_Settings(class UCurveFloat* Desert_Mirage_Lerp, double AdjustedTime24Hour, double CallFunc_FClamp_ReturnValue, double CallFunc_MapRangeUnclamped_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, double CallFunc_FClamp_ReturnValue_1, double CallFunc_MapRangeUnclamped_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Lerp_ReturnValue, float CallFunc_GetFloatValue_ReturnValue_1, double CallFunc_FClamp_ReturnValue_2, double CallFunc_MapRangeUnclamped_ReturnValue_2, float CallFunc_GetFloatValue_ReturnValue_2, double CallFunc_Lerp_ReturnValue_1, double CallFunc_Lerp_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_1, double CallFunc_Conv_ByteToDouble_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue, class FName CallFunc_Array_Get_Item, bool K2Node_SwitchInteger_CmpSuccess, const struct FS_VE_Preset_Master& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, class FName CallFunc_Array_Get_Item_1, const struct FS_MPC_Biome& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, double CallFunc_Conv_IntToDouble_ReturnValue_1, int32 CallFunc_Conv_BoolToInt_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess_1, float CallFunc_GetFloatValue_InTime_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast_1, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast_1, float CallFunc_GetFloatValue_InTime_ImplicitCast_2, double CallFunc_Lerp_Alpha_ImplicitCast_2, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_3, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_4, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_5, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_6, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_7, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_8, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_9, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_10, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_11, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_12, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_13, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_14, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_15, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_16, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_17, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_18, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_19, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_20, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_21, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_22)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Seasons_C", "MPC_Biome_Settings");

	Params::UTimeofDay_Seasons_C_MPC_Biome_Settings_Params Parms{};

	Parms.Desert_Mirage_Lerp = Desert_Mirage_Lerp;
	Parms.AdjustedTime24Hour = AdjustedTime24Hour;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue = CallFunc_MapRangeUnclamped_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue_1 = CallFunc_MapRangeUnclamped_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue_1 = CallFunc_GetFloatValue_ReturnValue_1;
	Parms.CallFunc_FClamp_ReturnValue_2 = CallFunc_FClamp_ReturnValue_2;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue_2 = CallFunc_MapRangeUnclamped_ReturnValue_2;
	Parms.CallFunc_GetFloatValue_ReturnValue_2 = CallFunc_GetFloatValue_ReturnValue_2;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_1 = CallFunc_GetDataTableRowNames_OutRowNames_1;
	Parms.CallFunc_Conv_ByteToDouble_ReturnValue = CallFunc_Conv_ByteToDouble_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_1 = CallFunc_Conv_IntToDouble_ReturnValue_1;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_1 = CallFunc_Conv_BoolToInt_ReturnValue_1;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast = CallFunc_GetFloatValue_InTime_ImplicitCast;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast = CallFunc_Lerp_Alpha_ImplicitCast;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_1 = CallFunc_GetFloatValue_InTime_ImplicitCast_1;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_1 = CallFunc_Lerp_Alpha_ImplicitCast_1;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_2 = CallFunc_GetFloatValue_InTime_ImplicitCast_2;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_2 = CallFunc_Lerp_Alpha_ImplicitCast_2;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_3 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_3;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_4 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_4;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_5 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_5;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_6 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_6;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_7 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_7;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_8 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_8;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_9 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_9;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_10 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_10;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_11 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_11;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_12 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_12;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_13 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_13;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_14 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_14;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_15 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_15;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_16 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_16;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_17 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_17;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_18 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_18;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_19 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_19;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_20 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_20;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_21 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_21;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_22 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_22;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TimeofDay_Seasons.TimeofDay_Seasons_C.Rapid_Color_Adjust
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_ByteToDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_1                      (ReferenceParm)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_VE_Preset_Master         CallFunc_GetDataTableRowFromName_OutRow                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_2                      (ReferenceParm)
// struct FS_Rapid_Color_Biome        CallFunc_GetDataTableRowFromName_OutRow_1                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_RapidColorAdjust         CallFunc_GetDataTableRowFromName_OutRow_2                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  CallFunc_Array_Get_Item_3                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_3                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_RapidColorAdjust         CallFunc_GetDataTableRowFromName_OutRow_3                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor_10                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor_11                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor_12                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor_13                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor_14                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor_15                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor_16                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor_17                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_A_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_A_ImplicitCast_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_A_ImplicitCast_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_A_ImplicitCast_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_A_ImplicitCast_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_A_ImplicitCast_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_A_ImplicitCast_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_A_ImplicitCast_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_A_ImplicitCast_8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_A_ImplicitCast_9                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_A_ImplicitCast_10                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_A_ImplicitCast_11                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_A_ImplicitCast_12                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_A_ImplicitCast_13                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_A_ImplicitCast_14                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_A_ImplicitCast_15                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_A_ImplicitCast_16                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_A_ImplicitCast_17                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Seasons_C::Rapid_Color_Adjust(TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Conv_BoolToInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, double CallFunc_Conv_ByteToDouble_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_1, int32 CallFunc_FTrunc_ReturnValue, class FName CallFunc_Array_Get_Item, int32 CallFunc_Conv_BoolToInt_ReturnValue_1, const struct FS_VE_Preset_Master& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess_1, class FName CallFunc_Array_Get_Item_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_2, const struct FS_Rapid_Color_Biome& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, class FName CallFunc_Array_Get_Item_2, const struct FS_RapidColorAdjust& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, class UDataTable* CallFunc_Array_Get_Item_3, const struct FLinearColor& K2Node_MakeStruct_LinearColor, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_3, class FName CallFunc_Array_Get_Item_4, const struct FS_RapidColorAdjust& CallFunc_GetDataTableRowFromName_OutRow_3, bool CallFunc_GetDataTableRowFromName_ReturnValue_3, const struct FLinearColor& K2Node_MakeStruct_LinearColor_1, const struct FLinearColor& K2Node_MakeStruct_LinearColor_2, const struct FLinearColor& K2Node_MakeStruct_LinearColor_3, const struct FLinearColor& K2Node_MakeStruct_LinearColor_4, const struct FLinearColor& K2Node_MakeStruct_LinearColor_5, const struct FLinearColor& K2Node_MakeStruct_LinearColor_6, const struct FLinearColor& K2Node_MakeStruct_LinearColor_7, const struct FLinearColor& K2Node_MakeStruct_LinearColor_8, const struct FLinearColor& K2Node_MakeStruct_LinearColor_9, const struct FLinearColor& K2Node_MakeStruct_LinearColor_10, const struct FLinearColor& K2Node_MakeStruct_LinearColor_11, const struct FLinearColor& K2Node_MakeStruct_LinearColor_12, const struct FLinearColor& K2Node_MakeStruct_LinearColor_13, const struct FLinearColor& K2Node_MakeStruct_LinearColor_14, const struct FLinearColor& K2Node_MakeStruct_LinearColor_15, const struct FLinearColor& K2Node_MakeStruct_LinearColor_16, const struct FLinearColor& K2Node_MakeStruct_LinearColor_17, int32 CallFunc_Conv_BoolToInt_ReturnValue_2, bool K2Node_SwitchInteger_CmpSuccess_2, int32 CallFunc_Conv_BoolToInt_ReturnValue_3, bool K2Node_SwitchInteger_CmpSuccess_3, float K2Node_MakeStruct_A_ImplicitCast, float K2Node_MakeStruct_A_ImplicitCast_1, float K2Node_MakeStruct_A_ImplicitCast_2, float K2Node_MakeStruct_A_ImplicitCast_3, float K2Node_MakeStruct_A_ImplicitCast_4, float K2Node_MakeStruct_A_ImplicitCast_5, float K2Node_MakeStruct_A_ImplicitCast_6, float K2Node_MakeStruct_A_ImplicitCast_7, float K2Node_MakeStruct_A_ImplicitCast_8, float K2Node_MakeStruct_A_ImplicitCast_9, float K2Node_MakeStruct_A_ImplicitCast_10, float K2Node_MakeStruct_A_ImplicitCast_11, float K2Node_MakeStruct_A_ImplicitCast_12, float K2Node_MakeStruct_A_ImplicitCast_13, float K2Node_MakeStruct_A_ImplicitCast_14, float K2Node_MakeStruct_A_ImplicitCast_15, float K2Node_MakeStruct_A_ImplicitCast_16, float K2Node_MakeStruct_A_ImplicitCast_17)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Seasons_C", "Rapid_Color_Adjust");

	Params::UTimeofDay_Seasons_C_Rapid_Color_Adjust_Params Parms{};

	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Conv_ByteToDouble_ReturnValue = CallFunc_Conv_ByteToDouble_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_1 = CallFunc_GetDataTableRowNames_OutRowNames_1;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_1 = CallFunc_Conv_BoolToInt_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_2 = CallFunc_GetDataTableRowNames_OutRowNames_2;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_2 = CallFunc_GetDataTableRowFromName_OutRow_2;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_2 = CallFunc_GetDataTableRowFromName_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_3 = CallFunc_GetDataTableRowNames_OutRowNames_3;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_3 = CallFunc_GetDataTableRowFromName_OutRow_3;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_3 = CallFunc_GetDataTableRowFromName_ReturnValue_3;
	Parms.K2Node_MakeStruct_LinearColor_1 = K2Node_MakeStruct_LinearColor_1;
	Parms.K2Node_MakeStruct_LinearColor_2 = K2Node_MakeStruct_LinearColor_2;
	Parms.K2Node_MakeStruct_LinearColor_3 = K2Node_MakeStruct_LinearColor_3;
	Parms.K2Node_MakeStruct_LinearColor_4 = K2Node_MakeStruct_LinearColor_4;
	Parms.K2Node_MakeStruct_LinearColor_5 = K2Node_MakeStruct_LinearColor_5;
	Parms.K2Node_MakeStruct_LinearColor_6 = K2Node_MakeStruct_LinearColor_6;
	Parms.K2Node_MakeStruct_LinearColor_7 = K2Node_MakeStruct_LinearColor_7;
	Parms.K2Node_MakeStruct_LinearColor_8 = K2Node_MakeStruct_LinearColor_8;
	Parms.K2Node_MakeStruct_LinearColor_9 = K2Node_MakeStruct_LinearColor_9;
	Parms.K2Node_MakeStruct_LinearColor_10 = K2Node_MakeStruct_LinearColor_10;
	Parms.K2Node_MakeStruct_LinearColor_11 = K2Node_MakeStruct_LinearColor_11;
	Parms.K2Node_MakeStruct_LinearColor_12 = K2Node_MakeStruct_LinearColor_12;
	Parms.K2Node_MakeStruct_LinearColor_13 = K2Node_MakeStruct_LinearColor_13;
	Parms.K2Node_MakeStruct_LinearColor_14 = K2Node_MakeStruct_LinearColor_14;
	Parms.K2Node_MakeStruct_LinearColor_15 = K2Node_MakeStruct_LinearColor_15;
	Parms.K2Node_MakeStruct_LinearColor_16 = K2Node_MakeStruct_LinearColor_16;
	Parms.K2Node_MakeStruct_LinearColor_17 = K2Node_MakeStruct_LinearColor_17;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_2 = CallFunc_Conv_BoolToInt_ReturnValue_2;
	Parms.K2Node_SwitchInteger_CmpSuccess_2 = K2Node_SwitchInteger_CmpSuccess_2;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_3 = CallFunc_Conv_BoolToInt_ReturnValue_3;
	Parms.K2Node_SwitchInteger_CmpSuccess_3 = K2Node_SwitchInteger_CmpSuccess_3;
	Parms.K2Node_MakeStruct_A_ImplicitCast = K2Node_MakeStruct_A_ImplicitCast;
	Parms.K2Node_MakeStruct_A_ImplicitCast_1 = K2Node_MakeStruct_A_ImplicitCast_1;
	Parms.K2Node_MakeStruct_A_ImplicitCast_2 = K2Node_MakeStruct_A_ImplicitCast_2;
	Parms.K2Node_MakeStruct_A_ImplicitCast_3 = K2Node_MakeStruct_A_ImplicitCast_3;
	Parms.K2Node_MakeStruct_A_ImplicitCast_4 = K2Node_MakeStruct_A_ImplicitCast_4;
	Parms.K2Node_MakeStruct_A_ImplicitCast_5 = K2Node_MakeStruct_A_ImplicitCast_5;
	Parms.K2Node_MakeStruct_A_ImplicitCast_6 = K2Node_MakeStruct_A_ImplicitCast_6;
	Parms.K2Node_MakeStruct_A_ImplicitCast_7 = K2Node_MakeStruct_A_ImplicitCast_7;
	Parms.K2Node_MakeStruct_A_ImplicitCast_8 = K2Node_MakeStruct_A_ImplicitCast_8;
	Parms.K2Node_MakeStruct_A_ImplicitCast_9 = K2Node_MakeStruct_A_ImplicitCast_9;
	Parms.K2Node_MakeStruct_A_ImplicitCast_10 = K2Node_MakeStruct_A_ImplicitCast_10;
	Parms.K2Node_MakeStruct_A_ImplicitCast_11 = K2Node_MakeStruct_A_ImplicitCast_11;
	Parms.K2Node_MakeStruct_A_ImplicitCast_12 = K2Node_MakeStruct_A_ImplicitCast_12;
	Parms.K2Node_MakeStruct_A_ImplicitCast_13 = K2Node_MakeStruct_A_ImplicitCast_13;
	Parms.K2Node_MakeStruct_A_ImplicitCast_14 = K2Node_MakeStruct_A_ImplicitCast_14;
	Parms.K2Node_MakeStruct_A_ImplicitCast_15 = K2Node_MakeStruct_A_ImplicitCast_15;
	Parms.K2Node_MakeStruct_A_ImplicitCast_16 = K2Node_MakeStruct_A_ImplicitCast_16;
	Parms.K2Node_MakeStruct_A_ImplicitCast_17 = K2Node_MakeStruct_A_ImplicitCast_17;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TimeofDay_Seasons.TimeofDay_Seasons_C.Season
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             AdjustedTime24Hour                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// double                             CallFunc_Conv_ByteToDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_VE_Preset_Master         CallFunc_GetDataTableRowFromName_OutRow                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraParameterCollectionInstance*CallFunc_GetNiagaraParameterCollection_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_1                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_SeasonType               CallFunc_GetDataTableRowFromName_OutRow_1                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraParameterCollectionInstance*CallFunc_GetNiagaraParameterCollection_ReturnValue_1             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_InValue_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_InValue_ImplicitCast_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Seasons_C::Season(double AdjustedTime24Hour, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, double CallFunc_Conv_ByteToDouble_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, class FName CallFunc_Array_Get_Item, const struct FS_VE_Preset_Master& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UNiagaraParameterCollectionInstance* CallFunc_GetNiagaraParameterCollection_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_1, class FName CallFunc_Array_Get_Item_1, int32 CallFunc_Conv_BoolToInt_ReturnValue, const struct FS_SeasonType& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess, double CallFunc_Conv_IntToDouble_ReturnValue_1, class UNiagaraParameterCollectionInstance* CallFunc_GetNiagaraParameterCollection_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_SetFloatParameter_InValue_ImplicitCast, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1, float CallFunc_SetFloatParameter_InValue_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Seasons_C", "Season");

	Params::UTimeofDay_Seasons_C_Season_Params Parms{};

	Parms.AdjustedTime24Hour = AdjustedTime24Hour;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Conv_ByteToDouble_ReturnValue = CallFunc_Conv_ByteToDouble_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetNiagaraParameterCollection_ReturnValue = CallFunc_GetNiagaraParameterCollection_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_1 = CallFunc_GetDataTableRowNames_OutRowNames_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_1 = CallFunc_Conv_IntToDouble_ReturnValue_1;
	Parms.CallFunc_GetNiagaraParameterCollection_ReturnValue_1 = CallFunc_GetNiagaraParameterCollection_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_SetFloatParameter_InValue_ImplicitCast = CallFunc_SetFloatParameter_InValue_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1;
	Parms.CallFunc_SetFloatParameter_InValue_ImplicitCast_1 = CallFunc_SetFloatParameter_InValue_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TimeofDay_Seasons.TimeofDay_Seasons_C.Initialize_Seasons
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Adjusted_Time                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Seasons_C::Initialize_Seasons(double Adjusted_Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Seasons_C", "Initialize_Seasons");

	Params::UTimeofDay_Seasons_C_Initialize_Seasons_Params Parms{};

	Parms.Adjusted_Time = Adjusted_Time;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TimeofDay_Seasons.TimeofDay_Seasons_C.Set_up_references
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Primary_Function_Override                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Season                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Visual_Environment_Preset_Override                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Visual_Environment_Preset_                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Manual_Season                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Rapid_Color_Adjust_Preset                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Adjust_Amount_Global                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Lightness_Global                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Rapid_Color_Adjust_Preset_Override                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Sand_Blend                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Foliage_Blend                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Bark_Blend                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Grass_Blend                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Rock_Blend                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Water_Blend                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Sand_Color_Linear                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Foliage_Color_Linear                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Bark_Color_Linear                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Grass_Color_Linear                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Rock_Color_Linear                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Water_Color_Linear                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Rapid_Color_Adjust_VEP_Override                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MPC_Biome                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MPC_Manual_Override                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             SideProjection_UVScale                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MacroColor_UVScale                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             VistaMacroColor_UVScale                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             LandscapeOverlay_UVScale                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Glowing_Resource_Toggle                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Main_Celestial_Color                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Atmosphere_Master_Select                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAtmosphere_Master      Visual_Environmet_Preset                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             SeaLevelGradient_BandScale                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             SeaLevelGradient_Mask_Scale                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                SealLevelGradient_Low_Color                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                SealLevelGradient_Mid_Color                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                SealLevelGradient_High_Color                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Rapid_Color_Biome                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Seasons_C::Set_up_references(bool Primary_Function_Override, int32 Realm_Minus_Season, bool Visual_Environment_Preset_Override, int32 Visual_Environment_Preset_, double Manual_Season, int32 Rapid_Color_Adjust_Preset, double Adjust_Amount_Global, double Lightness_Global, bool Rapid_Color_Adjust_Preset_Override, double Sand_Blend, double Foliage_Blend, double Bark_Blend, double Grass_Blend, double Rock_Blend, double Water_Blend, const struct FLinearColor& Sand_Color_Linear, const struct FLinearColor& Foliage_Color_Linear, const struct FLinearColor& Bark_Color_Linear, const struct FLinearColor& Grass_Color_Linear, const struct FLinearColor& Rock_Color_Linear, const struct FLinearColor& Water_Color_Linear, bool Rapid_Color_Adjust_VEP_Override, int32 MPC_Biome, bool MPC_Manual_Override, double SideProjection_UVScale, double MacroColor_UVScale, double VistaMacroColor_UVScale, double LandscapeOverlay_UVScale, int32 Realm_Minus_Glowing_Resource_Toggle, int32 Realm_Minus_Main_Celestial_Color, int32 Realm_Minus_Atmosphere_Master_Select, enum class EAtmosphere_Master Visual_Environmet_Preset, double SeaLevelGradient_BandScale, double SeaLevelGradient_Mask_Scale, const struct FLinearColor& SealLevelGradient_Low_Color, const struct FLinearColor& SealLevelGradient_Mid_Color, const struct FLinearColor& SealLevelGradient_High_Color, int32 Rapid_Color_Biome)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Seasons_C", "Set_up_references");

	Params::UTimeofDay_Seasons_C_Set_up_references_Params Parms{};

	Parms.Primary_Function_Override = Primary_Function_Override;
	Parms.Realm_Minus_Season = Realm_Minus_Season;
	Parms.Visual_Environment_Preset_Override = Visual_Environment_Preset_Override;
	Parms.Visual_Environment_Preset_ = Visual_Environment_Preset_;
	Parms.Manual_Season = Manual_Season;
	Parms.Rapid_Color_Adjust_Preset = Rapid_Color_Adjust_Preset;
	Parms.Adjust_Amount_Global = Adjust_Amount_Global;
	Parms.Lightness_Global = Lightness_Global;
	Parms.Rapid_Color_Adjust_Preset_Override = Rapid_Color_Adjust_Preset_Override;
	Parms.Sand_Blend = Sand_Blend;
	Parms.Foliage_Blend = Foliage_Blend;
	Parms.Bark_Blend = Bark_Blend;
	Parms.Grass_Blend = Grass_Blend;
	Parms.Rock_Blend = Rock_Blend;
	Parms.Water_Blend = Water_Blend;
	Parms.Sand_Color_Linear = Sand_Color_Linear;
	Parms.Foliage_Color_Linear = Foliage_Color_Linear;
	Parms.Bark_Color_Linear = Bark_Color_Linear;
	Parms.Grass_Color_Linear = Grass_Color_Linear;
	Parms.Rock_Color_Linear = Rock_Color_Linear;
	Parms.Water_Color_Linear = Water_Color_Linear;
	Parms.Rapid_Color_Adjust_VEP_Override = Rapid_Color_Adjust_VEP_Override;
	Parms.MPC_Biome = MPC_Biome;
	Parms.MPC_Manual_Override = MPC_Manual_Override;
	Parms.SideProjection_UVScale = SideProjection_UVScale;
	Parms.MacroColor_UVScale = MacroColor_UVScale;
	Parms.VistaMacroColor_UVScale = VistaMacroColor_UVScale;
	Parms.LandscapeOverlay_UVScale = LandscapeOverlay_UVScale;
	Parms.Realm_Minus_Glowing_Resource_Toggle = Realm_Minus_Glowing_Resource_Toggle;
	Parms.Realm_Minus_Main_Celestial_Color = Realm_Minus_Main_Celestial_Color;
	Parms.Realm_Minus_Atmosphere_Master_Select = Realm_Minus_Atmosphere_Master_Select;
	Parms.Visual_Environmet_Preset = Visual_Environmet_Preset;
	Parms.SeaLevelGradient_BandScale = SeaLevelGradient_BandScale;
	Parms.SeaLevelGradient_Mask_Scale = SeaLevelGradient_Mask_Scale;
	Parms.SealLevelGradient_Low_Color = SealLevelGradient_Low_Color;
	Parms.SealLevelGradient_Mid_Color = SealLevelGradient_Mid_Color;
	Parms.SealLevelGradient_High_Color = SealLevelGradient_High_Color;
	Parms.Rapid_Color_Biome = Rapid_Color_Biome;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TimeofDay_Seasons.TimeofDay_Seasons_C.ExecuteUbergraph_TimeofDay_Seasons
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Adjusted_Time                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Primary_Function_Override                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Season                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Visual_Environment_Preset_Override            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Visual_Environment_Preset_                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Manual_Season                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Rapid_Color_Adjust_Preset                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Adjust_Amount_Global                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Lightness_Global                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Rapid_Color_Adjust_Preset_Override            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Sand_Blend                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Foliage_Blend                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Bark_Blend                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Grass_Blend                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Rock_Blend                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Water_Blend                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_Sand_Color_Linear                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_Foliage_Color_Linear                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_Bark_Color_Linear                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_Grass_Color_Linear                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_Rock_Color_Linear                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_Water_Color_Linear                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Rapid_Color_Adjust_VEP_Override               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_MPC_Biome                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_MPC_Manual_Override                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_SideProjection_UVScale                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_MacroColor_UVScale                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_VistaMacroColor_UVScale                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_LandscapeOverlay_UVScale                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Glowing_Resource_Toggle               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Main_Celestial_Color                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Atmosphere_Master_Select              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAtmosphere_Master      K2Node_CustomEvent_Visual_Environmet_Preset                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_SeaLevelGradient_BandScale                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_SeaLevelGradient_Mask_Scale                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_SealLevelGradient_Low_Color                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_SealLevelGradient_Mid_Color                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_SealLevelGradient_High_Color                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Rapid_Color_Biome                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Season_Cache_Cached_Season                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Seasons_C::ExecuteUbergraph_TimeofDay_Seasons(int32 EntryPoint, double K2Node_CustomEvent_Adjusted_Time, bool K2Node_CustomEvent_Primary_Function_Override, int32 K2Node_CustomEvent_Realm___Season, bool K2Node_CustomEvent_Visual_Environment_Preset_Override, int32 K2Node_CustomEvent_Visual_Environment_Preset_, double K2Node_CustomEvent_Manual_Season, int32 K2Node_CustomEvent_Rapid_Color_Adjust_Preset, double K2Node_CustomEvent_Adjust_Amount_Global, double K2Node_CustomEvent_Lightness_Global, bool K2Node_CustomEvent_Rapid_Color_Adjust_Preset_Override, double K2Node_CustomEvent_Sand_Blend, double K2Node_CustomEvent_Foliage_Blend, double K2Node_CustomEvent_Bark_Blend, double K2Node_CustomEvent_Grass_Blend, double K2Node_CustomEvent_Rock_Blend, double K2Node_CustomEvent_Water_Blend, const struct FLinearColor& K2Node_CustomEvent_Sand_Color_Linear, const struct FLinearColor& K2Node_CustomEvent_Foliage_Color_Linear, const struct FLinearColor& K2Node_CustomEvent_Bark_Color_Linear, const struct FLinearColor& K2Node_CustomEvent_Grass_Color_Linear, const struct FLinearColor& K2Node_CustomEvent_Rock_Color_Linear, const struct FLinearColor& K2Node_CustomEvent_Water_Color_Linear, bool K2Node_CustomEvent_Rapid_Color_Adjust_VEP_Override, int32 K2Node_CustomEvent_MPC_Biome, bool K2Node_CustomEvent_MPC_Manual_Override, double K2Node_CustomEvent_SideProjection_UVScale, double K2Node_CustomEvent_MacroColor_UVScale, double K2Node_CustomEvent_VistaMacroColor_UVScale, double K2Node_CustomEvent_LandscapeOverlay_UVScale, int32 K2Node_CustomEvent_Realm___Glowing_Resource_Toggle, int32 K2Node_CustomEvent_Realm___Main_Celestial_Color, int32 K2Node_CustomEvent_Realm___Atmosphere_Master_Select, enum class EAtmosphere_Master K2Node_CustomEvent_Visual_Environmet_Preset, double K2Node_CustomEvent_SeaLevelGradient_BandScale, double K2Node_CustomEvent_SeaLevelGradient_Mask_Scale, const struct FLinearColor& K2Node_CustomEvent_SealLevelGradient_Low_Color, const struct FLinearColor& K2Node_CustomEvent_SealLevelGradient_Mid_Color, const struct FLinearColor& K2Node_CustomEvent_SealLevelGradient_High_Color, int32 K2Node_CustomEvent_Rapid_Color_Biome, double CallFunc_Season_Cache_Cached_Season)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Seasons_C", "ExecuteUbergraph_TimeofDay_Seasons");

	Params::UTimeofDay_Seasons_C_ExecuteUbergraph_TimeofDay_Seasons_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Adjusted_Time = K2Node_CustomEvent_Adjusted_Time;
	Parms.K2Node_CustomEvent_Primary_Function_Override = K2Node_CustomEvent_Primary_Function_Override;
	Parms.K2Node_CustomEvent_Realm___Season = K2Node_CustomEvent_Realm___Season;
	Parms.K2Node_CustomEvent_Visual_Environment_Preset_Override = K2Node_CustomEvent_Visual_Environment_Preset_Override;
	Parms.K2Node_CustomEvent_Visual_Environment_Preset_ = K2Node_CustomEvent_Visual_Environment_Preset_;
	Parms.K2Node_CustomEvent_Manual_Season = K2Node_CustomEvent_Manual_Season;
	Parms.K2Node_CustomEvent_Rapid_Color_Adjust_Preset = K2Node_CustomEvent_Rapid_Color_Adjust_Preset;
	Parms.K2Node_CustomEvent_Adjust_Amount_Global = K2Node_CustomEvent_Adjust_Amount_Global;
	Parms.K2Node_CustomEvent_Lightness_Global = K2Node_CustomEvent_Lightness_Global;
	Parms.K2Node_CustomEvent_Rapid_Color_Adjust_Preset_Override = K2Node_CustomEvent_Rapid_Color_Adjust_Preset_Override;
	Parms.K2Node_CustomEvent_Sand_Blend = K2Node_CustomEvent_Sand_Blend;
	Parms.K2Node_CustomEvent_Foliage_Blend = K2Node_CustomEvent_Foliage_Blend;
	Parms.K2Node_CustomEvent_Bark_Blend = K2Node_CustomEvent_Bark_Blend;
	Parms.K2Node_CustomEvent_Grass_Blend = K2Node_CustomEvent_Grass_Blend;
	Parms.K2Node_CustomEvent_Rock_Blend = K2Node_CustomEvent_Rock_Blend;
	Parms.K2Node_CustomEvent_Water_Blend = K2Node_CustomEvent_Water_Blend;
	Parms.K2Node_CustomEvent_Sand_Color_Linear = K2Node_CustomEvent_Sand_Color_Linear;
	Parms.K2Node_CustomEvent_Foliage_Color_Linear = K2Node_CustomEvent_Foliage_Color_Linear;
	Parms.K2Node_CustomEvent_Bark_Color_Linear = K2Node_CustomEvent_Bark_Color_Linear;
	Parms.K2Node_CustomEvent_Grass_Color_Linear = K2Node_CustomEvent_Grass_Color_Linear;
	Parms.K2Node_CustomEvent_Rock_Color_Linear = K2Node_CustomEvent_Rock_Color_Linear;
	Parms.K2Node_CustomEvent_Water_Color_Linear = K2Node_CustomEvent_Water_Color_Linear;
	Parms.K2Node_CustomEvent_Rapid_Color_Adjust_VEP_Override = K2Node_CustomEvent_Rapid_Color_Adjust_VEP_Override;
	Parms.K2Node_CustomEvent_MPC_Biome = K2Node_CustomEvent_MPC_Biome;
	Parms.K2Node_CustomEvent_MPC_Manual_Override = K2Node_CustomEvent_MPC_Manual_Override;
	Parms.K2Node_CustomEvent_SideProjection_UVScale = K2Node_CustomEvent_SideProjection_UVScale;
	Parms.K2Node_CustomEvent_MacroColor_UVScale = K2Node_CustomEvent_MacroColor_UVScale;
	Parms.K2Node_CustomEvent_VistaMacroColor_UVScale = K2Node_CustomEvent_VistaMacroColor_UVScale;
	Parms.K2Node_CustomEvent_LandscapeOverlay_UVScale = K2Node_CustomEvent_LandscapeOverlay_UVScale;
	Parms.K2Node_CustomEvent_Realm___Glowing_Resource_Toggle = K2Node_CustomEvent_Realm___Glowing_Resource_Toggle;
	Parms.K2Node_CustomEvent_Realm___Main_Celestial_Color = K2Node_CustomEvent_Realm___Main_Celestial_Color;
	Parms.K2Node_CustomEvent_Realm___Atmosphere_Master_Select = K2Node_CustomEvent_Realm___Atmosphere_Master_Select;
	Parms.K2Node_CustomEvent_Visual_Environmet_Preset = K2Node_CustomEvent_Visual_Environmet_Preset;
	Parms.K2Node_CustomEvent_SeaLevelGradient_BandScale = K2Node_CustomEvent_SeaLevelGradient_BandScale;
	Parms.K2Node_CustomEvent_SeaLevelGradient_Mask_Scale = K2Node_CustomEvent_SeaLevelGradient_Mask_Scale;
	Parms.K2Node_CustomEvent_SealLevelGradient_Low_Color = K2Node_CustomEvent_SealLevelGradient_Low_Color;
	Parms.K2Node_CustomEvent_SealLevelGradient_Mid_Color = K2Node_CustomEvent_SealLevelGradient_Mid_Color;
	Parms.K2Node_CustomEvent_SealLevelGradient_High_Color = K2Node_CustomEvent_SealLevelGradient_High_Color;
	Parms.K2Node_CustomEvent_Rapid_Color_Biome = K2Node_CustomEvent_Rapid_Color_Biome;
	Parms.CallFunc_Season_Cache_Cached_Season = CallFunc_Season_Cache_Cached_Season;

	UObject::ProcessEvent(Func, &Parms);

}

}


