#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ModifierStateBehaviour_Exposure.BP_ModifierStateBehaviour_Exposure_C
// (None)

class UClass* UBP_ModifierStateBehaviour_Exposure_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ModifierStateBehaviour_Exposure_C");

	return Clss;
}


// BP_ModifierStateBehaviour_Exposure_C BP_ModifierStateBehaviour_Exposure.Default__BP_ModifierStateBehaviour_Exposure_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ModifierStateBehaviour_Exposure_C* UBP_ModifierStateBehaviour_Exposure_C::GetDefaultObj()
{
	static class UBP_ModifierStateBehaviour_Exposure_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ModifierStateBehaviour_Exposure_C*>(UBP_ModifierStateBehaviour_Exposure_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ModifierStateBehaviour_Exposure.BP_ModifierStateBehaviour_Exposure_C.GetModifierExponentialDamage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Scaled_Effectiveness                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentModifierEffectiveness_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ModifierStateBehaviour_Exposure_C::GetModifierExponentialDamage(float* Scaled_Effectiveness, int32 CallFunc_GetCurrentModifierEffectiveness_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ModifierStateBehaviour_Exposure_C", "GetModifierExponentialDamage");

	Params::UBP_ModifierStateBehaviour_Exposure_C_GetModifierExponentialDamage_Params Parms{};

	Parms.CallFunc_GetCurrentModifierEffectiveness_ReturnValue = CallFunc_GetCurrentModifierEffectiveness_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Scaled_Effectiveness != nullptr)
		*Scaled_Effectiveness = Parms.Scaled_Effectiveness;

}


// Function BP_ModifierStateBehaviour_Exposure.BP_ModifierStateBehaviour_Exposure_C.InitComponent
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_ModifierStateBehaviour_Exposure_C::InitComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ModifierStateBehaviour_Exposure_C", "InitComponent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ModifierStateBehaviour_Exposure.BP_ModifierStateBehaviour_Exposure_C.ModifierTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ModifierStateBehaviour_Exposure_C::ModifierTick(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ModifierStateBehaviour_Exposure_C", "ModifierTick");

	Params::UBP_ModifierStateBehaviour_Exposure_C_ModifierTick_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ModifierStateBehaviour_Exposure.BP_ModifierStateBehaviour_Exposure_C.ExecuteUbergraph_BP_ModifierStateBehaviour_Exposure
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_GetModifierExponentialDamage_Scaled_Effectiveness       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FModifierStateData          CallFunc_GetModifierStateData_ReturnValue                        (None)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRandomRangeValue           CallFunc_Map_Find_Value                                          (NoDestructor)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DealFlatDamage_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ModifierStateBehaviour_Exposure_C::ExecuteUbergraph_BP_ModifierStateBehaviour_Exposure(int32 EntryPoint, const class FString& Temp_string_Variable, float CallFunc_GetModifierExponentialDamage_Scaled_Effectiveness, class AActor* CallFunc_GetOwner_ReturnValue, const struct FModifierStateData& CallFunc_GetModifierStateData_ReturnValue, bool CallFunc_IsServer_ReturnValue, const struct FRandomRangeValue& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float K2Node_Event_DeltaTime, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_DealFlatDamage_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ModifierStateBehaviour_Exposure_C", "ExecuteUbergraph_BP_ModifierStateBehaviour_Exposure");

	Params::UBP_ModifierStateBehaviour_Exposure_C_ExecuteUbergraph_BP_ModifierStateBehaviour_Exposure_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.CallFunc_GetModifierExponentialDamage_Scaled_Effectiveness = CallFunc_GetModifierExponentialDamage_Scaled_Effectiveness;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetModifierStateData_ReturnValue = CallFunc_GetModifierStateData_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_DealFlatDamage_ReturnValue = CallFunc_DealFlatDamage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


