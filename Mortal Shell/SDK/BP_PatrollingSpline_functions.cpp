#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PatrollingSpline.BP_PatrollingSpline_C
// (Actor)

class UClass* ABP_PatrollingSpline_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PatrollingSpline_C");

	return Clss;
}


// BP_PatrollingSpline_C BP_PatrollingSpline.Default__BP_PatrollingSpline_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PatrollingSpline_C* ABP_PatrollingSpline_C::GetDefaultObj()
{
	static class ABP_PatrollingSpline_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PatrollingSpline_C*>(ABP_PatrollingSpline_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PatrollingSpline.BP_PatrollingSpline_C.SetBillboard_End
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GetNumberOfSplinePoints_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetLocationAtSplinePoint_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_PatrollingSpline_C::SetBillboard_End(int32 CallFunc_GetNumberOfSplinePoints_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FVector& CallFunc_GetLocationAtSplinePoint_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PatrollingSpline_C", "SetBillboard_End");

	Params::ABP_PatrollingSpline_C_SetBillboard_End_Params Parms{};

	Parms.CallFunc_GetNumberOfSplinePoints_ReturnValue = CallFunc_GetNumberOfSplinePoints_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetLocationAtSplinePoint_ReturnValue = CallFunc_GetLocationAtSplinePoint_ReturnValue;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PatrollingSpline.BP_PatrollingSpline_C.SetBillboard_Start
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_GetLocationAtSplinePoint_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_PatrollingSpline_C::SetBillboard_Start(const struct FVector& CallFunc_GetLocationAtSplinePoint_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PatrollingSpline_C", "SetBillboard_Start");

	Params::ABP_PatrollingSpline_C_SetBillboard_Start_Params Parms{};

	Parms.CallFunc_GetLocationAtSplinePoint_ReturnValue = CallFunc_GetLocationAtSplinePoint_ReturnValue;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PatrollingSpline.BP_PatrollingSpline_C.GetAllSplinePoints
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetSplineLength_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PatrollingSpline_C::GetAllSplinePoints(float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_GetSplineLength_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PatrollingSpline_C", "GetAllSplinePoints");

	Params::ABP_PatrollingSpline_C_GetAllSplinePoints_Params Parms{};

	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetSplineLength_ReturnValue = CallFunc_GetSplineLength_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue = CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PatrollingSpline.BP_PatrollingSpline_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PatrollingSpline_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PatrollingSpline_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PatrollingSpline.BP_PatrollingSpline_C.ResetSpline
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PatrollingSpline_C::ResetSpline()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PatrollingSpline_C", "ResetSpline");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PatrollingSpline.BP_PatrollingSpline_C.ShowPoints
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PatrollingSpline_C::ShowPoints()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PatrollingSpline_C", "ShowPoints");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PatrollingSpline.BP_PatrollingSpline_C.MakePointsLinear
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PatrollingSpline_C::MakePointsLinear()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PatrollingSpline_C", "MakePointsLinear");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PatrollingSpline.BP_PatrollingSpline_C.MakePointsCurved
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PatrollingSpline_C::MakePointsCurved()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PatrollingSpline_C", "MakePointsCurved");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PatrollingSpline.BP_PatrollingSpline_C.ExecuteUbergraph_BP_PatrollingSpline
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumberOfSplinePoints_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumberOfSplinePoints_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PatrollingSpline_C::ExecuteUbergraph_BP_PatrollingSpline(int32 EntryPoint, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_2, int32 Temp_int_Array_Index_Variable, const struct FVector& CallFunc_MakeVector_ReturnValue_3, const struct FVector& CallFunc_MakeVector_ReturnValue_4, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_5, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FVector& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_GetNumberOfSplinePoints_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_GetNumberOfSplinePoints_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PatrollingSpline_C", "ExecuteUbergraph_BP_PatrollingSpline");

	Params::ABP_PatrollingSpline_C_ExecuteUbergraph_BP_PatrollingSpline_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue_2 = CallFunc_MakeVector_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_MakeVector_ReturnValue_3 = CallFunc_MakeVector_ReturnValue_3;
	Parms.CallFunc_MakeVector_ReturnValue_4 = CallFunc_MakeVector_ReturnValue_4;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_5 = CallFunc_MakeVector_ReturnValue_5;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetNumberOfSplinePoints_ReturnValue = CallFunc_GetNumberOfSplinePoints_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_GetNumberOfSplinePoints_ReturnValue_1 = CallFunc_GetNumberOfSplinePoints_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


