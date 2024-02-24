#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ba_col_ViewableNote_01.ba_col_ViewableNote_01_C
// (Actor)

class UClass* Aba_col_ViewableNote_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ba_col_ViewableNote_01_C");

	return Clss;
}


// ba_col_ViewableNote_01_C ba_col_ViewableNote_01.Default__ba_col_ViewableNote_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Aba_col_ViewableNote_01_C* Aba_col_ViewableNote_01_C::GetDefaultObj()
{
	static class Aba_col_ViewableNote_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Aba_col_ViewableNote_01_C*>(Aba_col_ViewableNote_01_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ba_col_ViewableNote_01.ba_col_ViewableNote_01_C.SetRelativeLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void Aba_col_ViewableNote_01_C::SetRelativeLocation(const struct FVector& Location, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_col_ViewableNote_01_C", "SetRelativeLocation");

	Params::Aba_col_ViewableNote_01_C_SetRelativeLocation_Params Parms{};

	Parms.Location = Location;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_col_ViewableNote_01.ba_col_ViewableNote_01_C.ResetRelativeTransform
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_col_ViewableNote_01_C::ResetRelativeTransform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_col_ViewableNote_01_C", "ResetRelativeTransform");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_col_ViewableNote_01.ba_col_ViewableNote_01_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_col_ViewableNote_01_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_col_ViewableNote_01_C", "ReceiveTick");

	Params::Aba_col_ViewableNote_01_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_col_ViewableNote_01.ba_col_ViewableNote_01_C.AssignNote
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_col_ViewableNote_01_C::AssignNote()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_col_ViewableNote_01_C", "AssignNote");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_col_ViewableNote_01.ba_col_ViewableNote_01_C.ExecuteUbergraph_ba_col_ViewableNote_01
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable                                             (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// TScriptInterface<class IMovieSceneTransformOrigin>K2Node_DynamicCast_AsTransform_Origin                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_BP_GetTransformOrigin_ReturnValue                       (IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInPIE_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult_1                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void Aba_col_ViewableNote_01_C::ExecuteUbergraph_ba_col_ViewableNote_01(int32 EntryPoint, const struct FTransform& Temp_struct_Variable, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float K2Node_Event_DeltaSeconds, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, TScriptInterface<class IMovieSceneTransformOrigin> K2Node_DynamicCast_AsTransform_Origin, bool K2Node_DynamicCast_bSuccess, const struct FTransform& CallFunc_BP_GetTransformOrigin_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, bool CallFunc_IsInPIE_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_col_ViewableNote_01_C", "ExecuteUbergraph_ba_col_ViewableNote_01");

	Params::Aba_col_ViewableNote_01_C_ExecuteUbergraph_ba_col_ViewableNote_01_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.K2Node_DynamicCast_AsTransform_Origin = K2Node_DynamicCast_AsTransform_Origin;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BP_GetTransformOrigin_ReturnValue = CallFunc_BP_GetTransformOrigin_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_IsInPIE_ReturnValue = CallFunc_IsInPIE_ReturnValue;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult_1 = CallFunc_K2_SetRelativeRotation_SweepHitResult_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


