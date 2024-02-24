#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_TED_Gluttony.Ability_TED_Gluttony_C
// (None)

class UClass* UAbility_TED_Gluttony_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_TED_Gluttony_C");

	return Clss;
}


// Ability_TED_Gluttony_C Ability_TED_Gluttony.Default__Ability_TED_Gluttony_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_TED_Gluttony_C* UAbility_TED_Gluttony_C::GetDefaultObj()
{
	static class UAbility_TED_Gluttony_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_TED_Gluttony_C*>(UAbility_TED_Gluttony_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_TED_Gluttony.Ability_TED_Gluttony_C.CalculateAbilityState
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EGbxAbilityState        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EGbxAbilityState        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGbxAbilityState        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentHealthPercent_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EGbxAbilityState        CallFunc_CalculateAbilityState_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGbxAbilityState        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EGbxAbilityState UAbility_TED_Gluttony_C::CalculateAbilityState(bool Temp_bool_Variable, enum class EGbxAbilityState Temp_byte_Variable, enum class EGbxAbilityState Temp_byte_Variable1, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_GetCurrentHealthPercent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, enum class EGbxAbilityState CallFunc_CalculateAbilityState_ReturnValue, enum class EGbxAbilityState K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_TED_Gluttony_C", "CalculateAbilityState");

	Params::UAbility_TED_Gluttony_C_CalculateAbilityState_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.CallFunc_GetCurrentHealthPercent_ReturnValue = CallFunc_GetCurrentHealthPercent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_CalculateAbilityState_ReturnValue = CallFunc_CalculateAbilityState_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Ability_TED_Gluttony.Ability_TED_Gluttony_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_TED_Gluttony_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_TED_Gluttony_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_TED_Gluttony.Ability_TED_Gluttony_C.OnResumed
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_TED_Gluttony_C::OnResumed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_TED_Gluttony_C", "OnResumed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_TED_Gluttony.Ability_TED_Gluttony_C.OnPaused
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_TED_Gluttony_C::OnPaused()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_TED_Gluttony_C", "OnPaused");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_TED_Gluttony.Ability_TED_Gluttony_C.ExecuteUbergraph_Ability_TED_Gluttony
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakWeapon*                  K2Node_DynamicCast_AsOak_Weapon                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter_Player*        K2Node_DynamicCast_AsOak_Character_Player                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAbility_TED_Gluttony_C::ExecuteUbergraph_Ability_TED_Gluttony(int32 EntryPoint, class AActor* CallFunc_GetAbilityOwner_ReturnValue, class AOakWeapon* K2Node_DynamicCast_AsOak_Weapon, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_TED_Gluttony_C", "ExecuteUbergraph_Ability_TED_Gluttony");

	Params::UAbility_TED_Gluttony_C_ExecuteUbergraph_Ability_TED_Gluttony_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAbilityOwner_ReturnValue = CallFunc_GetAbilityOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsOak_Weapon = K2Node_DynamicCast_AsOak_Weapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsOak_Character_Player = K2Node_DynamicCast_AsOak_Character_Player;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;

	UObject::ProcessEvent(Func, &Parms);

}

}


