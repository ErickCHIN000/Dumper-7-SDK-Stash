#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Rune_OnRoll.Rune_OnRoll_C
// (None)

class UClass* URune_OnRoll_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Rune_OnRoll_C");

	return Clss;
}


// Rune_OnRoll_C Rune_OnRoll.Default__Rune_OnRoll_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URune_OnRoll_C* URune_OnRoll_C::GetDefaultObj()
{
	static class URune_OnRoll_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URune_OnRoll_C*>(URune_OnRoll_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Rune_OnRoll.Rune_OnRoll_C.GetTransform_Bottom
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)

struct FTransform URune_OnRoll_C::GetTransform_Bottom(const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_OnRoll_C", "GetTransform_Bottom");

	Params::URune_OnRoll_C_GetTransform_Bottom_Params Parms{};

	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Rune_OnRoll.Rune_OnRoll_C.GetTransform_Center
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)

struct FTransform URune_OnRoll_C::GetTransform_Center(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_OnRoll_C", "GetTransform_Center");

	Params::URune_OnRoll_C_GetTransform_Center_Params Parms{};

	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Rune_OnRoll.Rune_OnRoll_C.GetDamage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Tier          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float URune_OnRoll_C::GetDamage(enum class Enum_Rune_Tier Temp_byte_Variable, int32 Temp_int_Variable, int32 K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_OnRoll_C", "GetDamage");

	Params::URune_OnRoll_C_GetDamage_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Rune_OnRoll.Rune_OnRoll_C.GetChance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Tier          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float URune_OnRoll_C::GetChance(enum class Enum_Rune_Tier Temp_byte_Variable, int32 Temp_int_Variable, int32 K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_OnRoll_C", "GetChance");

	Params::URune_OnRoll_C_GetChance_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Rune_OnRoll.Rune_OnRoll_C.Rune_Enable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_OnRoll_C::Rune_Enable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_OnRoll_C", "Rune_Enable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_OnRoll.Rune_OnRoll_C.Rune_Disable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_OnRoll_C::Rune_Disable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_OnRoll_C", "Rune_Disable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_OnRoll.Rune_OnRoll_C.OnRoll
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_OnRoll_C::OnRoll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_OnRoll_C", "OnRoll");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_OnRoll.Rune_OnRoll_C.ExecuteUbergraph_Rune_OnRoll
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDamage_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetChance_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RandomBoolWithWeight_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetDamage_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_Center_ReturnValue                         (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class ABP_RollSpecialEffect_Daggers_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_Center_ReturnValue_1                       (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_Center_ReturnValue_2                       (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_RollSpecialEffect_Lava_C*CallFunc_FinishSpawningActor_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_RollSpecialEffect_StoneStun_C*CallFunc_FinishSpawningActor_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URune_OnRoll_C::ExecuteUbergraph_Rune_OnRoll(int32 EntryPoint, float CallFunc_GetDamage_ReturnValue, float CallFunc_GetChance_ReturnValue, bool CallFunc_RandomBoolWithWeight_ReturnValue, bool K2Node_SwitchName_CmpSuccess, float CallFunc_GetDamage_ReturnValue_1, const struct FTransform& CallFunc_GetTransform_Center_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_RollSpecialEffect_Daggers_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FTransform& CallFunc_GetTransform_Center_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, const struct FTransform& CallFunc_GetTransform_Center_ReturnValue_2, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2, class ABP_RollSpecialEffect_Lava_C* CallFunc_FinishSpawningActor_ReturnValue_1, class ABP_RollSpecialEffect_StoneStun_C* CallFunc_FinishSpawningActor_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_OnRoll_C", "ExecuteUbergraph_Rune_OnRoll");

	Params::URune_OnRoll_C_ExecuteUbergraph_Rune_OnRoll_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDamage_ReturnValue = CallFunc_GetDamage_ReturnValue;
	Parms.CallFunc_GetChance_ReturnValue = CallFunc_GetChance_ReturnValue;
	Parms.CallFunc_RandomBoolWithWeight_ReturnValue = CallFunc_RandomBoolWithWeight_ReturnValue;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_GetDamage_ReturnValue_1 = CallFunc_GetDamage_ReturnValue_1;
	Parms.CallFunc_GetTransform_Center_ReturnValue = CallFunc_GetTransform_Center_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_GetTransform_Center_ReturnValue_1 = CallFunc_GetTransform_Center_ReturnValue_1;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1;
	Parms.CallFunc_GetTransform_Center_ReturnValue_2 = CallFunc_GetTransform_Center_ReturnValue_2;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_1 = CallFunc_FinishSpawningActor_ReturnValue_1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_2 = CallFunc_FinishSpawningActor_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


