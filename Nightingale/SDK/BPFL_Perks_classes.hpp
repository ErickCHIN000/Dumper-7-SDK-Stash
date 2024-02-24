#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_Perks.BPFL_Perks_C
class UBPFL_Perks_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_Perks_C* GetDefaultObj();

	void Get_Master_Blaster_Perk_Max_Stamina_Percentage(class UObject* __WorldContext, double* Max_Stamina_Percentage);
	void Get_Master_Blaster_Perk_Effect_Duration_Value(class UObject* __WorldContext, double* Duration);
	void Get_Healing_Touch_Perk_Maximum_Heal_Value(class UObject* __WorldContext, double* Maximum_Heal);
	void Get_Supply_Lines_Perk_Chance(class UObject* __WorldContext, double* Chance);
	void Get_Herborist_Perk_Yield_Bonus_Value(class UObject* __WorldContext, int32* YieldBonus);
	void Get_Acupuncture_Perk_Weapon_Damage_Multiplier(class UObject* __WorldContext, double* Weapon_Damage_Multiplier);
	void Get_Spiky_Block_Perk_Weapon_Damage_Multiplier(class UObject* __WorldContext, double* Percentage);
	void Get_Acupuncture_Poison_Damage_Per_Second_Value(class UObject* __WorldContext, double* DamagePerSecond);
	void Get_Vegetarian_Poison_Damage_Per_Second_Value(class UObject* __WorldContext, double* DamagePerSecond);
	void Get_Charge_Perk_Velocity_Curve(double Velocity, class UObject* __WorldContext, double* Damage_Multiplier, class UCurveFloat* ChargePerkVelocityCurve, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_GetFloatValue_InTime_ImplicitCast, double K2Node_FunctionResult_Damage_Multiplier_ImplicitCast);
	void Get_Healing_Touch_Perk_Dealing_Multiplication_Curve(double Magic_Power, class UObject* __WorldContext, double* Healing_Multiplier, class UCurveFloat* HealingTouchPerkMagicPowerCurve, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_GetFloatValue_InTime_ImplicitCast, double K2Node_FunctionResult_Healing_Multiplier_ImplicitCast);
	void Get_Defensive_Diet_Perk_Damage_Reduction_Curve(double Fed, class UObject* __WorldContext, double* Damage_Reduction_Multiplier, class UCurveFloat* DefensiveDietPerkDamageReductionCurve, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_GetFloatValue_InTime_ImplicitCast, double K2Node_FunctionResult_Damage_Reduction_Multiplier_ImplicitCast);
	void Get_Delirious_Perk_Missing_Rest_to_Damage_Curve(double Missing_Health, class UObject* __WorldContext, double* Damage_Multiplier, class UCurveFloat* DeliriousPerkRestToDamageCurve, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_GetFloatValue_InTime_ImplicitCast, double K2Node_FunctionResult_Damage_Multiplier_ImplicitCast);
	void Get_Ram_on_Block_Perk_Shove_Damage_Divisor(class UObject* __WorldContext, double* ShoveDamageDivisor);
	void Get_Called_Shot_Perk_Base_Damage_Divisor(class UObject* __WorldContext, double* BaseDamageDivisor);
	void Get_Ram_On_Block_Perk_Shove_Strength_Multiplier(class UObject* __WorldContext, double* Shove_Strength_Multiplier);
	void Get_Called_Shot_Perk_Crit_Multiplier(class UObject* __WorldContext, double* Crit_Multiplier);
	void Get_Brute_Force_Perk_Maul_Damage_Multiplier(class UObject* __WorldContext, double* DamageMultiplier);
	void Get_Prehistoric_Warfare_Perk_Damage_Multiplier(class UObject* __WorldContext, double* Damage_Multiplier);
	void Get_Brute_Force_Perk_Crit_Divisor(class UObject* __WorldContext, double* CritDivisor);
	void Get_Prehistoric_Warfare_Perk_Tool_Durability_Divisor(class UObject* __WorldContext, double* DurabilityDivisor);
	void Get_Thief_Perk_Drop_Chance(class UObject* __WorldContext, double* Drop_Chance);
	void Get_Acupuncture_Perk_Hit_Threshold(class UObject* __WorldContext, int32* Threshold);
	void Get_Charge_Perk_Partial_Damage_Degree_Threshold(class UObject* __WorldContext, double* Threshold);
	void Get_Charge_Perk_Full_Damage_Degree_Threshold(class UObject* __WorldContext, double* Threshold);
	void Get_Essence_Fisher_Perk_Drop_Chance(class UObject* __WorldContext, double* Drop_Chance);
	void Get_Blood_Magic_Perk_Max_Health_Cost_Percentage(class UObject* __WorldContext, double* Health_Cost);
	void Get_Master_Blaster_Perk_Max_Health_Percentage(class UObject* __WorldContext, double* Max_Health_Percentage);
	void Get_Cutthroat_Perk_Health_Threshold(class UObject* __WorldContext, double* Threshold);
	void Get_Delirious_Perk_Rest_Threshold(class UObject* __WorldContext, double* Threshold);
	void Get_Proficiency_Perk_Weapon_Type_Threshold(class UObject* __WorldContext, int32* Threshold);
	void Get_Berserker_Perk_Missing_Health_to_Damage_Curve(double Missing_Health, class UObject* __WorldContext, double* Damage_Multiplier, class UCurveFloat* BerserkerPerkHealthToDamageCurve, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_GetFloatValue_InTime_ImplicitCast, double K2Node_FunctionResult_Damage_Multiplier_ImplicitCast);
	void Get_Desperate_Blow_Perk_Health_Threshold(class UObject* __WorldContext, double* Threshold);
	void Get_Collector_Perk_Kill_Threshold(class UObject* __WorldContext, int32* Kill_Threshold);
	void Get_Spotter_Perk_Damage_Multiplier(class UObject* __WorldContext, double* DamageMultiplier);
	void Get_Blood_Magic_Perk_Magic_Power_Multiplier(class UObject* __WorldContext, double* PowerMultiplier);
	void Get_Just_Passing_By_Perk_Damage_Divisor(class UObject* __WorldContext, double* DamageDivisor);
	void Get_Pugilist_Perk_Glove_Power_Divisor(class UObject* __WorldContext, double* GlovePowerDivisor);
	void Get_Sniper_Perk_Damage_Multiplier(class UObject* __WorldContext, double* DamageMultiplier);
	void Get_Assassin_Perk_Damage_Multiplier(class UObject* __WorldContext, double* DamageMultiplier);
	void Get_Kick_Them_While_Theyre_Down_Perk_Damage_Multiplier(class UObject* __WorldContext, double* DamageMultiplier);
	void Get_Sneak_Attack_Perk_Damage_Multiplier(class UObject* __WorldContext, double* DamageMultiplier);
};

}


