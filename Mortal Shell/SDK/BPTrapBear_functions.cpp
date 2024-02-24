#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPTrapBear.BPTrapBear_C
// (Actor)

class UClass* ABPTrapBear_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPTrapBear_C");

	return Clss;
}


// BPTrapBear_C BPTrapBear.Default__BPTrapBear_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPTrapBear_C* ABPTrapBear_C::GetDefaultObj()
{
	static class ABPTrapBear_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPTrapBear_C*>(ABPTrapBear_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPTrapBear.BPTrapBear_C.LerpLightBrigandMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Lerp                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABPTrapBear_C::LerpLightBrigandMesh(float Lerp, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTrapBear_C", "LerpLightBrigandMesh");

	Params::ABPTrapBear_C_LerpLightBrigandMesh_Params Parms{};

	Parms.Lerp = Lerp;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_VLerp_ReturnValue = CallFunc_VLerp_ReturnValue;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTrapBear.BPTrapBear_C.ParalyzeHitCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsParalyzed_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPTrapBear_C::ParalyzeHitCharacter(bool IsParalyzed_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTrapBear_C", "ParalyzeHitCharacter");

	Params::ABPTrapBear_C_ParalyzeHitCharacter_Params Parms{};

	Parms.IsParalyzed_ = IsParalyzed_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTrapBear.BPTrapBear_C.AddHitCharacterOffset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_TrapBearHitCharacterTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_TrapBearHitCharacterTemp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_6                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_7                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_8                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_9                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorRightVector_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckYaw_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_AddActorWorldOffset_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABPTrapBear_C::AddHitCharacterOffset(enum class Enum_TrapBearHitCharacter Temp_byte_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float Temp_float_Variable_4, enum class Enum_TrapBearHitCharacter Temp_byte_Variable_1, float Temp_float_Variable_5, float Temp_float_Variable_6, float Temp_float_Variable_7, float Temp_float_Variable_8, float Temp_float_Variable_9, float K2Node_Select_Default, float K2Node_Select_Default_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, bool CallFunc_CheckYaw_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_2, const struct FHitResult& CallFunc_K2_AddActorWorldOffset_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTrapBear_C", "AddHitCharacterOffset");

	Params::ABPTrapBear_C_AddHitCharacterOffset_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.Temp_float_Variable_3 = Temp_float_Variable_3;
	Parms.Temp_float_Variable_4 = Temp_float_Variable_4;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_float_Variable_5 = Temp_float_Variable_5;
	Parms.Temp_float_Variable_6 = Temp_float_Variable_6;
	Parms.Temp_float_Variable_7 = Temp_float_Variable_7;
	Parms.Temp_float_Variable_8 = Temp_float_Variable_8;
	Parms.Temp_float_Variable_9 = Temp_float_Variable_9;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GetActorRightVector_ReturnValue = CallFunc_GetActorRightVector_ReturnValue;
	Parms.CallFunc_CheckYaw_ReturnValue = CallFunc_CheckYaw_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_2 = CallFunc_Multiply_VectorFloat_ReturnValue_2;
	Parms.CallFunc_K2_AddActorWorldOffset_SweepHitResult = CallFunc_K2_AddActorWorldOffset_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTrapBear.BPTrapBear_C.SetHitCharacterRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckYaw_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_SetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPTrapBear_C::SetHitCharacterRotation(const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_CheckYaw_ReturnValue, float CallFunc_SelectFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTrapBear_C", "SetHitCharacterRotation");

	Params::ABPTrapBear_C_SetHitCharacterRotation_Params Parms{};

	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_CheckYaw_ReturnValue = CallFunc_CheckYaw_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_K2_SetActorRotation_ReturnValue = CallFunc_K2_SetActorRotation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTrapBear.BPTrapBear_C.CheckYaw
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Yaw                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_NormalizedDeltaRotator_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABPTrapBear_C::CheckYaw(float Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Abs_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTrapBear_C", "CheckYaw");

	Params::ABPTrapBear_C_CheckYaw_Params Parms{};

	Parms.Yaw = Yaw;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_NormalizedDeltaRotator_ReturnValue = CallFunc_NormalizedDeltaRotator_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPTrapBear.BPTrapBear_C.SetHitCharacterLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPTrapBear_C::SetHitCharacterLocation(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTrapBear_C", "SetHitCharacterLocation");

	Params::ABPTrapBear_C_SetHitCharacterLocation_Params Parms{};

	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTrapBear.BPTrapBear_C.Timeline_LightBrigand_MeshLerp__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABPTrapBear_C::Timeline_LightBrigand_MeshLerp__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTrapBear_C", "Timeline_LightBrigand_MeshLerp__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPTrapBear.BPTrapBear_C.Timeline_LightBrigand_MeshLerp__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABPTrapBear_C::Timeline_LightBrigand_MeshLerp__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTrapBear_C", "Timeline_LightBrigand_MeshLerp__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPTrapBear.BPTrapBear_C.OnNotifyEnd_E3E4F7094E8DEF220D53BE95CBCC90FC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTrapBear_C::OnNotifyEnd_E3E4F7094E8DEF220D53BE95CBCC90FC(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTrapBear_C", "OnNotifyEnd_E3E4F7094E8DEF220D53BE95CBCC90FC");

	Params::ABPTrapBear_C_OnNotifyEnd_E3E4F7094E8DEF220D53BE95CBCC90FC_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTrapBear.BPTrapBear_C.OnNotifyBegin_E3E4F7094E8DEF220D53BE95CBCC90FC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTrapBear_C::OnNotifyBegin_E3E4F7094E8DEF220D53BE95CBCC90FC(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTrapBear_C", "OnNotifyBegin_E3E4F7094E8DEF220D53BE95CBCC90FC");

	Params::ABPTrapBear_C_OnNotifyBegin_E3E4F7094E8DEF220D53BE95CBCC90FC_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTrapBear.BPTrapBear_C.OnInterrupted_E3E4F7094E8DEF220D53BE95CBCC90FC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTrapBear_C::OnInterrupted_E3E4F7094E8DEF220D53BE95CBCC90FC(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTrapBear_C", "OnInterrupted_E3E4F7094E8DEF220D53BE95CBCC90FC");

	Params::ABPTrapBear_C_OnInterrupted_E3E4F7094E8DEF220D53BE95CBCC90FC_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTrapBear.BPTrapBear_C.OnBlendOut_E3E4F7094E8DEF220D53BE95CBCC90FC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTrapBear_C::OnBlendOut_E3E4F7094E8DEF220D53BE95CBCC90FC(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTrapBear_C", "OnBlendOut_E3E4F7094E8DEF220D53BE95CBCC90FC");

	Params::ABPTrapBear_C_OnBlendOut_E3E4F7094E8DEF220D53BE95CBCC90FC_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTrapBear.BPTrapBear_C.OnCompleted_E3E4F7094E8DEF220D53BE95CBCC90FC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTrapBear_C::OnCompleted_E3E4F7094E8DEF220D53BE95CBCC90FC(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTrapBear_C", "OnCompleted_E3E4F7094E8DEF220D53BE95CBCC90FC");

	Params::ABPTrapBear_C_OnCompleted_E3E4F7094E8DEF220D53BE95CBCC90FC_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTrapBear.BPTrapBear_C.OnNotifyEnd_45A214DB4B3576D7E0B66A912FFF9654
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTrapBear_C::OnNotifyEnd_45A214DB4B3576D7E0B66A912FFF9654(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTrapBear_C", "OnNotifyEnd_45A214DB4B3576D7E0B66A912FFF9654");

	Params::ABPTrapBear_C_OnNotifyEnd_45A214DB4B3576D7E0B66A912FFF9654_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTrapBear.BPTrapBear_C.OnNotifyBegin_45A214DB4B3576D7E0B66A912FFF9654
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTrapBear_C::OnNotifyBegin_45A214DB4B3576D7E0B66A912FFF9654(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTrapBear_C", "OnNotifyBegin_45A214DB4B3576D7E0B66A912FFF9654");

	Params::ABPTrapBear_C_OnNotifyBegin_45A214DB4B3576D7E0B66A912FFF9654_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTrapBear.BPTrapBear_C.OnInterrupted_45A214DB4B3576D7E0B66A912FFF9654
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTrapBear_C::OnInterrupted_45A214DB4B3576D7E0B66A912FFF9654(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTrapBear_C", "OnInterrupted_45A214DB4B3576D7E0B66A912FFF9654");

	Params::ABPTrapBear_C_OnInterrupted_45A214DB4B3576D7E0B66A912FFF9654_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTrapBear.BPTrapBear_C.OnBlendOut_45A214DB4B3576D7E0B66A912FFF9654
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTrapBear_C::OnBlendOut_45A214DB4B3576D7E0B66A912FFF9654(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTrapBear_C", "OnBlendOut_45A214DB4B3576D7E0B66A912FFF9654");

	Params::ABPTrapBear_C_OnBlendOut_45A214DB4B3576D7E0B66A912FFF9654_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTrapBear.BPTrapBear_C.OnCompleted_45A214DB4B3576D7E0B66A912FFF9654
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTrapBear_C::OnCompleted_45A214DB4B3576D7E0B66A912FFF9654(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTrapBear_C", "OnCompleted_45A214DB4B3576D7E0B66A912FFF9654");

	Params::ABPTrapBear_C_OnCompleted_45A214DB4B3576D7E0B66A912FFF9654_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTrapBear.BPTrapBear_C.OnNotifyEnd_2490A9FB47DB45DA8D979A9B29B7B122
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTrapBear_C::OnNotifyEnd_2490A9FB47DB45DA8D979A9B29B7B122(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTrapBear_C", "OnNotifyEnd_2490A9FB47DB45DA8D979A9B29B7B122");

	Params::ABPTrapBear_C_OnNotifyEnd_2490A9FB47DB45DA8D979A9B29B7B122_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTrapBear.BPTrapBear_C.OnNotifyBegin_2490A9FB47DB45DA8D979A9B29B7B122
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTrapBear_C::OnNotifyBegin_2490A9FB47DB45DA8D979A9B29B7B122(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTrapBear_C", "OnNotifyBegin_2490A9FB47DB45DA8D979A9B29B7B122");

	Params::ABPTrapBear_C_OnNotifyBegin_2490A9FB47DB45DA8D979A9B29B7B122_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTrapBear.BPTrapBear_C.OnInterrupted_2490A9FB47DB45DA8D979A9B29B7B122
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTrapBear_C::OnInterrupted_2490A9FB47DB45DA8D979A9B29B7B122(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTrapBear_C", "OnInterrupted_2490A9FB47DB45DA8D979A9B29B7B122");

	Params::ABPTrapBear_C_OnInterrupted_2490A9FB47DB45DA8D979A9B29B7B122_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTrapBear.BPTrapBear_C.OnBlendOut_2490A9FB47DB45DA8D979A9B29B7B122
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTrapBear_C::OnBlendOut_2490A9FB47DB45DA8D979A9B29B7B122(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTrapBear_C", "OnBlendOut_2490A9FB47DB45DA8D979A9B29B7B122");

	Params::ABPTrapBear_C_OnBlendOut_2490A9FB47DB45DA8D979A9B29B7B122_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTrapBear.BPTrapBear_C.OnCompleted_2490A9FB47DB45DA8D979A9B29B7B122
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTrapBear_C::OnCompleted_2490A9FB47DB45DA8D979A9B29B7B122(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTrapBear_C", "OnCompleted_2490A9FB47DB45DA8D979A9B29B7B122");

	Params::ABPTrapBear_C_OnCompleted_2490A9FB47DB45DA8D979A9B29B7B122_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTrapBear.BPTrapBear_C.OnNotifyEnd_174852434F4463EDF346C586C6926C46
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTrapBear_C::OnNotifyEnd_174852434F4463EDF346C586C6926C46(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTrapBear_C", "OnNotifyEnd_174852434F4463EDF346C586C6926C46");

	Params::ABPTrapBear_C_OnNotifyEnd_174852434F4463EDF346C586C6926C46_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTrapBear.BPTrapBear_C.OnNotifyBegin_174852434F4463EDF346C586C6926C46
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTrapBear_C::OnNotifyBegin_174852434F4463EDF346C586C6926C46(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTrapBear_C", "OnNotifyBegin_174852434F4463EDF346C586C6926C46");

	Params::ABPTrapBear_C_OnNotifyBegin_174852434F4463EDF346C586C6926C46_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTrapBear.BPTrapBear_C.OnInterrupted_174852434F4463EDF346C586C6926C46
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTrapBear_C::OnInterrupted_174852434F4463EDF346C586C6926C46(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTrapBear_C", "OnInterrupted_174852434F4463EDF346C586C6926C46");

	Params::ABPTrapBear_C_OnInterrupted_174852434F4463EDF346C586C6926C46_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTrapBear.BPTrapBear_C.OnBlendOut_174852434F4463EDF346C586C6926C46
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTrapBear_C::OnBlendOut_174852434F4463EDF346C586C6926C46(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTrapBear_C", "OnBlendOut_174852434F4463EDF346C586C6926C46");

	Params::ABPTrapBear_C_OnBlendOut_174852434F4463EDF346C586C6926C46_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTrapBear.BPTrapBear_C.OnCompleted_174852434F4463EDF346C586C6926C46
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTrapBear_C::OnCompleted_174852434F4463EDF346C586C6926C46(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTrapBear_C", "OnCompleted_174852434F4463EDF346C586C6926C46");

	Params::ABPTrapBear_C_OnCompleted_174852434F4463EDF346C586C6926C46_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTrapBear.BPTrapBear_C.SpawnDualSenseAudio_Full2D
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Volume                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Pitch                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              StartTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTrapBear_C::SpawnDualSenseAudio_Full2D(class USoundBase* Sound, float Volume, float Pitch, float StartTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTrapBear_C", "SpawnDualSenseAudio_Full2D");

	Params::ABPTrapBear_C_SpawnDualSenseAudio_Full2D_Params Parms{};

	Parms.Sound = Sound;
	Parms.Volume = Volume;
	Parms.Pitch = Pitch;
	Parms.StartTime = StartTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTrapBear.BPTrapBear_C.BndEvt__ActivationArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABPTrapBear_C::BndEvt__ActivationArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTrapBear_C", "BndEvt__ActivationArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::ABPTrapBear_C_BndEvt__ActivationArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTrapBear.BPTrapBear_C.Trap_Activated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPTrapBear_C::Trap_Activated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTrapBear_C", "Trap_Activated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPTrapBear.BPTrapBear_C.Trap_Activate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPTrapBear_C::Trap_Activate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTrapBear_C", "Trap_Activate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPTrapBear.BPTrapBear_C.Trap_Reset
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPTrapBear_C::Trap_Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTrapBear_C", "Trap_Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPTrapBear.BPTrapBear_C.Trap_Activate_PlayerCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPTrapBear_C::Trap_Activate_PlayerCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTrapBear_C", "Trap_Activate_PlayerCharacter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPTrapBear.BPTrapBear_C.Trap_Activate_LightBrigand
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPTrapBear_C::Trap_Activate_LightBrigand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTrapBear_C", "Trap_Activate_LightBrigand");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPTrapBear.BPTrapBear_C.Trap_Activate_HeavyBrigand
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPTrapBear_C::Trap_Activate_HeavyBrigand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTrapBear_C", "Trap_Activate_HeavyBrigand");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPTrapBear.BPTrapBear_C.Trap_Activate_Vampire
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPTrapBear_C::Trap_Activate_Vampire()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTrapBear_C", "Trap_Activate_Vampire");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPTrapBear.BPTrapBear_C.SetSignificanceBP
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EDHSignificanceLevel    SignificanceLevel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTrapBear_C::SetSignificanceBP(enum class EDHSignificanceLevel SignificanceLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTrapBear_C", "SetSignificanceBP");

	Params::ABPTrapBear_C_SetSignificanceBP_Params Parms{};

	Parms.SignificanceLevel = SignificanceLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTrapBear.BPTrapBear_C.LightBrigand_Trap_Active_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPTrapBear_C::LightBrigand_Trap_Active_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTrapBear_C", "LightBrigand_Trap_Active_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPTrapBear.BPTrapBear_C.LightBrigand_Trap_Active_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPTrapBear_C::LightBrigand_Trap_Active_2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTrapBear_C", "LightBrigand_Trap_Active_2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPTrapBear.BPTrapBear_C.LightBrigand_Trap_Active_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPTrapBear_C::LightBrigand_Trap_Active_3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTrapBear_C", "LightBrigand_Trap_Active_3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPTrapBear.BPTrapBear_C.HeavyBrigand_Trap_Active_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPTrapBear_C::HeavyBrigand_Trap_Active_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTrapBear_C", "HeavyBrigand_Trap_Active_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPTrapBear.BPTrapBear_C.HeavyBrigand_Trap_Active_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPTrapBear_C::HeavyBrigand_Trap_Active_2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTrapBear_C", "HeavyBrigand_Trap_Active_2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPTrapBear.BPTrapBear_C.Vampire_Trap_Active_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPTrapBear_C::Vampire_Trap_Active_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTrapBear_C", "Vampire_Trap_Active_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPTrapBear.BPTrapBear_C.Vampire_Trap_Active_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPTrapBear_C::Vampire_Trap_Active_2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTrapBear_C", "Vampire_Trap_Active_2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPTrapBear.BPTrapBear_C.SpawnDualSenseAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ControllerAudio_TypeSoundType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              SoundVolume                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ControllerAudio_TypeVibrationType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Vibration                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              VibrationVolume                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AttachToComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               UseSocketLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        SocketName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTrapBear_C::SpawnDualSenseAudio(const struct FVector& Location, enum class Enum_ControllerAudio_Type SoundType, class USoundBase* Sound, float SoundVolume, enum class Enum_ControllerAudio_Type VibrationType, class USoundBase* Vibration, float VibrationVolume, bool AttachToComponent, bool UseSocketLocation, class FName SocketName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTrapBear_C", "SpawnDualSenseAudio");

	Params::ABPTrapBear_C_SpawnDualSenseAudio_Params Parms{};

	Parms.Location = Location;
	Parms.SoundType = SoundType;
	Parms.Sound = Sound;
	Parms.SoundVolume = SoundVolume;
	Parms.VibrationType = VibrationType;
	Parms.Vibration = Vibration;
	Parms.VibrationVolume = VibrationVolume;
	Parms.AttachToComponent = AttachToComponent;
	Parms.UseSocketLocation = UseSocketLocation;
	Parms.SocketName = SocketName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTrapBear.BPTrapBear_C.ExecuteUbergraph_BPTrapBear
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_2                       (NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_3                       (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_4                       (NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_5                       (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_6                       (NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetCurrentMontage_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_16                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  K2Node_Event_Sound_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Volume                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Pitch                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_StartTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_ApplyDamage_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                K2Node_DynamicCast_AsBarbarous                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_17                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AHeavyBrigandBase_C*         K2Node_DynamicCast_AsHeavy_Brigand_Base                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AEnemyCharacter_C*           K2Node_DynamicCast_AsEnemy_Character                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ALightBrigandBase_C*         K2Node_DynamicCast_AsLight_Brigand_Base                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AHeavyBrigandBase_C*         K2Node_DynamicCast_AsHeavy_Brigand_Base_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AVampire_EnemyChar_C*        K2Node_DynamicCast_AsVampire_Enemy_Char                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_10                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_18                          (ZeroConstructor, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABarbarous_C*                K2Node_DynamicCast_AsBarbarous_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_11                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_19                          (ZeroConstructor, NoDestructor)
// class ALightBrigandBase_C*         K2Node_DynamicCast_AsLight_Brigand_Base_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AVampire_EnemyChar_C*        K2Node_DynamicCast_AsVampire_Enemy_Char_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_12                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_20                          (ZeroConstructor, NoDestructor)
// struct FHitResult                  CallFunc_K2_AddRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class FName                        K2Node_CustomEvent_NotifyName_13                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_AddRelativeLocation_SweepHitResult_1                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_AddRelativeLocation_SweepHitResult_2                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AEnemyCharacter_C*           K2Node_DynamicCast_AsEnemy_Character_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_21                          (ZeroConstructor, NoDestructor)
// enum class EDHSignificanceLevel    K2Node_Event_SignificanceLevel                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_14                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_22                          (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_15                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_23                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_16                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_24                          (ZeroConstructor, NoDestructor)
// struct FVector                     K2Node_Event_Location                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ControllerAudio_TypeK2Node_Event_SoundType                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Event_Sound                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_SoundVolume                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ControllerAudio_TypeK2Node_Event_VibrationType                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Event_Vibration                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_VibrationVolume                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_AttachToComponent                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_UseSocketLocation                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_SocketName                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_17                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ControllerAudio_C*       CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_18                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_25                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_19                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_26                          (ZeroConstructor, NoDestructor)

void ABPTrapBear_C::ExecuteUbergraph_BPTrapBear(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_9, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class FName Temp_name_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_4, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_6, class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, class USoundBase* K2Node_Event_Sound_1, float K2Node_Event_Volume, float K2Node_Event_Pitch, float K2Node_Event_StartTime, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, float CallFunc_ApplyDamage_ReturnValue, class ABarbarous_C* K2Node_DynamicCast_AsBarbarous, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, bool CallFunc_IsValid_ReturnValue, class AHeavyBrigandBase_C* K2Node_DynamicCast_AsHeavy_Brigand_Base, bool K2Node_DynamicCast_bSuccess_1, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess_2, class ALightBrigandBase_C* K2Node_DynamicCast_AsLight_Brigand_Base, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, class AHeavyBrigandBase_C* K2Node_DynamicCast_AsHeavy_Brigand_Base_1, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_BooleanAND_ReturnValue_1, class FName Temp_name_Variable_2, class AVampire_EnemyChar_C* K2Node_DynamicCast_AsVampire_Enemy_Char, bool K2Node_DynamicCast_bSuccess_5, class FName K2Node_CustomEvent_NotifyName_10, bool CallFunc_BooleanAND_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, bool K2Node_SwitchEnum_CmpSuccess, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class ABarbarous_C* K2Node_DynamicCast_AsBarbarous_1, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_Not_PreBool_ReturnValue_3, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class FName K2Node_CustomEvent_NotifyName_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, class ALightBrigandBase_C* K2Node_DynamicCast_AsLight_Brigand_Base_1, bool K2Node_DynamicCast_bSuccess_7, bool K2Node_SwitchEnum_CmpSuccess_1, class AVampire_EnemyChar_C* K2Node_DynamicCast_AsVampire_Enemy_Char_1, bool K2Node_DynamicCast_bSuccess_8, class FName K2Node_CustomEvent_NotifyName_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_20, const struct FHitResult& CallFunc_K2_AddRelativeLocation_SweepHitResult, class FName K2Node_CustomEvent_NotifyName_13, const struct FHitResult& CallFunc_K2_AddRelativeLocation_SweepHitResult_1, const struct FHitResult& CallFunc_K2_AddRelativeLocation_SweepHitResult_2, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character_1, bool K2Node_DynamicCast_bSuccess_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_21, enum class EDHSignificanceLevel K2Node_Event_SignificanceLevel, bool K2Node_SwitchEnum_CmpSuccess_2, class FName K2Node_CustomEvent_NotifyName_14, bool CallFunc_Not_PreBool_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_22, class FName Temp_name_Variable_3, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, class FName K2Node_CustomEvent_NotifyName_15, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_23, class FName K2Node_CustomEvent_NotifyName_16, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_24, const struct FVector& K2Node_Event_Location, enum class Enum_ControllerAudio_Type K2Node_Event_SoundType, class USoundBase* K2Node_Event_Sound, float K2Node_Event_SoundVolume, enum class Enum_ControllerAudio_Type K2Node_Event_VibrationType, class USoundBase* K2Node_Event_Vibration, float K2Node_Event_VibrationVolume, bool K2Node_Event_AttachToComponent, bool K2Node_Event_UseSocketLocation, class FName K2Node_Event_SocketName, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class FName K2Node_CustomEvent_NotifyName_17, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_ControllerAudio_C* CallFunc_FinishSpawningActor_ReturnValue, class FName K2Node_CustomEvent_NotifyName_18, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_25, class FName K2Node_CustomEvent_NotifyName_19, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_26)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTrapBear_C", "ExecuteUbergraph_BPTrapBear");

	Params::ABPTrapBear_C_ExecuteUbergraph_BPTrapBear_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_NotifyName_9 = K2Node_CustomEvent_NotifyName_9;
	Parms.K2Node_CustomEvent_NotifyName_8 = K2Node_CustomEvent_NotifyName_8;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_NotifyName_7 = K2Node_CustomEvent_NotifyName_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_NotifyName_6 = K2Node_CustomEvent_NotifyName_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_NotifyName_5 = K2Node_CustomEvent_NotifyName_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_2 = CallFunc_K2_SetTimerDelegate_ReturnValue_2;
	Parms.K2Node_CustomEvent_NotifyName_4 = K2Node_CustomEvent_NotifyName_4;
	Parms.K2Node_CustomEvent_NotifyName_3 = K2Node_CustomEvent_NotifyName_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CustomEvent_NotifyName_2 = K2Node_CustomEvent_NotifyName_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_CustomEvent_NotifyName_1 = K2Node_CustomEvent_NotifyName_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_3 = CallFunc_K2_SetTimerDelegate_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_4 = CallFunc_K2_SetTimerDelegate_ReturnValue_4;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_5 = CallFunc_K2_SetTimerDelegate_ReturnValue_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_15 = K2Node_CreateDelegate_OutputDelegate_15;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_6 = CallFunc_K2_SetTimerDelegate_ReturnValue_6;
	Parms.CallFunc_GetCurrentMontage_ReturnValue = CallFunc_GetCurrentMontage_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_16 = K2Node_CreateDelegate_OutputDelegate_16;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_Event_Sound_1 = K2Node_Event_Sound_1;
	Parms.K2Node_Event_Volume = K2Node_Event_Volume;
	Parms.K2Node_Event_Pitch = K2Node_Event_Pitch;
	Parms.K2Node_Event_StartTime = K2Node_Event_StartTime;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent = K2Node_ComponentBoundEvent_OverlappedComponent;
	Parms.K2Node_ComponentBoundEvent_OtherActor = K2Node_ComponentBoundEvent_OtherActor;
	Parms.K2Node_ComponentBoundEvent_OtherComp = K2Node_ComponentBoundEvent_OtherComp;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex = K2Node_ComponentBoundEvent_OtherBodyIndex;
	Parms.K2Node_ComponentBoundEvent_bFromSweep = K2Node_ComponentBoundEvent_bFromSweep;
	Parms.K2Node_ComponentBoundEvent_SweepResult = K2Node_ComponentBoundEvent_SweepResult;
	Parms.CallFunc_ApplyDamage_ReturnValue = CallFunc_ApplyDamage_ReturnValue;
	Parms.K2Node_DynamicCast_AsBarbarous = K2Node_DynamicCast_AsBarbarous;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_17 = K2Node_CreateDelegate_OutputDelegate_17;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsHeavy_Brigand_Base = K2Node_DynamicCast_AsHeavy_Brigand_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsEnemy_Character = K2Node_DynamicCast_AsEnemy_Character;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsLight_Brigand_Base = K2Node_DynamicCast_AsLight_Brigand_Base;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_DynamicCast_AsHeavy_Brigand_Base_1 = K2Node_DynamicCast_AsHeavy_Brigand_Base_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.K2Node_DynamicCast_AsVampire_Enemy_Char = K2Node_DynamicCast_AsVampire_Enemy_Char;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_CustomEvent_NotifyName_10 = K2Node_CustomEvent_NotifyName_10;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_18 = K2Node_CreateDelegate_OutputDelegate_18;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBarbarous_1 = K2Node_DynamicCast_AsBarbarous_1;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_CustomEvent_NotifyName_11 = K2Node_CustomEvent_NotifyName_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_19 = K2Node_CreateDelegate_OutputDelegate_19;
	Parms.K2Node_DynamicCast_AsLight_Brigand_Base_1 = K2Node_DynamicCast_AsLight_Brigand_Base_1;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_DynamicCast_AsVampire_Enemy_Char_1 = K2Node_DynamicCast_AsVampire_Enemy_Char_1;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.K2Node_CustomEvent_NotifyName_12 = K2Node_CustomEvent_NotifyName_12;
	Parms.K2Node_CreateDelegate_OutputDelegate_20 = K2Node_CreateDelegate_OutputDelegate_20;
	Parms.CallFunc_K2_AddRelativeLocation_SweepHitResult = CallFunc_K2_AddRelativeLocation_SweepHitResult;
	Parms.K2Node_CustomEvent_NotifyName_13 = K2Node_CustomEvent_NotifyName_13;
	Parms.CallFunc_K2_AddRelativeLocation_SweepHitResult_1 = CallFunc_K2_AddRelativeLocation_SweepHitResult_1;
	Parms.CallFunc_K2_AddRelativeLocation_SweepHitResult_2 = CallFunc_K2_AddRelativeLocation_SweepHitResult_2;
	Parms.K2Node_DynamicCast_AsEnemy_Character_1 = K2Node_DynamicCast_AsEnemy_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_21 = K2Node_CreateDelegate_OutputDelegate_21;
	Parms.K2Node_Event_SignificanceLevel = K2Node_Event_SignificanceLevel;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.K2Node_CustomEvent_NotifyName_14 = K2Node_CustomEvent_NotifyName_14;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_22 = K2Node_CreateDelegate_OutputDelegate_22;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_CustomEvent_NotifyName_15 = K2Node_CustomEvent_NotifyName_15;
	Parms.K2Node_CreateDelegate_OutputDelegate_23 = K2Node_CreateDelegate_OutputDelegate_23;
	Parms.K2Node_CustomEvent_NotifyName_16 = K2Node_CustomEvent_NotifyName_16;
	Parms.K2Node_CreateDelegate_OutputDelegate_24 = K2Node_CreateDelegate_OutputDelegate_24;
	Parms.K2Node_Event_Location = K2Node_Event_Location;
	Parms.K2Node_Event_SoundType = K2Node_Event_SoundType;
	Parms.K2Node_Event_Sound = K2Node_Event_Sound;
	Parms.K2Node_Event_SoundVolume = K2Node_Event_SoundVolume;
	Parms.K2Node_Event_VibrationType = K2Node_Event_VibrationType;
	Parms.K2Node_Event_Vibration = K2Node_Event_Vibration;
	Parms.K2Node_Event_VibrationVolume = K2Node_Event_VibrationVolume;
	Parms.K2Node_Event_AttachToComponent = K2Node_Event_AttachToComponent;
	Parms.K2Node_Event_UseSocketLocation = K2Node_Event_UseSocketLocation;
	Parms.K2Node_Event_SocketName = K2Node_Event_SocketName;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.K2Node_CustomEvent_NotifyName_17 = K2Node_CustomEvent_NotifyName_17;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.K2Node_CustomEvent_NotifyName_18 = K2Node_CustomEvent_NotifyName_18;
	Parms.K2Node_CreateDelegate_OutputDelegate_25 = K2Node_CreateDelegate_OutputDelegate_25;
	Parms.K2Node_CustomEvent_NotifyName_19 = K2Node_CustomEvent_NotifyName_19;
	Parms.K2Node_CreateDelegate_OutputDelegate_26 = K2Node_CreateDelegate_OutputDelegate_26;

	UObject::ProcessEvent(Func, &Parms);

}

}


