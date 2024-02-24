#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Rune_ModifyPlayerFloat.Rune_ModifyPlayerFloat_C
// (None)

class UClass* URune_ModifyPlayerFloat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Rune_ModifyPlayerFloat_C");

	return Clss;
}


// Rune_ModifyPlayerFloat_C Rune_ModifyPlayerFloat.Default__Rune_ModifyPlayerFloat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URune_ModifyPlayerFloat_C* URune_ModifyPlayerFloat_C::GetDefaultObj()
{
	static class URune_ModifyPlayerFloat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URune_ModifyPlayerFloat_C*>(URune_ModifyPlayerFloat_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Rune_ModifyPlayerFloat.Rune_ModifyPlayerFloat_C.RemoveFrozenResistance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URune_ModifyPlayerFloat_C::RemoveFrozenResistance(float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_ModifyPlayerFloat_C", "RemoveFrozenResistance");

	Params::URune_ModifyPlayerFloat_C_RemoveFrozenResistance_Params Parms{};

	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rune_ModifyPlayerFloat.Rune_ModifyPlayerFloat_C.AddFrozenResistance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URune_ModifyPlayerFloat_C::AddFrozenResistance(float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_ModifyPlayerFloat_C", "AddFrozenResistance");

	Params::URune_ModifyPlayerFloat_C_AddFrozenResistance_Params Parms{};

	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rune_ModifyPlayerFloat.Rune_ModifyPlayerFloat_C.RemoveFireResistance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URune_ModifyPlayerFloat_C::RemoveFireResistance(float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_ModifyPlayerFloat_C", "RemoveFireResistance");

	Params::URune_ModifyPlayerFloat_C_RemoveFireResistance_Params Parms{};

	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rune_ModifyPlayerFloat.Rune_ModifyPlayerFloat_C.AddFireResistance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URune_ModifyPlayerFloat_C::AddFireResistance(float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_ModifyPlayerFloat_C", "AddFireResistance");

	Params::URune_ModifyPlayerFloat_C_AddFireResistance_Params Parms{};

	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rune_ModifyPlayerFloat.Rune_ModifyPlayerFloat_C.RemoveHeavyAttackResistance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URune_ModifyPlayerFloat_C::RemoveHeavyAttackResistance(float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_ModifyPlayerFloat_C", "RemoveHeavyAttackResistance");

	Params::URune_ModifyPlayerFloat_C_RemoveHeavyAttackResistance_Params Parms{};

	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rune_ModifyPlayerFloat.Rune_ModifyPlayerFloat_C.AddHeavyAttackResistance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URune_ModifyPlayerFloat_C::AddHeavyAttackResistance(float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_ModifyPlayerFloat_C", "AddHeavyAttackResistance");

	Params::URune_ModifyPlayerFloat_C_AddHeavyAttackResistance_Params Parms{};

	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rune_ModifyPlayerFloat.Rune_ModifyPlayerFloat_C.RemoveFallResistance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URune_ModifyPlayerFloat_C::RemoveFallResistance(float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_ModifyPlayerFloat_C", "RemoveFallResistance");

	Params::URune_ModifyPlayerFloat_C_RemoveFallResistance_Params Parms{};

	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rune_ModifyPlayerFloat.Rune_ModifyPlayerFloat_C.AddFallResistance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URune_ModifyPlayerFloat_C::AddFallResistance(float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_ModifyPlayerFloat_C", "AddFallResistance");

	Params::URune_ModifyPlayerFloat_C_AddFallResistance_Params Parms{};

	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rune_ModifyPlayerFloat.Rune_ModifyPlayerFloat_C.RemovePoisonResistance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URune_ModifyPlayerFloat_C::RemovePoisonResistance(float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_ModifyPlayerFloat_C", "RemovePoisonResistance");

	Params::URune_ModifyPlayerFloat_C_RemovePoisonResistance_Params Parms{};

	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rune_ModifyPlayerFloat.Rune_ModifyPlayerFloat_C.AddPoisonResistance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URune_ModifyPlayerFloat_C::AddPoisonResistance(float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_ModifyPlayerFloat_C", "AddPoisonResistance");

	Params::URune_ModifyPlayerFloat_C_AddPoisonResistance_Params Parms{};

	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rune_ModifyPlayerFloat.Rune_ModifyPlayerFloat_C.RemoveHealingRuneEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URune_ModifyPlayerFloat_C::RemoveHealingRuneEffect(float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_ModifyPlayerFloat_C", "RemoveHealingRuneEffect");

	Params::URune_ModifyPlayerFloat_C_RemoveHealingRuneEffect_Params Parms{};

	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rune_ModifyPlayerFloat.Rune_ModifyPlayerFloat_C.AddHealingRuneEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_ModifyPlayerFloat_C::AddHealingRuneEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_ModifyPlayerFloat_C", "AddHealingRuneEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_ModifyPlayerFloat.Rune_ModifyPlayerFloat_C.RemoveKnockDownResistance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URune_ModifyPlayerFloat_C::RemoveKnockDownResistance(float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_ModifyPlayerFloat_C", "RemoveKnockDownResistance");

	Params::URune_ModifyPlayerFloat_C_RemoveKnockDownResistance_Params Parms{};

	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rune_ModifyPlayerFloat.Rune_ModifyPlayerFloat_C.AddKnockDownResistance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URune_ModifyPlayerFloat_C::AddKnockDownResistance(float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_ModifyPlayerFloat_C", "AddKnockDownResistance");

	Params::URune_ModifyPlayerFloat_C_AddKnockDownResistance_Params Parms{};

	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rune_ModifyPlayerFloat.Rune_ModifyPlayerFloat_C.Runes_Stat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void URune_ModifyPlayerFloat_C::Runes_Stat(bool K2Node_SwitchName_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_ModifyPlayerFloat_C", "Runes_Stat");

	Params::URune_ModifyPlayerFloat_C_Runes_Stat_Params Parms{};

	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rune_ModifyPlayerFloat.Rune_ModifyPlayerFloat_C.Runes_Misc_Remove
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void URune_ModifyPlayerFloat_C::Runes_Misc_Remove(bool K2Node_SwitchName_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_ModifyPlayerFloat_C", "Runes_Misc_Remove");

	Params::URune_ModifyPlayerFloat_C_Runes_Misc_Remove_Params Parms{};

	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rune_ModifyPlayerFloat.Rune_ModifyPlayerFloat_C.RemoveFloatSimple
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetDelta_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

void URune_ModifyPlayerFloat_C::RemoveFloatSimple(float CallFunc_GetDelta_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_ModifyPlayerFloat_C", "RemoveFloatSimple");

	Params::URune_ModifyPlayerFloat_C_RemoveFloatSimple_Params Parms{};

	Parms.CallFunc_GetDelta_ReturnValue = CallFunc_GetDelta_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rune_ModifyPlayerFloat.Rune_ModifyPlayerFloat_C.Runes_Misc_Add
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void URune_ModifyPlayerFloat_C::Runes_Misc_Add(bool K2Node_SwitchName_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_ModifyPlayerFloat_C", "Runes_Misc_Add");

	Params::URune_ModifyPlayerFloat_C_Runes_Misc_Add_Params Parms{};

	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rune_ModifyPlayerFloat.Rune_ModifyPlayerFloat_C.Runes_WeaponGeneric
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void URune_ModifyPlayerFloat_C::Runes_WeaponGeneric(bool K2Node_SwitchName_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_ModifyPlayerFloat_C", "Runes_WeaponGeneric");

	Params::URune_ModifyPlayerFloat_C_Runes_WeaponGeneric_Params Parms{};

	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rune_ModifyPlayerFloat.Rune_ModifyPlayerFloat_C.Runes_Harden
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void URune_ModifyPlayerFloat_C::Runes_Harden(bool K2Node_SwitchName_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_ModifyPlayerFloat_C", "Runes_Harden");

	Params::URune_ModifyPlayerFloat_C_Runes_Harden_Params Parms{};

	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rune_ModifyPlayerFloat.Rune_ModifyPlayerFloat_C.Runes_Roll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void URune_ModifyPlayerFloat_C::Runes_Roll(bool K2Node_SwitchName_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_ModifyPlayerFloat_C", "Runes_Roll");

	Params::URune_ModifyPlayerFloat_C_Runes_Roll_Params Parms{};

	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rune_ModifyPlayerFloat.Rune_ModifyPlayerFloat_C.Runes_Dodge
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void URune_ModifyPlayerFloat_C::Runes_Dodge(bool K2Node_SwitchName_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_ModifyPlayerFloat_C", "Runes_Dodge");

	Params::URune_ModifyPlayerFloat_C_Runes_Dodge_Params Parms{};

	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rune_ModifyPlayerFloat.Rune_ModifyPlayerFloat_C.ModifyFloatSimple
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PlayerFloat                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DeltaMultiplier                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_GetDelta_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

void URune_ModifyPlayerFloat_C::ModifyFloatSimple(class FName PlayerFloat, float DeltaMultiplier, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, float CallFunc_GetDelta_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_ModifyPlayerFloat_C", "ModifyFloatSimple");

	Params::URune_ModifyPlayerFloat_C_ModifyFloatSimple_Params Parms{};

	Parms.PlayerFloat = PlayerFloat;
	Parms.DeltaMultiplier = DeltaMultiplier;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetDelta_ReturnValue = CallFunc_GetDelta_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rune_ModifyPlayerFloat.Rune_ModifyPlayerFloat_C.RemoveBaseDamageBoost
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URune_ModifyPlayerFloat_C::RemoveBaseDamageBoost(float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_ModifyPlayerFloat_C", "RemoveBaseDamageBoost");

	Params::URune_ModifyPlayerFloat_C_RemoveBaseDamageBoost_Params Parms{};

	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rune_ModifyPlayerFloat.Rune_ModifyPlayerFloat_C.AddBaseDamageBoost
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_ModifyPlayerFloat_C::AddBaseDamageBoost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_ModifyPlayerFloat_C", "AddBaseDamageBoost");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_ModifyPlayerFloat.Rune_ModifyPlayerFloat_C.RemoveTarDropBoost
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URune_ModifyPlayerFloat_C::RemoveTarDropBoost(float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_ModifyPlayerFloat_C", "RemoveTarDropBoost");

	Params::URune_ModifyPlayerFloat_C_RemoveTarDropBoost_Params Parms{};

	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rune_ModifyPlayerFloat.Rune_ModifyPlayerFloat_C.AddTarDropBoost
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_ModifyPlayerFloat_C::AddTarDropBoost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_ModifyPlayerFloat_C", "AddTarDropBoost");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_ModifyPlayerFloat.Rune_ModifyPlayerFloat_C.RemoveMovementSpeedBoost
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URune_ModifyPlayerFloat_C::RemoveMovementSpeedBoost(float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_ModifyPlayerFloat_C", "RemoveMovementSpeedBoost");

	Params::URune_ModifyPlayerFloat_C_RemoveMovementSpeedBoost_Params Parms{};

	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rune_ModifyPlayerFloat.Rune_ModifyPlayerFloat_C.AddMovementSpeedBoost
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_ModifyPlayerFloat_C::AddMovementSpeedBoost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_ModifyPlayerFloat_C", "AddMovementSpeedBoost");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_ModifyPlayerFloat.Rune_ModifyPlayerFloat_C.GetDelta
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Tier          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float URune_ModifyPlayerFloat_C::GetDelta(enum class Enum_Rune_Tier Temp_byte_Variable, int32 Temp_int_Variable, int32 K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_ModifyPlayerFloat_C", "GetDelta");

	Params::URune_ModifyPlayerFloat_C_GetDelta_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Rune_ModifyPlayerFloat.Rune_ModifyPlayerFloat_C.Rune_Enable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_ModifyPlayerFloat_C::Rune_Enable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_ModifyPlayerFloat_C", "Rune_Enable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_ModifyPlayerFloat.Rune_ModifyPlayerFloat_C.Rune_Disable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_ModifyPlayerFloat_C::Rune_Disable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_ModifyPlayerFloat_C", "Rune_Disable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_ModifyPlayerFloat.Rune_ModifyPlayerFloat_C.ExecuteUbergraph_Rune_ModifyPlayerFloat
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void URune_ModifyPlayerFloat_C::ExecuteUbergraph_Rune_ModifyPlayerFloat(int32 EntryPoint, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_ModifyPlayerFloat_C", "ExecuteUbergraph_Rune_ModifyPlayerFloat");

	Params::URune_ModifyPlayerFloat_C_ExecuteUbergraph_Rune_ModifyPlayerFloat_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


