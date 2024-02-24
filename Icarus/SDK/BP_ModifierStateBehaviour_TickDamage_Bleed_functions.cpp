#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ModifierStateBehaviour_TickDamage_Bleed.BP_ModifierStateBehaviour_TickDamage_Bleed_C
// (None)

class UClass* UBP_ModifierStateBehaviour_TickDamage_Bleed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ModifierStateBehaviour_TickDamage_Bleed_C");

	return Clss;
}


// BP_ModifierStateBehaviour_TickDamage_Bleed_C BP_ModifierStateBehaviour_TickDamage_Bleed.Default__BP_ModifierStateBehaviour_TickDamage_Bleed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ModifierStateBehaviour_TickDamage_Bleed_C* UBP_ModifierStateBehaviour_TickDamage_Bleed_C::GetDefaultObj()
{
	static class UBP_ModifierStateBehaviour_TickDamage_Bleed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ModifierStateBehaviour_TickDamage_Bleed_C*>(UBP_ModifierStateBehaviour_TickDamage_Bleed_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ModifierStateBehaviour_TickDamage_Bleed.BP_ModifierStateBehaviour_TickDamage_Bleed_C.ModifierRemoved
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ModifierRemoved_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_IcarusNPCGOAPCharacter_C*K2Node_DynamicCast_AsBP_Icarus_NPCGOAPCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveStats_BP_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_ModifierStateBehaviour_TickDamage_Bleed_C::ModifierRemoved(class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_ModifierRemoved_ReturnValue, class ABP_IcarusNPCGOAPCharacter_C* K2Node_DynamicCast_AsBP_Icarus_NPCGOAPCharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_RemoveStats_BP_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ModifierStateBehaviour_TickDamage_Bleed_C", "ModifierRemoved");

	Params::UBP_ModifierStateBehaviour_TickDamage_Bleed_C_ModifierRemoved_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_ModifierRemoved_ReturnValue = CallFunc_ModifierRemoved_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Icarus_NPCGOAPCharacter = K2Node_DynamicCast_AsBP_Icarus_NPCGOAPCharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_RemoveStats_BP_ReturnValue = CallFunc_RemoveStats_BP_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ModifierStateBehaviour_TickDamage_Bleed.BP_ModifierStateBehaviour_TickDamage_Bleed_C.ModifierApplied
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<struct FStatsEnum, int32>     K2Node_MakeMap_Map                                               (ConstParm)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ModifierApplied_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_IcarusNPCGOAPCharacter_C*K2Node_DynamicCast_AsBP_Icarus_NPCGOAPCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AddStats_BP_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_ModifierStateBehaviour_TickDamage_Bleed_C::ModifierApplied(int32 CallFunc_RandomInteger_ReturnValue, TMap<struct FStatsEnum, int32> K2Node_MakeMap_Map, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_ModifierApplied_ReturnValue, class ABP_IcarusNPCGOAPCharacter_C* K2Node_DynamicCast_AsBP_Icarus_NPCGOAPCharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_AddStats_BP_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ModifierStateBehaviour_TickDamage_Bleed_C", "ModifierApplied");

	Params::UBP_ModifierStateBehaviour_TickDamage_Bleed_C_ModifierApplied_Params Parms{};

	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.K2Node_MakeMap_Map = K2Node_MakeMap_Map;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_ModifierApplied_ReturnValue = CallFunc_ModifierApplied_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Icarus_NPCGOAPCharacter = K2Node_DynamicCast_AsBP_Icarus_NPCGOAPCharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_AddStats_BP_ReturnValue = CallFunc_AddStats_BP_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ModifierStateBehaviour_TickDamage_Bleed.BP_ModifierStateBehaviour_TickDamage_Bleed_C.ModifierTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ModifierStateBehaviour_TickDamage_Bleed_C::ModifierTick(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ModifierStateBehaviour_TickDamage_Bleed_C", "ModifierTick");

	Params::UBP_ModifierStateBehaviour_TickDamage_Bleed_C_ModifierTick_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ModifierStateBehaviour_TickDamage_Bleed.BP_ModifierStateBehaviour_TickDamage_Bleed_C.ExecuteUbergraph_BP_ModifierStateBehaviour_TickDamage_Bleed
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FModifierStateData          CallFunc_GetModifierStateData_ReturnValue                        (None)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRandomRangeValue           CallFunc_Map_Find_Value                                          (NoDestructor)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DealFlatDamage_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ModifierStateBehaviour_TickDamage_Bleed_C::ExecuteUbergraph_BP_ModifierStateBehaviour_TickDamage_Bleed(int32 EntryPoint, const class FString& Temp_string_Variable, float K2Node_Event_DeltaTime, bool CallFunc_IsServer_ReturnValue, const struct FModifierStateData& CallFunc_GetModifierStateData_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FRandomRangeValue& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_DealFlatDamage_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ModifierStateBehaviour_TickDamage_Bleed_C", "ExecuteUbergraph_BP_ModifierStateBehaviour_TickDamage_Bleed");

	Params::UBP_ModifierStateBehaviour_TickDamage_Bleed_C_ExecuteUbergraph_BP_ModifierStateBehaviour_TickDamage_Bleed_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetModifierStateData_ReturnValue = CallFunc_GetModifierStateData_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_DealFlatDamage_ReturnValue = CallFunc_DealFlatDamage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


