#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TimeofDay_Lighting.TimeofDay_Lighting_C
// (None)

class UClass* UTimeofDay_Lighting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TimeofDay_Lighting_C");

	return Clss;
}


// TimeofDay_Lighting_C TimeofDay_Lighting.Default__TimeofDay_Lighting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTimeofDay_Lighting_C* UTimeofDay_Lighting_C::GetDefaultObj()
{
	static class UTimeofDay_Lighting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTimeofDay_Lighting_C*>(UTimeofDay_Lighting_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TimeofDay_Lighting.TimeofDay_Lighting_C.Desert_PPM
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Adjusted_Time_24                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeightedBlendables         ReturnValue                                                      (Parm, OutParm, ReturnParm)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeightedBlendables         Temp_struct_Variable                                             (None)
// struct FWeightedBlendables         Temp_struct_Variable_1                                           (None)
// class UCurveFloat*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeUnclamped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeightedBlendables         K2Node_Select_Default                                            (None)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FWeightedBlendables UTimeofDay_Lighting_C::Desert_PPM(double Adjusted_Time_24, int32 Temp_int_Variable, const struct FWeightedBlendables& Temp_struct_Variable, const struct FWeightedBlendables& Temp_struct_Variable_1, class UCurveFloat* CallFunc_Array_Get_Item, double CallFunc_FClamp_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, double CallFunc_MapRangeUnclamped_ReturnValue, double CallFunc_Lerp_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, const struct FWeightedBlendables& K2Node_Select_Default, float CallFunc_GetFloatValue_InTime_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Lighting_C", "Desert_PPM");

	Params::UTimeofDay_Lighting_C_Desert_PPM_Params Parms{};

	Parms.Adjusted_Time_24 = Adjusted_Time_24;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue = CallFunc_MapRangeUnclamped_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast = CallFunc_GetFloatValue_InTime_ImplicitCast;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast = CallFunc_Lerp_Alpha_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TimeofDay_Lighting.TimeofDay_Lighting_C.Final Gather Update Speed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Adjusted_time_24                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Finalgather                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Lighting_C::Final_Gather_Update_Speed(double Adjusted_time_24, double* Finalgather, double CallFunc_Lerp_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, double CallFunc_Lerp_ReturnValue_1, float CallFunc_GetFloatValue_InTime_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Lighting_C", "Final Gather Update Speed");

	Params::UTimeofDay_Lighting_C_Final_Gather_Update_Speed_Params Parms{};

	Parms.Adjusted_time_24 = Adjusted_time_24;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast = CallFunc_GetFloatValue_InTime_ImplicitCast;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast = CallFunc_Lerp_Alpha_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Finalgather != nullptr)
		*Finalgather = Parms.Finalgather;

}


// Function TimeofDay_Lighting.TimeofDay_Lighting_C.Exposure Compensation_NoLumen
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             AdjustedTime24Hour                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Exposure_Compensation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 Exposure_Comp_Night_Lerp                                         (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 Exposure_Comp_Day_Lerp                                           (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_B_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Lighting_C::Exposure_Compensation_NoLumen(double AdjustedTime24Hour, double* Exposure_Compensation, class UCurveFloat* Exposure_Comp_Night_Lerp, class UCurveFloat* Exposure_Comp_Day_Lerp, float CallFunc_GetFloatValue_ReturnValue, double CallFunc_Array_Get_Item, double CallFunc_Array_Get_Item_1, double CallFunc_Lerp_ReturnValue, double CallFunc_Lerp_ReturnValue_1, double CallFunc_Array_Get_Item_2, float CallFunc_GetFloatValue_ReturnValue_1, double CallFunc_Lerp_ReturnValue_2, float CallFunc_GetFloatValue_ReturnValue_2, double CallFunc_Lerp_ReturnValue_3, double CallFunc_Lerp_ReturnValue_4, double CallFunc_Add_DoubleDouble_ReturnValue, float CallFunc_GetFloatValue_InTime_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast_1, float CallFunc_GetFloatValue_InTime_ImplicitCast_2, double CallFunc_Add_DoubleDouble_B_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Lighting_C", "Exposure Compensation_NoLumen");

	Params::UTimeofDay_Lighting_C_Exposure_Compensation_NoLumen_Params Parms{};

	Parms.AdjustedTime24Hour = AdjustedTime24Hour;
	Parms.Exposure_Comp_Night_Lerp = Exposure_Comp_Night_Lerp;
	Parms.Exposure_Comp_Day_Lerp = Exposure_Comp_Day_Lerp;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_GetFloatValue_ReturnValue_1 = CallFunc_GetFloatValue_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.CallFunc_GetFloatValue_ReturnValue_2 = CallFunc_GetFloatValue_ReturnValue_2;
	Parms.CallFunc_Lerp_ReturnValue_3 = CallFunc_Lerp_ReturnValue_3;
	Parms.CallFunc_Lerp_ReturnValue_4 = CallFunc_Lerp_ReturnValue_4;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast = CallFunc_GetFloatValue_InTime_ImplicitCast;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_1 = CallFunc_GetFloatValue_InTime_ImplicitCast_1;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_2 = CallFunc_GetFloatValue_InTime_ImplicitCast_2;
	Parms.CallFunc_Add_DoubleDouble_B_ImplicitCast = CallFunc_Add_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast = CallFunc_Lerp_Alpha_ImplicitCast;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_1 = CallFunc_Lerp_Alpha_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Exposure_Compensation != nullptr)
		*Exposure_Compensation = Parms.Exposure_Compensation;

}


// Function TimeofDay_Lighting.TimeofDay_Lighting_C.PostProcessMaterals
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWeightedBlendables         ReturnValue                                                      (Parm, OutParm, ReturnParm)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeightedBlendables         Temp_struct_Variable                                             (None)
// struct FWeightedBlendables         K2Node_Select_Default                                            (None)

struct FWeightedBlendables UTimeofDay_Lighting_C::PostProcessMaterals(int32 Temp_int_Variable, const struct FWeightedBlendables& Temp_struct_Variable, const struct FWeightedBlendables& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Lighting_C", "PostProcessMaterals");

	Params::UTimeofDay_Lighting_C_PostProcessMaterals_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TimeofDay_Lighting.TimeofDay_Lighting_C.LensFlare
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Adjsuted_Time_24hr                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UTimeofDay_Lighting_C::LensFlare(double Adjsuted_Time_24hr, float CallFunc_GetFloatValue_ReturnValue, double CallFunc_Lerp_ReturnValue, float CallFunc_GetFloatValue_InTime_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Lighting_C", "LensFlare");

	Params::UTimeofDay_Lighting_C_LensFlare_Params Parms{};

	Parms.Adjsuted_Time_24hr = Adjsuted_Time_24hr;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast = CallFunc_GetFloatValue_InTime_ImplicitCast;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast = CallFunc_Lerp_Alpha_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TimeofDay_Lighting.TimeofDay_Lighting_C.SkylightLeaking
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UTimeofDay_Lighting_C::SkylightLeaking()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Lighting_C", "SkylightLeaking");

	Params::UTimeofDay_Lighting_C_SkylightLeaking_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TimeofDay_Lighting.TimeofDay_Lighting_C.Diffuse Color Boost
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Final_Gather_Quality                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Diffuse_Boost                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Lighting_C::Diffuse_Color_Boost(double* Final_Gather_Quality, double* Diffuse_Boost, double CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Lighting_C", "Diffuse Color Boost");

	Params::UTimeofDay_Lighting_C_Diffuse_Color_Boost_Params Parms{};

	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Final_Gather_Quality != nullptr)
		*Final_Gather_Quality = Parms.Final_Gather_Quality;

	if (Diffuse_Boost != nullptr)
		*Diffuse_Boost = Parms.Diffuse_Boost;

}


// Function TimeofDay_Lighting.TimeofDay_Lighting_C.Exposure Compensation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             AdjustedTime24Hour                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Exposure_Compensation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 Exposure_Comp_Night_Lerp                                         (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 Exposure_Comp_Day_Lerp                                           (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_B_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Lighting_C::Exposure_Compensation(double AdjustedTime24Hour, double* Exposure_Compensation, class UCurveFloat* Exposure_Comp_Night_Lerp, class UCurveFloat* Exposure_Comp_Day_Lerp, float CallFunc_GetFloatValue_ReturnValue, double CallFunc_Array_Get_Item, double CallFunc_Array_Get_Item_1, double CallFunc_Lerp_ReturnValue, double CallFunc_Lerp_ReturnValue_1, double CallFunc_Array_Get_Item_2, float CallFunc_GetFloatValue_ReturnValue_1, double CallFunc_Lerp_ReturnValue_2, float CallFunc_GetFloatValue_ReturnValue_2, double CallFunc_Lerp_ReturnValue_3, double CallFunc_Lerp_ReturnValue_4, double CallFunc_Add_DoubleDouble_ReturnValue, float CallFunc_GetFloatValue_InTime_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast_1, float CallFunc_GetFloatValue_InTime_ImplicitCast_2, double CallFunc_Add_DoubleDouble_B_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Lighting_C", "Exposure Compensation");

	Params::UTimeofDay_Lighting_C_Exposure_Compensation_Params Parms{};

	Parms.AdjustedTime24Hour = AdjustedTime24Hour;
	Parms.Exposure_Comp_Night_Lerp = Exposure_Comp_Night_Lerp;
	Parms.Exposure_Comp_Day_Lerp = Exposure_Comp_Day_Lerp;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_GetFloatValue_ReturnValue_1 = CallFunc_GetFloatValue_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.CallFunc_GetFloatValue_ReturnValue_2 = CallFunc_GetFloatValue_ReturnValue_2;
	Parms.CallFunc_Lerp_ReturnValue_3 = CallFunc_Lerp_ReturnValue_3;
	Parms.CallFunc_Lerp_ReturnValue_4 = CallFunc_Lerp_ReturnValue_4;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast = CallFunc_GetFloatValue_InTime_ImplicitCast;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_1 = CallFunc_GetFloatValue_InTime_ImplicitCast_1;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_2 = CallFunc_GetFloatValue_InTime_ImplicitCast_2;
	Parms.CallFunc_Add_DoubleDouble_B_ImplicitCast = CallFunc_Add_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast = CallFunc_Lerp_Alpha_ImplicitCast;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_1 = CallFunc_Lerp_Alpha_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Exposure_Compensation != nullptr)
		*Exposure_Compensation = Parms.Exposure_Compensation;

}


// Function TimeofDay_Lighting.TimeofDay_Lighting_C.Eye Adaptation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Adjustedtime24hr                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Low_Percent                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             High_Percent                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 Exposure_Comp_Day_Lerp                                           (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Lighting_C::Eye_Adaptation(double Adjustedtime24hr, double* Low_Percent, double* High_Percent, class UCurveFloat* Exposure_Comp_Day_Lerp, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_GetFloatValue_ReturnValue_1, double CallFunc_Lerp_ReturnValue, double CallFunc_Lerp_ReturnValue_1, float CallFunc_GetFloatValue_ReturnValue_2, float CallFunc_GetFloatValue_ReturnValue_3, double CallFunc_Lerp_ReturnValue_2, double CallFunc_Lerp_ReturnValue_3, float CallFunc_GetFloatValue_InTime_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast_1, float CallFunc_GetFloatValue_InTime_ImplicitCast_2, float CallFunc_GetFloatValue_InTime_ImplicitCast_3, double CallFunc_Lerp_Alpha_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast_1, double CallFunc_Lerp_Alpha_ImplicitCast_2, double CallFunc_Lerp_Alpha_ImplicitCast_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Lighting_C", "Eye Adaptation");

	Params::UTimeofDay_Lighting_C_Eye_Adaptation_Params Parms{};

	Parms.Adjustedtime24hr = Adjustedtime24hr;
	Parms.Exposure_Comp_Day_Lerp = Exposure_Comp_Day_Lerp;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue_1 = CallFunc_GetFloatValue_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_GetFloatValue_ReturnValue_2 = CallFunc_GetFloatValue_ReturnValue_2;
	Parms.CallFunc_GetFloatValue_ReturnValue_3 = CallFunc_GetFloatValue_ReturnValue_3;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.CallFunc_Lerp_ReturnValue_3 = CallFunc_Lerp_ReturnValue_3;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast = CallFunc_GetFloatValue_InTime_ImplicitCast;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_1 = CallFunc_GetFloatValue_InTime_ImplicitCast_1;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_2 = CallFunc_GetFloatValue_InTime_ImplicitCast_2;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_3 = CallFunc_GetFloatValue_InTime_ImplicitCast_3;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast = CallFunc_Lerp_Alpha_ImplicitCast;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_1 = CallFunc_Lerp_Alpha_ImplicitCast_1;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_2 = CallFunc_Lerp_Alpha_ImplicitCast_2;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_3 = CallFunc_Lerp_Alpha_ImplicitCast_3;

	UObject::ProcessEvent(Func, &Parms);

	if (Low_Percent != nullptr)
		*Low_Percent = Parms.Low_Percent;

	if (High_Percent != nullptr)
		*High_Percent = Parms.High_Percent;

}


// Function TimeofDay_Lighting.TimeofDay_Lighting_C.Bloom
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Adjustd_time24hr                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Bloom_Intensity                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Lighting_C::Bloom(double Adjustd_time24hr, double* Bloom_Intensity, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_GetFloatValue_ReturnValue_1, double CallFunc_Array_Get_Item, double CallFunc_Lerp_ReturnValue, double CallFunc_Lerp_ReturnValue_1, float CallFunc_GetFloatValue_InTime_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast_1, double CallFunc_Lerp_Alpha_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Lighting_C", "Bloom");

	Params::UTimeofDay_Lighting_C_Bloom_Params Parms{};

	Parms.Adjustd_time24hr = Adjustd_time24hr;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue_1 = CallFunc_GetFloatValue_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast = CallFunc_GetFloatValue_InTime_ImplicitCast;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_1 = CallFunc_GetFloatValue_InTime_ImplicitCast_1;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast = CallFunc_Lerp_Alpha_ImplicitCast;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_1 = CallFunc_Lerp_Alpha_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Bloom_Intensity != nullptr)
		*Bloom_Intensity = Parms.Bloom_Intensity;

}


// Function TimeofDay_Lighting.TimeofDay_Lighting_C.Local Exposure
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Adjustd_time24hr                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Local_Highlight                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Local_Shadow                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Detail_Strength                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Blur_Lumiance_Blend                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Blur_Kernel_size                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Middlegrey_Bias                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_5                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_6                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Lighting_C::Local_Exposure(double Adjustd_time24hr, double* Local_Highlight, double* Local_Shadow, double* Detail_Strength, double* Blur_Lumiance_Blend, double* Blur_Kernel_size, double* Middlegrey_Bias, float CallFunc_GetFloatValue_ReturnValue, double CallFunc_Lerp_ReturnValue, double CallFunc_Lerp_ReturnValue_1, double CallFunc_Lerp_ReturnValue_2, double CallFunc_Lerp_ReturnValue_3, double CallFunc_Lerp_ReturnValue_4, double CallFunc_Lerp_ReturnValue_5, double CallFunc_Lerp_ReturnValue_6, float CallFunc_GetFloatValue_InTime_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Lighting_C", "Local Exposure");

	Params::UTimeofDay_Lighting_C_Local_Exposure_Params Parms{};

	Parms.Adjustd_time24hr = Adjustd_time24hr;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.CallFunc_Lerp_ReturnValue_3 = CallFunc_Lerp_ReturnValue_3;
	Parms.CallFunc_Lerp_ReturnValue_4 = CallFunc_Lerp_ReturnValue_4;
	Parms.CallFunc_Lerp_ReturnValue_5 = CallFunc_Lerp_ReturnValue_5;
	Parms.CallFunc_Lerp_ReturnValue_6 = CallFunc_Lerp_ReturnValue_6;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast = CallFunc_GetFloatValue_InTime_ImplicitCast;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast = CallFunc_Lerp_Alpha_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Local_Highlight != nullptr)
		*Local_Highlight = Parms.Local_Highlight;

	if (Local_Shadow != nullptr)
		*Local_Shadow = Parms.Local_Shadow;

	if (Detail_Strength != nullptr)
		*Detail_Strength = Parms.Detail_Strength;

	if (Blur_Lumiance_Blend != nullptr)
		*Blur_Lumiance_Blend = Parms.Blur_Lumiance_Blend;

	if (Blur_Kernel_size != nullptr)
		*Blur_Kernel_size = Parms.Blur_Kernel_size;

	if (Middlegrey_Bias != nullptr)
		*Middlegrey_Bias = Parms.Middlegrey_Bias;

}


// Function TimeofDay_Lighting.TimeofDay_Lighting_C.UpdateSunRotation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             AdjustedTime_24Hour                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_NegateRotator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Roll_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Lighting_C::UpdateSunRotation(double AdjustedTime_24Hour, int32 CallFunc_Conv_BoolToInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_NegateRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, float CallFunc_GetFloatValue_InTime_ImplicitCast, float CallFunc_MakeRotator_Roll_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Lighting_C", "UpdateSunRotation");

	Params::UTimeofDay_Lighting_C_UpdateSunRotation_Params Parms{};

	Parms.AdjustedTime_24Hour = AdjustedTime_24Hour;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_NegateRotator_ReturnValue = CallFunc_NegateRotator_ReturnValue;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast = CallFunc_GetFloatValue_InTime_ImplicitCast;
	Parms.CallFunc_MakeRotator_Roll_ImplicitCast = CallFunc_MakeRotator_Roll_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TimeofDay_Lighting.TimeofDay_Lighting_C.DirtyLightngCache
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTimeofDay_Lighting_C::DirtyLightngCache()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Lighting_C", "DirtyLightngCache");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TimeofDay_Lighting.TimeofDay_Lighting_C.UpdateLightingCache
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Celestials_Cache_Cached_Ring_Toggle                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Sky_Cache_Cached_Rayleigh_Color                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Sky_Cache_Cached_Sky_Luminance_Color                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Sky_Cache_Cached_Mie_Color                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Sky_Cache_Cached_Atmosphere___Density                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Sky_Cache_Cached_Atmosphere___Haze                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Sky_Cache_Cached_Atmosphere___View_Distance             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Sky_Cache_Cached_Atmosphere___Falloff                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Sky_Cache_Cached_Atmosphere___Brightness                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Sky_Cache_Cached_Atmosphere___Ultra_Clear               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Moon_Cache_Cached_Main_Celestial_Color                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Moon_Cache_Cached_Cloud_Celestial_Color                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Moon_Cache_Cached_Rayleigh_Inverse                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    CallFunc_Color_Correction_Cache_Saturation                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    CallFunc_Color_Correction_Cache_Contrast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    CallFunc_Color_Correction_Cache_Gamma                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    CallFunc_Color_Correction_Cache_Gain                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    CallFunc_Color_Correction_Cache_Offset                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Color_Correction_Cache_Exposure_Day                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Color_Correction_Cache_Exposure_Night                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Vault_Override_Cache_VaultOverride                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Sun_Cache_Angle_X                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Sun_Cache_Sun_Color                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Sun_Cache_Cached_Sun_Disk_Color_Set                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Sun_Cache_Cached_Sun_Disk_Color                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Fog_Cache_Cached_Fog_Volumetric_Day                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Fog_Cache_Cached_Fog_Volumetric_Night                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Fog_Cache_Cached_Height_Fog_Contribution_Day            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Fog_Cache_Cached_Height_Fog_Contribution_Night          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Lighting_C::UpdateLightingCache(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Celestials_Cache_Cached_Ring_Toggle, const struct FLinearColor& CallFunc_Sky_Cache_Cached_Rayleigh_Color, const struct FLinearColor& CallFunc_Sky_Cache_Cached_Sky_Luminance_Color, const struct FLinearColor& CallFunc_Sky_Cache_Cached_Mie_Color, int32 CallFunc_Sky_Cache_Cached_Atmosphere___Density, int32 CallFunc_Sky_Cache_Cached_Atmosphere___Haze, int32 CallFunc_Sky_Cache_Cached_Atmosphere___View_Distance, int32 CallFunc_Sky_Cache_Cached_Atmosphere___Falloff, int32 CallFunc_Sky_Cache_Cached_Atmosphere___Brightness, int32 CallFunc_Sky_Cache_Cached_Atmosphere___Ultra_Clear, const struct FLinearColor& CallFunc_Moon_Cache_Cached_Main_Celestial_Color, const struct FLinearColor& CallFunc_Moon_Cache_Cached_Cloud_Celestial_Color, const struct FLinearColor& CallFunc_Moon_Cache_Cached_Rayleigh_Inverse, const struct FVector4& CallFunc_Color_Correction_Cache_Saturation, const struct FVector4& CallFunc_Color_Correction_Cache_Contrast, const struct FVector4& CallFunc_Color_Correction_Cache_Gamma, const struct FVector4& CallFunc_Color_Correction_Cache_Gain, const struct FVector4& CallFunc_Color_Correction_Cache_Offset, int32 CallFunc_Color_Correction_Cache_Exposure_Day, int32 CallFunc_Color_Correction_Cache_Exposure_Night, int32 CallFunc_Vault_Override_Cache_VaultOverride, double CallFunc_Sun_Cache_Angle_X, const struct FLinearColor& CallFunc_Sun_Cache_Sun_Color, const struct FLinearColor& CallFunc_Sun_Cache_Cached_Sun_Disk_Color_Set, const struct FLinearColor& CallFunc_Sun_Cache_Cached_Sun_Disk_Color, int32 CallFunc_Fog_Cache_Cached_Fog_Volumetric_Day, int32 CallFunc_Fog_Cache_Cached_Fog_Volumetric_Night, int32 CallFunc_Fog_Cache_Cached_Height_Fog_Contribution_Day, int32 CallFunc_Fog_Cache_Cached_Height_Fog_Contribution_Night)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Lighting_C", "UpdateLightingCache");

	Params::UTimeofDay_Lighting_C_UpdateLightingCache_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Celestials_Cache_Cached_Ring_Toggle = CallFunc_Celestials_Cache_Cached_Ring_Toggle;
	Parms.CallFunc_Sky_Cache_Cached_Rayleigh_Color = CallFunc_Sky_Cache_Cached_Rayleigh_Color;
	Parms.CallFunc_Sky_Cache_Cached_Sky_Luminance_Color = CallFunc_Sky_Cache_Cached_Sky_Luminance_Color;
	Parms.CallFunc_Sky_Cache_Cached_Mie_Color = CallFunc_Sky_Cache_Cached_Mie_Color;
	Parms.CallFunc_Sky_Cache_Cached_Atmosphere___Density = CallFunc_Sky_Cache_Cached_Atmosphere___Density;
	Parms.CallFunc_Sky_Cache_Cached_Atmosphere___Haze = CallFunc_Sky_Cache_Cached_Atmosphere___Haze;
	Parms.CallFunc_Sky_Cache_Cached_Atmosphere___View_Distance = CallFunc_Sky_Cache_Cached_Atmosphere___View_Distance;
	Parms.CallFunc_Sky_Cache_Cached_Atmosphere___Falloff = CallFunc_Sky_Cache_Cached_Atmosphere___Falloff;
	Parms.CallFunc_Sky_Cache_Cached_Atmosphere___Brightness = CallFunc_Sky_Cache_Cached_Atmosphere___Brightness;
	Parms.CallFunc_Sky_Cache_Cached_Atmosphere___Ultra_Clear = CallFunc_Sky_Cache_Cached_Atmosphere___Ultra_Clear;
	Parms.CallFunc_Moon_Cache_Cached_Main_Celestial_Color = CallFunc_Moon_Cache_Cached_Main_Celestial_Color;
	Parms.CallFunc_Moon_Cache_Cached_Cloud_Celestial_Color = CallFunc_Moon_Cache_Cached_Cloud_Celestial_Color;
	Parms.CallFunc_Moon_Cache_Cached_Rayleigh_Inverse = CallFunc_Moon_Cache_Cached_Rayleigh_Inverse;
	Parms.CallFunc_Color_Correction_Cache_Saturation = CallFunc_Color_Correction_Cache_Saturation;
	Parms.CallFunc_Color_Correction_Cache_Contrast = CallFunc_Color_Correction_Cache_Contrast;
	Parms.CallFunc_Color_Correction_Cache_Gamma = CallFunc_Color_Correction_Cache_Gamma;
	Parms.CallFunc_Color_Correction_Cache_Gain = CallFunc_Color_Correction_Cache_Gain;
	Parms.CallFunc_Color_Correction_Cache_Offset = CallFunc_Color_Correction_Cache_Offset;
	Parms.CallFunc_Color_Correction_Cache_Exposure_Day = CallFunc_Color_Correction_Cache_Exposure_Day;
	Parms.CallFunc_Color_Correction_Cache_Exposure_Night = CallFunc_Color_Correction_Cache_Exposure_Night;
	Parms.CallFunc_Vault_Override_Cache_VaultOverride = CallFunc_Vault_Override_Cache_VaultOverride;
	Parms.CallFunc_Sun_Cache_Angle_X = CallFunc_Sun_Cache_Angle_X;
	Parms.CallFunc_Sun_Cache_Sun_Color = CallFunc_Sun_Cache_Sun_Color;
	Parms.CallFunc_Sun_Cache_Cached_Sun_Disk_Color_Set = CallFunc_Sun_Cache_Cached_Sun_Disk_Color_Set;
	Parms.CallFunc_Sun_Cache_Cached_Sun_Disk_Color = CallFunc_Sun_Cache_Cached_Sun_Disk_Color;
	Parms.CallFunc_Fog_Cache_Cached_Fog_Volumetric_Day = CallFunc_Fog_Cache_Cached_Fog_Volumetric_Day;
	Parms.CallFunc_Fog_Cache_Cached_Fog_Volumetric_Night = CallFunc_Fog_Cache_Cached_Fog_Volumetric_Night;
	Parms.CallFunc_Fog_Cache_Cached_Height_Fog_Contribution_Day = CallFunc_Fog_Cache_Cached_Height_Fog_Contribution_Day;
	Parms.CallFunc_Fog_Cache_Cached_Height_Fog_Contribution_Night = CallFunc_Fog_Cache_Cached_Height_Fog_Contribution_Night;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TimeofDay_Lighting.TimeofDay_Lighting_C.SkyBox Material Cache
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// double                             CallFunc_Conv_ByteToDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_1                      (ReferenceParm)
// struct FS_VE_Preset_Master         CallFunc_GetDataTableRowFromName_OutRow                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Fae_Magic_Toggle         CallFunc_GetDataTableRowFromName_OutRow_1                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_2                      (ReferenceParm)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_3                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Fae_Magic_Toggle         CallFunc_GetDataTableRowFromName_OutRow_2                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Fae_Magic_Toggle         CallFunc_GetDataTableRowFromName_OutRow_3                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_Array_Get_Item_5                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_4                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_6                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_ByteToDouble_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Fae_Magic_Toggle         CallFunc_GetDataTableRowFromName_OutRow_4                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_5                      (ReferenceParm)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_7                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_VE_Preset_Master         CallFunc_GetDataTableRowFromName_OutRow_5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_5                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_Array_Get_Item_8                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_6                      (ReferenceParm)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_2             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_9                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Fae_Magic_Toggle         CallFunc_GetDataTableRowFromName_OutRow_6                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_6                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_7                      (ReferenceParm)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_10                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Fae_Magic_Toggle         CallFunc_GetDataTableRowFromName_OutRow_7                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_7                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_8                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_11                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_Array_Get_Item_12                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_Fae_Magic_Toggle         CallFunc_GetDataTableRowFromName_OutRow_8                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_8                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_9                      (ReferenceParm)
// bool                               K2Node_SwitchInteger_CmpSuccess_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_13                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Fae_Magic_Toggle         CallFunc_GetDataTableRowFromName_OutRow_9                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_9                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_3             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_10                     (ReferenceParm)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_14                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Fae_Magic_Toggle         CallFunc_GetDataTableRowFromName_OutRow_10                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_10                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_Array_Get_Item_15                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_5                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_4             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_ByteToDouble_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_11                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_16                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_12                     (ReferenceParm)
// struct FS_VE_Preset_Master         CallFunc_GetDataTableRowFromName_OutRow_11                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_11                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_17                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Fae_Magic_Toggle         CallFunc_GetDataTableRowFromName_OutRow_12                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_12                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_Array_Get_Item_18                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_13                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_19                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_5             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_Fae_Magic_Toggle         CallFunc_GetDataTableRowFromName_OutRow_13                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_13                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_14                     (ReferenceParm)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_6                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_20                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Fae_Magic_Toggle         CallFunc_GetDataTableRowFromName_OutRow_14                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_14                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_Array_Get_Item_21                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_7                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_6             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_Array_Get_Item_22                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_7             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_3   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_4   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_5   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_6   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_7   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Lighting_C::SkyBox_Material_Cache(TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, double CallFunc_Conv_ByteToDouble_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, class UMaterialInstance* CallFunc_Array_Get_Item, class FName CallFunc_Array_Get_Item_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_1, const struct FS_VE_Preset_Master& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class FName CallFunc_Array_Get_Item_2, const struct FS_Fae_Magic_Toggle& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, double CallFunc_Conv_IntToDouble_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_3, class FName CallFunc_Array_Get_Item_3, const struct FS_Fae_Magic_Toggle& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, class FName CallFunc_Array_Get_Item_4, const struct FS_Fae_Magic_Toggle& CallFunc_GetDataTableRowFromName_OutRow_3, bool CallFunc_GetDataTableRowFromName_ReturnValue_3, bool K2Node_SwitchInteger_CmpSuccess, double CallFunc_Conv_IntToDouble_ReturnValue_1, class UMaterialInstance* CallFunc_Array_Get_Item_5, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_4, class FName CallFunc_Array_Get_Item_6, double CallFunc_Conv_ByteToDouble_ReturnValue_1, const struct FS_Fae_Magic_Toggle& CallFunc_GetDataTableRowFromName_OutRow_4, bool CallFunc_GetDataTableRowFromName_ReturnValue_4, int32 CallFunc_FTrunc_ReturnValue_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_5, double CallFunc_Conv_IntToDouble_ReturnValue_2, class FName CallFunc_Array_Get_Item_7, const struct FS_VE_Preset_Master& CallFunc_GetDataTableRowFromName_OutRow_5, bool CallFunc_GetDataTableRowFromName_ReturnValue_5, class UMaterialInstance* CallFunc_Array_Get_Item_8, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_6, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, class FName CallFunc_Array_Get_Item_9, const struct FS_Fae_Magic_Toggle& CallFunc_GetDataTableRowFromName_OutRow_6, bool CallFunc_GetDataTableRowFromName_ReturnValue_6, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_7, bool K2Node_SwitchInteger_CmpSuccess_1, class FName CallFunc_Array_Get_Item_10, const struct FS_Fae_Magic_Toggle& CallFunc_GetDataTableRowFromName_OutRow_7, bool CallFunc_GetDataTableRowFromName_ReturnValue_7, int32 CallFunc_Conv_BoolToInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess_2, double CallFunc_Conv_IntToDouble_ReturnValue_3, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_8, class FName CallFunc_Array_Get_Item_11, class UMaterialInstance* CallFunc_Array_Get_Item_12, const struct FS_Fae_Magic_Toggle& CallFunc_GetDataTableRowFromName_OutRow_8, bool CallFunc_GetDataTableRowFromName_ReturnValue_8, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_9, bool K2Node_SwitchInteger_CmpSuccess_3, class FName CallFunc_Array_Get_Item_13, const struct FS_Fae_Magic_Toggle& CallFunc_GetDataTableRowFromName_OutRow_9, bool CallFunc_GetDataTableRowFromName_ReturnValue_9, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_3, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_10, double CallFunc_Conv_IntToDouble_ReturnValue_4, class FName CallFunc_Array_Get_Item_14, const struct FS_Fae_Magic_Toggle& CallFunc_GetDataTableRowFromName_OutRow_10, bool CallFunc_GetDataTableRowFromName_ReturnValue_10, class UMaterialInstance* CallFunc_Array_Get_Item_15, double CallFunc_Conv_IntToDouble_ReturnValue_5, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_4, int32 CallFunc_Conv_BoolToInt_ReturnValue_1, double CallFunc_Conv_ByteToDouble_ReturnValue_2, bool K2Node_SwitchInteger_CmpSuccess_4, int32 CallFunc_FTrunc_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_11, class FName CallFunc_Array_Get_Item_16, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_12, const struct FS_VE_Preset_Master& CallFunc_GetDataTableRowFromName_OutRow_11, bool CallFunc_GetDataTableRowFromName_ReturnValue_11, class FName CallFunc_Array_Get_Item_17, const struct FS_Fae_Magic_Toggle& CallFunc_GetDataTableRowFromName_OutRow_12, bool CallFunc_GetDataTableRowFromName_ReturnValue_12, bool K2Node_SwitchInteger_CmpSuccess_5, class UMaterialInstance* CallFunc_Array_Get_Item_18, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_13, class FName CallFunc_Array_Get_Item_19, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_5, const struct FS_Fae_Magic_Toggle& CallFunc_GetDataTableRowFromName_OutRow_13, bool CallFunc_GetDataTableRowFromName_ReturnValue_13, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_14, double CallFunc_Conv_IntToDouble_ReturnValue_6, class FName CallFunc_Array_Get_Item_20, const struct FS_Fae_Magic_Toggle& CallFunc_GetDataTableRowFromName_OutRow_14, bool CallFunc_GetDataTableRowFromName_ReturnValue_14, class UMaterialInstance* CallFunc_Array_Get_Item_21, double CallFunc_Conv_IntToDouble_ReturnValue_7, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_6, int32 CallFunc_Conv_BoolToInt_ReturnValue_2, bool K2Node_SwitchInteger_CmpSuccess_6, class UMaterialInstance* CallFunc_Array_Get_Item_22, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_7, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_3, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_4, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_5, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_6, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Lighting_C", "SkyBox Material Cache");

	Params::UTimeofDay_Lighting_C_SkyBox_Material_Cache_Params Parms{};

	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Conv_ByteToDouble_ReturnValue = CallFunc_Conv_ByteToDouble_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_1 = CallFunc_GetDataTableRowNames_OutRowNames_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_2 = CallFunc_GetDataTableRowNames_OutRowNames_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_3 = CallFunc_GetDataTableRowNames_OutRowNames_3;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_2 = CallFunc_GetDataTableRowFromName_OutRow_2;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_2 = CallFunc_GetDataTableRowFromName_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_3 = CallFunc_GetDataTableRowFromName_OutRow_3;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_3 = CallFunc_GetDataTableRowFromName_ReturnValue_3;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_1 = CallFunc_Conv_IntToDouble_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_4 = CallFunc_GetDataTableRowNames_OutRowNames_4;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_Conv_ByteToDouble_ReturnValue_1 = CallFunc_Conv_ByteToDouble_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_4 = CallFunc_GetDataTableRowFromName_OutRow_4;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_4 = CallFunc_GetDataTableRowFromName_ReturnValue_4;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_5 = CallFunc_GetDataTableRowNames_OutRowNames_5;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_2 = CallFunc_Conv_IntToDouble_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_5 = CallFunc_GetDataTableRowFromName_OutRow_5;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_5 = CallFunc_GetDataTableRowFromName_ReturnValue_5;
	Parms.CallFunc_Array_Get_Item_8 = CallFunc_Array_Get_Item_8;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_6 = CallFunc_GetDataTableRowNames_OutRowNames_6;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_2 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_9 = CallFunc_Array_Get_Item_9;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_6 = CallFunc_GetDataTableRowFromName_OutRow_6;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_6 = CallFunc_GetDataTableRowFromName_ReturnValue_6;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_7 = CallFunc_GetDataTableRowNames_OutRowNames_7;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.CallFunc_Array_Get_Item_10 = CallFunc_Array_Get_Item_10;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_7 = CallFunc_GetDataTableRowFromName_OutRow_7;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_7 = CallFunc_GetDataTableRowFromName_ReturnValue_7;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess_2 = K2Node_SwitchInteger_CmpSuccess_2;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_3 = CallFunc_Conv_IntToDouble_ReturnValue_3;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_8 = CallFunc_GetDataTableRowNames_OutRowNames_8;
	Parms.CallFunc_Array_Get_Item_11 = CallFunc_Array_Get_Item_11;
	Parms.CallFunc_Array_Get_Item_12 = CallFunc_Array_Get_Item_12;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_8 = CallFunc_GetDataTableRowFromName_OutRow_8;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_8 = CallFunc_GetDataTableRowFromName_ReturnValue_8;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_9 = CallFunc_GetDataTableRowNames_OutRowNames_9;
	Parms.K2Node_SwitchInteger_CmpSuccess_3 = K2Node_SwitchInteger_CmpSuccess_3;
	Parms.CallFunc_Array_Get_Item_13 = CallFunc_Array_Get_Item_13;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_9 = CallFunc_GetDataTableRowFromName_OutRow_9;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_9 = CallFunc_GetDataTableRowFromName_ReturnValue_9;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_3 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_3;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_10 = CallFunc_GetDataTableRowNames_OutRowNames_10;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_4 = CallFunc_Conv_IntToDouble_ReturnValue_4;
	Parms.CallFunc_Array_Get_Item_14 = CallFunc_Array_Get_Item_14;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_10 = CallFunc_GetDataTableRowFromName_OutRow_10;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_10 = CallFunc_GetDataTableRowFromName_ReturnValue_10;
	Parms.CallFunc_Array_Get_Item_15 = CallFunc_Array_Get_Item_15;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_5 = CallFunc_Conv_IntToDouble_ReturnValue_5;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_4 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_4;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_1 = CallFunc_Conv_BoolToInt_ReturnValue_1;
	Parms.CallFunc_Conv_ByteToDouble_ReturnValue_2 = CallFunc_Conv_ByteToDouble_ReturnValue_2;
	Parms.K2Node_SwitchInteger_CmpSuccess_4 = K2Node_SwitchInteger_CmpSuccess_4;
	Parms.CallFunc_FTrunc_ReturnValue_2 = CallFunc_FTrunc_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_11 = CallFunc_GetDataTableRowNames_OutRowNames_11;
	Parms.CallFunc_Array_Get_Item_16 = CallFunc_Array_Get_Item_16;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_12 = CallFunc_GetDataTableRowNames_OutRowNames_12;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_11 = CallFunc_GetDataTableRowFromName_OutRow_11;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_11 = CallFunc_GetDataTableRowFromName_ReturnValue_11;
	Parms.CallFunc_Array_Get_Item_17 = CallFunc_Array_Get_Item_17;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_12 = CallFunc_GetDataTableRowFromName_OutRow_12;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_12 = CallFunc_GetDataTableRowFromName_ReturnValue_12;
	Parms.K2Node_SwitchInteger_CmpSuccess_5 = K2Node_SwitchInteger_CmpSuccess_5;
	Parms.CallFunc_Array_Get_Item_18 = CallFunc_Array_Get_Item_18;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_13 = CallFunc_GetDataTableRowNames_OutRowNames_13;
	Parms.CallFunc_Array_Get_Item_19 = CallFunc_Array_Get_Item_19;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_5 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_5;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_13 = CallFunc_GetDataTableRowFromName_OutRow_13;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_13 = CallFunc_GetDataTableRowFromName_ReturnValue_13;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_14 = CallFunc_GetDataTableRowNames_OutRowNames_14;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_6 = CallFunc_Conv_IntToDouble_ReturnValue_6;
	Parms.CallFunc_Array_Get_Item_20 = CallFunc_Array_Get_Item_20;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_14 = CallFunc_GetDataTableRowFromName_OutRow_14;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_14 = CallFunc_GetDataTableRowFromName_ReturnValue_14;
	Parms.CallFunc_Array_Get_Item_21 = CallFunc_Array_Get_Item_21;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_7 = CallFunc_Conv_IntToDouble_ReturnValue_7;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_6 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_6;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_2 = CallFunc_Conv_BoolToInt_ReturnValue_2;
	Parms.K2Node_SwitchInteger_CmpSuccess_6 = K2Node_SwitchInteger_CmpSuccess_6;
	Parms.CallFunc_Array_Get_Item_22 = CallFunc_Array_Get_Item_22;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_7 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_7;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_3 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_3;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_4 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_4;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_5 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_5;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_6 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_6;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_7 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_7;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TimeofDay_Lighting.TimeofDay_Lighting_C.Secondary Moon Cache
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FLinearColor>        Atm_C_Color_Selection                                            (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Atm_B_Color_Selection                                            (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Atm_D_Color_Selection                                            (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Moon_D_Color_3_Selection                                         (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Moon_D_Color_2_Selection                                         (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Moon_D_Color_1_Selection                                         (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Moon_B_Color_3_Selection                                         (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Moon_B_Color_2_Selection                                         (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Moon_B_Color_1_Selection                                         (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Moon_C_Color_3_Selection                                         (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Moon_C_Color_2_Selection                                         (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Moon_C_Color_1_Selection                                         (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Atm_A_Color_Selection                                            (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Moon_A_Color_3_Selection                                         (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Moon_A_Color_2_Selection                                         (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Moon_A_Color_1_Selection                                         (Edit, BlueprintVisible)
// struct FLinearColor                CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_1                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Moon_Color               CallFunc_GetDataTableRowFromName_OutRow                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Moon_Color               CallFunc_GetDataTableRowFromName_OutRow_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_2                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Moon_Color_Saturation    CallFunc_GetDataTableRowFromName_OutRow_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_3                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_6                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Moon_Color_Saturation    CallFunc_GetDataTableRowFromName_OutRow_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_4                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_7                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_5                      (ReferenceParm)
// struct FS_Moon_Color_Saturation    CallFunc_GetDataTableRowFromName_OutRow_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_6                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_8                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Moon_Color               CallFunc_GetDataTableRowFromName_OutRow_5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_5                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_9                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_7                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_10                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_11                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Atm_Moon_Visbility       CallFunc_GetDataTableRowFromName_OutRow_6                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_6                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Moon_Color_Saturation    CallFunc_GetDataTableRowFromName_OutRow_7                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_7                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_12                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_8                      (ReferenceParm)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_9                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_13                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_14                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Moon_Color               CallFunc_GetDataTableRowFromName_OutRow_8                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_8                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Moon_Color               CallFunc_GetDataTableRowFromName_OutRow_9                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_9                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_15                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_16                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_10                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_17                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Moon_Color_Saturation    CallFunc_GetDataTableRowFromName_OutRow_10                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_10                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_11                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_18                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Moon_Color_Saturation    CallFunc_GetDataTableRowFromName_OutRow_11                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_11                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_12                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_19                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_13                     (ReferenceParm)
// struct FS_Moon_Color_Saturation    CallFunc_GetDataTableRowFromName_OutRow_12                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_12                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_20                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Moon_Color               CallFunc_GetDataTableRowFromName_OutRow_13                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_13                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_21                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_14                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_22                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_23                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Moon_Color_Saturation    CallFunc_GetDataTableRowFromName_OutRow_14                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_14                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_15                     (ReferenceParm)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_16                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_24                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_25                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Moon_Color               CallFunc_GetDataTableRowFromName_OutRow_15                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_15                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Moon_Color               CallFunc_GetDataTableRowFromName_OutRow_16                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_16                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_26                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_27                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_17                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_28                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Moon_Color_Saturation    CallFunc_GetDataTableRowFromName_OutRow_17                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_17                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_18                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_29                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Moon_Color_Saturation    CallFunc_GetDataTableRowFromName_OutRow_18                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_18                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_9                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_19                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_30                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_20                     (ReferenceParm)
// struct FS_Moon_Color_Saturation    CallFunc_GetDataTableRowFromName_OutRow_19                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_19                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_31                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Moon_Color               CallFunc_GetDataTableRowFromName_OutRow_20                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_20                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_10                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_32                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_21                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_33                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_34                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Moon_Color_Saturation    CallFunc_GetDataTableRowFromName_OutRow_21                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_21                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_11                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_22                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_35                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_23                     (ReferenceParm)
// struct FS_Moon_Color               CallFunc_GetDataTableRowFromName_OutRow_22                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_22                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_36                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Moon_Color               CallFunc_GetDataTableRowFromName_OutRow_23                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_23                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_37                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_38                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_24                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_39                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Moon_Color_Saturation    CallFunc_GetDataTableRowFromName_OutRow_24                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_24                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_12                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_25                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_40                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Moon_Color_Saturation    CallFunc_GetDataTableRowFromName_OutRow_25                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_25                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_13                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_26                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_41                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_27                     (ReferenceParm)
// struct FS_Moon_Color_Saturation    CallFunc_GetDataTableRowFromName_OutRow_26                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_26                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_42                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Moon_Color               CallFunc_GetDataTableRowFromName_OutRow_27                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_27                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_14                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_43                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_28                     (ReferenceParm)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_29                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_44                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_30                     (ReferenceParm)
// struct FS_Moon_Color_Saturation    CallFunc_GetDataTableRowFromName_OutRow_28                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_28                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_31                     (ReferenceParm)
// bool                               K2Node_SwitchInteger_CmpSuccess_15                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_32                     (ReferenceParm)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_33                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_45                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_SecondaryMoon_Groups     CallFunc_GetDataTableRowFromName_OutRow_29                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_29                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_46                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_47                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Secondary_moon_Color     CallFunc_GetDataTableRowFromName_OutRow_30                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_30                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Secondary_moon_Color     CallFunc_GetDataTableRowFromName_OutRow_31                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_31                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_48                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_49                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Secondary_moon_Color     CallFunc_GetDataTableRowFromName_OutRow_32                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_32                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Secondary_moon_Color     CallFunc_GetDataTableRowFromName_OutRow_33                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_33                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_Cached_Cloud_Index_D_ImplicitCast             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_Cached_Cloud_Index_C_ImplicitCast             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_Cached_Cloud_Index_B_ImplicitCast             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_Cached_Cloud_Index_A_ImplicitCast             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Lighting_C::Secondary_Moon_Cache(const TArray<struct FLinearColor>& Atm_C_Color_Selection, const TArray<struct FLinearColor>& Atm_B_Color_Selection, const TArray<struct FLinearColor>& Atm_D_Color_Selection, const TArray<struct FLinearColor>& Moon_D_Color_3_Selection, const TArray<struct FLinearColor>& Moon_D_Color_2_Selection, const TArray<struct FLinearColor>& Moon_D_Color_1_Selection, const TArray<struct FLinearColor>& Moon_B_Color_3_Selection, const TArray<struct FLinearColor>& Moon_B_Color_2_Selection, const TArray<struct FLinearColor>& Moon_B_Color_1_Selection, const TArray<struct FLinearColor>& Moon_C_Color_3_Selection, const TArray<struct FLinearColor>& Moon_C_Color_2_Selection, const TArray<struct FLinearColor>& Moon_C_Color_1_Selection, const TArray<struct FLinearColor>& Atm_A_Color_Selection, const TArray<struct FLinearColor>& Moon_A_Color_3_Selection, const TArray<struct FLinearColor>& Moon_A_Color_2_Selection, const TArray<struct FLinearColor>& Moon_A_Color_1_Selection, const struct FLinearColor& CallFunc_Array_Get_Item, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_1, class FName CallFunc_Array_Get_Item_1, class FName CallFunc_Array_Get_Item_2, const struct FS_Moon_Color& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FS_Moon_Color& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, const struct FLinearColor& CallFunc_Array_Get_Item_3, const struct FLinearColor& CallFunc_Array_Get_Item_4, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_2, class FName CallFunc_Array_Get_Item_5, const struct FS_Moon_Color_Saturation& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, bool K2Node_SwitchInteger_CmpSuccess, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_3, class FName CallFunc_Array_Get_Item_6, const struct FS_Moon_Color_Saturation& CallFunc_GetDataTableRowFromName_OutRow_3, bool CallFunc_GetDataTableRowFromName_ReturnValue_3, bool K2Node_SwitchInteger_CmpSuccess_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_4, class FName CallFunc_Array_Get_Item_7, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_5, const struct FS_Moon_Color_Saturation& CallFunc_GetDataTableRowFromName_OutRow_4, bool CallFunc_GetDataTableRowFromName_ReturnValue_4, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_6, class FName CallFunc_Array_Get_Item_8, const struct FS_Moon_Color& CallFunc_GetDataTableRowFromName_OutRow_5, bool CallFunc_GetDataTableRowFromName_ReturnValue_5, bool K2Node_SwitchInteger_CmpSuccess_2, const struct FLinearColor& CallFunc_Array_Get_Item_9, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_7, class FName CallFunc_Array_Get_Item_10, class FName CallFunc_Array_Get_Item_11, const struct FS_Atm_Moon_Visbility& CallFunc_GetDataTableRowFromName_OutRow_6, bool CallFunc_GetDataTableRowFromName_ReturnValue_6, const struct FS_Moon_Color_Saturation& CallFunc_GetDataTableRowFromName_OutRow_7, bool CallFunc_GetDataTableRowFromName_ReturnValue_7, bool K2Node_SwitchInteger_CmpSuccess_3, const struct FLinearColor& CallFunc_Array_Get_Item_12, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_8, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_9, class FName CallFunc_Array_Get_Item_13, class FName CallFunc_Array_Get_Item_14, const struct FS_Moon_Color& CallFunc_GetDataTableRowFromName_OutRow_8, bool CallFunc_GetDataTableRowFromName_ReturnValue_8, const struct FS_Moon_Color& CallFunc_GetDataTableRowFromName_OutRow_9, bool CallFunc_GetDataTableRowFromName_ReturnValue_9, const struct FLinearColor& CallFunc_Array_Get_Item_15, const struct FLinearColor& CallFunc_Array_Get_Item_16, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_10, class FName CallFunc_Array_Get_Item_17, const struct FS_Moon_Color_Saturation& CallFunc_GetDataTableRowFromName_OutRow_10, bool CallFunc_GetDataTableRowFromName_ReturnValue_10, bool K2Node_SwitchInteger_CmpSuccess_4, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_11, class FName CallFunc_Array_Get_Item_18, const struct FS_Moon_Color_Saturation& CallFunc_GetDataTableRowFromName_OutRow_11, bool CallFunc_GetDataTableRowFromName_ReturnValue_11, bool K2Node_SwitchInteger_CmpSuccess_5, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_12, class FName CallFunc_Array_Get_Item_19, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_13, const struct FS_Moon_Color_Saturation& CallFunc_GetDataTableRowFromName_OutRow_12, bool CallFunc_GetDataTableRowFromName_ReturnValue_12, class FName CallFunc_Array_Get_Item_20, const struct FS_Moon_Color& CallFunc_GetDataTableRowFromName_OutRow_13, bool CallFunc_GetDataTableRowFromName_ReturnValue_13, bool K2Node_SwitchInteger_CmpSuccess_6, const struct FLinearColor& CallFunc_Array_Get_Item_21, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_14, class FName CallFunc_Array_Get_Item_22, const struct FLinearColor& CallFunc_Array_Get_Item_23, const struct FS_Moon_Color_Saturation& CallFunc_GetDataTableRowFromName_OutRow_14, bool CallFunc_GetDataTableRowFromName_ReturnValue_14, bool K2Node_SwitchInteger_CmpSuccess_7, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_15, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_16, class FName CallFunc_Array_Get_Item_24, class FName CallFunc_Array_Get_Item_25, const struct FS_Moon_Color& CallFunc_GetDataTableRowFromName_OutRow_15, bool CallFunc_GetDataTableRowFromName_ReturnValue_15, const struct FS_Moon_Color& CallFunc_GetDataTableRowFromName_OutRow_16, bool CallFunc_GetDataTableRowFromName_ReturnValue_16, const struct FLinearColor& CallFunc_Array_Get_Item_26, const struct FLinearColor& CallFunc_Array_Get_Item_27, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_17, class FName CallFunc_Array_Get_Item_28, const struct FS_Moon_Color_Saturation& CallFunc_GetDataTableRowFromName_OutRow_17, bool CallFunc_GetDataTableRowFromName_ReturnValue_17, bool K2Node_SwitchInteger_CmpSuccess_8, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_18, class FName CallFunc_Array_Get_Item_29, const struct FS_Moon_Color_Saturation& CallFunc_GetDataTableRowFromName_OutRow_18, bool CallFunc_GetDataTableRowFromName_ReturnValue_18, bool K2Node_SwitchInteger_CmpSuccess_9, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_19, class FName CallFunc_Array_Get_Item_30, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_20, const struct FS_Moon_Color_Saturation& CallFunc_GetDataTableRowFromName_OutRow_19, bool CallFunc_GetDataTableRowFromName_ReturnValue_19, class FName CallFunc_Array_Get_Item_31, const struct FS_Moon_Color& CallFunc_GetDataTableRowFromName_OutRow_20, bool CallFunc_GetDataTableRowFromName_ReturnValue_20, bool K2Node_SwitchInteger_CmpSuccess_10, const struct FLinearColor& CallFunc_Array_Get_Item_32, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_21, class FName CallFunc_Array_Get_Item_33, const struct FLinearColor& CallFunc_Array_Get_Item_34, const struct FS_Moon_Color_Saturation& CallFunc_GetDataTableRowFromName_OutRow_21, bool CallFunc_GetDataTableRowFromName_ReturnValue_21, bool K2Node_SwitchInteger_CmpSuccess_11, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_Conv_IntToDouble_ReturnValue_2, double CallFunc_Conv_IntToDouble_ReturnValue_3, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_22, class FName CallFunc_Array_Get_Item_35, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_23, const struct FS_Moon_Color& CallFunc_GetDataTableRowFromName_OutRow_22, bool CallFunc_GetDataTableRowFromName_ReturnValue_22, class FName CallFunc_Array_Get_Item_36, const struct FS_Moon_Color& CallFunc_GetDataTableRowFromName_OutRow_23, bool CallFunc_GetDataTableRowFromName_ReturnValue_23, const struct FLinearColor& CallFunc_Array_Get_Item_37, const struct FLinearColor& CallFunc_Array_Get_Item_38, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_24, class FName CallFunc_Array_Get_Item_39, const struct FS_Moon_Color_Saturation& CallFunc_GetDataTableRowFromName_OutRow_24, bool CallFunc_GetDataTableRowFromName_ReturnValue_24, bool K2Node_SwitchInteger_CmpSuccess_12, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_25, class FName CallFunc_Array_Get_Item_40, const struct FS_Moon_Color_Saturation& CallFunc_GetDataTableRowFromName_OutRow_25, bool CallFunc_GetDataTableRowFromName_ReturnValue_25, bool K2Node_SwitchInteger_CmpSuccess_13, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_26, class FName CallFunc_Array_Get_Item_41, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_27, const struct FS_Moon_Color_Saturation& CallFunc_GetDataTableRowFromName_OutRow_26, bool CallFunc_GetDataTableRowFromName_ReturnValue_26, class FName CallFunc_Array_Get_Item_42, const struct FS_Moon_Color& CallFunc_GetDataTableRowFromName_OutRow_27, bool CallFunc_GetDataTableRowFromName_ReturnValue_27, bool K2Node_SwitchInteger_CmpSuccess_14, const struct FLinearColor& CallFunc_Array_Get_Item_43, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_28, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_29, class FName CallFunc_Array_Get_Item_44, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_30, const struct FS_Moon_Color_Saturation& CallFunc_GetDataTableRowFromName_OutRow_28, bool CallFunc_GetDataTableRowFromName_ReturnValue_28, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_31, bool K2Node_SwitchInteger_CmpSuccess_15, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_32, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_33, class FName CallFunc_Array_Get_Item_45, const struct FS_SecondaryMoon_Groups& CallFunc_GetDataTableRowFromName_OutRow_29, bool CallFunc_GetDataTableRowFromName_ReturnValue_29, class FName CallFunc_Array_Get_Item_46, class FName CallFunc_Array_Get_Item_47, const struct FS_Secondary_moon_Color& CallFunc_GetDataTableRowFromName_OutRow_30, bool CallFunc_GetDataTableRowFromName_ReturnValue_30, const struct FS_Secondary_moon_Color& CallFunc_GetDataTableRowFromName_OutRow_31, bool CallFunc_GetDataTableRowFromName_ReturnValue_31, class FName CallFunc_Array_Get_Item_48, class FName CallFunc_Array_Get_Item_49, const struct FS_Secondary_moon_Color& CallFunc_GetDataTableRowFromName_OutRow_32, bool CallFunc_GetDataTableRowFromName_ReturnValue_32, const struct FS_Secondary_moon_Color& CallFunc_GetDataTableRowFromName_OutRow_33, bool CallFunc_GetDataTableRowFromName_ReturnValue_33, float K2Node_VariableSet_Cached_Cloud_Index_D_ImplicitCast, float K2Node_VariableSet_Cached_Cloud_Index_C_ImplicitCast, float K2Node_VariableSet_Cached_Cloud_Index_B_ImplicitCast, float K2Node_VariableSet_Cached_Cloud_Index_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Lighting_C", "Secondary Moon Cache");

	Params::UTimeofDay_Lighting_C_Secondary_Moon_Cache_Params Parms{};

	Parms.Atm_C_Color_Selection = Atm_C_Color_Selection;
	Parms.Atm_B_Color_Selection = Atm_B_Color_Selection;
	Parms.Atm_D_Color_Selection = Atm_D_Color_Selection;
	Parms.Moon_D_Color_3_Selection = Moon_D_Color_3_Selection;
	Parms.Moon_D_Color_2_Selection = Moon_D_Color_2_Selection;
	Parms.Moon_D_Color_1_Selection = Moon_D_Color_1_Selection;
	Parms.Moon_B_Color_3_Selection = Moon_B_Color_3_Selection;
	Parms.Moon_B_Color_2_Selection = Moon_B_Color_2_Selection;
	Parms.Moon_B_Color_1_Selection = Moon_B_Color_1_Selection;
	Parms.Moon_C_Color_3_Selection = Moon_C_Color_3_Selection;
	Parms.Moon_C_Color_2_Selection = Moon_C_Color_2_Selection;
	Parms.Moon_C_Color_1_Selection = Moon_C_Color_1_Selection;
	Parms.Atm_A_Color_Selection = Atm_A_Color_Selection;
	Parms.Moon_A_Color_3_Selection = Moon_A_Color_3_Selection;
	Parms.Moon_A_Color_2_Selection = Moon_A_Color_2_Selection;
	Parms.Moon_A_Color_1_Selection = Moon_A_Color_1_Selection;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_1 = CallFunc_GetDataTableRowNames_OutRowNames_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_2 = CallFunc_GetDataTableRowNames_OutRowNames_2;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_2 = CallFunc_GetDataTableRowFromName_OutRow_2;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_2 = CallFunc_GetDataTableRowFromName_ReturnValue_2;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_3 = CallFunc_GetDataTableRowNames_OutRowNames_3;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_3 = CallFunc_GetDataTableRowFromName_OutRow_3;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_3 = CallFunc_GetDataTableRowFromName_ReturnValue_3;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_4 = CallFunc_GetDataTableRowNames_OutRowNames_4;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_5 = CallFunc_GetDataTableRowNames_OutRowNames_5;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_4 = CallFunc_GetDataTableRowFromName_OutRow_4;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_4 = CallFunc_GetDataTableRowFromName_ReturnValue_4;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_6 = CallFunc_GetDataTableRowNames_OutRowNames_6;
	Parms.CallFunc_Array_Get_Item_8 = CallFunc_Array_Get_Item_8;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_5 = CallFunc_GetDataTableRowFromName_OutRow_5;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_5 = CallFunc_GetDataTableRowFromName_ReturnValue_5;
	Parms.K2Node_SwitchInteger_CmpSuccess_2 = K2Node_SwitchInteger_CmpSuccess_2;
	Parms.CallFunc_Array_Get_Item_9 = CallFunc_Array_Get_Item_9;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_7 = CallFunc_GetDataTableRowNames_OutRowNames_7;
	Parms.CallFunc_Array_Get_Item_10 = CallFunc_Array_Get_Item_10;
	Parms.CallFunc_Array_Get_Item_11 = CallFunc_Array_Get_Item_11;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_6 = CallFunc_GetDataTableRowFromName_OutRow_6;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_6 = CallFunc_GetDataTableRowFromName_ReturnValue_6;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_7 = CallFunc_GetDataTableRowFromName_OutRow_7;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_7 = CallFunc_GetDataTableRowFromName_ReturnValue_7;
	Parms.K2Node_SwitchInteger_CmpSuccess_3 = K2Node_SwitchInteger_CmpSuccess_3;
	Parms.CallFunc_Array_Get_Item_12 = CallFunc_Array_Get_Item_12;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_8 = CallFunc_GetDataTableRowNames_OutRowNames_8;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_9 = CallFunc_GetDataTableRowNames_OutRowNames_9;
	Parms.CallFunc_Array_Get_Item_13 = CallFunc_Array_Get_Item_13;
	Parms.CallFunc_Array_Get_Item_14 = CallFunc_Array_Get_Item_14;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_8 = CallFunc_GetDataTableRowFromName_OutRow_8;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_8 = CallFunc_GetDataTableRowFromName_ReturnValue_8;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_9 = CallFunc_GetDataTableRowFromName_OutRow_9;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_9 = CallFunc_GetDataTableRowFromName_ReturnValue_9;
	Parms.CallFunc_Array_Get_Item_15 = CallFunc_Array_Get_Item_15;
	Parms.CallFunc_Array_Get_Item_16 = CallFunc_Array_Get_Item_16;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_10 = CallFunc_GetDataTableRowNames_OutRowNames_10;
	Parms.CallFunc_Array_Get_Item_17 = CallFunc_Array_Get_Item_17;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_10 = CallFunc_GetDataTableRowFromName_OutRow_10;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_10 = CallFunc_GetDataTableRowFromName_ReturnValue_10;
	Parms.K2Node_SwitchInteger_CmpSuccess_4 = K2Node_SwitchInteger_CmpSuccess_4;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_11 = CallFunc_GetDataTableRowNames_OutRowNames_11;
	Parms.CallFunc_Array_Get_Item_18 = CallFunc_Array_Get_Item_18;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_11 = CallFunc_GetDataTableRowFromName_OutRow_11;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_11 = CallFunc_GetDataTableRowFromName_ReturnValue_11;
	Parms.K2Node_SwitchInteger_CmpSuccess_5 = K2Node_SwitchInteger_CmpSuccess_5;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_12 = CallFunc_GetDataTableRowNames_OutRowNames_12;
	Parms.CallFunc_Array_Get_Item_19 = CallFunc_Array_Get_Item_19;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_13 = CallFunc_GetDataTableRowNames_OutRowNames_13;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_12 = CallFunc_GetDataTableRowFromName_OutRow_12;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_12 = CallFunc_GetDataTableRowFromName_ReturnValue_12;
	Parms.CallFunc_Array_Get_Item_20 = CallFunc_Array_Get_Item_20;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_13 = CallFunc_GetDataTableRowFromName_OutRow_13;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_13 = CallFunc_GetDataTableRowFromName_ReturnValue_13;
	Parms.K2Node_SwitchInteger_CmpSuccess_6 = K2Node_SwitchInteger_CmpSuccess_6;
	Parms.CallFunc_Array_Get_Item_21 = CallFunc_Array_Get_Item_21;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_14 = CallFunc_GetDataTableRowNames_OutRowNames_14;
	Parms.CallFunc_Array_Get_Item_22 = CallFunc_Array_Get_Item_22;
	Parms.CallFunc_Array_Get_Item_23 = CallFunc_Array_Get_Item_23;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_14 = CallFunc_GetDataTableRowFromName_OutRow_14;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_14 = CallFunc_GetDataTableRowFromName_ReturnValue_14;
	Parms.K2Node_SwitchInteger_CmpSuccess_7 = K2Node_SwitchInteger_CmpSuccess_7;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_15 = CallFunc_GetDataTableRowNames_OutRowNames_15;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_16 = CallFunc_GetDataTableRowNames_OutRowNames_16;
	Parms.CallFunc_Array_Get_Item_24 = CallFunc_Array_Get_Item_24;
	Parms.CallFunc_Array_Get_Item_25 = CallFunc_Array_Get_Item_25;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_15 = CallFunc_GetDataTableRowFromName_OutRow_15;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_15 = CallFunc_GetDataTableRowFromName_ReturnValue_15;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_16 = CallFunc_GetDataTableRowFromName_OutRow_16;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_16 = CallFunc_GetDataTableRowFromName_ReturnValue_16;
	Parms.CallFunc_Array_Get_Item_26 = CallFunc_Array_Get_Item_26;
	Parms.CallFunc_Array_Get_Item_27 = CallFunc_Array_Get_Item_27;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_17 = CallFunc_GetDataTableRowNames_OutRowNames_17;
	Parms.CallFunc_Array_Get_Item_28 = CallFunc_Array_Get_Item_28;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_17 = CallFunc_GetDataTableRowFromName_OutRow_17;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_17 = CallFunc_GetDataTableRowFromName_ReturnValue_17;
	Parms.K2Node_SwitchInteger_CmpSuccess_8 = K2Node_SwitchInteger_CmpSuccess_8;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_18 = CallFunc_GetDataTableRowNames_OutRowNames_18;
	Parms.CallFunc_Array_Get_Item_29 = CallFunc_Array_Get_Item_29;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_18 = CallFunc_GetDataTableRowFromName_OutRow_18;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_18 = CallFunc_GetDataTableRowFromName_ReturnValue_18;
	Parms.K2Node_SwitchInteger_CmpSuccess_9 = K2Node_SwitchInteger_CmpSuccess_9;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_19 = CallFunc_GetDataTableRowNames_OutRowNames_19;
	Parms.CallFunc_Array_Get_Item_30 = CallFunc_Array_Get_Item_30;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_20 = CallFunc_GetDataTableRowNames_OutRowNames_20;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_19 = CallFunc_GetDataTableRowFromName_OutRow_19;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_19 = CallFunc_GetDataTableRowFromName_ReturnValue_19;
	Parms.CallFunc_Array_Get_Item_31 = CallFunc_Array_Get_Item_31;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_20 = CallFunc_GetDataTableRowFromName_OutRow_20;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_20 = CallFunc_GetDataTableRowFromName_ReturnValue_20;
	Parms.K2Node_SwitchInteger_CmpSuccess_10 = K2Node_SwitchInteger_CmpSuccess_10;
	Parms.CallFunc_Array_Get_Item_32 = CallFunc_Array_Get_Item_32;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_21 = CallFunc_GetDataTableRowNames_OutRowNames_21;
	Parms.CallFunc_Array_Get_Item_33 = CallFunc_Array_Get_Item_33;
	Parms.CallFunc_Array_Get_Item_34 = CallFunc_Array_Get_Item_34;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_21 = CallFunc_GetDataTableRowFromName_OutRow_21;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_21 = CallFunc_GetDataTableRowFromName_ReturnValue_21;
	Parms.K2Node_SwitchInteger_CmpSuccess_11 = K2Node_SwitchInteger_CmpSuccess_11;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_1 = CallFunc_Conv_IntToDouble_ReturnValue_1;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_2 = CallFunc_Conv_IntToDouble_ReturnValue_2;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_3 = CallFunc_Conv_IntToDouble_ReturnValue_3;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_22 = CallFunc_GetDataTableRowNames_OutRowNames_22;
	Parms.CallFunc_Array_Get_Item_35 = CallFunc_Array_Get_Item_35;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_23 = CallFunc_GetDataTableRowNames_OutRowNames_23;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_22 = CallFunc_GetDataTableRowFromName_OutRow_22;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_22 = CallFunc_GetDataTableRowFromName_ReturnValue_22;
	Parms.CallFunc_Array_Get_Item_36 = CallFunc_Array_Get_Item_36;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_23 = CallFunc_GetDataTableRowFromName_OutRow_23;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_23 = CallFunc_GetDataTableRowFromName_ReturnValue_23;
	Parms.CallFunc_Array_Get_Item_37 = CallFunc_Array_Get_Item_37;
	Parms.CallFunc_Array_Get_Item_38 = CallFunc_Array_Get_Item_38;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_24 = CallFunc_GetDataTableRowNames_OutRowNames_24;
	Parms.CallFunc_Array_Get_Item_39 = CallFunc_Array_Get_Item_39;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_24 = CallFunc_GetDataTableRowFromName_OutRow_24;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_24 = CallFunc_GetDataTableRowFromName_ReturnValue_24;
	Parms.K2Node_SwitchInteger_CmpSuccess_12 = K2Node_SwitchInteger_CmpSuccess_12;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_25 = CallFunc_GetDataTableRowNames_OutRowNames_25;
	Parms.CallFunc_Array_Get_Item_40 = CallFunc_Array_Get_Item_40;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_25 = CallFunc_GetDataTableRowFromName_OutRow_25;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_25 = CallFunc_GetDataTableRowFromName_ReturnValue_25;
	Parms.K2Node_SwitchInteger_CmpSuccess_13 = K2Node_SwitchInteger_CmpSuccess_13;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_26 = CallFunc_GetDataTableRowNames_OutRowNames_26;
	Parms.CallFunc_Array_Get_Item_41 = CallFunc_Array_Get_Item_41;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_27 = CallFunc_GetDataTableRowNames_OutRowNames_27;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_26 = CallFunc_GetDataTableRowFromName_OutRow_26;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_26 = CallFunc_GetDataTableRowFromName_ReturnValue_26;
	Parms.CallFunc_Array_Get_Item_42 = CallFunc_Array_Get_Item_42;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_27 = CallFunc_GetDataTableRowFromName_OutRow_27;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_27 = CallFunc_GetDataTableRowFromName_ReturnValue_27;
	Parms.K2Node_SwitchInteger_CmpSuccess_14 = K2Node_SwitchInteger_CmpSuccess_14;
	Parms.CallFunc_Array_Get_Item_43 = CallFunc_Array_Get_Item_43;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_28 = CallFunc_GetDataTableRowNames_OutRowNames_28;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_29 = CallFunc_GetDataTableRowNames_OutRowNames_29;
	Parms.CallFunc_Array_Get_Item_44 = CallFunc_Array_Get_Item_44;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_30 = CallFunc_GetDataTableRowNames_OutRowNames_30;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_28 = CallFunc_GetDataTableRowFromName_OutRow_28;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_28 = CallFunc_GetDataTableRowFromName_ReturnValue_28;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_31 = CallFunc_GetDataTableRowNames_OutRowNames_31;
	Parms.K2Node_SwitchInteger_CmpSuccess_15 = K2Node_SwitchInteger_CmpSuccess_15;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_32 = CallFunc_GetDataTableRowNames_OutRowNames_32;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_33 = CallFunc_GetDataTableRowNames_OutRowNames_33;
	Parms.CallFunc_Array_Get_Item_45 = CallFunc_Array_Get_Item_45;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_29 = CallFunc_GetDataTableRowFromName_OutRow_29;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_29 = CallFunc_GetDataTableRowFromName_ReturnValue_29;
	Parms.CallFunc_Array_Get_Item_46 = CallFunc_Array_Get_Item_46;
	Parms.CallFunc_Array_Get_Item_47 = CallFunc_Array_Get_Item_47;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_30 = CallFunc_GetDataTableRowFromName_OutRow_30;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_30 = CallFunc_GetDataTableRowFromName_ReturnValue_30;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_31 = CallFunc_GetDataTableRowFromName_OutRow_31;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_31 = CallFunc_GetDataTableRowFromName_ReturnValue_31;
	Parms.CallFunc_Array_Get_Item_48 = CallFunc_Array_Get_Item_48;
	Parms.CallFunc_Array_Get_Item_49 = CallFunc_Array_Get_Item_49;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_32 = CallFunc_GetDataTableRowFromName_OutRow_32;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_32 = CallFunc_GetDataTableRowFromName_ReturnValue_32;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_33 = CallFunc_GetDataTableRowFromName_OutRow_33;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_33 = CallFunc_GetDataTableRowFromName_ReturnValue_33;
	Parms.K2Node_VariableSet_Cached_Cloud_Index_D_ImplicitCast = K2Node_VariableSet_Cached_Cloud_Index_D_ImplicitCast;
	Parms.K2Node_VariableSet_Cached_Cloud_Index_C_ImplicitCast = K2Node_VariableSet_Cached_Cloud_Index_C_ImplicitCast;
	Parms.K2Node_VariableSet_Cached_Cloud_Index_B_ImplicitCast = K2Node_VariableSet_Cached_Cloud_Index_B_ImplicitCast;
	Parms.K2Node_VariableSet_Cached_Cloud_Index_A_ImplicitCast = K2Node_VariableSet_Cached_Cloud_Index_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TimeofDay_Lighting.TimeofDay_Lighting_C.Celestials Cache
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Cached_Ring_Toggle                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Color_Table_Master       CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_1                      (ReferenceParm)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_2                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Color_Master             CallFunc_GetDataTableRowFromName_OutRow_1                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Ring_Type                CallFunc_GetDataTableRowFromName_OutRow_2                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_6                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_7                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_8                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_9                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_10                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_11                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_12                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_13                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_3                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_14                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Ring_Toggle              CallFunc_GetDataTableRowFromName_OutRow_3                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Lighting_C::Celestials_Cache(int32* Cached_Ring_Toggle, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, const struct FS_Color_Table_Master& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UDataTable* CallFunc_Array_Get_Item_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_2, class FName CallFunc_Array_Get_Item_2, const struct FS_Color_Master& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, class FName CallFunc_Array_Get_Item_3, const struct FS_Ring_Type& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, const struct FLinearColor& CallFunc_Array_Get_Item_4, const struct FLinearColor& CallFunc_Array_Get_Item_5, const struct FLinearColor& CallFunc_Array_Get_Item_6, const struct FLinearColor& CallFunc_Array_Get_Item_7, const struct FLinearColor& CallFunc_Array_Get_Item_8, const struct FLinearColor& CallFunc_Array_Get_Item_9, const struct FLinearColor& CallFunc_Array_Get_Item_10, const struct FLinearColor& CallFunc_Array_Get_Item_11, const struct FLinearColor& CallFunc_Array_Get_Item_12, const struct FLinearColor& CallFunc_Array_Get_Item_13, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_3, class FName CallFunc_Array_Get_Item_14, const struct FS_Ring_Toggle& CallFunc_GetDataTableRowFromName_OutRow_3, bool CallFunc_GetDataTableRowFromName_ReturnValue_3, int32 CallFunc_Conv_BoolToInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Lighting_C", "Celestials Cache");

	Params::UTimeofDay_Lighting_C_Celestials_Cache_Params Parms{};

	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_1 = CallFunc_GetDataTableRowNames_OutRowNames_1;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_2 = CallFunc_GetDataTableRowNames_OutRowNames_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_2 = CallFunc_GetDataTableRowFromName_OutRow_2;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_2 = CallFunc_GetDataTableRowFromName_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_Array_Get_Item_8 = CallFunc_Array_Get_Item_8;
	Parms.CallFunc_Array_Get_Item_9 = CallFunc_Array_Get_Item_9;
	Parms.CallFunc_Array_Get_Item_10 = CallFunc_Array_Get_Item_10;
	Parms.CallFunc_Array_Get_Item_11 = CallFunc_Array_Get_Item_11;
	Parms.CallFunc_Array_Get_Item_12 = CallFunc_Array_Get_Item_12;
	Parms.CallFunc_Array_Get_Item_13 = CallFunc_Array_Get_Item_13;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_3 = CallFunc_GetDataTableRowNames_OutRowNames_3;
	Parms.CallFunc_Array_Get_Item_14 = CallFunc_Array_Get_Item_14;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_3 = CallFunc_GetDataTableRowFromName_OutRow_3;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_3 = CallFunc_GetDataTableRowFromName_ReturnValue_3;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Cached_Ring_Toggle != nullptr)
		*Cached_Ring_Toggle = Parms.Cached_Ring_Toggle;

}


// Function TimeofDay_Lighting.TimeofDay_Lighting_C.Sky_Cache
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Cached_Rayleigh_Color                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Cached_Sky_Luminance_Color                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Cached_Mie_Color                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Cached_Atmosphere_Minus_Density                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Cached_Atmosphere_Minus_Haze                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Cached_Atmosphere_Minus_View_Distance                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Cached_Atmosphere_Minus_Falloff                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Cached_Atmosphere_Minus_Brightness                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Cached_Atmosphere_Minus_Ultra_Clear                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FLinearColor>        Rayleigh_Scattering_Selection                                    (Edit, BlueprintVisible)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Atmosphere               CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_1                      (ReferenceParm)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_2                      (ReferenceParm)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_3                      (ReferenceParm)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_4                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Color_Table_Master       CallFunc_GetDataTableRowFromName_OutRow_1                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  CallFunc_Array_Get_Item_2                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_5                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Color_Master             CallFunc_GetDataTableRowFromName_OutRow_2                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Color_Saturations        CallFunc_GetDataTableRowFromName_OutRow_3                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Color_Saturations        CallFunc_GetDataTableRowFromName_OutRow_4                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_6                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_7                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Color_Saturations        CallFunc_GetDataTableRowFromName_OutRow_5                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_5                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_8                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_9                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Lighting_C::Sky_Cache(struct FLinearColor* Cached_Rayleigh_Color, struct FLinearColor* Cached_Sky_Luminance_Color, struct FLinearColor* Cached_Mie_Color, int32* Cached_Atmosphere_Minus_Density, int32* Cached_Atmosphere_Minus_Haze, int32* Cached_Atmosphere_Minus_View_Distance, int32* Cached_Atmosphere_Minus_Falloff, int32* Cached_Atmosphere_Minus_Brightness, int32* Cached_Atmosphere_Minus_Ultra_Clear, const TArray<struct FLinearColor>& Rayleigh_Scattering_Selection, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, const struct FS_Atmosphere& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_3, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_4, class FName CallFunc_Array_Get_Item_1, const struct FS_Color_Table_Master& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, class UDataTable* CallFunc_Array_Get_Item_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_5, class FName CallFunc_Array_Get_Item_3, const struct FS_Color_Master& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, class FName CallFunc_Array_Get_Item_4, class FName CallFunc_Array_Get_Item_5, const struct FS_Color_Saturations& CallFunc_GetDataTableRowFromName_OutRow_3, bool CallFunc_GetDataTableRowFromName_ReturnValue_3, const struct FS_Color_Saturations& CallFunc_GetDataTableRowFromName_OutRow_4, bool CallFunc_GetDataTableRowFromName_ReturnValue_4, bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_SwitchInteger_CmpSuccess_1, class FName CallFunc_Array_Get_Item_6, const struct FLinearColor& CallFunc_Array_Get_Item_7, const struct FS_Color_Saturations& CallFunc_GetDataTableRowFromName_OutRow_5, bool CallFunc_GetDataTableRowFromName_ReturnValue_5, const struct FLinearColor& CallFunc_Array_Get_Item_8, bool K2Node_SwitchInteger_CmpSuccess_2, const struct FLinearColor& CallFunc_Array_Get_Item_9)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Lighting_C", "Sky_Cache");

	Params::UTimeofDay_Lighting_C_Sky_Cache_Params Parms{};

	Parms.Rayleigh_Scattering_Selection = Rayleigh_Scattering_Selection;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_1 = CallFunc_GetDataTableRowNames_OutRowNames_1;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_2 = CallFunc_GetDataTableRowNames_OutRowNames_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_3 = CallFunc_GetDataTableRowNames_OutRowNames_3;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_4 = CallFunc_GetDataTableRowNames_OutRowNames_4;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_5 = CallFunc_GetDataTableRowNames_OutRowNames_5;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_2 = CallFunc_GetDataTableRowFromName_OutRow_2;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_2 = CallFunc_GetDataTableRowFromName_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_3 = CallFunc_GetDataTableRowFromName_OutRow_3;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_3 = CallFunc_GetDataTableRowFromName_ReturnValue_3;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_4 = CallFunc_GetDataTableRowFromName_OutRow_4;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_4 = CallFunc_GetDataTableRowFromName_ReturnValue_4;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_5 = CallFunc_GetDataTableRowFromName_OutRow_5;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_5 = CallFunc_GetDataTableRowFromName_ReturnValue_5;
	Parms.CallFunc_Array_Get_Item_8 = CallFunc_Array_Get_Item_8;
	Parms.K2Node_SwitchInteger_CmpSuccess_2 = K2Node_SwitchInteger_CmpSuccess_2;
	Parms.CallFunc_Array_Get_Item_9 = CallFunc_Array_Get_Item_9;

	UObject::ProcessEvent(Func, &Parms);

	if (Cached_Rayleigh_Color != nullptr)
		*Cached_Rayleigh_Color = std::move(Parms.Cached_Rayleigh_Color);

	if (Cached_Sky_Luminance_Color != nullptr)
		*Cached_Sky_Luminance_Color = std::move(Parms.Cached_Sky_Luminance_Color);

	if (Cached_Mie_Color != nullptr)
		*Cached_Mie_Color = std::move(Parms.Cached_Mie_Color);

	if (Cached_Atmosphere_Minus_Density != nullptr)
		*Cached_Atmosphere_Minus_Density = Parms.Cached_Atmosphere_Minus_Density;

	if (Cached_Atmosphere_Minus_Haze != nullptr)
		*Cached_Atmosphere_Minus_Haze = Parms.Cached_Atmosphere_Minus_Haze;

	if (Cached_Atmosphere_Minus_View_Distance != nullptr)
		*Cached_Atmosphere_Minus_View_Distance = Parms.Cached_Atmosphere_Minus_View_Distance;

	if (Cached_Atmosphere_Minus_Falloff != nullptr)
		*Cached_Atmosphere_Minus_Falloff = Parms.Cached_Atmosphere_Minus_Falloff;

	if (Cached_Atmosphere_Minus_Brightness != nullptr)
		*Cached_Atmosphere_Minus_Brightness = Parms.Cached_Atmosphere_Minus_Brightness;

	if (Cached_Atmosphere_Minus_Ultra_Clear != nullptr)
		*Cached_Atmosphere_Minus_Ultra_Clear = Parms.Cached_Atmosphere_Minus_Ultra_Clear;

}


// Function TimeofDay_Lighting.TimeofDay_Lighting_C.Moon_Cache
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Cached_Main_Celestial_Color                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Cached_Cloud_Celestial_Color                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Cached_Rayleigh_Inverse                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FLinearColor>        Selected_saturation_array                                        (Edit, BlueprintVisible)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_1                      (ReferenceParm)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_2                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_3                      (ReferenceParm)
// struct FS_Color_Table_Master       CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_4                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Color_Master             CallFunc_GetDataTableRowFromName_OutRow_1                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Main_Celestial_Color     CallFunc_GetDataTableRowFromName_OutRow_2                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Rayleigh_Inverse         CallFunc_GetDataTableRowFromName_OutRow_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_6                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_7                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Main_Celestial_Color     CallFunc_GetDataTableRowFromName_OutRow_4                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_5                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_8                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Color_Saturations        CallFunc_GetDataTableRowFromName_OutRow_5                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_5                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_9                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Lighting_C::Moon_Cache(struct FLinearColor* Cached_Main_Celestial_Color, struct FLinearColor* Cached_Cloud_Celestial_Color, struct FLinearColor* Cached_Rayleigh_Inverse, const TArray<struct FLinearColor>& Selected_saturation_array, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_2, class FName CallFunc_Array_Get_Item, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_3, const struct FS_Color_Table_Master& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UDataTable* CallFunc_Array_Get_Item_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_4, class FName CallFunc_Array_Get_Item_2, const struct FS_Color_Master& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, class FName CallFunc_Array_Get_Item_3, const struct FS_Main_Celestial_Color& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, class FName CallFunc_Array_Get_Item_4, const struct FS_Rayleigh_Inverse& CallFunc_GetDataTableRowFromName_OutRow_3, bool CallFunc_GetDataTableRowFromName_ReturnValue_3, const struct FLinearColor& CallFunc_Array_Get_Item_5, const struct FLinearColor& CallFunc_Array_Get_Item_6, class FName CallFunc_Array_Get_Item_7, const struct FS_Main_Celestial_Color& CallFunc_GetDataTableRowFromName_OutRow_4, bool CallFunc_GetDataTableRowFromName_ReturnValue_4, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_5, class FName CallFunc_Array_Get_Item_8, const struct FS_Color_Saturations& CallFunc_GetDataTableRowFromName_OutRow_5, bool CallFunc_GetDataTableRowFromName_ReturnValue_5, bool K2Node_SwitchInteger_CmpSuccess, const struct FLinearColor& CallFunc_Array_Get_Item_9)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Lighting_C", "Moon_Cache");

	Params::UTimeofDay_Lighting_C_Moon_Cache_Params Parms{};

	Parms.Selected_saturation_array = Selected_saturation_array;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_1 = CallFunc_GetDataTableRowNames_OutRowNames_1;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_2 = CallFunc_GetDataTableRowNames_OutRowNames_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_3 = CallFunc_GetDataTableRowNames_OutRowNames_3;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_4 = CallFunc_GetDataTableRowNames_OutRowNames_4;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_2 = CallFunc_GetDataTableRowFromName_OutRow_2;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_2 = CallFunc_GetDataTableRowFromName_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_3 = CallFunc_GetDataTableRowFromName_OutRow_3;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_3 = CallFunc_GetDataTableRowFromName_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_4 = CallFunc_GetDataTableRowFromName_OutRow_4;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_4 = CallFunc_GetDataTableRowFromName_ReturnValue_4;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_5 = CallFunc_GetDataTableRowNames_OutRowNames_5;
	Parms.CallFunc_Array_Get_Item_8 = CallFunc_Array_Get_Item_8;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_5 = CallFunc_GetDataTableRowFromName_OutRow_5;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_5 = CallFunc_GetDataTableRowFromName_ReturnValue_5;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Array_Get_Item_9 = CallFunc_Array_Get_Item_9;

	UObject::ProcessEvent(Func, &Parms);

	if (Cached_Main_Celestial_Color != nullptr)
		*Cached_Main_Celestial_Color = std::move(Parms.Cached_Main_Celestial_Color);

	if (Cached_Cloud_Celestial_Color != nullptr)
		*Cached_Cloud_Celestial_Color = std::move(Parms.Cached_Cloud_Celestial_Color);

	if (Cached_Rayleigh_Inverse != nullptr)
		*Cached_Rayleigh_Inverse = std::move(Parms.Cached_Rayleigh_Inverse);

}


// Function TimeofDay_Lighting.TimeofDay_Lighting_C.Color Correction Cache
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector4                    Saturation                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    Contrast                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    Gamma                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    Gain                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    Offset                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Exposure_Day                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Exposure_Night                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_1                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Exposure                 CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_2                      (ReferenceParm)
// double                             CallFunc_Conv_ByteToDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_VE_Preset_Master         CallFunc_GetDataTableRowFromName_OutRow_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_3                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Volumetric_Clouds        CallFunc_GetDataTableRowFromName_OutRow_2                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Exposure                 CallFunc_GetDataTableRowFromName_OutRow_3                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_4                      (ReferenceParm)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_5                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Exposure                 CallFunc_GetDataTableRowFromName_OutRow_4                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Exposure                 CallFunc_GetDataTableRowFromName_OutRow_5                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_5                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_6                      (ReferenceParm)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_7                      (ReferenceParm)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_8                      (ReferenceParm)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_ByteToDouble_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_9                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_6                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_VE_Preset_Master         CallFunc_GetDataTableRowFromName_OutRow_6                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_6                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_10                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_7                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Volumetric_Clouds        CallFunc_GetDataTableRowFromName_OutRow_7                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_7                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_8                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 CallFunc_Array_Get_Item_9                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_Volumetric_Clouds        CallFunc_GetDataTableRowFromName_OutRow_8                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_8                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_10                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 CallFunc_Array_Get_Item_11                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_Volumetric_Clouds        CallFunc_GetDataTableRowFromName_OutRow_9                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_9                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_12                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 CallFunc_Array_Get_Item_13                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_Volumetric_Clouds        CallFunc_GetDataTableRowFromName_OutRow_10                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_10                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 CallFunc_Array_Get_Item_14                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_11                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_15                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Volumetric_Clouds        CallFunc_GetDataTableRowFromName_OutRow_11                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_11                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_12                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_16                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Volumetric_Clouds        CallFunc_GetDataTableRowFromName_OutRow_12                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_12                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 CallFunc_Array_Get_Item_17                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 CallFunc_Array_Get_Item_18                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_13                     (ReferenceParm)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_14                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_19                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_15                     (ReferenceParm)
// struct FS_Volumetric_Clouds        CallFunc_GetDataTableRowFromName_OutRow_13                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_13                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_16                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_20                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_21                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Color_Correction_Presets CallFunc_GetDataTableRowFromName_OutRow_14                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_14                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Exposure                 CallFunc_GetDataTableRowFromName_OutRow_15                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_15                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_22                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Exposure                 CallFunc_GetDataTableRowFromName_OutRow_16                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_16                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Lighting_C::Color_Correction_Cache(struct FVector4* Saturation, struct FVector4* Contrast, struct FVector4* Gamma, struct FVector4* Gain, struct FVector4* Offset, int32* Exposure_Day, int32* Exposure_Night, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_1, class FName CallFunc_Array_Get_Item, int32 CallFunc_Conv_BoolToInt_ReturnValue, const struct FS_Exposure& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_Conv_BoolToInt_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_2, double CallFunc_Conv_ByteToDouble_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, class FName CallFunc_Array_Get_Item_1, const struct FS_VE_Preset_Master& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_3, class FName CallFunc_Array_Get_Item_2, class FName CallFunc_Array_Get_Item_3, const struct FS_Volumetric_Clouds& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, const struct FS_Exposure& CallFunc_GetDataTableRowFromName_OutRow_3, bool CallFunc_GetDataTableRowFromName_ReturnValue_3, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_4, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_5, class FName CallFunc_Array_Get_Item_4, class FName CallFunc_Array_Get_Item_5, const struct FS_Exposure& CallFunc_GetDataTableRowFromName_OutRow_4, bool CallFunc_GetDataTableRowFromName_ReturnValue_4, const struct FS_Exposure& CallFunc_GetDataTableRowFromName_OutRow_5, bool CallFunc_GetDataTableRowFromName_ReturnValue_5, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_6, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_7, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_8, int32 CallFunc_Conv_BoolToInt_ReturnValue_2, double CallFunc_Conv_ByteToDouble_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess_2, int32 CallFunc_FTrunc_ReturnValue_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_9, class FName CallFunc_Array_Get_Item_6, const struct FS_VE_Preset_Master& CallFunc_GetDataTableRowFromName_OutRow_6, bool CallFunc_GetDataTableRowFromName_ReturnValue_6, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_10, class FName CallFunc_Array_Get_Item_7, const struct FS_Volumetric_Clouds& CallFunc_GetDataTableRowFromName_OutRow_7, bool CallFunc_GetDataTableRowFromName_ReturnValue_7, bool K2Node_SwitchInteger_CmpSuccess_3, class FName CallFunc_Array_Get_Item_8, class UCurveFloat* CallFunc_Array_Get_Item_9, const struct FS_Volumetric_Clouds& CallFunc_GetDataTableRowFromName_OutRow_8, bool CallFunc_GetDataTableRowFromName_ReturnValue_8, class FName CallFunc_Array_Get_Item_10, class UCurveFloat* CallFunc_Array_Get_Item_11, const struct FS_Volumetric_Clouds& CallFunc_GetDataTableRowFromName_OutRow_9, bool CallFunc_GetDataTableRowFromName_ReturnValue_9, class FName CallFunc_Array_Get_Item_12, class UCurveFloat* CallFunc_Array_Get_Item_13, const struct FS_Volumetric_Clouds& CallFunc_GetDataTableRowFromName_OutRow_10, bool CallFunc_GetDataTableRowFromName_ReturnValue_10, class UCurveFloat* CallFunc_Array_Get_Item_14, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_11, class FName CallFunc_Array_Get_Item_15, const struct FS_Volumetric_Clouds& CallFunc_GetDataTableRowFromName_OutRow_11, bool CallFunc_GetDataTableRowFromName_ReturnValue_11, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_12, class FName CallFunc_Array_Get_Item_16, const struct FS_Volumetric_Clouds& CallFunc_GetDataTableRowFromName_OutRow_12, bool CallFunc_GetDataTableRowFromName_ReturnValue_12, class UCurveFloat* CallFunc_Array_Get_Item_17, class UCurveFloat* CallFunc_Array_Get_Item_18, bool K2Node_SwitchInteger_CmpSuccess_4, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_13, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_14, class FName CallFunc_Array_Get_Item_19, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_15, const struct FS_Volumetric_Clouds& CallFunc_GetDataTableRowFromName_OutRow_13, bool CallFunc_GetDataTableRowFromName_ReturnValue_13, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_16, class FName CallFunc_Array_Get_Item_20, class FName CallFunc_Array_Get_Item_21, const struct FS_Color_Correction_Presets& CallFunc_GetDataTableRowFromName_OutRow_14, bool CallFunc_GetDataTableRowFromName_ReturnValue_14, const struct FS_Exposure& CallFunc_GetDataTableRowFromName_OutRow_15, bool CallFunc_GetDataTableRowFromName_ReturnValue_15, class FName CallFunc_Array_Get_Item_22, const struct FS_Exposure& CallFunc_GetDataTableRowFromName_OutRow_16, bool CallFunc_GetDataTableRowFromName_ReturnValue_16)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Lighting_C", "Color Correction Cache");

	Params::UTimeofDay_Lighting_C_Color_Correction_Cache_Params Parms{};

	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_1 = CallFunc_GetDataTableRowNames_OutRowNames_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_1 = CallFunc_Conv_BoolToInt_ReturnValue_1;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_2 = CallFunc_GetDataTableRowNames_OutRowNames_2;
	Parms.CallFunc_Conv_ByteToDouble_ReturnValue = CallFunc_Conv_ByteToDouble_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_3 = CallFunc_GetDataTableRowNames_OutRowNames_3;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_2 = CallFunc_GetDataTableRowFromName_OutRow_2;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_2 = CallFunc_GetDataTableRowFromName_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_3 = CallFunc_GetDataTableRowFromName_OutRow_3;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_3 = CallFunc_GetDataTableRowFromName_ReturnValue_3;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_4 = CallFunc_GetDataTableRowNames_OutRowNames_4;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_5 = CallFunc_GetDataTableRowNames_OutRowNames_5;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_4 = CallFunc_GetDataTableRowFromName_OutRow_4;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_4 = CallFunc_GetDataTableRowFromName_ReturnValue_4;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_5 = CallFunc_GetDataTableRowFromName_OutRow_5;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_5 = CallFunc_GetDataTableRowFromName_ReturnValue_5;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_6 = CallFunc_GetDataTableRowNames_OutRowNames_6;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_7 = CallFunc_GetDataTableRowNames_OutRowNames_7;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_8 = CallFunc_GetDataTableRowNames_OutRowNames_8;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_2 = CallFunc_Conv_BoolToInt_ReturnValue_2;
	Parms.CallFunc_Conv_ByteToDouble_ReturnValue_1 = CallFunc_Conv_ByteToDouble_ReturnValue_1;
	Parms.K2Node_SwitchInteger_CmpSuccess_2 = K2Node_SwitchInteger_CmpSuccess_2;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_9 = CallFunc_GetDataTableRowNames_OutRowNames_9;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_6 = CallFunc_GetDataTableRowFromName_OutRow_6;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_6 = CallFunc_GetDataTableRowFromName_ReturnValue_6;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_10 = CallFunc_GetDataTableRowNames_OutRowNames_10;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_7 = CallFunc_GetDataTableRowFromName_OutRow_7;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_7 = CallFunc_GetDataTableRowFromName_ReturnValue_7;
	Parms.K2Node_SwitchInteger_CmpSuccess_3 = K2Node_SwitchInteger_CmpSuccess_3;
	Parms.CallFunc_Array_Get_Item_8 = CallFunc_Array_Get_Item_8;
	Parms.CallFunc_Array_Get_Item_9 = CallFunc_Array_Get_Item_9;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_8 = CallFunc_GetDataTableRowFromName_OutRow_8;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_8 = CallFunc_GetDataTableRowFromName_ReturnValue_8;
	Parms.CallFunc_Array_Get_Item_10 = CallFunc_Array_Get_Item_10;
	Parms.CallFunc_Array_Get_Item_11 = CallFunc_Array_Get_Item_11;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_9 = CallFunc_GetDataTableRowFromName_OutRow_9;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_9 = CallFunc_GetDataTableRowFromName_ReturnValue_9;
	Parms.CallFunc_Array_Get_Item_12 = CallFunc_Array_Get_Item_12;
	Parms.CallFunc_Array_Get_Item_13 = CallFunc_Array_Get_Item_13;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_10 = CallFunc_GetDataTableRowFromName_OutRow_10;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_10 = CallFunc_GetDataTableRowFromName_ReturnValue_10;
	Parms.CallFunc_Array_Get_Item_14 = CallFunc_Array_Get_Item_14;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_11 = CallFunc_GetDataTableRowNames_OutRowNames_11;
	Parms.CallFunc_Array_Get_Item_15 = CallFunc_Array_Get_Item_15;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_11 = CallFunc_GetDataTableRowFromName_OutRow_11;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_11 = CallFunc_GetDataTableRowFromName_ReturnValue_11;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_12 = CallFunc_GetDataTableRowNames_OutRowNames_12;
	Parms.CallFunc_Array_Get_Item_16 = CallFunc_Array_Get_Item_16;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_12 = CallFunc_GetDataTableRowFromName_OutRow_12;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_12 = CallFunc_GetDataTableRowFromName_ReturnValue_12;
	Parms.CallFunc_Array_Get_Item_17 = CallFunc_Array_Get_Item_17;
	Parms.CallFunc_Array_Get_Item_18 = CallFunc_Array_Get_Item_18;
	Parms.K2Node_SwitchInteger_CmpSuccess_4 = K2Node_SwitchInteger_CmpSuccess_4;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_13 = CallFunc_GetDataTableRowNames_OutRowNames_13;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_14 = CallFunc_GetDataTableRowNames_OutRowNames_14;
	Parms.CallFunc_Array_Get_Item_19 = CallFunc_Array_Get_Item_19;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_15 = CallFunc_GetDataTableRowNames_OutRowNames_15;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_13 = CallFunc_GetDataTableRowFromName_OutRow_13;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_13 = CallFunc_GetDataTableRowFromName_ReturnValue_13;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_16 = CallFunc_GetDataTableRowNames_OutRowNames_16;
	Parms.CallFunc_Array_Get_Item_20 = CallFunc_Array_Get_Item_20;
	Parms.CallFunc_Array_Get_Item_21 = CallFunc_Array_Get_Item_21;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_14 = CallFunc_GetDataTableRowFromName_OutRow_14;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_14 = CallFunc_GetDataTableRowFromName_ReturnValue_14;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_15 = CallFunc_GetDataTableRowFromName_OutRow_15;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_15 = CallFunc_GetDataTableRowFromName_ReturnValue_15;
	Parms.CallFunc_Array_Get_Item_22 = CallFunc_Array_Get_Item_22;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_16 = CallFunc_GetDataTableRowFromName_OutRow_16;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_16 = CallFunc_GetDataTableRowFromName_ReturnValue_16;

	UObject::ProcessEvent(Func, &Parms);

	if (Saturation != nullptr)
		*Saturation = std::move(Parms.Saturation);

	if (Contrast != nullptr)
		*Contrast = std::move(Parms.Contrast);

	if (Gamma != nullptr)
		*Gamma = std::move(Parms.Gamma);

	if (Gain != nullptr)
		*Gain = std::move(Parms.Gain);

	if (Offset != nullptr)
		*Offset = std::move(Parms.Offset);

	if (Exposure_Day != nullptr)
		*Exposure_Day = Parms.Exposure_Day;

	if (Exposure_Night != nullptr)
		*Exposure_Night = Parms.Exposure_Night;

}


// Function TimeofDay_Lighting.TimeofDay_Lighting_C.Vault Override Cache
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              VaultOverride                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Vault_Override           CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Lighting_C::Vault_Override_Cache(int32* VaultOverride, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, const struct FS_Vault_Override& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Lighting_C", "Vault Override Cache");

	Params::UTimeofDay_Lighting_C_Vault_Override_Cache_Params Parms{};

	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (VaultOverride != nullptr)
		*VaultOverride = Parms.VaultOverride;

}


// Function TimeofDay_Lighting.TimeofDay_Lighting_C.Sun_Cache
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Angle_X                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Sun_Color                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Cached_Sun_Disk_Color_Set                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Cached_Sun_Disk_Color                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FLinearColor>        Selected_saturation_array                                        (Edit, BlueprintVisible)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_1                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Color_Table_Master       CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_2                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Color_Master             CallFunc_GetDataTableRowFromName_OutRow_1                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_3                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Color_Saturations        CallFunc_GetDataTableRowFromName_OutRow_2                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Rayleigh_Inverse         CallFunc_GetDataTableRowFromName_OutRow_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_6                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_7                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_4                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_8                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Angle_X                  CallFunc_GetDataTableRowFromName_OutRow_4                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Lighting_C::Sun_Cache(double* Angle_X, struct FLinearColor* Sun_Color, struct FLinearColor* Cached_Sun_Disk_Color_Set, struct FLinearColor* Cached_Sun_Disk_Color, const TArray<struct FLinearColor>& Selected_saturation_array, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_1, class FName CallFunc_Array_Get_Item, const struct FS_Color_Table_Master& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UDataTable* CallFunc_Array_Get_Item_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_2, class FName CallFunc_Array_Get_Item_2, const struct FS_Color_Master& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_3, class FName CallFunc_Array_Get_Item_3, const struct FLinearColor& CallFunc_Array_Get_Item_4, const struct FS_Color_Saturations& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, class FName CallFunc_Array_Get_Item_5, bool K2Node_SwitchInteger_CmpSuccess, const struct FS_Rayleigh_Inverse& CallFunc_GetDataTableRowFromName_OutRow_3, bool CallFunc_GetDataTableRowFromName_ReturnValue_3, const struct FLinearColor& CallFunc_Array_Get_Item_6, const struct FLinearColor& CallFunc_Array_Get_Item_7, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_4, class FName CallFunc_Array_Get_Item_8, const struct FS_Angle_X& CallFunc_GetDataTableRowFromName_OutRow_4, bool CallFunc_GetDataTableRowFromName_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Lighting_C", "Sun_Cache");

	Params::UTimeofDay_Lighting_C_Sun_Cache_Params Parms{};

	Parms.Selected_saturation_array = Selected_saturation_array;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_1 = CallFunc_GetDataTableRowNames_OutRowNames_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_2 = CallFunc_GetDataTableRowNames_OutRowNames_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_3 = CallFunc_GetDataTableRowNames_OutRowNames_3;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_2 = CallFunc_GetDataTableRowFromName_OutRow_2;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_2 = CallFunc_GetDataTableRowFromName_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_3 = CallFunc_GetDataTableRowFromName_OutRow_3;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_3 = CallFunc_GetDataTableRowFromName_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_4 = CallFunc_GetDataTableRowNames_OutRowNames_4;
	Parms.CallFunc_Array_Get_Item_8 = CallFunc_Array_Get_Item_8;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_4 = CallFunc_GetDataTableRowFromName_OutRow_4;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_4 = CallFunc_GetDataTableRowFromName_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

	if (Angle_X != nullptr)
		*Angle_X = Parms.Angle_X;

	if (Sun_Color != nullptr)
		*Sun_Color = std::move(Parms.Sun_Color);

	if (Cached_Sun_Disk_Color_Set != nullptr)
		*Cached_Sun_Disk_Color_Set = std::move(Parms.Cached_Sun_Disk_Color_Set);

	if (Cached_Sun_Disk_Color != nullptr)
		*Cached_Sun_Disk_Color = std::move(Parms.Cached_Sun_Disk_Color);

}


// Function TimeofDay_Lighting.TimeofDay_Lighting_C.Fog_Cache
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Cached_Fog_Volumetric_Day                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Cached_Fog_Volumetric_Night                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Cached_Height_Fog_Contribution_Day                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Cached_Height_Fog_Contribution_Night                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Fog_Day                  CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_1                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Fog_Day                  CallFunc_GetDataTableRowFromName_OutRow_1                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_2                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Fog_Volumetric           CallFunc_GetDataTableRowFromName_OutRow_2                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Lighting_C::Fog_Cache(int32* Cached_Fog_Volumetric_Day, int32* Cached_Fog_Volumetric_Night, int32* Cached_Height_Fog_Contribution_Day, int32* Cached_Height_Fog_Contribution_Night, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, const struct FS_Fog_Day& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_1, class FName CallFunc_Array_Get_Item_1, const struct FS_Fog_Day& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_2, class FName CallFunc_Array_Get_Item_2, const struct FS_Fog_Volumetric& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Lighting_C", "Fog_Cache");

	Params::UTimeofDay_Lighting_C_Fog_Cache_Params Parms{};

	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_1 = CallFunc_GetDataTableRowNames_OutRowNames_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_2 = CallFunc_GetDataTableRowNames_OutRowNames_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_2 = CallFunc_GetDataTableRowFromName_OutRow_2;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_2 = CallFunc_GetDataTableRowFromName_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Cached_Fog_Volumetric_Day != nullptr)
		*Cached_Fog_Volumetric_Day = Parms.Cached_Fog_Volumetric_Day;

	if (Cached_Fog_Volumetric_Night != nullptr)
		*Cached_Fog_Volumetric_Night = Parms.Cached_Fog_Volumetric_Night;

	if (Cached_Height_Fog_Contribution_Day != nullptr)
		*Cached_Height_Fog_Contribution_Day = Parms.Cached_Height_Fog_Contribution_Day;

	if (Cached_Height_Fog_Contribution_Night != nullptr)
		*Cached_Height_Fog_Contribution_Night = Parms.Cached_Height_Fog_Contribution_Night;

}


// Function TimeofDay_Lighting.TimeofDay_Lighting_C.GetToolLightIntentsity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Light_Intensity_Out                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Lighting_C::GetToolLightIntentsity(double* Light_Intensity_Out)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Lighting_C", "GetToolLightIntentsity");

	Params::UTimeofDay_Lighting_C_GetToolLightIntentsity_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Light_Intensity_Out != nullptr)
		*Light_Intensity_Out = Parms.Light_Intensity_Out;

}


// Function TimeofDay_Lighting.TimeofDay_Lighting_C.Sky
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Nebula_Brightness                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Ring_Brightness_Value                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Atmosphere_Dawn_Dusk                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Sky_Angle_Z_Inv_Rotator                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Fae_Magic_Brightness                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 Stars_Brightness_Ultra_Clear                                     (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 Stars_Brightness                                                 (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 SkyLight_Lerp                                                    (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    Sun_Material                                                     (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UCurveFloat*>         Nebula_Brightness_B_Array                                        (Edit, BlueprintVisible)
// TArray<class UCurveFloat*>         Nebula_Brightness_A_Array                                        (Edit, BlueprintVisible)
// class UCurveFloat*                 Atmosphere_Brightness                                            (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 Atmosphere_Brightness_Zero                                       (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInstance*>   Moon_E_Array                                                     (Edit, BlueprintVisible)
// class UMaterialInstanceDynamic*    Moon_E                                                           (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInstance*>   Moon_D_Array                                                     (Edit, BlueprintVisible)
// class UMaterialInstanceDynamic*    Moon_D                                                           (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInstance*>   Moon_C_Array                                                     (Edit, BlueprintVisible)
// class UMaterialInstanceDynamic*    Moon_C                                                           (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInstance*>   Moon_B_Array                                                     (Edit, BlueprintVisible)
// class UMaterialInstanceDynamic*    Moon_B                                                           (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInstance*>   Moon_A_Array                                                     (Edit, BlueprintVisible)
// class UMaterialInstanceDynamic*    Moon_A                                                           (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 Nebula_Brightness_Zero                                           (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 Nebula_Brightness_B                                              (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 Nebula_Brightness_A                                              (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 Ring_Brightness_Zero                                             (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 Ring_SpecBrightness                                              (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 Ring_Brightness                                                  (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 Moon_C_Light_Brightness                                          (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 Moon_A_Light_Brightness                                          (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FLinearColor>        Atm_E_Color_Selection                                            (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Moon_E_Color_3_Selection                                         (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Moon_E_Color_2_Selection                                         (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Moon_E_Color_1_Selection                                         (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Atm_D_Color_Selection                                            (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Moon_D_Color_3_Selection                                         (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Moon_D_Color_2_Selection                                         (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Moon_D_Color_1_Selection                                         (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Atm_B_Color_Selection                                            (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Moon_B_Color_3_Selection                                         (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Moon_B_Color_2_Selection                                         (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Moon_B_Color_1_Selection                                         (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Atm_C_Color_Selection                                            (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Moon_C_Color_3_Selection                                         (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Moon_C_Color_2_Selection                                         (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Moon_C_Color_1_Selection                                         (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Atm_A_Color_Selection                                            (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Moon_A_Color_3_Selection                                         (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Moon_A_Color_2_Selection                                         (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Moon_A_Color_1_Selection                                         (Edit, BlueprintVisible)
// class UCurveLinearColor*           Sun_Color                                                        (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    Sky_material                                                     (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FLinearColor>        Sky_Luminance_Factor                                             (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Mie_Scattering_Selection                                         (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Rayleigh_Scattering_Selection                                    (Edit, BlueprintVisible)
// class UCurveLinearColor*           Cloud_Color                                                      (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UCurveFloat*>         Star_Brightness_Array                                            (Edit, BlueprintVisible)
// class UCurveFloat*                 Sky_Angle_Z                                                      (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 Sky_Angle_Y                                                      (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 Sky_Sphere_Visibility                                            (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             AdjustedTime_24Hour                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 Sky_Atm_Height_Fog_Contribution                                  (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// double                             CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_1                      (ReferenceParm)
// double                             CallFunc_Lerp_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Fog_Day                  CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_2                      (ReferenceParm)
// double                             CallFunc_Lerp_ReturnValue_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Atmosphere               CallFunc_GetDataTableRowFromName_OutRow_1                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_3                      (ReferenceParm)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_4                      (ReferenceParm)
// float                              CallFunc_GetFloatValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_5                      (ReferenceParm)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_6                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Atmosphere               CallFunc_GetDataTableRowFromName_OutRow_2                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_5                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_6                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_7                      (ReferenceParm)
// double                             CallFunc_Conv_ByteToDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_ByteToDouble_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_VE_Preset_Master         CallFunc_GetDataTableRowFromName_OutRow_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_8                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_VE_Preset_Master         CallFunc_GetDataTableRowFromName_OutRow_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_9                      (ReferenceParm)
// double                             CallFunc_Conv_ByteToDouble_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_6                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_10                     (ReferenceParm)
// struct FS_VE_Preset_Master         CallFunc_GetDataTableRowFromName_OutRow_5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_5                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_6                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Fog_Day                  CallFunc_GetDataTableRowFromName_OutRow_6                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_6                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_11                     (ReferenceParm)
// double                             CallFunc_Conv_ByteToDouble_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_7                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_VE_Preset_Master         CallFunc_GetDataTableRowFromName_OutRow_7                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_7                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_12                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_8                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_9                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Fog_Day                  CallFunc_GetDataTableRowFromName_OutRow_8                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_8                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Fog_Day                  CallFunc_GetDataTableRowFromName_OutRow_9                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_9                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_10                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Fog_Day                  CallFunc_GetDataTableRowFromName_OutRow_10                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_10                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_11                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Atmosphere               CallFunc_GetDataTableRowFromName_OutRow_11                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_11                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_7                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_8                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_9                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_10                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_11                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_13                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_12                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Fog_Day                  CallFunc_GetDataTableRowFromName_OutRow_12                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_12                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_7                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_12                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_13                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_14                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_15                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_14                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_16                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Fog_Day                  CallFunc_GetDataTableRowFromName_OutRow_13                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_13                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_17                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_13                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_18                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_19                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_20                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_21                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_22                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_23                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_24                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_14                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_15                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_16                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_15                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_25                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Color_Table_Master       CallFunc_GetDataTableRowFromName_OutRow_14                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_14                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_17                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  CallFunc_Array_Get_Item_26                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_16                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_27                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Color_Master             CallFunc_GetDataTableRowFromName_OutRow_15                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_15                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_28                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_29                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Fog_Day                  CallFunc_GetDataTableRowFromName_OutRow_16                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_16                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_30                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_18                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_31                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_32                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_33                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_17                     (ReferenceParm)
// double                             CallFunc_Lerp_ReturnValue_19                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_20                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_21                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_18                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_34                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FS_Ring_Type                CallFunc_GetDataTableRowFromName_OutRow_17                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_17                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_35                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_36                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_37                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Ring_Color               CallFunc_GetDataTableRowFromName_OutRow_18                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_18                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_38                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UCurveFloat*>         K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FLinearColor                CallFunc_Array_Get_Item_39                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_19                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_40                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_20                     (ReferenceParm)
// struct FS_Moon_Color               CallFunc_GetDataTableRowFromName_OutRow_19                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_19                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_41                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Moon_Color               CallFunc_GetDataTableRowFromName_OutRow_20                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_20                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInstance*>   K2Node_MakeArray_Array_1                                         (ReferenceParm)
// TArray<class UMaterialInstance*>   K2Node_MakeArray_Array_2                                         (ReferenceParm)
// TArray<class UMaterialInstance*>   K2Node_MakeArray_Array_3                                         (ReferenceParm)
// struct FLinearColor                CallFunc_Array_Get_Item_42                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_43                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_21                     (ReferenceParm)
// TArray<class UMaterialInstance*>   K2Node_MakeArray_Array_4                                         (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_44                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Moon_Color_Saturation    CallFunc_GetDataTableRowFromName_OutRow_21                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_21                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_22                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_45                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInstance*>   K2Node_MakeArray_Array_5                                         (ReferenceParm)
// struct FS_Moon_Color_Saturation    CallFunc_GetDataTableRowFromName_OutRow_22                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_22                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_23                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_46                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_24                     (ReferenceParm)
// struct FS_Moon_Color_Saturation    CallFunc_GetDataTableRowFromName_OutRow_23                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_23                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_47                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Moon_Color               CallFunc_GetDataTableRowFromName_OutRow_24                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_24                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_48                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UCurveFloat*>         K2Node_MakeArray_Array_6                                         (ReferenceParm)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_25                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_49                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Moon_Color_Saturation    CallFunc_GetDataTableRowFromName_OutRow_25                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_25                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_50                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UCurveFloat*>         K2Node_MakeArray_Array_7                                         (ReferenceParm)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_26                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_51                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_27                     (ReferenceParm)
// struct FS_Moon_Color               CallFunc_GetDataTableRowFromName_OutRow_26                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_26                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_52                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Moon_Color               CallFunc_GetDataTableRowFromName_OutRow_27                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_27                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_53                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_54                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_28                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_55                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Moon_Color_Saturation    CallFunc_GetDataTableRowFromName_OutRow_28                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_28                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_9                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_29                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_56                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Moon_Color_Saturation    CallFunc_GetDataTableRowFromName_OutRow_29                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_29                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_10                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_30                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_57                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_31                     (ReferenceParm)
// struct FS_Moon_Color_Saturation    CallFunc_GetDataTableRowFromName_OutRow_30                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_30                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_58                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Moon_Color               CallFunc_GetDataTableRowFromName_OutRow_31                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_31                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_11                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_59                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_32                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_60                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_61                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Moon_Color_Saturation    CallFunc_GetDataTableRowFromName_OutRow_32                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_32                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_12                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_33                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_62                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_34                     (ReferenceParm)
// struct FS_Moon_Color               CallFunc_GetDataTableRowFromName_OutRow_33                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_33                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_63                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Moon_Color               CallFunc_GetDataTableRowFromName_OutRow_34                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_34                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_64                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_65                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_35                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_66                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Moon_Color_Saturation    CallFunc_GetDataTableRowFromName_OutRow_35                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_35                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_13                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_36                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_67                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Moon_Color_Saturation    CallFunc_GetDataTableRowFromName_OutRow_36                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_36                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_14                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_37                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_68                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_38                     (ReferenceParm)
// struct FS_Moon_Color_Saturation    CallFunc_GetDataTableRowFromName_OutRow_37                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_37                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_69                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Moon_Color               CallFunc_GetDataTableRowFromName_OutRow_38                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_38                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_15                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_70                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_39                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_71                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_72                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Moon_Color_Saturation    CallFunc_GetDataTableRowFromName_OutRow_39                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_39                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_16                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_40                     (ReferenceParm)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_41                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_73                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_74                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Moon_Color               CallFunc_GetDataTableRowFromName_OutRow_40                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_40                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Moon_Color               CallFunc_GetDataTableRowFromName_OutRow_41                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_41                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_75                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_76                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_42                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_77                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Moon_Color_Saturation    CallFunc_GetDataTableRowFromName_OutRow_42                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_42                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_17                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_43                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_78                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Moon_Color_Saturation    CallFunc_GetDataTableRowFromName_OutRow_43                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_43                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_18                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_44                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_79                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_45                     (ReferenceParm)
// struct FS_Moon_Color_Saturation    CallFunc_GetDataTableRowFromName_OutRow_44                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_44                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_80                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Moon_Color               CallFunc_GetDataTableRowFromName_OutRow_45                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_45                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_19                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_81                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_46                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_82                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Moon_Color_Saturation    CallFunc_GetDataTableRowFromName_OutRow_46                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_46                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_20                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_47                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_83                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Color_Table_Master       CallFunc_GetDataTableRowFromName_OutRow_47                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_47                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  CallFunc_Array_Get_Item_84                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_48                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_85                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Color_Master             CallFunc_GetDataTableRowFromName_OutRow_48                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_48                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_49                     (ReferenceParm)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_50                     (ReferenceParm)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_51                     (ReferenceParm)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_52                     (ReferenceParm)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_53                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_86                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_SecondaryMoon_Groups     CallFunc_GetDataTableRowFromName_OutRow_49                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_49                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_54                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_87                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Color_Table_Master       CallFunc_GetDataTableRowFromName_OutRow_50                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_50                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_88                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Secondary_moon_Color     CallFunc_GetDataTableRowFromName_OutRow_51                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_51                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  CallFunc_Array_Get_Item_89                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_55                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_90                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Color_Master             CallFunc_GetDataTableRowFromName_OutRow_52                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_52                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_91                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_92                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Secondary_moon_Color     CallFunc_GetDataTableRowFromName_OutRow_53                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_53                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Secondary_moon_Color     CallFunc_GetDataTableRowFromName_OutRow_54                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_54                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_93                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Secondary_moon_Color     CallFunc_GetDataTableRowFromName_OutRow_55                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_55                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_56                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_94                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Atm_Moon_Visbility       CallFunc_GetDataTableRowFromName_OutRow_56                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_56                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_21                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_57                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_95                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_22                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Ring_Toggle              CallFunc_GetDataTableRowFromName_OutRow_57                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_57                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_8                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_23                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_9                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_10                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_11                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_12                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_58                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_96                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Atm_Moon_Visbility       CallFunc_GetDataTableRowFromName_OutRow_58                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_58                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_13                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_14                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_15                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_16                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_59                     (ReferenceParm)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_60                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_97                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_61                     (ReferenceParm)
// struct FS_Color_Table_Master       CallFunc_GetDataTableRowFromName_OutRow_59                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_59                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_98                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Color_Table_Master       CallFunc_GetDataTableRowFromName_OutRow_60                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_60                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  CallFunc_Array_Get_Item_99                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_62                     (ReferenceParm)
// class UDataTable*                  CallFunc_Array_Get_Item_100                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_101                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_63                     (ReferenceParm)
// struct FS_Color_Master             CallFunc_GetDataTableRowFromName_OutRow_61                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_61                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_102                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Color_Master             CallFunc_GetDataTableRowFromName_OutRow_62                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_62                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_103                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Rayleigh_Inverse         CallFunc_GetDataTableRowFromName_OutRow_63                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_63                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_104                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_105                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_64                     (ReferenceParm)
// float                              CallFunc_GetFloatValue_ReturnValue_17                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_106                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Atmosphere               CallFunc_GetDataTableRowFromName_OutRow_64                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_64                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_107                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_65                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_108                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Color_Saturations        CallFunc_GetDataTableRowFromName_OutRow_65                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_65                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_109                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_24                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_66                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_110                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Color_Saturations        CallFunc_GetDataTableRowFromName_OutRow_66                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_66                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_111                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_25                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_67                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_112                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Color_Saturations        CallFunc_GetDataTableRowFromName_OutRow_67                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_67                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_113                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_26                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_114                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_27                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_115                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_68                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_116                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Rayleigh_Inverse         CallFunc_GetDataTableRowFromName_OutRow_68                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_68                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_69                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_117                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_118                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Color_Table_Master       CallFunc_GetDataTableRowFromName_OutRow_69                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_69                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  CallFunc_Array_Get_Item_119                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_70                     (ReferenceParm)
// float                              CallFunc_GetFloatValue_ReturnValue_18                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_120                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Color_Master             CallFunc_GetDataTableRowFromName_OutRow_70                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_70                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_121                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_28                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_71                     (ReferenceParm)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_72                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_122                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Color_Table_Master       CallFunc_GetDataTableRowFromName_OutRow_71                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_71                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_123                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  CallFunc_Array_Get_Item_124                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_73                     (ReferenceParm)
// float                              CallFunc_GetFloatValue_ReturnValue_19                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_125                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Color_Master             CallFunc_GetDataTableRowFromName_OutRow_72                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_72                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_29                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_126                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_74                     (ReferenceParm)
// struct FS_Rayleigh_Inverse         CallFunc_GetDataTableRowFromName_OutRow_73                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_73                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_127                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Rayleigh_Inverse         CallFunc_GetDataTableRowFromName_OutRow_74                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_74                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_128                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_75                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_129                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_130                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Color_Table_Master       CallFunc_GetDataTableRowFromName_OutRow_75                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_75                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  CallFunc_Array_Get_Item_131                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_76                     (ReferenceParm)
// float                              CallFunc_GetFloatValue_ReturnValue_20                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_132                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Color_Master             CallFunc_GetDataTableRowFromName_OutRow_76                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_76                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_77                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_133                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Rayleigh_Inverse         CallFunc_GetDataTableRowFromName_OutRow_77                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_77                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_78                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_134                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_135                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Color_Table_Master       CallFunc_GetDataTableRowFromName_OutRow_78                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_78                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  CallFunc_Array_Get_Item_136                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_79                     (ReferenceParm)
// float                              CallFunc_GetFloatValue_ReturnValue_21                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_137                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Color_Master             CallFunc_GetDataTableRowFromName_OutRow_79                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_79                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_6                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_30                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_138                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_7                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_31                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_8                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_9                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_32                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_33                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_22                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_10                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_22                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_34                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_23                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_35                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_23                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_80                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_139                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_140                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Ring_Color               CallFunc_GetDataTableRowFromName_OutRow_80                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_80                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_141                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_142                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_11                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_12                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_36                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_37                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_24                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_24                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_143                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_25                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult_1                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_GetFloatValue_ReturnValue_26                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult_2                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_NegateRotator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetFloatValue_ReturnValue_27                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult_3                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult_4                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult_5                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult_6                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult_7                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult_8                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult_9                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult_10                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult_11                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult_12                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult_13                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult_14                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult_15                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult_16                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult_17                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult_18                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult_19                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult_20                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult_21                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult_22                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_13                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_38                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_14                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_39                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_28                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_29                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_30                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_31                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_32                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_33                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_34                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_40                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_144                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_15                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_41                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_42                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_145                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_16                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_43                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_146                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_44                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_17                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_45                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_13                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_14                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_15                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_16                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_17                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_18                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_19                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_20                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_21                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRayleighScatteringScale_NewValue_ImplicitCast        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetMieScatteringScale_NewValue_ImplicitCast             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetMieAbsorptionScale_NewValue_ImplicitCast             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_AerialPerspectiveStartDepth_ImplicitCast      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_9                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_10                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_11                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_12                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_13                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_3   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_14                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_4   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_6                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_15                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetHeightFogContribution_NewValue_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetMieAbsorptionScale_NewValue_ImplicitCast_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_AerialPerspectiveStartDepth_ImplicitCast_1    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetMieScatteringScale_NewValue_ImplicitCast_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRayleighScatteringScale_NewValue_ImplicitCast_1      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_7                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_16                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetHeightFogContribution_NewValue_ImplicitCast_1        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetHeightFogContribution_NewValue_ImplicitCast_2        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_17                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_18                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRayleighScatteringScale_NewValue_ImplicitCast_2      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetMieScatteringScale_NewValue_ImplicitCast_2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_19                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_20                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetMieAbsorptionScale_NewValue_ImplicitCast_2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_21                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_AerialPerspectiveStartDepth_ImplicitCast_2    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetAerialPespectiveViewDistanceScale_NewValue_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetHeightFogContribution_NewValue_ImplicitCast_3        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetAerialPespectiveViewDistanceScale_NewValue_ImplicitCast_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetAerialPespectiveViewDistanceScale_NewValue_ImplicitCast_2(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetAerialPespectiveViewDistanceScale_NewValue_ImplicitCast_3(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_5   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_6   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_7   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_8   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_9   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_10  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_8                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_9                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_10                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_11                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_12                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_13                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_14                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_15                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_16                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_17                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetMieAbsorptionScale_NewValue_ImplicitCast_3           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_AerialPerspectiveStartDepth_ImplicitCast_3    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetAerialPespectiveViewDistanceScale_NewValue_ImplicitCast_4(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetMieScatteringScale_NewValue_ImplicitCast_3           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRayleighScatteringScale_NewValue_ImplicitCast_3      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_18                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_19                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_20                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_21                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_22                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_22                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetHeightFogContribution_NewValue_ImplicitCast_4        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_23                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_11  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_12  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_24                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_23                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetMieScatteringScale_NewValue_ImplicitCast_4           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetHeightFogContribution_NewValue_ImplicitCast_5        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetMieAbsorptionScale_NewValue_ImplicitCast_4           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetAerialPespectiveViewDistanceScale_NewValue_ImplicitCast_5(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetMieAbsorptionScale_NewValue_ImplicitCast_5           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetMieScatteringScale_NewValue_ImplicitCast_5           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRayleighScatteringScale_NewValue_ImplicitCast_4      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_AerialPerspectiveStartDepth_ImplicitCast_4    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRayleighScatteringScale_NewValue_ImplicitCast_5      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_25                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_13  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Roll_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_26                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_27                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_28                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_29                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_30                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_31                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_32                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_33                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_34                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_AerialPerspectiveStartDepth_ImplicitCast_5    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Lighting_C::Sky(float Nebula_Brightness, float Ring_Brightness_Value, float Atmosphere_Dawn_Dusk, const struct FRotator& Sky_Angle_Z_Inv_Rotator, float Fae_Magic_Brightness, class UCurveFloat* Stars_Brightness_Ultra_Clear, class UCurveFloat* Stars_Brightness, class UCurveFloat* SkyLight_Lerp, class UMaterialInstanceDynamic* Sun_Material, const TArray<class UCurveFloat*>& Nebula_Brightness_B_Array, const TArray<class UCurveFloat*>& Nebula_Brightness_A_Array, class UCurveFloat* Atmosphere_Brightness, class UCurveFloat* Atmosphere_Brightness_Zero, const TArray<class UMaterialInstance*>& Moon_E_Array, class UMaterialInstanceDynamic* Moon_E, const TArray<class UMaterialInstance*>& Moon_D_Array, class UMaterialInstanceDynamic* Moon_D, const TArray<class UMaterialInstance*>& Moon_C_Array, class UMaterialInstanceDynamic* Moon_C, const TArray<class UMaterialInstance*>& Moon_B_Array, class UMaterialInstanceDynamic* Moon_B, const TArray<class UMaterialInstance*>& Moon_A_Array, class UMaterialInstanceDynamic* Moon_A, class UCurveFloat* Nebula_Brightness_Zero, class UCurveFloat* Nebula_Brightness_B, class UCurveFloat* Nebula_Brightness_A, class UCurveFloat* Ring_Brightness_Zero, class UCurveFloat* Ring_SpecBrightness, class UCurveFloat* Ring_Brightness, class UCurveFloat* Moon_C_Light_Brightness, class UCurveFloat* Moon_A_Light_Brightness, const TArray<struct FLinearColor>& Atm_E_Color_Selection, const TArray<struct FLinearColor>& Moon_E_Color_3_Selection, const TArray<struct FLinearColor>& Moon_E_Color_2_Selection, const TArray<struct FLinearColor>& Moon_E_Color_1_Selection, const TArray<struct FLinearColor>& Atm_D_Color_Selection, const TArray<struct FLinearColor>& Moon_D_Color_3_Selection, const TArray<struct FLinearColor>& Moon_D_Color_2_Selection, const TArray<struct FLinearColor>& Moon_D_Color_1_Selection, const TArray<struct FLinearColor>& Atm_B_Color_Selection, const TArray<struct FLinearColor>& Moon_B_Color_3_Selection, const TArray<struct FLinearColor>& Moon_B_Color_2_Selection, const TArray<struct FLinearColor>& Moon_B_Color_1_Selection, const TArray<struct FLinearColor>& Atm_C_Color_Selection, const TArray<struct FLinearColor>& Moon_C_Color_3_Selection, const TArray<struct FLinearColor>& Moon_C_Color_2_Selection, const TArray<struct FLinearColor>& Moon_C_Color_1_Selection, const TArray<struct FLinearColor>& Atm_A_Color_Selection, const TArray<struct FLinearColor>& Moon_A_Color_3_Selection, const TArray<struct FLinearColor>& Moon_A_Color_2_Selection, const TArray<struct FLinearColor>& Moon_A_Color_1_Selection, class UCurveLinearColor* Sun_Color, class UMaterialInstanceDynamic* Sky_material, const TArray<struct FLinearColor>& Sky_Luminance_Factor, const TArray<struct FLinearColor>& Mie_Scattering_Selection, const TArray<struct FLinearColor>& Rayleigh_Scattering_Selection, class UCurveLinearColor* Cloud_Color, const TArray<class UCurveFloat*>& Star_Brightness_Array, class UCurveFloat* Sky_Angle_Z, class UCurveFloat* Sky_Angle_Y, class UCurveFloat* Sky_Sphere_Visibility, double AdjustedTime_24Hour, class UCurveFloat* Sky_Atm_Height_Fog_Contribution, double CallFunc_Lerp_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, double CallFunc_Lerp_ReturnValue_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_1, double CallFunc_Lerp_ReturnValue_2, class FName CallFunc_Array_Get_Item, const struct FS_Fog_Day& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_2, double CallFunc_Lerp_ReturnValue_3, class FName CallFunc_Array_Get_Item_1, const struct FS_Atmosphere& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_3, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_4, float CallFunc_GetFloatValue_ReturnValue_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_5, bool K2Node_SwitchInteger_CmpSuccess_1, int32 CallFunc_Conv_BoolToInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess_2, float CallFunc_GetFloatValue_ReturnValue_2, float CallFunc_GetFloatValue_ReturnValue_3, bool K2Node_SwitchInteger_CmpSuccess_3, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_6, class FName CallFunc_Array_Get_Item_2, const struct FS_Atmosphere& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, float CallFunc_GetFloatValue_ReturnValue_4, double CallFunc_Lerp_ReturnValue_4, double CallFunc_Lerp_ReturnValue_5, float CallFunc_GetFloatValue_ReturnValue_5, double CallFunc_Lerp_ReturnValue_6, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_7, double CallFunc_Conv_ByteToDouble_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, double CallFunc_Conv_ByteToDouble_ReturnValue_1, class FName CallFunc_Array_Get_Item_3, int32 CallFunc_FTrunc_ReturnValue_1, const struct FS_VE_Preset_Master& CallFunc_GetDataTableRowFromName_OutRow_3, bool CallFunc_GetDataTableRowFromName_ReturnValue_3, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_8, class FName CallFunc_Array_Get_Item_4, const struct FS_VE_Preset_Master& CallFunc_GetDataTableRowFromName_OutRow_4, bool CallFunc_GetDataTableRowFromName_ReturnValue_4, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_9, double CallFunc_Conv_ByteToDouble_ReturnValue_2, int32 CallFunc_FTrunc_ReturnValue_2, float CallFunc_GetFloatValue_ReturnValue_6, class FName CallFunc_Array_Get_Item_5, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_10, const struct FS_VE_Preset_Master& CallFunc_GetDataTableRowFromName_OutRow_5, bool CallFunc_GetDataTableRowFromName_ReturnValue_5, class FName CallFunc_Array_Get_Item_6, const struct FS_Fog_Day& CallFunc_GetDataTableRowFromName_OutRow_6, bool CallFunc_GetDataTableRowFromName_ReturnValue_6, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_11, double CallFunc_Conv_ByteToDouble_ReturnValue_3, int32 CallFunc_FTrunc_ReturnValue_3, class FName CallFunc_Array_Get_Item_7, const struct FS_VE_Preset_Master& CallFunc_GetDataTableRowFromName_OutRow_7, bool CallFunc_GetDataTableRowFromName_ReturnValue_7, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_12, class FName CallFunc_Array_Get_Item_8, class FName CallFunc_Array_Get_Item_9, const struct FS_Fog_Day& CallFunc_GetDataTableRowFromName_OutRow_8, bool CallFunc_GetDataTableRowFromName_ReturnValue_8, const struct FS_Fog_Day& CallFunc_GetDataTableRowFromName_OutRow_9, bool CallFunc_GetDataTableRowFromName_ReturnValue_9, class FName CallFunc_Array_Get_Item_10, const struct FS_Fog_Day& CallFunc_GetDataTableRowFromName_OutRow_10, bool CallFunc_GetDataTableRowFromName_ReturnValue_10, class FName CallFunc_Array_Get_Item_11, const struct FS_Atmosphere& CallFunc_GetDataTableRowFromName_OutRow_11, bool CallFunc_GetDataTableRowFromName_ReturnValue_11, double CallFunc_Lerp_ReturnValue_7, double CallFunc_Lerp_ReturnValue_8, double CallFunc_Lerp_ReturnValue_9, double CallFunc_Lerp_ReturnValue_10, double CallFunc_Lerp_ReturnValue_11, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_13, class FName CallFunc_Array_Get_Item_12, const struct FS_Fog_Day& CallFunc_GetDataTableRowFromName_OutRow_12, bool CallFunc_GetDataTableRowFromName_ReturnValue_12, float CallFunc_GetFloatValue_ReturnValue_7, double CallFunc_Lerp_ReturnValue_12, const struct FLinearColor& CallFunc_Array_Get_Item_13, const struct FLinearColor& CallFunc_Array_Get_Item_14, const struct FLinearColor& CallFunc_Array_Get_Item_15, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_14, class FName CallFunc_Array_Get_Item_16, const struct FS_Fog_Day& CallFunc_GetDataTableRowFromName_OutRow_13, bool CallFunc_GetDataTableRowFromName_ReturnValue_13, const struct FLinearColor& CallFunc_Array_Get_Item_17, double CallFunc_Lerp_ReturnValue_13, const struct FLinearColor& CallFunc_Array_Get_Item_18, const struct FLinearColor& CallFunc_Array_Get_Item_19, const struct FLinearColor& CallFunc_Array_Get_Item_20, const struct FLinearColor& CallFunc_Array_Get_Item_21, int32 CallFunc_Conv_BoolToInt_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess_4, const struct FLinearColor& CallFunc_Array_Get_Item_22, const struct FLinearColor& CallFunc_Array_Get_Item_23, const struct FLinearColor& CallFunc_Array_Get_Item_24, double CallFunc_Lerp_ReturnValue_14, double CallFunc_Lerp_ReturnValue_15, double CallFunc_Lerp_ReturnValue_16, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_15, class FName CallFunc_Array_Get_Item_25, const struct FS_Color_Table_Master& CallFunc_GetDataTableRowFromName_OutRow_14, bool CallFunc_GetDataTableRowFromName_ReturnValue_14, double CallFunc_Lerp_ReturnValue_17, class UDataTable* CallFunc_Array_Get_Item_26, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_16, class FName CallFunc_Array_Get_Item_27, const struct FS_Color_Master& CallFunc_GetDataTableRowFromName_OutRow_15, bool CallFunc_GetDataTableRowFromName_ReturnValue_15, const struct FLinearColor& CallFunc_Array_Get_Item_28, class FName CallFunc_Array_Get_Item_29, const struct FS_Fog_Day& CallFunc_GetDataTableRowFromName_OutRow_16, bool CallFunc_GetDataTableRowFromName_ReturnValue_16, const struct FLinearColor& CallFunc_Array_Get_Item_30, double CallFunc_Lerp_ReturnValue_18, const struct FLinearColor& CallFunc_Array_Get_Item_31, const struct FLinearColor& CallFunc_Array_Get_Item_32, const struct FLinearColor& CallFunc_Array_Get_Item_33, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_17, double CallFunc_Lerp_ReturnValue_19, double CallFunc_Lerp_ReturnValue_20, double CallFunc_Lerp_ReturnValue_21, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_18, class FName CallFunc_Array_Get_Item_34, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, const struct FS_Ring_Type& CallFunc_GetDataTableRowFromName_OutRow_17, bool CallFunc_GetDataTableRowFromName_ReturnValue_17, const struct FLinearColor& CallFunc_Array_Get_Item_35, const struct FLinearColor& CallFunc_Array_Get_Item_36, class FName CallFunc_Array_Get_Item_37, const struct FS_Ring_Color& CallFunc_GetDataTableRowFromName_OutRow_18, bool CallFunc_GetDataTableRowFromName_ReturnValue_18, const struct FLinearColor& CallFunc_Array_Get_Item_38, TArray<class UCurveFloat*>& K2Node_MakeArray_Array, const struct FLinearColor& CallFunc_Array_Get_Item_39, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_19, class FName CallFunc_Array_Get_Item_40, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_20, const struct FS_Moon_Color& CallFunc_GetDataTableRowFromName_OutRow_19, bool CallFunc_GetDataTableRowFromName_ReturnValue_19, class FName CallFunc_Array_Get_Item_41, const struct FS_Moon_Color& CallFunc_GetDataTableRowFromName_OutRow_20, bool CallFunc_GetDataTableRowFromName_ReturnValue_20, TArray<class UMaterialInstance*>& K2Node_MakeArray_Array_1, TArray<class UMaterialInstance*>& K2Node_MakeArray_Array_2, TArray<class UMaterialInstance*>& K2Node_MakeArray_Array_3, const struct FLinearColor& CallFunc_Array_Get_Item_42, const struct FLinearColor& CallFunc_Array_Get_Item_43, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_21, TArray<class UMaterialInstance*>& K2Node_MakeArray_Array_4, class FName CallFunc_Array_Get_Item_44, const struct FS_Moon_Color_Saturation& CallFunc_GetDataTableRowFromName_OutRow_21, bool CallFunc_GetDataTableRowFromName_ReturnValue_21, bool K2Node_SwitchInteger_CmpSuccess_5, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_22, class FName CallFunc_Array_Get_Item_45, TArray<class UMaterialInstance*>& K2Node_MakeArray_Array_5, const struct FS_Moon_Color_Saturation& CallFunc_GetDataTableRowFromName_OutRow_22, bool CallFunc_GetDataTableRowFromName_ReturnValue_22, bool K2Node_SwitchInteger_CmpSuccess_6, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_23, class FName CallFunc_Array_Get_Item_46, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_24, const struct FS_Moon_Color_Saturation& CallFunc_GetDataTableRowFromName_OutRow_23, bool CallFunc_GetDataTableRowFromName_ReturnValue_23, class FName CallFunc_Array_Get_Item_47, const struct FS_Moon_Color& CallFunc_GetDataTableRowFromName_OutRow_24, bool CallFunc_GetDataTableRowFromName_ReturnValue_24, bool K2Node_SwitchInteger_CmpSuccess_7, const struct FLinearColor& CallFunc_Array_Get_Item_48, TArray<class UCurveFloat*>& K2Node_MakeArray_Array_6, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_25, class FName CallFunc_Array_Get_Item_49, const struct FS_Moon_Color_Saturation& CallFunc_GetDataTableRowFromName_OutRow_25, bool CallFunc_GetDataTableRowFromName_ReturnValue_25, const struct FLinearColor& CallFunc_Array_Get_Item_50, bool K2Node_SwitchInteger_CmpSuccess_8, TArray<class UCurveFloat*>& K2Node_MakeArray_Array_7, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_26, class FName CallFunc_Array_Get_Item_51, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_27, const struct FS_Moon_Color& CallFunc_GetDataTableRowFromName_OutRow_26, bool CallFunc_GetDataTableRowFromName_ReturnValue_26, class FName CallFunc_Array_Get_Item_52, const struct FS_Moon_Color& CallFunc_GetDataTableRowFromName_OutRow_27, bool CallFunc_GetDataTableRowFromName_ReturnValue_27, const struct FLinearColor& CallFunc_Array_Get_Item_53, const struct FLinearColor& CallFunc_Array_Get_Item_54, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_28, class FName CallFunc_Array_Get_Item_55, const struct FS_Moon_Color_Saturation& CallFunc_GetDataTableRowFromName_OutRow_28, bool CallFunc_GetDataTableRowFromName_ReturnValue_28, bool K2Node_SwitchInteger_CmpSuccess_9, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_29, class FName CallFunc_Array_Get_Item_56, const struct FS_Moon_Color_Saturation& CallFunc_GetDataTableRowFromName_OutRow_29, bool CallFunc_GetDataTableRowFromName_ReturnValue_29, bool K2Node_SwitchInteger_CmpSuccess_10, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_30, class FName CallFunc_Array_Get_Item_57, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_31, const struct FS_Moon_Color_Saturation& CallFunc_GetDataTableRowFromName_OutRow_30, bool CallFunc_GetDataTableRowFromName_ReturnValue_30, class FName CallFunc_Array_Get_Item_58, const struct FS_Moon_Color& CallFunc_GetDataTableRowFromName_OutRow_31, bool CallFunc_GetDataTableRowFromName_ReturnValue_31, bool K2Node_SwitchInteger_CmpSuccess_11, const struct FLinearColor& CallFunc_Array_Get_Item_59, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_32, class FName CallFunc_Array_Get_Item_60, const struct FLinearColor& CallFunc_Array_Get_Item_61, const struct FS_Moon_Color_Saturation& CallFunc_GetDataTableRowFromName_OutRow_32, bool CallFunc_GetDataTableRowFromName_ReturnValue_32, bool K2Node_SwitchInteger_CmpSuccess_12, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_33, class FName CallFunc_Array_Get_Item_62, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_34, const struct FS_Moon_Color& CallFunc_GetDataTableRowFromName_OutRow_33, bool CallFunc_GetDataTableRowFromName_ReturnValue_33, class FName CallFunc_Array_Get_Item_63, const struct FS_Moon_Color& CallFunc_GetDataTableRowFromName_OutRow_34, bool CallFunc_GetDataTableRowFromName_ReturnValue_34, const struct FLinearColor& CallFunc_Array_Get_Item_64, const struct FLinearColor& CallFunc_Array_Get_Item_65, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_35, class FName CallFunc_Array_Get_Item_66, const struct FS_Moon_Color_Saturation& CallFunc_GetDataTableRowFromName_OutRow_35, bool CallFunc_GetDataTableRowFromName_ReturnValue_35, bool K2Node_SwitchInteger_CmpSuccess_13, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_36, class FName CallFunc_Array_Get_Item_67, const struct FS_Moon_Color_Saturation& CallFunc_GetDataTableRowFromName_OutRow_36, bool CallFunc_GetDataTableRowFromName_ReturnValue_36, bool K2Node_SwitchInteger_CmpSuccess_14, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_37, class FName CallFunc_Array_Get_Item_68, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_38, const struct FS_Moon_Color_Saturation& CallFunc_GetDataTableRowFromName_OutRow_37, bool CallFunc_GetDataTableRowFromName_ReturnValue_37, class FName CallFunc_Array_Get_Item_69, const struct FS_Moon_Color& CallFunc_GetDataTableRowFromName_OutRow_38, bool CallFunc_GetDataTableRowFromName_ReturnValue_38, bool K2Node_SwitchInteger_CmpSuccess_15, const struct FLinearColor& CallFunc_Array_Get_Item_70, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_39, class FName CallFunc_Array_Get_Item_71, const struct FLinearColor& CallFunc_Array_Get_Item_72, const struct FS_Moon_Color_Saturation& CallFunc_GetDataTableRowFromName_OutRow_39, bool CallFunc_GetDataTableRowFromName_ReturnValue_39, bool K2Node_SwitchInteger_CmpSuccess_16, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_40, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_41, class FName CallFunc_Array_Get_Item_73, class FName CallFunc_Array_Get_Item_74, const struct FS_Moon_Color& CallFunc_GetDataTableRowFromName_OutRow_40, bool CallFunc_GetDataTableRowFromName_ReturnValue_40, const struct FS_Moon_Color& CallFunc_GetDataTableRowFromName_OutRow_41, bool CallFunc_GetDataTableRowFromName_ReturnValue_41, const struct FLinearColor& CallFunc_Array_Get_Item_75, const struct FLinearColor& CallFunc_Array_Get_Item_76, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_42, class FName CallFunc_Array_Get_Item_77, const struct FS_Moon_Color_Saturation& CallFunc_GetDataTableRowFromName_OutRow_42, bool CallFunc_GetDataTableRowFromName_ReturnValue_42, bool K2Node_SwitchInteger_CmpSuccess_17, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_43, class FName CallFunc_Array_Get_Item_78, const struct FS_Moon_Color_Saturation& CallFunc_GetDataTableRowFromName_OutRow_43, bool CallFunc_GetDataTableRowFromName_ReturnValue_43, bool K2Node_SwitchInteger_CmpSuccess_18, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_44, class FName CallFunc_Array_Get_Item_79, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_45, const struct FS_Moon_Color_Saturation& CallFunc_GetDataTableRowFromName_OutRow_44, bool CallFunc_GetDataTableRowFromName_ReturnValue_44, class FName CallFunc_Array_Get_Item_80, const struct FS_Moon_Color& CallFunc_GetDataTableRowFromName_OutRow_45, bool CallFunc_GetDataTableRowFromName_ReturnValue_45, bool K2Node_SwitchInteger_CmpSuccess_19, const struct FLinearColor& CallFunc_Array_Get_Item_81, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_46, class FName CallFunc_Array_Get_Item_82, const struct FS_Moon_Color_Saturation& CallFunc_GetDataTableRowFromName_OutRow_46, bool CallFunc_GetDataTableRowFromName_ReturnValue_46, bool K2Node_SwitchInteger_CmpSuccess_20, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_47, class FName CallFunc_Array_Get_Item_83, const struct FS_Color_Table_Master& CallFunc_GetDataTableRowFromName_OutRow_47, bool CallFunc_GetDataTableRowFromName_ReturnValue_47, double CallFunc_Conv_IntToDouble_ReturnValue, class UDataTable* CallFunc_Array_Get_Item_84, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_48, class FName CallFunc_Array_Get_Item_85, const struct FS_Color_Master& CallFunc_GetDataTableRowFromName_OutRow_48, bool CallFunc_GetDataTableRowFromName_ReturnValue_48, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_Conv_IntToDouble_ReturnValue_2, double CallFunc_Conv_IntToDouble_ReturnValue_3, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_49, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_50, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_51, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_52, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_53, class FName CallFunc_Array_Get_Item_86, const struct FS_SecondaryMoon_Groups& CallFunc_GetDataTableRowFromName_OutRow_49, bool CallFunc_GetDataTableRowFromName_ReturnValue_49, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_54, class FName CallFunc_Array_Get_Item_87, const struct FS_Color_Table_Master& CallFunc_GetDataTableRowFromName_OutRow_50, bool CallFunc_GetDataTableRowFromName_ReturnValue_50, class FName CallFunc_Array_Get_Item_88, const struct FS_Secondary_moon_Color& CallFunc_GetDataTableRowFromName_OutRow_51, bool CallFunc_GetDataTableRowFromName_ReturnValue_51, class UDataTable* CallFunc_Array_Get_Item_89, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_55, class FName CallFunc_Array_Get_Item_90, const struct FS_Color_Master& CallFunc_GetDataTableRowFromName_OutRow_52, bool CallFunc_GetDataTableRowFromName_ReturnValue_52, class FName CallFunc_Array_Get_Item_91, class FName CallFunc_Array_Get_Item_92, const struct FS_Secondary_moon_Color& CallFunc_GetDataTableRowFromName_OutRow_53, bool CallFunc_GetDataTableRowFromName_ReturnValue_53, const struct FS_Secondary_moon_Color& CallFunc_GetDataTableRowFromName_OutRow_54, bool CallFunc_GetDataTableRowFromName_ReturnValue_54, class FName CallFunc_Array_Get_Item_93, const struct FS_Secondary_moon_Color& CallFunc_GetDataTableRowFromName_OutRow_55, bool CallFunc_GetDataTableRowFromName_ReturnValue_55, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_56, class FName CallFunc_Array_Get_Item_94, const struct FS_Atm_Moon_Visbility& CallFunc_GetDataTableRowFromName_OutRow_56, bool CallFunc_GetDataTableRowFromName_ReturnValue_56, bool K2Node_SwitchInteger_CmpSuccess_21, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_57, class FName CallFunc_Array_Get_Item_95, bool K2Node_SwitchInteger_CmpSuccess_22, const struct FS_Ring_Toggle& CallFunc_GetDataTableRowFromName_OutRow_57, bool CallFunc_GetDataTableRowFromName_ReturnValue_57, float CallFunc_GetFloatValue_ReturnValue_8, int32 CallFunc_Conv_BoolToInt_ReturnValue_2, bool K2Node_SwitchInteger_CmpSuccess_23, float CallFunc_GetFloatValue_ReturnValue_9, float CallFunc_GetFloatValue_ReturnValue_10, float CallFunc_GetFloatValue_ReturnValue_11, float CallFunc_GetFloatValue_ReturnValue_12, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_58, class FName CallFunc_Array_Get_Item_96, const struct FS_Atm_Moon_Visbility& CallFunc_GetDataTableRowFromName_OutRow_58, bool CallFunc_GetDataTableRowFromName_ReturnValue_58, float CallFunc_GetFloatValue_ReturnValue_13, float CallFunc_GetFloatValue_ReturnValue_14, float CallFunc_GetFloatValue_ReturnValue_15, float CallFunc_GetFloatValue_ReturnValue_16, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_59, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_60, class FName CallFunc_Array_Get_Item_97, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_61, const struct FS_Color_Table_Master& CallFunc_GetDataTableRowFromName_OutRow_59, bool CallFunc_GetDataTableRowFromName_ReturnValue_59, class FName CallFunc_Array_Get_Item_98, const struct FS_Color_Table_Master& CallFunc_GetDataTableRowFromName_OutRow_60, bool CallFunc_GetDataTableRowFromName_ReturnValue_60, class UDataTable* CallFunc_Array_Get_Item_99, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_62, class UDataTable* CallFunc_Array_Get_Item_100, class FName CallFunc_Array_Get_Item_101, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_63, const struct FS_Color_Master& CallFunc_GetDataTableRowFromName_OutRow_61, bool CallFunc_GetDataTableRowFromName_ReturnValue_61, class FName CallFunc_Array_Get_Item_102, const struct FS_Color_Master& CallFunc_GetDataTableRowFromName_OutRow_62, bool CallFunc_GetDataTableRowFromName_ReturnValue_62, class FName CallFunc_Array_Get_Item_103, const struct FS_Rayleigh_Inverse& CallFunc_GetDataTableRowFromName_OutRow_63, bool CallFunc_GetDataTableRowFromName_ReturnValue_63, const struct FLinearColor& CallFunc_Array_Get_Item_104, const struct FLinearColor& CallFunc_Array_Get_Item_105, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_64, float CallFunc_GetFloatValue_ReturnValue_17, class FName CallFunc_Array_Get_Item_106, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, const struct FS_Atmosphere& CallFunc_GetDataTableRowFromName_OutRow_64, bool CallFunc_GetDataTableRowFromName_ReturnValue_64, const struct FLinearColor& CallFunc_Array_Get_Item_107, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_65, class FName CallFunc_Array_Get_Item_108, const struct FS_Color_Saturations& CallFunc_GetDataTableRowFromName_OutRow_65, bool CallFunc_GetDataTableRowFromName_ReturnValue_65, const struct FLinearColor& CallFunc_Array_Get_Item_109, bool K2Node_SwitchInteger_CmpSuccess_24, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_66, class FName CallFunc_Array_Get_Item_110, const struct FS_Color_Saturations& CallFunc_GetDataTableRowFromName_OutRow_66, bool CallFunc_GetDataTableRowFromName_ReturnValue_66, const struct FLinearColor& CallFunc_Array_Get_Item_111, bool K2Node_SwitchInteger_CmpSuccess_25, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_67, class FName CallFunc_Array_Get_Item_112, const struct FS_Color_Saturations& CallFunc_GetDataTableRowFromName_OutRow_67, bool CallFunc_GetDataTableRowFromName_ReturnValue_67, const struct FLinearColor& CallFunc_Array_Get_Item_113, bool K2Node_SwitchInteger_CmpSuccess_26, const struct FLinearColor& CallFunc_Array_Get_Item_114, int32 CallFunc_Conv_BoolToInt_ReturnValue_3, bool K2Node_SwitchInteger_CmpSuccess_27, const struct FLinearColor& CallFunc_Array_Get_Item_115, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_68, class FName CallFunc_Array_Get_Item_116, const struct FS_Rayleigh_Inverse& CallFunc_GetDataTableRowFromName_OutRow_68, bool CallFunc_GetDataTableRowFromName_ReturnValue_68, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_69, class FName CallFunc_Array_Get_Item_117, const struct FLinearColor& CallFunc_Array_Get_Item_118, const struct FS_Color_Table_Master& CallFunc_GetDataTableRowFromName_OutRow_69, bool CallFunc_GetDataTableRowFromName_ReturnValue_69, class UDataTable* CallFunc_Array_Get_Item_119, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_70, float CallFunc_GetFloatValue_ReturnValue_18, class FName CallFunc_Array_Get_Item_120, const struct FS_Color_Master& CallFunc_GetDataTableRowFromName_OutRow_70, bool CallFunc_GetDataTableRowFromName_ReturnValue_70, const struct FLinearColor& CallFunc_Array_Get_Item_121, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_1, int32 CallFunc_Conv_BoolToInt_ReturnValue_4, bool K2Node_SwitchInteger_CmpSuccess_28, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_71, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_72, class FName CallFunc_Array_Get_Item_122, const struct FS_Color_Table_Master& CallFunc_GetDataTableRowFromName_OutRow_71, bool CallFunc_GetDataTableRowFromName_ReturnValue_71, const struct FLinearColor& CallFunc_Array_Get_Item_123, class UDataTable* CallFunc_Array_Get_Item_124, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_73, float CallFunc_GetFloatValue_ReturnValue_19, class FName CallFunc_Array_Get_Item_125, const struct FS_Color_Master& CallFunc_GetDataTableRowFromName_OutRow_72, bool CallFunc_GetDataTableRowFromName_ReturnValue_72, int32 CallFunc_Conv_BoolToInt_ReturnValue_5, bool K2Node_SwitchInteger_CmpSuccess_29, class FName CallFunc_Array_Get_Item_126, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_74, const struct FS_Rayleigh_Inverse& CallFunc_GetDataTableRowFromName_OutRow_73, bool CallFunc_GetDataTableRowFromName_ReturnValue_73, class FName CallFunc_Array_Get_Item_127, const struct FS_Rayleigh_Inverse& CallFunc_GetDataTableRowFromName_OutRow_74, bool CallFunc_GetDataTableRowFromName_ReturnValue_74, const struct FLinearColor& CallFunc_Array_Get_Item_128, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_75, class FName CallFunc_Array_Get_Item_129, const struct FLinearColor& CallFunc_Array_Get_Item_130, const struct FS_Color_Table_Master& CallFunc_GetDataTableRowFromName_OutRow_75, bool CallFunc_GetDataTableRowFromName_ReturnValue_75, class UDataTable* CallFunc_Array_Get_Item_131, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_76, float CallFunc_GetFloatValue_ReturnValue_20, class FName CallFunc_Array_Get_Item_132, const struct FS_Color_Master& CallFunc_GetDataTableRowFromName_OutRow_76, bool CallFunc_GetDataTableRowFromName_ReturnValue_76, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_77, class FName CallFunc_Array_Get_Item_133, const struct FS_Rayleigh_Inverse& CallFunc_GetDataTableRowFromName_OutRow_77, bool CallFunc_GetDataTableRowFromName_ReturnValue_77, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_78, class FName CallFunc_Array_Get_Item_134, const struct FLinearColor& CallFunc_Array_Get_Item_135, const struct FS_Color_Table_Master& CallFunc_GetDataTableRowFromName_OutRow_78, bool CallFunc_GetDataTableRowFromName_ReturnValue_78, class UDataTable* CallFunc_Array_Get_Item_136, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_79, float CallFunc_GetFloatValue_ReturnValue_21, class FName CallFunc_Array_Get_Item_137, const struct FS_Color_Master& CallFunc_GetDataTableRowFromName_OutRow_79, bool CallFunc_GetDataTableRowFromName_ReturnValue_79, int32 CallFunc_Conv_BoolToInt_ReturnValue_6, bool K2Node_SwitchInteger_CmpSuccess_30, const struct FLinearColor& CallFunc_Array_Get_Item_138, int32 CallFunc_Conv_BoolToInt_ReturnValue_7, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_3, bool K2Node_SwitchInteger_CmpSuccess_31, int32 CallFunc_Conv_BoolToInt_ReturnValue_8, int32 CallFunc_Conv_BoolToInt_ReturnValue_9, bool K2Node_SwitchInteger_CmpSuccess_32, bool K2Node_SwitchInteger_CmpSuccess_33, float CallFunc_GetFloatValue_ReturnValue_22, int32 CallFunc_Conv_BoolToInt_ReturnValue_10, double CallFunc_Lerp_ReturnValue_22, bool K2Node_SwitchInteger_CmpSuccess_34, double CallFunc_Lerp_ReturnValue_23, bool K2Node_SwitchInteger_CmpSuccess_35, float CallFunc_GetFloatValue_ReturnValue_23, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_80, class FName CallFunc_Array_Get_Item_139, const struct FLinearColor& CallFunc_Array_Get_Item_140, const struct FS_Ring_Color& CallFunc_GetDataTableRowFromName_OutRow_80, bool CallFunc_GetDataTableRowFromName_ReturnValue_80, const struct FLinearColor& CallFunc_Array_Get_Item_141, const struct FLinearColor& CallFunc_Array_Get_Item_142, int32 CallFunc_Conv_BoolToInt_ReturnValue_11, int32 CallFunc_Conv_BoolToInt_ReturnValue_12, bool K2Node_SwitchInteger_CmpSuccess_36, bool K2Node_SwitchInteger_CmpSuccess_37, float CallFunc_GetFloatValue_ReturnValue_24, double CallFunc_Lerp_ReturnValue_24, const struct FLinearColor& CallFunc_Array_Get_Item_143, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_4, float CallFunc_GetFloatValue_ReturnValue_25, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_5, double CallFunc_MapRangeClamped_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1, float CallFunc_GetFloatValue_ReturnValue_26, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_2, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_NegateRotator_ReturnValue, float CallFunc_GetFloatValue_ReturnValue_27, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_3, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_4, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_5, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_6, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_7, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_8, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_9, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_10, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_11, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_12, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_13, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_14, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_15, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_16, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_17, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_18, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_19, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_20, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_21, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_22, int32 CallFunc_Conv_BoolToInt_ReturnValue_13, bool K2Node_SwitchInteger_CmpSuccess_38, int32 CallFunc_Conv_BoolToInt_ReturnValue_14, bool K2Node_SwitchInteger_CmpSuccess_39, float CallFunc_GetFloatValue_ReturnValue_28, float CallFunc_GetFloatValue_ReturnValue_29, float CallFunc_GetFloatValue_ReturnValue_30, float CallFunc_GetFloatValue_ReturnValue_31, float CallFunc_GetFloatValue_ReturnValue_32, float CallFunc_GetFloatValue_ReturnValue_33, float CallFunc_GetFloatValue_ReturnValue_34, bool K2Node_SwitchInteger_CmpSuccess_40, const struct FLinearColor& CallFunc_Array_Get_Item_144, int32 CallFunc_Conv_BoolToInt_ReturnValue_15, bool K2Node_SwitchInteger_CmpSuccess_41, bool K2Node_SwitchInteger_CmpSuccess_42, const struct FLinearColor& CallFunc_Array_Get_Item_145, int32 CallFunc_Conv_BoolToInt_ReturnValue_16, bool K2Node_SwitchInteger_CmpSuccess_43, const struct FLinearColor& CallFunc_Array_Get_Item_146, bool K2Node_SwitchInteger_CmpSuccess_44, int32 CallFunc_Conv_BoolToInt_ReturnValue_17, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess_45, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_10, bool CallFunc_IsValid_ReturnValue_11, bool CallFunc_IsValid_ReturnValue_12, bool CallFunc_IsValid_ReturnValue_13, bool CallFunc_IsValid_ReturnValue_14, bool CallFunc_IsValid_ReturnValue_15, bool CallFunc_IsValid_ReturnValue_16, bool CallFunc_IsValid_ReturnValue_17, bool CallFunc_IsValid_ReturnValue_18, bool CallFunc_IsValid_ReturnValue_19, bool CallFunc_IsValid_ReturnValue_20, bool CallFunc_IsValid_ReturnValue_21, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Lerp_Alpha_ImplicitCast, float CallFunc_SetRayleighScatteringScale_NewValue_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast_1, float CallFunc_SetMieScatteringScale_NewValue_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast_2, float CallFunc_SetMieAbsorptionScale_NewValue_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast_3, double CallFunc_Lerp_Alpha_ImplicitCast_4, double CallFunc_Lerp_Alpha_ImplicitCast_5, float K2Node_VariableSet_AerialPerspectiveStartDepth_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast_6, double CallFunc_Lerp_Alpha_ImplicitCast_7, double CallFunc_Lerp_Alpha_ImplicitCast_8, double CallFunc_Lerp_Alpha_ImplicitCast_9, double CallFunc_Lerp_Alpha_ImplicitCast_10, float CallFunc_GetFloatValue_InTime_ImplicitCast_1, double CallFunc_Lerp_Alpha_ImplicitCast_11, float CallFunc_GetFloatValue_InTime_ImplicitCast_2, double CallFunc_Lerp_Alpha_ImplicitCast_12, double CallFunc_Lerp_Alpha_ImplicitCast_13, float CallFunc_GetFloatValue_InTime_ImplicitCast_3, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1, float CallFunc_GetFloatValue_InTime_ImplicitCast_4, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_3, float CallFunc_GetFloatValue_InTime_ImplicitCast_5, double CallFunc_Lerp_Alpha_ImplicitCast_14, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_4, float CallFunc_GetFloatValue_InTime_ImplicitCast_6, double CallFunc_Lerp_Alpha_ImplicitCast_15, float CallFunc_SetHeightFogContribution_NewValue_ImplicitCast, float CallFunc_SetMieAbsorptionScale_NewValue_ImplicitCast_1, float K2Node_VariableSet_AerialPerspectiveStartDepth_ImplicitCast_1, float CallFunc_SetMieScatteringScale_NewValue_ImplicitCast_1, float CallFunc_SetRayleighScatteringScale_NewValue_ImplicitCast_1, float CallFunc_GetFloatValue_InTime_ImplicitCast_7, double CallFunc_Lerp_Alpha_ImplicitCast_16, float CallFunc_SetHeightFogContribution_NewValue_ImplicitCast_1, float CallFunc_SetHeightFogContribution_NewValue_ImplicitCast_2, double CallFunc_Lerp_Alpha_ImplicitCast_17, double CallFunc_Lerp_Alpha_ImplicitCast_18, float CallFunc_SetRayleighScatteringScale_NewValue_ImplicitCast_2, float CallFunc_SetMieScatteringScale_NewValue_ImplicitCast_2, double CallFunc_Lerp_Alpha_ImplicitCast_19, double CallFunc_Lerp_Alpha_ImplicitCast_20, float CallFunc_SetMieAbsorptionScale_NewValue_ImplicitCast_2, double CallFunc_Lerp_Alpha_ImplicitCast_21, float K2Node_VariableSet_AerialPerspectiveStartDepth_ImplicitCast_2, float CallFunc_SetAerialPespectiveViewDistanceScale_NewValue_ImplicitCast, float CallFunc_SetHeightFogContribution_NewValue_ImplicitCast_3, float CallFunc_SetAerialPespectiveViewDistanceScale_NewValue_ImplicitCast_1, float CallFunc_SetAerialPespectiveViewDistanceScale_NewValue_ImplicitCast_2, float CallFunc_SetAerialPespectiveViewDistanceScale_NewValue_ImplicitCast_3, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_5, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_6, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_7, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_8, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_9, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_10, float CallFunc_GetFloatValue_InTime_ImplicitCast_8, float CallFunc_GetFloatValue_InTime_ImplicitCast_9, float CallFunc_GetFloatValue_InTime_ImplicitCast_10, float CallFunc_GetFloatValue_InTime_ImplicitCast_11, float CallFunc_GetFloatValue_InTime_ImplicitCast_12, float CallFunc_GetFloatValue_InTime_ImplicitCast_13, float CallFunc_GetFloatValue_InTime_ImplicitCast_14, float CallFunc_GetFloatValue_InTime_ImplicitCast_15, float CallFunc_GetFloatValue_InTime_ImplicitCast_16, float CallFunc_GetFloatValue_InTime_ImplicitCast_17, float CallFunc_SetMieAbsorptionScale_NewValue_ImplicitCast_3, float K2Node_VariableSet_AerialPerspectiveStartDepth_ImplicitCast_3, float CallFunc_SetAerialPespectiveViewDistanceScale_NewValue_ImplicitCast_4, float CallFunc_SetMieScatteringScale_NewValue_ImplicitCast_3, float CallFunc_SetRayleighScatteringScale_NewValue_ImplicitCast_3, float CallFunc_GetFloatValue_InTime_ImplicitCast_18, float CallFunc_GetFloatValue_InTime_ImplicitCast_19, float CallFunc_GetFloatValue_InTime_ImplicitCast_20, float CallFunc_GetFloatValue_InTime_ImplicitCast_21, float CallFunc_GetFloatValue_InTime_ImplicitCast_22, double CallFunc_Lerp_Alpha_ImplicitCast_22, float CallFunc_SetHeightFogContribution_NewValue_ImplicitCast_4, float CallFunc_GetFloatValue_InTime_ImplicitCast_23, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_11, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_12, float CallFunc_GetFloatValue_InTime_ImplicitCast_24, double CallFunc_Lerp_Alpha_ImplicitCast_23, float CallFunc_SetMieScatteringScale_NewValue_ImplicitCast_4, float CallFunc_SetHeightFogContribution_NewValue_ImplicitCast_5, float CallFunc_SetMieAbsorptionScale_NewValue_ImplicitCast_4, float CallFunc_SetAerialPespectiveViewDistanceScale_NewValue_ImplicitCast_5, float CallFunc_SetMieAbsorptionScale_NewValue_ImplicitCast_5, float CallFunc_SetMieScatteringScale_NewValue_ImplicitCast_5, float CallFunc_SetRayleighScatteringScale_NewValue_ImplicitCast_4, float K2Node_VariableSet_AerialPerspectiveStartDepth_ImplicitCast_4, float CallFunc_SetRayleighScatteringScale_NewValue_ImplicitCast_5, float CallFunc_GetFloatValue_InTime_ImplicitCast_25, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_13, float CallFunc_MakeRotator_Roll_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast_26, float CallFunc_GetFloatValue_InTime_ImplicitCast_27, float CallFunc_GetFloatValue_InTime_ImplicitCast_28, float CallFunc_GetFloatValue_InTime_ImplicitCast_29, float CallFunc_GetFloatValue_InTime_ImplicitCast_30, float CallFunc_GetFloatValue_InTime_ImplicitCast_31, float CallFunc_GetFloatValue_InTime_ImplicitCast_32, float CallFunc_GetFloatValue_InTime_ImplicitCast_33, float CallFunc_GetFloatValue_InTime_ImplicitCast_34, float K2Node_VariableSet_AerialPerspectiveStartDepth_ImplicitCast_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Lighting_C", "Sky");

	Params::UTimeofDay_Lighting_C_Sky_Params Parms{};

	Parms.Nebula_Brightness = Nebula_Brightness;
	Parms.Ring_Brightness_Value = Ring_Brightness_Value;
	Parms.Atmosphere_Dawn_Dusk = Atmosphere_Dawn_Dusk;
	Parms.Sky_Angle_Z_Inv_Rotator = Sky_Angle_Z_Inv_Rotator;
	Parms.Fae_Magic_Brightness = Fae_Magic_Brightness;
	Parms.Stars_Brightness_Ultra_Clear = Stars_Brightness_Ultra_Clear;
	Parms.Stars_Brightness = Stars_Brightness;
	Parms.SkyLight_Lerp = SkyLight_Lerp;
	Parms.Sun_Material = Sun_Material;
	Parms.Nebula_Brightness_B_Array = Nebula_Brightness_B_Array;
	Parms.Nebula_Brightness_A_Array = Nebula_Brightness_A_Array;
	Parms.Atmosphere_Brightness = Atmosphere_Brightness;
	Parms.Atmosphere_Brightness_Zero = Atmosphere_Brightness_Zero;
	Parms.Moon_E_Array = Moon_E_Array;
	Parms.Moon_E = Moon_E;
	Parms.Moon_D_Array = Moon_D_Array;
	Parms.Moon_D = Moon_D;
	Parms.Moon_C_Array = Moon_C_Array;
	Parms.Moon_C = Moon_C;
	Parms.Moon_B_Array = Moon_B_Array;
	Parms.Moon_B = Moon_B;
	Parms.Moon_A_Array = Moon_A_Array;
	Parms.Moon_A = Moon_A;
	Parms.Nebula_Brightness_Zero = Nebula_Brightness_Zero;
	Parms.Nebula_Brightness_B = Nebula_Brightness_B;
	Parms.Nebula_Brightness_A = Nebula_Brightness_A;
	Parms.Ring_Brightness_Zero = Ring_Brightness_Zero;
	Parms.Ring_SpecBrightness = Ring_SpecBrightness;
	Parms.Ring_Brightness = Ring_Brightness;
	Parms.Moon_C_Light_Brightness = Moon_C_Light_Brightness;
	Parms.Moon_A_Light_Brightness = Moon_A_Light_Brightness;
	Parms.Atm_E_Color_Selection = Atm_E_Color_Selection;
	Parms.Moon_E_Color_3_Selection = Moon_E_Color_3_Selection;
	Parms.Moon_E_Color_2_Selection = Moon_E_Color_2_Selection;
	Parms.Moon_E_Color_1_Selection = Moon_E_Color_1_Selection;
	Parms.Atm_D_Color_Selection = Atm_D_Color_Selection;
	Parms.Moon_D_Color_3_Selection = Moon_D_Color_3_Selection;
	Parms.Moon_D_Color_2_Selection = Moon_D_Color_2_Selection;
	Parms.Moon_D_Color_1_Selection = Moon_D_Color_1_Selection;
	Parms.Atm_B_Color_Selection = Atm_B_Color_Selection;
	Parms.Moon_B_Color_3_Selection = Moon_B_Color_3_Selection;
	Parms.Moon_B_Color_2_Selection = Moon_B_Color_2_Selection;
	Parms.Moon_B_Color_1_Selection = Moon_B_Color_1_Selection;
	Parms.Atm_C_Color_Selection = Atm_C_Color_Selection;
	Parms.Moon_C_Color_3_Selection = Moon_C_Color_3_Selection;
	Parms.Moon_C_Color_2_Selection = Moon_C_Color_2_Selection;
	Parms.Moon_C_Color_1_Selection = Moon_C_Color_1_Selection;
	Parms.Atm_A_Color_Selection = Atm_A_Color_Selection;
	Parms.Moon_A_Color_3_Selection = Moon_A_Color_3_Selection;
	Parms.Moon_A_Color_2_Selection = Moon_A_Color_2_Selection;
	Parms.Moon_A_Color_1_Selection = Moon_A_Color_1_Selection;
	Parms.Sun_Color = Sun_Color;
	Parms.Sky_material = Sky_material;
	Parms.Sky_Luminance_Factor = Sky_Luminance_Factor;
	Parms.Mie_Scattering_Selection = Mie_Scattering_Selection;
	Parms.Rayleigh_Scattering_Selection = Rayleigh_Scattering_Selection;
	Parms.Cloud_Color = Cloud_Color;
	Parms.Star_Brightness_Array = Star_Brightness_Array;
	Parms.Sky_Angle_Z = Sky_Angle_Z;
	Parms.Sky_Angle_Y = Sky_Angle_Y;
	Parms.Sky_Sphere_Visibility = Sky_Sphere_Visibility;
	Parms.AdjustedTime_24Hour = AdjustedTime_24Hour;
	Parms.Sky_Atm_Height_Fog_Contribution = Sky_Atm_Height_Fog_Contribution;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_1 = CallFunc_GetDataTableRowNames_OutRowNames_1;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_2 = CallFunc_GetDataTableRowNames_OutRowNames_2;
	Parms.CallFunc_Lerp_ReturnValue_3 = CallFunc_Lerp_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_3 = CallFunc_GetDataTableRowNames_OutRowNames_3;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_4 = CallFunc_GetDataTableRowNames_OutRowNames_4;
	Parms.CallFunc_GetFloatValue_ReturnValue_1 = CallFunc_GetFloatValue_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_5 = CallFunc_GetDataTableRowNames_OutRowNames_5;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess_2 = K2Node_SwitchInteger_CmpSuccess_2;
	Parms.CallFunc_GetFloatValue_ReturnValue_2 = CallFunc_GetFloatValue_ReturnValue_2;
	Parms.CallFunc_GetFloatValue_ReturnValue_3 = CallFunc_GetFloatValue_ReturnValue_3;
	Parms.K2Node_SwitchInteger_CmpSuccess_3 = K2Node_SwitchInteger_CmpSuccess_3;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_6 = CallFunc_GetDataTableRowNames_OutRowNames_6;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_2 = CallFunc_GetDataTableRowFromName_OutRow_2;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_2 = CallFunc_GetDataTableRowFromName_ReturnValue_2;
	Parms.CallFunc_GetFloatValue_ReturnValue_4 = CallFunc_GetFloatValue_ReturnValue_4;
	Parms.CallFunc_Lerp_ReturnValue_4 = CallFunc_Lerp_ReturnValue_4;
	Parms.CallFunc_Lerp_ReturnValue_5 = CallFunc_Lerp_ReturnValue_5;
	Parms.CallFunc_GetFloatValue_ReturnValue_5 = CallFunc_GetFloatValue_ReturnValue_5;
	Parms.CallFunc_Lerp_ReturnValue_6 = CallFunc_Lerp_ReturnValue_6;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_7 = CallFunc_GetDataTableRowNames_OutRowNames_7;
	Parms.CallFunc_Conv_ByteToDouble_ReturnValue = CallFunc_Conv_ByteToDouble_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Conv_ByteToDouble_ReturnValue_1 = CallFunc_Conv_ByteToDouble_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_3 = CallFunc_GetDataTableRowFromName_OutRow_3;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_3 = CallFunc_GetDataTableRowFromName_ReturnValue_3;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_8 = CallFunc_GetDataTableRowNames_OutRowNames_8;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_4 = CallFunc_GetDataTableRowFromName_OutRow_4;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_4 = CallFunc_GetDataTableRowFromName_ReturnValue_4;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_9 = CallFunc_GetDataTableRowNames_OutRowNames_9;
	Parms.CallFunc_Conv_ByteToDouble_ReturnValue_2 = CallFunc_Conv_ByteToDouble_ReturnValue_2;
	Parms.CallFunc_FTrunc_ReturnValue_2 = CallFunc_FTrunc_ReturnValue_2;
	Parms.CallFunc_GetFloatValue_ReturnValue_6 = CallFunc_GetFloatValue_ReturnValue_6;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_10 = CallFunc_GetDataTableRowNames_OutRowNames_10;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_5 = CallFunc_GetDataTableRowFromName_OutRow_5;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_5 = CallFunc_GetDataTableRowFromName_ReturnValue_5;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_6 = CallFunc_GetDataTableRowFromName_OutRow_6;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_6 = CallFunc_GetDataTableRowFromName_ReturnValue_6;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_11 = CallFunc_GetDataTableRowNames_OutRowNames_11;
	Parms.CallFunc_Conv_ByteToDouble_ReturnValue_3 = CallFunc_Conv_ByteToDouble_ReturnValue_3;
	Parms.CallFunc_FTrunc_ReturnValue_3 = CallFunc_FTrunc_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_7 = CallFunc_GetDataTableRowFromName_OutRow_7;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_7 = CallFunc_GetDataTableRowFromName_ReturnValue_7;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_12 = CallFunc_GetDataTableRowNames_OutRowNames_12;
	Parms.CallFunc_Array_Get_Item_8 = CallFunc_Array_Get_Item_8;
	Parms.CallFunc_Array_Get_Item_9 = CallFunc_Array_Get_Item_9;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_8 = CallFunc_GetDataTableRowFromName_OutRow_8;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_8 = CallFunc_GetDataTableRowFromName_ReturnValue_8;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_9 = CallFunc_GetDataTableRowFromName_OutRow_9;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_9 = CallFunc_GetDataTableRowFromName_ReturnValue_9;
	Parms.CallFunc_Array_Get_Item_10 = CallFunc_Array_Get_Item_10;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_10 = CallFunc_GetDataTableRowFromName_OutRow_10;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_10 = CallFunc_GetDataTableRowFromName_ReturnValue_10;
	Parms.CallFunc_Array_Get_Item_11 = CallFunc_Array_Get_Item_11;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_11 = CallFunc_GetDataTableRowFromName_OutRow_11;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_11 = CallFunc_GetDataTableRowFromName_ReturnValue_11;
	Parms.CallFunc_Lerp_ReturnValue_7 = CallFunc_Lerp_ReturnValue_7;
	Parms.CallFunc_Lerp_ReturnValue_8 = CallFunc_Lerp_ReturnValue_8;
	Parms.CallFunc_Lerp_ReturnValue_9 = CallFunc_Lerp_ReturnValue_9;
	Parms.CallFunc_Lerp_ReturnValue_10 = CallFunc_Lerp_ReturnValue_10;
	Parms.CallFunc_Lerp_ReturnValue_11 = CallFunc_Lerp_ReturnValue_11;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_13 = CallFunc_GetDataTableRowNames_OutRowNames_13;
	Parms.CallFunc_Array_Get_Item_12 = CallFunc_Array_Get_Item_12;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_12 = CallFunc_GetDataTableRowFromName_OutRow_12;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_12 = CallFunc_GetDataTableRowFromName_ReturnValue_12;
	Parms.CallFunc_GetFloatValue_ReturnValue_7 = CallFunc_GetFloatValue_ReturnValue_7;
	Parms.CallFunc_Lerp_ReturnValue_12 = CallFunc_Lerp_ReturnValue_12;
	Parms.CallFunc_Array_Get_Item_13 = CallFunc_Array_Get_Item_13;
	Parms.CallFunc_Array_Get_Item_14 = CallFunc_Array_Get_Item_14;
	Parms.CallFunc_Array_Get_Item_15 = CallFunc_Array_Get_Item_15;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_14 = CallFunc_GetDataTableRowNames_OutRowNames_14;
	Parms.CallFunc_Array_Get_Item_16 = CallFunc_Array_Get_Item_16;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_13 = CallFunc_GetDataTableRowFromName_OutRow_13;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_13 = CallFunc_GetDataTableRowFromName_ReturnValue_13;
	Parms.CallFunc_Array_Get_Item_17 = CallFunc_Array_Get_Item_17;
	Parms.CallFunc_Lerp_ReturnValue_13 = CallFunc_Lerp_ReturnValue_13;
	Parms.CallFunc_Array_Get_Item_18 = CallFunc_Array_Get_Item_18;
	Parms.CallFunc_Array_Get_Item_19 = CallFunc_Array_Get_Item_19;
	Parms.CallFunc_Array_Get_Item_20 = CallFunc_Array_Get_Item_20;
	Parms.CallFunc_Array_Get_Item_21 = CallFunc_Array_Get_Item_21;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_1 = CallFunc_Conv_BoolToInt_ReturnValue_1;
	Parms.K2Node_SwitchInteger_CmpSuccess_4 = K2Node_SwitchInteger_CmpSuccess_4;
	Parms.CallFunc_Array_Get_Item_22 = CallFunc_Array_Get_Item_22;
	Parms.CallFunc_Array_Get_Item_23 = CallFunc_Array_Get_Item_23;
	Parms.CallFunc_Array_Get_Item_24 = CallFunc_Array_Get_Item_24;
	Parms.CallFunc_Lerp_ReturnValue_14 = CallFunc_Lerp_ReturnValue_14;
	Parms.CallFunc_Lerp_ReturnValue_15 = CallFunc_Lerp_ReturnValue_15;
	Parms.CallFunc_Lerp_ReturnValue_16 = CallFunc_Lerp_ReturnValue_16;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_15 = CallFunc_GetDataTableRowNames_OutRowNames_15;
	Parms.CallFunc_Array_Get_Item_25 = CallFunc_Array_Get_Item_25;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_14 = CallFunc_GetDataTableRowFromName_OutRow_14;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_14 = CallFunc_GetDataTableRowFromName_ReturnValue_14;
	Parms.CallFunc_Lerp_ReturnValue_17 = CallFunc_Lerp_ReturnValue_17;
	Parms.CallFunc_Array_Get_Item_26 = CallFunc_Array_Get_Item_26;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_16 = CallFunc_GetDataTableRowNames_OutRowNames_16;
	Parms.CallFunc_Array_Get_Item_27 = CallFunc_Array_Get_Item_27;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_15 = CallFunc_GetDataTableRowFromName_OutRow_15;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_15 = CallFunc_GetDataTableRowFromName_ReturnValue_15;
	Parms.CallFunc_Array_Get_Item_28 = CallFunc_Array_Get_Item_28;
	Parms.CallFunc_Array_Get_Item_29 = CallFunc_Array_Get_Item_29;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_16 = CallFunc_GetDataTableRowFromName_OutRow_16;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_16 = CallFunc_GetDataTableRowFromName_ReturnValue_16;
	Parms.CallFunc_Array_Get_Item_30 = CallFunc_Array_Get_Item_30;
	Parms.CallFunc_Lerp_ReturnValue_18 = CallFunc_Lerp_ReturnValue_18;
	Parms.CallFunc_Array_Get_Item_31 = CallFunc_Array_Get_Item_31;
	Parms.CallFunc_Array_Get_Item_32 = CallFunc_Array_Get_Item_32;
	Parms.CallFunc_Array_Get_Item_33 = CallFunc_Array_Get_Item_33;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_17 = CallFunc_GetDataTableRowNames_OutRowNames_17;
	Parms.CallFunc_Lerp_ReturnValue_19 = CallFunc_Lerp_ReturnValue_19;
	Parms.CallFunc_Lerp_ReturnValue_20 = CallFunc_Lerp_ReturnValue_20;
	Parms.CallFunc_Lerp_ReturnValue_21 = CallFunc_Lerp_ReturnValue_21;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_18 = CallFunc_GetDataTableRowNames_OutRowNames_18;
	Parms.CallFunc_Array_Get_Item_34 = CallFunc_Array_Get_Item_34;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_17 = CallFunc_GetDataTableRowFromName_OutRow_17;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_17 = CallFunc_GetDataTableRowFromName_ReturnValue_17;
	Parms.CallFunc_Array_Get_Item_35 = CallFunc_Array_Get_Item_35;
	Parms.CallFunc_Array_Get_Item_36 = CallFunc_Array_Get_Item_36;
	Parms.CallFunc_Array_Get_Item_37 = CallFunc_Array_Get_Item_37;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_18 = CallFunc_GetDataTableRowFromName_OutRow_18;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_18 = CallFunc_GetDataTableRowFromName_ReturnValue_18;
	Parms.CallFunc_Array_Get_Item_38 = CallFunc_Array_Get_Item_38;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item_39 = CallFunc_Array_Get_Item_39;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_19 = CallFunc_GetDataTableRowNames_OutRowNames_19;
	Parms.CallFunc_Array_Get_Item_40 = CallFunc_Array_Get_Item_40;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_20 = CallFunc_GetDataTableRowNames_OutRowNames_20;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_19 = CallFunc_GetDataTableRowFromName_OutRow_19;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_19 = CallFunc_GetDataTableRowFromName_ReturnValue_19;
	Parms.CallFunc_Array_Get_Item_41 = CallFunc_Array_Get_Item_41;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_20 = CallFunc_GetDataTableRowFromName_OutRow_20;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_20 = CallFunc_GetDataTableRowFromName_ReturnValue_20;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_Array_Get_Item_42 = CallFunc_Array_Get_Item_42;
	Parms.CallFunc_Array_Get_Item_43 = CallFunc_Array_Get_Item_43;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_21 = CallFunc_GetDataTableRowNames_OutRowNames_21;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.CallFunc_Array_Get_Item_44 = CallFunc_Array_Get_Item_44;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_21 = CallFunc_GetDataTableRowFromName_OutRow_21;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_21 = CallFunc_GetDataTableRowFromName_ReturnValue_21;
	Parms.K2Node_SwitchInteger_CmpSuccess_5 = K2Node_SwitchInteger_CmpSuccess_5;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_22 = CallFunc_GetDataTableRowNames_OutRowNames_22;
	Parms.CallFunc_Array_Get_Item_45 = CallFunc_Array_Get_Item_45;
	Parms.K2Node_MakeArray_Array_5 = K2Node_MakeArray_Array_5;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_22 = CallFunc_GetDataTableRowFromName_OutRow_22;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_22 = CallFunc_GetDataTableRowFromName_ReturnValue_22;
	Parms.K2Node_SwitchInteger_CmpSuccess_6 = K2Node_SwitchInteger_CmpSuccess_6;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_23 = CallFunc_GetDataTableRowNames_OutRowNames_23;
	Parms.CallFunc_Array_Get_Item_46 = CallFunc_Array_Get_Item_46;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_24 = CallFunc_GetDataTableRowNames_OutRowNames_24;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_23 = CallFunc_GetDataTableRowFromName_OutRow_23;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_23 = CallFunc_GetDataTableRowFromName_ReturnValue_23;
	Parms.CallFunc_Array_Get_Item_47 = CallFunc_Array_Get_Item_47;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_24 = CallFunc_GetDataTableRowFromName_OutRow_24;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_24 = CallFunc_GetDataTableRowFromName_ReturnValue_24;
	Parms.K2Node_SwitchInteger_CmpSuccess_7 = K2Node_SwitchInteger_CmpSuccess_7;
	Parms.CallFunc_Array_Get_Item_48 = CallFunc_Array_Get_Item_48;
	Parms.K2Node_MakeArray_Array_6 = K2Node_MakeArray_Array_6;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_25 = CallFunc_GetDataTableRowNames_OutRowNames_25;
	Parms.CallFunc_Array_Get_Item_49 = CallFunc_Array_Get_Item_49;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_25 = CallFunc_GetDataTableRowFromName_OutRow_25;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_25 = CallFunc_GetDataTableRowFromName_ReturnValue_25;
	Parms.CallFunc_Array_Get_Item_50 = CallFunc_Array_Get_Item_50;
	Parms.K2Node_SwitchInteger_CmpSuccess_8 = K2Node_SwitchInteger_CmpSuccess_8;
	Parms.K2Node_MakeArray_Array_7 = K2Node_MakeArray_Array_7;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_26 = CallFunc_GetDataTableRowNames_OutRowNames_26;
	Parms.CallFunc_Array_Get_Item_51 = CallFunc_Array_Get_Item_51;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_27 = CallFunc_GetDataTableRowNames_OutRowNames_27;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_26 = CallFunc_GetDataTableRowFromName_OutRow_26;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_26 = CallFunc_GetDataTableRowFromName_ReturnValue_26;
	Parms.CallFunc_Array_Get_Item_52 = CallFunc_Array_Get_Item_52;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_27 = CallFunc_GetDataTableRowFromName_OutRow_27;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_27 = CallFunc_GetDataTableRowFromName_ReturnValue_27;
	Parms.CallFunc_Array_Get_Item_53 = CallFunc_Array_Get_Item_53;
	Parms.CallFunc_Array_Get_Item_54 = CallFunc_Array_Get_Item_54;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_28 = CallFunc_GetDataTableRowNames_OutRowNames_28;
	Parms.CallFunc_Array_Get_Item_55 = CallFunc_Array_Get_Item_55;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_28 = CallFunc_GetDataTableRowFromName_OutRow_28;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_28 = CallFunc_GetDataTableRowFromName_ReturnValue_28;
	Parms.K2Node_SwitchInteger_CmpSuccess_9 = K2Node_SwitchInteger_CmpSuccess_9;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_29 = CallFunc_GetDataTableRowNames_OutRowNames_29;
	Parms.CallFunc_Array_Get_Item_56 = CallFunc_Array_Get_Item_56;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_29 = CallFunc_GetDataTableRowFromName_OutRow_29;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_29 = CallFunc_GetDataTableRowFromName_ReturnValue_29;
	Parms.K2Node_SwitchInteger_CmpSuccess_10 = K2Node_SwitchInteger_CmpSuccess_10;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_30 = CallFunc_GetDataTableRowNames_OutRowNames_30;
	Parms.CallFunc_Array_Get_Item_57 = CallFunc_Array_Get_Item_57;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_31 = CallFunc_GetDataTableRowNames_OutRowNames_31;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_30 = CallFunc_GetDataTableRowFromName_OutRow_30;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_30 = CallFunc_GetDataTableRowFromName_ReturnValue_30;
	Parms.CallFunc_Array_Get_Item_58 = CallFunc_Array_Get_Item_58;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_31 = CallFunc_GetDataTableRowFromName_OutRow_31;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_31 = CallFunc_GetDataTableRowFromName_ReturnValue_31;
	Parms.K2Node_SwitchInteger_CmpSuccess_11 = K2Node_SwitchInteger_CmpSuccess_11;
	Parms.CallFunc_Array_Get_Item_59 = CallFunc_Array_Get_Item_59;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_32 = CallFunc_GetDataTableRowNames_OutRowNames_32;
	Parms.CallFunc_Array_Get_Item_60 = CallFunc_Array_Get_Item_60;
	Parms.CallFunc_Array_Get_Item_61 = CallFunc_Array_Get_Item_61;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_32 = CallFunc_GetDataTableRowFromName_OutRow_32;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_32 = CallFunc_GetDataTableRowFromName_ReturnValue_32;
	Parms.K2Node_SwitchInteger_CmpSuccess_12 = K2Node_SwitchInteger_CmpSuccess_12;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_33 = CallFunc_GetDataTableRowNames_OutRowNames_33;
	Parms.CallFunc_Array_Get_Item_62 = CallFunc_Array_Get_Item_62;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_34 = CallFunc_GetDataTableRowNames_OutRowNames_34;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_33 = CallFunc_GetDataTableRowFromName_OutRow_33;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_33 = CallFunc_GetDataTableRowFromName_ReturnValue_33;
	Parms.CallFunc_Array_Get_Item_63 = CallFunc_Array_Get_Item_63;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_34 = CallFunc_GetDataTableRowFromName_OutRow_34;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_34 = CallFunc_GetDataTableRowFromName_ReturnValue_34;
	Parms.CallFunc_Array_Get_Item_64 = CallFunc_Array_Get_Item_64;
	Parms.CallFunc_Array_Get_Item_65 = CallFunc_Array_Get_Item_65;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_35 = CallFunc_GetDataTableRowNames_OutRowNames_35;
	Parms.CallFunc_Array_Get_Item_66 = CallFunc_Array_Get_Item_66;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_35 = CallFunc_GetDataTableRowFromName_OutRow_35;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_35 = CallFunc_GetDataTableRowFromName_ReturnValue_35;
	Parms.K2Node_SwitchInteger_CmpSuccess_13 = K2Node_SwitchInteger_CmpSuccess_13;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_36 = CallFunc_GetDataTableRowNames_OutRowNames_36;
	Parms.CallFunc_Array_Get_Item_67 = CallFunc_Array_Get_Item_67;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_36 = CallFunc_GetDataTableRowFromName_OutRow_36;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_36 = CallFunc_GetDataTableRowFromName_ReturnValue_36;
	Parms.K2Node_SwitchInteger_CmpSuccess_14 = K2Node_SwitchInteger_CmpSuccess_14;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_37 = CallFunc_GetDataTableRowNames_OutRowNames_37;
	Parms.CallFunc_Array_Get_Item_68 = CallFunc_Array_Get_Item_68;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_38 = CallFunc_GetDataTableRowNames_OutRowNames_38;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_37 = CallFunc_GetDataTableRowFromName_OutRow_37;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_37 = CallFunc_GetDataTableRowFromName_ReturnValue_37;
	Parms.CallFunc_Array_Get_Item_69 = CallFunc_Array_Get_Item_69;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_38 = CallFunc_GetDataTableRowFromName_OutRow_38;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_38 = CallFunc_GetDataTableRowFromName_ReturnValue_38;
	Parms.K2Node_SwitchInteger_CmpSuccess_15 = K2Node_SwitchInteger_CmpSuccess_15;
	Parms.CallFunc_Array_Get_Item_70 = CallFunc_Array_Get_Item_70;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_39 = CallFunc_GetDataTableRowNames_OutRowNames_39;
	Parms.CallFunc_Array_Get_Item_71 = CallFunc_Array_Get_Item_71;
	Parms.CallFunc_Array_Get_Item_72 = CallFunc_Array_Get_Item_72;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_39 = CallFunc_GetDataTableRowFromName_OutRow_39;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_39 = CallFunc_GetDataTableRowFromName_ReturnValue_39;
	Parms.K2Node_SwitchInteger_CmpSuccess_16 = K2Node_SwitchInteger_CmpSuccess_16;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_40 = CallFunc_GetDataTableRowNames_OutRowNames_40;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_41 = CallFunc_GetDataTableRowNames_OutRowNames_41;
	Parms.CallFunc_Array_Get_Item_73 = CallFunc_Array_Get_Item_73;
	Parms.CallFunc_Array_Get_Item_74 = CallFunc_Array_Get_Item_74;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_40 = CallFunc_GetDataTableRowFromName_OutRow_40;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_40 = CallFunc_GetDataTableRowFromName_ReturnValue_40;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_41 = CallFunc_GetDataTableRowFromName_OutRow_41;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_41 = CallFunc_GetDataTableRowFromName_ReturnValue_41;
	Parms.CallFunc_Array_Get_Item_75 = CallFunc_Array_Get_Item_75;
	Parms.CallFunc_Array_Get_Item_76 = CallFunc_Array_Get_Item_76;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_42 = CallFunc_GetDataTableRowNames_OutRowNames_42;
	Parms.CallFunc_Array_Get_Item_77 = CallFunc_Array_Get_Item_77;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_42 = CallFunc_GetDataTableRowFromName_OutRow_42;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_42 = CallFunc_GetDataTableRowFromName_ReturnValue_42;
	Parms.K2Node_SwitchInteger_CmpSuccess_17 = K2Node_SwitchInteger_CmpSuccess_17;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_43 = CallFunc_GetDataTableRowNames_OutRowNames_43;
	Parms.CallFunc_Array_Get_Item_78 = CallFunc_Array_Get_Item_78;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_43 = CallFunc_GetDataTableRowFromName_OutRow_43;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_43 = CallFunc_GetDataTableRowFromName_ReturnValue_43;
	Parms.K2Node_SwitchInteger_CmpSuccess_18 = K2Node_SwitchInteger_CmpSuccess_18;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_44 = CallFunc_GetDataTableRowNames_OutRowNames_44;
	Parms.CallFunc_Array_Get_Item_79 = CallFunc_Array_Get_Item_79;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_45 = CallFunc_GetDataTableRowNames_OutRowNames_45;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_44 = CallFunc_GetDataTableRowFromName_OutRow_44;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_44 = CallFunc_GetDataTableRowFromName_ReturnValue_44;
	Parms.CallFunc_Array_Get_Item_80 = CallFunc_Array_Get_Item_80;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_45 = CallFunc_GetDataTableRowFromName_OutRow_45;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_45 = CallFunc_GetDataTableRowFromName_ReturnValue_45;
	Parms.K2Node_SwitchInteger_CmpSuccess_19 = K2Node_SwitchInteger_CmpSuccess_19;
	Parms.CallFunc_Array_Get_Item_81 = CallFunc_Array_Get_Item_81;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_46 = CallFunc_GetDataTableRowNames_OutRowNames_46;
	Parms.CallFunc_Array_Get_Item_82 = CallFunc_Array_Get_Item_82;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_46 = CallFunc_GetDataTableRowFromName_OutRow_46;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_46 = CallFunc_GetDataTableRowFromName_ReturnValue_46;
	Parms.K2Node_SwitchInteger_CmpSuccess_20 = K2Node_SwitchInteger_CmpSuccess_20;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_47 = CallFunc_GetDataTableRowNames_OutRowNames_47;
	Parms.CallFunc_Array_Get_Item_83 = CallFunc_Array_Get_Item_83;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_47 = CallFunc_GetDataTableRowFromName_OutRow_47;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_47 = CallFunc_GetDataTableRowFromName_ReturnValue_47;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Array_Get_Item_84 = CallFunc_Array_Get_Item_84;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_48 = CallFunc_GetDataTableRowNames_OutRowNames_48;
	Parms.CallFunc_Array_Get_Item_85 = CallFunc_Array_Get_Item_85;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_48 = CallFunc_GetDataTableRowFromName_OutRow_48;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_48 = CallFunc_GetDataTableRowFromName_ReturnValue_48;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_1 = CallFunc_Conv_IntToDouble_ReturnValue_1;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_2 = CallFunc_Conv_IntToDouble_ReturnValue_2;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_3 = CallFunc_Conv_IntToDouble_ReturnValue_3;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_49 = CallFunc_GetDataTableRowNames_OutRowNames_49;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_50 = CallFunc_GetDataTableRowNames_OutRowNames_50;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_51 = CallFunc_GetDataTableRowNames_OutRowNames_51;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_52 = CallFunc_GetDataTableRowNames_OutRowNames_52;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_53 = CallFunc_GetDataTableRowNames_OutRowNames_53;
	Parms.CallFunc_Array_Get_Item_86 = CallFunc_Array_Get_Item_86;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_49 = CallFunc_GetDataTableRowFromName_OutRow_49;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_49 = CallFunc_GetDataTableRowFromName_ReturnValue_49;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_54 = CallFunc_GetDataTableRowNames_OutRowNames_54;
	Parms.CallFunc_Array_Get_Item_87 = CallFunc_Array_Get_Item_87;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_50 = CallFunc_GetDataTableRowFromName_OutRow_50;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_50 = CallFunc_GetDataTableRowFromName_ReturnValue_50;
	Parms.CallFunc_Array_Get_Item_88 = CallFunc_Array_Get_Item_88;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_51 = CallFunc_GetDataTableRowFromName_OutRow_51;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_51 = CallFunc_GetDataTableRowFromName_ReturnValue_51;
	Parms.CallFunc_Array_Get_Item_89 = CallFunc_Array_Get_Item_89;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_55 = CallFunc_GetDataTableRowNames_OutRowNames_55;
	Parms.CallFunc_Array_Get_Item_90 = CallFunc_Array_Get_Item_90;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_52 = CallFunc_GetDataTableRowFromName_OutRow_52;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_52 = CallFunc_GetDataTableRowFromName_ReturnValue_52;
	Parms.CallFunc_Array_Get_Item_91 = CallFunc_Array_Get_Item_91;
	Parms.CallFunc_Array_Get_Item_92 = CallFunc_Array_Get_Item_92;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_53 = CallFunc_GetDataTableRowFromName_OutRow_53;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_53 = CallFunc_GetDataTableRowFromName_ReturnValue_53;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_54 = CallFunc_GetDataTableRowFromName_OutRow_54;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_54 = CallFunc_GetDataTableRowFromName_ReturnValue_54;
	Parms.CallFunc_Array_Get_Item_93 = CallFunc_Array_Get_Item_93;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_55 = CallFunc_GetDataTableRowFromName_OutRow_55;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_55 = CallFunc_GetDataTableRowFromName_ReturnValue_55;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_56 = CallFunc_GetDataTableRowNames_OutRowNames_56;
	Parms.CallFunc_Array_Get_Item_94 = CallFunc_Array_Get_Item_94;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_56 = CallFunc_GetDataTableRowFromName_OutRow_56;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_56 = CallFunc_GetDataTableRowFromName_ReturnValue_56;
	Parms.K2Node_SwitchInteger_CmpSuccess_21 = K2Node_SwitchInteger_CmpSuccess_21;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_57 = CallFunc_GetDataTableRowNames_OutRowNames_57;
	Parms.CallFunc_Array_Get_Item_95 = CallFunc_Array_Get_Item_95;
	Parms.K2Node_SwitchInteger_CmpSuccess_22 = K2Node_SwitchInteger_CmpSuccess_22;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_57 = CallFunc_GetDataTableRowFromName_OutRow_57;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_57 = CallFunc_GetDataTableRowFromName_ReturnValue_57;
	Parms.CallFunc_GetFloatValue_ReturnValue_8 = CallFunc_GetFloatValue_ReturnValue_8;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_2 = CallFunc_Conv_BoolToInt_ReturnValue_2;
	Parms.K2Node_SwitchInteger_CmpSuccess_23 = K2Node_SwitchInteger_CmpSuccess_23;
	Parms.CallFunc_GetFloatValue_ReturnValue_9 = CallFunc_GetFloatValue_ReturnValue_9;
	Parms.CallFunc_GetFloatValue_ReturnValue_10 = CallFunc_GetFloatValue_ReturnValue_10;
	Parms.CallFunc_GetFloatValue_ReturnValue_11 = CallFunc_GetFloatValue_ReturnValue_11;
	Parms.CallFunc_GetFloatValue_ReturnValue_12 = CallFunc_GetFloatValue_ReturnValue_12;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_58 = CallFunc_GetDataTableRowNames_OutRowNames_58;
	Parms.CallFunc_Array_Get_Item_96 = CallFunc_Array_Get_Item_96;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_58 = CallFunc_GetDataTableRowFromName_OutRow_58;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_58 = CallFunc_GetDataTableRowFromName_ReturnValue_58;
	Parms.CallFunc_GetFloatValue_ReturnValue_13 = CallFunc_GetFloatValue_ReturnValue_13;
	Parms.CallFunc_GetFloatValue_ReturnValue_14 = CallFunc_GetFloatValue_ReturnValue_14;
	Parms.CallFunc_GetFloatValue_ReturnValue_15 = CallFunc_GetFloatValue_ReturnValue_15;
	Parms.CallFunc_GetFloatValue_ReturnValue_16 = CallFunc_GetFloatValue_ReturnValue_16;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_59 = CallFunc_GetDataTableRowNames_OutRowNames_59;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_60 = CallFunc_GetDataTableRowNames_OutRowNames_60;
	Parms.CallFunc_Array_Get_Item_97 = CallFunc_Array_Get_Item_97;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_61 = CallFunc_GetDataTableRowNames_OutRowNames_61;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_59 = CallFunc_GetDataTableRowFromName_OutRow_59;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_59 = CallFunc_GetDataTableRowFromName_ReturnValue_59;
	Parms.CallFunc_Array_Get_Item_98 = CallFunc_Array_Get_Item_98;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_60 = CallFunc_GetDataTableRowFromName_OutRow_60;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_60 = CallFunc_GetDataTableRowFromName_ReturnValue_60;
	Parms.CallFunc_Array_Get_Item_99 = CallFunc_Array_Get_Item_99;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_62 = CallFunc_GetDataTableRowNames_OutRowNames_62;
	Parms.CallFunc_Array_Get_Item_100 = CallFunc_Array_Get_Item_100;
	Parms.CallFunc_Array_Get_Item_101 = CallFunc_Array_Get_Item_101;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_63 = CallFunc_GetDataTableRowNames_OutRowNames_63;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_61 = CallFunc_GetDataTableRowFromName_OutRow_61;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_61 = CallFunc_GetDataTableRowFromName_ReturnValue_61;
	Parms.CallFunc_Array_Get_Item_102 = CallFunc_Array_Get_Item_102;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_62 = CallFunc_GetDataTableRowFromName_OutRow_62;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_62 = CallFunc_GetDataTableRowFromName_ReturnValue_62;
	Parms.CallFunc_Array_Get_Item_103 = CallFunc_Array_Get_Item_103;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_63 = CallFunc_GetDataTableRowFromName_OutRow_63;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_63 = CallFunc_GetDataTableRowFromName_ReturnValue_63;
	Parms.CallFunc_Array_Get_Item_104 = CallFunc_Array_Get_Item_104;
	Parms.CallFunc_Array_Get_Item_105 = CallFunc_Array_Get_Item_105;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_64 = CallFunc_GetDataTableRowNames_OutRowNames_64;
	Parms.CallFunc_GetFloatValue_ReturnValue_17 = CallFunc_GetFloatValue_ReturnValue_17;
	Parms.CallFunc_Array_Get_Item_106 = CallFunc_Array_Get_Item_106;
	Parms.CallFunc_LinearColorLerp_ReturnValue = CallFunc_LinearColorLerp_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_64 = CallFunc_GetDataTableRowFromName_OutRow_64;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_64 = CallFunc_GetDataTableRowFromName_ReturnValue_64;
	Parms.CallFunc_Array_Get_Item_107 = CallFunc_Array_Get_Item_107;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_65 = CallFunc_GetDataTableRowNames_OutRowNames_65;
	Parms.CallFunc_Array_Get_Item_108 = CallFunc_Array_Get_Item_108;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_65 = CallFunc_GetDataTableRowFromName_OutRow_65;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_65 = CallFunc_GetDataTableRowFromName_ReturnValue_65;
	Parms.CallFunc_Array_Get_Item_109 = CallFunc_Array_Get_Item_109;
	Parms.K2Node_SwitchInteger_CmpSuccess_24 = K2Node_SwitchInteger_CmpSuccess_24;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_66 = CallFunc_GetDataTableRowNames_OutRowNames_66;
	Parms.CallFunc_Array_Get_Item_110 = CallFunc_Array_Get_Item_110;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_66 = CallFunc_GetDataTableRowFromName_OutRow_66;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_66 = CallFunc_GetDataTableRowFromName_ReturnValue_66;
	Parms.CallFunc_Array_Get_Item_111 = CallFunc_Array_Get_Item_111;
	Parms.K2Node_SwitchInteger_CmpSuccess_25 = K2Node_SwitchInteger_CmpSuccess_25;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_67 = CallFunc_GetDataTableRowNames_OutRowNames_67;
	Parms.CallFunc_Array_Get_Item_112 = CallFunc_Array_Get_Item_112;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_67 = CallFunc_GetDataTableRowFromName_OutRow_67;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_67 = CallFunc_GetDataTableRowFromName_ReturnValue_67;
	Parms.CallFunc_Array_Get_Item_113 = CallFunc_Array_Get_Item_113;
	Parms.K2Node_SwitchInteger_CmpSuccess_26 = K2Node_SwitchInteger_CmpSuccess_26;
	Parms.CallFunc_Array_Get_Item_114 = CallFunc_Array_Get_Item_114;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_3 = CallFunc_Conv_BoolToInt_ReturnValue_3;
	Parms.K2Node_SwitchInteger_CmpSuccess_27 = K2Node_SwitchInteger_CmpSuccess_27;
	Parms.CallFunc_Array_Get_Item_115 = CallFunc_Array_Get_Item_115;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_68 = CallFunc_GetDataTableRowNames_OutRowNames_68;
	Parms.CallFunc_Array_Get_Item_116 = CallFunc_Array_Get_Item_116;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_68 = CallFunc_GetDataTableRowFromName_OutRow_68;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_68 = CallFunc_GetDataTableRowFromName_ReturnValue_68;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_69 = CallFunc_GetDataTableRowNames_OutRowNames_69;
	Parms.CallFunc_Array_Get_Item_117 = CallFunc_Array_Get_Item_117;
	Parms.CallFunc_Array_Get_Item_118 = CallFunc_Array_Get_Item_118;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_69 = CallFunc_GetDataTableRowFromName_OutRow_69;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_69 = CallFunc_GetDataTableRowFromName_ReturnValue_69;
	Parms.CallFunc_Array_Get_Item_119 = CallFunc_Array_Get_Item_119;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_70 = CallFunc_GetDataTableRowNames_OutRowNames_70;
	Parms.CallFunc_GetFloatValue_ReturnValue_18 = CallFunc_GetFloatValue_ReturnValue_18;
	Parms.CallFunc_Array_Get_Item_120 = CallFunc_Array_Get_Item_120;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_70 = CallFunc_GetDataTableRowFromName_OutRow_70;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_70 = CallFunc_GetDataTableRowFromName_ReturnValue_70;
	Parms.CallFunc_Array_Get_Item_121 = CallFunc_Array_Get_Item_121;
	Parms.CallFunc_LinearColorLerp_ReturnValue_1 = CallFunc_LinearColorLerp_ReturnValue_1;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_4 = CallFunc_Conv_BoolToInt_ReturnValue_4;
	Parms.K2Node_SwitchInteger_CmpSuccess_28 = K2Node_SwitchInteger_CmpSuccess_28;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_71 = CallFunc_GetDataTableRowNames_OutRowNames_71;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_72 = CallFunc_GetDataTableRowNames_OutRowNames_72;
	Parms.CallFunc_Array_Get_Item_122 = CallFunc_Array_Get_Item_122;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_71 = CallFunc_GetDataTableRowFromName_OutRow_71;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_71 = CallFunc_GetDataTableRowFromName_ReturnValue_71;
	Parms.CallFunc_Array_Get_Item_123 = CallFunc_Array_Get_Item_123;
	Parms.CallFunc_Array_Get_Item_124 = CallFunc_Array_Get_Item_124;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_73 = CallFunc_GetDataTableRowNames_OutRowNames_73;
	Parms.CallFunc_GetFloatValue_ReturnValue_19 = CallFunc_GetFloatValue_ReturnValue_19;
	Parms.CallFunc_Array_Get_Item_125 = CallFunc_Array_Get_Item_125;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_72 = CallFunc_GetDataTableRowFromName_OutRow_72;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_72 = CallFunc_GetDataTableRowFromName_ReturnValue_72;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_5 = CallFunc_Conv_BoolToInt_ReturnValue_5;
	Parms.K2Node_SwitchInteger_CmpSuccess_29 = K2Node_SwitchInteger_CmpSuccess_29;
	Parms.CallFunc_Array_Get_Item_126 = CallFunc_Array_Get_Item_126;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_74 = CallFunc_GetDataTableRowNames_OutRowNames_74;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_73 = CallFunc_GetDataTableRowFromName_OutRow_73;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_73 = CallFunc_GetDataTableRowFromName_ReturnValue_73;
	Parms.CallFunc_Array_Get_Item_127 = CallFunc_Array_Get_Item_127;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_74 = CallFunc_GetDataTableRowFromName_OutRow_74;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_74 = CallFunc_GetDataTableRowFromName_ReturnValue_74;
	Parms.CallFunc_Array_Get_Item_128 = CallFunc_Array_Get_Item_128;
	Parms.CallFunc_LinearColorLerp_ReturnValue_2 = CallFunc_LinearColorLerp_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_75 = CallFunc_GetDataTableRowNames_OutRowNames_75;
	Parms.CallFunc_Array_Get_Item_129 = CallFunc_Array_Get_Item_129;
	Parms.CallFunc_Array_Get_Item_130 = CallFunc_Array_Get_Item_130;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_75 = CallFunc_GetDataTableRowFromName_OutRow_75;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_75 = CallFunc_GetDataTableRowFromName_ReturnValue_75;
	Parms.CallFunc_Array_Get_Item_131 = CallFunc_Array_Get_Item_131;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_76 = CallFunc_GetDataTableRowNames_OutRowNames_76;
	Parms.CallFunc_GetFloatValue_ReturnValue_20 = CallFunc_GetFloatValue_ReturnValue_20;
	Parms.CallFunc_Array_Get_Item_132 = CallFunc_Array_Get_Item_132;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_76 = CallFunc_GetDataTableRowFromName_OutRow_76;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_76 = CallFunc_GetDataTableRowFromName_ReturnValue_76;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_77 = CallFunc_GetDataTableRowNames_OutRowNames_77;
	Parms.CallFunc_Array_Get_Item_133 = CallFunc_Array_Get_Item_133;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_77 = CallFunc_GetDataTableRowFromName_OutRow_77;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_77 = CallFunc_GetDataTableRowFromName_ReturnValue_77;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_78 = CallFunc_GetDataTableRowNames_OutRowNames_78;
	Parms.CallFunc_Array_Get_Item_134 = CallFunc_Array_Get_Item_134;
	Parms.CallFunc_Array_Get_Item_135 = CallFunc_Array_Get_Item_135;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_78 = CallFunc_GetDataTableRowFromName_OutRow_78;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_78 = CallFunc_GetDataTableRowFromName_ReturnValue_78;
	Parms.CallFunc_Array_Get_Item_136 = CallFunc_Array_Get_Item_136;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_79 = CallFunc_GetDataTableRowNames_OutRowNames_79;
	Parms.CallFunc_GetFloatValue_ReturnValue_21 = CallFunc_GetFloatValue_ReturnValue_21;
	Parms.CallFunc_Array_Get_Item_137 = CallFunc_Array_Get_Item_137;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_79 = CallFunc_GetDataTableRowFromName_OutRow_79;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_79 = CallFunc_GetDataTableRowFromName_ReturnValue_79;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_6 = CallFunc_Conv_BoolToInt_ReturnValue_6;
	Parms.K2Node_SwitchInteger_CmpSuccess_30 = K2Node_SwitchInteger_CmpSuccess_30;
	Parms.CallFunc_Array_Get_Item_138 = CallFunc_Array_Get_Item_138;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_7 = CallFunc_Conv_BoolToInt_ReturnValue_7;
	Parms.CallFunc_LinearColorLerp_ReturnValue_3 = CallFunc_LinearColorLerp_ReturnValue_3;
	Parms.K2Node_SwitchInteger_CmpSuccess_31 = K2Node_SwitchInteger_CmpSuccess_31;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_8 = CallFunc_Conv_BoolToInt_ReturnValue_8;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_9 = CallFunc_Conv_BoolToInt_ReturnValue_9;
	Parms.K2Node_SwitchInteger_CmpSuccess_32 = K2Node_SwitchInteger_CmpSuccess_32;
	Parms.K2Node_SwitchInteger_CmpSuccess_33 = K2Node_SwitchInteger_CmpSuccess_33;
	Parms.CallFunc_GetFloatValue_ReturnValue_22 = CallFunc_GetFloatValue_ReturnValue_22;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_10 = CallFunc_Conv_BoolToInt_ReturnValue_10;
	Parms.CallFunc_Lerp_ReturnValue_22 = CallFunc_Lerp_ReturnValue_22;
	Parms.K2Node_SwitchInteger_CmpSuccess_34 = K2Node_SwitchInteger_CmpSuccess_34;
	Parms.CallFunc_Lerp_ReturnValue_23 = CallFunc_Lerp_ReturnValue_23;
	Parms.K2Node_SwitchInteger_CmpSuccess_35 = K2Node_SwitchInteger_CmpSuccess_35;
	Parms.CallFunc_GetFloatValue_ReturnValue_23 = CallFunc_GetFloatValue_ReturnValue_23;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_80 = CallFunc_GetDataTableRowNames_OutRowNames_80;
	Parms.CallFunc_Array_Get_Item_139 = CallFunc_Array_Get_Item_139;
	Parms.CallFunc_Array_Get_Item_140 = CallFunc_Array_Get_Item_140;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_80 = CallFunc_GetDataTableRowFromName_OutRow_80;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_80 = CallFunc_GetDataTableRowFromName_ReturnValue_80;
	Parms.CallFunc_Array_Get_Item_141 = CallFunc_Array_Get_Item_141;
	Parms.CallFunc_Array_Get_Item_142 = CallFunc_Array_Get_Item_142;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_11 = CallFunc_Conv_BoolToInt_ReturnValue_11;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_12 = CallFunc_Conv_BoolToInt_ReturnValue_12;
	Parms.K2Node_SwitchInteger_CmpSuccess_36 = K2Node_SwitchInteger_CmpSuccess_36;
	Parms.K2Node_SwitchInteger_CmpSuccess_37 = K2Node_SwitchInteger_CmpSuccess_37;
	Parms.CallFunc_GetFloatValue_ReturnValue_24 = CallFunc_GetFloatValue_ReturnValue_24;
	Parms.CallFunc_Lerp_ReturnValue_24 = CallFunc_Lerp_ReturnValue_24;
	Parms.CallFunc_Array_Get_Item_143 = CallFunc_Array_Get_Item_143;
	Parms.CallFunc_LinearColorLerp_ReturnValue_4 = CallFunc_LinearColorLerp_ReturnValue_4;
	Parms.CallFunc_GetFloatValue_ReturnValue_25 = CallFunc_GetFloatValue_ReturnValue_25;
	Parms.CallFunc_LinearColorLerp_ReturnValue_5 = CallFunc_LinearColorLerp_ReturnValue_5;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult_1 = CallFunc_K2_SetRelativeRotation_SweepHitResult_1;
	Parms.CallFunc_GetFloatValue_ReturnValue_26 = CallFunc_GetFloatValue_ReturnValue_26;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult_2 = CallFunc_K2_SetRelativeRotation_SweepHitResult_2;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_NegateRotator_ReturnValue = CallFunc_NegateRotator_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue_27 = CallFunc_GetFloatValue_ReturnValue_27;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult_3 = CallFunc_K2_SetRelativeRotation_SweepHitResult_3;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult_4 = CallFunc_K2_SetRelativeRotation_SweepHitResult_4;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult_5 = CallFunc_K2_SetRelativeRotation_SweepHitResult_5;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult_6 = CallFunc_K2_SetRelativeRotation_SweepHitResult_6;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult_7 = CallFunc_K2_SetRelativeRotation_SweepHitResult_7;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult_8 = CallFunc_K2_SetRelativeRotation_SweepHitResult_8;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult_9 = CallFunc_K2_SetRelativeRotation_SweepHitResult_9;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult_10 = CallFunc_K2_SetRelativeRotation_SweepHitResult_10;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult_11 = CallFunc_K2_SetRelativeRotation_SweepHitResult_11;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult_12 = CallFunc_K2_SetRelativeRotation_SweepHitResult_12;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult_13 = CallFunc_K2_SetRelativeRotation_SweepHitResult_13;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult_14 = CallFunc_K2_SetRelativeRotation_SweepHitResult_14;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult_15 = CallFunc_K2_SetRelativeRotation_SweepHitResult_15;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult_16 = CallFunc_K2_SetRelativeRotation_SweepHitResult_16;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult_17 = CallFunc_K2_SetRelativeRotation_SweepHitResult_17;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult_18 = CallFunc_K2_SetRelativeRotation_SweepHitResult_18;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult_19 = CallFunc_K2_SetRelativeRotation_SweepHitResult_19;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult_20 = CallFunc_K2_SetRelativeRotation_SweepHitResult_20;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult_21 = CallFunc_K2_SetRelativeRotation_SweepHitResult_21;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult_22 = CallFunc_K2_SetRelativeRotation_SweepHitResult_22;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_13 = CallFunc_Conv_BoolToInt_ReturnValue_13;
	Parms.K2Node_SwitchInteger_CmpSuccess_38 = K2Node_SwitchInteger_CmpSuccess_38;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_14 = CallFunc_Conv_BoolToInt_ReturnValue_14;
	Parms.K2Node_SwitchInteger_CmpSuccess_39 = K2Node_SwitchInteger_CmpSuccess_39;
	Parms.CallFunc_GetFloatValue_ReturnValue_28 = CallFunc_GetFloatValue_ReturnValue_28;
	Parms.CallFunc_GetFloatValue_ReturnValue_29 = CallFunc_GetFloatValue_ReturnValue_29;
	Parms.CallFunc_GetFloatValue_ReturnValue_30 = CallFunc_GetFloatValue_ReturnValue_30;
	Parms.CallFunc_GetFloatValue_ReturnValue_31 = CallFunc_GetFloatValue_ReturnValue_31;
	Parms.CallFunc_GetFloatValue_ReturnValue_32 = CallFunc_GetFloatValue_ReturnValue_32;
	Parms.CallFunc_GetFloatValue_ReturnValue_33 = CallFunc_GetFloatValue_ReturnValue_33;
	Parms.CallFunc_GetFloatValue_ReturnValue_34 = CallFunc_GetFloatValue_ReturnValue_34;
	Parms.K2Node_SwitchInteger_CmpSuccess_40 = K2Node_SwitchInteger_CmpSuccess_40;
	Parms.CallFunc_Array_Get_Item_144 = CallFunc_Array_Get_Item_144;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_15 = CallFunc_Conv_BoolToInt_ReturnValue_15;
	Parms.K2Node_SwitchInteger_CmpSuccess_41 = K2Node_SwitchInteger_CmpSuccess_41;
	Parms.K2Node_SwitchInteger_CmpSuccess_42 = K2Node_SwitchInteger_CmpSuccess_42;
	Parms.CallFunc_Array_Get_Item_145 = CallFunc_Array_Get_Item_145;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_16 = CallFunc_Conv_BoolToInt_ReturnValue_16;
	Parms.K2Node_SwitchInteger_CmpSuccess_43 = K2Node_SwitchInteger_CmpSuccess_43;
	Parms.CallFunc_Array_Get_Item_146 = CallFunc_Array_Get_Item_146;
	Parms.K2Node_SwitchInteger_CmpSuccess_44 = K2Node_SwitchInteger_CmpSuccess_44;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_17 = CallFunc_Conv_BoolToInt_ReturnValue_17;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess_45 = K2Node_SwitchInteger_CmpSuccess_45;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.CallFunc_IsValid_ReturnValue_12 = CallFunc_IsValid_ReturnValue_12;
	Parms.CallFunc_IsValid_ReturnValue_13 = CallFunc_IsValid_ReturnValue_13;
	Parms.CallFunc_IsValid_ReturnValue_14 = CallFunc_IsValid_ReturnValue_14;
	Parms.CallFunc_IsValid_ReturnValue_15 = CallFunc_IsValid_ReturnValue_15;
	Parms.CallFunc_IsValid_ReturnValue_16 = CallFunc_IsValid_ReturnValue_16;
	Parms.CallFunc_IsValid_ReturnValue_17 = CallFunc_IsValid_ReturnValue_17;
	Parms.CallFunc_IsValid_ReturnValue_18 = CallFunc_IsValid_ReturnValue_18;
	Parms.CallFunc_IsValid_ReturnValue_19 = CallFunc_IsValid_ReturnValue_19;
	Parms.CallFunc_IsValid_ReturnValue_20 = CallFunc_IsValid_ReturnValue_20;
	Parms.CallFunc_IsValid_ReturnValue_21 = CallFunc_IsValid_ReturnValue_21;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast = CallFunc_Lerp_Alpha_ImplicitCast;
	Parms.CallFunc_SetRayleighScatteringScale_NewValue_ImplicitCast = CallFunc_SetRayleighScatteringScale_NewValue_ImplicitCast;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_1 = CallFunc_Lerp_Alpha_ImplicitCast_1;
	Parms.CallFunc_SetMieScatteringScale_NewValue_ImplicitCast = CallFunc_SetMieScatteringScale_NewValue_ImplicitCast;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_2 = CallFunc_Lerp_Alpha_ImplicitCast_2;
	Parms.CallFunc_SetMieAbsorptionScale_NewValue_ImplicitCast = CallFunc_SetMieAbsorptionScale_NewValue_ImplicitCast;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast = CallFunc_GetFloatValue_InTime_ImplicitCast;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_3 = CallFunc_Lerp_Alpha_ImplicitCast_3;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_4 = CallFunc_Lerp_Alpha_ImplicitCast_4;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_5 = CallFunc_Lerp_Alpha_ImplicitCast_5;
	Parms.K2Node_VariableSet_AerialPerspectiveStartDepth_ImplicitCast = K2Node_VariableSet_AerialPerspectiveStartDepth_ImplicitCast;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_6 = CallFunc_Lerp_Alpha_ImplicitCast_6;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_7 = CallFunc_Lerp_Alpha_ImplicitCast_7;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_8 = CallFunc_Lerp_Alpha_ImplicitCast_8;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_9 = CallFunc_Lerp_Alpha_ImplicitCast_9;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_10 = CallFunc_Lerp_Alpha_ImplicitCast_10;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_1 = CallFunc_GetFloatValue_InTime_ImplicitCast_1;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_11 = CallFunc_Lerp_Alpha_ImplicitCast_11;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_2 = CallFunc_GetFloatValue_InTime_ImplicitCast_2;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_12 = CallFunc_Lerp_Alpha_ImplicitCast_12;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_13 = CallFunc_Lerp_Alpha_ImplicitCast_13;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_3 = CallFunc_GetFloatValue_InTime_ImplicitCast_3;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_4 = CallFunc_GetFloatValue_InTime_ImplicitCast_4;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_3 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_3;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_5 = CallFunc_GetFloatValue_InTime_ImplicitCast_5;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_14 = CallFunc_Lerp_Alpha_ImplicitCast_14;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_4 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_4;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_6 = CallFunc_GetFloatValue_InTime_ImplicitCast_6;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_15 = CallFunc_Lerp_Alpha_ImplicitCast_15;
	Parms.CallFunc_SetHeightFogContribution_NewValue_ImplicitCast = CallFunc_SetHeightFogContribution_NewValue_ImplicitCast;
	Parms.CallFunc_SetMieAbsorptionScale_NewValue_ImplicitCast_1 = CallFunc_SetMieAbsorptionScale_NewValue_ImplicitCast_1;
	Parms.K2Node_VariableSet_AerialPerspectiveStartDepth_ImplicitCast_1 = K2Node_VariableSet_AerialPerspectiveStartDepth_ImplicitCast_1;
	Parms.CallFunc_SetMieScatteringScale_NewValue_ImplicitCast_1 = CallFunc_SetMieScatteringScale_NewValue_ImplicitCast_1;
	Parms.CallFunc_SetRayleighScatteringScale_NewValue_ImplicitCast_1 = CallFunc_SetRayleighScatteringScale_NewValue_ImplicitCast_1;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_7 = CallFunc_GetFloatValue_InTime_ImplicitCast_7;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_16 = CallFunc_Lerp_Alpha_ImplicitCast_16;
	Parms.CallFunc_SetHeightFogContribution_NewValue_ImplicitCast_1 = CallFunc_SetHeightFogContribution_NewValue_ImplicitCast_1;
	Parms.CallFunc_SetHeightFogContribution_NewValue_ImplicitCast_2 = CallFunc_SetHeightFogContribution_NewValue_ImplicitCast_2;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_17 = CallFunc_Lerp_Alpha_ImplicitCast_17;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_18 = CallFunc_Lerp_Alpha_ImplicitCast_18;
	Parms.CallFunc_SetRayleighScatteringScale_NewValue_ImplicitCast_2 = CallFunc_SetRayleighScatteringScale_NewValue_ImplicitCast_2;
	Parms.CallFunc_SetMieScatteringScale_NewValue_ImplicitCast_2 = CallFunc_SetMieScatteringScale_NewValue_ImplicitCast_2;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_19 = CallFunc_Lerp_Alpha_ImplicitCast_19;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_20 = CallFunc_Lerp_Alpha_ImplicitCast_20;
	Parms.CallFunc_SetMieAbsorptionScale_NewValue_ImplicitCast_2 = CallFunc_SetMieAbsorptionScale_NewValue_ImplicitCast_2;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_21 = CallFunc_Lerp_Alpha_ImplicitCast_21;
	Parms.K2Node_VariableSet_AerialPerspectiveStartDepth_ImplicitCast_2 = K2Node_VariableSet_AerialPerspectiveStartDepth_ImplicitCast_2;
	Parms.CallFunc_SetAerialPespectiveViewDistanceScale_NewValue_ImplicitCast = CallFunc_SetAerialPespectiveViewDistanceScale_NewValue_ImplicitCast;
	Parms.CallFunc_SetHeightFogContribution_NewValue_ImplicitCast_3 = CallFunc_SetHeightFogContribution_NewValue_ImplicitCast_3;
	Parms.CallFunc_SetAerialPespectiveViewDistanceScale_NewValue_ImplicitCast_1 = CallFunc_SetAerialPespectiveViewDistanceScale_NewValue_ImplicitCast_1;
	Parms.CallFunc_SetAerialPespectiveViewDistanceScale_NewValue_ImplicitCast_2 = CallFunc_SetAerialPespectiveViewDistanceScale_NewValue_ImplicitCast_2;
	Parms.CallFunc_SetAerialPespectiveViewDistanceScale_NewValue_ImplicitCast_3 = CallFunc_SetAerialPespectiveViewDistanceScale_NewValue_ImplicitCast_3;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_5 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_5;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_6 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_6;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_7 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_7;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_8 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_8;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_9 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_9;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_10 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_10;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_8 = CallFunc_GetFloatValue_InTime_ImplicitCast_8;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_9 = CallFunc_GetFloatValue_InTime_ImplicitCast_9;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_10 = CallFunc_GetFloatValue_InTime_ImplicitCast_10;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_11 = CallFunc_GetFloatValue_InTime_ImplicitCast_11;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_12 = CallFunc_GetFloatValue_InTime_ImplicitCast_12;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_13 = CallFunc_GetFloatValue_InTime_ImplicitCast_13;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_14 = CallFunc_GetFloatValue_InTime_ImplicitCast_14;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_15 = CallFunc_GetFloatValue_InTime_ImplicitCast_15;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_16 = CallFunc_GetFloatValue_InTime_ImplicitCast_16;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_17 = CallFunc_GetFloatValue_InTime_ImplicitCast_17;
	Parms.CallFunc_SetMieAbsorptionScale_NewValue_ImplicitCast_3 = CallFunc_SetMieAbsorptionScale_NewValue_ImplicitCast_3;
	Parms.K2Node_VariableSet_AerialPerspectiveStartDepth_ImplicitCast_3 = K2Node_VariableSet_AerialPerspectiveStartDepth_ImplicitCast_3;
	Parms.CallFunc_SetAerialPespectiveViewDistanceScale_NewValue_ImplicitCast_4 = CallFunc_SetAerialPespectiveViewDistanceScale_NewValue_ImplicitCast_4;
	Parms.CallFunc_SetMieScatteringScale_NewValue_ImplicitCast_3 = CallFunc_SetMieScatteringScale_NewValue_ImplicitCast_3;
	Parms.CallFunc_SetRayleighScatteringScale_NewValue_ImplicitCast_3 = CallFunc_SetRayleighScatteringScale_NewValue_ImplicitCast_3;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_18 = CallFunc_GetFloatValue_InTime_ImplicitCast_18;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_19 = CallFunc_GetFloatValue_InTime_ImplicitCast_19;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_20 = CallFunc_GetFloatValue_InTime_ImplicitCast_20;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_21 = CallFunc_GetFloatValue_InTime_ImplicitCast_21;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_22 = CallFunc_GetFloatValue_InTime_ImplicitCast_22;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_22 = CallFunc_Lerp_Alpha_ImplicitCast_22;
	Parms.CallFunc_SetHeightFogContribution_NewValue_ImplicitCast_4 = CallFunc_SetHeightFogContribution_NewValue_ImplicitCast_4;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_23 = CallFunc_GetFloatValue_InTime_ImplicitCast_23;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_11 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_11;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_12 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_12;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_24 = CallFunc_GetFloatValue_InTime_ImplicitCast_24;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_23 = CallFunc_Lerp_Alpha_ImplicitCast_23;
	Parms.CallFunc_SetMieScatteringScale_NewValue_ImplicitCast_4 = CallFunc_SetMieScatteringScale_NewValue_ImplicitCast_4;
	Parms.CallFunc_SetHeightFogContribution_NewValue_ImplicitCast_5 = CallFunc_SetHeightFogContribution_NewValue_ImplicitCast_5;
	Parms.CallFunc_SetMieAbsorptionScale_NewValue_ImplicitCast_4 = CallFunc_SetMieAbsorptionScale_NewValue_ImplicitCast_4;
	Parms.CallFunc_SetAerialPespectiveViewDistanceScale_NewValue_ImplicitCast_5 = CallFunc_SetAerialPespectiveViewDistanceScale_NewValue_ImplicitCast_5;
	Parms.CallFunc_SetMieAbsorptionScale_NewValue_ImplicitCast_5 = CallFunc_SetMieAbsorptionScale_NewValue_ImplicitCast_5;
	Parms.CallFunc_SetMieScatteringScale_NewValue_ImplicitCast_5 = CallFunc_SetMieScatteringScale_NewValue_ImplicitCast_5;
	Parms.CallFunc_SetRayleighScatteringScale_NewValue_ImplicitCast_4 = CallFunc_SetRayleighScatteringScale_NewValue_ImplicitCast_4;
	Parms.K2Node_VariableSet_AerialPerspectiveStartDepth_ImplicitCast_4 = K2Node_VariableSet_AerialPerspectiveStartDepth_ImplicitCast_4;
	Parms.CallFunc_SetRayleighScatteringScale_NewValue_ImplicitCast_5 = CallFunc_SetRayleighScatteringScale_NewValue_ImplicitCast_5;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_25 = CallFunc_GetFloatValue_InTime_ImplicitCast_25;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_13 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_13;
	Parms.CallFunc_MakeRotator_Roll_ImplicitCast = CallFunc_MakeRotator_Roll_ImplicitCast;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_26 = CallFunc_GetFloatValue_InTime_ImplicitCast_26;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_27 = CallFunc_GetFloatValue_InTime_ImplicitCast_27;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_28 = CallFunc_GetFloatValue_InTime_ImplicitCast_28;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_29 = CallFunc_GetFloatValue_InTime_ImplicitCast_29;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_30 = CallFunc_GetFloatValue_InTime_ImplicitCast_30;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_31 = CallFunc_GetFloatValue_InTime_ImplicitCast_31;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_32 = CallFunc_GetFloatValue_InTime_ImplicitCast_32;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_33 = CallFunc_GetFloatValue_InTime_ImplicitCast_33;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_34 = CallFunc_GetFloatValue_InTime_ImplicitCast_34;
	Parms.K2Node_VariableSet_AerialPerspectiveStartDepth_ImplicitCast_5 = K2Node_VariableSet_AerialPerspectiveStartDepth_ImplicitCast_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TimeofDay_Lighting.TimeofDay_Lighting_C.Post Process
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DetailStrength                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MiddlegreyBias                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             BlurLumianceBlend                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             BlurKernalsize                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 Contrast_Lerp                                                    (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 Exposure_Comp_Night_Lerp                                         (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<double>                     Exposure_Array_DawnDusk                                          (Edit, BlueprintVisible)
// class UCurveFloat*                 Exposure_Comp_Curve_Alpha                                        (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 Exposure_Comp_Day_Lerp                                           (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<double>                     Exposure_Array_Night                                             (Edit, BlueprintVisible)
// TArray<double>                     Exposure_Comp_Array                                              (Edit, BlueprintVisible)
// class UCurveFloat*                 Exposure_Comp_Curve_Night                                        (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 Exposure_Comp_Curve_Dawn_Dusk                                    (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 Exposure_Comp_Curve_Day                                          (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UCurveFloat*>         Exposure_Comp_Curve_Day_Night_Array_1                            (Edit, BlueprintVisible)
// class UCurveFloat*                 Active_Exposure_Comp_Curve                                       (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UTexture*>            LUT_Eccentric                                                    (Edit, BlueprintVisible)
// TArray<class UTexture*>            LUT_Basic                                                        (Edit, BlueprintVisible)
// TArray<class UTexture*>            LUT_Cool                                                         (Edit, BlueprintVisible)
// TArray<class UTexture*>            LUT_Warm                                                         (Edit, BlueprintVisible)
// class UCurveFloat*                 Exposure_Comp_Curve_2                                            (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UCurveFloat*>         Exposure_Comp_Curve_Day_Night_Array                              (Edit, BlueprintVisible)
// class UCurveFloat*                 Exposure_Compensation_Curve_Switch                               (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             AdjustedTime24Hour                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UTexture*>            LUT_Array                                                        (Edit, BlueprintVisible)
// class UCurveFloat*                 PostProcess_Speed_Down                                           (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 PostProcess_Speed_Up                                             (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UCurveFloat*>         PostProcessMaxBrightness_Array                                   (Edit, BlueprintVisible)
// TArray<class UCurveFloat*>         PostProcessMinBrightness_Array                                   (Edit, BlueprintVisible)
// TArray<class UCurveFloat*>         PostProcessExposureCompensation_Array                            (Edit, BlueprintVisible)
// TArray<class UCurveFloat*>         PostProcessExposureCompensation_Curve                            (Edit, BlueprintVisible)
// class UCurveFloat*                 PostProcessMaxBrightness                                         (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 PostProcessMinBrightness                                         (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 PostProcessExposureCompensation                                  (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// double                             CallFunc_Local_Exposure_Local_Highlight                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Local_Exposure_Local_Shadow                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Local_Exposure_Detail_Strength                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Local_Exposure_Blur_Lumiance_Blend                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Local_Exposure_Blur_Kernel_size                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Local_Exposure_Middlegrey_Bias                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_1                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Exposure                 CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeightedBlendables         CallFunc_Desert_PPM_ReturnValue                                  (None)
// double                             CallFunc_Final_Gather_Update_Speed_finalgather                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Exposure_Compensation_NoLumen_Exposure_Compensation     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_LensFlare_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_5                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_6                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_6                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_7                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_8                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SkylightLeaking_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Diffuse_Color_Boost_Final_Gather_Quality                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Diffuse_Color_Boost_Diffuse_Boost                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Eye_Adaptation_Low_Percent                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Eye_Adaptation_High_Percent                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Bloom_Bloom_Intensity                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Local_Exposure_Local_Highlight_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Local_Exposure_Local_Shadow_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Local_Exposure_Detail_Strength_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Local_Exposure_Blur_Lumiance_Blend_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Local_Exposure_Blur_Kernel_size_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Local_Exposure_Middlegrey_Bias_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Final_Gather_Update_Speed_finalgather_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeightedBlendables         CallFunc_Desert_PPM_ReturnValue_1                                (None)
// double                             CallFunc_Final_Gather_Update_Speed_finalgather_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_LensFlare_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_7                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_8                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_9                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UCurveFloat*>         K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<class UCurveFloat*>         K2Node_MakeArray_Array_1                                         (ReferenceParm)
// TArray<class UCurveFloat*>         K2Node_MakeArray_Array_2                                         (ReferenceParm)
// double                             CallFunc_SkylightLeaking_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Diffuse_Color_Boost_Final_Gather_Quality_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Diffuse_Color_Boost_Diffuse_Boost_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Exposure_Compensation_Exposure_Compensation             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Eye_Adaptation_Low_Percent_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Eye_Adaptation_High_Percent_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Bloom_Bloom_Intensity_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Local_Exposure_Local_Highlight_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Local_Exposure_Local_Shadow_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Local_Exposure_Detail_Strength_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Local_Exposure_Blur_Lumiance_Blend_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Local_Exposure_Blur_Kernel_size_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Local_Exposure_Middlegrey_Bias_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UCurveFloat*>         K2Node_MakeArray_Array_3                                         (ReferenceParm)
// double                             CallFunc_Final_Gather_Update_Speed_finalgather_3                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Final_Gather_Update_Speed_finalgather_4                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Final_Gather_Update_Speed_finalgather_5                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Final_Gather_Update_Speed_finalgather_6                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Exposure_Compensation_NoLumen_Exposure_Compensation_1   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_LensFlare_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UTexture*>            K2Node_MakeArray_Array_4                                         (ReferenceParm)
// TArray<class UCurveFloat*>         K2Node_MakeArray_Array_5                                         (ReferenceParm)
// TArray<class UTexture*>            K2Node_MakeArray_Array_6                                         (ReferenceParm)
// TArray<class UTexture*>            K2Node_MakeArray_Array_7                                         (ReferenceParm)
// TArray<class UTexture*>            K2Node_MakeArray_Array_8                                         (ReferenceParm)
// struct FWeightedBlendables         CallFunc_PostProcessMaterals_ReturnValue                         (None)
// double                             CallFunc_SkylightLeaking_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Diffuse_Color_Boost_Final_Gather_Quality_2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Diffuse_Color_Boost_Diffuse_Boost_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Eye_Adaptation_Low_Percent_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Eye_Adaptation_High_Percent_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Bloom_Bloom_Intensity_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Local_Exposure_Local_Highlight_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Local_Exposure_Local_Shadow_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Local_Exposure_Detail_Strength_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Local_Exposure_Blur_Lumiance_Blend_3                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Local_Exposure_Blur_Kernel_size_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Local_Exposure_Middlegrey_Bias_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UTexture*>            K2Node_MakeArray_Array_9                                         (ReferenceParm)
// bool                               K2Node_SwitchInteger_CmpSuccess_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_LensFlare_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UCurveFloat*>         K2Node_MakeArray_Array_10                                        (ReferenceParm)
// TArray<double>                     K2Node_MakeArray_Array_11                                        (ReferenceParm)
// TArray<double>                     K2Node_MakeArray_Array_12                                        (ReferenceParm)
// TArray<double>                     K2Node_MakeArray_Array_13                                        (ReferenceParm)
// struct FWeightedBlendables         CallFunc_PostProcessMaterals_ReturnValue_1                       (None)
// double                             CallFunc_SkylightLeaking_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Diffuse_Color_Boost_Final_Gather_Quality_3              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Diffuse_Color_Boost_Diffuse_Boost_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Exposure_Compensation_Exposure_Compensation_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Eye_Adaptation_Low_Percent_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Eye_Adaptation_High_Percent_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Bloom_Bloom_Intensity_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Local_Exposure_Local_Highlight_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Local_Exposure_Local_Shadow_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Local_Exposure_Detail_Strength_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Local_Exposure_Blur_Lumiance_Blend_4                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Local_Exposure_Blur_Kernel_size_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Local_Exposure_Middlegrey_Bias_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_LensFlare_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeightedBlendables         Temp_struct_Variable                                             (None)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeightedBlendables         CallFunc_PostProcessMaterals_ReturnValue_2                       (None)
// double                             CallFunc_SkylightLeaking_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Diffuse_Color_Boost_Final_Gather_Quality_4              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Diffuse_Color_Boost_Diffuse_Boost_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Exposure_Compensation_Exposure_Compensation_2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Eye_Adaptation_Low_Percent_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Eye_Adaptation_High_Percent_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Bloom_Bloom_Intensity_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Local_Exposure_Local_Highlight_5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Local_Exposure_Local_Shadow_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Local_Exposure_Detail_Strength_5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Local_Exposure_Blur_Lumiance_Blend_5                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Local_Exposure_Blur_Kernel_size_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Local_Exposure_Middlegrey_Bias_5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Local_Exposure_Local_Highlight_6                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Local_Exposure_Local_Shadow_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Local_Exposure_Detail_Strength_6                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Local_Exposure_Blur_Lumiance_Blend_6                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Local_Exposure_Blur_Kernel_size_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Local_Exposure_Middlegrey_Bias_6                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_10                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_6                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_7                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_11                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_12                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_9                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_10                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_13                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_14                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_11                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_12                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_15                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_16                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_13                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_14                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_17                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_15                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_18                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_19                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_8                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_16                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_17                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_ByteToDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_2                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_9                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeightedBlendables         CallFunc_Desert_PPM_ReturnValue_2                                (None)
// struct FS_VE_Preset_Master         CallFunc_GetDataTableRowFromName_OutRow_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_3                      (ReferenceParm)
// double                             CallFunc_Array_Get_Item_10                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_11                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_12                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Color_Correction_Presets CallFunc_GetDataTableRowFromName_OutRow_2                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeightedBlendables         K2Node_Select_Default                                            (None)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_4                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_13                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Color_Correction_Presets CallFunc_GetDataTableRowFromName_OutRow_3                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_14                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Exposure                 CallFunc_GetDataTableRowFromName_OutRow_4                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_AutoExposureLowPercent_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LensFlareIntensity_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_AutoExposureSpeedDown_ImplicitCast      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_AutoExposureSpeedUp_ImplicitCast        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_BloomIntensity_ImplicitCast             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LumenFullSkylightLeakingDistance_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LocalExposureHighlightContrastScale_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LocalExposureShadowContrastScale_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LocalExposureDetailStrength_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LocalExposureBlurredLuminanceBlend_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LocalExposureBlurredLuminanceKernelSizePercent_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LocalExposureMiddleGreyBias_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_WhiteTemp_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_FilmWhiteClip_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_HistogramLogMax_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_HistogramLogMin_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_AutoExposureMaxBrightness_ImplicitCast  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_AutoExposureMinBrightness_ImplicitCast  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_FilmShoulder_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_FilmToe_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_FilmSlope_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_6                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LumenFinalGatherLightingUpdateSpeed_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_AutoExposureBias_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LensFlareIntensity_ImplicitCast_1       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LumenSkylightLeaking_ImplicitCast       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_AutoExposureHighPercent_ImplicitCast    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_7                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_8                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LumenDiffuseColorBoost_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LumenSkylightLeaking_ImplicitCast_1     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LumenFinalGatherQuality_ImplicitCast    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LumenDiffuseColorBoost_ImplicitCast_1   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_AutoExposureLowPercent_ImplicitCast_1   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_AutoExposureHighPercent_ImplicitCast_1  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_BloomIntensity_ImplicitCast_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LumenFullSkylightLeakingDistance_ImplicitCast_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LocalExposureHighlightContrastScale_ImplicitCast_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LocalExposureShadowContrastScale_ImplicitCast_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LocalExposureDetailStrength_ImplicitCast_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LocalExposureBlurredLuminanceBlend_ImplicitCast_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LocalExposureBlurredLuminanceKernelSizePercent_ImplicitCast_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LocalExposureMiddleGreyBias_ImplicitCast_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_AutoExposureSpeedDown_ImplicitCast_1    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_AutoExposureSpeedUp_ImplicitCast_1      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_WhiteTemp_ImplicitCast_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_FilmWhiteClip_ImplicitCast_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_HistogramLogMax_ImplicitCast_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_HistogramLogMin_ImplicitCast_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_AutoExposureMaxBrightness_ImplicitCast_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_AutoExposureMinBrightness_ImplicitCast_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_FilmShoulder_ImplicitCast_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LumenFinalGatherLightingUpdateSpeed_ImplicitCast_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_FilmToe_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_FilmSlope_ImplicitCast_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LumenFinalGatherLightingUpdateSpeed_ImplicitCast_2(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LensFlareIntensity_ImplicitCast_2       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_9                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_B_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_AutoExposureBias_ImplicitCast_1         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LumenSkylightLeaking_ImplicitCast_2     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LumenFinalGatherQuality_ImplicitCast_1  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LumenDiffuseColorBoost_ImplicitCast_2   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_AutoExposureBias_ImplicitCast_2         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_AutoExposureLowPercent_ImplicitCast_2   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_AutoExposureHighPercent_ImplicitCast_2  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_BloomIntensity_ImplicitCast_2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LocalExposureHighlightContrastScale_ImplicitCast_2(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LocalExposureShadowContrastScale_ImplicitCast_2(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LocalExposureDetailStrength_ImplicitCast_2(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LocalExposureBlurredLuminanceBlend_ImplicitCast_2(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LocalExposureBlurredLuminanceKernelSizePercent_ImplicitCast_2(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LocalExposureMiddleGreyBias_ImplicitCast_2(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LumenFullSkylightLeakingDistance_ImplicitCast_2(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_AutoExposureSpeedDown_ImplicitCast_2    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_AutoExposureSpeedUp_ImplicitCast_2      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_WhiteTemp_ImplicitCast_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_FilmWhiteClip_ImplicitCast_2            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_HistogramLogMax_ImplicitCast_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_HistogramLogMin_ImplicitCast_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_AutoExposureMaxBrightness_ImplicitCast_2(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_AutoExposureMinBrightness_ImplicitCast_2(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_FilmShoulder_ImplicitCast_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_FilmToe_ImplicitCast_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_FilmSlope_ImplicitCast_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LumenFinalGatherLightingUpdateSpeed_ImplicitCast_3(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LumenFinalGatherLightingUpdateSpeed_ImplicitCast_4(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LumenFinalGatherLightingUpdateSpeed_ImplicitCast_5(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LumenFinalGatherLightingUpdateSpeed_ImplicitCast_6(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_AutoExposureBias_ImplicitCast_3         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LensFlareIntensity_ImplicitCast_3       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LumenSkylightLeaking_ImplicitCast_3     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LumenFinalGatherQuality_ImplicitCast_2  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LumenDiffuseColorBoost_ImplicitCast_3   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_AutoExposureLowPercent_ImplicitCast_3   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_AutoExposureHighPercent_ImplicitCast_3  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_BloomIntensity_ImplicitCast_3           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LumenFullSkylightLeakingDistance_ImplicitCast_3(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LocalExposureHighlightContrastScale_ImplicitCast_3(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LocalExposureShadowContrastScale_ImplicitCast_3(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LocalExposureDetailStrength_ImplicitCast_3(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LocalExposureBlurredLuminanceBlend_ImplicitCast_3(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LocalExposureBlurredLuminanceKernelSizePercent_ImplicitCast_3(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LocalExposureMiddleGreyBias_ImplicitCast_3(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_AutoExposureSpeedDown_ImplicitCast_3    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_AutoExposureSpeedUp_ImplicitCast_3      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_WhiteTemp_ImplicitCast_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_FilmWhiteClip_ImplicitCast_3            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_HistogramLogMax_ImplicitCast_3          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_HistogramLogMin_ImplicitCast_3          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_AutoExposureMaxBrightness_ImplicitCast_3(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_AutoExposureMinBrightness_ImplicitCast_3(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_FilmShoulder_ImplicitCast_3             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_FilmToe_ImplicitCast_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_FilmSlope_ImplicitCast_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LensFlareIntensity_ImplicitCast_4       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LumenSkylightLeaking_ImplicitCast_4     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LumenFinalGatherQuality_ImplicitCast_3  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LumenDiffuseColorBoost_ImplicitCast_4   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_AutoExposureBias_ImplicitCast_4         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_AutoExposureLowPercent_ImplicitCast_4   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_AutoExposureHighPercent_ImplicitCast_4  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_BloomIntensity_ImplicitCast_4           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LocalExposureHighlightContrastScale_ImplicitCast_4(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LocalExposureShadowContrastScale_ImplicitCast_4(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LocalExposureDetailStrength_ImplicitCast_4(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LocalExposureBlurredLuminanceBlend_ImplicitCast_4(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LocalExposureBlurredLuminanceKernelSizePercent_ImplicitCast_4(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LocalExposureMiddleGreyBias_ImplicitCast_4(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LumenFullSkylightLeakingDistance_ImplicitCast_4(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_AutoExposureSpeedDown_ImplicitCast_4    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_AutoExposureSpeedUp_ImplicitCast_4      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_WhiteTemp_ImplicitCast_4                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_FilmWhiteClip_ImplicitCast_4            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_HistogramLogMax_ImplicitCast_4          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_HistogramLogMin_ImplicitCast_4          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_AutoExposureMaxBrightness_ImplicitCast_4(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_AutoExposureMinBrightness_ImplicitCast_4(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_FilmShoulder_ImplicitCast_4             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_FilmToe_ImplicitCast_4                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_FilmSlope_ImplicitCast_4                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LensFlareIntensity_ImplicitCast_5       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LumenSkylightLeaking_ImplicitCast_5     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LumenFinalGatherQuality_ImplicitCast_4  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LumenDiffuseColorBoost_ImplicitCast_5   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_AutoExposureBias_ImplicitCast_5         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_AutoExposureLowPercent_ImplicitCast_5   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_AutoExposureHighPercent_ImplicitCast_5  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_BloomIntensity_ImplicitCast_5           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LocalExposureHighlightContrastScale_ImplicitCast_5(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LocalExposureShadowContrastScale_ImplicitCast_5(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LocalExposureDetailStrength_ImplicitCast_5(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LocalExposureBlurredLuminanceBlend_ImplicitCast_5(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LocalExposureBlurredLuminanceKernelSizePercent_ImplicitCast_5(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LocalExposureMiddleGreyBias_ImplicitCast_5(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LumenFullSkylightLeakingDistance_ImplicitCast_5(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LocalExposureHighlightContrastScale_ImplicitCast_6(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LocalExposureShadowContrastScale_ImplicitCast_6(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LocalExposureDetailStrength_ImplicitCast_6(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LocalExposureBlurredLuminanceBlend_ImplicitCast_6(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LocalExposureBlurredLuminanceKernelSizePercent_ImplicitCast_6(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LocalExposureMiddleGreyBias_ImplicitCast_6(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LumenSkylightLeaking_ImplicitCast_6     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LumenDiffuseColorBoost_ImplicitCast_6   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_10                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_B_ImplicitCast_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_11                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_12                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_9                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_10                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_13                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_AutoExposureBias_ImplicitCast_6         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_11                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_14                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_12                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_AutoExposureHighPercent_ImplicitCast_6  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_15                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_16                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_13                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_14                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LumenFullSkylightLeakingDistance_ImplicitCast_6(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_AutoExposureLowPercent_ImplicitCast_6   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_17                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_15                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LensFlareIntensity_ImplicitCast_6       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_18                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_16                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_19                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_17                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_AutoExposureSpeedDown_ImplicitCast_5    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_AutoExposureSpeedUp_ImplicitCast_5      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_BloomIntensity_ImplicitCast_6           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_AutoExposureSpeedDown_ImplicitCast_6    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_AutoExposureSpeedUp_ImplicitCast_6      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_WhiteTemp_ImplicitCast_5                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_FilmWhiteClip_ImplicitCast_5            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_HistogramLogMax_ImplicitCast_5          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_HistogramLogMin_ImplicitCast_5          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_AutoExposureMaxBrightness_ImplicitCast_5(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_AutoExposureMinBrightness_ImplicitCast_5(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_FilmShoulder_ImplicitCast_5             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_FilmToe_ImplicitCast_5                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_FilmSlope_ImplicitCast_5                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LumenFinalGatherQuality_ImplicitCast_5  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LumenFinalGatherQuality_ImplicitCast_6  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_WhiteTemp_ImplicitCast_6                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_FilmWhiteClip_ImplicitCast_6            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_HistogramLogMax_ImplicitCast_6          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_HistogramLogMin_ImplicitCast_6          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_AutoExposureMaxBrightness_ImplicitCast_6(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_AutoExposureMinBrightness_ImplicitCast_6(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_FilmShoulder_ImplicitCast_6             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_FilmToe_ImplicitCast_6                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_FilmSlope_ImplicitCast_6                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Lighting_C::Post_Process(double DetailStrength, double MiddlegreyBias, double BlurLumianceBlend, double BlurKernalsize, class UCurveFloat* Contrast_Lerp, class UCurveFloat* Exposure_Comp_Night_Lerp, const TArray<double>& Exposure_Array_DawnDusk, class UCurveFloat* Exposure_Comp_Curve_Alpha, class UCurveFloat* Exposure_Comp_Day_Lerp, const TArray<double>& Exposure_Array_Night, const TArray<double>& Exposure_Comp_Array, class UCurveFloat* Exposure_Comp_Curve_Night, class UCurveFloat* Exposure_Comp_Curve_Dawn_Dusk, class UCurveFloat* Exposure_Comp_Curve_Day, const TArray<class UCurveFloat*>& Exposure_Comp_Curve_Day_Night_Array_1, class UCurveFloat* Active_Exposure_Comp_Curve, const TArray<class UTexture*>& LUT_Eccentric, const TArray<class UTexture*>& LUT_Basic, const TArray<class UTexture*>& LUT_Cool, const TArray<class UTexture*>& LUT_Warm, class UCurveFloat* Exposure_Comp_Curve_2, const TArray<class UCurveFloat*>& Exposure_Comp_Curve_Day_Night_Array, class UCurveFloat* Exposure_Compensation_Curve_Switch, double AdjustedTime24Hour, const TArray<class UTexture*>& LUT_Array, class UCurveFloat* PostProcess_Speed_Down, class UCurveFloat* PostProcess_Speed_Up, const TArray<class UCurveFloat*>& PostProcessMaxBrightness_Array, const TArray<class UCurveFloat*>& PostProcessMinBrightness_Array, const TArray<class UCurveFloat*>& PostProcessExposureCompensation_Array, const TArray<class UCurveFloat*>& PostProcessExposureCompensation_Curve, class UCurveFloat* PostProcessMaxBrightness, class UCurveFloat* PostProcessMinBrightness, class UCurveFloat* PostProcessExposureCompensation, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_GetFloatValue_ReturnValue_1, double CallFunc_Lerp_ReturnValue, double CallFunc_Lerp_ReturnValue_1, float CallFunc_GetFloatValue_ReturnValue_2, double CallFunc_Lerp_ReturnValue_2, float CallFunc_GetFloatValue_ReturnValue_3, float CallFunc_GetFloatValue_ReturnValue_4, double CallFunc_Array_Get_Item, double CallFunc_Lerp_ReturnValue_3, double CallFunc_Lerp_ReturnValue_4, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, double CallFunc_Local_Exposure_Local_Highlight, double CallFunc_Local_Exposure_Local_Shadow, double CallFunc_Local_Exposure_Detail_Strength, double CallFunc_Local_Exposure_Blur_Lumiance_Blend, double CallFunc_Local_Exposure_Blur_Kernel_size, double CallFunc_Local_Exposure_Middlegrey_Bias, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_1, class FName CallFunc_Array_Get_Item_1, const struct FS_Exposure& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_SwitchInteger_CmpSuccess_1, const struct FWeightedBlendables& CallFunc_Desert_PPM_ReturnValue, double CallFunc_Final_Gather_Update_Speed_finalgather, double CallFunc_Exposure_Compensation_NoLumen_Exposure_Compensation, double CallFunc_LensFlare_ReturnValue, float CallFunc_GetFloatValue_ReturnValue_5, double CallFunc_Lerp_ReturnValue_5, float CallFunc_GetFloatValue_ReturnValue_6, double CallFunc_Lerp_ReturnValue_6, float CallFunc_GetFloatValue_ReturnValue_7, float CallFunc_GetFloatValue_ReturnValue_8, double CallFunc_Array_Get_Item_2, double CallFunc_SkylightLeaking_ReturnValue, double CallFunc_Diffuse_Color_Boost_Final_Gather_Quality, double CallFunc_Diffuse_Color_Boost_Diffuse_Boost, double CallFunc_Eye_Adaptation_Low_Percent, double CallFunc_Eye_Adaptation_High_Percent, double CallFunc_Bloom_Bloom_Intensity, double CallFunc_Local_Exposure_Local_Highlight_1, double CallFunc_Local_Exposure_Local_Shadow_1, double CallFunc_Local_Exposure_Detail_Strength_1, double CallFunc_Local_Exposure_Blur_Lumiance_Blend_1, double CallFunc_Local_Exposure_Blur_Kernel_size_1, double CallFunc_Local_Exposure_Middlegrey_Bias_1, double CallFunc_Final_Gather_Update_Speed_finalgather_1, const struct FWeightedBlendables& CallFunc_Desert_PPM_ReturnValue_1, double CallFunc_Final_Gather_Update_Speed_finalgather_2, double CallFunc_LensFlare_ReturnValue_1, double CallFunc_Array_Get_Item_3, double CallFunc_Lerp_ReturnValue_7, double CallFunc_Array_Get_Item_4, double CallFunc_Lerp_ReturnValue_8, float CallFunc_GetFloatValue_ReturnValue_9, double CallFunc_Add_DoubleDouble_ReturnValue, TArray<class UCurveFloat*>& K2Node_MakeArray_Array, TArray<class UCurveFloat*>& K2Node_MakeArray_Array_1, TArray<class UCurveFloat*>& K2Node_MakeArray_Array_2, double CallFunc_SkylightLeaking_ReturnValue_1, double CallFunc_Diffuse_Color_Boost_Final_Gather_Quality_1, double CallFunc_Diffuse_Color_Boost_Diffuse_Boost_1, double CallFunc_Exposure_Compensation_Exposure_Compensation, double CallFunc_Eye_Adaptation_Low_Percent_1, double CallFunc_Eye_Adaptation_High_Percent_1, double CallFunc_Bloom_Bloom_Intensity_1, double CallFunc_Local_Exposure_Local_Highlight_2, double CallFunc_Local_Exposure_Local_Shadow_2, double CallFunc_Local_Exposure_Detail_Strength_2, double CallFunc_Local_Exposure_Blur_Lumiance_Blend_2, double CallFunc_Local_Exposure_Blur_Kernel_size_2, double CallFunc_Local_Exposure_Middlegrey_Bias_2, TArray<class UCurveFloat*>& K2Node_MakeArray_Array_3, double CallFunc_Final_Gather_Update_Speed_finalgather_3, double CallFunc_Final_Gather_Update_Speed_finalgather_4, double CallFunc_Final_Gather_Update_Speed_finalgather_5, double CallFunc_Final_Gather_Update_Speed_finalgather_6, double CallFunc_Exposure_Compensation_NoLumen_Exposure_Compensation_1, double CallFunc_LensFlare_ReturnValue_2, TArray<class UTexture*>& K2Node_MakeArray_Array_4, TArray<class UCurveFloat*>& K2Node_MakeArray_Array_5, TArray<class UTexture*>& K2Node_MakeArray_Array_6, TArray<class UTexture*>& K2Node_MakeArray_Array_7, TArray<class UTexture*>& K2Node_MakeArray_Array_8, const struct FWeightedBlendables& CallFunc_PostProcessMaterals_ReturnValue, double CallFunc_SkylightLeaking_ReturnValue_2, double CallFunc_Diffuse_Color_Boost_Final_Gather_Quality_2, double CallFunc_Diffuse_Color_Boost_Diffuse_Boost_2, double CallFunc_Eye_Adaptation_Low_Percent_2, double CallFunc_Eye_Adaptation_High_Percent_2, double CallFunc_Bloom_Bloom_Intensity_2, double CallFunc_Local_Exposure_Local_Highlight_3, double CallFunc_Local_Exposure_Local_Shadow_3, double CallFunc_Local_Exposure_Detail_Strength_3, double CallFunc_Local_Exposure_Blur_Lumiance_Blend_3, double CallFunc_Local_Exposure_Blur_Kernel_size_3, double CallFunc_Local_Exposure_Middlegrey_Bias_3, TArray<class UTexture*>& K2Node_MakeArray_Array_9, bool K2Node_SwitchInteger_CmpSuccess_2, double CallFunc_LensFlare_ReturnValue_3, TArray<class UCurveFloat*>& K2Node_MakeArray_Array_10, TArray<double>& K2Node_MakeArray_Array_11, TArray<double>& K2Node_MakeArray_Array_12, TArray<double>& K2Node_MakeArray_Array_13, const struct FWeightedBlendables& CallFunc_PostProcessMaterals_ReturnValue_1, double CallFunc_SkylightLeaking_ReturnValue_3, double CallFunc_Diffuse_Color_Boost_Final_Gather_Quality_3, double CallFunc_Diffuse_Color_Boost_Diffuse_Boost_3, double CallFunc_Exposure_Compensation_Exposure_Compensation_1, double CallFunc_Eye_Adaptation_Low_Percent_3, double CallFunc_Eye_Adaptation_High_Percent_3, double CallFunc_Bloom_Bloom_Intensity_3, double CallFunc_Local_Exposure_Local_Highlight_4, double CallFunc_Local_Exposure_Local_Shadow_4, double CallFunc_Local_Exposure_Detail_Strength_4, double CallFunc_Local_Exposure_Blur_Lumiance_Blend_4, double CallFunc_Local_Exposure_Blur_Kernel_size_4, double CallFunc_Local_Exposure_Middlegrey_Bias_4, double CallFunc_LensFlare_ReturnValue_4, const struct FWeightedBlendables& Temp_struct_Variable, int32 Temp_int_Variable, const struct FWeightedBlendables& CallFunc_PostProcessMaterals_ReturnValue_2, double CallFunc_SkylightLeaking_ReturnValue_4, double CallFunc_Diffuse_Color_Boost_Final_Gather_Quality_4, double CallFunc_Diffuse_Color_Boost_Diffuse_Boost_4, double CallFunc_Exposure_Compensation_Exposure_Compensation_2, double CallFunc_Eye_Adaptation_Low_Percent_4, double CallFunc_Eye_Adaptation_High_Percent_4, double CallFunc_Bloom_Bloom_Intensity_4, double CallFunc_Local_Exposure_Local_Highlight_5, double CallFunc_Local_Exposure_Local_Shadow_5, double CallFunc_Local_Exposure_Detail_Strength_5, double CallFunc_Local_Exposure_Blur_Lumiance_Blend_5, double CallFunc_Local_Exposure_Blur_Kernel_size_5, double CallFunc_Local_Exposure_Middlegrey_Bias_5, double CallFunc_Local_Exposure_Local_Highlight_6, double CallFunc_Local_Exposure_Local_Shadow_6, double CallFunc_Local_Exposure_Detail_Strength_6, double CallFunc_Local_Exposure_Blur_Lumiance_Blend_6, double CallFunc_Local_Exposure_Blur_Kernel_size_6, double CallFunc_Local_Exposure_Middlegrey_Bias_6, float CallFunc_GetFloatValue_ReturnValue_10, double CallFunc_Array_Get_Item_5, double CallFunc_Array_Get_Item_6, double CallFunc_Array_Get_Item_7, float CallFunc_GetFloatValue_ReturnValue_11, float CallFunc_GetFloatValue_ReturnValue_12, double CallFunc_Lerp_ReturnValue_9, double CallFunc_Lerp_ReturnValue_10, double CallFunc_Add_DoubleDouble_ReturnValue_1, float CallFunc_GetFloatValue_ReturnValue_13, float CallFunc_GetFloatValue_ReturnValue_14, double CallFunc_Lerp_ReturnValue_11, double CallFunc_Lerp_ReturnValue_12, float CallFunc_GetFloatValue_ReturnValue_15, float CallFunc_GetFloatValue_ReturnValue_16, double CallFunc_Lerp_ReturnValue_13, double CallFunc_Lerp_ReturnValue_14, float CallFunc_GetFloatValue_ReturnValue_17, double CallFunc_Lerp_ReturnValue_15, float CallFunc_GetFloatValue_ReturnValue_18, float CallFunc_GetFloatValue_ReturnValue_19, double CallFunc_Array_Get_Item_8, double CallFunc_Lerp_ReturnValue_16, double CallFunc_Lerp_ReturnValue_17, bool K2Node_SwitchInteger_CmpSuccess_3, int32 CallFunc_Conv_BoolToInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess_4, double CallFunc_Conv_ByteToDouble_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_2, class FName CallFunc_Array_Get_Item_9, const struct FWeightedBlendables& CallFunc_Desert_PPM_ReturnValue_2, const struct FS_VE_Preset_Master& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_3, double CallFunc_Array_Get_Item_10, double CallFunc_Array_Get_Item_11, bool K2Node_SwitchInteger_CmpSuccess_5, class FName CallFunc_Array_Get_Item_12, const struct FS_Color_Correction_Presets& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, const struct FWeightedBlendables& K2Node_Select_Default, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_4, class FName CallFunc_Array_Get_Item_13, const struct FS_Color_Correction_Presets& CallFunc_GetDataTableRowFromName_OutRow_3, bool CallFunc_GetDataTableRowFromName_ReturnValue_3, class FName CallFunc_Array_Get_Item_14, const struct FS_Exposure& CallFunc_GetDataTableRowFromName_OutRow_4, bool CallFunc_GetDataTableRowFromName_ReturnValue_4, bool CallFunc_IsValid_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, float CallFunc_GetFloatValue_InTime_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast_1, double CallFunc_Lerp_Alpha_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast_1, float K2Node_SetFieldsInStruct_AutoExposureLowPercent_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast_2, double CallFunc_Lerp_Alpha_ImplicitCast_2, float K2Node_SetFieldsInStruct_LensFlareIntensity_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast_3, double CallFunc_Lerp_Alpha_ImplicitCast_3, float CallFunc_GetFloatValue_InTime_ImplicitCast_4, double CallFunc_Lerp_Alpha_ImplicitCast_4, float K2Node_SetFieldsInStruct_AutoExposureSpeedDown_ImplicitCast, float K2Node_SetFieldsInStruct_AutoExposureSpeedUp_ImplicitCast, float K2Node_SetFieldsInStruct_BloomIntensity_ImplicitCast, float K2Node_SetFieldsInStruct_LumenFullSkylightLeakingDistance_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast_5, float K2Node_SetFieldsInStruct_LocalExposureHighlightContrastScale_ImplicitCast, float K2Node_SetFieldsInStruct_LocalExposureShadowContrastScale_ImplicitCast, float K2Node_SetFieldsInStruct_LocalExposureDetailStrength_ImplicitCast, float K2Node_SetFieldsInStruct_LocalExposureBlurredLuminanceBlend_ImplicitCast, float K2Node_SetFieldsInStruct_LocalExposureBlurredLuminanceKernelSizePercent_ImplicitCast, float K2Node_SetFieldsInStruct_LocalExposureMiddleGreyBias_ImplicitCast, float K2Node_SetFieldsInStruct_WhiteTemp_ImplicitCast, float K2Node_SetFieldsInStruct_FilmWhiteClip_ImplicitCast, float K2Node_SetFieldsInStruct_HistogramLogMax_ImplicitCast, float K2Node_SetFieldsInStruct_HistogramLogMin_ImplicitCast, float K2Node_SetFieldsInStruct_AutoExposureMaxBrightness_ImplicitCast, float K2Node_SetFieldsInStruct_AutoExposureMinBrightness_ImplicitCast, float K2Node_SetFieldsInStruct_FilmShoulder_ImplicitCast, float K2Node_SetFieldsInStruct_FilmToe_ImplicitCast, float K2Node_SetFieldsInStruct_FilmSlope_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast_6, float K2Node_SetFieldsInStruct_LumenFinalGatherLightingUpdateSpeed_ImplicitCast, float K2Node_SetFieldsInStruct_AutoExposureBias_ImplicitCast, float K2Node_SetFieldsInStruct_LensFlareIntensity_ImplicitCast_1, double CallFunc_Lerp_Alpha_ImplicitCast_5, double CallFunc_Lerp_Alpha_ImplicitCast_6, float K2Node_SetFieldsInStruct_LumenSkylightLeaking_ImplicitCast, float K2Node_SetFieldsInStruct_AutoExposureHighPercent_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast_7, float CallFunc_GetFloatValue_InTime_ImplicitCast_8, double CallFunc_Lerp_Alpha_ImplicitCast_7, double CallFunc_Lerp_Alpha_ImplicitCast_8, float K2Node_SetFieldsInStruct_LumenDiffuseColorBoost_ImplicitCast, float K2Node_SetFieldsInStruct_LumenSkylightLeaking_ImplicitCast_1, float K2Node_SetFieldsInStruct_LumenFinalGatherQuality_ImplicitCast, float K2Node_SetFieldsInStruct_LumenDiffuseColorBoost_ImplicitCast_1, float K2Node_SetFieldsInStruct_AutoExposureLowPercent_ImplicitCast_1, float K2Node_SetFieldsInStruct_AutoExposureHighPercent_ImplicitCast_1, float K2Node_SetFieldsInStruct_BloomIntensity_ImplicitCast_1, float K2Node_SetFieldsInStruct_LumenFullSkylightLeakingDistance_ImplicitCast_1, float K2Node_SetFieldsInStruct_LocalExposureHighlightContrastScale_ImplicitCast_1, float K2Node_SetFieldsInStruct_LocalExposureShadowContrastScale_ImplicitCast_1, float K2Node_SetFieldsInStruct_LocalExposureDetailStrength_ImplicitCast_1, float K2Node_SetFieldsInStruct_LocalExposureBlurredLuminanceBlend_ImplicitCast_1, float K2Node_SetFieldsInStruct_LocalExposureBlurredLuminanceKernelSizePercent_ImplicitCast_1, float K2Node_SetFieldsInStruct_LocalExposureMiddleGreyBias_ImplicitCast_1, float K2Node_SetFieldsInStruct_AutoExposureSpeedDown_ImplicitCast_1, float K2Node_SetFieldsInStruct_AutoExposureSpeedUp_ImplicitCast_1, float K2Node_SetFieldsInStruct_WhiteTemp_ImplicitCast_1, float K2Node_SetFieldsInStruct_FilmWhiteClip_ImplicitCast_1, float K2Node_SetFieldsInStruct_HistogramLogMax_ImplicitCast_1, float K2Node_SetFieldsInStruct_HistogramLogMin_ImplicitCast_1, float K2Node_SetFieldsInStruct_AutoExposureMaxBrightness_ImplicitCast_1, float K2Node_SetFieldsInStruct_AutoExposureMinBrightness_ImplicitCast_1, float K2Node_SetFieldsInStruct_FilmShoulder_ImplicitCast_1, float K2Node_SetFieldsInStruct_LumenFinalGatherLightingUpdateSpeed_ImplicitCast_1, float K2Node_SetFieldsInStruct_FilmToe_ImplicitCast_1, float K2Node_SetFieldsInStruct_FilmSlope_ImplicitCast_1, float K2Node_SetFieldsInStruct_LumenFinalGatherLightingUpdateSpeed_ImplicitCast_2, float K2Node_SetFieldsInStruct_LensFlareIntensity_ImplicitCast_2, float CallFunc_GetFloatValue_InTime_ImplicitCast_9, double CallFunc_Add_DoubleDouble_B_ImplicitCast, float K2Node_SetFieldsInStruct_AutoExposureBias_ImplicitCast_1, float K2Node_SetFieldsInStruct_LumenSkylightLeaking_ImplicitCast_2, float K2Node_SetFieldsInStruct_LumenFinalGatherQuality_ImplicitCast_1, float K2Node_SetFieldsInStruct_LumenDiffuseColorBoost_ImplicitCast_2, float K2Node_SetFieldsInStruct_AutoExposureBias_ImplicitCast_2, float K2Node_SetFieldsInStruct_AutoExposureLowPercent_ImplicitCast_2, float K2Node_SetFieldsInStruct_AutoExposureHighPercent_ImplicitCast_2, float K2Node_SetFieldsInStruct_BloomIntensity_ImplicitCast_2, float K2Node_SetFieldsInStruct_LocalExposureHighlightContrastScale_ImplicitCast_2, float K2Node_SetFieldsInStruct_LocalExposureShadowContrastScale_ImplicitCast_2, float K2Node_SetFieldsInStruct_LocalExposureDetailStrength_ImplicitCast_2, float K2Node_SetFieldsInStruct_LocalExposureBlurredLuminanceBlend_ImplicitCast_2, float K2Node_SetFieldsInStruct_LocalExposureBlurredLuminanceKernelSizePercent_ImplicitCast_2, float K2Node_SetFieldsInStruct_LocalExposureMiddleGreyBias_ImplicitCast_2, float K2Node_SetFieldsInStruct_LumenFullSkylightLeakingDistance_ImplicitCast_2, float K2Node_SetFieldsInStruct_AutoExposureSpeedDown_ImplicitCast_2, float K2Node_SetFieldsInStruct_AutoExposureSpeedUp_ImplicitCast_2, float K2Node_SetFieldsInStruct_WhiteTemp_ImplicitCast_2, float K2Node_SetFieldsInStruct_FilmWhiteClip_ImplicitCast_2, float K2Node_SetFieldsInStruct_HistogramLogMax_ImplicitCast_2, float K2Node_SetFieldsInStruct_HistogramLogMin_ImplicitCast_2, float K2Node_SetFieldsInStruct_AutoExposureMaxBrightness_ImplicitCast_2, float K2Node_SetFieldsInStruct_AutoExposureMinBrightness_ImplicitCast_2, float K2Node_SetFieldsInStruct_FilmShoulder_ImplicitCast_2, float K2Node_SetFieldsInStruct_FilmToe_ImplicitCast_2, float K2Node_SetFieldsInStruct_FilmSlope_ImplicitCast_2, float K2Node_SetFieldsInStruct_LumenFinalGatherLightingUpdateSpeed_ImplicitCast_3, float K2Node_SetFieldsInStruct_LumenFinalGatherLightingUpdateSpeed_ImplicitCast_4, float K2Node_SetFieldsInStruct_LumenFinalGatherLightingUpdateSpeed_ImplicitCast_5, float K2Node_SetFieldsInStruct_LumenFinalGatherLightingUpdateSpeed_ImplicitCast_6, float K2Node_SetFieldsInStruct_AutoExposureBias_ImplicitCast_3, float K2Node_SetFieldsInStruct_LensFlareIntensity_ImplicitCast_3, float K2Node_SetFieldsInStruct_LumenSkylightLeaking_ImplicitCast_3, float K2Node_SetFieldsInStruct_LumenFinalGatherQuality_ImplicitCast_2, float K2Node_SetFieldsInStruct_LumenDiffuseColorBoost_ImplicitCast_3, float K2Node_SetFieldsInStruct_AutoExposureLowPercent_ImplicitCast_3, float K2Node_SetFieldsInStruct_AutoExposureHighPercent_ImplicitCast_3, float K2Node_SetFieldsInStruct_BloomIntensity_ImplicitCast_3, float K2Node_SetFieldsInStruct_LumenFullSkylightLeakingDistance_ImplicitCast_3, float K2Node_SetFieldsInStruct_LocalExposureHighlightContrastScale_ImplicitCast_3, float K2Node_SetFieldsInStruct_LocalExposureShadowContrastScale_ImplicitCast_3, float K2Node_SetFieldsInStruct_LocalExposureDetailStrength_ImplicitCast_3, float K2Node_SetFieldsInStruct_LocalExposureBlurredLuminanceBlend_ImplicitCast_3, float K2Node_SetFieldsInStruct_LocalExposureBlurredLuminanceKernelSizePercent_ImplicitCast_3, float K2Node_SetFieldsInStruct_LocalExposureMiddleGreyBias_ImplicitCast_3, float K2Node_SetFieldsInStruct_AutoExposureSpeedDown_ImplicitCast_3, float K2Node_SetFieldsInStruct_AutoExposureSpeedUp_ImplicitCast_3, float K2Node_SetFieldsInStruct_WhiteTemp_ImplicitCast_3, float K2Node_SetFieldsInStruct_FilmWhiteClip_ImplicitCast_3, float K2Node_SetFieldsInStruct_HistogramLogMax_ImplicitCast_3, float K2Node_SetFieldsInStruct_HistogramLogMin_ImplicitCast_3, float K2Node_SetFieldsInStruct_AutoExposureMaxBrightness_ImplicitCast_3, float K2Node_SetFieldsInStruct_AutoExposureMinBrightness_ImplicitCast_3, float K2Node_SetFieldsInStruct_FilmShoulder_ImplicitCast_3, float K2Node_SetFieldsInStruct_FilmToe_ImplicitCast_3, float K2Node_SetFieldsInStruct_FilmSlope_ImplicitCast_3, float K2Node_SetFieldsInStruct_LensFlareIntensity_ImplicitCast_4, float K2Node_SetFieldsInStruct_LumenSkylightLeaking_ImplicitCast_4, float K2Node_SetFieldsInStruct_LumenFinalGatherQuality_ImplicitCast_3, float K2Node_SetFieldsInStruct_LumenDiffuseColorBoost_ImplicitCast_4, float K2Node_SetFieldsInStruct_AutoExposureBias_ImplicitCast_4, float K2Node_SetFieldsInStruct_AutoExposureLowPercent_ImplicitCast_4, float K2Node_SetFieldsInStruct_AutoExposureHighPercent_ImplicitCast_4, float K2Node_SetFieldsInStruct_BloomIntensity_ImplicitCast_4, float K2Node_SetFieldsInStruct_LocalExposureHighlightContrastScale_ImplicitCast_4, float K2Node_SetFieldsInStruct_LocalExposureShadowContrastScale_ImplicitCast_4, float K2Node_SetFieldsInStruct_LocalExposureDetailStrength_ImplicitCast_4, float K2Node_SetFieldsInStruct_LocalExposureBlurredLuminanceBlend_ImplicitCast_4, float K2Node_SetFieldsInStruct_LocalExposureBlurredLuminanceKernelSizePercent_ImplicitCast_4, float K2Node_SetFieldsInStruct_LocalExposureMiddleGreyBias_ImplicitCast_4, float K2Node_SetFieldsInStruct_LumenFullSkylightLeakingDistance_ImplicitCast_4, float K2Node_SetFieldsInStruct_AutoExposureSpeedDown_ImplicitCast_4, float K2Node_SetFieldsInStruct_AutoExposureSpeedUp_ImplicitCast_4, float K2Node_SetFieldsInStruct_WhiteTemp_ImplicitCast_4, float K2Node_SetFieldsInStruct_FilmWhiteClip_ImplicitCast_4, float K2Node_SetFieldsInStruct_HistogramLogMax_ImplicitCast_4, float K2Node_SetFieldsInStruct_HistogramLogMin_ImplicitCast_4, float K2Node_SetFieldsInStruct_AutoExposureMaxBrightness_ImplicitCast_4, float K2Node_SetFieldsInStruct_AutoExposureMinBrightness_ImplicitCast_4, float K2Node_SetFieldsInStruct_FilmShoulder_ImplicitCast_4, float K2Node_SetFieldsInStruct_FilmToe_ImplicitCast_4, float K2Node_SetFieldsInStruct_FilmSlope_ImplicitCast_4, float K2Node_SetFieldsInStruct_LensFlareIntensity_ImplicitCast_5, float K2Node_SetFieldsInStruct_LumenSkylightLeaking_ImplicitCast_5, float K2Node_SetFieldsInStruct_LumenFinalGatherQuality_ImplicitCast_4, float K2Node_SetFieldsInStruct_LumenDiffuseColorBoost_ImplicitCast_5, float K2Node_SetFieldsInStruct_AutoExposureBias_ImplicitCast_5, float K2Node_SetFieldsInStruct_AutoExposureLowPercent_ImplicitCast_5, float K2Node_SetFieldsInStruct_AutoExposureHighPercent_ImplicitCast_5, float K2Node_SetFieldsInStruct_BloomIntensity_ImplicitCast_5, float K2Node_SetFieldsInStruct_LocalExposureHighlightContrastScale_ImplicitCast_5, float K2Node_SetFieldsInStruct_LocalExposureShadowContrastScale_ImplicitCast_5, float K2Node_SetFieldsInStruct_LocalExposureDetailStrength_ImplicitCast_5, float K2Node_SetFieldsInStruct_LocalExposureBlurredLuminanceBlend_ImplicitCast_5, float K2Node_SetFieldsInStruct_LocalExposureBlurredLuminanceKernelSizePercent_ImplicitCast_5, float K2Node_SetFieldsInStruct_LocalExposureMiddleGreyBias_ImplicitCast_5, float K2Node_SetFieldsInStruct_LumenFullSkylightLeakingDistance_ImplicitCast_5, float K2Node_SetFieldsInStruct_LocalExposureHighlightContrastScale_ImplicitCast_6, float K2Node_SetFieldsInStruct_LocalExposureShadowContrastScale_ImplicitCast_6, float K2Node_SetFieldsInStruct_LocalExposureDetailStrength_ImplicitCast_6, float K2Node_SetFieldsInStruct_LocalExposureBlurredLuminanceBlend_ImplicitCast_6, float K2Node_SetFieldsInStruct_LocalExposureBlurredLuminanceKernelSizePercent_ImplicitCast_6, float K2Node_SetFieldsInStruct_LocalExposureMiddleGreyBias_ImplicitCast_6, float K2Node_SetFieldsInStruct_LumenSkylightLeaking_ImplicitCast_6, float K2Node_SetFieldsInStruct_LumenDiffuseColorBoost_ImplicitCast_6, float CallFunc_GetFloatValue_InTime_ImplicitCast_10, double CallFunc_Add_DoubleDouble_B_ImplicitCast_1, float CallFunc_GetFloatValue_InTime_ImplicitCast_11, float CallFunc_GetFloatValue_InTime_ImplicitCast_12, double CallFunc_Lerp_Alpha_ImplicitCast_9, double CallFunc_Lerp_Alpha_ImplicitCast_10, float CallFunc_GetFloatValue_InTime_ImplicitCast_13, float K2Node_SetFieldsInStruct_AutoExposureBias_ImplicitCast_6, double CallFunc_Lerp_Alpha_ImplicitCast_11, float CallFunc_GetFloatValue_InTime_ImplicitCast_14, double CallFunc_Lerp_Alpha_ImplicitCast_12, float K2Node_SetFieldsInStruct_AutoExposureHighPercent_ImplicitCast_6, float CallFunc_GetFloatValue_InTime_ImplicitCast_15, float CallFunc_GetFloatValue_InTime_ImplicitCast_16, double CallFunc_Lerp_Alpha_ImplicitCast_13, double CallFunc_Lerp_Alpha_ImplicitCast_14, float K2Node_SetFieldsInStruct_LumenFullSkylightLeakingDistance_ImplicitCast_6, float K2Node_SetFieldsInStruct_AutoExposureLowPercent_ImplicitCast_6, float CallFunc_GetFloatValue_InTime_ImplicitCast_17, double CallFunc_Lerp_Alpha_ImplicitCast_15, float K2Node_SetFieldsInStruct_LensFlareIntensity_ImplicitCast_6, float CallFunc_GetFloatValue_InTime_ImplicitCast_18, double CallFunc_Lerp_Alpha_ImplicitCast_16, float CallFunc_GetFloatValue_InTime_ImplicitCast_19, double CallFunc_Lerp_Alpha_ImplicitCast_17, float K2Node_SetFieldsInStruct_AutoExposureSpeedDown_ImplicitCast_5, float K2Node_SetFieldsInStruct_AutoExposureSpeedUp_ImplicitCast_5, float K2Node_SetFieldsInStruct_BloomIntensity_ImplicitCast_6, float K2Node_SetFieldsInStruct_AutoExposureSpeedDown_ImplicitCast_6, float K2Node_SetFieldsInStruct_AutoExposureSpeedUp_ImplicitCast_6, float K2Node_SetFieldsInStruct_WhiteTemp_ImplicitCast_5, float K2Node_SetFieldsInStruct_FilmWhiteClip_ImplicitCast_5, float K2Node_SetFieldsInStruct_HistogramLogMax_ImplicitCast_5, float K2Node_SetFieldsInStruct_HistogramLogMin_ImplicitCast_5, float K2Node_SetFieldsInStruct_AutoExposureMaxBrightness_ImplicitCast_5, float K2Node_SetFieldsInStruct_AutoExposureMinBrightness_ImplicitCast_5, float K2Node_SetFieldsInStruct_FilmShoulder_ImplicitCast_5, float K2Node_SetFieldsInStruct_FilmToe_ImplicitCast_5, float K2Node_SetFieldsInStruct_FilmSlope_ImplicitCast_5, float K2Node_SetFieldsInStruct_LumenFinalGatherQuality_ImplicitCast_5, float K2Node_SetFieldsInStruct_LumenFinalGatherQuality_ImplicitCast_6, float K2Node_SetFieldsInStruct_WhiteTemp_ImplicitCast_6, float K2Node_SetFieldsInStruct_FilmWhiteClip_ImplicitCast_6, float K2Node_SetFieldsInStruct_HistogramLogMax_ImplicitCast_6, float K2Node_SetFieldsInStruct_HistogramLogMin_ImplicitCast_6, float K2Node_SetFieldsInStruct_AutoExposureMaxBrightness_ImplicitCast_6, float K2Node_SetFieldsInStruct_AutoExposureMinBrightness_ImplicitCast_6, float K2Node_SetFieldsInStruct_FilmShoulder_ImplicitCast_6, float K2Node_SetFieldsInStruct_FilmToe_ImplicitCast_6, float K2Node_SetFieldsInStruct_FilmSlope_ImplicitCast_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Lighting_C", "Post Process");

	Params::UTimeofDay_Lighting_C_Post_Process_Params Parms{};

	Parms.DetailStrength = DetailStrength;
	Parms.MiddlegreyBias = MiddlegreyBias;
	Parms.BlurLumianceBlend = BlurLumianceBlend;
	Parms.BlurKernalsize = BlurKernalsize;
	Parms.Contrast_Lerp = Contrast_Lerp;
	Parms.Exposure_Comp_Night_Lerp = Exposure_Comp_Night_Lerp;
	Parms.Exposure_Array_DawnDusk = Exposure_Array_DawnDusk;
	Parms.Exposure_Comp_Curve_Alpha = Exposure_Comp_Curve_Alpha;
	Parms.Exposure_Comp_Day_Lerp = Exposure_Comp_Day_Lerp;
	Parms.Exposure_Array_Night = Exposure_Array_Night;
	Parms.Exposure_Comp_Array = Exposure_Comp_Array;
	Parms.Exposure_Comp_Curve_Night = Exposure_Comp_Curve_Night;
	Parms.Exposure_Comp_Curve_Dawn_Dusk = Exposure_Comp_Curve_Dawn_Dusk;
	Parms.Exposure_Comp_Curve_Day = Exposure_Comp_Curve_Day;
	Parms.Exposure_Comp_Curve_Day_Night_Array_1 = Exposure_Comp_Curve_Day_Night_Array_1;
	Parms.Active_Exposure_Comp_Curve = Active_Exposure_Comp_Curve;
	Parms.LUT_Eccentric = LUT_Eccentric;
	Parms.LUT_Basic = LUT_Basic;
	Parms.LUT_Cool = LUT_Cool;
	Parms.LUT_Warm = LUT_Warm;
	Parms.Exposure_Comp_Curve_2 = Exposure_Comp_Curve_2;
	Parms.Exposure_Comp_Curve_Day_Night_Array = Exposure_Comp_Curve_Day_Night_Array;
	Parms.Exposure_Compensation_Curve_Switch = Exposure_Compensation_Curve_Switch;
	Parms.AdjustedTime24Hour = AdjustedTime24Hour;
	Parms.LUT_Array = LUT_Array;
	Parms.PostProcess_Speed_Down = PostProcess_Speed_Down;
	Parms.PostProcess_Speed_Up = PostProcess_Speed_Up;
	Parms.PostProcessMaxBrightness_Array = PostProcessMaxBrightness_Array;
	Parms.PostProcessMinBrightness_Array = PostProcessMinBrightness_Array;
	Parms.PostProcessExposureCompensation_Array = PostProcessExposureCompensation_Array;
	Parms.PostProcessExposureCompensation_Curve = PostProcessExposureCompensation_Curve;
	Parms.PostProcessMaxBrightness = PostProcessMaxBrightness;
	Parms.PostProcessMinBrightness = PostProcessMinBrightness;
	Parms.PostProcessExposureCompensation = PostProcessExposureCompensation;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue_1 = CallFunc_GetFloatValue_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_GetFloatValue_ReturnValue_2 = CallFunc_GetFloatValue_ReturnValue_2;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.CallFunc_GetFloatValue_ReturnValue_3 = CallFunc_GetFloatValue_ReturnValue_3;
	Parms.CallFunc_GetFloatValue_ReturnValue_4 = CallFunc_GetFloatValue_ReturnValue_4;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Lerp_ReturnValue_3 = CallFunc_Lerp_ReturnValue_3;
	Parms.CallFunc_Lerp_ReturnValue_4 = CallFunc_Lerp_ReturnValue_4;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Local_Exposure_Local_Highlight = CallFunc_Local_Exposure_Local_Highlight;
	Parms.CallFunc_Local_Exposure_Local_Shadow = CallFunc_Local_Exposure_Local_Shadow;
	Parms.CallFunc_Local_Exposure_Detail_Strength = CallFunc_Local_Exposure_Detail_Strength;
	Parms.CallFunc_Local_Exposure_Blur_Lumiance_Blend = CallFunc_Local_Exposure_Blur_Lumiance_Blend;
	Parms.CallFunc_Local_Exposure_Blur_Kernel_size = CallFunc_Local_Exposure_Blur_Kernel_size;
	Parms.CallFunc_Local_Exposure_Middlegrey_Bias = CallFunc_Local_Exposure_Middlegrey_Bias;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_1 = CallFunc_GetDataTableRowNames_OutRowNames_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.CallFunc_Desert_PPM_ReturnValue = CallFunc_Desert_PPM_ReturnValue;
	Parms.CallFunc_Final_Gather_Update_Speed_finalgather = CallFunc_Final_Gather_Update_Speed_finalgather;
	Parms.CallFunc_Exposure_Compensation_NoLumen_Exposure_Compensation = CallFunc_Exposure_Compensation_NoLumen_Exposure_Compensation;
	Parms.CallFunc_LensFlare_ReturnValue = CallFunc_LensFlare_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue_5 = CallFunc_GetFloatValue_ReturnValue_5;
	Parms.CallFunc_Lerp_ReturnValue_5 = CallFunc_Lerp_ReturnValue_5;
	Parms.CallFunc_GetFloatValue_ReturnValue_6 = CallFunc_GetFloatValue_ReturnValue_6;
	Parms.CallFunc_Lerp_ReturnValue_6 = CallFunc_Lerp_ReturnValue_6;
	Parms.CallFunc_GetFloatValue_ReturnValue_7 = CallFunc_GetFloatValue_ReturnValue_7;
	Parms.CallFunc_GetFloatValue_ReturnValue_8 = CallFunc_GetFloatValue_ReturnValue_8;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_SkylightLeaking_ReturnValue = CallFunc_SkylightLeaking_ReturnValue;
	Parms.CallFunc_Diffuse_Color_Boost_Final_Gather_Quality = CallFunc_Diffuse_Color_Boost_Final_Gather_Quality;
	Parms.CallFunc_Diffuse_Color_Boost_Diffuse_Boost = CallFunc_Diffuse_Color_Boost_Diffuse_Boost;
	Parms.CallFunc_Eye_Adaptation_Low_Percent = CallFunc_Eye_Adaptation_Low_Percent;
	Parms.CallFunc_Eye_Adaptation_High_Percent = CallFunc_Eye_Adaptation_High_Percent;
	Parms.CallFunc_Bloom_Bloom_Intensity = CallFunc_Bloom_Bloom_Intensity;
	Parms.CallFunc_Local_Exposure_Local_Highlight_1 = CallFunc_Local_Exposure_Local_Highlight_1;
	Parms.CallFunc_Local_Exposure_Local_Shadow_1 = CallFunc_Local_Exposure_Local_Shadow_1;
	Parms.CallFunc_Local_Exposure_Detail_Strength_1 = CallFunc_Local_Exposure_Detail_Strength_1;
	Parms.CallFunc_Local_Exposure_Blur_Lumiance_Blend_1 = CallFunc_Local_Exposure_Blur_Lumiance_Blend_1;
	Parms.CallFunc_Local_Exposure_Blur_Kernel_size_1 = CallFunc_Local_Exposure_Blur_Kernel_size_1;
	Parms.CallFunc_Local_Exposure_Middlegrey_Bias_1 = CallFunc_Local_Exposure_Middlegrey_Bias_1;
	Parms.CallFunc_Final_Gather_Update_Speed_finalgather_1 = CallFunc_Final_Gather_Update_Speed_finalgather_1;
	Parms.CallFunc_Desert_PPM_ReturnValue_1 = CallFunc_Desert_PPM_ReturnValue_1;
	Parms.CallFunc_Final_Gather_Update_Speed_finalgather_2 = CallFunc_Final_Gather_Update_Speed_finalgather_2;
	Parms.CallFunc_LensFlare_ReturnValue_1 = CallFunc_LensFlare_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Lerp_ReturnValue_7 = CallFunc_Lerp_ReturnValue_7;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Lerp_ReturnValue_8 = CallFunc_Lerp_ReturnValue_8;
	Parms.CallFunc_GetFloatValue_ReturnValue_9 = CallFunc_GetFloatValue_ReturnValue_9;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_SkylightLeaking_ReturnValue_1 = CallFunc_SkylightLeaking_ReturnValue_1;
	Parms.CallFunc_Diffuse_Color_Boost_Final_Gather_Quality_1 = CallFunc_Diffuse_Color_Boost_Final_Gather_Quality_1;
	Parms.CallFunc_Diffuse_Color_Boost_Diffuse_Boost_1 = CallFunc_Diffuse_Color_Boost_Diffuse_Boost_1;
	Parms.CallFunc_Exposure_Compensation_Exposure_Compensation = CallFunc_Exposure_Compensation_Exposure_Compensation;
	Parms.CallFunc_Eye_Adaptation_Low_Percent_1 = CallFunc_Eye_Adaptation_Low_Percent_1;
	Parms.CallFunc_Eye_Adaptation_High_Percent_1 = CallFunc_Eye_Adaptation_High_Percent_1;
	Parms.CallFunc_Bloom_Bloom_Intensity_1 = CallFunc_Bloom_Bloom_Intensity_1;
	Parms.CallFunc_Local_Exposure_Local_Highlight_2 = CallFunc_Local_Exposure_Local_Highlight_2;
	Parms.CallFunc_Local_Exposure_Local_Shadow_2 = CallFunc_Local_Exposure_Local_Shadow_2;
	Parms.CallFunc_Local_Exposure_Detail_Strength_2 = CallFunc_Local_Exposure_Detail_Strength_2;
	Parms.CallFunc_Local_Exposure_Blur_Lumiance_Blend_2 = CallFunc_Local_Exposure_Blur_Lumiance_Blend_2;
	Parms.CallFunc_Local_Exposure_Blur_Kernel_size_2 = CallFunc_Local_Exposure_Blur_Kernel_size_2;
	Parms.CallFunc_Local_Exposure_Middlegrey_Bias_2 = CallFunc_Local_Exposure_Middlegrey_Bias_2;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_Final_Gather_Update_Speed_finalgather_3 = CallFunc_Final_Gather_Update_Speed_finalgather_3;
	Parms.CallFunc_Final_Gather_Update_Speed_finalgather_4 = CallFunc_Final_Gather_Update_Speed_finalgather_4;
	Parms.CallFunc_Final_Gather_Update_Speed_finalgather_5 = CallFunc_Final_Gather_Update_Speed_finalgather_5;
	Parms.CallFunc_Final_Gather_Update_Speed_finalgather_6 = CallFunc_Final_Gather_Update_Speed_finalgather_6;
	Parms.CallFunc_Exposure_Compensation_NoLumen_Exposure_Compensation_1 = CallFunc_Exposure_Compensation_NoLumen_Exposure_Compensation_1;
	Parms.CallFunc_LensFlare_ReturnValue_2 = CallFunc_LensFlare_ReturnValue_2;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.K2Node_MakeArray_Array_5 = K2Node_MakeArray_Array_5;
	Parms.K2Node_MakeArray_Array_6 = K2Node_MakeArray_Array_6;
	Parms.K2Node_MakeArray_Array_7 = K2Node_MakeArray_Array_7;
	Parms.K2Node_MakeArray_Array_8 = K2Node_MakeArray_Array_8;
	Parms.CallFunc_PostProcessMaterals_ReturnValue = CallFunc_PostProcessMaterals_ReturnValue;
	Parms.CallFunc_SkylightLeaking_ReturnValue_2 = CallFunc_SkylightLeaking_ReturnValue_2;
	Parms.CallFunc_Diffuse_Color_Boost_Final_Gather_Quality_2 = CallFunc_Diffuse_Color_Boost_Final_Gather_Quality_2;
	Parms.CallFunc_Diffuse_Color_Boost_Diffuse_Boost_2 = CallFunc_Diffuse_Color_Boost_Diffuse_Boost_2;
	Parms.CallFunc_Eye_Adaptation_Low_Percent_2 = CallFunc_Eye_Adaptation_Low_Percent_2;
	Parms.CallFunc_Eye_Adaptation_High_Percent_2 = CallFunc_Eye_Adaptation_High_Percent_2;
	Parms.CallFunc_Bloom_Bloom_Intensity_2 = CallFunc_Bloom_Bloom_Intensity_2;
	Parms.CallFunc_Local_Exposure_Local_Highlight_3 = CallFunc_Local_Exposure_Local_Highlight_3;
	Parms.CallFunc_Local_Exposure_Local_Shadow_3 = CallFunc_Local_Exposure_Local_Shadow_3;
	Parms.CallFunc_Local_Exposure_Detail_Strength_3 = CallFunc_Local_Exposure_Detail_Strength_3;
	Parms.CallFunc_Local_Exposure_Blur_Lumiance_Blend_3 = CallFunc_Local_Exposure_Blur_Lumiance_Blend_3;
	Parms.CallFunc_Local_Exposure_Blur_Kernel_size_3 = CallFunc_Local_Exposure_Blur_Kernel_size_3;
	Parms.CallFunc_Local_Exposure_Middlegrey_Bias_3 = CallFunc_Local_Exposure_Middlegrey_Bias_3;
	Parms.K2Node_MakeArray_Array_9 = K2Node_MakeArray_Array_9;
	Parms.K2Node_SwitchInteger_CmpSuccess_2 = K2Node_SwitchInteger_CmpSuccess_2;
	Parms.CallFunc_LensFlare_ReturnValue_3 = CallFunc_LensFlare_ReturnValue_3;
	Parms.K2Node_MakeArray_Array_10 = K2Node_MakeArray_Array_10;
	Parms.K2Node_MakeArray_Array_11 = K2Node_MakeArray_Array_11;
	Parms.K2Node_MakeArray_Array_12 = K2Node_MakeArray_Array_12;
	Parms.K2Node_MakeArray_Array_13 = K2Node_MakeArray_Array_13;
	Parms.CallFunc_PostProcessMaterals_ReturnValue_1 = CallFunc_PostProcessMaterals_ReturnValue_1;
	Parms.CallFunc_SkylightLeaking_ReturnValue_3 = CallFunc_SkylightLeaking_ReturnValue_3;
	Parms.CallFunc_Diffuse_Color_Boost_Final_Gather_Quality_3 = CallFunc_Diffuse_Color_Boost_Final_Gather_Quality_3;
	Parms.CallFunc_Diffuse_Color_Boost_Diffuse_Boost_3 = CallFunc_Diffuse_Color_Boost_Diffuse_Boost_3;
	Parms.CallFunc_Exposure_Compensation_Exposure_Compensation_1 = CallFunc_Exposure_Compensation_Exposure_Compensation_1;
	Parms.CallFunc_Eye_Adaptation_Low_Percent_3 = CallFunc_Eye_Adaptation_Low_Percent_3;
	Parms.CallFunc_Eye_Adaptation_High_Percent_3 = CallFunc_Eye_Adaptation_High_Percent_3;
	Parms.CallFunc_Bloom_Bloom_Intensity_3 = CallFunc_Bloom_Bloom_Intensity_3;
	Parms.CallFunc_Local_Exposure_Local_Highlight_4 = CallFunc_Local_Exposure_Local_Highlight_4;
	Parms.CallFunc_Local_Exposure_Local_Shadow_4 = CallFunc_Local_Exposure_Local_Shadow_4;
	Parms.CallFunc_Local_Exposure_Detail_Strength_4 = CallFunc_Local_Exposure_Detail_Strength_4;
	Parms.CallFunc_Local_Exposure_Blur_Lumiance_Blend_4 = CallFunc_Local_Exposure_Blur_Lumiance_Blend_4;
	Parms.CallFunc_Local_Exposure_Blur_Kernel_size_4 = CallFunc_Local_Exposure_Blur_Kernel_size_4;
	Parms.CallFunc_Local_Exposure_Middlegrey_Bias_4 = CallFunc_Local_Exposure_Middlegrey_Bias_4;
	Parms.CallFunc_LensFlare_ReturnValue_4 = CallFunc_LensFlare_ReturnValue_4;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_PostProcessMaterals_ReturnValue_2 = CallFunc_PostProcessMaterals_ReturnValue_2;
	Parms.CallFunc_SkylightLeaking_ReturnValue_4 = CallFunc_SkylightLeaking_ReturnValue_4;
	Parms.CallFunc_Diffuse_Color_Boost_Final_Gather_Quality_4 = CallFunc_Diffuse_Color_Boost_Final_Gather_Quality_4;
	Parms.CallFunc_Diffuse_Color_Boost_Diffuse_Boost_4 = CallFunc_Diffuse_Color_Boost_Diffuse_Boost_4;
	Parms.CallFunc_Exposure_Compensation_Exposure_Compensation_2 = CallFunc_Exposure_Compensation_Exposure_Compensation_2;
	Parms.CallFunc_Eye_Adaptation_Low_Percent_4 = CallFunc_Eye_Adaptation_Low_Percent_4;
	Parms.CallFunc_Eye_Adaptation_High_Percent_4 = CallFunc_Eye_Adaptation_High_Percent_4;
	Parms.CallFunc_Bloom_Bloom_Intensity_4 = CallFunc_Bloom_Bloom_Intensity_4;
	Parms.CallFunc_Local_Exposure_Local_Highlight_5 = CallFunc_Local_Exposure_Local_Highlight_5;
	Parms.CallFunc_Local_Exposure_Local_Shadow_5 = CallFunc_Local_Exposure_Local_Shadow_5;
	Parms.CallFunc_Local_Exposure_Detail_Strength_5 = CallFunc_Local_Exposure_Detail_Strength_5;
	Parms.CallFunc_Local_Exposure_Blur_Lumiance_Blend_5 = CallFunc_Local_Exposure_Blur_Lumiance_Blend_5;
	Parms.CallFunc_Local_Exposure_Blur_Kernel_size_5 = CallFunc_Local_Exposure_Blur_Kernel_size_5;
	Parms.CallFunc_Local_Exposure_Middlegrey_Bias_5 = CallFunc_Local_Exposure_Middlegrey_Bias_5;
	Parms.CallFunc_Local_Exposure_Local_Highlight_6 = CallFunc_Local_Exposure_Local_Highlight_6;
	Parms.CallFunc_Local_Exposure_Local_Shadow_6 = CallFunc_Local_Exposure_Local_Shadow_6;
	Parms.CallFunc_Local_Exposure_Detail_Strength_6 = CallFunc_Local_Exposure_Detail_Strength_6;
	Parms.CallFunc_Local_Exposure_Blur_Lumiance_Blend_6 = CallFunc_Local_Exposure_Blur_Lumiance_Blend_6;
	Parms.CallFunc_Local_Exposure_Blur_Kernel_size_6 = CallFunc_Local_Exposure_Blur_Kernel_size_6;
	Parms.CallFunc_Local_Exposure_Middlegrey_Bias_6 = CallFunc_Local_Exposure_Middlegrey_Bias_6;
	Parms.CallFunc_GetFloatValue_ReturnValue_10 = CallFunc_GetFloatValue_ReturnValue_10;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_GetFloatValue_ReturnValue_11 = CallFunc_GetFloatValue_ReturnValue_11;
	Parms.CallFunc_GetFloatValue_ReturnValue_12 = CallFunc_GetFloatValue_ReturnValue_12;
	Parms.CallFunc_Lerp_ReturnValue_9 = CallFunc_Lerp_ReturnValue_9;
	Parms.CallFunc_Lerp_ReturnValue_10 = CallFunc_Lerp_ReturnValue_10;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_GetFloatValue_ReturnValue_13 = CallFunc_GetFloatValue_ReturnValue_13;
	Parms.CallFunc_GetFloatValue_ReturnValue_14 = CallFunc_GetFloatValue_ReturnValue_14;
	Parms.CallFunc_Lerp_ReturnValue_11 = CallFunc_Lerp_ReturnValue_11;
	Parms.CallFunc_Lerp_ReturnValue_12 = CallFunc_Lerp_ReturnValue_12;
	Parms.CallFunc_GetFloatValue_ReturnValue_15 = CallFunc_GetFloatValue_ReturnValue_15;
	Parms.CallFunc_GetFloatValue_ReturnValue_16 = CallFunc_GetFloatValue_ReturnValue_16;
	Parms.CallFunc_Lerp_ReturnValue_13 = CallFunc_Lerp_ReturnValue_13;
	Parms.CallFunc_Lerp_ReturnValue_14 = CallFunc_Lerp_ReturnValue_14;
	Parms.CallFunc_GetFloatValue_ReturnValue_17 = CallFunc_GetFloatValue_ReturnValue_17;
	Parms.CallFunc_Lerp_ReturnValue_15 = CallFunc_Lerp_ReturnValue_15;
	Parms.CallFunc_GetFloatValue_ReturnValue_18 = CallFunc_GetFloatValue_ReturnValue_18;
	Parms.CallFunc_GetFloatValue_ReturnValue_19 = CallFunc_GetFloatValue_ReturnValue_19;
	Parms.CallFunc_Array_Get_Item_8 = CallFunc_Array_Get_Item_8;
	Parms.CallFunc_Lerp_ReturnValue_16 = CallFunc_Lerp_ReturnValue_16;
	Parms.CallFunc_Lerp_ReturnValue_17 = CallFunc_Lerp_ReturnValue_17;
	Parms.K2Node_SwitchInteger_CmpSuccess_3 = K2Node_SwitchInteger_CmpSuccess_3;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess_4 = K2Node_SwitchInteger_CmpSuccess_4;
	Parms.CallFunc_Conv_ByteToDouble_ReturnValue = CallFunc_Conv_ByteToDouble_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_2 = CallFunc_GetDataTableRowNames_OutRowNames_2;
	Parms.CallFunc_Array_Get_Item_9 = CallFunc_Array_Get_Item_9;
	Parms.CallFunc_Desert_PPM_ReturnValue_2 = CallFunc_Desert_PPM_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_3 = CallFunc_GetDataTableRowNames_OutRowNames_3;
	Parms.CallFunc_Array_Get_Item_10 = CallFunc_Array_Get_Item_10;
	Parms.CallFunc_Array_Get_Item_11 = CallFunc_Array_Get_Item_11;
	Parms.K2Node_SwitchInteger_CmpSuccess_5 = K2Node_SwitchInteger_CmpSuccess_5;
	Parms.CallFunc_Array_Get_Item_12 = CallFunc_Array_Get_Item_12;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_2 = CallFunc_GetDataTableRowFromName_OutRow_2;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_2 = CallFunc_GetDataTableRowFromName_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_4 = CallFunc_GetDataTableRowNames_OutRowNames_4;
	Parms.CallFunc_Array_Get_Item_13 = CallFunc_Array_Get_Item_13;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_3 = CallFunc_GetDataTableRowFromName_OutRow_3;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_3 = CallFunc_GetDataTableRowFromName_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_14 = CallFunc_Array_Get_Item_14;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_4 = CallFunc_GetDataTableRowFromName_OutRow_4;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_4 = CallFunc_GetDataTableRowFromName_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast = CallFunc_GetFloatValue_InTime_ImplicitCast;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_1 = CallFunc_GetFloatValue_InTime_ImplicitCast_1;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast = CallFunc_Lerp_Alpha_ImplicitCast;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_1 = CallFunc_Lerp_Alpha_ImplicitCast_1;
	Parms.K2Node_SetFieldsInStruct_AutoExposureLowPercent_ImplicitCast = K2Node_SetFieldsInStruct_AutoExposureLowPercent_ImplicitCast;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_2 = CallFunc_GetFloatValue_InTime_ImplicitCast_2;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_2 = CallFunc_Lerp_Alpha_ImplicitCast_2;
	Parms.K2Node_SetFieldsInStruct_LensFlareIntensity_ImplicitCast = K2Node_SetFieldsInStruct_LensFlareIntensity_ImplicitCast;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_3 = CallFunc_GetFloatValue_InTime_ImplicitCast_3;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_3 = CallFunc_Lerp_Alpha_ImplicitCast_3;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_4 = CallFunc_GetFloatValue_InTime_ImplicitCast_4;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_4 = CallFunc_Lerp_Alpha_ImplicitCast_4;
	Parms.K2Node_SetFieldsInStruct_AutoExposureSpeedDown_ImplicitCast = K2Node_SetFieldsInStruct_AutoExposureSpeedDown_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_AutoExposureSpeedUp_ImplicitCast = K2Node_SetFieldsInStruct_AutoExposureSpeedUp_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_BloomIntensity_ImplicitCast = K2Node_SetFieldsInStruct_BloomIntensity_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_LumenFullSkylightLeakingDistance_ImplicitCast = K2Node_SetFieldsInStruct_LumenFullSkylightLeakingDistance_ImplicitCast;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_5 = CallFunc_GetFloatValue_InTime_ImplicitCast_5;
	Parms.K2Node_SetFieldsInStruct_LocalExposureHighlightContrastScale_ImplicitCast = K2Node_SetFieldsInStruct_LocalExposureHighlightContrastScale_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_LocalExposureShadowContrastScale_ImplicitCast = K2Node_SetFieldsInStruct_LocalExposureShadowContrastScale_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_LocalExposureDetailStrength_ImplicitCast = K2Node_SetFieldsInStruct_LocalExposureDetailStrength_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_LocalExposureBlurredLuminanceBlend_ImplicitCast = K2Node_SetFieldsInStruct_LocalExposureBlurredLuminanceBlend_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_LocalExposureBlurredLuminanceKernelSizePercent_ImplicitCast = K2Node_SetFieldsInStruct_LocalExposureBlurredLuminanceKernelSizePercent_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_LocalExposureMiddleGreyBias_ImplicitCast = K2Node_SetFieldsInStruct_LocalExposureMiddleGreyBias_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_WhiteTemp_ImplicitCast = K2Node_SetFieldsInStruct_WhiteTemp_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_FilmWhiteClip_ImplicitCast = K2Node_SetFieldsInStruct_FilmWhiteClip_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_HistogramLogMax_ImplicitCast = K2Node_SetFieldsInStruct_HistogramLogMax_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_HistogramLogMin_ImplicitCast = K2Node_SetFieldsInStruct_HistogramLogMin_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_AutoExposureMaxBrightness_ImplicitCast = K2Node_SetFieldsInStruct_AutoExposureMaxBrightness_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_AutoExposureMinBrightness_ImplicitCast = K2Node_SetFieldsInStruct_AutoExposureMinBrightness_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_FilmShoulder_ImplicitCast = K2Node_SetFieldsInStruct_FilmShoulder_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_FilmToe_ImplicitCast = K2Node_SetFieldsInStruct_FilmToe_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_FilmSlope_ImplicitCast = K2Node_SetFieldsInStruct_FilmSlope_ImplicitCast;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_6 = CallFunc_GetFloatValue_InTime_ImplicitCast_6;
	Parms.K2Node_SetFieldsInStruct_LumenFinalGatherLightingUpdateSpeed_ImplicitCast = K2Node_SetFieldsInStruct_LumenFinalGatherLightingUpdateSpeed_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_AutoExposureBias_ImplicitCast = K2Node_SetFieldsInStruct_AutoExposureBias_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_LensFlareIntensity_ImplicitCast_1 = K2Node_SetFieldsInStruct_LensFlareIntensity_ImplicitCast_1;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_5 = CallFunc_Lerp_Alpha_ImplicitCast_5;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_6 = CallFunc_Lerp_Alpha_ImplicitCast_6;
	Parms.K2Node_SetFieldsInStruct_LumenSkylightLeaking_ImplicitCast = K2Node_SetFieldsInStruct_LumenSkylightLeaking_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_AutoExposureHighPercent_ImplicitCast = K2Node_SetFieldsInStruct_AutoExposureHighPercent_ImplicitCast;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_7 = CallFunc_GetFloatValue_InTime_ImplicitCast_7;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_8 = CallFunc_GetFloatValue_InTime_ImplicitCast_8;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_7 = CallFunc_Lerp_Alpha_ImplicitCast_7;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_8 = CallFunc_Lerp_Alpha_ImplicitCast_8;
	Parms.K2Node_SetFieldsInStruct_LumenDiffuseColorBoost_ImplicitCast = K2Node_SetFieldsInStruct_LumenDiffuseColorBoost_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_LumenSkylightLeaking_ImplicitCast_1 = K2Node_SetFieldsInStruct_LumenSkylightLeaking_ImplicitCast_1;
	Parms.K2Node_SetFieldsInStruct_LumenFinalGatherQuality_ImplicitCast = K2Node_SetFieldsInStruct_LumenFinalGatherQuality_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_LumenDiffuseColorBoost_ImplicitCast_1 = K2Node_SetFieldsInStruct_LumenDiffuseColorBoost_ImplicitCast_1;
	Parms.K2Node_SetFieldsInStruct_AutoExposureLowPercent_ImplicitCast_1 = K2Node_SetFieldsInStruct_AutoExposureLowPercent_ImplicitCast_1;
	Parms.K2Node_SetFieldsInStruct_AutoExposureHighPercent_ImplicitCast_1 = K2Node_SetFieldsInStruct_AutoExposureHighPercent_ImplicitCast_1;
	Parms.K2Node_SetFieldsInStruct_BloomIntensity_ImplicitCast_1 = K2Node_SetFieldsInStruct_BloomIntensity_ImplicitCast_1;
	Parms.K2Node_SetFieldsInStruct_LumenFullSkylightLeakingDistance_ImplicitCast_1 = K2Node_SetFieldsInStruct_LumenFullSkylightLeakingDistance_ImplicitCast_1;
	Parms.K2Node_SetFieldsInStruct_LocalExposureHighlightContrastScale_ImplicitCast_1 = K2Node_SetFieldsInStruct_LocalExposureHighlightContrastScale_ImplicitCast_1;
	Parms.K2Node_SetFieldsInStruct_LocalExposureShadowContrastScale_ImplicitCast_1 = K2Node_SetFieldsInStruct_LocalExposureShadowContrastScale_ImplicitCast_1;
	Parms.K2Node_SetFieldsInStruct_LocalExposureDetailStrength_ImplicitCast_1 = K2Node_SetFieldsInStruct_LocalExposureDetailStrength_ImplicitCast_1;
	Parms.K2Node_SetFieldsInStruct_LocalExposureBlurredLuminanceBlend_ImplicitCast_1 = K2Node_SetFieldsInStruct_LocalExposureBlurredLuminanceBlend_ImplicitCast_1;
	Parms.K2Node_SetFieldsInStruct_LocalExposureBlurredLuminanceKernelSizePercent_ImplicitCast_1 = K2Node_SetFieldsInStruct_LocalExposureBlurredLuminanceKernelSizePercent_ImplicitCast_1;
	Parms.K2Node_SetFieldsInStruct_LocalExposureMiddleGreyBias_ImplicitCast_1 = K2Node_SetFieldsInStruct_LocalExposureMiddleGreyBias_ImplicitCast_1;
	Parms.K2Node_SetFieldsInStruct_AutoExposureSpeedDown_ImplicitCast_1 = K2Node_SetFieldsInStruct_AutoExposureSpeedDown_ImplicitCast_1;
	Parms.K2Node_SetFieldsInStruct_AutoExposureSpeedUp_ImplicitCast_1 = K2Node_SetFieldsInStruct_AutoExposureSpeedUp_ImplicitCast_1;
	Parms.K2Node_SetFieldsInStruct_WhiteTemp_ImplicitCast_1 = K2Node_SetFieldsInStruct_WhiteTemp_ImplicitCast_1;
	Parms.K2Node_SetFieldsInStruct_FilmWhiteClip_ImplicitCast_1 = K2Node_SetFieldsInStruct_FilmWhiteClip_ImplicitCast_1;
	Parms.K2Node_SetFieldsInStruct_HistogramLogMax_ImplicitCast_1 = K2Node_SetFieldsInStruct_HistogramLogMax_ImplicitCast_1;
	Parms.K2Node_SetFieldsInStruct_HistogramLogMin_ImplicitCast_1 = K2Node_SetFieldsInStruct_HistogramLogMin_ImplicitCast_1;
	Parms.K2Node_SetFieldsInStruct_AutoExposureMaxBrightness_ImplicitCast_1 = K2Node_SetFieldsInStruct_AutoExposureMaxBrightness_ImplicitCast_1;
	Parms.K2Node_SetFieldsInStruct_AutoExposureMinBrightness_ImplicitCast_1 = K2Node_SetFieldsInStruct_AutoExposureMinBrightness_ImplicitCast_1;
	Parms.K2Node_SetFieldsInStruct_FilmShoulder_ImplicitCast_1 = K2Node_SetFieldsInStruct_FilmShoulder_ImplicitCast_1;
	Parms.K2Node_SetFieldsInStruct_LumenFinalGatherLightingUpdateSpeed_ImplicitCast_1 = K2Node_SetFieldsInStruct_LumenFinalGatherLightingUpdateSpeed_ImplicitCast_1;
	Parms.K2Node_SetFieldsInStruct_FilmToe_ImplicitCast_1 = K2Node_SetFieldsInStruct_FilmToe_ImplicitCast_1;
	Parms.K2Node_SetFieldsInStruct_FilmSlope_ImplicitCast_1 = K2Node_SetFieldsInStruct_FilmSlope_ImplicitCast_1;
	Parms.K2Node_SetFieldsInStruct_LumenFinalGatherLightingUpdateSpeed_ImplicitCast_2 = K2Node_SetFieldsInStruct_LumenFinalGatherLightingUpdateSpeed_ImplicitCast_2;
	Parms.K2Node_SetFieldsInStruct_LensFlareIntensity_ImplicitCast_2 = K2Node_SetFieldsInStruct_LensFlareIntensity_ImplicitCast_2;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_9 = CallFunc_GetFloatValue_InTime_ImplicitCast_9;
	Parms.CallFunc_Add_DoubleDouble_B_ImplicitCast = CallFunc_Add_DoubleDouble_B_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_AutoExposureBias_ImplicitCast_1 = K2Node_SetFieldsInStruct_AutoExposureBias_ImplicitCast_1;
	Parms.K2Node_SetFieldsInStruct_LumenSkylightLeaking_ImplicitCast_2 = K2Node_SetFieldsInStruct_LumenSkylightLeaking_ImplicitCast_2;
	Parms.K2Node_SetFieldsInStruct_LumenFinalGatherQuality_ImplicitCast_1 = K2Node_SetFieldsInStruct_LumenFinalGatherQuality_ImplicitCast_1;
	Parms.K2Node_SetFieldsInStruct_LumenDiffuseColorBoost_ImplicitCast_2 = K2Node_SetFieldsInStruct_LumenDiffuseColorBoost_ImplicitCast_2;
	Parms.K2Node_SetFieldsInStruct_AutoExposureBias_ImplicitCast_2 = K2Node_SetFieldsInStruct_AutoExposureBias_ImplicitCast_2;
	Parms.K2Node_SetFieldsInStruct_AutoExposureLowPercent_ImplicitCast_2 = K2Node_SetFieldsInStruct_AutoExposureLowPercent_ImplicitCast_2;
	Parms.K2Node_SetFieldsInStruct_AutoExposureHighPercent_ImplicitCast_2 = K2Node_SetFieldsInStruct_AutoExposureHighPercent_ImplicitCast_2;
	Parms.K2Node_SetFieldsInStruct_BloomIntensity_ImplicitCast_2 = K2Node_SetFieldsInStruct_BloomIntensity_ImplicitCast_2;
	Parms.K2Node_SetFieldsInStruct_LocalExposureHighlightContrastScale_ImplicitCast_2 = K2Node_SetFieldsInStruct_LocalExposureHighlightContrastScale_ImplicitCast_2;
	Parms.K2Node_SetFieldsInStruct_LocalExposureShadowContrastScale_ImplicitCast_2 = K2Node_SetFieldsInStruct_LocalExposureShadowContrastScale_ImplicitCast_2;
	Parms.K2Node_SetFieldsInStruct_LocalExposureDetailStrength_ImplicitCast_2 = K2Node_SetFieldsInStruct_LocalExposureDetailStrength_ImplicitCast_2;
	Parms.K2Node_SetFieldsInStruct_LocalExposureBlurredLuminanceBlend_ImplicitCast_2 = K2Node_SetFieldsInStruct_LocalExposureBlurredLuminanceBlend_ImplicitCast_2;
	Parms.K2Node_SetFieldsInStruct_LocalExposureBlurredLuminanceKernelSizePercent_ImplicitCast_2 = K2Node_SetFieldsInStruct_LocalExposureBlurredLuminanceKernelSizePercent_ImplicitCast_2;
	Parms.K2Node_SetFieldsInStruct_LocalExposureMiddleGreyBias_ImplicitCast_2 = K2Node_SetFieldsInStruct_LocalExposureMiddleGreyBias_ImplicitCast_2;
	Parms.K2Node_SetFieldsInStruct_LumenFullSkylightLeakingDistance_ImplicitCast_2 = K2Node_SetFieldsInStruct_LumenFullSkylightLeakingDistance_ImplicitCast_2;
	Parms.K2Node_SetFieldsInStruct_AutoExposureSpeedDown_ImplicitCast_2 = K2Node_SetFieldsInStruct_AutoExposureSpeedDown_ImplicitCast_2;
	Parms.K2Node_SetFieldsInStruct_AutoExposureSpeedUp_ImplicitCast_2 = K2Node_SetFieldsInStruct_AutoExposureSpeedUp_ImplicitCast_2;
	Parms.K2Node_SetFieldsInStruct_WhiteTemp_ImplicitCast_2 = K2Node_SetFieldsInStruct_WhiteTemp_ImplicitCast_2;
	Parms.K2Node_SetFieldsInStruct_FilmWhiteClip_ImplicitCast_2 = K2Node_SetFieldsInStruct_FilmWhiteClip_ImplicitCast_2;
	Parms.K2Node_SetFieldsInStruct_HistogramLogMax_ImplicitCast_2 = K2Node_SetFieldsInStruct_HistogramLogMax_ImplicitCast_2;
	Parms.K2Node_SetFieldsInStruct_HistogramLogMin_ImplicitCast_2 = K2Node_SetFieldsInStruct_HistogramLogMin_ImplicitCast_2;
	Parms.K2Node_SetFieldsInStruct_AutoExposureMaxBrightness_ImplicitCast_2 = K2Node_SetFieldsInStruct_AutoExposureMaxBrightness_ImplicitCast_2;
	Parms.K2Node_SetFieldsInStruct_AutoExposureMinBrightness_ImplicitCast_2 = K2Node_SetFieldsInStruct_AutoExposureMinBrightness_ImplicitCast_2;
	Parms.K2Node_SetFieldsInStruct_FilmShoulder_ImplicitCast_2 = K2Node_SetFieldsInStruct_FilmShoulder_ImplicitCast_2;
	Parms.K2Node_SetFieldsInStruct_FilmToe_ImplicitCast_2 = K2Node_SetFieldsInStruct_FilmToe_ImplicitCast_2;
	Parms.K2Node_SetFieldsInStruct_FilmSlope_ImplicitCast_2 = K2Node_SetFieldsInStruct_FilmSlope_ImplicitCast_2;
	Parms.K2Node_SetFieldsInStruct_LumenFinalGatherLightingUpdateSpeed_ImplicitCast_3 = K2Node_SetFieldsInStruct_LumenFinalGatherLightingUpdateSpeed_ImplicitCast_3;
	Parms.K2Node_SetFieldsInStruct_LumenFinalGatherLightingUpdateSpeed_ImplicitCast_4 = K2Node_SetFieldsInStruct_LumenFinalGatherLightingUpdateSpeed_ImplicitCast_4;
	Parms.K2Node_SetFieldsInStruct_LumenFinalGatherLightingUpdateSpeed_ImplicitCast_5 = K2Node_SetFieldsInStruct_LumenFinalGatherLightingUpdateSpeed_ImplicitCast_5;
	Parms.K2Node_SetFieldsInStruct_LumenFinalGatherLightingUpdateSpeed_ImplicitCast_6 = K2Node_SetFieldsInStruct_LumenFinalGatherLightingUpdateSpeed_ImplicitCast_6;
	Parms.K2Node_SetFieldsInStruct_AutoExposureBias_ImplicitCast_3 = K2Node_SetFieldsInStruct_AutoExposureBias_ImplicitCast_3;
	Parms.K2Node_SetFieldsInStruct_LensFlareIntensity_ImplicitCast_3 = K2Node_SetFieldsInStruct_LensFlareIntensity_ImplicitCast_3;
	Parms.K2Node_SetFieldsInStruct_LumenSkylightLeaking_ImplicitCast_3 = K2Node_SetFieldsInStruct_LumenSkylightLeaking_ImplicitCast_3;
	Parms.K2Node_SetFieldsInStruct_LumenFinalGatherQuality_ImplicitCast_2 = K2Node_SetFieldsInStruct_LumenFinalGatherQuality_ImplicitCast_2;
	Parms.K2Node_SetFieldsInStruct_LumenDiffuseColorBoost_ImplicitCast_3 = K2Node_SetFieldsInStruct_LumenDiffuseColorBoost_ImplicitCast_3;
	Parms.K2Node_SetFieldsInStruct_AutoExposureLowPercent_ImplicitCast_3 = K2Node_SetFieldsInStruct_AutoExposureLowPercent_ImplicitCast_3;
	Parms.K2Node_SetFieldsInStruct_AutoExposureHighPercent_ImplicitCast_3 = K2Node_SetFieldsInStruct_AutoExposureHighPercent_ImplicitCast_3;
	Parms.K2Node_SetFieldsInStruct_BloomIntensity_ImplicitCast_3 = K2Node_SetFieldsInStruct_BloomIntensity_ImplicitCast_3;
	Parms.K2Node_SetFieldsInStruct_LumenFullSkylightLeakingDistance_ImplicitCast_3 = K2Node_SetFieldsInStruct_LumenFullSkylightLeakingDistance_ImplicitCast_3;
	Parms.K2Node_SetFieldsInStruct_LocalExposureHighlightContrastScale_ImplicitCast_3 = K2Node_SetFieldsInStruct_LocalExposureHighlightContrastScale_ImplicitCast_3;
	Parms.K2Node_SetFieldsInStruct_LocalExposureShadowContrastScale_ImplicitCast_3 = K2Node_SetFieldsInStruct_LocalExposureShadowContrastScale_ImplicitCast_3;
	Parms.K2Node_SetFieldsInStruct_LocalExposureDetailStrength_ImplicitCast_3 = K2Node_SetFieldsInStruct_LocalExposureDetailStrength_ImplicitCast_3;
	Parms.K2Node_SetFieldsInStruct_LocalExposureBlurredLuminanceBlend_ImplicitCast_3 = K2Node_SetFieldsInStruct_LocalExposureBlurredLuminanceBlend_ImplicitCast_3;
	Parms.K2Node_SetFieldsInStruct_LocalExposureBlurredLuminanceKernelSizePercent_ImplicitCast_3 = K2Node_SetFieldsInStruct_LocalExposureBlurredLuminanceKernelSizePercent_ImplicitCast_3;
	Parms.K2Node_SetFieldsInStruct_LocalExposureMiddleGreyBias_ImplicitCast_3 = K2Node_SetFieldsInStruct_LocalExposureMiddleGreyBias_ImplicitCast_3;
	Parms.K2Node_SetFieldsInStruct_AutoExposureSpeedDown_ImplicitCast_3 = K2Node_SetFieldsInStruct_AutoExposureSpeedDown_ImplicitCast_3;
	Parms.K2Node_SetFieldsInStruct_AutoExposureSpeedUp_ImplicitCast_3 = K2Node_SetFieldsInStruct_AutoExposureSpeedUp_ImplicitCast_3;
	Parms.K2Node_SetFieldsInStruct_WhiteTemp_ImplicitCast_3 = K2Node_SetFieldsInStruct_WhiteTemp_ImplicitCast_3;
	Parms.K2Node_SetFieldsInStruct_FilmWhiteClip_ImplicitCast_3 = K2Node_SetFieldsInStruct_FilmWhiteClip_ImplicitCast_3;
	Parms.K2Node_SetFieldsInStruct_HistogramLogMax_ImplicitCast_3 = K2Node_SetFieldsInStruct_HistogramLogMax_ImplicitCast_3;
	Parms.K2Node_SetFieldsInStruct_HistogramLogMin_ImplicitCast_3 = K2Node_SetFieldsInStruct_HistogramLogMin_ImplicitCast_3;
	Parms.K2Node_SetFieldsInStruct_AutoExposureMaxBrightness_ImplicitCast_3 = K2Node_SetFieldsInStruct_AutoExposureMaxBrightness_ImplicitCast_3;
	Parms.K2Node_SetFieldsInStruct_AutoExposureMinBrightness_ImplicitCast_3 = K2Node_SetFieldsInStruct_AutoExposureMinBrightness_ImplicitCast_3;
	Parms.K2Node_SetFieldsInStruct_FilmShoulder_ImplicitCast_3 = K2Node_SetFieldsInStruct_FilmShoulder_ImplicitCast_3;
	Parms.K2Node_SetFieldsInStruct_FilmToe_ImplicitCast_3 = K2Node_SetFieldsInStruct_FilmToe_ImplicitCast_3;
	Parms.K2Node_SetFieldsInStruct_FilmSlope_ImplicitCast_3 = K2Node_SetFieldsInStruct_FilmSlope_ImplicitCast_3;
	Parms.K2Node_SetFieldsInStruct_LensFlareIntensity_ImplicitCast_4 = K2Node_SetFieldsInStruct_LensFlareIntensity_ImplicitCast_4;
	Parms.K2Node_SetFieldsInStruct_LumenSkylightLeaking_ImplicitCast_4 = K2Node_SetFieldsInStruct_LumenSkylightLeaking_ImplicitCast_4;
	Parms.K2Node_SetFieldsInStruct_LumenFinalGatherQuality_ImplicitCast_3 = K2Node_SetFieldsInStruct_LumenFinalGatherQuality_ImplicitCast_3;
	Parms.K2Node_SetFieldsInStruct_LumenDiffuseColorBoost_ImplicitCast_4 = K2Node_SetFieldsInStruct_LumenDiffuseColorBoost_ImplicitCast_4;
	Parms.K2Node_SetFieldsInStruct_AutoExposureBias_ImplicitCast_4 = K2Node_SetFieldsInStruct_AutoExposureBias_ImplicitCast_4;
	Parms.K2Node_SetFieldsInStruct_AutoExposureLowPercent_ImplicitCast_4 = K2Node_SetFieldsInStruct_AutoExposureLowPercent_ImplicitCast_4;
	Parms.K2Node_SetFieldsInStruct_AutoExposureHighPercent_ImplicitCast_4 = K2Node_SetFieldsInStruct_AutoExposureHighPercent_ImplicitCast_4;
	Parms.K2Node_SetFieldsInStruct_BloomIntensity_ImplicitCast_4 = K2Node_SetFieldsInStruct_BloomIntensity_ImplicitCast_4;
	Parms.K2Node_SetFieldsInStruct_LocalExposureHighlightContrastScale_ImplicitCast_4 = K2Node_SetFieldsInStruct_LocalExposureHighlightContrastScale_ImplicitCast_4;
	Parms.K2Node_SetFieldsInStruct_LocalExposureShadowContrastScale_ImplicitCast_4 = K2Node_SetFieldsInStruct_LocalExposureShadowContrastScale_ImplicitCast_4;
	Parms.K2Node_SetFieldsInStruct_LocalExposureDetailStrength_ImplicitCast_4 = K2Node_SetFieldsInStruct_LocalExposureDetailStrength_ImplicitCast_4;
	Parms.K2Node_SetFieldsInStruct_LocalExposureBlurredLuminanceBlend_ImplicitCast_4 = K2Node_SetFieldsInStruct_LocalExposureBlurredLuminanceBlend_ImplicitCast_4;
	Parms.K2Node_SetFieldsInStruct_LocalExposureBlurredLuminanceKernelSizePercent_ImplicitCast_4 = K2Node_SetFieldsInStruct_LocalExposureBlurredLuminanceKernelSizePercent_ImplicitCast_4;
	Parms.K2Node_SetFieldsInStruct_LocalExposureMiddleGreyBias_ImplicitCast_4 = K2Node_SetFieldsInStruct_LocalExposureMiddleGreyBias_ImplicitCast_4;
	Parms.K2Node_SetFieldsInStruct_LumenFullSkylightLeakingDistance_ImplicitCast_4 = K2Node_SetFieldsInStruct_LumenFullSkylightLeakingDistance_ImplicitCast_4;
	Parms.K2Node_SetFieldsInStruct_AutoExposureSpeedDown_ImplicitCast_4 = K2Node_SetFieldsInStruct_AutoExposureSpeedDown_ImplicitCast_4;
	Parms.K2Node_SetFieldsInStruct_AutoExposureSpeedUp_ImplicitCast_4 = K2Node_SetFieldsInStruct_AutoExposureSpeedUp_ImplicitCast_4;
	Parms.K2Node_SetFieldsInStruct_WhiteTemp_ImplicitCast_4 = K2Node_SetFieldsInStruct_WhiteTemp_ImplicitCast_4;
	Parms.K2Node_SetFieldsInStruct_FilmWhiteClip_ImplicitCast_4 = K2Node_SetFieldsInStruct_FilmWhiteClip_ImplicitCast_4;
	Parms.K2Node_SetFieldsInStruct_HistogramLogMax_ImplicitCast_4 = K2Node_SetFieldsInStruct_HistogramLogMax_ImplicitCast_4;
	Parms.K2Node_SetFieldsInStruct_HistogramLogMin_ImplicitCast_4 = K2Node_SetFieldsInStruct_HistogramLogMin_ImplicitCast_4;
	Parms.K2Node_SetFieldsInStruct_AutoExposureMaxBrightness_ImplicitCast_4 = K2Node_SetFieldsInStruct_AutoExposureMaxBrightness_ImplicitCast_4;
	Parms.K2Node_SetFieldsInStruct_AutoExposureMinBrightness_ImplicitCast_4 = K2Node_SetFieldsInStruct_AutoExposureMinBrightness_ImplicitCast_4;
	Parms.K2Node_SetFieldsInStruct_FilmShoulder_ImplicitCast_4 = K2Node_SetFieldsInStruct_FilmShoulder_ImplicitCast_4;
	Parms.K2Node_SetFieldsInStruct_FilmToe_ImplicitCast_4 = K2Node_SetFieldsInStruct_FilmToe_ImplicitCast_4;
	Parms.K2Node_SetFieldsInStruct_FilmSlope_ImplicitCast_4 = K2Node_SetFieldsInStruct_FilmSlope_ImplicitCast_4;
	Parms.K2Node_SetFieldsInStruct_LensFlareIntensity_ImplicitCast_5 = K2Node_SetFieldsInStruct_LensFlareIntensity_ImplicitCast_5;
	Parms.K2Node_SetFieldsInStruct_LumenSkylightLeaking_ImplicitCast_5 = K2Node_SetFieldsInStruct_LumenSkylightLeaking_ImplicitCast_5;
	Parms.K2Node_SetFieldsInStruct_LumenFinalGatherQuality_ImplicitCast_4 = K2Node_SetFieldsInStruct_LumenFinalGatherQuality_ImplicitCast_4;
	Parms.K2Node_SetFieldsInStruct_LumenDiffuseColorBoost_ImplicitCast_5 = K2Node_SetFieldsInStruct_LumenDiffuseColorBoost_ImplicitCast_5;
	Parms.K2Node_SetFieldsInStruct_AutoExposureBias_ImplicitCast_5 = K2Node_SetFieldsInStruct_AutoExposureBias_ImplicitCast_5;
	Parms.K2Node_SetFieldsInStruct_AutoExposureLowPercent_ImplicitCast_5 = K2Node_SetFieldsInStruct_AutoExposureLowPercent_ImplicitCast_5;
	Parms.K2Node_SetFieldsInStruct_AutoExposureHighPercent_ImplicitCast_5 = K2Node_SetFieldsInStruct_AutoExposureHighPercent_ImplicitCast_5;
	Parms.K2Node_SetFieldsInStruct_BloomIntensity_ImplicitCast_5 = K2Node_SetFieldsInStruct_BloomIntensity_ImplicitCast_5;
	Parms.K2Node_SetFieldsInStruct_LocalExposureHighlightContrastScale_ImplicitCast_5 = K2Node_SetFieldsInStruct_LocalExposureHighlightContrastScale_ImplicitCast_5;
	Parms.K2Node_SetFieldsInStruct_LocalExposureShadowContrastScale_ImplicitCast_5 = K2Node_SetFieldsInStruct_LocalExposureShadowContrastScale_ImplicitCast_5;
	Parms.K2Node_SetFieldsInStruct_LocalExposureDetailStrength_ImplicitCast_5 = K2Node_SetFieldsInStruct_LocalExposureDetailStrength_ImplicitCast_5;
	Parms.K2Node_SetFieldsInStruct_LocalExposureBlurredLuminanceBlend_ImplicitCast_5 = K2Node_SetFieldsInStruct_LocalExposureBlurredLuminanceBlend_ImplicitCast_5;
	Parms.K2Node_SetFieldsInStruct_LocalExposureBlurredLuminanceKernelSizePercent_ImplicitCast_5 = K2Node_SetFieldsInStruct_LocalExposureBlurredLuminanceKernelSizePercent_ImplicitCast_5;
	Parms.K2Node_SetFieldsInStruct_LocalExposureMiddleGreyBias_ImplicitCast_5 = K2Node_SetFieldsInStruct_LocalExposureMiddleGreyBias_ImplicitCast_5;
	Parms.K2Node_SetFieldsInStruct_LumenFullSkylightLeakingDistance_ImplicitCast_5 = K2Node_SetFieldsInStruct_LumenFullSkylightLeakingDistance_ImplicitCast_5;
	Parms.K2Node_SetFieldsInStruct_LocalExposureHighlightContrastScale_ImplicitCast_6 = K2Node_SetFieldsInStruct_LocalExposureHighlightContrastScale_ImplicitCast_6;
	Parms.K2Node_SetFieldsInStruct_LocalExposureShadowContrastScale_ImplicitCast_6 = K2Node_SetFieldsInStruct_LocalExposureShadowContrastScale_ImplicitCast_6;
	Parms.K2Node_SetFieldsInStruct_LocalExposureDetailStrength_ImplicitCast_6 = K2Node_SetFieldsInStruct_LocalExposureDetailStrength_ImplicitCast_6;
	Parms.K2Node_SetFieldsInStruct_LocalExposureBlurredLuminanceBlend_ImplicitCast_6 = K2Node_SetFieldsInStruct_LocalExposureBlurredLuminanceBlend_ImplicitCast_6;
	Parms.K2Node_SetFieldsInStruct_LocalExposureBlurredLuminanceKernelSizePercent_ImplicitCast_6 = K2Node_SetFieldsInStruct_LocalExposureBlurredLuminanceKernelSizePercent_ImplicitCast_6;
	Parms.K2Node_SetFieldsInStruct_LocalExposureMiddleGreyBias_ImplicitCast_6 = K2Node_SetFieldsInStruct_LocalExposureMiddleGreyBias_ImplicitCast_6;
	Parms.K2Node_SetFieldsInStruct_LumenSkylightLeaking_ImplicitCast_6 = K2Node_SetFieldsInStruct_LumenSkylightLeaking_ImplicitCast_6;
	Parms.K2Node_SetFieldsInStruct_LumenDiffuseColorBoost_ImplicitCast_6 = K2Node_SetFieldsInStruct_LumenDiffuseColorBoost_ImplicitCast_6;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_10 = CallFunc_GetFloatValue_InTime_ImplicitCast_10;
	Parms.CallFunc_Add_DoubleDouble_B_ImplicitCast_1 = CallFunc_Add_DoubleDouble_B_ImplicitCast_1;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_11 = CallFunc_GetFloatValue_InTime_ImplicitCast_11;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_12 = CallFunc_GetFloatValue_InTime_ImplicitCast_12;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_9 = CallFunc_Lerp_Alpha_ImplicitCast_9;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_10 = CallFunc_Lerp_Alpha_ImplicitCast_10;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_13 = CallFunc_GetFloatValue_InTime_ImplicitCast_13;
	Parms.K2Node_SetFieldsInStruct_AutoExposureBias_ImplicitCast_6 = K2Node_SetFieldsInStruct_AutoExposureBias_ImplicitCast_6;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_11 = CallFunc_Lerp_Alpha_ImplicitCast_11;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_14 = CallFunc_GetFloatValue_InTime_ImplicitCast_14;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_12 = CallFunc_Lerp_Alpha_ImplicitCast_12;
	Parms.K2Node_SetFieldsInStruct_AutoExposureHighPercent_ImplicitCast_6 = K2Node_SetFieldsInStruct_AutoExposureHighPercent_ImplicitCast_6;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_15 = CallFunc_GetFloatValue_InTime_ImplicitCast_15;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_16 = CallFunc_GetFloatValue_InTime_ImplicitCast_16;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_13 = CallFunc_Lerp_Alpha_ImplicitCast_13;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_14 = CallFunc_Lerp_Alpha_ImplicitCast_14;
	Parms.K2Node_SetFieldsInStruct_LumenFullSkylightLeakingDistance_ImplicitCast_6 = K2Node_SetFieldsInStruct_LumenFullSkylightLeakingDistance_ImplicitCast_6;
	Parms.K2Node_SetFieldsInStruct_AutoExposureLowPercent_ImplicitCast_6 = K2Node_SetFieldsInStruct_AutoExposureLowPercent_ImplicitCast_6;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_17 = CallFunc_GetFloatValue_InTime_ImplicitCast_17;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_15 = CallFunc_Lerp_Alpha_ImplicitCast_15;
	Parms.K2Node_SetFieldsInStruct_LensFlareIntensity_ImplicitCast_6 = K2Node_SetFieldsInStruct_LensFlareIntensity_ImplicitCast_6;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_18 = CallFunc_GetFloatValue_InTime_ImplicitCast_18;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_16 = CallFunc_Lerp_Alpha_ImplicitCast_16;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_19 = CallFunc_GetFloatValue_InTime_ImplicitCast_19;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_17 = CallFunc_Lerp_Alpha_ImplicitCast_17;
	Parms.K2Node_SetFieldsInStruct_AutoExposureSpeedDown_ImplicitCast_5 = K2Node_SetFieldsInStruct_AutoExposureSpeedDown_ImplicitCast_5;
	Parms.K2Node_SetFieldsInStruct_AutoExposureSpeedUp_ImplicitCast_5 = K2Node_SetFieldsInStruct_AutoExposureSpeedUp_ImplicitCast_5;
	Parms.K2Node_SetFieldsInStruct_BloomIntensity_ImplicitCast_6 = K2Node_SetFieldsInStruct_BloomIntensity_ImplicitCast_6;
	Parms.K2Node_SetFieldsInStruct_AutoExposureSpeedDown_ImplicitCast_6 = K2Node_SetFieldsInStruct_AutoExposureSpeedDown_ImplicitCast_6;
	Parms.K2Node_SetFieldsInStruct_AutoExposureSpeedUp_ImplicitCast_6 = K2Node_SetFieldsInStruct_AutoExposureSpeedUp_ImplicitCast_6;
	Parms.K2Node_SetFieldsInStruct_WhiteTemp_ImplicitCast_5 = K2Node_SetFieldsInStruct_WhiteTemp_ImplicitCast_5;
	Parms.K2Node_SetFieldsInStruct_FilmWhiteClip_ImplicitCast_5 = K2Node_SetFieldsInStruct_FilmWhiteClip_ImplicitCast_5;
	Parms.K2Node_SetFieldsInStruct_HistogramLogMax_ImplicitCast_5 = K2Node_SetFieldsInStruct_HistogramLogMax_ImplicitCast_5;
	Parms.K2Node_SetFieldsInStruct_HistogramLogMin_ImplicitCast_5 = K2Node_SetFieldsInStruct_HistogramLogMin_ImplicitCast_5;
	Parms.K2Node_SetFieldsInStruct_AutoExposureMaxBrightness_ImplicitCast_5 = K2Node_SetFieldsInStruct_AutoExposureMaxBrightness_ImplicitCast_5;
	Parms.K2Node_SetFieldsInStruct_AutoExposureMinBrightness_ImplicitCast_5 = K2Node_SetFieldsInStruct_AutoExposureMinBrightness_ImplicitCast_5;
	Parms.K2Node_SetFieldsInStruct_FilmShoulder_ImplicitCast_5 = K2Node_SetFieldsInStruct_FilmShoulder_ImplicitCast_5;
	Parms.K2Node_SetFieldsInStruct_FilmToe_ImplicitCast_5 = K2Node_SetFieldsInStruct_FilmToe_ImplicitCast_5;
	Parms.K2Node_SetFieldsInStruct_FilmSlope_ImplicitCast_5 = K2Node_SetFieldsInStruct_FilmSlope_ImplicitCast_5;
	Parms.K2Node_SetFieldsInStruct_LumenFinalGatherQuality_ImplicitCast_5 = K2Node_SetFieldsInStruct_LumenFinalGatherQuality_ImplicitCast_5;
	Parms.K2Node_SetFieldsInStruct_LumenFinalGatherQuality_ImplicitCast_6 = K2Node_SetFieldsInStruct_LumenFinalGatherQuality_ImplicitCast_6;
	Parms.K2Node_SetFieldsInStruct_WhiteTemp_ImplicitCast_6 = K2Node_SetFieldsInStruct_WhiteTemp_ImplicitCast_6;
	Parms.K2Node_SetFieldsInStruct_FilmWhiteClip_ImplicitCast_6 = K2Node_SetFieldsInStruct_FilmWhiteClip_ImplicitCast_6;
	Parms.K2Node_SetFieldsInStruct_HistogramLogMax_ImplicitCast_6 = K2Node_SetFieldsInStruct_HistogramLogMax_ImplicitCast_6;
	Parms.K2Node_SetFieldsInStruct_HistogramLogMin_ImplicitCast_6 = K2Node_SetFieldsInStruct_HistogramLogMin_ImplicitCast_6;
	Parms.K2Node_SetFieldsInStruct_AutoExposureMaxBrightness_ImplicitCast_6 = K2Node_SetFieldsInStruct_AutoExposureMaxBrightness_ImplicitCast_6;
	Parms.K2Node_SetFieldsInStruct_AutoExposureMinBrightness_ImplicitCast_6 = K2Node_SetFieldsInStruct_AutoExposureMinBrightness_ImplicitCast_6;
	Parms.K2Node_SetFieldsInStruct_FilmShoulder_ImplicitCast_6 = K2Node_SetFieldsInStruct_FilmShoulder_ImplicitCast_6;
	Parms.K2Node_SetFieldsInStruct_FilmToe_ImplicitCast_6 = K2Node_SetFieldsInStruct_FilmToe_ImplicitCast_6;
	Parms.K2Node_SetFieldsInStruct_FilmSlope_ImplicitCast_6 = K2Node_SetFieldsInStruct_FilmSlope_ImplicitCast_6;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TimeofDay_Lighting.TimeofDay_Lighting_C.SkyLight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCurveFloat*                 SkyLight_Lerp_Cave_Day                                           (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 SkyLight_Lerp_Cave_Night                                         (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<double>                     SkyLight_Night_Array_NoLumen_Desert                              (Edit, BlueprintVisible)
// TArray<double>                     SkyLight_Day_Array_NoLumen_Desert                                (Edit, BlueprintVisible)
// TArray<double>                     SkyLight_Night_Array_NoLumen                                     (Edit, BlueprintVisible)
// TArray<double>                     SkyLight_Day_Array_NoLumen                                       (Edit, BlueprintVisible)
// class UCurveFloat*                 SkyLight_Lerp                                                    (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<double>                     SkyLight_Night_Array                                             (Edit, BlueprintVisible)
// TArray<double>                     SkyLight_Day_Array                                               (Edit, BlueprintVisible)
// TArray<class UCurveFloat*>         Cloud_Shadow_AO_Array                                            (Edit, BlueprintVisible)
// class UCurveFloat*                 Cloud_Shadow_AO                                                  (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UCurveFloat*>         Skylight_Intensity_Array                                         (Edit, BlueprintVisible)
// double                             AdjustedTime24Hour                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<double>                     K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<double>                     K2Node_MakeArray_Array_1                                         (ReferenceParm)
// TArray<double>                     K2Node_MakeArray_Array_2                                         (ReferenceParm)
// TArray<double>                     K2Node_MakeArray_Array_3                                         (ReferenceParm)
// TArray<double>                     K2Node_MakeArray_Array_4                                         (ReferenceParm)
// TArray<double>                     K2Node_MakeArray_Array_5                                         (ReferenceParm)
// TArray<class UCurveFloat*>         K2Node_MakeArray_Array_6                                         (ReferenceParm)
// TArray<class UCurveFloat*>         K2Node_MakeArray_Array_7                                         (ReferenceParm)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_ByteToDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_VE_Preset_Master         CallFunc_GetDataTableRowFromName_OutRow                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_ByteToDouble_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_1                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_VE_Preset_Master         CallFunc_GetDataTableRowFromName_OutRow_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetIntensity_NewIntensity_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetIntensity_NewIntensity_ImplicitCast_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetIntensity_NewIntensity_ImplicitCast_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetIntensity_NewIntensity_ImplicitCast_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetIntensity_NewIntensity_ImplicitCast_4                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetIntensity_NewIntensity_ImplicitCast_5                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetIntensity_NewIntensity_ImplicitCast_6                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetIntensity_NewIntensity_ImplicitCast_7                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Lighting_C::SkyLight(class UCurveFloat* SkyLight_Lerp_Cave_Day, class UCurveFloat* SkyLight_Lerp_Cave_Night, const TArray<double>& SkyLight_Night_Array_NoLumen_Desert, const TArray<double>& SkyLight_Day_Array_NoLumen_Desert, const TArray<double>& SkyLight_Night_Array_NoLumen, const TArray<double>& SkyLight_Day_Array_NoLumen, class UCurveFloat* SkyLight_Lerp, const TArray<double>& SkyLight_Night_Array, const TArray<double>& SkyLight_Day_Array, const TArray<class UCurveFloat*>& Cloud_Shadow_AO_Array, class UCurveFloat* Cloud_Shadow_AO, const TArray<class UCurveFloat*>& Skylight_Intensity_Array, double AdjustedTime24Hour, TArray<double>& K2Node_MakeArray_Array, TArray<double>& K2Node_MakeArray_Array_1, TArray<double>& K2Node_MakeArray_Array_2, TArray<double>& K2Node_MakeArray_Array_3, TArray<double>& K2Node_MakeArray_Array_4, TArray<double>& K2Node_MakeArray_Array_5, TArray<class UCurveFloat*>& K2Node_MakeArray_Array_6, TArray<class UCurveFloat*>& K2Node_MakeArray_Array_7, int32 CallFunc_Conv_BoolToInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_SwitchInteger_CmpSuccess_1, float CallFunc_GetFloatValue_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess_2, double CallFunc_Lerp_ReturnValue, float CallFunc_GetFloatValue_ReturnValue_1, double CallFunc_Lerp_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess_3, bool K2Node_SwitchInteger_CmpSuccess_4, double CallFunc_Conv_ByteToDouble_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_FTrunc_ReturnValue, class FName CallFunc_Array_Get_Item, const struct FS_VE_Preset_Master& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, float CallFunc_GetFloatValue_ReturnValue_2, double CallFunc_Lerp_ReturnValue_2, int32 CallFunc_Conv_BoolToInt_ReturnValue_1, double CallFunc_Conv_ByteToDouble_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess_5, int32 CallFunc_FTrunc_ReturnValue_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_1, class FName CallFunc_Array_Get_Item_1, const struct FS_VE_Preset_Master& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, float CallFunc_GetFloatValue_ReturnValue_3, double CallFunc_Lerp_ReturnValue_3, int32 CallFunc_Conv_BoolToInt_ReturnValue_2, bool K2Node_SwitchInteger_CmpSuccess_6, bool CallFunc_IsValid_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, float CallFunc_SetIntensity_NewIntensity_ImplicitCast, float CallFunc_SetIntensity_NewIntensity_ImplicitCast_1, float CallFunc_GetFloatValue_InTime_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast, float CallFunc_SetIntensity_NewIntensity_ImplicitCast_2, float CallFunc_GetFloatValue_InTime_ImplicitCast_1, double CallFunc_Lerp_Alpha_ImplicitCast_1, float CallFunc_SetIntensity_NewIntensity_ImplicitCast_3, float CallFunc_SetIntensity_NewIntensity_ImplicitCast_4, float CallFunc_GetFloatValue_InTime_ImplicitCast_2, float CallFunc_SetIntensity_NewIntensity_ImplicitCast_5, double CallFunc_Lerp_Alpha_ImplicitCast_2, float CallFunc_SetIntensity_NewIntensity_ImplicitCast_6, float CallFunc_GetFloatValue_InTime_ImplicitCast_3, double CallFunc_Lerp_Alpha_ImplicitCast_3, float CallFunc_SetIntensity_NewIntensity_ImplicitCast_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Lighting_C", "SkyLight");

	Params::UTimeofDay_Lighting_C_SkyLight_Params Parms{};

	Parms.SkyLight_Lerp_Cave_Day = SkyLight_Lerp_Cave_Day;
	Parms.SkyLight_Lerp_Cave_Night = SkyLight_Lerp_Cave_Night;
	Parms.SkyLight_Night_Array_NoLumen_Desert = SkyLight_Night_Array_NoLumen_Desert;
	Parms.SkyLight_Day_Array_NoLumen_Desert = SkyLight_Day_Array_NoLumen_Desert;
	Parms.SkyLight_Night_Array_NoLumen = SkyLight_Night_Array_NoLumen;
	Parms.SkyLight_Day_Array_NoLumen = SkyLight_Day_Array_NoLumen;
	Parms.SkyLight_Lerp = SkyLight_Lerp;
	Parms.SkyLight_Night_Array = SkyLight_Night_Array;
	Parms.SkyLight_Day_Array = SkyLight_Day_Array;
	Parms.Cloud_Shadow_AO_Array = Cloud_Shadow_AO_Array;
	Parms.Cloud_Shadow_AO = Cloud_Shadow_AO;
	Parms.Skylight_Intensity_Array = Skylight_Intensity_Array;
	Parms.AdjustedTime24Hour = AdjustedTime24Hour;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.K2Node_MakeArray_Array_5 = K2Node_MakeArray_Array_5;
	Parms.K2Node_MakeArray_Array_6 = K2Node_MakeArray_Array_6;
	Parms.K2Node_MakeArray_Array_7 = K2Node_MakeArray_Array_7;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess_2 = K2Node_SwitchInteger_CmpSuccess_2;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue_1 = CallFunc_GetFloatValue_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.K2Node_SwitchInteger_CmpSuccess_3 = K2Node_SwitchInteger_CmpSuccess_3;
	Parms.K2Node_SwitchInteger_CmpSuccess_4 = K2Node_SwitchInteger_CmpSuccess_4;
	Parms.CallFunc_Conv_ByteToDouble_ReturnValue = CallFunc_Conv_ByteToDouble_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue_2 = CallFunc_GetFloatValue_ReturnValue_2;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_1 = CallFunc_Conv_BoolToInt_ReturnValue_1;
	Parms.CallFunc_Conv_ByteToDouble_ReturnValue_1 = CallFunc_Conv_ByteToDouble_ReturnValue_1;
	Parms.K2Node_SwitchInteger_CmpSuccess_5 = K2Node_SwitchInteger_CmpSuccess_5;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_1 = CallFunc_GetDataTableRowNames_OutRowNames_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_GetFloatValue_ReturnValue_3 = CallFunc_GetFloatValue_ReturnValue_3;
	Parms.CallFunc_Lerp_ReturnValue_3 = CallFunc_Lerp_ReturnValue_3;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_2 = CallFunc_Conv_BoolToInt_ReturnValue_2;
	Parms.K2Node_SwitchInteger_CmpSuccess_6 = K2Node_SwitchInteger_CmpSuccess_6;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_SetIntensity_NewIntensity_ImplicitCast = CallFunc_SetIntensity_NewIntensity_ImplicitCast;
	Parms.CallFunc_SetIntensity_NewIntensity_ImplicitCast_1 = CallFunc_SetIntensity_NewIntensity_ImplicitCast_1;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast = CallFunc_GetFloatValue_InTime_ImplicitCast;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast = CallFunc_Lerp_Alpha_ImplicitCast;
	Parms.CallFunc_SetIntensity_NewIntensity_ImplicitCast_2 = CallFunc_SetIntensity_NewIntensity_ImplicitCast_2;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_1 = CallFunc_GetFloatValue_InTime_ImplicitCast_1;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_1 = CallFunc_Lerp_Alpha_ImplicitCast_1;
	Parms.CallFunc_SetIntensity_NewIntensity_ImplicitCast_3 = CallFunc_SetIntensity_NewIntensity_ImplicitCast_3;
	Parms.CallFunc_SetIntensity_NewIntensity_ImplicitCast_4 = CallFunc_SetIntensity_NewIntensity_ImplicitCast_4;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_2 = CallFunc_GetFloatValue_InTime_ImplicitCast_2;
	Parms.CallFunc_SetIntensity_NewIntensity_ImplicitCast_5 = CallFunc_SetIntensity_NewIntensity_ImplicitCast_5;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_2 = CallFunc_Lerp_Alpha_ImplicitCast_2;
	Parms.CallFunc_SetIntensity_NewIntensity_ImplicitCast_6 = CallFunc_SetIntensity_NewIntensity_ImplicitCast_6;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_3 = CallFunc_GetFloatValue_InTime_ImplicitCast_3;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_3 = CallFunc_Lerp_Alpha_ImplicitCast_3;
	Parms.CallFunc_SetIntensity_NewIntensity_ImplicitCast_7 = CallFunc_SetIntensity_NewIntensity_ImplicitCast_7;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TimeofDay_Lighting.TimeofDay_Lighting_C.Celestial
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCurveFloat*                 Moon_Intensity_Lerp                                              (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<double>                     Moon_Intensity_Array                                             (Edit, BlueprintVisible)
// class UCurveFloat*                 Volumetric_Scatter_Int_Lerp_Night                                (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<double>                     Volumetric_Scatter_Cele_Array_Night                              (Edit, BlueprintVisible)
// TArray<double>                     Volumetric_Scatter_Cele_Array_DawnDusk                           (Edit, BlueprintVisible)
// TArray<class UCurveFloat*>         Celestial_Intensity_Array_Full                                   (Edit, BlueprintVisible)
// class UCurveFloat*                 Dynamic_Shadow_CascadeCele                                       (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 Dynamic_Shadow_Distance_Moon                                     (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCurveLinearColor*           Scattered_Lumiance_Curve_Cele                                    (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<double>                     Celestial_Intensity_Array                                        (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Selected_saturation_array                                        (Edit, BlueprintVisible)
// class UCurveFloat*                 Moon_Cast_Shadow                                                 (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 MoonVisibility                                                   (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 Celestial_Angle_Z                                                (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 Celestial_Angle_Y                                                (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 Celestial_Light_Shaft_Bloom                                      (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             AdjustedTime24Hour                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_NegateRotator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetFloatValue_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// double                             CallFunc_Conv_ByteToDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_VE_Preset_Master         CallFunc_GetDataTableRowFromName_OutRow                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShadowQuality_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_1                      (ReferenceParm)
// TArray<double>                     K2Node_MakeArray_Array                                           (ReferenceParm)
// double                             CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_ByteToDouble_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UCurveFloat*>         K2Node_MakeArray_Array_1                                         (ReferenceParm)
// int32                              CallFunc_FTrunc_ReturnValue_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_6                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_VE_Preset_Master         CallFunc_GetDataTableRowFromName_OutRow_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_7                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<double>                     K2Node_MakeArray_Array_2                                         (ReferenceParm)
// double                             CallFunc_Array_Get_Item_8                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_9                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<double>                     K2Node_MakeArray_Array_3                                         (ReferenceParm)
// TArray<double>                     K2Node_MakeArray_Array_4                                         (ReferenceParm)
// double                             CallFunc_Array_Get_Item_10                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_2                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_11                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Rayleigh_Inverse         CallFunc_GetDataTableRowFromName_OutRow_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_3                      (ReferenceParm)
// struct FLinearColor                CallFunc_Array_Get_Item_12                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_4                      (ReferenceParm)
// float                              CallFunc_GetFloatValue_ReturnValue_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_13                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Atmosphere_Master        CallFunc_GetDataTableRowFromName_OutRow_3                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_5                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_14                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Color_Table_Master       CallFunc_GetDataTableRowFromName_OutRow_4                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  CallFunc_Array_Get_Item_15                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_6                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_16                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_6                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Color_Master             CallFunc_GetDataTableRowFromName_OutRow_5                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_5                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_7                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_17                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_18                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Rayleigh_Inverse         CallFunc_GetDataTableRowFromName_OutRow_6                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_6                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Fog_Day                  CallFunc_GetDataTableRowFromName_OutRow_7                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_7                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_19                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_20                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_21                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_22                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_8                      (ReferenceParm)
// double                             CallFunc_Lerp_ReturnValue_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_23                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Nebula_Type              CallFunc_GetDataTableRowFromName_OutRow_8                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_8                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_9                      (ReferenceParm)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_10                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_24                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_25                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Main_Celestial_Color     CallFunc_GetDataTableRowFromName_OutRow_9                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_9                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Main_Celestial_Color     CallFunc_GetDataTableRowFromName_OutRow_10                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_10                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_26                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_11                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_27                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Color_Saturations        CallFunc_GetDataTableRowFromName_OutRow_11                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_11                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_28                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_9                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_10                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_29                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_30                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_7                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_5                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_31                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_32                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_33                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_34                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_8                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_6                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_9                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_7                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_11                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_12                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_13                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_35                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_6                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_14                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetIntensity_NewIntensity_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_ContactShadowLength_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FTrunc_A_ImplicitCast                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Roll_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FTrunc_A_ImplicitCast_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetVolumetricScatteringIntensity_NewIntensity_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetVolumetricScatteringIntensity_NewIntensity_ImplicitCast_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetIntensity_NewIntensity_ImplicitCast_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetDynamicShadowDistanceMovableLight_NewValue_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetCascadeTransitionFraction_NewValue_ImplicitCast      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetCascadeDistributionExponent_NewValue_ImplicitCast    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetDynamicShadowDistanceMovableLight_NewValue_ImplicitCast_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetCascadeTransitionFraction_NewValue_ImplicitCast_1    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetCascadeDistributionExponent_NewValue_ImplicitCast_1  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetVolumetricScatteringIntensity_NewIntensity_ImplicitCast_2(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_ContactShadowLength_ImplicitCast_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_6                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetVolumetricScatteringIntensity_NewIntensity_ImplicitCast_3(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetIntensity_NewIntensity_ImplicitCast_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_CloudShadowOnAtmosphereStrength_ImplicitCast  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_7                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetVolumetricScatteringIntensity_NewIntensity_ImplicitCast_4(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_8                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetVolumetricScatteringIntensity_NewIntensity_ImplicitCast_5(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_9                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_ContactShadowLength_ImplicitCast_2            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetShadowDistanceFadeoutFraction_NewValue_ImplicitCast  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetCascadeTransitionFraction_NewValue_ImplicitCast_2    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetCascadeDistributionExponent_NewValue_ImplicitCast_2  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetDynamicShadowDistanceMovableLight_NewValue_ImplicitCast_2(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Lighting_C::Celestial(class UCurveFloat* Moon_Intensity_Lerp, const TArray<double>& Moon_Intensity_Array, class UCurveFloat* Volumetric_Scatter_Int_Lerp_Night, const TArray<double>& Volumetric_Scatter_Cele_Array_Night, const TArray<double>& Volumetric_Scatter_Cele_Array_DawnDusk, const TArray<class UCurveFloat*>& Celestial_Intensity_Array_Full, class UCurveFloat* Dynamic_Shadow_CascadeCele, class UCurveFloat* Dynamic_Shadow_Distance_Moon, class UCurveLinearColor* Scattered_Lumiance_Curve_Cele, const TArray<double>& Celestial_Intensity_Array, const TArray<struct FLinearColor>& Selected_saturation_array, class UCurveFloat* Moon_Cast_Shadow, class UCurveFloat* MoonVisibility, class UCurveFloat* Celestial_Angle_Z, class UCurveFloat* Celestial_Angle_Y, class UCurveFloat* Celestial_Light_Shaft_Bloom, double AdjustedTime24Hour, double CallFunc_Array_Get_Item, float CallFunc_GetFloatValue_ReturnValue, double CallFunc_Lerp_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_SwitchInteger_CmpSuccess_1, bool K2Node_SwitchInteger_CmpSuccess_2, float CallFunc_GetFloatValue_ReturnValue_1, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess_3, bool K2Node_SwitchInteger_CmpSuccess_4, bool K2Node_SwitchInteger_CmpSuccess_5, float CallFunc_GetFloatValue_ReturnValue_2, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue, float CallFunc_GetFloatValue_ReturnValue_3, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_NegateRotator_ReturnValue, float CallFunc_GetFloatValue_ReturnValue_4, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, int32 CallFunc_FTrunc_ReturnValue_1, bool CallFunc_Conv_IntToBool_ReturnValue_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, double CallFunc_Conv_ByteToDouble_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_2, class FName CallFunc_Array_Get_Item_1, const struct FS_VE_Preset_Master& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, double CallFunc_Array_Get_Item_2, double CallFunc_Lerp_ReturnValue_1, int32 CallFunc_Conv_BoolToInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess_6, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_1, TArray<double>& K2Node_MakeArray_Array, double CallFunc_Array_Get_Item_3, double CallFunc_Array_Get_Item_4, double CallFunc_Array_Get_Item_5, double CallFunc_Conv_ByteToDouble_ReturnValue_1, TArray<class UCurveFloat*>& K2Node_MakeArray_Array_1, int32 CallFunc_FTrunc_ReturnValue_3, class FName CallFunc_Array_Get_Item_6, const struct FS_VE_Preset_Master& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, double CallFunc_Array_Get_Item_7, TArray<double>& K2Node_MakeArray_Array_2, double CallFunc_Array_Get_Item_8, double CallFunc_Array_Get_Item_9, TArray<double>& K2Node_MakeArray_Array_3, TArray<double>& K2Node_MakeArray_Array_4, double CallFunc_Array_Get_Item_10, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_2, class FName CallFunc_Array_Get_Item_11, const struct FS_Rayleigh_Inverse& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_3, const struct FLinearColor& CallFunc_Array_Get_Item_12, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_4, float CallFunc_GetFloatValue_ReturnValue_5, class FName CallFunc_Array_Get_Item_13, const struct FS_Atmosphere_Master& CallFunc_GetDataTableRowFromName_OutRow_3, bool CallFunc_GetDataTableRowFromName_ReturnValue_3, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_5, class FName CallFunc_Array_Get_Item_14, const struct FS_Color_Table_Master& CallFunc_GetDataTableRowFromName_OutRow_4, bool CallFunc_GetDataTableRowFromName_ReturnValue_4, class UDataTable* CallFunc_Array_Get_Item_15, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_6, class FName CallFunc_Array_Get_Item_16, float CallFunc_GetFloatValue_ReturnValue_6, const struct FS_Color_Master& CallFunc_GetDataTableRowFromName_OutRow_5, bool CallFunc_GetDataTableRowFromName_ReturnValue_5, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_7, class FName CallFunc_Array_Get_Item_17, class FName CallFunc_Array_Get_Item_18, const struct FS_Rayleigh_Inverse& CallFunc_GetDataTableRowFromName_OutRow_6, bool CallFunc_GetDataTableRowFromName_ReturnValue_6, const struct FS_Fog_Day& CallFunc_GetDataTableRowFromName_OutRow_7, bool CallFunc_GetDataTableRowFromName_ReturnValue_7, double CallFunc_Array_Get_Item_19, const struct FLinearColor& CallFunc_Array_Get_Item_20, double CallFunc_Array_Get_Item_21, double CallFunc_Lerp_ReturnValue_2, double CallFunc_Array_Get_Item_22, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_8, double CallFunc_Lerp_ReturnValue_3, class FName CallFunc_Array_Get_Item_23, const struct FS_Nebula_Type& CallFunc_GetDataTableRowFromName_OutRow_8, bool CallFunc_GetDataTableRowFromName_ReturnValue_8, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_9, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_10, class FName CallFunc_Array_Get_Item_24, class FName CallFunc_Array_Get_Item_25, const struct FS_Main_Celestial_Color& CallFunc_GetDataTableRowFromName_OutRow_9, bool CallFunc_GetDataTableRowFromName_ReturnValue_9, const struct FS_Main_Celestial_Color& CallFunc_GetDataTableRowFromName_OutRow_10, bool CallFunc_GetDataTableRowFromName_ReturnValue_10, const struct FLinearColor& CallFunc_Array_Get_Item_26, int32 CallFunc_Conv_BoolToInt_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess_7, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Lerp_ReturnValue_4, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_11, class FName CallFunc_Array_Get_Item_27, const struct FS_Color_Saturations& CallFunc_GetDataTableRowFromName_OutRow_11, bool CallFunc_GetDataTableRowFromName_ReturnValue_11, const struct FLinearColor& CallFunc_Array_Get_Item_28, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess_8, int32 CallFunc_Conv_BoolToInt_ReturnValue_2, int32 CallFunc_Conv_BoolToInt_ReturnValue_3, bool K2Node_SwitchInteger_CmpSuccess_9, bool K2Node_SwitchInteger_CmpSuccess_10, double CallFunc_Array_Get_Item_29, double CallFunc_Array_Get_Item_30, float CallFunc_GetFloatValue_ReturnValue_7, double CallFunc_Lerp_ReturnValue_5, double CallFunc_Array_Get_Item_31, double CallFunc_Array_Get_Item_32, double CallFunc_Array_Get_Item_33, double CallFunc_Array_Get_Item_34, float CallFunc_GetFloatValue_ReturnValue_8, double CallFunc_Lerp_ReturnValue_6, float CallFunc_GetFloatValue_ReturnValue_9, int32 CallFunc_Conv_BoolToInt_ReturnValue_4, double CallFunc_Lerp_ReturnValue_7, bool K2Node_SwitchInteger_CmpSuccess_11, int32 CallFunc_FTrunc_ReturnValue_4, int32 CallFunc_Conv_BoolToInt_ReturnValue_5, bool K2Node_SwitchInteger_CmpSuccess_12, bool K2Node_SwitchInteger_CmpSuccess_13, const struct FLinearColor& CallFunc_Array_Get_Item_35, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue_2, int32 CallFunc_Conv_BoolToInt_ReturnValue_6, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess_14, double CallFunc_Multiply_DoubleDouble_ReturnValue, float CallFunc_GetFloatValue_InTime_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast, float CallFunc_SetIntensity_NewIntensity_ImplicitCast, float K2Node_VariableSet_ContactShadowLength_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast_1, double CallFunc_Lerp_Alpha_ImplicitCast_1, float CallFunc_GetFloatValue_InTime_ImplicitCast_2, float CallFunc_GetFloatValue_InTime_ImplicitCast_3, double CallFunc_FTrunc_A_ImplicitCast, float CallFunc_MakeRotator_Roll_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast_4, float CallFunc_GetFloatValue_InTime_ImplicitCast_5, double CallFunc_FTrunc_A_ImplicitCast_1, float CallFunc_SetVolumetricScatteringIntensity_NewIntensity_ImplicitCast, float CallFunc_SetVolumetricScatteringIntensity_NewIntensity_ImplicitCast_1, float CallFunc_SetIntensity_NewIntensity_ImplicitCast_1, float CallFunc_SetDynamicShadowDistanceMovableLight_NewValue_ImplicitCast, float CallFunc_SetCascadeTransitionFraction_NewValue_ImplicitCast, float CallFunc_SetCascadeDistributionExponent_NewValue_ImplicitCast, float CallFunc_SetDynamicShadowDistanceMovableLight_NewValue_ImplicitCast_1, float CallFunc_SetCascadeTransitionFraction_NewValue_ImplicitCast_1, float CallFunc_SetCascadeDistributionExponent_NewValue_ImplicitCast_1, float CallFunc_SetVolumetricScatteringIntensity_NewIntensity_ImplicitCast_2, double CallFunc_Lerp_Alpha_ImplicitCast_2, float K2Node_VariableSet_ContactShadowLength_ImplicitCast_1, float CallFunc_GetFloatValue_InTime_ImplicitCast_6, double CallFunc_Lerp_Alpha_ImplicitCast_3, float CallFunc_SetVolumetricScatteringIntensity_NewIntensity_ImplicitCast_3, float CallFunc_SetIntensity_NewIntensity_ImplicitCast_2, float K2Node_VariableSet_CloudShadowOnAtmosphereStrength_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast_7, double CallFunc_Lerp_Alpha_ImplicitCast_4, float CallFunc_SetVolumetricScatteringIntensity_NewIntensity_ImplicitCast_4, float CallFunc_GetFloatValue_InTime_ImplicitCast_8, double CallFunc_Lerp_Alpha_ImplicitCast_5, float CallFunc_SetVolumetricScatteringIntensity_NewIntensity_ImplicitCast_5, float CallFunc_GetFloatValue_InTime_ImplicitCast_9, double CallFunc_Lerp_Alpha_ImplicitCast_6, float K2Node_VariableSet_ContactShadowLength_ImplicitCast_2, float CallFunc_SetShadowDistanceFadeoutFraction_NewValue_ImplicitCast, float CallFunc_SetCascadeTransitionFraction_NewValue_ImplicitCast_2, float CallFunc_SetCascadeDistributionExponent_NewValue_ImplicitCast_2, float CallFunc_SetDynamicShadowDistanceMovableLight_NewValue_ImplicitCast_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Lighting_C", "Celestial");

	Params::UTimeofDay_Lighting_C_Celestial_Params Parms{};

	Parms.Moon_Intensity_Lerp = Moon_Intensity_Lerp;
	Parms.Moon_Intensity_Array = Moon_Intensity_Array;
	Parms.Volumetric_Scatter_Int_Lerp_Night = Volumetric_Scatter_Int_Lerp_Night;
	Parms.Volumetric_Scatter_Cele_Array_Night = Volumetric_Scatter_Cele_Array_Night;
	Parms.Volumetric_Scatter_Cele_Array_DawnDusk = Volumetric_Scatter_Cele_Array_DawnDusk;
	Parms.Celestial_Intensity_Array_Full = Celestial_Intensity_Array_Full;
	Parms.Dynamic_Shadow_CascadeCele = Dynamic_Shadow_CascadeCele;
	Parms.Dynamic_Shadow_Distance_Moon = Dynamic_Shadow_Distance_Moon;
	Parms.Scattered_Lumiance_Curve_Cele = Scattered_Lumiance_Curve_Cele;
	Parms.Celestial_Intensity_Array = Celestial_Intensity_Array;
	Parms.Selected_saturation_array = Selected_saturation_array;
	Parms.Moon_Cast_Shadow = Moon_Cast_Shadow;
	Parms.MoonVisibility = MoonVisibility;
	Parms.Celestial_Angle_Z = Celestial_Angle_Z;
	Parms.Celestial_Angle_Y = Celestial_Angle_Y;
	Parms.Celestial_Light_Shaft_Bloom = Celestial_Light_Shaft_Bloom;
	Parms.AdjustedTime24Hour = AdjustedTime24Hour;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.K2Node_SwitchInteger_CmpSuccess_2 = K2Node_SwitchInteger_CmpSuccess_2;
	Parms.CallFunc_GetFloatValue_ReturnValue_1 = CallFunc_GetFloatValue_ReturnValue_1;
	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue = CallFunc_Conv_LinearColorToColor_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess_3 = K2Node_SwitchInteger_CmpSuccess_3;
	Parms.K2Node_SwitchInteger_CmpSuccess_4 = K2Node_SwitchInteger_CmpSuccess_4;
	Parms.K2Node_SwitchInteger_CmpSuccess_5 = K2Node_SwitchInteger_CmpSuccess_5;
	Parms.CallFunc_GetFloatValue_ReturnValue_2 = CallFunc_GetFloatValue_ReturnValue_2;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Conv_IntToBool_ReturnValue = CallFunc_Conv_IntToBool_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue_3 = CallFunc_GetFloatValue_ReturnValue_3;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_NegateRotator_ReturnValue = CallFunc_NegateRotator_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue_4 = CallFunc_GetFloatValue_ReturnValue_4;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;
	Parms.CallFunc_Conv_IntToBool_ReturnValue_1 = CallFunc_Conv_IntToBool_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Conv_ByteToDouble_ReturnValue = CallFunc_Conv_ByteToDouble_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue_2 = CallFunc_FTrunc_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess_6 = K2Node_SwitchInteger_CmpSuccess_6;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetShadowQuality_ReturnValue = CallFunc_GetShadowQuality_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_1 = CallFunc_GetDataTableRowNames_OutRowNames_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_Conv_ByteToDouble_ReturnValue_1 = CallFunc_Conv_ByteToDouble_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_FTrunc_ReturnValue_3 = CallFunc_FTrunc_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Array_Get_Item_8 = CallFunc_Array_Get_Item_8;
	Parms.CallFunc_Array_Get_Item_9 = CallFunc_Array_Get_Item_9;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.CallFunc_Array_Get_Item_10 = CallFunc_Array_Get_Item_10;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_2 = CallFunc_GetDataTableRowNames_OutRowNames_2;
	Parms.CallFunc_Array_Get_Item_11 = CallFunc_Array_Get_Item_11;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_2 = CallFunc_GetDataTableRowFromName_OutRow_2;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_2 = CallFunc_GetDataTableRowFromName_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_3 = CallFunc_GetDataTableRowNames_OutRowNames_3;
	Parms.CallFunc_Array_Get_Item_12 = CallFunc_Array_Get_Item_12;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_4 = CallFunc_GetDataTableRowNames_OutRowNames_4;
	Parms.CallFunc_GetFloatValue_ReturnValue_5 = CallFunc_GetFloatValue_ReturnValue_5;
	Parms.CallFunc_Array_Get_Item_13 = CallFunc_Array_Get_Item_13;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_3 = CallFunc_GetDataTableRowFromName_OutRow_3;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_3 = CallFunc_GetDataTableRowFromName_ReturnValue_3;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_5 = CallFunc_GetDataTableRowNames_OutRowNames_5;
	Parms.CallFunc_Array_Get_Item_14 = CallFunc_Array_Get_Item_14;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_4 = CallFunc_GetDataTableRowFromName_OutRow_4;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_4 = CallFunc_GetDataTableRowFromName_ReturnValue_4;
	Parms.CallFunc_Array_Get_Item_15 = CallFunc_Array_Get_Item_15;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_6 = CallFunc_GetDataTableRowNames_OutRowNames_6;
	Parms.CallFunc_Array_Get_Item_16 = CallFunc_Array_Get_Item_16;
	Parms.CallFunc_GetFloatValue_ReturnValue_6 = CallFunc_GetFloatValue_ReturnValue_6;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_5 = CallFunc_GetDataTableRowFromName_OutRow_5;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_5 = CallFunc_GetDataTableRowFromName_ReturnValue_5;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_7 = CallFunc_GetDataTableRowNames_OutRowNames_7;
	Parms.CallFunc_Array_Get_Item_17 = CallFunc_Array_Get_Item_17;
	Parms.CallFunc_Array_Get_Item_18 = CallFunc_Array_Get_Item_18;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_6 = CallFunc_GetDataTableRowFromName_OutRow_6;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_6 = CallFunc_GetDataTableRowFromName_ReturnValue_6;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_7 = CallFunc_GetDataTableRowFromName_OutRow_7;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_7 = CallFunc_GetDataTableRowFromName_ReturnValue_7;
	Parms.CallFunc_Array_Get_Item_19 = CallFunc_Array_Get_Item_19;
	Parms.CallFunc_Array_Get_Item_20 = CallFunc_Array_Get_Item_20;
	Parms.CallFunc_Array_Get_Item_21 = CallFunc_Array_Get_Item_21;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_22 = CallFunc_Array_Get_Item_22;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_8 = CallFunc_GetDataTableRowNames_OutRowNames_8;
	Parms.CallFunc_Lerp_ReturnValue_3 = CallFunc_Lerp_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_23 = CallFunc_Array_Get_Item_23;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_8 = CallFunc_GetDataTableRowFromName_OutRow_8;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_8 = CallFunc_GetDataTableRowFromName_ReturnValue_8;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_9 = CallFunc_GetDataTableRowNames_OutRowNames_9;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_10 = CallFunc_GetDataTableRowNames_OutRowNames_10;
	Parms.CallFunc_Array_Get_Item_24 = CallFunc_Array_Get_Item_24;
	Parms.CallFunc_Array_Get_Item_25 = CallFunc_Array_Get_Item_25;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_9 = CallFunc_GetDataTableRowFromName_OutRow_9;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_9 = CallFunc_GetDataTableRowFromName_ReturnValue_9;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_10 = CallFunc_GetDataTableRowFromName_OutRow_10;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_10 = CallFunc_GetDataTableRowFromName_ReturnValue_10;
	Parms.CallFunc_Array_Get_Item_26 = CallFunc_Array_Get_Item_26;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_1 = CallFunc_Conv_BoolToInt_ReturnValue_1;
	Parms.K2Node_SwitchInteger_CmpSuccess_7 = K2Node_SwitchInteger_CmpSuccess_7;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_4 = CallFunc_Lerp_ReturnValue_4;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_11 = CallFunc_GetDataTableRowNames_OutRowNames_11;
	Parms.CallFunc_Array_Get_Item_27 = CallFunc_Array_Get_Item_27;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_11 = CallFunc_GetDataTableRowFromName_OutRow_11;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_11 = CallFunc_GetDataTableRowFromName_ReturnValue_11;
	Parms.CallFunc_Array_Get_Item_28 = CallFunc_Array_Get_Item_28;
	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue_1 = CallFunc_Conv_LinearColorToColor_ReturnValue_1;
	Parms.K2Node_SwitchInteger_CmpSuccess_8 = K2Node_SwitchInteger_CmpSuccess_8;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_2 = CallFunc_Conv_BoolToInt_ReturnValue_2;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_3 = CallFunc_Conv_BoolToInt_ReturnValue_3;
	Parms.K2Node_SwitchInteger_CmpSuccess_9 = K2Node_SwitchInteger_CmpSuccess_9;
	Parms.K2Node_SwitchInteger_CmpSuccess_10 = K2Node_SwitchInteger_CmpSuccess_10;
	Parms.CallFunc_Array_Get_Item_29 = CallFunc_Array_Get_Item_29;
	Parms.CallFunc_Array_Get_Item_30 = CallFunc_Array_Get_Item_30;
	Parms.CallFunc_GetFloatValue_ReturnValue_7 = CallFunc_GetFloatValue_ReturnValue_7;
	Parms.CallFunc_Lerp_ReturnValue_5 = CallFunc_Lerp_ReturnValue_5;
	Parms.CallFunc_Array_Get_Item_31 = CallFunc_Array_Get_Item_31;
	Parms.CallFunc_Array_Get_Item_32 = CallFunc_Array_Get_Item_32;
	Parms.CallFunc_Array_Get_Item_33 = CallFunc_Array_Get_Item_33;
	Parms.CallFunc_Array_Get_Item_34 = CallFunc_Array_Get_Item_34;
	Parms.CallFunc_GetFloatValue_ReturnValue_8 = CallFunc_GetFloatValue_ReturnValue_8;
	Parms.CallFunc_Lerp_ReturnValue_6 = CallFunc_Lerp_ReturnValue_6;
	Parms.CallFunc_GetFloatValue_ReturnValue_9 = CallFunc_GetFloatValue_ReturnValue_9;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_4 = CallFunc_Conv_BoolToInt_ReturnValue_4;
	Parms.CallFunc_Lerp_ReturnValue_7 = CallFunc_Lerp_ReturnValue_7;
	Parms.K2Node_SwitchInteger_CmpSuccess_11 = K2Node_SwitchInteger_CmpSuccess_11;
	Parms.CallFunc_FTrunc_ReturnValue_4 = CallFunc_FTrunc_ReturnValue_4;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_5 = CallFunc_Conv_BoolToInt_ReturnValue_5;
	Parms.K2Node_SwitchInteger_CmpSuccess_12 = K2Node_SwitchInteger_CmpSuccess_12;
	Parms.K2Node_SwitchInteger_CmpSuccess_13 = K2Node_SwitchInteger_CmpSuccess_13;
	Parms.CallFunc_Array_Get_Item_35 = CallFunc_Array_Get_Item_35;
	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue_2 = CallFunc_Conv_LinearColorToColor_ReturnValue_2;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_6 = CallFunc_Conv_BoolToInt_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess_14 = K2Node_SwitchInteger_CmpSuccess_14;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast = CallFunc_GetFloatValue_InTime_ImplicitCast;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast = CallFunc_Lerp_Alpha_ImplicitCast;
	Parms.CallFunc_SetIntensity_NewIntensity_ImplicitCast = CallFunc_SetIntensity_NewIntensity_ImplicitCast;
	Parms.K2Node_VariableSet_ContactShadowLength_ImplicitCast = K2Node_VariableSet_ContactShadowLength_ImplicitCast;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_1 = CallFunc_GetFloatValue_InTime_ImplicitCast_1;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_1 = CallFunc_Lerp_Alpha_ImplicitCast_1;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_2 = CallFunc_GetFloatValue_InTime_ImplicitCast_2;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_3 = CallFunc_GetFloatValue_InTime_ImplicitCast_3;
	Parms.CallFunc_FTrunc_A_ImplicitCast = CallFunc_FTrunc_A_ImplicitCast;
	Parms.CallFunc_MakeRotator_Roll_ImplicitCast = CallFunc_MakeRotator_Roll_ImplicitCast;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_4 = CallFunc_GetFloatValue_InTime_ImplicitCast_4;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_5 = CallFunc_GetFloatValue_InTime_ImplicitCast_5;
	Parms.CallFunc_FTrunc_A_ImplicitCast_1 = CallFunc_FTrunc_A_ImplicitCast_1;
	Parms.CallFunc_SetVolumetricScatteringIntensity_NewIntensity_ImplicitCast = CallFunc_SetVolumetricScatteringIntensity_NewIntensity_ImplicitCast;
	Parms.CallFunc_SetVolumetricScatteringIntensity_NewIntensity_ImplicitCast_1 = CallFunc_SetVolumetricScatteringIntensity_NewIntensity_ImplicitCast_1;
	Parms.CallFunc_SetIntensity_NewIntensity_ImplicitCast_1 = CallFunc_SetIntensity_NewIntensity_ImplicitCast_1;
	Parms.CallFunc_SetDynamicShadowDistanceMovableLight_NewValue_ImplicitCast = CallFunc_SetDynamicShadowDistanceMovableLight_NewValue_ImplicitCast;
	Parms.CallFunc_SetCascadeTransitionFraction_NewValue_ImplicitCast = CallFunc_SetCascadeTransitionFraction_NewValue_ImplicitCast;
	Parms.CallFunc_SetCascadeDistributionExponent_NewValue_ImplicitCast = CallFunc_SetCascadeDistributionExponent_NewValue_ImplicitCast;
	Parms.CallFunc_SetDynamicShadowDistanceMovableLight_NewValue_ImplicitCast_1 = CallFunc_SetDynamicShadowDistanceMovableLight_NewValue_ImplicitCast_1;
	Parms.CallFunc_SetCascadeTransitionFraction_NewValue_ImplicitCast_1 = CallFunc_SetCascadeTransitionFraction_NewValue_ImplicitCast_1;
	Parms.CallFunc_SetCascadeDistributionExponent_NewValue_ImplicitCast_1 = CallFunc_SetCascadeDistributionExponent_NewValue_ImplicitCast_1;
	Parms.CallFunc_SetVolumetricScatteringIntensity_NewIntensity_ImplicitCast_2 = CallFunc_SetVolumetricScatteringIntensity_NewIntensity_ImplicitCast_2;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_2 = CallFunc_Lerp_Alpha_ImplicitCast_2;
	Parms.K2Node_VariableSet_ContactShadowLength_ImplicitCast_1 = K2Node_VariableSet_ContactShadowLength_ImplicitCast_1;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_6 = CallFunc_GetFloatValue_InTime_ImplicitCast_6;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_3 = CallFunc_Lerp_Alpha_ImplicitCast_3;
	Parms.CallFunc_SetVolumetricScatteringIntensity_NewIntensity_ImplicitCast_3 = CallFunc_SetVolumetricScatteringIntensity_NewIntensity_ImplicitCast_3;
	Parms.CallFunc_SetIntensity_NewIntensity_ImplicitCast_2 = CallFunc_SetIntensity_NewIntensity_ImplicitCast_2;
	Parms.K2Node_VariableSet_CloudShadowOnAtmosphereStrength_ImplicitCast = K2Node_VariableSet_CloudShadowOnAtmosphereStrength_ImplicitCast;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_7 = CallFunc_GetFloatValue_InTime_ImplicitCast_7;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_4 = CallFunc_Lerp_Alpha_ImplicitCast_4;
	Parms.CallFunc_SetVolumetricScatteringIntensity_NewIntensity_ImplicitCast_4 = CallFunc_SetVolumetricScatteringIntensity_NewIntensity_ImplicitCast_4;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_8 = CallFunc_GetFloatValue_InTime_ImplicitCast_8;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_5 = CallFunc_Lerp_Alpha_ImplicitCast_5;
	Parms.CallFunc_SetVolumetricScatteringIntensity_NewIntensity_ImplicitCast_5 = CallFunc_SetVolumetricScatteringIntensity_NewIntensity_ImplicitCast_5;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_9 = CallFunc_GetFloatValue_InTime_ImplicitCast_9;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_6 = CallFunc_Lerp_Alpha_ImplicitCast_6;
	Parms.K2Node_VariableSet_ContactShadowLength_ImplicitCast_2 = K2Node_VariableSet_ContactShadowLength_ImplicitCast_2;
	Parms.CallFunc_SetShadowDistanceFadeoutFraction_NewValue_ImplicitCast = CallFunc_SetShadowDistanceFadeoutFraction_NewValue_ImplicitCast;
	Parms.CallFunc_SetCascadeTransitionFraction_NewValue_ImplicitCast_2 = CallFunc_SetCascadeTransitionFraction_NewValue_ImplicitCast_2;
	Parms.CallFunc_SetCascadeDistributionExponent_NewValue_ImplicitCast_2 = CallFunc_SetCascadeDistributionExponent_NewValue_ImplicitCast_2;
	Parms.CallFunc_SetDynamicShadowDistanceMovableLight_NewValue_ImplicitCast_2 = CallFunc_SetDynamicShadowDistanceMovableLight_NewValue_ImplicitCast_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TimeofDay_Lighting.TimeofDay_Lighting_C.Sun
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCurveFloat*                 Volumetric_Scatter_Int_Lerp_Night                                (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 Volumetric_Scatter_Int_Lerp_Day                                  (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<double>                     Volumetric_Scatter_Cele_Array_Night                              (Edit, BlueprintVisible)
// TArray<double>                     Volumetric_Scatter_Cele_Array_DawnDusk                           (Edit, BlueprintVisible)
// TArray<double>                     Volumetric_Scatter_Int_Array_Day                                 (Edit, BlueprintVisible)
// TArray<double>                     Volumetric_Scatter_Int_Array_DawnDusk                            (Edit, BlueprintVisible)
// TArray<double>                     Occ_Mask_Dark_Array_Night                                        (Edit, BlueprintVisible)
// TArray<double>                     Occ_Mask_Dark_Array_Day                                          (Edit, BlueprintVisible)
// TArray<double>                     Occ_Mask_Dark_Array_DawnDusk                                     (Edit, BlueprintVisible)
// class UCurveFloat*                 Occ_Mask_Dark_Lerp_Night                                         (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 Occ_Mask_Dark_Lerp_Day                                           (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UCurveFloat*>         Sun_Intensity_Array_Full                                         (Edit, BlueprintVisible)
// class UCurveFloat*                 Cloud_Shadow_Extent                                              (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               NewLocalVar_0                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 Dynamic_Shadow_Cascade                                           (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 Dynamic_Shadow_Distance                                          (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FLinearColor>        Selected_saturation_array                                        (Edit, BlueprintVisible)
// TArray<double>                     Sun_Intensity_Array                                              (Edit, BlueprintVisible)
// class UCurveFloat*                 Sun_Light_Shaft_Bloom                                            (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 Sun_Cast_Shadow                                                  (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 SunVisibility                                                    (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 Sun_Angle_Z                                                      (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 Sun_Angle_Y                                                      (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             AdjustedTime_24Hour                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<double>                     K2Node_MakeArray_Array                                           (ReferenceParm)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UCurveFloat*>         K2Node_MakeArray_Array_1                                         (ReferenceParm)
// double                             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<double>                     K2Node_MakeArray_Array_2                                         (ReferenceParm)
// double                             CallFunc_Conv_ByteToDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_FTrunc_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<double>                     K2Node_MakeArray_Array_3                                         (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_VE_Preset_Master         CallFunc_GetDataTableRowFromName_OutRow                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<double>                     K2Node_MakeArray_Array_4                                         (ReferenceParm)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_1                      (ReferenceParm)
// bool                               K2Node_SwitchInteger_CmpSuccess_8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Atmosphere_Master        CallFunc_GetDataTableRowFromName_OutRow_1                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<double>                     K2Node_MakeArray_Array_5                                         (ReferenceParm)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_2                      (ReferenceParm)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_3                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Fog_Day                  CallFunc_GetDataTableRowFromName_OutRow_2                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<double>                     K2Node_MakeArray_Array_6                                         (ReferenceParm)
// struct FS_Fog_Volumetric           CallFunc_GetDataTableRowFromName_OutRow_3                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_6                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_7                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<double>                     K2Node_MakeArray_Array_7                                         (ReferenceParm)
// bool                               K2Node_SwitchInteger_CmpSuccess_9                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_4                      (ReferenceParm)
// TArray<double>                     K2Node_MakeArray_Array_8                                         (ReferenceParm)
// double                             CallFunc_Array_Get_Item_8                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_9                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_10                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_ByteToDouble_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_11                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_12                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_VE_Preset_Master         CallFunc_GetDataTableRowFromName_OutRow_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_13                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_14                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_15                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_5                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_16                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Fog_Day                  CallFunc_GetDataTableRowFromName_OutRow_5                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_5                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_6                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_17                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Color_Table_Master       CallFunc_GetDataTableRowFromName_OutRow_6                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_6                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_10                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  CallFunc_Array_Get_Item_18                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_7                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_19                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_20                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Color_Master             CallFunc_GetDataTableRowFromName_OutRow_7                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_7                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_21                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_8                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_22                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Fog_Volumetric           CallFunc_GetDataTableRowFromName_OutRow_8                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_8                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_23                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_24                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_9                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_25                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Day_Brightness_and_ExposureCallFunc_GetDataTableRowFromName_OutRow_9                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_9                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_26                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_27                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_10                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_28                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Day_Brightness_and_ExposureCallFunc_GetDataTableRowFromName_OutRow_10                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_10                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_6                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_11                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_29                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Sun_Intensity            CallFunc_GetDataTableRowFromName_OutRow_11                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_11                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_30                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_12                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_31                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Color_Saturations        CallFunc_GetDataTableRowFromName_OutRow_12                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_12                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_11                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_32                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_12                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_33                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_34                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_7                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_5                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_35                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_36                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_8                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_6                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_37                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_38                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_9                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_7                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_39                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_10                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_11                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_8                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_13                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_14                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_40                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_41                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_12                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_9                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_42                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_43                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_6                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_13                     (ReferenceParm)
// bool                               K2Node_SwitchInteger_CmpSuccess_15                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_44                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Day_Brightness_and_ExposureCallFunc_GetDataTableRowFromName_OutRow_13                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_13                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_45                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_46                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_13                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_10                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_14                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_47                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Day_Brightness_and_ExposureCallFunc_GetDataTableRowFromName_OutRow_14                       (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_14                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_14                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_15                     (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_48                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Sun_Intensity            CallFunc_GetDataTableRowFromName_OutRow_15                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_15                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_15                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_11                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_49                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_12                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_16                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_50                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_7                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_17                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_8                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_18                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_ContactShadowLength_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FTrunc_A_ImplicitCast                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FTrunc_A_ImplicitCast_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetCascadeTransitionFraction_NewValue_ImplicitCast      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetCascadeDistributionExponent_NewValue_ImplicitCast    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetVolumetricScatteringIntensity_NewIntensity_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetDynamicShadowDistanceMovableLight_NewValue_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetCascadeTransitionFraction_NewValue_ImplicitCast_1    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetCascadeDistributionExponent_NewValue_ImplicitCast_1  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetDynamicShadowDistanceMovableLight_NewValue_ImplicitCast_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetCascadeTransitionFraction_NewValue_ImplicitCast_2    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetCascadeDistributionExponent_NewValue_ImplicitCast_2  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetVolumetricScatteringIntensity_NewIntensity_ImplicitCast_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetVolumetricScatteringIntensity_NewIntensity_ImplicitCast_2(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetVolumetricScatteringIntensity_NewIntensity_ImplicitCast_3(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_ContactShadowLength_ImplicitCast_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetOcclusionMaskDarkness_NewValue_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_6                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetIntensity_NewIntensity_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_7                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetVolumetricScatteringIntensity_NewIntensity_ImplicitCast_4(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_8                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetVolumetricScatteringIntensity_NewIntensity_ImplicitCast_5(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_9                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetOcclusionMaskDarkness_NewValue_ImplicitCast_1        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetIntensity_NewIntensity_ImplicitCast_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_10                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_11                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FTrunc_A_ImplicitCast_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_CloudShadowOnAtmosphereStrength_ImplicitCast  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_12                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetVolumetricScatteringIntensity_NewIntensity_ImplicitCast_6(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_13                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_14                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_9                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetOcclusionMaskDarkness_NewValue_ImplicitCast_2        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_15                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_10                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_11                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetIntensity_NewIntensity_ImplicitCast_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_ContactShadowLength_ImplicitCast_2            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetShadowDistanceFadeoutFraction_NewValue_ImplicitCast  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetCascadeTransitionFraction_NewValue_ImplicitCast_3    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetCascadeDistributionExponent_NewValue_ImplicitCast_3  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetDynamicShadowDistanceMovableLight_NewValue_ImplicitCast_2(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Lighting_C::Sun(class UCurveFloat* Volumetric_Scatter_Int_Lerp_Night, class UCurveFloat* Volumetric_Scatter_Int_Lerp_Day, const TArray<double>& Volumetric_Scatter_Cele_Array_Night, const TArray<double>& Volumetric_Scatter_Cele_Array_DawnDusk, const TArray<double>& Volumetric_Scatter_Int_Array_Day, const TArray<double>& Volumetric_Scatter_Int_Array_DawnDusk, const TArray<double>& Occ_Mask_Dark_Array_Night, const TArray<double>& Occ_Mask_Dark_Array_Day, const TArray<double>& Occ_Mask_Dark_Array_DawnDusk, class UCurveFloat* Occ_Mask_Dark_Lerp_Night, class UCurveFloat* Occ_Mask_Dark_Lerp_Day, const TArray<class UCurveFloat*>& Sun_Intensity_Array_Full, class UCurveFloat* Cloud_Shadow_Extent, bool NewLocalVar_0, class UCurveFloat* Dynamic_Shadow_Cascade, class UCurveFloat* Dynamic_Shadow_Distance, const TArray<struct FLinearColor>& Selected_saturation_array, const TArray<double>& Sun_Intensity_Array, class UCurveFloat* Sun_Light_Shaft_Bloom, class UCurveFloat* Sun_Cast_Shadow, class UCurveFloat* SunVisibility, class UCurveFloat* Sun_Angle_Z, class UCurveFloat* Sun_Angle_Y, double AdjustedTime_24Hour, bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_SwitchInteger_CmpSuccess_1, bool K2Node_SwitchInteger_CmpSuccess_2, bool K2Node_SwitchInteger_CmpSuccess_3, bool K2Node_SwitchInteger_CmpSuccess_4, bool K2Node_SwitchInteger_CmpSuccess_5, bool K2Node_SwitchInteger_CmpSuccess_6, bool K2Node_SwitchInteger_CmpSuccess_7, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue, TArray<double>& K2Node_MakeArray_Array, float CallFunc_GetFloatValue_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue, float CallFunc_GetFloatValue_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue_1, bool CallFunc_Conv_IntToBool_ReturnValue_1, TArray<class UCurveFloat*>& K2Node_MakeArray_Array_1, double CallFunc_Array_Get_Item, double CallFunc_Array_Get_Item_1, TArray<double>& K2Node_MakeArray_Array_2, double CallFunc_Conv_ByteToDouble_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_FTrunc_ReturnValue_2, TArray<double>& K2Node_MakeArray_Array_3, class FName CallFunc_Array_Get_Item_2, const struct FS_VE_Preset_Master& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, TArray<double>& K2Node_MakeArray_Array_4, int32 CallFunc_Conv_BoolToInt_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_1, bool K2Node_SwitchInteger_CmpSuccess_8, class FName CallFunc_Array_Get_Item_3, const struct FS_Atmosphere_Master& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, TArray<double>& K2Node_MakeArray_Array_5, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_3, class FName CallFunc_Array_Get_Item_4, const struct FS_Fog_Day& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, class FName CallFunc_Array_Get_Item_5, TArray<double>& K2Node_MakeArray_Array_6, const struct FS_Fog_Volumetric& CallFunc_GetDataTableRowFromName_OutRow_3, bool CallFunc_GetDataTableRowFromName_ReturnValue_3, double CallFunc_Array_Get_Item_6, float CallFunc_GetFloatValue_ReturnValue_2, double CallFunc_Array_Get_Item_7, double CallFunc_Lerp_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue_1, TArray<double>& K2Node_MakeArray_Array_7, bool K2Node_SwitchInteger_CmpSuccess_9, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_4, TArray<double>& K2Node_MakeArray_Array_8, double CallFunc_Array_Get_Item_8, double CallFunc_Array_Get_Item_9, double CallFunc_Array_Get_Item_10, double CallFunc_Conv_ByteToDouble_ReturnValue_1, double CallFunc_Array_Get_Item_11, int32 CallFunc_FTrunc_ReturnValue_3, class FName CallFunc_Array_Get_Item_12, const struct FS_VE_Preset_Master& CallFunc_GetDataTableRowFromName_OutRow_4, bool CallFunc_GetDataTableRowFromName_ReturnValue_4, double CallFunc_Array_Get_Item_13, double CallFunc_Array_Get_Item_14, double CallFunc_Array_Get_Item_15, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_5, class FName CallFunc_Array_Get_Item_16, const struct FS_Fog_Day& CallFunc_GetDataTableRowFromName_OutRow_5, bool CallFunc_GetDataTableRowFromName_ReturnValue_5, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_6, class FName CallFunc_Array_Get_Item_17, const struct FS_Color_Table_Master& CallFunc_GetDataTableRowFromName_OutRow_6, bool CallFunc_GetDataTableRowFromName_ReturnValue_6, int32 CallFunc_Conv_BoolToInt_ReturnValue_2, bool K2Node_SwitchInteger_CmpSuccess_10, class UDataTable* CallFunc_Array_Get_Item_18, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_7, class FName CallFunc_Array_Get_Item_19, double CallFunc_Array_Get_Item_20, const struct FS_Color_Master& CallFunc_GetDataTableRowFromName_OutRow_7, bool CallFunc_GetDataTableRowFromName_ReturnValue_7, double CallFunc_Array_Get_Item_21, float CallFunc_GetFloatValue_ReturnValue_3, double CallFunc_Lerp_ReturnValue_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_8, class FName CallFunc_Array_Get_Item_22, const struct FS_Fog_Volumetric& CallFunc_GetDataTableRowFromName_OutRow_8, bool CallFunc_GetDataTableRowFromName_ReturnValue_8, double CallFunc_Array_Get_Item_23, double CallFunc_Array_Get_Item_24, float CallFunc_GetFloatValue_ReturnValue_4, double CallFunc_Lerp_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_9, class FName CallFunc_Array_Get_Item_25, const struct FS_Day_Brightness_and_Exposure& CallFunc_GetDataTableRowFromName_OutRow_9, bool CallFunc_GetDataTableRowFromName_ReturnValue_9, double CallFunc_Array_Get_Item_26, float CallFunc_GetFloatValue_ReturnValue_5, double CallFunc_Array_Get_Item_27, double CallFunc_Lerp_ReturnValue_3, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_10, class FName CallFunc_Array_Get_Item_28, const struct FS_Day_Brightness_and_Exposure& CallFunc_GetDataTableRowFromName_OutRow_10, bool CallFunc_GetDataTableRowFromName_ReturnValue_10, float CallFunc_GetFloatValue_ReturnValue_6, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_11, class FName CallFunc_Array_Get_Item_29, const struct FS_Sun_Intensity& CallFunc_GetDataTableRowFromName_OutRow_11, bool CallFunc_GetDataTableRowFromName_ReturnValue_11, double CallFunc_Array_Get_Item_30, double CallFunc_Lerp_ReturnValue_4, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_12, class FName CallFunc_Array_Get_Item_31, const struct FS_Color_Saturations& CallFunc_GetDataTableRowFromName_OutRow_12, bool CallFunc_GetDataTableRowFromName_ReturnValue_12, bool K2Node_SwitchInteger_CmpSuccess_11, const struct FLinearColor& CallFunc_Array_Get_Item_32, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue_1, int32 CallFunc_Conv_BoolToInt_ReturnValue_3, bool K2Node_SwitchInteger_CmpSuccess_12, double CallFunc_Array_Get_Item_33, double CallFunc_Array_Get_Item_34, float CallFunc_GetFloatValue_ReturnValue_7, double CallFunc_Lerp_ReturnValue_5, double CallFunc_Array_Get_Item_35, double CallFunc_Array_Get_Item_36, float CallFunc_GetFloatValue_ReturnValue_8, double CallFunc_Lerp_ReturnValue_6, double CallFunc_Array_Get_Item_37, double CallFunc_Array_Get_Item_38, float CallFunc_GetFloatValue_ReturnValue_9, double CallFunc_Lerp_ReturnValue_7, double CallFunc_Array_Get_Item_39, float CallFunc_GetFloatValue_ReturnValue_10, float CallFunc_GetFloatValue_ReturnValue_11, double CallFunc_Conv_IntToDouble_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_4, double CallFunc_Lerp_ReturnValue_8, bool CallFunc_Conv_IntToBool_ReturnValue_2, int32 CallFunc_Conv_BoolToInt_ReturnValue_4, int32 CallFunc_Conv_BoolToInt_ReturnValue_5, bool K2Node_SwitchInteger_CmpSuccess_13, bool K2Node_SwitchInteger_CmpSuccess_14, double CallFunc_Array_Get_Item_40, double CallFunc_Array_Get_Item_41, float CallFunc_GetFloatValue_ReturnValue_12, double CallFunc_Lerp_ReturnValue_9, double CallFunc_Array_Get_Item_42, double CallFunc_Array_Get_Item_43, int32 CallFunc_Conv_BoolToInt_ReturnValue_6, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_13, bool K2Node_SwitchInteger_CmpSuccess_15, class FName CallFunc_Array_Get_Item_44, const struct FS_Day_Brightness_and_Exposure& CallFunc_GetDataTableRowFromName_OutRow_13, bool CallFunc_GetDataTableRowFromName_ReturnValue_13, double CallFunc_Array_Get_Item_45, double CallFunc_Array_Get_Item_46, float CallFunc_GetFloatValue_ReturnValue_13, double CallFunc_Lerp_ReturnValue_10, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_14, class FName CallFunc_Array_Get_Item_47, const struct FS_Day_Brightness_and_Exposure& CallFunc_GetDataTableRowFromName_OutRow_14, bool CallFunc_GetDataTableRowFromName_ReturnValue_14, float CallFunc_GetFloatValue_ReturnValue_14, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_15, class FName CallFunc_Array_Get_Item_48, const struct FS_Sun_Intensity& CallFunc_GetDataTableRowFromName_OutRow_15, bool CallFunc_GetDataTableRowFromName_ReturnValue_15, float CallFunc_GetFloatValue_ReturnValue_15, double CallFunc_Lerp_ReturnValue_11, int32 CallFunc_FTrunc_ReturnValue_5, double CallFunc_Array_Get_Item_49, double CallFunc_Lerp_ReturnValue_12, bool K2Node_SwitchInteger_CmpSuccess_16, const struct FLinearColor& CallFunc_Array_Get_Item_50, int32 CallFunc_Conv_BoolToInt_ReturnValue_7, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue_2, bool K2Node_SwitchInteger_CmpSuccess_17, int32 CallFunc_Conv_BoolToInt_ReturnValue_8, bool K2Node_SwitchInteger_CmpSuccess_18, bool CallFunc_IsValid_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, float K2Node_VariableSet_ContactShadowLength_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast, double CallFunc_FTrunc_A_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast_1, double CallFunc_FTrunc_A_ImplicitCast_1, float CallFunc_SetCascadeTransitionFraction_NewValue_ImplicitCast, float CallFunc_SetCascadeDistributionExponent_NewValue_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast_2, double CallFunc_Lerp_Alpha_ImplicitCast, float CallFunc_SetVolumetricScatteringIntensity_NewIntensity_ImplicitCast, float CallFunc_SetDynamicShadowDistanceMovableLight_NewValue_ImplicitCast, float CallFunc_SetCascadeTransitionFraction_NewValue_ImplicitCast_1, float CallFunc_SetCascadeDistributionExponent_NewValue_ImplicitCast_1, float CallFunc_SetDynamicShadowDistanceMovableLight_NewValue_ImplicitCast_1, float CallFunc_SetCascadeTransitionFraction_NewValue_ImplicitCast_2, float CallFunc_SetCascadeDistributionExponent_NewValue_ImplicitCast_2, float CallFunc_SetVolumetricScatteringIntensity_NewIntensity_ImplicitCast_1, float CallFunc_GetFloatValue_InTime_ImplicitCast_3, double CallFunc_Lerp_Alpha_ImplicitCast_1, float CallFunc_SetVolumetricScatteringIntensity_NewIntensity_ImplicitCast_2, float CallFunc_GetFloatValue_InTime_ImplicitCast_4, double CallFunc_Lerp_Alpha_ImplicitCast_2, float CallFunc_SetVolumetricScatteringIntensity_NewIntensity_ImplicitCast_3, float K2Node_VariableSet_ContactShadowLength_ImplicitCast_1, float CallFunc_GetFloatValue_InTime_ImplicitCast_5, double CallFunc_Lerp_Alpha_ImplicitCast_3, float CallFunc_SetOcclusionMaskDarkness_NewValue_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast_6, double CallFunc_Lerp_Alpha_ImplicitCast_4, float CallFunc_SetIntensity_NewIntensity_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast_7, double CallFunc_Lerp_Alpha_ImplicitCast_5, float CallFunc_SetVolumetricScatteringIntensity_NewIntensity_ImplicitCast_4, float CallFunc_GetFloatValue_InTime_ImplicitCast_8, double CallFunc_Lerp_Alpha_ImplicitCast_6, float CallFunc_SetVolumetricScatteringIntensity_NewIntensity_ImplicitCast_5, float CallFunc_GetFloatValue_InTime_ImplicitCast_9, double CallFunc_Lerp_Alpha_ImplicitCast_7, float CallFunc_SetOcclusionMaskDarkness_NewValue_ImplicitCast_1, float CallFunc_SetIntensity_NewIntensity_ImplicitCast_1, float CallFunc_GetFloatValue_InTime_ImplicitCast_10, float CallFunc_GetFloatValue_InTime_ImplicitCast_11, double CallFunc_FTrunc_A_ImplicitCast_2, float K2Node_VariableSet_CloudShadowOnAtmosphereStrength_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast_12, double CallFunc_Lerp_Alpha_ImplicitCast_8, float CallFunc_SetVolumetricScatteringIntensity_NewIntensity_ImplicitCast_6, float CallFunc_GetFloatValue_InTime_ImplicitCast_13, float CallFunc_GetFloatValue_InTime_ImplicitCast_14, double CallFunc_Lerp_Alpha_ImplicitCast_9, float CallFunc_SetOcclusionMaskDarkness_NewValue_ImplicitCast_2, float CallFunc_GetFloatValue_InTime_ImplicitCast_15, double CallFunc_Lerp_Alpha_ImplicitCast_10, double CallFunc_Lerp_Alpha_ImplicitCast_11, float CallFunc_SetIntensity_NewIntensity_ImplicitCast_2, float K2Node_VariableSet_ContactShadowLength_ImplicitCast_2, float CallFunc_SetShadowDistanceFadeoutFraction_NewValue_ImplicitCast, float CallFunc_SetCascadeTransitionFraction_NewValue_ImplicitCast_3, float CallFunc_SetCascadeDistributionExponent_NewValue_ImplicitCast_3, float CallFunc_SetDynamicShadowDistanceMovableLight_NewValue_ImplicitCast_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Lighting_C", "Sun");

	Params::UTimeofDay_Lighting_C_Sun_Params Parms{};

	Parms.Volumetric_Scatter_Int_Lerp_Night = Volumetric_Scatter_Int_Lerp_Night;
	Parms.Volumetric_Scatter_Int_Lerp_Day = Volumetric_Scatter_Int_Lerp_Day;
	Parms.Volumetric_Scatter_Cele_Array_Night = Volumetric_Scatter_Cele_Array_Night;
	Parms.Volumetric_Scatter_Cele_Array_DawnDusk = Volumetric_Scatter_Cele_Array_DawnDusk;
	Parms.Volumetric_Scatter_Int_Array_Day = Volumetric_Scatter_Int_Array_Day;
	Parms.Volumetric_Scatter_Int_Array_DawnDusk = Volumetric_Scatter_Int_Array_DawnDusk;
	Parms.Occ_Mask_Dark_Array_Night = Occ_Mask_Dark_Array_Night;
	Parms.Occ_Mask_Dark_Array_Day = Occ_Mask_Dark_Array_Day;
	Parms.Occ_Mask_Dark_Array_DawnDusk = Occ_Mask_Dark_Array_DawnDusk;
	Parms.Occ_Mask_Dark_Lerp_Night = Occ_Mask_Dark_Lerp_Night;
	Parms.Occ_Mask_Dark_Lerp_Day = Occ_Mask_Dark_Lerp_Day;
	Parms.Sun_Intensity_Array_Full = Sun_Intensity_Array_Full;
	Parms.Cloud_Shadow_Extent = Cloud_Shadow_Extent;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.Dynamic_Shadow_Cascade = Dynamic_Shadow_Cascade;
	Parms.Dynamic_Shadow_Distance = Dynamic_Shadow_Distance;
	Parms.Selected_saturation_array = Selected_saturation_array;
	Parms.Sun_Intensity_Array = Sun_Intensity_Array;
	Parms.Sun_Light_Shaft_Bloom = Sun_Light_Shaft_Bloom;
	Parms.Sun_Cast_Shadow = Sun_Cast_Shadow;
	Parms.SunVisibility = SunVisibility;
	Parms.Sun_Angle_Z = Sun_Angle_Z;
	Parms.Sun_Angle_Y = Sun_Angle_Y;
	Parms.AdjustedTime_24Hour = AdjustedTime_24Hour;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.K2Node_SwitchInteger_CmpSuccess_2 = K2Node_SwitchInteger_CmpSuccess_2;
	Parms.K2Node_SwitchInteger_CmpSuccess_3 = K2Node_SwitchInteger_CmpSuccess_3;
	Parms.K2Node_SwitchInteger_CmpSuccess_4 = K2Node_SwitchInteger_CmpSuccess_4;
	Parms.K2Node_SwitchInteger_CmpSuccess_5 = K2Node_SwitchInteger_CmpSuccess_5;
	Parms.K2Node_SwitchInteger_CmpSuccess_6 = K2Node_SwitchInteger_CmpSuccess_6;
	Parms.K2Node_SwitchInteger_CmpSuccess_7 = K2Node_SwitchInteger_CmpSuccess_7;
	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue = CallFunc_Conv_LinearColorToColor_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Conv_IntToBool_ReturnValue = CallFunc_Conv_IntToBool_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue_1 = CallFunc_GetFloatValue_ReturnValue_1;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;
	Parms.CallFunc_Conv_IntToBool_ReturnValue_1 = CallFunc_Conv_IntToBool_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Conv_ByteToDouble_ReturnValue = CallFunc_Conv_ByteToDouble_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_FTrunc_ReturnValue_2 = CallFunc_FTrunc_ReturnValue_2;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_1 = CallFunc_GetDataTableRowNames_OutRowNames_1;
	Parms.K2Node_SwitchInteger_CmpSuccess_8 = K2Node_SwitchInteger_CmpSuccess_8;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_5 = K2Node_MakeArray_Array_5;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_2 = CallFunc_GetDataTableRowNames_OutRowNames_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_3 = CallFunc_GetDataTableRowNames_OutRowNames_3;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_2 = CallFunc_GetDataTableRowFromName_OutRow_2;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_2 = CallFunc_GetDataTableRowFromName_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.K2Node_MakeArray_Array_6 = K2Node_MakeArray_Array_6;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_3 = CallFunc_GetDataTableRowFromName_OutRow_3;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_3 = CallFunc_GetDataTableRowFromName_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_GetFloatValue_ReturnValue_2 = CallFunc_GetFloatValue_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_1 = CallFunc_Conv_BoolToInt_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_7 = K2Node_MakeArray_Array_7;
	Parms.K2Node_SwitchInteger_CmpSuccess_9 = K2Node_SwitchInteger_CmpSuccess_9;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_4 = CallFunc_GetDataTableRowNames_OutRowNames_4;
	Parms.K2Node_MakeArray_Array_8 = K2Node_MakeArray_Array_8;
	Parms.CallFunc_Array_Get_Item_8 = CallFunc_Array_Get_Item_8;
	Parms.CallFunc_Array_Get_Item_9 = CallFunc_Array_Get_Item_9;
	Parms.CallFunc_Array_Get_Item_10 = CallFunc_Array_Get_Item_10;
	Parms.CallFunc_Conv_ByteToDouble_ReturnValue_1 = CallFunc_Conv_ByteToDouble_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_11 = CallFunc_Array_Get_Item_11;
	Parms.CallFunc_FTrunc_ReturnValue_3 = CallFunc_FTrunc_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_12 = CallFunc_Array_Get_Item_12;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_4 = CallFunc_GetDataTableRowFromName_OutRow_4;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_4 = CallFunc_GetDataTableRowFromName_ReturnValue_4;
	Parms.CallFunc_Array_Get_Item_13 = CallFunc_Array_Get_Item_13;
	Parms.CallFunc_Array_Get_Item_14 = CallFunc_Array_Get_Item_14;
	Parms.CallFunc_Array_Get_Item_15 = CallFunc_Array_Get_Item_15;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_5 = CallFunc_GetDataTableRowNames_OutRowNames_5;
	Parms.CallFunc_Array_Get_Item_16 = CallFunc_Array_Get_Item_16;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_5 = CallFunc_GetDataTableRowFromName_OutRow_5;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_5 = CallFunc_GetDataTableRowFromName_ReturnValue_5;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_6 = CallFunc_GetDataTableRowNames_OutRowNames_6;
	Parms.CallFunc_Array_Get_Item_17 = CallFunc_Array_Get_Item_17;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_6 = CallFunc_GetDataTableRowFromName_OutRow_6;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_6 = CallFunc_GetDataTableRowFromName_ReturnValue_6;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_2 = CallFunc_Conv_BoolToInt_ReturnValue_2;
	Parms.K2Node_SwitchInteger_CmpSuccess_10 = K2Node_SwitchInteger_CmpSuccess_10;
	Parms.CallFunc_Array_Get_Item_18 = CallFunc_Array_Get_Item_18;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_7 = CallFunc_GetDataTableRowNames_OutRowNames_7;
	Parms.CallFunc_Array_Get_Item_19 = CallFunc_Array_Get_Item_19;
	Parms.CallFunc_Array_Get_Item_20 = CallFunc_Array_Get_Item_20;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_7 = CallFunc_GetDataTableRowFromName_OutRow_7;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_7 = CallFunc_GetDataTableRowFromName_ReturnValue_7;
	Parms.CallFunc_Array_Get_Item_21 = CallFunc_Array_Get_Item_21;
	Parms.CallFunc_GetFloatValue_ReturnValue_3 = CallFunc_GetFloatValue_ReturnValue_3;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_8 = CallFunc_GetDataTableRowNames_OutRowNames_8;
	Parms.CallFunc_Array_Get_Item_22 = CallFunc_Array_Get_Item_22;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_8 = CallFunc_GetDataTableRowFromName_OutRow_8;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_8 = CallFunc_GetDataTableRowFromName_ReturnValue_8;
	Parms.CallFunc_Array_Get_Item_23 = CallFunc_Array_Get_Item_23;
	Parms.CallFunc_Array_Get_Item_24 = CallFunc_Array_Get_Item_24;
	Parms.CallFunc_GetFloatValue_ReturnValue_4 = CallFunc_GetFloatValue_ReturnValue_4;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_9 = CallFunc_GetDataTableRowNames_OutRowNames_9;
	Parms.CallFunc_Array_Get_Item_25 = CallFunc_Array_Get_Item_25;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_9 = CallFunc_GetDataTableRowFromName_OutRow_9;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_9 = CallFunc_GetDataTableRowFromName_ReturnValue_9;
	Parms.CallFunc_Array_Get_Item_26 = CallFunc_Array_Get_Item_26;
	Parms.CallFunc_GetFloatValue_ReturnValue_5 = CallFunc_GetFloatValue_ReturnValue_5;
	Parms.CallFunc_Array_Get_Item_27 = CallFunc_Array_Get_Item_27;
	Parms.CallFunc_Lerp_ReturnValue_3 = CallFunc_Lerp_ReturnValue_3;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_10 = CallFunc_GetDataTableRowNames_OutRowNames_10;
	Parms.CallFunc_Array_Get_Item_28 = CallFunc_Array_Get_Item_28;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_10 = CallFunc_GetDataTableRowFromName_OutRow_10;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_10 = CallFunc_GetDataTableRowFromName_ReturnValue_10;
	Parms.CallFunc_GetFloatValue_ReturnValue_6 = CallFunc_GetFloatValue_ReturnValue_6;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_11 = CallFunc_GetDataTableRowNames_OutRowNames_11;
	Parms.CallFunc_Array_Get_Item_29 = CallFunc_Array_Get_Item_29;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_11 = CallFunc_GetDataTableRowFromName_OutRow_11;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_11 = CallFunc_GetDataTableRowFromName_ReturnValue_11;
	Parms.CallFunc_Array_Get_Item_30 = CallFunc_Array_Get_Item_30;
	Parms.CallFunc_Lerp_ReturnValue_4 = CallFunc_Lerp_ReturnValue_4;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_12 = CallFunc_GetDataTableRowNames_OutRowNames_12;
	Parms.CallFunc_Array_Get_Item_31 = CallFunc_Array_Get_Item_31;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_12 = CallFunc_GetDataTableRowFromName_OutRow_12;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_12 = CallFunc_GetDataTableRowFromName_ReturnValue_12;
	Parms.K2Node_SwitchInteger_CmpSuccess_11 = K2Node_SwitchInteger_CmpSuccess_11;
	Parms.CallFunc_Array_Get_Item_32 = CallFunc_Array_Get_Item_32;
	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue_1 = CallFunc_Conv_LinearColorToColor_ReturnValue_1;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_3 = CallFunc_Conv_BoolToInt_ReturnValue_3;
	Parms.K2Node_SwitchInteger_CmpSuccess_12 = K2Node_SwitchInteger_CmpSuccess_12;
	Parms.CallFunc_Array_Get_Item_33 = CallFunc_Array_Get_Item_33;
	Parms.CallFunc_Array_Get_Item_34 = CallFunc_Array_Get_Item_34;
	Parms.CallFunc_GetFloatValue_ReturnValue_7 = CallFunc_GetFloatValue_ReturnValue_7;
	Parms.CallFunc_Lerp_ReturnValue_5 = CallFunc_Lerp_ReturnValue_5;
	Parms.CallFunc_Array_Get_Item_35 = CallFunc_Array_Get_Item_35;
	Parms.CallFunc_Array_Get_Item_36 = CallFunc_Array_Get_Item_36;
	Parms.CallFunc_GetFloatValue_ReturnValue_8 = CallFunc_GetFloatValue_ReturnValue_8;
	Parms.CallFunc_Lerp_ReturnValue_6 = CallFunc_Lerp_ReturnValue_6;
	Parms.CallFunc_Array_Get_Item_37 = CallFunc_Array_Get_Item_37;
	Parms.CallFunc_Array_Get_Item_38 = CallFunc_Array_Get_Item_38;
	Parms.CallFunc_GetFloatValue_ReturnValue_9 = CallFunc_GetFloatValue_ReturnValue_9;
	Parms.CallFunc_Lerp_ReturnValue_7 = CallFunc_Lerp_ReturnValue_7;
	Parms.CallFunc_Array_Get_Item_39 = CallFunc_Array_Get_Item_39;
	Parms.CallFunc_GetFloatValue_ReturnValue_10 = CallFunc_GetFloatValue_ReturnValue_10;
	Parms.CallFunc_GetFloatValue_ReturnValue_11 = CallFunc_GetFloatValue_ReturnValue_11;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue_4 = CallFunc_FTrunc_ReturnValue_4;
	Parms.CallFunc_Lerp_ReturnValue_8 = CallFunc_Lerp_ReturnValue_8;
	Parms.CallFunc_Conv_IntToBool_ReturnValue_2 = CallFunc_Conv_IntToBool_ReturnValue_2;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_4 = CallFunc_Conv_BoolToInt_ReturnValue_4;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_5 = CallFunc_Conv_BoolToInt_ReturnValue_5;
	Parms.K2Node_SwitchInteger_CmpSuccess_13 = K2Node_SwitchInteger_CmpSuccess_13;
	Parms.K2Node_SwitchInteger_CmpSuccess_14 = K2Node_SwitchInteger_CmpSuccess_14;
	Parms.CallFunc_Array_Get_Item_40 = CallFunc_Array_Get_Item_40;
	Parms.CallFunc_Array_Get_Item_41 = CallFunc_Array_Get_Item_41;
	Parms.CallFunc_GetFloatValue_ReturnValue_12 = CallFunc_GetFloatValue_ReturnValue_12;
	Parms.CallFunc_Lerp_ReturnValue_9 = CallFunc_Lerp_ReturnValue_9;
	Parms.CallFunc_Array_Get_Item_42 = CallFunc_Array_Get_Item_42;
	Parms.CallFunc_Array_Get_Item_43 = CallFunc_Array_Get_Item_43;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_6 = CallFunc_Conv_BoolToInt_ReturnValue_6;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_13 = CallFunc_GetDataTableRowNames_OutRowNames_13;
	Parms.K2Node_SwitchInteger_CmpSuccess_15 = K2Node_SwitchInteger_CmpSuccess_15;
	Parms.CallFunc_Array_Get_Item_44 = CallFunc_Array_Get_Item_44;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_13 = CallFunc_GetDataTableRowFromName_OutRow_13;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_13 = CallFunc_GetDataTableRowFromName_ReturnValue_13;
	Parms.CallFunc_Array_Get_Item_45 = CallFunc_Array_Get_Item_45;
	Parms.CallFunc_Array_Get_Item_46 = CallFunc_Array_Get_Item_46;
	Parms.CallFunc_GetFloatValue_ReturnValue_13 = CallFunc_GetFloatValue_ReturnValue_13;
	Parms.CallFunc_Lerp_ReturnValue_10 = CallFunc_Lerp_ReturnValue_10;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_14 = CallFunc_GetDataTableRowNames_OutRowNames_14;
	Parms.CallFunc_Array_Get_Item_47 = CallFunc_Array_Get_Item_47;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_14 = CallFunc_GetDataTableRowFromName_OutRow_14;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_14 = CallFunc_GetDataTableRowFromName_ReturnValue_14;
	Parms.CallFunc_GetFloatValue_ReturnValue_14 = CallFunc_GetFloatValue_ReturnValue_14;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_15 = CallFunc_GetDataTableRowNames_OutRowNames_15;
	Parms.CallFunc_Array_Get_Item_48 = CallFunc_Array_Get_Item_48;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_15 = CallFunc_GetDataTableRowFromName_OutRow_15;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_15 = CallFunc_GetDataTableRowFromName_ReturnValue_15;
	Parms.CallFunc_GetFloatValue_ReturnValue_15 = CallFunc_GetFloatValue_ReturnValue_15;
	Parms.CallFunc_Lerp_ReturnValue_11 = CallFunc_Lerp_ReturnValue_11;
	Parms.CallFunc_FTrunc_ReturnValue_5 = CallFunc_FTrunc_ReturnValue_5;
	Parms.CallFunc_Array_Get_Item_49 = CallFunc_Array_Get_Item_49;
	Parms.CallFunc_Lerp_ReturnValue_12 = CallFunc_Lerp_ReturnValue_12;
	Parms.K2Node_SwitchInteger_CmpSuccess_16 = K2Node_SwitchInteger_CmpSuccess_16;
	Parms.CallFunc_Array_Get_Item_50 = CallFunc_Array_Get_Item_50;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_7 = CallFunc_Conv_BoolToInt_ReturnValue_7;
	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue_2 = CallFunc_Conv_LinearColorToColor_ReturnValue_2;
	Parms.K2Node_SwitchInteger_CmpSuccess_17 = K2Node_SwitchInteger_CmpSuccess_17;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_8 = CallFunc_Conv_BoolToInt_ReturnValue_8;
	Parms.K2Node_SwitchInteger_CmpSuccess_18 = K2Node_SwitchInteger_CmpSuccess_18;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.K2Node_VariableSet_ContactShadowLength_ImplicitCast = K2Node_VariableSet_ContactShadowLength_ImplicitCast;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast = CallFunc_GetFloatValue_InTime_ImplicitCast;
	Parms.CallFunc_FTrunc_A_ImplicitCast = CallFunc_FTrunc_A_ImplicitCast;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_1 = CallFunc_GetFloatValue_InTime_ImplicitCast_1;
	Parms.CallFunc_FTrunc_A_ImplicitCast_1 = CallFunc_FTrunc_A_ImplicitCast_1;
	Parms.CallFunc_SetCascadeTransitionFraction_NewValue_ImplicitCast = CallFunc_SetCascadeTransitionFraction_NewValue_ImplicitCast;
	Parms.CallFunc_SetCascadeDistributionExponent_NewValue_ImplicitCast = CallFunc_SetCascadeDistributionExponent_NewValue_ImplicitCast;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_2 = CallFunc_GetFloatValue_InTime_ImplicitCast_2;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast = CallFunc_Lerp_Alpha_ImplicitCast;
	Parms.CallFunc_SetVolumetricScatteringIntensity_NewIntensity_ImplicitCast = CallFunc_SetVolumetricScatteringIntensity_NewIntensity_ImplicitCast;
	Parms.CallFunc_SetDynamicShadowDistanceMovableLight_NewValue_ImplicitCast = CallFunc_SetDynamicShadowDistanceMovableLight_NewValue_ImplicitCast;
	Parms.CallFunc_SetCascadeTransitionFraction_NewValue_ImplicitCast_1 = CallFunc_SetCascadeTransitionFraction_NewValue_ImplicitCast_1;
	Parms.CallFunc_SetCascadeDistributionExponent_NewValue_ImplicitCast_1 = CallFunc_SetCascadeDistributionExponent_NewValue_ImplicitCast_1;
	Parms.CallFunc_SetDynamicShadowDistanceMovableLight_NewValue_ImplicitCast_1 = CallFunc_SetDynamicShadowDistanceMovableLight_NewValue_ImplicitCast_1;
	Parms.CallFunc_SetCascadeTransitionFraction_NewValue_ImplicitCast_2 = CallFunc_SetCascadeTransitionFraction_NewValue_ImplicitCast_2;
	Parms.CallFunc_SetCascadeDistributionExponent_NewValue_ImplicitCast_2 = CallFunc_SetCascadeDistributionExponent_NewValue_ImplicitCast_2;
	Parms.CallFunc_SetVolumetricScatteringIntensity_NewIntensity_ImplicitCast_1 = CallFunc_SetVolumetricScatteringIntensity_NewIntensity_ImplicitCast_1;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_3 = CallFunc_GetFloatValue_InTime_ImplicitCast_3;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_1 = CallFunc_Lerp_Alpha_ImplicitCast_1;
	Parms.CallFunc_SetVolumetricScatteringIntensity_NewIntensity_ImplicitCast_2 = CallFunc_SetVolumetricScatteringIntensity_NewIntensity_ImplicitCast_2;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_4 = CallFunc_GetFloatValue_InTime_ImplicitCast_4;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_2 = CallFunc_Lerp_Alpha_ImplicitCast_2;
	Parms.CallFunc_SetVolumetricScatteringIntensity_NewIntensity_ImplicitCast_3 = CallFunc_SetVolumetricScatteringIntensity_NewIntensity_ImplicitCast_3;
	Parms.K2Node_VariableSet_ContactShadowLength_ImplicitCast_1 = K2Node_VariableSet_ContactShadowLength_ImplicitCast_1;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_5 = CallFunc_GetFloatValue_InTime_ImplicitCast_5;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_3 = CallFunc_Lerp_Alpha_ImplicitCast_3;
	Parms.CallFunc_SetOcclusionMaskDarkness_NewValue_ImplicitCast = CallFunc_SetOcclusionMaskDarkness_NewValue_ImplicitCast;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_6 = CallFunc_GetFloatValue_InTime_ImplicitCast_6;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_4 = CallFunc_Lerp_Alpha_ImplicitCast_4;
	Parms.CallFunc_SetIntensity_NewIntensity_ImplicitCast = CallFunc_SetIntensity_NewIntensity_ImplicitCast;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_7 = CallFunc_GetFloatValue_InTime_ImplicitCast_7;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_5 = CallFunc_Lerp_Alpha_ImplicitCast_5;
	Parms.CallFunc_SetVolumetricScatteringIntensity_NewIntensity_ImplicitCast_4 = CallFunc_SetVolumetricScatteringIntensity_NewIntensity_ImplicitCast_4;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_8 = CallFunc_GetFloatValue_InTime_ImplicitCast_8;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_6 = CallFunc_Lerp_Alpha_ImplicitCast_6;
	Parms.CallFunc_SetVolumetricScatteringIntensity_NewIntensity_ImplicitCast_5 = CallFunc_SetVolumetricScatteringIntensity_NewIntensity_ImplicitCast_5;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_9 = CallFunc_GetFloatValue_InTime_ImplicitCast_9;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_7 = CallFunc_Lerp_Alpha_ImplicitCast_7;
	Parms.CallFunc_SetOcclusionMaskDarkness_NewValue_ImplicitCast_1 = CallFunc_SetOcclusionMaskDarkness_NewValue_ImplicitCast_1;
	Parms.CallFunc_SetIntensity_NewIntensity_ImplicitCast_1 = CallFunc_SetIntensity_NewIntensity_ImplicitCast_1;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_10 = CallFunc_GetFloatValue_InTime_ImplicitCast_10;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_11 = CallFunc_GetFloatValue_InTime_ImplicitCast_11;
	Parms.CallFunc_FTrunc_A_ImplicitCast_2 = CallFunc_FTrunc_A_ImplicitCast_2;
	Parms.K2Node_VariableSet_CloudShadowOnAtmosphereStrength_ImplicitCast = K2Node_VariableSet_CloudShadowOnAtmosphereStrength_ImplicitCast;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_12 = CallFunc_GetFloatValue_InTime_ImplicitCast_12;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_8 = CallFunc_Lerp_Alpha_ImplicitCast_8;
	Parms.CallFunc_SetVolumetricScatteringIntensity_NewIntensity_ImplicitCast_6 = CallFunc_SetVolumetricScatteringIntensity_NewIntensity_ImplicitCast_6;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_13 = CallFunc_GetFloatValue_InTime_ImplicitCast_13;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_14 = CallFunc_GetFloatValue_InTime_ImplicitCast_14;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_9 = CallFunc_Lerp_Alpha_ImplicitCast_9;
	Parms.CallFunc_SetOcclusionMaskDarkness_NewValue_ImplicitCast_2 = CallFunc_SetOcclusionMaskDarkness_NewValue_ImplicitCast_2;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_15 = CallFunc_GetFloatValue_InTime_ImplicitCast_15;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_10 = CallFunc_Lerp_Alpha_ImplicitCast_10;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_11 = CallFunc_Lerp_Alpha_ImplicitCast_11;
	Parms.CallFunc_SetIntensity_NewIntensity_ImplicitCast_2 = CallFunc_SetIntensity_NewIntensity_ImplicitCast_2;
	Parms.K2Node_VariableSet_ContactShadowLength_ImplicitCast_2 = K2Node_VariableSet_ContactShadowLength_ImplicitCast_2;
	Parms.CallFunc_SetShadowDistanceFadeoutFraction_NewValue_ImplicitCast = CallFunc_SetShadowDistanceFadeoutFraction_NewValue_ImplicitCast;
	Parms.CallFunc_SetCascadeTransitionFraction_NewValue_ImplicitCast_3 = CallFunc_SetCascadeTransitionFraction_NewValue_ImplicitCast_3;
	Parms.CallFunc_SetCascadeDistributionExponent_NewValue_ImplicitCast_3 = CallFunc_SetCascadeDistributionExponent_NewValue_ImplicitCast_3;
	Parms.CallFunc_SetDynamicShadowDistanceMovableLight_NewValue_ImplicitCast_2 = CallFunc_SetDynamicShadowDistanceMovableLight_NewValue_ImplicitCast_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TimeofDay_Lighting.TimeofDay_Lighting_C.Initialize_Lighting
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Adjusted_Time                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Lighting_C::Initialize_Lighting(double Adjusted_Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Lighting_C", "Initialize_Lighting");

	Params::UTimeofDay_Lighting_C_Initialize_Lighting_Params Parms{};

	Parms.Adjusted_Time = Adjusted_Time;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TimeofDay_Lighting.TimeofDay_Lighting_C.Set_up_references
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDirectionalLightComponent*  Sun                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UDirectionalLightComponent*  Celestial                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USkyLightComponent*          SkyLight                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USkyAtmosphereComponent*     Sky_Atmosphere                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        Sky_Sphere                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UDataTable*>          Color_Data_Tables                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UPostProcessComponent*       Post_Process_Component                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        Moon_Crescent_A_01                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        Moon_Half_C_01                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        Moon_Crescent_B_01                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        Moon_Half_D_01                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        Moon_Full_E_01                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        Moon_Crescent_B_02                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        Moon_Crescent_A_02                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        Moon_Half_D_02                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        Moon_Half_C_02                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        Moon_Half_D_03                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Moon_Visibility                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        Moon_Atm_Crescent_A_01                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        Moon_Atm_Crescent_A_02                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        Moon_Atm_Crescent_B_01                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        Moon_Atm_Crescent_B_02                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        Moon_Atm_Half_C_01                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        Moon_Atm_Half_C_02                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        Moon_Atm_Half_D_01                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        Moon_Atm_Half_D_02                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        Moon_Atm_Half_D_03                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        Moon_Atm_Full_E                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Moon_A_Color_Row                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Moon_A_Saturation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Moon_B_Color_Row                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Moon_B_Saturation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Moon_C_Color_Row                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Moon_C_Saturation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Moon_D_Color_Row                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Moon_D_Saturation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Moon_E_Color_Row                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Moon_E_Saturation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Moon_A_Type                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Moon_B_Type                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Moon_C_Type                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Moon_D_Type                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Moon_E_Type                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Cloud_Index_A                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Ring_Type                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Ring_Color                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Nebula_Color_B                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Cloud_Index_B                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Cloud_Index_C                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Cloud_Index_D                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Cloud_Index_E                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Shadow_Cascade_Override                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Shadow_Cascades_Sun                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Shadow_Cascades_Celestial                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Dynamic_Shadow_Distance_                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Distribution_Exponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Transition_Fraction                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Distance_Fadeout_Fraction                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Contact_Shadow_Length                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Celestial_Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_Color_Category        Color_Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UDataTable*>          Color_Data_Table_Categories                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              Color_Saturation                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Day_Brightness                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Night_Brightness                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Atmosphere_Level                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Exposure_WIP                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_LUT_Category          LUT_Category                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LUT_WIP                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LUT_Saturation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Fog_Falloff                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Atmosphere_Minus_Density                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Atmosphere_Minus_Haze                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Atmosphere_Minus_Brightness                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Atmosphere_Minus_View_Distance                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Atmosphere_Minus_Falloff                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Sun_Color_Override_Minus_Adv                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Sun_Color_Minus_Adv                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Sun_Saturation_Minus_Adv                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Main_Celestial_Color_Override_Minus_Adv                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Main_Celestial_Color_Saturation_Minus_Adv                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Rayleigh_Color_Override_Minus_Adv                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Rayleigh_Color_Minus_Adv                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Rayleigh_Saturation_Minus_Adv                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Mie_Color_Override_Minus_Adv                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Mie_Color_Minus_Adv                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Mie_Saturation_Minus_Adv                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Sky_Luminance_Color_Override_Minus_Adv                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Sky_Luminance_Color_Minus_Adv                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Sky_Luminance_Saturation_Minus_Adv                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Exposure_Minus_Night                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HDR_Exposure_Override                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             HDR_Exposure_Compensation                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 HDR_Exposure_Compensation_Curve                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    HDR_Exposure_Metering_Mask                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             HDR_Low_Percent_Night                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             HDR_High_Percent_Night                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             HDR_Min_Brightness                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             HDR_Max_Brightness                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             HDR_Histogram_Log_Min                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             HDR_Histogram_Log_Max                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Hdr                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Slope                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Toe                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Shoulder                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Exposure_Minus_DawnDusk                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    HDR_Global_Minus_Saturation                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    HDR_Global_Minus_Contrast                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    HDR_Global_Minus_Gamma                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    HDR_Global_Minus_Gain                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    HDR_Global_Minus_Offset                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             HDR_Low_Percent_Day                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             HDR_High_Percent_Day                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Primary_Function_Override                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Color_Saturation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Day_Brightness_Exposure                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Celestial_Color                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Night_Brightness_and_Exposures                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Atmosphere                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_LUT                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Color_Minus_Category                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Moon_A_Atmosphere_Color                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Moon_B_Atmosphere_Color                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Moon_C_Atmosphere_Color                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Moon_D_Atmosphere_Color                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Moon_Minus_Nebula                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Ring_Toggle                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Nebula_Brightness                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Nebula_Type                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Visual_Environment_Preset_Override                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Visual_Environment_Preset_                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Atm_Moon_Visibility                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Cloud_Type                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Angle_A                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Angle_B                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Exposure_Comp                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Low_Percent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             High_Percent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Exposure_Comp_Night                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Exposure_Comp_Dusk                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Exposure_Comp_Dawn                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Fog_Minus_Volumetric                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Fog_Minus_Volumetric__MinusNight                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Fog_Minus_Volumetric                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Fog_Minus_Volumetric_Minus_Night                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Eye_Adapt_Override                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Shadow_Cascade_Level                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Celestial_Intensity                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Atmosphere_Minus_Height_Fog_Cont__Minus_Night                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             White_Clip                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temperature                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        Lens_Flare_Sun                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Fog_Dev_Override                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Fog_Day                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Fog_Night                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Atmosphere_Dev_Override                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ScreenSpaceReflection                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Nebula_Color_3                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Ring_Offset                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Ring_Scale                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Ring_Color_2                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Ring_Color_3                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Ring_Override_Manual                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Bloom_Intensity_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Fae_Magic_Toggle                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Debug_Minus_HWRT                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Manual_Fog_Only_Override                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Manual_Secondary_moon_Color                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_SecondaryMoonType                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Angle_X                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Angle_X_Manual_Override                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Color_Correction_Override                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Color_Master_Table                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Color_Select                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Atmosphere_Master                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EColor_Master_Table     Color_Master                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAtmosphere_Master      Atmosphere_Master                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Master_Override                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAtmosphere_Master      Visual_Environment_Preset                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Nebula_Color_1                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Vault_Override                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Atmosphere_Minus_Height_Fog_Cont__Minus_Day                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Cascade_Scalabilty_Override                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Shadow_Quality                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Exposure_Debug_Override                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Nightmare_Override                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Nightmare_Skylight                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Manual_Celestial_Override                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Celestial_Type                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Global_Illumination                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Fae_Magic_Alt_Toggle                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Fog_Minus_Cave_Override                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              BW_Switch                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              DesertVaultSwitch                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_MPC_BIome                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Manual_Skylight_No_Lumen                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Lumen_Minus_Base_Forest_Switch                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Realm_Minus_Cloud                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        BM_Card                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              PPM_Debug                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Lighting_C::Set_up_references(class UDirectionalLightComponent* Sun, class UDirectionalLightComponent* Celestial, class USkyLightComponent* SkyLight, class USkyAtmosphereComponent* Sky_Atmosphere, class UStaticMeshComponent* Sky_Sphere, TArray<class UDataTable*>& Color_Data_Tables, class UPostProcessComponent* Post_Process_Component, class UStaticMeshComponent* Moon_Crescent_A_01, class UStaticMeshComponent* Moon_Half_C_01, class UStaticMeshComponent* Moon_Crescent_B_01, class UStaticMeshComponent* Moon_Half_D_01, class UStaticMeshComponent* Moon_Full_E_01, class UStaticMeshComponent* Moon_Crescent_B_02, class UStaticMeshComponent* Moon_Crescent_A_02, class UStaticMeshComponent* Moon_Half_D_02, class UStaticMeshComponent* Moon_Half_C_02, class UStaticMeshComponent* Moon_Half_D_03, int32 Moon_Visibility, class UStaticMeshComponent* Moon_Atm_Crescent_A_01, class UStaticMeshComponent* Moon_Atm_Crescent_A_02, class UStaticMeshComponent* Moon_Atm_Crescent_B_01, class UStaticMeshComponent* Moon_Atm_Crescent_B_02, class UStaticMeshComponent* Moon_Atm_Half_C_01, class UStaticMeshComponent* Moon_Atm_Half_C_02, class UStaticMeshComponent* Moon_Atm_Half_D_01, class UStaticMeshComponent* Moon_Atm_Half_D_02, class UStaticMeshComponent* Moon_Atm_Half_D_03, class UStaticMeshComponent* Moon_Atm_Full_E, int32 Moon_A_Color_Row, int32 Moon_A_Saturation, int32 Moon_B_Color_Row, int32 Moon_B_Saturation, int32 Moon_C_Color_Row, int32 Moon_C_Saturation, int32 Moon_D_Color_Row, int32 Moon_D_Saturation, int32 Moon_E_Color_Row, int32 Moon_E_Saturation, int32 Moon_A_Type, int32 Moon_B_Type, int32 Moon_C_Type, int32 Moon_D_Type, int32 Moon_E_Type, int32 Cloud_Index_A, int32 Ring_Type, int32 Ring_Color, int32 Nebula_Color_B, int32 Cloud_Index_B, int32 Cloud_Index_C, int32 Cloud_Index_D, int32 Cloud_Index_E, bool Shadow_Cascade_Override, int32 Shadow_Cascades_Sun, int32 Shadow_Cascades_Celestial, double Dynamic_Shadow_Distance_, double Distribution_Exponent, double Transition_Fraction, double Distance_Fadeout_Fraction, double Contact_Shadow_Length, int32 Celestial_Color, enum class E_Color_Category Color_Category, TArray<class UDataTable*>& Color_Data_Table_Categories, int32 Color_Saturation, int32 Color, int32 Day_Brightness, int32 Night_Brightness, int32 Atmosphere_Level, int32 Exposure_WIP, enum class E_LUT_Category LUT_Category, int32 LUT_WIP, int32 LUT_Saturation, int32 Fog_Falloff, int32 Atmosphere_Minus_Density, int32 Atmosphere_Minus_Haze, int32 Atmosphere_Minus_Brightness, int32 Atmosphere_Minus_View_Distance, int32 Atmosphere_Minus_Falloff, bool Sun_Color_Override_Minus_Adv, int32 Sun_Color_Minus_Adv, int32 Sun_Saturation_Minus_Adv, bool Main_Celestial_Color_Override_Minus_Adv, int32 Main_Celestial_Color_Saturation_Minus_Adv, bool Rayleigh_Color_Override_Minus_Adv, int32 Rayleigh_Color_Minus_Adv, int32 Rayleigh_Saturation_Minus_Adv, bool Mie_Color_Override_Minus_Adv, int32 Mie_Color_Minus_Adv, int32 Mie_Saturation_Minus_Adv, bool Sky_Luminance_Color_Override_Minus_Adv, int32 Sky_Luminance_Color_Minus_Adv, int32 Sky_Luminance_Saturation_Minus_Adv, int32 Exposure_Minus_Night, bool HDR_Exposure_Override, double HDR_Exposure_Compensation, class UCurveFloat* HDR_Exposure_Compensation_Curve, class UTexture* HDR_Exposure_Metering_Mask, double HDR_Low_Percent_Night, double HDR_High_Percent_Night, double HDR_Min_Brightness, double HDR_Max_Brightness, double HDR_Histogram_Log_Min, double HDR_Histogram_Log_Max, int32 Hdr, double Slope, double Toe, double Shoulder, int32 Exposure_Minus_DawnDusk, const struct FVector4& HDR_Global_Minus_Saturation, const struct FVector4& HDR_Global_Minus_Contrast, const struct FVector4& HDR_Global_Minus_Gamma, const struct FVector4& HDR_Global_Minus_Gain, const struct FVector4& HDR_Global_Minus_Offset, double HDR_Low_Percent_Day, double HDR_High_Percent_Day, bool Primary_Function_Override, int32 Realm_Color, int32 Realm_Color_Saturation, int32 Realm_Day_Brightness_Exposure, int32 Realm_Minus_Celestial_Color, int32 Realm_Minus_Night_Brightness_and_Exposures, int32 Realm_Minus_Atmosphere, int32 Realm_Minus_LUT, int32 Realm_Minus_Color_Minus_Category, int32 Realm_Minus_Moon_A_Atmosphere_Color, int32 Realm_Minus_Moon_B_Atmosphere_Color, int32 Realm_Minus_Moon_C_Atmosphere_Color, int32 Realm_Minus_Moon_D_Atmosphere_Color, int32 Realm_Minus_Moon_Minus_Nebula, int32 Realm_Minus_Ring_Toggle, int32 Realm_Minus_Nebula_Brightness, int32 Realm_Minus_Nebula_Type, bool Visual_Environment_Preset_Override, int32 Visual_Environment_Preset_, int32 Realm_Minus_Atm_Moon_Visibility, int32 Realm_Minus_Cloud_Type, double Angle_A, double Angle_B, int32 Exposure_Comp, double Low_Percent, double High_Percent, int32 Exposure_Comp_Night, double Exposure_Comp_Dusk, int32 Exposure_Comp_Dawn, int32 Fog_Minus_Volumetric, int32 Fog_Minus_Volumetric__MinusNight, int32 Realm_Minus_Fog_Minus_Volumetric, int32 Realm_Minus_Fog_Minus_Volumetric_Minus_Night, int32 Eye_Adapt_Override, int32 Shadow_Cascade_Level, int32 Realm_Minus_Celestial_Intensity, int32 Atmosphere_Minus_Height_Fog_Cont__Minus_Night, double White_Clip, double Temperature, class UStaticMeshComponent* Lens_Flare_Sun, bool Fog_Dev_Override, int32 Fog_Day, int32 Fog_Night, bool Atmosphere_Dev_Override, int32 ScreenSpaceReflection, int32 Realm_Minus_Nebula_Color_3, double Ring_Offset, double Ring_Scale, int32 Ring_Color_2, int32 Ring_Color_3, bool Ring_Override_Manual, int32 Bloom_Intensity_, int32 Realm_Minus_Fae_Magic_Toggle, int32 Debug_Minus_HWRT, bool Manual_Fog_Only_Override, bool Manual_Secondary_moon_Color, int32 Realm_Minus_SecondaryMoonType, int32 Realm_Minus_Angle_X, bool Angle_X_Manual_Override, bool Color_Correction_Override, int32 Realm_Minus_Color_Master_Table, int32 Realm_Minus_Color_Select, int32 Realm_Minus_Atmosphere_Master, enum class EColor_Master_Table Color_Master, enum class EAtmosphere_Master Atmosphere_Master, bool Master_Override, enum class EAtmosphere_Master Visual_Environment_Preset, int32 Realm_Minus_Nebula_Color_1, int32 Realm_Minus_Vault_Override, int32 Atmosphere_Minus_Height_Fog_Cont__Minus_Day, bool Cascade_Scalabilty_Override, int32 Shadow_Quality, bool Exposure_Debug_Override, bool Nightmare_Override, double Nightmare_Skylight, bool Manual_Celestial_Override, int32 Realm_Minus_Celestial_Type, int32 Global_Illumination, int32 Realm_Minus_Fae_Magic_Alt_Toggle, int32 Realm_Minus_Fog_Minus_Cave_Override, int32 BW_Switch, int32 DesertVaultSwitch, int32 Realm_Minus_MPC_BIome, double Manual_Skylight_No_Lumen, int32 Lumen_Minus_Base_Forest_Switch, int32 Realm_Minus_Cloud, class UStaticMeshComponent* BM_Card, int32 PPM_Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Lighting_C", "Set_up_references");

	Params::UTimeofDay_Lighting_C_Set_up_references_Params Parms{};

	Parms.Sun = Sun;
	Parms.Celestial = Celestial;
	Parms.SkyLight = SkyLight;
	Parms.Sky_Atmosphere = Sky_Atmosphere;
	Parms.Sky_Sphere = Sky_Sphere;
	Parms.Color_Data_Tables = Color_Data_Tables;
	Parms.Post_Process_Component = Post_Process_Component;
	Parms.Moon_Crescent_A_01 = Moon_Crescent_A_01;
	Parms.Moon_Half_C_01 = Moon_Half_C_01;
	Parms.Moon_Crescent_B_01 = Moon_Crescent_B_01;
	Parms.Moon_Half_D_01 = Moon_Half_D_01;
	Parms.Moon_Full_E_01 = Moon_Full_E_01;
	Parms.Moon_Crescent_B_02 = Moon_Crescent_B_02;
	Parms.Moon_Crescent_A_02 = Moon_Crescent_A_02;
	Parms.Moon_Half_D_02 = Moon_Half_D_02;
	Parms.Moon_Half_C_02 = Moon_Half_C_02;
	Parms.Moon_Half_D_03 = Moon_Half_D_03;
	Parms.Moon_Visibility = Moon_Visibility;
	Parms.Moon_Atm_Crescent_A_01 = Moon_Atm_Crescent_A_01;
	Parms.Moon_Atm_Crescent_A_02 = Moon_Atm_Crescent_A_02;
	Parms.Moon_Atm_Crescent_B_01 = Moon_Atm_Crescent_B_01;
	Parms.Moon_Atm_Crescent_B_02 = Moon_Atm_Crescent_B_02;
	Parms.Moon_Atm_Half_C_01 = Moon_Atm_Half_C_01;
	Parms.Moon_Atm_Half_C_02 = Moon_Atm_Half_C_02;
	Parms.Moon_Atm_Half_D_01 = Moon_Atm_Half_D_01;
	Parms.Moon_Atm_Half_D_02 = Moon_Atm_Half_D_02;
	Parms.Moon_Atm_Half_D_03 = Moon_Atm_Half_D_03;
	Parms.Moon_Atm_Full_E = Moon_Atm_Full_E;
	Parms.Moon_A_Color_Row = Moon_A_Color_Row;
	Parms.Moon_A_Saturation = Moon_A_Saturation;
	Parms.Moon_B_Color_Row = Moon_B_Color_Row;
	Parms.Moon_B_Saturation = Moon_B_Saturation;
	Parms.Moon_C_Color_Row = Moon_C_Color_Row;
	Parms.Moon_C_Saturation = Moon_C_Saturation;
	Parms.Moon_D_Color_Row = Moon_D_Color_Row;
	Parms.Moon_D_Saturation = Moon_D_Saturation;
	Parms.Moon_E_Color_Row = Moon_E_Color_Row;
	Parms.Moon_E_Saturation = Moon_E_Saturation;
	Parms.Moon_A_Type = Moon_A_Type;
	Parms.Moon_B_Type = Moon_B_Type;
	Parms.Moon_C_Type = Moon_C_Type;
	Parms.Moon_D_Type = Moon_D_Type;
	Parms.Moon_E_Type = Moon_E_Type;
	Parms.Cloud_Index_A = Cloud_Index_A;
	Parms.Ring_Type = Ring_Type;
	Parms.Ring_Color = Ring_Color;
	Parms.Nebula_Color_B = Nebula_Color_B;
	Parms.Cloud_Index_B = Cloud_Index_B;
	Parms.Cloud_Index_C = Cloud_Index_C;
	Parms.Cloud_Index_D = Cloud_Index_D;
	Parms.Cloud_Index_E = Cloud_Index_E;
	Parms.Shadow_Cascade_Override = Shadow_Cascade_Override;
	Parms.Shadow_Cascades_Sun = Shadow_Cascades_Sun;
	Parms.Shadow_Cascades_Celestial = Shadow_Cascades_Celestial;
	Parms.Dynamic_Shadow_Distance_ = Dynamic_Shadow_Distance_;
	Parms.Distribution_Exponent = Distribution_Exponent;
	Parms.Transition_Fraction = Transition_Fraction;
	Parms.Distance_Fadeout_Fraction = Distance_Fadeout_Fraction;
	Parms.Contact_Shadow_Length = Contact_Shadow_Length;
	Parms.Celestial_Color = Celestial_Color;
	Parms.Color_Category = Color_Category;
	Parms.Color_Data_Table_Categories = Color_Data_Table_Categories;
	Parms.Color_Saturation = Color_Saturation;
	Parms.Color = Color;
	Parms.Day_Brightness = Day_Brightness;
	Parms.Night_Brightness = Night_Brightness;
	Parms.Atmosphere_Level = Atmosphere_Level;
	Parms.Exposure_WIP = Exposure_WIP;
	Parms.LUT_Category = LUT_Category;
	Parms.LUT_WIP = LUT_WIP;
	Parms.LUT_Saturation = LUT_Saturation;
	Parms.Fog_Falloff = Fog_Falloff;
	Parms.Atmosphere_Minus_Density = Atmosphere_Minus_Density;
	Parms.Atmosphere_Minus_Haze = Atmosphere_Minus_Haze;
	Parms.Atmosphere_Minus_Brightness = Atmosphere_Minus_Brightness;
	Parms.Atmosphere_Minus_View_Distance = Atmosphere_Minus_View_Distance;
	Parms.Atmosphere_Minus_Falloff = Atmosphere_Minus_Falloff;
	Parms.Sun_Color_Override_Minus_Adv = Sun_Color_Override_Minus_Adv;
	Parms.Sun_Color_Minus_Adv = Sun_Color_Minus_Adv;
	Parms.Sun_Saturation_Minus_Adv = Sun_Saturation_Minus_Adv;
	Parms.Main_Celestial_Color_Override_Minus_Adv = Main_Celestial_Color_Override_Minus_Adv;
	Parms.Main_Celestial_Color_Saturation_Minus_Adv = Main_Celestial_Color_Saturation_Minus_Adv;
	Parms.Rayleigh_Color_Override_Minus_Adv = Rayleigh_Color_Override_Minus_Adv;
	Parms.Rayleigh_Color_Minus_Adv = Rayleigh_Color_Minus_Adv;
	Parms.Rayleigh_Saturation_Minus_Adv = Rayleigh_Saturation_Minus_Adv;
	Parms.Mie_Color_Override_Minus_Adv = Mie_Color_Override_Minus_Adv;
	Parms.Mie_Color_Minus_Adv = Mie_Color_Minus_Adv;
	Parms.Mie_Saturation_Minus_Adv = Mie_Saturation_Minus_Adv;
	Parms.Sky_Luminance_Color_Override_Minus_Adv = Sky_Luminance_Color_Override_Minus_Adv;
	Parms.Sky_Luminance_Color_Minus_Adv = Sky_Luminance_Color_Minus_Adv;
	Parms.Sky_Luminance_Saturation_Minus_Adv = Sky_Luminance_Saturation_Minus_Adv;
	Parms.Exposure_Minus_Night = Exposure_Minus_Night;
	Parms.HDR_Exposure_Override = HDR_Exposure_Override;
	Parms.HDR_Exposure_Compensation = HDR_Exposure_Compensation;
	Parms.HDR_Exposure_Compensation_Curve = HDR_Exposure_Compensation_Curve;
	Parms.HDR_Exposure_Metering_Mask = HDR_Exposure_Metering_Mask;
	Parms.HDR_Low_Percent_Night = HDR_Low_Percent_Night;
	Parms.HDR_High_Percent_Night = HDR_High_Percent_Night;
	Parms.HDR_Min_Brightness = HDR_Min_Brightness;
	Parms.HDR_Max_Brightness = HDR_Max_Brightness;
	Parms.HDR_Histogram_Log_Min = HDR_Histogram_Log_Min;
	Parms.HDR_Histogram_Log_Max = HDR_Histogram_Log_Max;
	Parms.Hdr = Hdr;
	Parms.Slope = Slope;
	Parms.Toe = Toe;
	Parms.Shoulder = Shoulder;
	Parms.Exposure_Minus_DawnDusk = Exposure_Minus_DawnDusk;
	Parms.HDR_Global_Minus_Saturation = HDR_Global_Minus_Saturation;
	Parms.HDR_Global_Minus_Contrast = HDR_Global_Minus_Contrast;
	Parms.HDR_Global_Minus_Gamma = HDR_Global_Minus_Gamma;
	Parms.HDR_Global_Minus_Gain = HDR_Global_Minus_Gain;
	Parms.HDR_Global_Minus_Offset = HDR_Global_Minus_Offset;
	Parms.HDR_Low_Percent_Day = HDR_Low_Percent_Day;
	Parms.HDR_High_Percent_Day = HDR_High_Percent_Day;
	Parms.Primary_Function_Override = Primary_Function_Override;
	Parms.Realm_Color = Realm_Color;
	Parms.Realm_Color_Saturation = Realm_Color_Saturation;
	Parms.Realm_Day_Brightness_Exposure = Realm_Day_Brightness_Exposure;
	Parms.Realm_Minus_Celestial_Color = Realm_Minus_Celestial_Color;
	Parms.Realm_Minus_Night_Brightness_and_Exposures = Realm_Minus_Night_Brightness_and_Exposures;
	Parms.Realm_Minus_Atmosphere = Realm_Minus_Atmosphere;
	Parms.Realm_Minus_LUT = Realm_Minus_LUT;
	Parms.Realm_Minus_Color_Minus_Category = Realm_Minus_Color_Minus_Category;
	Parms.Realm_Minus_Moon_A_Atmosphere_Color = Realm_Minus_Moon_A_Atmosphere_Color;
	Parms.Realm_Minus_Moon_B_Atmosphere_Color = Realm_Minus_Moon_B_Atmosphere_Color;
	Parms.Realm_Minus_Moon_C_Atmosphere_Color = Realm_Minus_Moon_C_Atmosphere_Color;
	Parms.Realm_Minus_Moon_D_Atmosphere_Color = Realm_Minus_Moon_D_Atmosphere_Color;
	Parms.Realm_Minus_Moon_Minus_Nebula = Realm_Minus_Moon_Minus_Nebula;
	Parms.Realm_Minus_Ring_Toggle = Realm_Minus_Ring_Toggle;
	Parms.Realm_Minus_Nebula_Brightness = Realm_Minus_Nebula_Brightness;
	Parms.Realm_Minus_Nebula_Type = Realm_Minus_Nebula_Type;
	Parms.Visual_Environment_Preset_Override = Visual_Environment_Preset_Override;
	Parms.Visual_Environment_Preset_ = Visual_Environment_Preset_;
	Parms.Realm_Minus_Atm_Moon_Visibility = Realm_Minus_Atm_Moon_Visibility;
	Parms.Realm_Minus_Cloud_Type = Realm_Minus_Cloud_Type;
	Parms.Angle_A = Angle_A;
	Parms.Angle_B = Angle_B;
	Parms.Exposure_Comp = Exposure_Comp;
	Parms.Low_Percent = Low_Percent;
	Parms.High_Percent = High_Percent;
	Parms.Exposure_Comp_Night = Exposure_Comp_Night;
	Parms.Exposure_Comp_Dusk = Exposure_Comp_Dusk;
	Parms.Exposure_Comp_Dawn = Exposure_Comp_Dawn;
	Parms.Fog_Minus_Volumetric = Fog_Minus_Volumetric;
	Parms.Fog_Minus_Volumetric__MinusNight = Fog_Minus_Volumetric__MinusNight;
	Parms.Realm_Minus_Fog_Minus_Volumetric = Realm_Minus_Fog_Minus_Volumetric;
	Parms.Realm_Minus_Fog_Minus_Volumetric_Minus_Night = Realm_Minus_Fog_Minus_Volumetric_Minus_Night;
	Parms.Eye_Adapt_Override = Eye_Adapt_Override;
	Parms.Shadow_Cascade_Level = Shadow_Cascade_Level;
	Parms.Realm_Minus_Celestial_Intensity = Realm_Minus_Celestial_Intensity;
	Parms.Atmosphere_Minus_Height_Fog_Cont__Minus_Night = Atmosphere_Minus_Height_Fog_Cont__Minus_Night;
	Parms.White_Clip = White_Clip;
	Parms.Temperature = Temperature;
	Parms.Lens_Flare_Sun = Lens_Flare_Sun;
	Parms.Fog_Dev_Override = Fog_Dev_Override;
	Parms.Fog_Day = Fog_Day;
	Parms.Fog_Night = Fog_Night;
	Parms.Atmosphere_Dev_Override = Atmosphere_Dev_Override;
	Parms.ScreenSpaceReflection = ScreenSpaceReflection;
	Parms.Realm_Minus_Nebula_Color_3 = Realm_Minus_Nebula_Color_3;
	Parms.Ring_Offset = Ring_Offset;
	Parms.Ring_Scale = Ring_Scale;
	Parms.Ring_Color_2 = Ring_Color_2;
	Parms.Ring_Color_3 = Ring_Color_3;
	Parms.Ring_Override_Manual = Ring_Override_Manual;
	Parms.Bloom_Intensity_ = Bloom_Intensity_;
	Parms.Realm_Minus_Fae_Magic_Toggle = Realm_Minus_Fae_Magic_Toggle;
	Parms.Debug_Minus_HWRT = Debug_Minus_HWRT;
	Parms.Manual_Fog_Only_Override = Manual_Fog_Only_Override;
	Parms.Manual_Secondary_moon_Color = Manual_Secondary_moon_Color;
	Parms.Realm_Minus_SecondaryMoonType = Realm_Minus_SecondaryMoonType;
	Parms.Realm_Minus_Angle_X = Realm_Minus_Angle_X;
	Parms.Angle_X_Manual_Override = Angle_X_Manual_Override;
	Parms.Color_Correction_Override = Color_Correction_Override;
	Parms.Realm_Minus_Color_Master_Table = Realm_Minus_Color_Master_Table;
	Parms.Realm_Minus_Color_Select = Realm_Minus_Color_Select;
	Parms.Realm_Minus_Atmosphere_Master = Realm_Minus_Atmosphere_Master;
	Parms.Color_Master = Color_Master;
	Parms.Atmosphere_Master = Atmosphere_Master;
	Parms.Master_Override = Master_Override;
	Parms.Visual_Environment_Preset = Visual_Environment_Preset;
	Parms.Realm_Minus_Nebula_Color_1 = Realm_Minus_Nebula_Color_1;
	Parms.Realm_Minus_Vault_Override = Realm_Minus_Vault_Override;
	Parms.Atmosphere_Minus_Height_Fog_Cont__Minus_Day = Atmosphere_Minus_Height_Fog_Cont__Minus_Day;
	Parms.Cascade_Scalabilty_Override = Cascade_Scalabilty_Override;
	Parms.Shadow_Quality = Shadow_Quality;
	Parms.Exposure_Debug_Override = Exposure_Debug_Override;
	Parms.Nightmare_Override = Nightmare_Override;
	Parms.Nightmare_Skylight = Nightmare_Skylight;
	Parms.Manual_Celestial_Override = Manual_Celestial_Override;
	Parms.Realm_Minus_Celestial_Type = Realm_Minus_Celestial_Type;
	Parms.Global_Illumination = Global_Illumination;
	Parms.Realm_Minus_Fae_Magic_Alt_Toggle = Realm_Minus_Fae_Magic_Alt_Toggle;
	Parms.Realm_Minus_Fog_Minus_Cave_Override = Realm_Minus_Fog_Minus_Cave_Override;
	Parms.BW_Switch = BW_Switch;
	Parms.DesertVaultSwitch = DesertVaultSwitch;
	Parms.Realm_Minus_MPC_BIome = Realm_Minus_MPC_BIome;
	Parms.Manual_Skylight_No_Lumen = Manual_Skylight_No_Lumen;
	Parms.Lumen_Minus_Base_Forest_Switch = Lumen_Minus_Base_Forest_Switch;
	Parms.Realm_Minus_Cloud = Realm_Minus_Cloud;
	Parms.BM_Card = BM_Card;
	Parms.PPM_Debug = PPM_Debug;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TimeofDay_Lighting.TimeofDay_Lighting_C.UpdateLightingOnServer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             AdjustedTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Lighting_C::UpdateLightingOnServer(double AdjustedTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Lighting_C", "UpdateLightingOnServer");

	Params::UTimeofDay_Lighting_C_UpdateLightingOnServer_Params Parms{};

	Parms.AdjustedTime = AdjustedTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TimeofDay_Lighting.TimeofDay_Lighting_C.ExecuteUbergraph_TimeofDay_Lighting
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Adjusted_Time                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDirectionalLightComponent*  K2Node_CustomEvent_Sun                                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UDirectionalLightComponent*  K2Node_CustomEvent_Celestial                                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USkyLightComponent*          K2Node_CustomEvent_Skylight                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USkyAtmosphereComponent*     K2Node_CustomEvent_Sky_Atmosphere                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        K2Node_CustomEvent_Sky_Sphere                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UDataTable*>          K2Node_CustomEvent_Color_Data_Tables                             (ConstParm, ReferenceParm)
// class UPostProcessComponent*       K2Node_CustomEvent_Post_Process_Component                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        K2Node_CustomEvent_Moon_Crescent_A_01                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        K2Node_CustomEvent_Moon_Half_C_01                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        K2Node_CustomEvent_Moon_Crescent_B_01                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        K2Node_CustomEvent_Moon_Half_D_01                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        K2Node_CustomEvent_Moon_Full_E_01                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        K2Node_CustomEvent_Moon_Crescent_B_02                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        K2Node_CustomEvent_Moon_Crescent_A_02                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        K2Node_CustomEvent_Moon_Half_D_02                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        K2Node_CustomEvent_Moon_Half_C_02                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        K2Node_CustomEvent_Moon_Half_D_03                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Moon_Visibility                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        K2Node_CustomEvent_Moon_Atm_Crescent_A_01                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        K2Node_CustomEvent_Moon_Atm_Crescent_A_02                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        K2Node_CustomEvent_Moon_Atm_Crescent_B_01                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        K2Node_CustomEvent_Moon_Atm_Crescent_B_02                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        K2Node_CustomEvent_Moon_Atm_Half_C_01                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        K2Node_CustomEvent_Moon_Atm_Half_C_02                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        K2Node_CustomEvent_Moon_Atm_Half_D_01                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        K2Node_CustomEvent_Moon_Atm_Half_D_02                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        K2Node_CustomEvent_Moon_Atm_Half_D_03                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        K2Node_CustomEvent_Moon_Atm_Full_E                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Moon_A_Color_Row                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Moon_A_Saturation                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Moon_B_Color_Row                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Moon_B_Saturation                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Moon_C_Color_Row                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Moon_C_Saturation                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Moon_D_Color_Row                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Moon_D_Saturation                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Moon_E_Color_Row                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Moon_E_Saturation                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Moon_A_Type                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Moon_B_Type                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Moon_C_Type                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Moon_D_Type                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Moon_E_Type                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Cloud_Index_A                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Ring_Type                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Ring_Color                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Nebula_Color_B                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Cloud_Index_B                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Cloud_Index_C                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Cloud_Index_D                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Cloud_Index_E                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Shadow_Cascade_Override                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Shadow_Cascades_Sun                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Shadow_Cascades_Celestial                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Dynamic_Shadow_Distance_                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Distribution_Exponent                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Transition_Fraction                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Distance_Fadeout_Fraction                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Contact_Shadow_Length                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Celestial_Color                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_Color_Category        K2Node_CustomEvent_Color_Category                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UDataTable*>          K2Node_CustomEvent_Color_Data_Table_Categories                   (ConstParm, ReferenceParm)
// int32                              K2Node_CustomEvent_Color_Saturation                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Color                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Day_Brightness                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Night_Brightness                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Atmosphere_Level                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Exposure_WIP                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_LUT_Category          K2Node_CustomEvent_LUT_Category                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_LUT_WIP                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_LUT_Saturation                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Fog_Falloff                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Atmosphere___Density                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Atmosphere___Haze                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Atmosphere___Brightness                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Atmosphere___View_Distance                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Atmosphere___Falloff                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Sun_Color_Override___Adv                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Sun_Color___Adv                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Sun_Saturation___Adv                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Main_Celestial_Color_Override___Adv           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Main_Celestial_Color_Saturation___Adv         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Rayleigh_Color_Override___Adv                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Rayleigh_Color___Adv                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Rayleigh_Saturation___Adv                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Mie_Color_Override___Adv                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Mie_Color___Adv                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Mie_Saturation___Adv                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Sky_Luminance_Color_Override___Adv            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Sky_Luminance_Color___Adv                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Sky_Luminance_Saturation___Adv                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Exposure___Night                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_HDR_Exposure_Override                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_HDR_Exposure_Compensation                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 K2Node_CustomEvent_HDR_Exposure_Compensation_Curve               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    K2Node_CustomEvent_HDR_Exposure_Metering_Mask                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_HDR_Low_Percent_Night                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_HDR_High_Percent_Night                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_HDR_Min_Brightness                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_HDR_Max_Brightness                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_HDR_Histogram_Log_Min                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_HDR_Histogram_Log_Max                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_HDR                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Slope                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Toe                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Shoulder                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Exposure___DawnDusk                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    K2Node_CustomEvent_HDR_Global___Saturation                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    K2Node_CustomEvent_HDR_Global___Contrast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    K2Node_CustomEvent_HDR_Global___Gamma                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    K2Node_CustomEvent_HDR_Global___Gain                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    K2Node_CustomEvent_HDR_Global___Offset                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_HDR_Low_Percent_Day                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_HDR_High_Percent_Day                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Primary_Function_Override                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm_Color                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm_Color_Saturation                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm_Day_Brightness_Exposure                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Celestial_Color                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Night_Brightness_and_Exposures        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Atmosphere                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___LUT                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Color___Category                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Moon_A_Atmosphere_Color               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Moon_B_Atmosphere_Color               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Moon_C_Atmosphere_Color               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Moon_D_Atmosphere_Color               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Moon___Nebula                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Ring_Toggle                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Nebula_Brightness                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Nebula_Type                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Visual_Environment_Preset_Override            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Visual_Environment_Preset_                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Atm_Moon_Visibility                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Cloud_Type                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Angle_A                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Angle_B                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Exposure_Comp                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Low_Percent                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_High_Percent                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Exposure_Comp_Night                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Exposure_Comp_Dusk                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Exposure_Comp_Dawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Fog___Volumetric                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Fog___Volumetric___Night                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Fog___Volumetric                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Fog___Volumetric___Night              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Eye_Adapt_Override                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Shadow_Cascade_Level                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Celestial_Intensity                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Atmosphere___Height_Fog_Cont____Night         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_White_Clip                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Temperature                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        K2Node_CustomEvent_Lens_Flare_Sun                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Fog_Dev_Override                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Fog_Day                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Fog_Night                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Atmosphere_Dev_Override                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_ScreenSpaceReflection                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Nebula_Color_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Ring_Offset                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Ring_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Ring_Color_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Ring_Color_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Ring_Override_Manual                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Bloom_Intensity_                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Fae_Magic_Toggle                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Debug___HWRT                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Manual_Fog_Only_Override                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Manual_Secondary_moon_Color                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___SecondaryMoonType                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Angle_X                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Angle_X_Manual_Override                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Color_Correction_Override                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Color_Master_Table                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Color_Select                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Atmosphere_Master                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EColor_Master_Table     K2Node_CustomEvent_Color_Master                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAtmosphere_Master      K2Node_CustomEvent_Atmosphere_Master                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Master_Override                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAtmosphere_Master      K2Node_CustomEvent_Visual_Environment_Preset                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Nebula_Color_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Vault_Override                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Atmosphere___Height_Fog_Cont____Day           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Cascade_Scalabilty_Override                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Shadow_Quality                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Exposure_Debug_Override                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Nightmare_Override                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Nightmare_Skylight                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Manual_Celestial_Override                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Celestial_Type                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Global_Illumination                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Fae_Magic_Alt_Toggle                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Fog___Cave_Override                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_BW_Switch                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_DesertVaultSwitch                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___MPC_BIome                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Manual_Skylight_No_Lumen                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Lumen___Base_Forest_Switch                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Realm___Cloud                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        K2Node_CustomEvent_BM_Card                                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_PPM_Debug                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetToolLightIntentsity_Light_Intensity_Out              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_AdjustedTime                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeofDay_Lighting_C::ExecuteUbergraph_TimeofDay_Lighting(int32 EntryPoint, double K2Node_CustomEvent_Adjusted_Time, class UDirectionalLightComponent* K2Node_CustomEvent_Sun, class UDirectionalLightComponent* K2Node_CustomEvent_Celestial, class USkyLightComponent* K2Node_CustomEvent_Skylight, class USkyAtmosphereComponent* K2Node_CustomEvent_Sky_Atmosphere, class UStaticMeshComponent* K2Node_CustomEvent_Sky_Sphere, TArray<class UDataTable*>& K2Node_CustomEvent_Color_Data_Tables, class UPostProcessComponent* K2Node_CustomEvent_Post_Process_Component, class UStaticMeshComponent* K2Node_CustomEvent_Moon_Crescent_A_01, class UStaticMeshComponent* K2Node_CustomEvent_Moon_Half_C_01, class UStaticMeshComponent* K2Node_CustomEvent_Moon_Crescent_B_01, class UStaticMeshComponent* K2Node_CustomEvent_Moon_Half_D_01, class UStaticMeshComponent* K2Node_CustomEvent_Moon_Full_E_01, class UStaticMeshComponent* K2Node_CustomEvent_Moon_Crescent_B_02, class UStaticMeshComponent* K2Node_CustomEvent_Moon_Crescent_A_02, class UStaticMeshComponent* K2Node_CustomEvent_Moon_Half_D_02, class UStaticMeshComponent* K2Node_CustomEvent_Moon_Half_C_02, class UStaticMeshComponent* K2Node_CustomEvent_Moon_Half_D_03, int32 K2Node_CustomEvent_Moon_Visibility, class UStaticMeshComponent* K2Node_CustomEvent_Moon_Atm_Crescent_A_01, class UStaticMeshComponent* K2Node_CustomEvent_Moon_Atm_Crescent_A_02, class UStaticMeshComponent* K2Node_CustomEvent_Moon_Atm_Crescent_B_01, class UStaticMeshComponent* K2Node_CustomEvent_Moon_Atm_Crescent_B_02, class UStaticMeshComponent* K2Node_CustomEvent_Moon_Atm_Half_C_01, class UStaticMeshComponent* K2Node_CustomEvent_Moon_Atm_Half_C_02, class UStaticMeshComponent* K2Node_CustomEvent_Moon_Atm_Half_D_01, class UStaticMeshComponent* K2Node_CustomEvent_Moon_Atm_Half_D_02, class UStaticMeshComponent* K2Node_CustomEvent_Moon_Atm_Half_D_03, class UStaticMeshComponent* K2Node_CustomEvent_Moon_Atm_Full_E, int32 K2Node_CustomEvent_Moon_A_Color_Row, int32 K2Node_CustomEvent_Moon_A_Saturation, int32 K2Node_CustomEvent_Moon_B_Color_Row, int32 K2Node_CustomEvent_Moon_B_Saturation, int32 K2Node_CustomEvent_Moon_C_Color_Row, int32 K2Node_CustomEvent_Moon_C_Saturation, int32 K2Node_CustomEvent_Moon_D_Color_Row, int32 K2Node_CustomEvent_Moon_D_Saturation, int32 K2Node_CustomEvent_Moon_E_Color_Row, int32 K2Node_CustomEvent_Moon_E_Saturation, int32 K2Node_CustomEvent_Moon_A_Type, int32 K2Node_CustomEvent_Moon_B_Type, int32 K2Node_CustomEvent_Moon_C_Type, int32 K2Node_CustomEvent_Moon_D_Type, int32 K2Node_CustomEvent_Moon_E_Type, int32 K2Node_CustomEvent_Cloud_Index_A, int32 K2Node_CustomEvent_Ring_Type, int32 K2Node_CustomEvent_Ring_Color, int32 K2Node_CustomEvent_Nebula_Color_B, int32 K2Node_CustomEvent_Cloud_Index_B, int32 K2Node_CustomEvent_Cloud_Index_C, int32 K2Node_CustomEvent_Cloud_Index_D, int32 K2Node_CustomEvent_Cloud_Index_E, bool K2Node_CustomEvent_Shadow_Cascade_Override, int32 K2Node_CustomEvent_Shadow_Cascades_Sun, int32 K2Node_CustomEvent_Shadow_Cascades_Celestial, double K2Node_CustomEvent_Dynamic_Shadow_Distance_, double K2Node_CustomEvent_Distribution_Exponent, double K2Node_CustomEvent_Transition_Fraction, double K2Node_CustomEvent_Distance_Fadeout_Fraction, double K2Node_CustomEvent_Contact_Shadow_Length, int32 K2Node_CustomEvent_Celestial_Color, enum class E_Color_Category K2Node_CustomEvent_Color_Category, TArray<class UDataTable*>& K2Node_CustomEvent_Color_Data_Table_Categories, int32 K2Node_CustomEvent_Color_Saturation, int32 K2Node_CustomEvent_Color, int32 K2Node_CustomEvent_Day_Brightness, int32 K2Node_CustomEvent_Night_Brightness, int32 K2Node_CustomEvent_Atmosphere_Level, int32 K2Node_CustomEvent_Exposure_WIP, enum class E_LUT_Category K2Node_CustomEvent_LUT_Category, int32 K2Node_CustomEvent_LUT_WIP, int32 K2Node_CustomEvent_LUT_Saturation, int32 K2Node_CustomEvent_Fog_Falloff, int32 K2Node_CustomEvent_Atmosphere___Density, int32 K2Node_CustomEvent_Atmosphere___Haze, int32 K2Node_CustomEvent_Atmosphere___Brightness, int32 K2Node_CustomEvent_Atmosphere___View_Distance, int32 K2Node_CustomEvent_Atmosphere___Falloff, bool K2Node_CustomEvent_Sun_Color_Override___Adv, int32 K2Node_CustomEvent_Sun_Color___Adv, int32 K2Node_CustomEvent_Sun_Saturation___Adv, bool K2Node_CustomEvent_Main_Celestial_Color_Override___Adv, int32 K2Node_CustomEvent_Main_Celestial_Color_Saturation___Adv, bool K2Node_CustomEvent_Rayleigh_Color_Override___Adv, int32 K2Node_CustomEvent_Rayleigh_Color___Adv, int32 K2Node_CustomEvent_Rayleigh_Saturation___Adv, bool K2Node_CustomEvent_Mie_Color_Override___Adv, int32 K2Node_CustomEvent_Mie_Color___Adv, int32 K2Node_CustomEvent_Mie_Saturation___Adv, bool K2Node_CustomEvent_Sky_Luminance_Color_Override___Adv, int32 K2Node_CustomEvent_Sky_Luminance_Color___Adv, int32 K2Node_CustomEvent_Sky_Luminance_Saturation___Adv, int32 K2Node_CustomEvent_Exposure___Night, bool K2Node_CustomEvent_HDR_Exposure_Override, double K2Node_CustomEvent_HDR_Exposure_Compensation, class UCurveFloat* K2Node_CustomEvent_HDR_Exposure_Compensation_Curve, class UTexture* K2Node_CustomEvent_HDR_Exposure_Metering_Mask, double K2Node_CustomEvent_HDR_Low_Percent_Night, double K2Node_CustomEvent_HDR_High_Percent_Night, double K2Node_CustomEvent_HDR_Min_Brightness, double K2Node_CustomEvent_HDR_Max_Brightness, double K2Node_CustomEvent_HDR_Histogram_Log_Min, double K2Node_CustomEvent_HDR_Histogram_Log_Max, int32 K2Node_CustomEvent_HDR, double K2Node_CustomEvent_Slope, double K2Node_CustomEvent_Toe, double K2Node_CustomEvent_Shoulder, int32 K2Node_CustomEvent_Exposure___DawnDusk, const struct FVector4& K2Node_CustomEvent_HDR_Global___Saturation, const struct FVector4& K2Node_CustomEvent_HDR_Global___Contrast, const struct FVector4& K2Node_CustomEvent_HDR_Global___Gamma, const struct FVector4& K2Node_CustomEvent_HDR_Global___Gain, const struct FVector4& K2Node_CustomEvent_HDR_Global___Offset, double K2Node_CustomEvent_HDR_Low_Percent_Day, double K2Node_CustomEvent_HDR_High_Percent_Day, bool K2Node_CustomEvent_Primary_Function_Override, int32 K2Node_CustomEvent_Realm_Color, int32 K2Node_CustomEvent_Realm_Color_Saturation, int32 K2Node_CustomEvent_Realm_Day_Brightness_Exposure, int32 K2Node_CustomEvent_Realm___Celestial_Color, int32 K2Node_CustomEvent_Realm___Night_Brightness_and_Exposures, int32 K2Node_CustomEvent_Realm___Atmosphere, int32 K2Node_CustomEvent_Realm___LUT, int32 K2Node_CustomEvent_Realm___Color___Category, int32 K2Node_CustomEvent_Realm___Moon_A_Atmosphere_Color, int32 K2Node_CustomEvent_Realm___Moon_B_Atmosphere_Color, int32 K2Node_CustomEvent_Realm___Moon_C_Atmosphere_Color, int32 K2Node_CustomEvent_Realm___Moon_D_Atmosphere_Color, int32 K2Node_CustomEvent_Realm___Moon___Nebula, int32 K2Node_CustomEvent_Realm___Ring_Toggle, int32 K2Node_CustomEvent_Realm___Nebula_Brightness, int32 K2Node_CustomEvent_Realm___Nebula_Type, bool K2Node_CustomEvent_Visual_Environment_Preset_Override, int32 K2Node_CustomEvent_Visual_Environment_Preset_, int32 K2Node_CustomEvent_Realm___Atm_Moon_Visibility, int32 K2Node_CustomEvent_Realm___Cloud_Type, double K2Node_CustomEvent_Angle_A, double K2Node_CustomEvent_Angle_B, int32 K2Node_CustomEvent_Exposure_Comp, double K2Node_CustomEvent_Low_Percent, double K2Node_CustomEvent_High_Percent, int32 K2Node_CustomEvent_Exposure_Comp_Night, double K2Node_CustomEvent_Exposure_Comp_Dusk, int32 K2Node_CustomEvent_Exposure_Comp_Dawn, int32 K2Node_CustomEvent_Fog___Volumetric, int32 K2Node_CustomEvent_Fog___Volumetric___Night, int32 K2Node_CustomEvent_Realm___Fog___Volumetric, int32 K2Node_CustomEvent_Realm___Fog___Volumetric___Night, int32 K2Node_CustomEvent_Eye_Adapt_Override, int32 K2Node_CustomEvent_Shadow_Cascade_Level, int32 K2Node_CustomEvent_Realm___Celestial_Intensity, int32 K2Node_CustomEvent_Atmosphere___Height_Fog_Cont____Night, double K2Node_CustomEvent_White_Clip, double K2Node_CustomEvent_Temperature, class UStaticMeshComponent* K2Node_CustomEvent_Lens_Flare_Sun, bool K2Node_CustomEvent_Fog_Dev_Override, int32 K2Node_CustomEvent_Fog_Day, int32 K2Node_CustomEvent_Fog_Night, bool K2Node_CustomEvent_Atmosphere_Dev_Override, int32 K2Node_CustomEvent_ScreenSpaceReflection, int32 K2Node_CustomEvent_Realm___Nebula_Color_3, double K2Node_CustomEvent_Ring_Offset, double K2Node_CustomEvent_Ring_Scale, int32 K2Node_CustomEvent_Ring_Color_2, int32 K2Node_CustomEvent_Ring_Color_3, bool K2Node_CustomEvent_Ring_Override_Manual, int32 K2Node_CustomEvent_Bloom_Intensity_, int32 K2Node_CustomEvent_Realm___Fae_Magic_Toggle, int32 K2Node_CustomEvent_Debug___HWRT, bool K2Node_CustomEvent_Manual_Fog_Only_Override, bool K2Node_CustomEvent_Manual_Secondary_moon_Color, int32 K2Node_CustomEvent_Realm___SecondaryMoonType, int32 K2Node_CustomEvent_Realm___Angle_X, bool K2Node_CustomEvent_Angle_X_Manual_Override, bool K2Node_CustomEvent_Color_Correction_Override, int32 K2Node_CustomEvent_Realm___Color_Master_Table, int32 K2Node_CustomEvent_Realm___Color_Select, int32 K2Node_CustomEvent_Realm___Atmosphere_Master, enum class EColor_Master_Table K2Node_CustomEvent_Color_Master, enum class EAtmosphere_Master K2Node_CustomEvent_Atmosphere_Master, bool K2Node_CustomEvent_Master_Override, enum class EAtmosphere_Master K2Node_CustomEvent_Visual_Environment_Preset, int32 K2Node_CustomEvent_Realm___Nebula_Color_1, int32 K2Node_CustomEvent_Realm___Vault_Override, int32 K2Node_CustomEvent_Atmosphere___Height_Fog_Cont____Day, bool K2Node_CustomEvent_Cascade_Scalabilty_Override, int32 K2Node_CustomEvent_Shadow_Quality, bool K2Node_CustomEvent_Exposure_Debug_Override, bool K2Node_CustomEvent_Nightmare_Override, double K2Node_CustomEvent_Nightmare_Skylight, bool K2Node_CustomEvent_Manual_Celestial_Override, int32 K2Node_CustomEvent_Realm___Celestial_Type, int32 K2Node_CustomEvent_Global_Illumination, int32 K2Node_CustomEvent_Realm___Fae_Magic_Alt_Toggle, int32 K2Node_CustomEvent_Realm___Fog___Cave_Override, int32 K2Node_CustomEvent_BW_Switch, int32 K2Node_CustomEvent_DesertVaultSwitch, int32 K2Node_CustomEvent_Realm___MPC_BIome, double K2Node_CustomEvent_Manual_Skylight_No_Lumen, int32 K2Node_CustomEvent_Lumen___Base_Forest_Switch, int32 K2Node_CustomEvent_Realm___Cloud, class UStaticMeshComponent* K2Node_CustomEvent_BM_Card, int32 K2Node_CustomEvent_PPM_Debug, double CallFunc_GetToolLightIntentsity_Light_Intensity_Out, double K2Node_CustomEvent_AdjustedTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeofDay_Lighting_C", "ExecuteUbergraph_TimeofDay_Lighting");

	Params::UTimeofDay_Lighting_C_ExecuteUbergraph_TimeofDay_Lighting_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Adjusted_Time = K2Node_CustomEvent_Adjusted_Time;
	Parms.K2Node_CustomEvent_Sun = K2Node_CustomEvent_Sun;
	Parms.K2Node_CustomEvent_Celestial = K2Node_CustomEvent_Celestial;
	Parms.K2Node_CustomEvent_Skylight = K2Node_CustomEvent_Skylight;
	Parms.K2Node_CustomEvent_Sky_Atmosphere = K2Node_CustomEvent_Sky_Atmosphere;
	Parms.K2Node_CustomEvent_Sky_Sphere = K2Node_CustomEvent_Sky_Sphere;
	Parms.K2Node_CustomEvent_Color_Data_Tables = K2Node_CustomEvent_Color_Data_Tables;
	Parms.K2Node_CustomEvent_Post_Process_Component = K2Node_CustomEvent_Post_Process_Component;
	Parms.K2Node_CustomEvent_Moon_Crescent_A_01 = K2Node_CustomEvent_Moon_Crescent_A_01;
	Parms.K2Node_CustomEvent_Moon_Half_C_01 = K2Node_CustomEvent_Moon_Half_C_01;
	Parms.K2Node_CustomEvent_Moon_Crescent_B_01 = K2Node_CustomEvent_Moon_Crescent_B_01;
	Parms.K2Node_CustomEvent_Moon_Half_D_01 = K2Node_CustomEvent_Moon_Half_D_01;
	Parms.K2Node_CustomEvent_Moon_Full_E_01 = K2Node_CustomEvent_Moon_Full_E_01;
	Parms.K2Node_CustomEvent_Moon_Crescent_B_02 = K2Node_CustomEvent_Moon_Crescent_B_02;
	Parms.K2Node_CustomEvent_Moon_Crescent_A_02 = K2Node_CustomEvent_Moon_Crescent_A_02;
	Parms.K2Node_CustomEvent_Moon_Half_D_02 = K2Node_CustomEvent_Moon_Half_D_02;
	Parms.K2Node_CustomEvent_Moon_Half_C_02 = K2Node_CustomEvent_Moon_Half_C_02;
	Parms.K2Node_CustomEvent_Moon_Half_D_03 = K2Node_CustomEvent_Moon_Half_D_03;
	Parms.K2Node_CustomEvent_Moon_Visibility = K2Node_CustomEvent_Moon_Visibility;
	Parms.K2Node_CustomEvent_Moon_Atm_Crescent_A_01 = K2Node_CustomEvent_Moon_Atm_Crescent_A_01;
	Parms.K2Node_CustomEvent_Moon_Atm_Crescent_A_02 = K2Node_CustomEvent_Moon_Atm_Crescent_A_02;
	Parms.K2Node_CustomEvent_Moon_Atm_Crescent_B_01 = K2Node_CustomEvent_Moon_Atm_Crescent_B_01;
	Parms.K2Node_CustomEvent_Moon_Atm_Crescent_B_02 = K2Node_CustomEvent_Moon_Atm_Crescent_B_02;
	Parms.K2Node_CustomEvent_Moon_Atm_Half_C_01 = K2Node_CustomEvent_Moon_Atm_Half_C_01;
	Parms.K2Node_CustomEvent_Moon_Atm_Half_C_02 = K2Node_CustomEvent_Moon_Atm_Half_C_02;
	Parms.K2Node_CustomEvent_Moon_Atm_Half_D_01 = K2Node_CustomEvent_Moon_Atm_Half_D_01;
	Parms.K2Node_CustomEvent_Moon_Atm_Half_D_02 = K2Node_CustomEvent_Moon_Atm_Half_D_02;
	Parms.K2Node_CustomEvent_Moon_Atm_Half_D_03 = K2Node_CustomEvent_Moon_Atm_Half_D_03;
	Parms.K2Node_CustomEvent_Moon_Atm_Full_E = K2Node_CustomEvent_Moon_Atm_Full_E;
	Parms.K2Node_CustomEvent_Moon_A_Color_Row = K2Node_CustomEvent_Moon_A_Color_Row;
	Parms.K2Node_CustomEvent_Moon_A_Saturation = K2Node_CustomEvent_Moon_A_Saturation;
	Parms.K2Node_CustomEvent_Moon_B_Color_Row = K2Node_CustomEvent_Moon_B_Color_Row;
	Parms.K2Node_CustomEvent_Moon_B_Saturation = K2Node_CustomEvent_Moon_B_Saturation;
	Parms.K2Node_CustomEvent_Moon_C_Color_Row = K2Node_CustomEvent_Moon_C_Color_Row;
	Parms.K2Node_CustomEvent_Moon_C_Saturation = K2Node_CustomEvent_Moon_C_Saturation;
	Parms.K2Node_CustomEvent_Moon_D_Color_Row = K2Node_CustomEvent_Moon_D_Color_Row;
	Parms.K2Node_CustomEvent_Moon_D_Saturation = K2Node_CustomEvent_Moon_D_Saturation;
	Parms.K2Node_CustomEvent_Moon_E_Color_Row = K2Node_CustomEvent_Moon_E_Color_Row;
	Parms.K2Node_CustomEvent_Moon_E_Saturation = K2Node_CustomEvent_Moon_E_Saturation;
	Parms.K2Node_CustomEvent_Moon_A_Type = K2Node_CustomEvent_Moon_A_Type;
	Parms.K2Node_CustomEvent_Moon_B_Type = K2Node_CustomEvent_Moon_B_Type;
	Parms.K2Node_CustomEvent_Moon_C_Type = K2Node_CustomEvent_Moon_C_Type;
	Parms.K2Node_CustomEvent_Moon_D_Type = K2Node_CustomEvent_Moon_D_Type;
	Parms.K2Node_CustomEvent_Moon_E_Type = K2Node_CustomEvent_Moon_E_Type;
	Parms.K2Node_CustomEvent_Cloud_Index_A = K2Node_CustomEvent_Cloud_Index_A;
	Parms.K2Node_CustomEvent_Ring_Type = K2Node_CustomEvent_Ring_Type;
	Parms.K2Node_CustomEvent_Ring_Color = K2Node_CustomEvent_Ring_Color;
	Parms.K2Node_CustomEvent_Nebula_Color_B = K2Node_CustomEvent_Nebula_Color_B;
	Parms.K2Node_CustomEvent_Cloud_Index_B = K2Node_CustomEvent_Cloud_Index_B;
	Parms.K2Node_CustomEvent_Cloud_Index_C = K2Node_CustomEvent_Cloud_Index_C;
	Parms.K2Node_CustomEvent_Cloud_Index_D = K2Node_CustomEvent_Cloud_Index_D;
	Parms.K2Node_CustomEvent_Cloud_Index_E = K2Node_CustomEvent_Cloud_Index_E;
	Parms.K2Node_CustomEvent_Shadow_Cascade_Override = K2Node_CustomEvent_Shadow_Cascade_Override;
	Parms.K2Node_CustomEvent_Shadow_Cascades_Sun = K2Node_CustomEvent_Shadow_Cascades_Sun;
	Parms.K2Node_CustomEvent_Shadow_Cascades_Celestial = K2Node_CustomEvent_Shadow_Cascades_Celestial;
	Parms.K2Node_CustomEvent_Dynamic_Shadow_Distance_ = K2Node_CustomEvent_Dynamic_Shadow_Distance_;
	Parms.K2Node_CustomEvent_Distribution_Exponent = K2Node_CustomEvent_Distribution_Exponent;
	Parms.K2Node_CustomEvent_Transition_Fraction = K2Node_CustomEvent_Transition_Fraction;
	Parms.K2Node_CustomEvent_Distance_Fadeout_Fraction = K2Node_CustomEvent_Distance_Fadeout_Fraction;
	Parms.K2Node_CustomEvent_Contact_Shadow_Length = K2Node_CustomEvent_Contact_Shadow_Length;
	Parms.K2Node_CustomEvent_Celestial_Color = K2Node_CustomEvent_Celestial_Color;
	Parms.K2Node_CustomEvent_Color_Category = K2Node_CustomEvent_Color_Category;
	Parms.K2Node_CustomEvent_Color_Data_Table_Categories = K2Node_CustomEvent_Color_Data_Table_Categories;
	Parms.K2Node_CustomEvent_Color_Saturation = K2Node_CustomEvent_Color_Saturation;
	Parms.K2Node_CustomEvent_Color = K2Node_CustomEvent_Color;
	Parms.K2Node_CustomEvent_Day_Brightness = K2Node_CustomEvent_Day_Brightness;
	Parms.K2Node_CustomEvent_Night_Brightness = K2Node_CustomEvent_Night_Brightness;
	Parms.K2Node_CustomEvent_Atmosphere_Level = K2Node_CustomEvent_Atmosphere_Level;
	Parms.K2Node_CustomEvent_Exposure_WIP = K2Node_CustomEvent_Exposure_WIP;
	Parms.K2Node_CustomEvent_LUT_Category = K2Node_CustomEvent_LUT_Category;
	Parms.K2Node_CustomEvent_LUT_WIP = K2Node_CustomEvent_LUT_WIP;
	Parms.K2Node_CustomEvent_LUT_Saturation = K2Node_CustomEvent_LUT_Saturation;
	Parms.K2Node_CustomEvent_Fog_Falloff = K2Node_CustomEvent_Fog_Falloff;
	Parms.K2Node_CustomEvent_Atmosphere___Density = K2Node_CustomEvent_Atmosphere___Density;
	Parms.K2Node_CustomEvent_Atmosphere___Haze = K2Node_CustomEvent_Atmosphere___Haze;
	Parms.K2Node_CustomEvent_Atmosphere___Brightness = K2Node_CustomEvent_Atmosphere___Brightness;
	Parms.K2Node_CustomEvent_Atmosphere___View_Distance = K2Node_CustomEvent_Atmosphere___View_Distance;
	Parms.K2Node_CustomEvent_Atmosphere___Falloff = K2Node_CustomEvent_Atmosphere___Falloff;
	Parms.K2Node_CustomEvent_Sun_Color_Override___Adv = K2Node_CustomEvent_Sun_Color_Override___Adv;
	Parms.K2Node_CustomEvent_Sun_Color___Adv = K2Node_CustomEvent_Sun_Color___Adv;
	Parms.K2Node_CustomEvent_Sun_Saturation___Adv = K2Node_CustomEvent_Sun_Saturation___Adv;
	Parms.K2Node_CustomEvent_Main_Celestial_Color_Override___Adv = K2Node_CustomEvent_Main_Celestial_Color_Override___Adv;
	Parms.K2Node_CustomEvent_Main_Celestial_Color_Saturation___Adv = K2Node_CustomEvent_Main_Celestial_Color_Saturation___Adv;
	Parms.K2Node_CustomEvent_Rayleigh_Color_Override___Adv = K2Node_CustomEvent_Rayleigh_Color_Override___Adv;
	Parms.K2Node_CustomEvent_Rayleigh_Color___Adv = K2Node_CustomEvent_Rayleigh_Color___Adv;
	Parms.K2Node_CustomEvent_Rayleigh_Saturation___Adv = K2Node_CustomEvent_Rayleigh_Saturation___Adv;
	Parms.K2Node_CustomEvent_Mie_Color_Override___Adv = K2Node_CustomEvent_Mie_Color_Override___Adv;
	Parms.K2Node_CustomEvent_Mie_Color___Adv = K2Node_CustomEvent_Mie_Color___Adv;
	Parms.K2Node_CustomEvent_Mie_Saturation___Adv = K2Node_CustomEvent_Mie_Saturation___Adv;
	Parms.K2Node_CustomEvent_Sky_Luminance_Color_Override___Adv = K2Node_CustomEvent_Sky_Luminance_Color_Override___Adv;
	Parms.K2Node_CustomEvent_Sky_Luminance_Color___Adv = K2Node_CustomEvent_Sky_Luminance_Color___Adv;
	Parms.K2Node_CustomEvent_Sky_Luminance_Saturation___Adv = K2Node_CustomEvent_Sky_Luminance_Saturation___Adv;
	Parms.K2Node_CustomEvent_Exposure___Night = K2Node_CustomEvent_Exposure___Night;
	Parms.K2Node_CustomEvent_HDR_Exposure_Override = K2Node_CustomEvent_HDR_Exposure_Override;
	Parms.K2Node_CustomEvent_HDR_Exposure_Compensation = K2Node_CustomEvent_HDR_Exposure_Compensation;
	Parms.K2Node_CustomEvent_HDR_Exposure_Compensation_Curve = K2Node_CustomEvent_HDR_Exposure_Compensation_Curve;
	Parms.K2Node_CustomEvent_HDR_Exposure_Metering_Mask = K2Node_CustomEvent_HDR_Exposure_Metering_Mask;
	Parms.K2Node_CustomEvent_HDR_Low_Percent_Night = K2Node_CustomEvent_HDR_Low_Percent_Night;
	Parms.K2Node_CustomEvent_HDR_High_Percent_Night = K2Node_CustomEvent_HDR_High_Percent_Night;
	Parms.K2Node_CustomEvent_HDR_Min_Brightness = K2Node_CustomEvent_HDR_Min_Brightness;
	Parms.K2Node_CustomEvent_HDR_Max_Brightness = K2Node_CustomEvent_HDR_Max_Brightness;
	Parms.K2Node_CustomEvent_HDR_Histogram_Log_Min = K2Node_CustomEvent_HDR_Histogram_Log_Min;
	Parms.K2Node_CustomEvent_HDR_Histogram_Log_Max = K2Node_CustomEvent_HDR_Histogram_Log_Max;
	Parms.K2Node_CustomEvent_HDR = K2Node_CustomEvent_HDR;
	Parms.K2Node_CustomEvent_Slope = K2Node_CustomEvent_Slope;
	Parms.K2Node_CustomEvent_Toe = K2Node_CustomEvent_Toe;
	Parms.K2Node_CustomEvent_Shoulder = K2Node_CustomEvent_Shoulder;
	Parms.K2Node_CustomEvent_Exposure___DawnDusk = K2Node_CustomEvent_Exposure___DawnDusk;
	Parms.K2Node_CustomEvent_HDR_Global___Saturation = K2Node_CustomEvent_HDR_Global___Saturation;
	Parms.K2Node_CustomEvent_HDR_Global___Contrast = K2Node_CustomEvent_HDR_Global___Contrast;
	Parms.K2Node_CustomEvent_HDR_Global___Gamma = K2Node_CustomEvent_HDR_Global___Gamma;
	Parms.K2Node_CustomEvent_HDR_Global___Gain = K2Node_CustomEvent_HDR_Global___Gain;
	Parms.K2Node_CustomEvent_HDR_Global___Offset = K2Node_CustomEvent_HDR_Global___Offset;
	Parms.K2Node_CustomEvent_HDR_Low_Percent_Day = K2Node_CustomEvent_HDR_Low_Percent_Day;
	Parms.K2Node_CustomEvent_HDR_High_Percent_Day = K2Node_CustomEvent_HDR_High_Percent_Day;
	Parms.K2Node_CustomEvent_Primary_Function_Override = K2Node_CustomEvent_Primary_Function_Override;
	Parms.K2Node_CustomEvent_Realm_Color = K2Node_CustomEvent_Realm_Color;
	Parms.K2Node_CustomEvent_Realm_Color_Saturation = K2Node_CustomEvent_Realm_Color_Saturation;
	Parms.K2Node_CustomEvent_Realm_Day_Brightness_Exposure = K2Node_CustomEvent_Realm_Day_Brightness_Exposure;
	Parms.K2Node_CustomEvent_Realm___Celestial_Color = K2Node_CustomEvent_Realm___Celestial_Color;
	Parms.K2Node_CustomEvent_Realm___Night_Brightness_and_Exposures = K2Node_CustomEvent_Realm___Night_Brightness_and_Exposures;
	Parms.K2Node_CustomEvent_Realm___Atmosphere = K2Node_CustomEvent_Realm___Atmosphere;
	Parms.K2Node_CustomEvent_Realm___LUT = K2Node_CustomEvent_Realm___LUT;
	Parms.K2Node_CustomEvent_Realm___Color___Category = K2Node_CustomEvent_Realm___Color___Category;
	Parms.K2Node_CustomEvent_Realm___Moon_A_Atmosphere_Color = K2Node_CustomEvent_Realm___Moon_A_Atmosphere_Color;
	Parms.K2Node_CustomEvent_Realm___Moon_B_Atmosphere_Color = K2Node_CustomEvent_Realm___Moon_B_Atmosphere_Color;
	Parms.K2Node_CustomEvent_Realm___Moon_C_Atmosphere_Color = K2Node_CustomEvent_Realm___Moon_C_Atmosphere_Color;
	Parms.K2Node_CustomEvent_Realm___Moon_D_Atmosphere_Color = K2Node_CustomEvent_Realm___Moon_D_Atmosphere_Color;
	Parms.K2Node_CustomEvent_Realm___Moon___Nebula = K2Node_CustomEvent_Realm___Moon___Nebula;
	Parms.K2Node_CustomEvent_Realm___Ring_Toggle = K2Node_CustomEvent_Realm___Ring_Toggle;
	Parms.K2Node_CustomEvent_Realm___Nebula_Brightness = K2Node_CustomEvent_Realm___Nebula_Brightness;
	Parms.K2Node_CustomEvent_Realm___Nebula_Type = K2Node_CustomEvent_Realm___Nebula_Type;
	Parms.K2Node_CustomEvent_Visual_Environment_Preset_Override = K2Node_CustomEvent_Visual_Environment_Preset_Override;
	Parms.K2Node_CustomEvent_Visual_Environment_Preset_ = K2Node_CustomEvent_Visual_Environment_Preset_;
	Parms.K2Node_CustomEvent_Realm___Atm_Moon_Visibility = K2Node_CustomEvent_Realm___Atm_Moon_Visibility;
	Parms.K2Node_CustomEvent_Realm___Cloud_Type = K2Node_CustomEvent_Realm___Cloud_Type;
	Parms.K2Node_CustomEvent_Angle_A = K2Node_CustomEvent_Angle_A;
	Parms.K2Node_CustomEvent_Angle_B = K2Node_CustomEvent_Angle_B;
	Parms.K2Node_CustomEvent_Exposure_Comp = K2Node_CustomEvent_Exposure_Comp;
	Parms.K2Node_CustomEvent_Low_Percent = K2Node_CustomEvent_Low_Percent;
	Parms.K2Node_CustomEvent_High_Percent = K2Node_CustomEvent_High_Percent;
	Parms.K2Node_CustomEvent_Exposure_Comp_Night = K2Node_CustomEvent_Exposure_Comp_Night;
	Parms.K2Node_CustomEvent_Exposure_Comp_Dusk = K2Node_CustomEvent_Exposure_Comp_Dusk;
	Parms.K2Node_CustomEvent_Exposure_Comp_Dawn = K2Node_CustomEvent_Exposure_Comp_Dawn;
	Parms.K2Node_CustomEvent_Fog___Volumetric = K2Node_CustomEvent_Fog___Volumetric;
	Parms.K2Node_CustomEvent_Fog___Volumetric___Night = K2Node_CustomEvent_Fog___Volumetric___Night;
	Parms.K2Node_CustomEvent_Realm___Fog___Volumetric = K2Node_CustomEvent_Realm___Fog___Volumetric;
	Parms.K2Node_CustomEvent_Realm___Fog___Volumetric___Night = K2Node_CustomEvent_Realm___Fog___Volumetric___Night;
	Parms.K2Node_CustomEvent_Eye_Adapt_Override = K2Node_CustomEvent_Eye_Adapt_Override;
	Parms.K2Node_CustomEvent_Shadow_Cascade_Level = K2Node_CustomEvent_Shadow_Cascade_Level;
	Parms.K2Node_CustomEvent_Realm___Celestial_Intensity = K2Node_CustomEvent_Realm___Celestial_Intensity;
	Parms.K2Node_CustomEvent_Atmosphere___Height_Fog_Cont____Night = K2Node_CustomEvent_Atmosphere___Height_Fog_Cont____Night;
	Parms.K2Node_CustomEvent_White_Clip = K2Node_CustomEvent_White_Clip;
	Parms.K2Node_CustomEvent_Temperature = K2Node_CustomEvent_Temperature;
	Parms.K2Node_CustomEvent_Lens_Flare_Sun = K2Node_CustomEvent_Lens_Flare_Sun;
	Parms.K2Node_CustomEvent_Fog_Dev_Override = K2Node_CustomEvent_Fog_Dev_Override;
	Parms.K2Node_CustomEvent_Fog_Day = K2Node_CustomEvent_Fog_Day;
	Parms.K2Node_CustomEvent_Fog_Night = K2Node_CustomEvent_Fog_Night;
	Parms.K2Node_CustomEvent_Atmosphere_Dev_Override = K2Node_CustomEvent_Atmosphere_Dev_Override;
	Parms.K2Node_CustomEvent_ScreenSpaceReflection = K2Node_CustomEvent_ScreenSpaceReflection;
	Parms.K2Node_CustomEvent_Realm___Nebula_Color_3 = K2Node_CustomEvent_Realm___Nebula_Color_3;
	Parms.K2Node_CustomEvent_Ring_Offset = K2Node_CustomEvent_Ring_Offset;
	Parms.K2Node_CustomEvent_Ring_Scale = K2Node_CustomEvent_Ring_Scale;
	Parms.K2Node_CustomEvent_Ring_Color_2 = K2Node_CustomEvent_Ring_Color_2;
	Parms.K2Node_CustomEvent_Ring_Color_3 = K2Node_CustomEvent_Ring_Color_3;
	Parms.K2Node_CustomEvent_Ring_Override_Manual = K2Node_CustomEvent_Ring_Override_Manual;
	Parms.K2Node_CustomEvent_Bloom_Intensity_ = K2Node_CustomEvent_Bloom_Intensity_;
	Parms.K2Node_CustomEvent_Realm___Fae_Magic_Toggle = K2Node_CustomEvent_Realm___Fae_Magic_Toggle;
	Parms.K2Node_CustomEvent_Debug___HWRT = K2Node_CustomEvent_Debug___HWRT;
	Parms.K2Node_CustomEvent_Manual_Fog_Only_Override = K2Node_CustomEvent_Manual_Fog_Only_Override;
	Parms.K2Node_CustomEvent_Manual_Secondary_moon_Color = K2Node_CustomEvent_Manual_Secondary_moon_Color;
	Parms.K2Node_CustomEvent_Realm___SecondaryMoonType = K2Node_CustomEvent_Realm___SecondaryMoonType;
	Parms.K2Node_CustomEvent_Realm___Angle_X = K2Node_CustomEvent_Realm___Angle_X;
	Parms.K2Node_CustomEvent_Angle_X_Manual_Override = K2Node_CustomEvent_Angle_X_Manual_Override;
	Parms.K2Node_CustomEvent_Color_Correction_Override = K2Node_CustomEvent_Color_Correction_Override;
	Parms.K2Node_CustomEvent_Realm___Color_Master_Table = K2Node_CustomEvent_Realm___Color_Master_Table;
	Parms.K2Node_CustomEvent_Realm___Color_Select = K2Node_CustomEvent_Realm___Color_Select;
	Parms.K2Node_CustomEvent_Realm___Atmosphere_Master = K2Node_CustomEvent_Realm___Atmosphere_Master;
	Parms.K2Node_CustomEvent_Color_Master = K2Node_CustomEvent_Color_Master;
	Parms.K2Node_CustomEvent_Atmosphere_Master = K2Node_CustomEvent_Atmosphere_Master;
	Parms.K2Node_CustomEvent_Master_Override = K2Node_CustomEvent_Master_Override;
	Parms.K2Node_CustomEvent_Visual_Environment_Preset = K2Node_CustomEvent_Visual_Environment_Preset;
	Parms.K2Node_CustomEvent_Realm___Nebula_Color_1 = K2Node_CustomEvent_Realm___Nebula_Color_1;
	Parms.K2Node_CustomEvent_Realm___Vault_Override = K2Node_CustomEvent_Realm___Vault_Override;
	Parms.K2Node_CustomEvent_Atmosphere___Height_Fog_Cont____Day = K2Node_CustomEvent_Atmosphere___Height_Fog_Cont____Day;
	Parms.K2Node_CustomEvent_Cascade_Scalabilty_Override = K2Node_CustomEvent_Cascade_Scalabilty_Override;
	Parms.K2Node_CustomEvent_Shadow_Quality = K2Node_CustomEvent_Shadow_Quality;
	Parms.K2Node_CustomEvent_Exposure_Debug_Override = K2Node_CustomEvent_Exposure_Debug_Override;
	Parms.K2Node_CustomEvent_Nightmare_Override = K2Node_CustomEvent_Nightmare_Override;
	Parms.K2Node_CustomEvent_Nightmare_Skylight = K2Node_CustomEvent_Nightmare_Skylight;
	Parms.K2Node_CustomEvent_Manual_Celestial_Override = K2Node_CustomEvent_Manual_Celestial_Override;
	Parms.K2Node_CustomEvent_Realm___Celestial_Type = K2Node_CustomEvent_Realm___Celestial_Type;
	Parms.K2Node_CustomEvent_Global_Illumination = K2Node_CustomEvent_Global_Illumination;
	Parms.K2Node_CustomEvent_Realm___Fae_Magic_Alt_Toggle = K2Node_CustomEvent_Realm___Fae_Magic_Alt_Toggle;
	Parms.K2Node_CustomEvent_Realm___Fog___Cave_Override = K2Node_CustomEvent_Realm___Fog___Cave_Override;
	Parms.K2Node_CustomEvent_BW_Switch = K2Node_CustomEvent_BW_Switch;
	Parms.K2Node_CustomEvent_DesertVaultSwitch = K2Node_CustomEvent_DesertVaultSwitch;
	Parms.K2Node_CustomEvent_Realm___MPC_BIome = K2Node_CustomEvent_Realm___MPC_BIome;
	Parms.K2Node_CustomEvent_Manual_Skylight_No_Lumen = K2Node_CustomEvent_Manual_Skylight_No_Lumen;
	Parms.K2Node_CustomEvent_Lumen___Base_Forest_Switch = K2Node_CustomEvent_Lumen___Base_Forest_Switch;
	Parms.K2Node_CustomEvent_Realm___Cloud = K2Node_CustomEvent_Realm___Cloud;
	Parms.K2Node_CustomEvent_BM_Card = K2Node_CustomEvent_BM_Card;
	Parms.K2Node_CustomEvent_PPM_Debug = K2Node_CustomEvent_PPM_Debug;
	Parms.CallFunc_GetToolLightIntentsity_Light_Intensity_Out = CallFunc_GetToolLightIntentsity_Light_Intensity_Out;
	Parms.K2Node_CustomEvent_AdjustedTime = K2Node_CustomEvent_AdjustedTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


