#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFL_Perks.BPFL_Perks_C
// (None)

class UClass* UBPFL_Perks_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFL_Perks_C");

	return Clss;
}


// BPFL_Perks_C BPFL_Perks.Default__BPFL_Perks_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPFL_Perks_C* UBPFL_Perks_C::GetDefaultObj()
{
	static class UBPFL_Perks_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPFL_Perks_C*>(UBPFL_Perks_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPFL_Perks.BPFL_Perks_C.Get Master Blaster Perk Max Stamina Percentage
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Max_Stamina_Percentage                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Perks_C::Get_Master_Blaster_Perk_Max_Stamina_Percentage(class UObject* __WorldContext, double* Max_Stamina_Percentage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Perks_C", "Get Master Blaster Perk Max Stamina Percentage");

	Params::UBPFL_Perks_C_Get_Master_Blaster_Perk_Max_Stamina_Percentage_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Max_Stamina_Percentage != nullptr)
		*Max_Stamina_Percentage = Parms.Max_Stamina_Percentage;

}


// Function BPFL_Perks.BPFL_Perks_C.Get Master Blaster Perk Effect Duration Value
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Duration                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Perks_C::Get_Master_Blaster_Perk_Effect_Duration_Value(class UObject* __WorldContext, double* Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Perks_C", "Get Master Blaster Perk Effect Duration Value");

	Params::UBPFL_Perks_C_Get_Master_Blaster_Perk_Effect_Duration_Value_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Duration != nullptr)
		*Duration = Parms.Duration;

}


// Function BPFL_Perks.BPFL_Perks_C.Get Healing Touch Perk Maximum Heal Value
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Maximum_Heal                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Perks_C::Get_Healing_Touch_Perk_Maximum_Heal_Value(class UObject* __WorldContext, double* Maximum_Heal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Perks_C", "Get Healing Touch Perk Maximum Heal Value");

	Params::UBPFL_Perks_C_Get_Healing_Touch_Perk_Maximum_Heal_Value_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Maximum_Heal != nullptr)
		*Maximum_Heal = Parms.Maximum_Heal;

}


// Function BPFL_Perks.BPFL_Perks_C.Get Supply Lines Perk Chance
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Chance                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Perks_C::Get_Supply_Lines_Perk_Chance(class UObject* __WorldContext, double* Chance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Perks_C", "Get Supply Lines Perk Chance");

	Params::UBPFL_Perks_C_Get_Supply_Lines_Perk_Chance_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Chance != nullptr)
		*Chance = Parms.Chance;

}


// Function BPFL_Perks.BPFL_Perks_C.Get Herborist Perk Yield Bonus Value
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              YieldBonus                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Perks_C::Get_Herborist_Perk_Yield_Bonus_Value(class UObject* __WorldContext, int32* YieldBonus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Perks_C", "Get Herborist Perk Yield Bonus Value");

	Params::UBPFL_Perks_C_Get_Herborist_Perk_Yield_Bonus_Value_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (YieldBonus != nullptr)
		*YieldBonus = Parms.YieldBonus;

}


// Function BPFL_Perks.BPFL_Perks_C.Get Acupuncture Perk Weapon Damage Multiplier
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Weapon_Damage_Multiplier                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Perks_C::Get_Acupuncture_Perk_Weapon_Damage_Multiplier(class UObject* __WorldContext, double* Weapon_Damage_Multiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Perks_C", "Get Acupuncture Perk Weapon Damage Multiplier");

	Params::UBPFL_Perks_C_Get_Acupuncture_Perk_Weapon_Damage_Multiplier_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Weapon_Damage_Multiplier != nullptr)
		*Weapon_Damage_Multiplier = Parms.Weapon_Damage_Multiplier;

}


// Function BPFL_Perks.BPFL_Perks_C.Get Spiky Block Perk Weapon Damage Multiplier
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Percentage                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Perks_C::Get_Spiky_Block_Perk_Weapon_Damage_Multiplier(class UObject* __WorldContext, double* Percentage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Perks_C", "Get Spiky Block Perk Weapon Damage Multiplier");

	Params::UBPFL_Perks_C_Get_Spiky_Block_Perk_Weapon_Damage_Multiplier_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Percentage != nullptr)
		*Percentage = Parms.Percentage;

}


// Function BPFL_Perks.BPFL_Perks_C.Get Acupuncture Poison Damage Per Second Value
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             DamagePerSecond                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Perks_C::Get_Acupuncture_Poison_Damage_Per_Second_Value(class UObject* __WorldContext, double* DamagePerSecond)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Perks_C", "Get Acupuncture Poison Damage Per Second Value");

	Params::UBPFL_Perks_C_Get_Acupuncture_Poison_Damage_Per_Second_Value_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (DamagePerSecond != nullptr)
		*DamagePerSecond = Parms.DamagePerSecond;

}


// Function BPFL_Perks.BPFL_Perks_C.Get Vegetarian Poison Damage Per Second Value
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             DamagePerSecond                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Perks_C::Get_Vegetarian_Poison_Damage_Per_Second_Value(class UObject* __WorldContext, double* DamagePerSecond)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Perks_C", "Get Vegetarian Poison Damage Per Second Value");

	Params::UBPFL_Perks_C_Get_Vegetarian_Poison_Damage_Per_Second_Value_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (DamagePerSecond != nullptr)
		*DamagePerSecond = Parms.DamagePerSecond;

}


// Function BPFL_Perks.BPFL_Perks_C.Get Charge Perk Velocity Curve
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Velocity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Damage_Multiplier                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 ChargePerkVelocityCurve                                          (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_Damage_Multiplier_ImplicitCast             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Perks_C::Get_Charge_Perk_Velocity_Curve(double Velocity, class UObject* __WorldContext, double* Damage_Multiplier, class UCurveFloat* ChargePerkVelocityCurve, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_GetFloatValue_InTime_ImplicitCast, double K2Node_FunctionResult_Damage_Multiplier_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Perks_C", "Get Charge Perk Velocity Curve");

	Params::UBPFL_Perks_C_Get_Charge_Perk_Velocity_Curve_Params Parms{};

	Parms.Velocity = Velocity;
	Parms.__WorldContext = __WorldContext;
	Parms.ChargePerkVelocityCurve = ChargePerkVelocityCurve;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast = CallFunc_GetFloatValue_InTime_ImplicitCast;
	Parms.K2Node_FunctionResult_Damage_Multiplier_ImplicitCast = K2Node_FunctionResult_Damage_Multiplier_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Damage_Multiplier != nullptr)
		*Damage_Multiplier = Parms.Damage_Multiplier;

}


// Function BPFL_Perks.BPFL_Perks_C.Get Healing Touch Perk Dealing Multiplication Curve
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Magic_Power                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Healing_Multiplier                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 HealingTouchPerkMagicPowerCurve                                  (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_Healing_Multiplier_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Perks_C::Get_Healing_Touch_Perk_Dealing_Multiplication_Curve(double Magic_Power, class UObject* __WorldContext, double* Healing_Multiplier, class UCurveFloat* HealingTouchPerkMagicPowerCurve, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_GetFloatValue_InTime_ImplicitCast, double K2Node_FunctionResult_Healing_Multiplier_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Perks_C", "Get Healing Touch Perk Dealing Multiplication Curve");

	Params::UBPFL_Perks_C_Get_Healing_Touch_Perk_Dealing_Multiplication_Curve_Params Parms{};

	Parms.Magic_Power = Magic_Power;
	Parms.__WorldContext = __WorldContext;
	Parms.HealingTouchPerkMagicPowerCurve = HealingTouchPerkMagicPowerCurve;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast = CallFunc_GetFloatValue_InTime_ImplicitCast;
	Parms.K2Node_FunctionResult_Healing_Multiplier_ImplicitCast = K2Node_FunctionResult_Healing_Multiplier_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Healing_Multiplier != nullptr)
		*Healing_Multiplier = Parms.Healing_Multiplier;

}


// Function BPFL_Perks.BPFL_Perks_C.Get Defensive Diet Perk Damage Reduction Curve
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Fed                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Damage_Reduction_Multiplier                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 DefensiveDietPerkDamageReductionCurve                            (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_Damage_Reduction_Multiplier_ImplicitCast   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Perks_C::Get_Defensive_Diet_Perk_Damage_Reduction_Curve(double Fed, class UObject* __WorldContext, double* Damage_Reduction_Multiplier, class UCurveFloat* DefensiveDietPerkDamageReductionCurve, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_GetFloatValue_InTime_ImplicitCast, double K2Node_FunctionResult_Damage_Reduction_Multiplier_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Perks_C", "Get Defensive Diet Perk Damage Reduction Curve");

	Params::UBPFL_Perks_C_Get_Defensive_Diet_Perk_Damage_Reduction_Curve_Params Parms{};

	Parms.Fed = Fed;
	Parms.__WorldContext = __WorldContext;
	Parms.DefensiveDietPerkDamageReductionCurve = DefensiveDietPerkDamageReductionCurve;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast = CallFunc_GetFloatValue_InTime_ImplicitCast;
	Parms.K2Node_FunctionResult_Damage_Reduction_Multiplier_ImplicitCast = K2Node_FunctionResult_Damage_Reduction_Multiplier_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Damage_Reduction_Multiplier != nullptr)
		*Damage_Reduction_Multiplier = Parms.Damage_Reduction_Multiplier;

}


// Function BPFL_Perks.BPFL_Perks_C.Get Delirious Perk Missing Rest to Damage Curve
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Missing_Health                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Damage_Multiplier                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 DeliriousPerkRestToDamageCurve                                   (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_Damage_Multiplier_ImplicitCast             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Perks_C::Get_Delirious_Perk_Missing_Rest_to_Damage_Curve(double Missing_Health, class UObject* __WorldContext, double* Damage_Multiplier, class UCurveFloat* DeliriousPerkRestToDamageCurve, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_GetFloatValue_InTime_ImplicitCast, double K2Node_FunctionResult_Damage_Multiplier_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Perks_C", "Get Delirious Perk Missing Rest to Damage Curve");

	Params::UBPFL_Perks_C_Get_Delirious_Perk_Missing_Rest_to_Damage_Curve_Params Parms{};

	Parms.Missing_Health = Missing_Health;
	Parms.__WorldContext = __WorldContext;
	Parms.DeliriousPerkRestToDamageCurve = DeliriousPerkRestToDamageCurve;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast = CallFunc_GetFloatValue_InTime_ImplicitCast;
	Parms.K2Node_FunctionResult_Damage_Multiplier_ImplicitCast = K2Node_FunctionResult_Damage_Multiplier_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Damage_Multiplier != nullptr)
		*Damage_Multiplier = Parms.Damage_Multiplier;

}


// Function BPFL_Perks.BPFL_Perks_C.Get Ram on Block Perk Shove Damage Divisor
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             ShoveDamageDivisor                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Perks_C::Get_Ram_on_Block_Perk_Shove_Damage_Divisor(class UObject* __WorldContext, double* ShoveDamageDivisor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Perks_C", "Get Ram on Block Perk Shove Damage Divisor");

	Params::UBPFL_Perks_C_Get_Ram_on_Block_Perk_Shove_Damage_Divisor_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (ShoveDamageDivisor != nullptr)
		*ShoveDamageDivisor = Parms.ShoveDamageDivisor;

}


// Function BPFL_Perks.BPFL_Perks_C.Get Called Shot Perk Base Damage Divisor
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             BaseDamageDivisor                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Perks_C::Get_Called_Shot_Perk_Base_Damage_Divisor(class UObject* __WorldContext, double* BaseDamageDivisor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Perks_C", "Get Called Shot Perk Base Damage Divisor");

	Params::UBPFL_Perks_C_Get_Called_Shot_Perk_Base_Damage_Divisor_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (BaseDamageDivisor != nullptr)
		*BaseDamageDivisor = Parms.BaseDamageDivisor;

}


// Function BPFL_Perks.BPFL_Perks_C.Get Ram On Block Perk Shove Strength Multiplier
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Shove_Strength_Multiplier                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Perks_C::Get_Ram_On_Block_Perk_Shove_Strength_Multiplier(class UObject* __WorldContext, double* Shove_Strength_Multiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Perks_C", "Get Ram On Block Perk Shove Strength Multiplier");

	Params::UBPFL_Perks_C_Get_Ram_On_Block_Perk_Shove_Strength_Multiplier_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Shove_Strength_Multiplier != nullptr)
		*Shove_Strength_Multiplier = Parms.Shove_Strength_Multiplier;

}


// Function BPFL_Perks.BPFL_Perks_C.Get Called Shot Perk Crit Multiplier
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Crit_Multiplier                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Perks_C::Get_Called_Shot_Perk_Crit_Multiplier(class UObject* __WorldContext, double* Crit_Multiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Perks_C", "Get Called Shot Perk Crit Multiplier");

	Params::UBPFL_Perks_C_Get_Called_Shot_Perk_Crit_Multiplier_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Crit_Multiplier != nullptr)
		*Crit_Multiplier = Parms.Crit_Multiplier;

}


// Function BPFL_Perks.BPFL_Perks_C.Get Brute Force Perk Maul Damage Multiplier
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             DamageMultiplier                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Perks_C::Get_Brute_Force_Perk_Maul_Damage_Multiplier(class UObject* __WorldContext, double* DamageMultiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Perks_C", "Get Brute Force Perk Maul Damage Multiplier");

	Params::UBPFL_Perks_C_Get_Brute_Force_Perk_Maul_Damage_Multiplier_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (DamageMultiplier != nullptr)
		*DamageMultiplier = Parms.DamageMultiplier;

}


// Function BPFL_Perks.BPFL_Perks_C.Get Prehistoric Warfare Perk Damage Multiplier
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Damage_Multiplier                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Perks_C::Get_Prehistoric_Warfare_Perk_Damage_Multiplier(class UObject* __WorldContext, double* Damage_Multiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Perks_C", "Get Prehistoric Warfare Perk Damage Multiplier");

	Params::UBPFL_Perks_C_Get_Prehistoric_Warfare_Perk_Damage_Multiplier_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Damage_Multiplier != nullptr)
		*Damage_Multiplier = Parms.Damage_Multiplier;

}


// Function BPFL_Perks.BPFL_Perks_C.Get Brute Force Perk Crit Divisor
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CritDivisor                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Perks_C::Get_Brute_Force_Perk_Crit_Divisor(class UObject* __WorldContext, double* CritDivisor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Perks_C", "Get Brute Force Perk Crit Divisor");

	Params::UBPFL_Perks_C_Get_Brute_Force_Perk_Crit_Divisor_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (CritDivisor != nullptr)
		*CritDivisor = Parms.CritDivisor;

}


// Function BPFL_Perks.BPFL_Perks_C.Get Prehistoric Warfare Perk Tool Durability Divisor
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             DurabilityDivisor                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Perks_C::Get_Prehistoric_Warfare_Perk_Tool_Durability_Divisor(class UObject* __WorldContext, double* DurabilityDivisor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Perks_C", "Get Prehistoric Warfare Perk Tool Durability Divisor");

	Params::UBPFL_Perks_C_Get_Prehistoric_Warfare_Perk_Tool_Durability_Divisor_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (DurabilityDivisor != nullptr)
		*DurabilityDivisor = Parms.DurabilityDivisor;

}


// Function BPFL_Perks.BPFL_Perks_C.Get Thief Perk Drop Chance
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Drop_Chance                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Perks_C::Get_Thief_Perk_Drop_Chance(class UObject* __WorldContext, double* Drop_Chance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Perks_C", "Get Thief Perk Drop Chance");

	Params::UBPFL_Perks_C_Get_Thief_Perk_Drop_Chance_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Drop_Chance != nullptr)
		*Drop_Chance = Parms.Drop_Chance;

}


// Function BPFL_Perks.BPFL_Perks_C.Get Acupuncture Perk Hit Threshold
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Threshold                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Perks_C::Get_Acupuncture_Perk_Hit_Threshold(class UObject* __WorldContext, int32* Threshold)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Perks_C", "Get Acupuncture Perk Hit Threshold");

	Params::UBPFL_Perks_C_Get_Acupuncture_Perk_Hit_Threshold_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Threshold != nullptr)
		*Threshold = Parms.Threshold;

}


// Function BPFL_Perks.BPFL_Perks_C.Get Charge Perk Partial Damage Degree Threshold
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Threshold                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Perks_C::Get_Charge_Perk_Partial_Damage_Degree_Threshold(class UObject* __WorldContext, double* Threshold)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Perks_C", "Get Charge Perk Partial Damage Degree Threshold");

	Params::UBPFL_Perks_C_Get_Charge_Perk_Partial_Damage_Degree_Threshold_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Threshold != nullptr)
		*Threshold = Parms.Threshold;

}


// Function BPFL_Perks.BPFL_Perks_C.Get Charge Perk Full Damage Degree Threshold
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Threshold                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Perks_C::Get_Charge_Perk_Full_Damage_Degree_Threshold(class UObject* __WorldContext, double* Threshold)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Perks_C", "Get Charge Perk Full Damage Degree Threshold");

	Params::UBPFL_Perks_C_Get_Charge_Perk_Full_Damage_Degree_Threshold_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Threshold != nullptr)
		*Threshold = Parms.Threshold;

}


// Function BPFL_Perks.BPFL_Perks_C.Get Essence Fisher Perk Drop Chance
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Drop_Chance                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Perks_C::Get_Essence_Fisher_Perk_Drop_Chance(class UObject* __WorldContext, double* Drop_Chance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Perks_C", "Get Essence Fisher Perk Drop Chance");

	Params::UBPFL_Perks_C_Get_Essence_Fisher_Perk_Drop_Chance_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Drop_Chance != nullptr)
		*Drop_Chance = Parms.Drop_Chance;

}


// Function BPFL_Perks.BPFL_Perks_C.Get Blood Magic Perk Max Health Cost Percentage
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Health_Cost                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Perks_C::Get_Blood_Magic_Perk_Max_Health_Cost_Percentage(class UObject* __WorldContext, double* Health_Cost)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Perks_C", "Get Blood Magic Perk Max Health Cost Percentage");

	Params::UBPFL_Perks_C_Get_Blood_Magic_Perk_Max_Health_Cost_Percentage_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Health_Cost != nullptr)
		*Health_Cost = Parms.Health_Cost;

}


// Function BPFL_Perks.BPFL_Perks_C.Get Master Blaster Perk Max Health Percentage
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Max_Health_Percentage                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Perks_C::Get_Master_Blaster_Perk_Max_Health_Percentage(class UObject* __WorldContext, double* Max_Health_Percentage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Perks_C", "Get Master Blaster Perk Max Health Percentage");

	Params::UBPFL_Perks_C_Get_Master_Blaster_Perk_Max_Health_Percentage_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Max_Health_Percentage != nullptr)
		*Max_Health_Percentage = Parms.Max_Health_Percentage;

}


// Function BPFL_Perks.BPFL_Perks_C.Get Cutthroat Perk Health Threshold
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Threshold                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Perks_C::Get_Cutthroat_Perk_Health_Threshold(class UObject* __WorldContext, double* Threshold)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Perks_C", "Get Cutthroat Perk Health Threshold");

	Params::UBPFL_Perks_C_Get_Cutthroat_Perk_Health_Threshold_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Threshold != nullptr)
		*Threshold = Parms.Threshold;

}


// Function BPFL_Perks.BPFL_Perks_C.Get Delirious Perk Rest Threshold
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Threshold                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Perks_C::Get_Delirious_Perk_Rest_Threshold(class UObject* __WorldContext, double* Threshold)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Perks_C", "Get Delirious Perk Rest Threshold");

	Params::UBPFL_Perks_C_Get_Delirious_Perk_Rest_Threshold_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Threshold != nullptr)
		*Threshold = Parms.Threshold;

}


// Function BPFL_Perks.BPFL_Perks_C.Get Proficiency Perk Weapon Type Threshold
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Threshold                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Perks_C::Get_Proficiency_Perk_Weapon_Type_Threshold(class UObject* __WorldContext, int32* Threshold)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Perks_C", "Get Proficiency Perk Weapon Type Threshold");

	Params::UBPFL_Perks_C_Get_Proficiency_Perk_Weapon_Type_Threshold_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Threshold != nullptr)
		*Threshold = Parms.Threshold;

}


// Function BPFL_Perks.BPFL_Perks_C.Get Berserker Perk Missing Health to Damage Curve
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Missing_Health                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Damage_Multiplier                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 BerserkerPerkHealthToDamageCurve                                 (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_Damage_Multiplier_ImplicitCast             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Perks_C::Get_Berserker_Perk_Missing_Health_to_Damage_Curve(double Missing_Health, class UObject* __WorldContext, double* Damage_Multiplier, class UCurveFloat* BerserkerPerkHealthToDamageCurve, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_GetFloatValue_InTime_ImplicitCast, double K2Node_FunctionResult_Damage_Multiplier_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Perks_C", "Get Berserker Perk Missing Health to Damage Curve");

	Params::UBPFL_Perks_C_Get_Berserker_Perk_Missing_Health_to_Damage_Curve_Params Parms{};

	Parms.Missing_Health = Missing_Health;
	Parms.__WorldContext = __WorldContext;
	Parms.BerserkerPerkHealthToDamageCurve = BerserkerPerkHealthToDamageCurve;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast = CallFunc_GetFloatValue_InTime_ImplicitCast;
	Parms.K2Node_FunctionResult_Damage_Multiplier_ImplicitCast = K2Node_FunctionResult_Damage_Multiplier_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Damage_Multiplier != nullptr)
		*Damage_Multiplier = Parms.Damage_Multiplier;

}


// Function BPFL_Perks.BPFL_Perks_C.Get Desperate Blow Perk Health Threshold
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Threshold                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Perks_C::Get_Desperate_Blow_Perk_Health_Threshold(class UObject* __WorldContext, double* Threshold)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Perks_C", "Get Desperate Blow Perk Health Threshold");

	Params::UBPFL_Perks_C_Get_Desperate_Blow_Perk_Health_Threshold_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Threshold != nullptr)
		*Threshold = Parms.Threshold;

}


// Function BPFL_Perks.BPFL_Perks_C.Get Collector Perk Kill Threshold
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Kill_Threshold                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Perks_C::Get_Collector_Perk_Kill_Threshold(class UObject* __WorldContext, int32* Kill_Threshold)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Perks_C", "Get Collector Perk Kill Threshold");

	Params::UBPFL_Perks_C_Get_Collector_Perk_Kill_Threshold_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Kill_Threshold != nullptr)
		*Kill_Threshold = Parms.Kill_Threshold;

}


// Function BPFL_Perks.BPFL_Perks_C.Get Spotter Perk Damage Multiplier
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             DamageMultiplier                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Perks_C::Get_Spotter_Perk_Damage_Multiplier(class UObject* __WorldContext, double* DamageMultiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Perks_C", "Get Spotter Perk Damage Multiplier");

	Params::UBPFL_Perks_C_Get_Spotter_Perk_Damage_Multiplier_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (DamageMultiplier != nullptr)
		*DamageMultiplier = Parms.DamageMultiplier;

}


// Function BPFL_Perks.BPFL_Perks_C.Get Blood Magic Perk Magic Power Multiplier
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             PowerMultiplier                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Perks_C::Get_Blood_Magic_Perk_Magic_Power_Multiplier(class UObject* __WorldContext, double* PowerMultiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Perks_C", "Get Blood Magic Perk Magic Power Multiplier");

	Params::UBPFL_Perks_C_Get_Blood_Magic_Perk_Magic_Power_Multiplier_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (PowerMultiplier != nullptr)
		*PowerMultiplier = Parms.PowerMultiplier;

}


// Function BPFL_Perks.BPFL_Perks_C.Get Just Passing By Perk Damage Divisor
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             DamageDivisor                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Perks_C::Get_Just_Passing_By_Perk_Damage_Divisor(class UObject* __WorldContext, double* DamageDivisor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Perks_C", "Get Just Passing By Perk Damage Divisor");

	Params::UBPFL_Perks_C_Get_Just_Passing_By_Perk_Damage_Divisor_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (DamageDivisor != nullptr)
		*DamageDivisor = Parms.DamageDivisor;

}


// Function BPFL_Perks.BPFL_Perks_C.Get Pugilist Perk Glove Power Divisor
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             GlovePowerDivisor                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Perks_C::Get_Pugilist_Perk_Glove_Power_Divisor(class UObject* __WorldContext, double* GlovePowerDivisor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Perks_C", "Get Pugilist Perk Glove Power Divisor");

	Params::UBPFL_Perks_C_Get_Pugilist_Perk_Glove_Power_Divisor_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (GlovePowerDivisor != nullptr)
		*GlovePowerDivisor = Parms.GlovePowerDivisor;

}


// Function BPFL_Perks.BPFL_Perks_C.Get Sniper Perk Damage Multiplier
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             DamageMultiplier                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Perks_C::Get_Sniper_Perk_Damage_Multiplier(class UObject* __WorldContext, double* DamageMultiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Perks_C", "Get Sniper Perk Damage Multiplier");

	Params::UBPFL_Perks_C_Get_Sniper_Perk_Damage_Multiplier_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (DamageMultiplier != nullptr)
		*DamageMultiplier = Parms.DamageMultiplier;

}


// Function BPFL_Perks.BPFL_Perks_C.Get Assassin Perk Damage Multiplier
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             DamageMultiplier                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Perks_C::Get_Assassin_Perk_Damage_Multiplier(class UObject* __WorldContext, double* DamageMultiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Perks_C", "Get Assassin Perk Damage Multiplier");

	Params::UBPFL_Perks_C_Get_Assassin_Perk_Damage_Multiplier_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (DamageMultiplier != nullptr)
		*DamageMultiplier = Parms.DamageMultiplier;

}


// Function BPFL_Perks.BPFL_Perks_C.Get Kick Them While Theyre Down Perk Damage Multiplier
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             DamageMultiplier                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Perks_C::Get_Kick_Them_While_Theyre_Down_Perk_Damage_Multiplier(class UObject* __WorldContext, double* DamageMultiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Perks_C", "Get Kick Them While Theyre Down Perk Damage Multiplier");

	Params::UBPFL_Perks_C_Get_Kick_Them_While_Theyre_Down_Perk_Damage_Multiplier_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (DamageMultiplier != nullptr)
		*DamageMultiplier = Parms.DamageMultiplier;

}


// Function BPFL_Perks.BPFL_Perks_C.Get Sneak Attack Perk Damage Multiplier
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             DamageMultiplier                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Perks_C::Get_Sneak_Attack_Perk_Damage_Multiplier(class UObject* __WorldContext, double* DamageMultiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Perks_C", "Get Sneak Attack Perk Damage Multiplier");

	Params::UBPFL_Perks_C_Get_Sneak_Attack_Perk_Damage_Multiplier_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (DamageMultiplier != nullptr)
		*DamageMultiplier = Parms.DamageMultiplier;

}

}


