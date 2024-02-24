#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TimeOfDay_Audio.TimeOfDay_Audio_C
// (None)

class UClass* UTimeOfDay_Audio_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TimeOfDay_Audio_C");

	return Clss;
}


// TimeOfDay_Audio_C TimeOfDay_Audio.Default__TimeOfDay_Audio_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTimeOfDay_Audio_C* UTimeOfDay_Audio_C::GetDefaultObj()
{
	static class UTimeOfDay_Audio_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTimeOfDay_Audio_C*>(UTimeOfDay_Audio_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TimeOfDay_Audio.TimeOfDay_Audio_C.CheckRealmCard
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRealmPlacementRequirement  RealmCard                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               RealmCardActive                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesRealmMeetRequirement_RequirementMet                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeOfDay_Audio_C::CheckRealmCard(const struct FRealmPlacementRequirement& RealmCard, bool* RealmCardActive, class UObject* Temp_object_Variable, bool CallFunc_DoesRealmMeetRequirement_RequirementMet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeOfDay_Audio_C", "CheckRealmCard");

	Params::UTimeOfDay_Audio_C_CheckRealmCard_Params Parms{};

	Parms.RealmCard = RealmCard;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_DoesRealmMeetRequirement_RequirementMet = CallFunc_DoesRealmMeetRequirement_RequirementMet;

	UObject::ProcessEvent(Func, &Parms);

	if (RealmCardActive != nullptr)
		*RealmCardActive = Parms.RealmCardActive;

}


// Function TimeOfDay_Audio.TimeOfDay_Audio_C.LogDebugInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetPrecipitationAmount_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTimeOfDay_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_1                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_GetWindSpeed_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_2                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_3                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_4                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_5                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_6                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_7                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_8                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_9                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_9                             (ZeroConstructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_DoubleToString_InDouble_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeOfDay_Audio_C::LogDebugInfo(float CallFunc_GetPrecipitationAmount_ReturnValue, float CallFunc_GetTimeOfDay_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, float CallFunc_GetWindSpeed_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, float CallFunc_GetFloatValue_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_9, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_1, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_2, float CallFunc_GetFloatValue_InTime_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeOfDay_Audio_C", "LogDebugInfo");

	Params::UTimeOfDay_Audio_C_LogDebugInfo_Params Parms{};

	Parms.CallFunc_GetPrecipitationAmount_ReturnValue = CallFunc_GetPrecipitationAmount_ReturnValue;
	Parms.CallFunc_GetTimeOfDay_ReturnValue = CallFunc_GetTimeOfDay_ReturnValue;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue = CallFunc_Conv_DoubleToString_ReturnValue;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_1 = CallFunc_Conv_DoubleToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetWindSpeed_ReturnValue = CallFunc_GetWindSpeed_ReturnValue;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_2 = CallFunc_Conv_DoubleToString_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_3 = CallFunc_Conv_DoubleToString_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_4 = CallFunc_Conv_DoubleToString_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_5 = CallFunc_Conv_DoubleToString_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_6 = CallFunc_Conv_DoubleToString_ReturnValue_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_7 = CallFunc_Conv_DoubleToString_ReturnValue_7;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_8 = CallFunc_Conv_DoubleToString_ReturnValue_8;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_9 = CallFunc_Conv_DoubleToString_ReturnValue_9;
	Parms.CallFunc_Concat_StrStr_ReturnValue_9 = CallFunc_Concat_StrStr_ReturnValue_9;
	Parms.CallFunc_Conv_DoubleToString_InDouble_ImplicitCast = CallFunc_Conv_DoubleToString_InDouble_ImplicitCast;
	Parms.CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_1 = CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_1;
	Parms.CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_2 = CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_2;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast = CallFunc_GetFloatValue_InTime_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TimeOfDay_Audio.TimeOfDay_Audio_C.GetInterpolationTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             RealValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CachedValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InterpolationTime                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeOfDay_Audio_C::GetInterpolationTime(double RealValue, double CachedValue, int32* InterpolationTime, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeOfDay_Audio_C", "GetInterpolationTime");

	Params::UTimeOfDay_Audio_C_GetInterpolationTime_Params Parms{};

	Parms.RealValue = RealValue;
	Parms.CachedValue = CachedValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InterpolationTime != nullptr)
		*InterpolationTime = Parms.InterpolationTime;

}


// Function TimeOfDay_Audio.TimeOfDay_Audio_C.UpdateClouds
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<double>                     Cloud_Coverage_Min_Array                                         (Edit, BlueprintVisible)
// TArray<class UDataTable*>          Cloud_Categories                                                 (Edit, BlueprintVisible)
// double                             MaxCloudCover                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MinCloudCover                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UDataTable*>          K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<double>                     K2Node_MakeArray_Array_1                                         (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NormalizeToRange_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeOfDay_Audio_C::UpdateClouds(const TArray<double>& Cloud_Coverage_Min_Array, const TArray<class UDataTable*>& Cloud_Categories, double MaxCloudCover, double MinCloudCover, TArray<class UDataTable*>& K2Node_MakeArray_Array, TArray<double>& K2Node_MakeArray_Array_1, bool CallFunc_IsValid_ReturnValue, double CallFunc_NormalizeToRange_ReturnValue, double CallFunc_FClamp_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeOfDay_Audio_C", "UpdateClouds");

	Params::UTimeOfDay_Audio_C_UpdateClouds_Params Parms{};

	Parms.Cloud_Coverage_Min_Array = Cloud_Coverage_Min_Array;
	Parms.Cloud_Categories = Cloud_Categories;
	Parms.MaxCloudCover = MaxCloudCover;
	Parms.MinCloudCover = MinCloudCover;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NormalizeToRange_ReturnValue = CallFunc_NormalizeToRange_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TimeOfDay_Audio.TimeOfDay_Audio_C.UpdateOverallMood
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             MoodCache                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetInterpolationTime_InterpolationTime                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRTPCValue_Value_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeOfDay_Audio_C::UpdateOverallMood(double MoodCache, bool Temp_bool_Variable, double Temp_real_Variable, int32 CallFunc_GetInterpolationTime_InterpolationTime, double CallFunc_Multiply_DoubleDouble_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_FClamp_ReturnValue, double K2Node_Select_Default, float CallFunc_SetRTPCValue_Value_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeOfDay_Audio_C", "UpdateOverallMood");

	Params::UTimeOfDay_Audio_C_UpdateOverallMood_Params Parms{};

	Parms.MoodCache = MoodCache;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.CallFunc_GetInterpolationTime_InterpolationTime = CallFunc_GetInterpolationTime_InterpolationTime;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SetRTPCValue_Value_ImplicitCast = CallFunc_SetRTPCValue_Value_ImplicitCast;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast = CallFunc_GetFloatValue_InTime_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TimeOfDay_Audio.TimeOfDay_Audio_C.UpdateAudioSeason
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<double>                     Season_Array_Expanded                                            (Edit, BlueprintVisible)
// TArray<double>                     Season_Array                                                     (Edit, BlueprintVisible)
// TArray<double>                     K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<double>                     K2Node_MakeArray_Array_1                                         (ReferenceParm)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_1                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_SeasonType               CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_ByteToDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_VE_Preset_Master         CallFunc_GetDataTableRowFromName_OutRow_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSeason_Value_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSeason_Value_ImplicitCast_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRTPCValue_Value_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRTPCValue_Value_ImplicitCast_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeOfDay_Audio_C::UpdateAudioSeason(const TArray<double>& Season_Array_Expanded, const TArray<double>& Season_Array, TArray<double>& K2Node_MakeArray_Array, TArray<double>& K2Node_MakeArray_Array_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_1, class FName CallFunc_Array_Get_Item, const struct FS_SeasonType& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, double CallFunc_Conv_ByteToDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue, class FName CallFunc_Array_Get_Item_1, const struct FS_VE_Preset_Master& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, int32 CallFunc_Conv_BoolToInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, float CallFunc_SetSeason_Value_ImplicitCast, float CallFunc_SetSeason_Value_ImplicitCast_1, float CallFunc_SetRTPCValue_Value_ImplicitCast, float CallFunc_SetRTPCValue_Value_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeOfDay_Audio_C", "UpdateAudioSeason");

	Params::UTimeOfDay_Audio_C_UpdateAudioSeason_Params Parms{};

	Parms.Season_Array_Expanded = Season_Array_Expanded;
	Parms.Season_Array = Season_Array;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_1 = CallFunc_GetDataTableRowNames_OutRowNames_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_Conv_ByteToDouble_ReturnValue = CallFunc_Conv_ByteToDouble_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_SetSeason_Value_ImplicitCast = CallFunc_SetSeason_Value_ImplicitCast;
	Parms.CallFunc_SetSeason_Value_ImplicitCast_1 = CallFunc_SetSeason_Value_ImplicitCast_1;
	Parms.CallFunc_SetRTPCValue_Value_ImplicitCast = CallFunc_SetRTPCValue_Value_ImplicitCast;
	Parms.CallFunc_SetRTPCValue_Value_ImplicitCast_1 = CallFunc_SetRTPCValue_Value_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TimeOfDay_Audio.TimeOfDay_Audio_C.UpdateAudioFog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Fog_Density_Inherit                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Fog_Height_Inherit                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UDataTable*>          Fog_Intensity_Categories                                         (Edit, BlueprintVisible)
// double                             FogAmountCache                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MaxFogDensityValue                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MinFogDensityValue                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MaxFogHeightValue                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MinFogHeightValue                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UDataTable*>          K2Node_MakeArray_Array                                           (ReferenceParm)
// double                             CallFunc_NormalizeToRange_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NormalizeToRange_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetInterpolationTime_InterpolationTime                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRTPCValue_Value_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeOfDay_Audio_C::UpdateAudioFog(double Fog_Density_Inherit, double Fog_Height_Inherit, const TArray<class UDataTable*>& Fog_Intensity_Categories, double FogAmountCache, double MaxFogDensityValue, double MinFogDensityValue, double MaxFogHeightValue, double MinFogHeightValue, TArray<class UDataTable*>& K2Node_MakeArray_Array, double CallFunc_NormalizeToRange_ReturnValue, double CallFunc_NormalizeToRange_ReturnValue_1, int32 CallFunc_GetInterpolationTime_InterpolationTime, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, float CallFunc_SetRTPCValue_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeOfDay_Audio_C", "UpdateAudioFog");

	Params::UTimeOfDay_Audio_C_UpdateAudioFog_Params Parms{};

	Parms.Fog_Density_Inherit = Fog_Density_Inherit;
	Parms.Fog_Height_Inherit = Fog_Height_Inherit;
	Parms.Fog_Intensity_Categories = Fog_Intensity_Categories;
	Parms.FogAmountCache = FogAmountCache;
	Parms.MaxFogDensityValue = MaxFogDensityValue;
	Parms.MinFogDensityValue = MinFogDensityValue;
	Parms.MaxFogHeightValue = MaxFogHeightValue;
	Parms.MinFogHeightValue = MinFogHeightValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_NormalizeToRange_ReturnValue = CallFunc_NormalizeToRange_ReturnValue;
	Parms.CallFunc_NormalizeToRange_ReturnValue_1 = CallFunc_NormalizeToRange_ReturnValue_1;
	Parms.CallFunc_GetInterpolationTime_InterpolationTime = CallFunc_GetInterpolationTime_InterpolationTime;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_SetRTPCValue_Value_ImplicitCast = CallFunc_SetRTPCValue_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TimeOfDay_Audio.TimeOfDay_Audio_C.UpdateAudioTOD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             AdjustedTime                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TimeOfDayInterpolationTime                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             TimeOfDayCache                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetNormalizedVisualTime_VisualTime                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetInterpolationTime_InterpolationTime                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetTimeOfDay_Value_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRTPCValue_Value_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeOfDay_Audio_C::UpdateAudioTOD(double AdjustedTime, int32 TimeOfDayInterpolationTime, double TimeOfDayCache, bool CallFunc_IsValid_ReturnValue, double CallFunc_GetNormalizedVisualTime_VisualTime, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetInterpolationTime_InterpolationTime, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, float CallFunc_SetTimeOfDay_Value_ImplicitCast, float CallFunc_SetRTPCValue_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeOfDay_Audio_C", "UpdateAudioTOD");

	Params::UTimeOfDay_Audio_C_UpdateAudioTOD_Params Parms{};

	Parms.AdjustedTime = AdjustedTime;
	Parms.TimeOfDayInterpolationTime = TimeOfDayInterpolationTime;
	Parms.TimeOfDayCache = TimeOfDayCache;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetNormalizedVisualTime_VisualTime = CallFunc_GetNormalizedVisualTime_VisualTime;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetInterpolationTime_InterpolationTime = CallFunc_GetInterpolationTime_InterpolationTime;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_SetTimeOfDay_Value_ImplicitCast = CallFunc_SetTimeOfDay_Value_ImplicitCast;
	Parms.CallFunc_SetRTPCValue_Value_ImplicitCast = CallFunc_SetRTPCValue_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TimeOfDay_Audio.TimeOfDay_Audio_C.GetManagers
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAmbienceManager*            CallFunc_GetAmbienceManager_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_Ambience_Manager_C*      K2Node_DynamicCast_AsBP_Ambience_Manager                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_TimeOfDayManager_C*      K2Node_DynamicCast_AsBP_Time_Of_Day_Manager                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeOfDay_Audio_C::GetManagers(bool* Success, class UAmbienceManager* CallFunc_GetAmbienceManager_ReturnValue, class UBP_Ambience_Manager_C* K2Node_DynamicCast_AsBP_Ambience_Manager, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_TimeOfDayManager_C* K2Node_DynamicCast_AsBP_Time_Of_Day_Manager, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeOfDay_Audio_C", "GetManagers");

	Params::UTimeOfDay_Audio_C_GetManagers_Params Parms{};

	Parms.CallFunc_GetAmbienceManager_ReturnValue = CallFunc_GetAmbienceManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Ambience_Manager = K2Node_DynamicCast_AsBP_Ambience_Manager;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Time_Of_Day_Manager = K2Node_DynamicCast_AsBP_Time_Of_Day_Manager;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function TimeOfDay_Audio.TimeOfDay_Audio_C.UpdateAudioDynamic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeOfDay_Audio_C::UpdateAudioDynamic(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeOfDay_Audio_C", "UpdateAudioDynamic");

	Params::UTimeOfDay_Audio_C_UpdateAudioDynamic_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TimeOfDay_Audio.TimeOfDay_Audio_C.UpdateAudioStatic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTimeOfDay_Audio_C::UpdateAudioStatic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeOfDay_Audio_C", "UpdateAudioStatic");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TimeOfDay_Audio.TimeOfDay_Audio_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UTimeOfDay_Audio_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeOfDay_Audio_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TimeOfDay_Audio.TimeOfDay_Audio_C.InitializeAudio
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTimeOfDay_Audio_C::InitializeAudio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeOfDay_Audio_C", "InitializeAudio");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TimeOfDay_Audio.TimeOfDay_Audio_C.ShowAmbienceMood
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowAmbienceDebug                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeOfDay_Audio_C::ShowAmbienceMood(bool ShowAmbienceDebug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeOfDay_Audio_C", "ShowAmbienceMood");

	Params::UTimeOfDay_Audio_C_ShowAmbienceMood_Params Parms{};

	Parms.ShowAmbienceDebug = ShowAmbienceDebug;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TimeOfDay_Audio.TimeOfDay_Audio_C.Setup_references
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Primary_Function_Override                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Visual_Environment_Preset_Override                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Visual_Environment_Preset                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Cloud                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Season                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAtmosphere_Master      Visual_Environmet_Preset                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeOfDay_Audio_C::Setup_references(bool Primary_Function_Override, bool Visual_Environment_Preset_Override, int32 Visual_Environment_Preset, int32 Realm_Minus_Cloud, int32 Realm_Minus_Season, enum class EAtmosphere_Master Visual_Environmet_Preset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeOfDay_Audio_C", "Setup_references");

	Params::UTimeOfDay_Audio_C_Setup_references_Params Parms{};

	Parms.Primary_Function_Override = Primary_Function_Override;
	Parms.Visual_Environment_Preset_Override = Visual_Environment_Preset_Override;
	Parms.Visual_Environment_Preset = Visual_Environment_Preset;
	Parms.Realm_Minus_Cloud = Realm_Minus_Cloud;
	Parms.Realm_Minus_Season = Realm_Minus_Season;
	Parms.Visual_Environmet_Preset = Visual_Environmet_Preset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TimeOfDay_Audio.TimeOfDay_Audio_C.ExecuteUbergraph_TimeOfDay_Audio
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRealmCard_RealmCardActive                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetManagers_Success                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_ShowAmbienceDebug                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Primary_Function_Override                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Visual_Environment_Preset_Override            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Visual_Environment_Preset                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Cloud                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Season                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAtmosphere_Master      K2Node_CustomEvent_Visual_Environmet_Preset                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimer_Time_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeOfDay_Audio_C::ExecuteUbergraph_TimeOfDay_Audio(int32 EntryPoint, bool CallFunc_CheckRealmCard_RealmCardActive, bool CallFunc_GetManagers_Success, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool K2Node_CustomEvent_ShowAmbienceDebug, bool K2Node_CustomEvent_Primary_Function_Override, bool K2Node_CustomEvent_Visual_Environment_Preset_Override, int32 K2Node_CustomEvent_Visual_Environment_Preset, int32 K2Node_CustomEvent_Realm___Cloud, int32 K2Node_CustomEvent_Realm___Season, enum class EAtmosphere_Master K2Node_CustomEvent_Visual_Environmet_Preset, float CallFunc_K2_SetTimer_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeOfDay_Audio_C", "ExecuteUbergraph_TimeOfDay_Audio");

	Params::UTimeOfDay_Audio_C_ExecuteUbergraph_TimeOfDay_Audio_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_CheckRealmCard_RealmCardActive = CallFunc_CheckRealmCard_RealmCardActive;
	Parms.CallFunc_GetManagers_Success = CallFunc_GetManagers_Success;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.K2Node_CustomEvent_ShowAmbienceDebug = K2Node_CustomEvent_ShowAmbienceDebug;
	Parms.K2Node_CustomEvent_Primary_Function_Override = K2Node_CustomEvent_Primary_Function_Override;
	Parms.K2Node_CustomEvent_Visual_Environment_Preset_Override = K2Node_CustomEvent_Visual_Environment_Preset_Override;
	Parms.K2Node_CustomEvent_Visual_Environment_Preset = K2Node_CustomEvent_Visual_Environment_Preset;
	Parms.K2Node_CustomEvent_Realm___Cloud = K2Node_CustomEvent_Realm___Cloud;
	Parms.K2Node_CustomEvent_Realm___Season = K2Node_CustomEvent_Realm___Season;
	Parms.K2Node_CustomEvent_Visual_Environmet_Preset = K2Node_CustomEvent_Visual_Environmet_Preset;
	Parms.CallFunc_K2_SetTimer_Time_ImplicitCast = CallFunc_K2_SetTimer_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


