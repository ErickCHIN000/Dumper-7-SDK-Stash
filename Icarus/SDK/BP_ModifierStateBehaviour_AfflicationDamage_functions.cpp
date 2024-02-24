#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ModifierStateBehaviour_AfflicationDamage.BP_ModifierStateBehaviour_AfflicationDamage_C
// (None)

class UClass* UBP_ModifierStateBehaviour_AfflicationDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ModifierStateBehaviour_AfflicationDamage_C");

	return Clss;
}


// BP_ModifierStateBehaviour_AfflicationDamage_C BP_ModifierStateBehaviour_AfflicationDamage.Default__BP_ModifierStateBehaviour_AfflicationDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ModifierStateBehaviour_AfflicationDamage_C* UBP_ModifierStateBehaviour_AfflicationDamage_C::GetDefaultObj()
{
	static class UBP_ModifierStateBehaviour_AfflicationDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ModifierStateBehaviour_AfflicationDamage_C*>(UBP_ModifierStateBehaviour_AfflicationDamage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ModifierStateBehaviour_AfflicationDamage.BP_ModifierStateBehaviour_AfflicationDamage_C.ModifierRemoved
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ModifierRemoved_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_ModifierStateBehaviour_AfflicationDamage_C::ModifierRemoved(bool CallFunc_ModifierRemoved_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ModifierStateBehaviour_AfflicationDamage_C", "ModifierRemoved");

	Params::UBP_ModifierStateBehaviour_AfflicationDamage_C_ModifierRemoved_Params Parms{};

	Parms.CallFunc_ModifierRemoved_ReturnValue = CallFunc_ModifierRemoved_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ModifierStateBehaviour_AfflicationDamage.BP_ModifierStateBehaviour_AfflicationDamage_C.ModifierApplied
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class FString                      Temp_string_Variable                                             (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// struct FModifierStateData          CallFunc_GetModifierStateData_ReturnValue                        (None)
// struct FModifierStateData          CallFunc_GetModifierStateData_ReturnValue_1                      (None)
// struct FRandomRangeValue           CallFunc_Map_Find_Value                                          (NoDestructor)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRandomRangeValue           CallFunc_Map_Find_Value_1                                        (NoDestructor)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ModifierApplied_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_ModifierStateBehaviour_AfflicationDamage_C::ModifierApplied(const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, const struct FModifierStateData& CallFunc_GetModifierStateData_ReturnValue, const struct FModifierStateData& CallFunc_GetModifierStateData_ReturnValue_1, const struct FRandomRangeValue& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FRandomRangeValue& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_ModifierApplied_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ModifierStateBehaviour_AfflicationDamage_C", "ModifierApplied");

	Params::UBP_ModifierStateBehaviour_AfflicationDamage_C_ModifierApplied_Params Parms{};

	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.CallFunc_GetModifierStateData_ReturnValue = CallFunc_GetModifierStateData_ReturnValue;
	Parms.CallFunc_GetModifierStateData_ReturnValue_1 = CallFunc_GetModifierStateData_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_ModifierApplied_ReturnValue = CallFunc_ModifierApplied_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ModifierStateBehaviour_AfflicationDamage.BP_ModifierStateBehaviour_AfflicationDamage_C.ModifierTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ModifierStateBehaviour_AfflicationDamage_C::ModifierTick(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ModifierStateBehaviour_AfflicationDamage_C", "ModifierTick");

	Params::UBP_ModifierStateBehaviour_AfflicationDamage_C_ModifierTick_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ModifierStateBehaviour_AfflicationDamage.BP_ModifierStateBehaviour_AfflicationDamage_C.ExecuteUbergraph_BP_ModifierStateBehaviour_AfflicationDamage
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusCharacter*            K2Node_DynamicCast_AsIcarus_Character                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetMaxHealth_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DealFlatDamage_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ModifierStateBehaviour_AfflicationDamage_C::ExecuteUbergraph_BP_ModifierStateBehaviour_AfflicationDamage(int32 EntryPoint, float K2Node_Event_DeltaTime, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AIcarusCharacter* K2Node_DynamicCast_AsIcarus_Character, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetMaxHealth_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_DealFlatDamage_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ModifierStateBehaviour_AfflicationDamage_C", "ExecuteUbergraph_BP_ModifierStateBehaviour_AfflicationDamage");

	Params::UBP_ModifierStateBehaviour_AfflicationDamage_C_ExecuteUbergraph_BP_ModifierStateBehaviour_AfflicationDamage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Character = K2Node_DynamicCast_AsIcarus_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetMaxHealth_ReturnValue = CallFunc_GetMaxHealth_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_DealFlatDamage_ReturnValue = CallFunc_DealFlatDamage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


