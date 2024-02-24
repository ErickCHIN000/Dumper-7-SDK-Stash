#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ba_rad_MoveableRadiationZoneSphere_01.ba_rad_MoveableRadiationZoneSphere_01_C
// (Actor)

class UClass* Aba_rad_MoveableRadiationZoneSphere_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ba_rad_MoveableRadiationZoneSphere_01_C");

	return Clss;
}


// ba_rad_MoveableRadiationZoneSphere_01_C ba_rad_MoveableRadiationZoneSphere_01.Default__ba_rad_MoveableRadiationZoneSphere_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Aba_rad_MoveableRadiationZoneSphere_01_C* Aba_rad_MoveableRadiationZoneSphere_01_C::GetDefaultObj()
{
	static class Aba_rad_MoveableRadiationZoneSphere_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Aba_rad_MoveableRadiationZoneSphere_01_C*>(Aba_rad_MoveableRadiationZoneSphere_01_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ba_rad_MoveableRadiationZoneSphere_01.ba_rad_MoveableRadiationZoneSphere_01_C.InternalInitializeVariables
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsClosedLoop_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_rad_MoveableRadiationZoneSphere_01_C::InternalInitializeVariables(float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_2, bool CallFunc_IsClosedLoop_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_rad_MoveableRadiationZoneSphere_01_C", "InternalInitializeVariables");

	Params::Aba_rad_MoveableRadiationZoneSphere_01_C_InternalInitializeVariables_Params Parms{};

	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_2 = CallFunc_Add_FloatFloat_ReturnValue_2;
	Parms.CallFunc_IsClosedLoop_ReturnValue = CallFunc_IsClosedLoop_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_rad_MoveableRadiationZoneSphere_01.ba_rad_MoveableRadiationZoneSphere_01_C.InternalUpdateOnClosedSplineMovement
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Percent_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransformAtTime_ReturnValue                          (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetActorTransform_SweepHitResult                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorTransform_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_rad_MoveableRadiationZoneSphere_01_C::InternalUpdateOnClosedSplineMovement(float DeltaSeconds, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Percent_FloatFloat_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, const struct FTransform& CallFunc_GetTransformAtTime_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_rad_MoveableRadiationZoneSphere_01_C", "InternalUpdateOnClosedSplineMovement");

	Params::Aba_rad_MoveableRadiationZoneSphere_01_C_InternalUpdateOnClosedSplineMovement_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Percent_FloatFloat_ReturnValue = CallFunc_Percent_FloatFloat_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_GetTransformAtTime_ReturnValue = CallFunc_GetTransformAtTime_ReturnValue;
	Parms.CallFunc_K2_SetActorTransform_SweepHitResult = CallFunc_K2_SetActorTransform_SweepHitResult;
	Parms.CallFunc_K2_SetActorTransform_ReturnValue = CallFunc_K2_SetActorTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_rad_MoveableRadiationZoneSphere_01.ba_rad_MoveableRadiationZoneSphere_01_C.InternalUpdateOnOpenSplineMovement
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Percent_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransformAtTime_ReturnValue                          (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetActorTransform_SweepHitResult                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorTransform_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_rad_MoveableRadiationZoneSphere_01_C::InternalUpdateOnOpenSplineMovement(float DeltaSeconds, bool Temp_bool_Variable, float Temp_float_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, float Temp_float_Variable_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float K2Node_Select_Default, float K2Node_Select_Default_1, bool CallFunc_Less_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float K2Node_Select_Default_2, float CallFunc_Percent_FloatFloat_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, const struct FTransform& CallFunc_GetTransformAtTime_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_rad_MoveableRadiationZoneSphere_01_C", "InternalUpdateOnOpenSplineMovement");

	Params::Aba_rad_MoveableRadiationZoneSphere_01_C_InternalUpdateOnOpenSplineMovement_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_2 = CallFunc_Subtract_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_1 = CallFunc_Less_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_Percent_FloatFloat_ReturnValue = CallFunc_Percent_FloatFloat_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_GetTransformAtTime_ReturnValue = CallFunc_GetTransformAtTime_ReturnValue;
	Parms.CallFunc_K2_SetActorTransform_SweepHitResult = CallFunc_K2_SetActorTransform_SweepHitResult;
	Parms.CallFunc_K2_SetActorTransform_ReturnValue = CallFunc_K2_SetActorTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_rad_MoveableRadiationZoneSphere_01.ba_rad_MoveableRadiationZoneSphere_01_C.InternalUpdateOnSplineMovement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsClosedLoop_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_rad_MoveableRadiationZoneSphere_01_C::InternalUpdateOnSplineMovement(float DeltaSeconds, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsClosedLoop_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_rad_MoveableRadiationZoneSphere_01_C", "InternalUpdateOnSplineMovement");

	Params::Aba_rad_MoveableRadiationZoneSphere_01_C_InternalUpdateOnSplineMovement_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsClosedLoop_ReturnValue = CallFunc_IsClosedLoop_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_rad_MoveableRadiationZoneSphere_01.ba_rad_MoveableRadiationZoneSphere_01_C.InternalInitializeMovementCurve
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsClosedLoop_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCurveFloat*                 K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_rad_MoveableRadiationZoneSphere_01_C::InternalInitializeMovementCurve(bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsClosedLoop_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UCurveFloat* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_rad_MoveableRadiationZoneSphere_01_C", "InternalInitializeMovementCurve");

	Params::Aba_rad_MoveableRadiationZoneSphere_01_C_InternalInitializeMovementCurve_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsClosedLoop_ReturnValue = CallFunc_IsClosedLoop_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_rad_MoveableRadiationZoneSphere_01.ba_rad_MoveableRadiationZoneSphere_01_C.GetRadiationForWorldPos
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     World_Position                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Radiation                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxRadiationWithOscilationRandomOffset_Rads          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxRadiationWithOscilationRandomOffset_Rads_1        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_InverseTransformLocation_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_rad_MoveableRadiationZoneSphere_01_C::GetRadiationForWorldPos(const struct FVector& World_Position, float* Radiation, float CallFunc_GetMaxRadiationWithOscilationRandomOffset_Rads, float CallFunc_GetMaxRadiationWithOscilationRandomOffset_Rads_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_InverseTransformLocation_ReturnValue, float CallFunc_VSize_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_rad_MoveableRadiationZoneSphere_01_C", "GetRadiationForWorldPos");

	Params::Aba_rad_MoveableRadiationZoneSphere_01_C_GetRadiationForWorldPos_Params Parms{};

	Parms.World_Position = World_Position;
	Parms.CallFunc_GetMaxRadiationWithOscilationRandomOffset_Rads = CallFunc_GetMaxRadiationWithOscilationRandomOffset_Rads;
	Parms.CallFunc_GetMaxRadiationWithOscilationRandomOffset_Rads_1 = CallFunc_GetMaxRadiationWithOscilationRandomOffset_Rads_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_InverseTransformLocation_ReturnValue = CallFunc_InverseTransformLocation_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_2 = CallFunc_Subtract_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Radiation != nullptr)
		*Radiation = Parms.Radiation;

}


// Function ba_rad_MoveableRadiationZoneSphere_01.ba_rad_MoveableRadiationZoneSphere_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_rad_MoveableRadiationZoneSphere_01_C::UserConstructionScript(bool CallFunc_SetStaticMesh_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_rad_MoveableRadiationZoneSphere_01_C", "UserConstructionScript");

	Params::Aba_rad_MoveableRadiationZoneSphere_01_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_rad_MoveableRadiationZoneSphere_01.ba_rad_MoveableRadiationZoneSphere_01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void Aba_rad_MoveableRadiationZoneSphere_01_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_rad_MoveableRadiationZoneSphere_01_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_rad_MoveableRadiationZoneSphere_01.ba_rad_MoveableRadiationZoneSphere_01_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_rad_MoveableRadiationZoneSphere_01_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_rad_MoveableRadiationZoneSphere_01_C", "ReceiveTick");

	Params::Aba_rad_MoveableRadiationZoneSphere_01_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_rad_MoveableRadiationZoneSphere_01.ba_rad_MoveableRadiationZoneSphere_01_C.ExecuteUbergraph_ba_rad_MoveableRadiationZoneSphere_01
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_rad_MoveableRadiationZoneSphere_01_C::ExecuteUbergraph_ba_rad_MoveableRadiationZoneSphere_01(int32 EntryPoint, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_rad_MoveableRadiationZoneSphere_01_C", "ExecuteUbergraph_ba_rad_MoveableRadiationZoneSphere_01");

	Params::Aba_rad_MoveableRadiationZoneSphere_01_C_ExecuteUbergraph_ba_rad_MoveableRadiationZoneSphere_01_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


