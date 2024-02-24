#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_CreatureAbility_Melee_Ishmael.GA_CreatureAbility_Melee_Ishmael_C
// (None)

class UClass* UGA_CreatureAbility_Melee_Ishmael_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_CreatureAbility_Melee_Ishmael_C");

	return Clss;
}


// GA_CreatureAbility_Melee_Ishmael_C GA_CreatureAbility_Melee_Ishmael.Default__GA_CreatureAbility_Melee_Ishmael_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_CreatureAbility_Melee_Ishmael_C* UGA_CreatureAbility_Melee_Ishmael_C::GetDefaultObj()
{
	static class UGA_CreatureAbility_Melee_Ishmael_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_CreatureAbility_Melee_Ishmael_C*>(UGA_CreatureAbility_Melee_Ishmael_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_CreatureAbility_Melee_Ishmael.GA_CreatureAbility_Melee_Ishmael_C.SelectMontage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform                  TargetTransform                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                SelectedMontage                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               LRotational                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  LTransform                                                       (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetTarget_Target                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_CreatureAbilityZoneCallFunc_Get_Creature_Ability_Zone_8_Way_CreatureAbilityZone     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDynamicMontageArray        CallFunc_Map_Find_Value                                          (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_SelectMontageNearTarget_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectMontageNearTarget_Leeway_ImplicitCast             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_CreatureAbility_Melee_Ishmael_C::SelectMontage(const struct FTransform& TargetTransform, class UAnimMontage** SelectedMontage, bool LRotational, const struct FTransform& LTransform, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetTarget_Target, bool CallFunc_IsValid_ReturnValue_1, enum class Enum_CreatureAbilityZone CallFunc_Get_Creature_Ability_Zone_8_Way_CreatureAbilityZone, const struct FDynamicMontageArray& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UAnimMontage* CallFunc_SelectMontageNearTarget_ReturnValue, float CallFunc_SelectMontageNearTarget_Leeway_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_Melee_Ishmael_C", "SelectMontage");

	Params::UGA_CreatureAbility_Melee_Ishmael_C_SelectMontage_Params Parms{};

	Parms.TargetTransform = TargetTransform;
	Parms.LRotational = LRotational;
	Parms.LTransform = LTransform;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetTarget_Target = CallFunc_GetTarget_Target;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Get_Creature_Ability_Zone_8_Way_CreatureAbilityZone = CallFunc_Get_Creature_Ability_Zone_8_Way_CreatureAbilityZone;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_SelectMontageNearTarget_ReturnValue = CallFunc_SelectMontageNearTarget_ReturnValue;
	Parms.CallFunc_SelectMontageNearTarget_Leeway_ImplicitCast = CallFunc_SelectMontageNearTarget_Leeway_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (SelectedMontage != nullptr)
		*SelectedMontage = Parms.SelectedMontage;

}

}


