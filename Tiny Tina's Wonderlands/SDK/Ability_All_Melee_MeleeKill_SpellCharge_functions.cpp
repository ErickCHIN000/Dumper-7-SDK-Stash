#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_All_Melee_MeleeKill_SpellCharge.Ability_All_Melee_MeleeKill_SpellCharge_C
// (None)

class UClass* UAbility_All_Melee_MeleeKill_SpellCharge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_All_Melee_MeleeKill_SpellCharge_C");

	return Clss;
}


// Ability_All_Melee_MeleeKill_SpellCharge_C Ability_All_Melee_MeleeKill_SpellCharge.Default__Ability_All_Melee_MeleeKill_SpellCharge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_All_Melee_MeleeKill_SpellCharge_C* UAbility_All_Melee_MeleeKill_SpellCharge_C::GetDefaultObj()
{
	static class UAbility_All_Melee_MeleeKill_SpellCharge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_All_Melee_MeleeKill_SpellCharge_C*>(UAbility_All_Melee_MeleeKill_SpellCharge_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_All_Melee_MeleeKill_SpellCharge.Ability_All_Melee_MeleeKill_SpellCharge_C.Enchantment_DoOnKillBehavior
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbility_All_Melee_MeleeKill_SpellCharge_C::Enchantment_DoOnKillBehavior()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_All_Melee_MeleeKill_SpellCharge_C", "Enchantment_DoOnKillBehavior");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_All_Melee_MeleeKill_SpellCharge.Ability_All_Melee_MeleeKill_SpellCharge_C.ExecuteUbergraph_Ability_All_Melee_MeleeKill_SpellCharge
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGbxAttributeModifierActionExecOutputCallFunc_AddModifierToGbxAttribute_ModifierActionResult          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGbxAttributeModifierHandle CallFunc_AddModifierToGbxAttribute_ReturnValue                   (None)
// float                              CallFunc_GetValueOfAttribute_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValueOfAttribute_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValueOfAttribute_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfAttribute_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EGbxAttributeModifierActionExecOutputCallFunc_AddModifierToGbxAttribute_ModifierActionResult1         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGbxAttributeModifierHandle CallFunc_AddModifierToGbxAttribute_ReturnValue1                  (None)
// bool                               K2Node_SwitchEnum1_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAbility_All_Melee_MeleeKill_SpellCharge_C::ExecuteUbergraph_Ability_All_Melee_MeleeKill_SpellCharge(int32 EntryPoint, enum class EGbxAttributeModifierActionExecOutput CallFunc_AddModifierToGbxAttribute_ModifierActionResult, const struct FGbxAttributeModifierHandle& CallFunc_AddModifierToGbxAttribute_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue1, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue2, float CallFunc_GetValueOfAttribute_ReturnValue3, bool CallFunc_NotEqual_FloatFloat_ReturnValue1, bool CallFunc_Greater_FloatFloat_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue1, enum class EGbxAttributeModifierActionExecOutput CallFunc_AddModifierToGbxAttribute_ModifierActionResult1, const struct FGbxAttributeModifierHandle& CallFunc_AddModifierToGbxAttribute_ReturnValue1, bool K2Node_SwitchEnum1_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_All_Melee_MeleeKill_SpellCharge_C", "ExecuteUbergraph_Ability_All_Melee_MeleeKill_SpellCharge");

	Params::UAbility_All_Melee_MeleeKill_SpellCharge_C_ExecuteUbergraph_Ability_All_Melee_MeleeKill_SpellCharge_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_AddModifierToGbxAttribute_ModifierActionResult = CallFunc_AddModifierToGbxAttribute_ModifierActionResult;
	Parms.CallFunc_AddModifierToGbxAttribute_ReturnValue = CallFunc_AddModifierToGbxAttribute_ReturnValue;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue = CallFunc_GetValueOfAttribute_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue1 = CallFunc_GetValueOfAttribute_ReturnValue1;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue2 = CallFunc_GetValueOfAttribute_ReturnValue2;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue3 = CallFunc_GetValueOfAttribute_ReturnValue3;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue1 = CallFunc_NotEqual_FloatFloat_ReturnValue1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue1 = CallFunc_Greater_FloatFloat_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.CallFunc_AddModifierToGbxAttribute_ModifierActionResult1 = CallFunc_AddModifierToGbxAttribute_ModifierActionResult1;
	Parms.CallFunc_AddModifierToGbxAttribute_ReturnValue1 = CallFunc_AddModifierToGbxAttribute_ReturnValue1;
	Parms.K2Node_SwitchEnum1_CmpSuccess = K2Node_SwitchEnum1_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


