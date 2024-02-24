#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Save_Difficulties.Save_Difficulties_C
// (None)

class UClass* USave_Difficulties_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Save_Difficulties_C");

	return Clss;
}


// Save_Difficulties_C Save_Difficulties.Default__Save_Difficulties_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USave_Difficulties_C* USave_Difficulties_C::GetDefaultObj()
{
	static class USave_Difficulties_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USave_Difficulties_C*>(USave_Difficulties_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Save_Difficulties.Save_Difficulties_C.SaveDifficulties
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetFloatCVar_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue_8                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue_9                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue_10                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue_11                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue_12                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue_13                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue_14                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue_15                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue_16                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue_17                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue_18                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue_19                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue_20                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBoolCVar_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBoolCVar_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue_21                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue_22                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue_23                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue_24                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue_25                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBoolCVar_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue_26                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue_27                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue_28                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue_29                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue_30                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue_31                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue_32                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue_33                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue_34                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue_35                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue_36                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue_37                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue_38                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue_39                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBoolCVar_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue_40                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBoolCVar_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBoolCVar_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_BanditCampMultiplier_ImplicitCast             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_ScavengerHealth_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_ScavengerCampMultiplier_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_BanditHealth_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_ZombieDamage_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_ZombieSpeed_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_ZombieHealth_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_ZombieAmount_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_ZombieBossAmount_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_ScalingDamage_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_ScalingHealth_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_NightBrightness_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_InfestationsHealth_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_InfestationsMultiplier_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_AnimalAmount_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_MilitaryHealth_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_MilitaryCampMultiplier_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_StaminaRecoveryMultiplier_ImplicitCast        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_StaminaMultiplier_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_AiRespawnTimer_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_RandomEventMultiplier_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_MaximumAirdrop_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_MinimumAirdrop_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_NightLength_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_DayLength_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_DamageMultiplier_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_FuelMultiplier_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_ThirstMultiplier_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_HungerMultiplier_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_XpMultiplier_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USave_Difficulties_C::SaveDifficulties(float CallFunc_GetFloatCVar_ReturnValue, float CallFunc_GetFloatCVar_ReturnValue_1, float CallFunc_GetFloatCVar_ReturnValue_2, float CallFunc_GetFloatCVar_ReturnValue_3, float CallFunc_GetFloatCVar_ReturnValue_4, float CallFunc_GetFloatCVar_ReturnValue_5, float CallFunc_GetFloatCVar_ReturnValue_6, float CallFunc_GetFloatCVar_ReturnValue_7, float CallFunc_GetFloatCVar_ReturnValue_8, float CallFunc_GetFloatCVar_ReturnValue_9, float CallFunc_GetFloatCVar_ReturnValue_10, float CallFunc_GetFloatCVar_ReturnValue_11, float CallFunc_GetFloatCVar_ReturnValue_12, float CallFunc_GetFloatCVar_ReturnValue_13, float CallFunc_GetFloatCVar_ReturnValue_14, float CallFunc_GetFloatCVar_ReturnValue_15, float CallFunc_GetFloatCVar_ReturnValue_16, float CallFunc_GetFloatCVar_ReturnValue_17, float CallFunc_GetFloatCVar_ReturnValue_18, float CallFunc_GetFloatCVar_ReturnValue_19, float CallFunc_GetFloatCVar_ReturnValue_20, bool CallFunc_GetBoolCVar_ReturnValue, bool CallFunc_GetBoolCVar_ReturnValue_1, float CallFunc_GetFloatCVar_ReturnValue_21, float CallFunc_GetFloatCVar_ReturnValue_22, float CallFunc_GetFloatCVar_ReturnValue_23, float CallFunc_GetFloatCVar_ReturnValue_24, float CallFunc_GetFloatCVar_ReturnValue_25, bool CallFunc_GetBoolCVar_ReturnValue_2, float CallFunc_GetFloatCVar_ReturnValue_26, float CallFunc_GetFloatCVar_ReturnValue_27, float CallFunc_GetFloatCVar_ReturnValue_28, float CallFunc_GetFloatCVar_ReturnValue_29, float CallFunc_GetFloatCVar_ReturnValue_30, float CallFunc_GetFloatCVar_ReturnValue_31, float CallFunc_GetFloatCVar_ReturnValue_32, float CallFunc_GetFloatCVar_ReturnValue_33, float CallFunc_GetFloatCVar_ReturnValue_34, float CallFunc_GetFloatCVar_ReturnValue_35, float CallFunc_GetFloatCVar_ReturnValue_36, float CallFunc_GetFloatCVar_ReturnValue_37, float CallFunc_GetFloatCVar_ReturnValue_38, float CallFunc_GetFloatCVar_ReturnValue_39, bool CallFunc_GetBoolCVar_ReturnValue_3, float CallFunc_GetFloatCVar_ReturnValue_40, bool CallFunc_GetBoolCVar_ReturnValue_4, bool CallFunc_GetBoolCVar_ReturnValue_5, double K2Node_VariableSet_BanditCampMultiplier_ImplicitCast, double K2Node_VariableSet_ScavengerHealth_ImplicitCast, double K2Node_VariableSet_ScavengerCampMultiplier_ImplicitCast, double K2Node_VariableSet_BanditHealth_ImplicitCast, double K2Node_VariableSet_ZombieDamage_ImplicitCast, double K2Node_VariableSet_ZombieSpeed_ImplicitCast, double K2Node_VariableSet_ZombieHealth_ImplicitCast, double K2Node_VariableSet_ZombieAmount_ImplicitCast, double K2Node_VariableSet_ZombieBossAmount_ImplicitCast, double K2Node_VariableSet_ScalingDamage_ImplicitCast, double K2Node_VariableSet_ScalingHealth_ImplicitCast, double K2Node_VariableSet_NightBrightness_ImplicitCast, double K2Node_VariableSet_InfestationsHealth_ImplicitCast, double K2Node_VariableSet_InfestationsMultiplier_ImplicitCast, double K2Node_VariableSet_AnimalAmount_ImplicitCast, double K2Node_VariableSet_MilitaryHealth_ImplicitCast, double K2Node_VariableSet_MilitaryCampMultiplier_ImplicitCast, double K2Node_VariableSet_StaminaRecoveryMultiplier_ImplicitCast, double K2Node_VariableSet_StaminaMultiplier_ImplicitCast, double K2Node_VariableSet_AiRespawnTimer_ImplicitCast, double K2Node_VariableSet_RandomEventMultiplier_ImplicitCast, double K2Node_VariableSet_MaximumAirdrop_ImplicitCast, double K2Node_VariableSet_MinimumAirdrop_ImplicitCast, double K2Node_VariableSet_NightLength_ImplicitCast, double K2Node_VariableSet_DayLength_ImplicitCast, double K2Node_VariableSet_DamageMultiplier_ImplicitCast, double K2Node_VariableSet_FuelMultiplier_ImplicitCast, double K2Node_VariableSet_ThirstMultiplier_ImplicitCast, double K2Node_VariableSet_HungerMultiplier_ImplicitCast, double K2Node_VariableSet_XpMultiplier_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Save_Difficulties_C", "SaveDifficulties");

	Params::USave_Difficulties_C_SaveDifficulties_Params Parms{};

	Parms.CallFunc_GetFloatCVar_ReturnValue = CallFunc_GetFloatCVar_ReturnValue;
	Parms.CallFunc_GetFloatCVar_ReturnValue_1 = CallFunc_GetFloatCVar_ReturnValue_1;
	Parms.CallFunc_GetFloatCVar_ReturnValue_2 = CallFunc_GetFloatCVar_ReturnValue_2;
	Parms.CallFunc_GetFloatCVar_ReturnValue_3 = CallFunc_GetFloatCVar_ReturnValue_3;
	Parms.CallFunc_GetFloatCVar_ReturnValue_4 = CallFunc_GetFloatCVar_ReturnValue_4;
	Parms.CallFunc_GetFloatCVar_ReturnValue_5 = CallFunc_GetFloatCVar_ReturnValue_5;
	Parms.CallFunc_GetFloatCVar_ReturnValue_6 = CallFunc_GetFloatCVar_ReturnValue_6;
	Parms.CallFunc_GetFloatCVar_ReturnValue_7 = CallFunc_GetFloatCVar_ReturnValue_7;
	Parms.CallFunc_GetFloatCVar_ReturnValue_8 = CallFunc_GetFloatCVar_ReturnValue_8;
	Parms.CallFunc_GetFloatCVar_ReturnValue_9 = CallFunc_GetFloatCVar_ReturnValue_9;
	Parms.CallFunc_GetFloatCVar_ReturnValue_10 = CallFunc_GetFloatCVar_ReturnValue_10;
	Parms.CallFunc_GetFloatCVar_ReturnValue_11 = CallFunc_GetFloatCVar_ReturnValue_11;
	Parms.CallFunc_GetFloatCVar_ReturnValue_12 = CallFunc_GetFloatCVar_ReturnValue_12;
	Parms.CallFunc_GetFloatCVar_ReturnValue_13 = CallFunc_GetFloatCVar_ReturnValue_13;
	Parms.CallFunc_GetFloatCVar_ReturnValue_14 = CallFunc_GetFloatCVar_ReturnValue_14;
	Parms.CallFunc_GetFloatCVar_ReturnValue_15 = CallFunc_GetFloatCVar_ReturnValue_15;
	Parms.CallFunc_GetFloatCVar_ReturnValue_16 = CallFunc_GetFloatCVar_ReturnValue_16;
	Parms.CallFunc_GetFloatCVar_ReturnValue_17 = CallFunc_GetFloatCVar_ReturnValue_17;
	Parms.CallFunc_GetFloatCVar_ReturnValue_18 = CallFunc_GetFloatCVar_ReturnValue_18;
	Parms.CallFunc_GetFloatCVar_ReturnValue_19 = CallFunc_GetFloatCVar_ReturnValue_19;
	Parms.CallFunc_GetFloatCVar_ReturnValue_20 = CallFunc_GetFloatCVar_ReturnValue_20;
	Parms.CallFunc_GetBoolCVar_ReturnValue = CallFunc_GetBoolCVar_ReturnValue;
	Parms.CallFunc_GetBoolCVar_ReturnValue_1 = CallFunc_GetBoolCVar_ReturnValue_1;
	Parms.CallFunc_GetFloatCVar_ReturnValue_21 = CallFunc_GetFloatCVar_ReturnValue_21;
	Parms.CallFunc_GetFloatCVar_ReturnValue_22 = CallFunc_GetFloatCVar_ReturnValue_22;
	Parms.CallFunc_GetFloatCVar_ReturnValue_23 = CallFunc_GetFloatCVar_ReturnValue_23;
	Parms.CallFunc_GetFloatCVar_ReturnValue_24 = CallFunc_GetFloatCVar_ReturnValue_24;
	Parms.CallFunc_GetFloatCVar_ReturnValue_25 = CallFunc_GetFloatCVar_ReturnValue_25;
	Parms.CallFunc_GetBoolCVar_ReturnValue_2 = CallFunc_GetBoolCVar_ReturnValue_2;
	Parms.CallFunc_GetFloatCVar_ReturnValue_26 = CallFunc_GetFloatCVar_ReturnValue_26;
	Parms.CallFunc_GetFloatCVar_ReturnValue_27 = CallFunc_GetFloatCVar_ReturnValue_27;
	Parms.CallFunc_GetFloatCVar_ReturnValue_28 = CallFunc_GetFloatCVar_ReturnValue_28;
	Parms.CallFunc_GetFloatCVar_ReturnValue_29 = CallFunc_GetFloatCVar_ReturnValue_29;
	Parms.CallFunc_GetFloatCVar_ReturnValue_30 = CallFunc_GetFloatCVar_ReturnValue_30;
	Parms.CallFunc_GetFloatCVar_ReturnValue_31 = CallFunc_GetFloatCVar_ReturnValue_31;
	Parms.CallFunc_GetFloatCVar_ReturnValue_32 = CallFunc_GetFloatCVar_ReturnValue_32;
	Parms.CallFunc_GetFloatCVar_ReturnValue_33 = CallFunc_GetFloatCVar_ReturnValue_33;
	Parms.CallFunc_GetFloatCVar_ReturnValue_34 = CallFunc_GetFloatCVar_ReturnValue_34;
	Parms.CallFunc_GetFloatCVar_ReturnValue_35 = CallFunc_GetFloatCVar_ReturnValue_35;
	Parms.CallFunc_GetFloatCVar_ReturnValue_36 = CallFunc_GetFloatCVar_ReturnValue_36;
	Parms.CallFunc_GetFloatCVar_ReturnValue_37 = CallFunc_GetFloatCVar_ReturnValue_37;
	Parms.CallFunc_GetFloatCVar_ReturnValue_38 = CallFunc_GetFloatCVar_ReturnValue_38;
	Parms.CallFunc_GetFloatCVar_ReturnValue_39 = CallFunc_GetFloatCVar_ReturnValue_39;
	Parms.CallFunc_GetBoolCVar_ReturnValue_3 = CallFunc_GetBoolCVar_ReturnValue_3;
	Parms.CallFunc_GetFloatCVar_ReturnValue_40 = CallFunc_GetFloatCVar_ReturnValue_40;
	Parms.CallFunc_GetBoolCVar_ReturnValue_4 = CallFunc_GetBoolCVar_ReturnValue_4;
	Parms.CallFunc_GetBoolCVar_ReturnValue_5 = CallFunc_GetBoolCVar_ReturnValue_5;
	Parms.K2Node_VariableSet_BanditCampMultiplier_ImplicitCast = K2Node_VariableSet_BanditCampMultiplier_ImplicitCast;
	Parms.K2Node_VariableSet_ScavengerHealth_ImplicitCast = K2Node_VariableSet_ScavengerHealth_ImplicitCast;
	Parms.K2Node_VariableSet_ScavengerCampMultiplier_ImplicitCast = K2Node_VariableSet_ScavengerCampMultiplier_ImplicitCast;
	Parms.K2Node_VariableSet_BanditHealth_ImplicitCast = K2Node_VariableSet_BanditHealth_ImplicitCast;
	Parms.K2Node_VariableSet_ZombieDamage_ImplicitCast = K2Node_VariableSet_ZombieDamage_ImplicitCast;
	Parms.K2Node_VariableSet_ZombieSpeed_ImplicitCast = K2Node_VariableSet_ZombieSpeed_ImplicitCast;
	Parms.K2Node_VariableSet_ZombieHealth_ImplicitCast = K2Node_VariableSet_ZombieHealth_ImplicitCast;
	Parms.K2Node_VariableSet_ZombieAmount_ImplicitCast = K2Node_VariableSet_ZombieAmount_ImplicitCast;
	Parms.K2Node_VariableSet_ZombieBossAmount_ImplicitCast = K2Node_VariableSet_ZombieBossAmount_ImplicitCast;
	Parms.K2Node_VariableSet_ScalingDamage_ImplicitCast = K2Node_VariableSet_ScalingDamage_ImplicitCast;
	Parms.K2Node_VariableSet_ScalingHealth_ImplicitCast = K2Node_VariableSet_ScalingHealth_ImplicitCast;
	Parms.K2Node_VariableSet_NightBrightness_ImplicitCast = K2Node_VariableSet_NightBrightness_ImplicitCast;
	Parms.K2Node_VariableSet_InfestationsHealth_ImplicitCast = K2Node_VariableSet_InfestationsHealth_ImplicitCast;
	Parms.K2Node_VariableSet_InfestationsMultiplier_ImplicitCast = K2Node_VariableSet_InfestationsMultiplier_ImplicitCast;
	Parms.K2Node_VariableSet_AnimalAmount_ImplicitCast = K2Node_VariableSet_AnimalAmount_ImplicitCast;
	Parms.K2Node_VariableSet_MilitaryHealth_ImplicitCast = K2Node_VariableSet_MilitaryHealth_ImplicitCast;
	Parms.K2Node_VariableSet_MilitaryCampMultiplier_ImplicitCast = K2Node_VariableSet_MilitaryCampMultiplier_ImplicitCast;
	Parms.K2Node_VariableSet_StaminaRecoveryMultiplier_ImplicitCast = K2Node_VariableSet_StaminaRecoveryMultiplier_ImplicitCast;
	Parms.K2Node_VariableSet_StaminaMultiplier_ImplicitCast = K2Node_VariableSet_StaminaMultiplier_ImplicitCast;
	Parms.K2Node_VariableSet_AiRespawnTimer_ImplicitCast = K2Node_VariableSet_AiRespawnTimer_ImplicitCast;
	Parms.K2Node_VariableSet_RandomEventMultiplier_ImplicitCast = K2Node_VariableSet_RandomEventMultiplier_ImplicitCast;
	Parms.K2Node_VariableSet_MaximumAirdrop_ImplicitCast = K2Node_VariableSet_MaximumAirdrop_ImplicitCast;
	Parms.K2Node_VariableSet_MinimumAirdrop_ImplicitCast = K2Node_VariableSet_MinimumAirdrop_ImplicitCast;
	Parms.K2Node_VariableSet_NightLength_ImplicitCast = K2Node_VariableSet_NightLength_ImplicitCast;
	Parms.K2Node_VariableSet_DayLength_ImplicitCast = K2Node_VariableSet_DayLength_ImplicitCast;
	Parms.K2Node_VariableSet_DamageMultiplier_ImplicitCast = K2Node_VariableSet_DamageMultiplier_ImplicitCast;
	Parms.K2Node_VariableSet_FuelMultiplier_ImplicitCast = K2Node_VariableSet_FuelMultiplier_ImplicitCast;
	Parms.K2Node_VariableSet_ThirstMultiplier_ImplicitCast = K2Node_VariableSet_ThirstMultiplier_ImplicitCast;
	Parms.K2Node_VariableSet_HungerMultiplier_ImplicitCast = K2Node_VariableSet_HungerMultiplier_ImplicitCast;
	Parms.K2Node_VariableSet_XpMultiplier_ImplicitCast = K2Node_VariableSet_XpMultiplier_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Save_Difficulties.Save_Difficulties_C.LoadDifficulties
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_1                       (ZeroConstructor, HasGetValueTypeHash)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData                                (None)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_1                              (None)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_2                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_3                       (ZeroConstructor, HasGetValueTypeHash)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_2                              (None)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_3                              (None)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_4                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_5                       (ZeroConstructor, HasGetValueTypeHash)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_4                              (None)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_5                              (None)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_6                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_7                       (ZeroConstructor, HasGetValueTypeHash)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_6                              (None)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_7                              (None)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_8                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_9                       (ZeroConstructor, HasGetValueTypeHash)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_8                              (None)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_9                              (None)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_10                      (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_11                      (ZeroConstructor, HasGetValueTypeHash)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_10                             (None)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_11                             (None)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_12                      (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_13                      (ZeroConstructor, HasGetValueTypeHash)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_12                             (None)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_13                             (None)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_14                      (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_15                      (ZeroConstructor, HasGetValueTypeHash)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_14                             (None)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_15                             (None)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_16                      (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_17                      (ZeroConstructor, HasGetValueTypeHash)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_16                             (None)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_17                             (None)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_18                      (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_19                      (ZeroConstructor, HasGetValueTypeHash)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_18                             (None)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_19                             (None)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_20                      (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_21                      (ZeroConstructor, HasGetValueTypeHash)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_20                             (None)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_21                             (None)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_22                             (None)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_23                             (None)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_22                      (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_23                      (ZeroConstructor, HasGetValueTypeHash)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_24                             (None)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_25                             (None)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_24                      (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_25                      (ZeroConstructor, HasGetValueTypeHash)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_26                             (None)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_27                             (None)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_26                      (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_28                             (None)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_29                             (None)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_27                      (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_28                      (ZeroConstructor, HasGetValueTypeHash)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_30                             (None)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_31                             (None)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_29                      (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_30                      (ZeroConstructor, HasGetValueTypeHash)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_32                             (None)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_33                             (None)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_31                      (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_32                      (ZeroConstructor, HasGetValueTypeHash)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_34                             (None)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_35                             (None)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_33                      (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_34                      (ZeroConstructor, HasGetValueTypeHash)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_36                             (None)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_37                             (None)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_35                      (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_36                      (ZeroConstructor, HasGetValueTypeHash)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_38                             (None)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_39                             (None)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_37                      (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_38                      (ZeroConstructor, HasGetValueTypeHash)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_40                             (None)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_41                             (None)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_39                      (ZeroConstructor, HasGetValueTypeHash)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_42                             (None)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_3                         (ZeroConstructor, HasGetValueTypeHash)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_43                             (None)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_4                         (ZeroConstructor, HasGetValueTypeHash)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_44                             (None)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_5                         (ZeroConstructor, HasGetValueTypeHash)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_45                             (None)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_40                      (ZeroConstructor, HasGetValueTypeHash)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData_46                             (None)
// double                             CallFunc_Conv_DoubleToString_InDouble_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_3             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_4             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_5             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_6             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_7             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_8             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_9             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_10            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USave_Difficulties_C::LoadDifficulties(const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_1, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_1, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_2, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_3, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_2, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_3, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_4, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_5, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_4, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_5, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_6, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_7, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_6, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_7, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_8, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_9, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_8, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_9, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_10, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_11, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_10, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_11, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_12, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_13, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_12, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_13, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_14, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_15, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_14, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_15, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_16, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_17, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_16, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_17, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_18, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_19, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_18, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_19, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_20, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_21, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_20, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_21, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue_1, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_22, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_23, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_22, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_23, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_24, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_25, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_24, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_25, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_26, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_27, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_26, const class FString& CallFunc_Conv_BoolToString_ReturnValue_2, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_28, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_29, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_27, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_28, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_30, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_31, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_29, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_30, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_32, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_33, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_31, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_32, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_34, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_35, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_33, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_34, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_36, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_37, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_35, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_36, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_38, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_39, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_37, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_38, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_40, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_41, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_39, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_42, const class FString& CallFunc_Conv_BoolToString_ReturnValue_3, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_43, const class FString& CallFunc_Conv_BoolToString_ReturnValue_4, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_44, const class FString& CallFunc_Conv_BoolToString_ReturnValue_5, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_45, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_40, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData_46, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_1, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_2, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_3, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_4, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_5, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_6, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_7, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_8, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_9, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_10)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Save_Difficulties_C", "LoadDifficulties");

	Params::USave_Difficulties_C_LoadDifficulties_Params Parms{};

	Parms.CallFunc_Conv_DoubleToString_ReturnValue = CallFunc_Conv_DoubleToString_ReturnValue;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_1 = CallFunc_Conv_DoubleToString_ReturnValue_1;
	Parms.K2Node_MakeStruct_AutoSettingData = K2Node_MakeStruct_AutoSettingData;
	Parms.K2Node_MakeStruct_AutoSettingData_1 = K2Node_MakeStruct_AutoSettingData_1;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_2 = CallFunc_Conv_DoubleToString_ReturnValue_2;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_3 = CallFunc_Conv_DoubleToString_ReturnValue_3;
	Parms.K2Node_MakeStruct_AutoSettingData_2 = K2Node_MakeStruct_AutoSettingData_2;
	Parms.K2Node_MakeStruct_AutoSettingData_3 = K2Node_MakeStruct_AutoSettingData_3;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_4 = CallFunc_Conv_DoubleToString_ReturnValue_4;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_5 = CallFunc_Conv_DoubleToString_ReturnValue_5;
	Parms.K2Node_MakeStruct_AutoSettingData_4 = K2Node_MakeStruct_AutoSettingData_4;
	Parms.K2Node_MakeStruct_AutoSettingData_5 = K2Node_MakeStruct_AutoSettingData_5;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_6 = CallFunc_Conv_DoubleToString_ReturnValue_6;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_7 = CallFunc_Conv_DoubleToString_ReturnValue_7;
	Parms.K2Node_MakeStruct_AutoSettingData_6 = K2Node_MakeStruct_AutoSettingData_6;
	Parms.K2Node_MakeStruct_AutoSettingData_7 = K2Node_MakeStruct_AutoSettingData_7;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_8 = CallFunc_Conv_DoubleToString_ReturnValue_8;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_9 = CallFunc_Conv_DoubleToString_ReturnValue_9;
	Parms.K2Node_MakeStruct_AutoSettingData_8 = K2Node_MakeStruct_AutoSettingData_8;
	Parms.K2Node_MakeStruct_AutoSettingData_9 = K2Node_MakeStruct_AutoSettingData_9;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_10 = CallFunc_Conv_DoubleToString_ReturnValue_10;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_11 = CallFunc_Conv_DoubleToString_ReturnValue_11;
	Parms.K2Node_MakeStruct_AutoSettingData_10 = K2Node_MakeStruct_AutoSettingData_10;
	Parms.K2Node_MakeStruct_AutoSettingData_11 = K2Node_MakeStruct_AutoSettingData_11;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_12 = CallFunc_Conv_DoubleToString_ReturnValue_12;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_13 = CallFunc_Conv_DoubleToString_ReturnValue_13;
	Parms.K2Node_MakeStruct_AutoSettingData_12 = K2Node_MakeStruct_AutoSettingData_12;
	Parms.K2Node_MakeStruct_AutoSettingData_13 = K2Node_MakeStruct_AutoSettingData_13;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_14 = CallFunc_Conv_DoubleToString_ReturnValue_14;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_15 = CallFunc_Conv_DoubleToString_ReturnValue_15;
	Parms.K2Node_MakeStruct_AutoSettingData_14 = K2Node_MakeStruct_AutoSettingData_14;
	Parms.K2Node_MakeStruct_AutoSettingData_15 = K2Node_MakeStruct_AutoSettingData_15;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_16 = CallFunc_Conv_DoubleToString_ReturnValue_16;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_17 = CallFunc_Conv_DoubleToString_ReturnValue_17;
	Parms.K2Node_MakeStruct_AutoSettingData_16 = K2Node_MakeStruct_AutoSettingData_16;
	Parms.K2Node_MakeStruct_AutoSettingData_17 = K2Node_MakeStruct_AutoSettingData_17;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_18 = CallFunc_Conv_DoubleToString_ReturnValue_18;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_19 = CallFunc_Conv_DoubleToString_ReturnValue_19;
	Parms.K2Node_MakeStruct_AutoSettingData_18 = K2Node_MakeStruct_AutoSettingData_18;
	Parms.K2Node_MakeStruct_AutoSettingData_19 = K2Node_MakeStruct_AutoSettingData_19;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_20 = CallFunc_Conv_DoubleToString_ReturnValue_20;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_21 = CallFunc_Conv_DoubleToString_ReturnValue_21;
	Parms.K2Node_MakeStruct_AutoSettingData_20 = K2Node_MakeStruct_AutoSettingData_20;
	Parms.K2Node_MakeStruct_AutoSettingData_21 = K2Node_MakeStruct_AutoSettingData_21;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue_1 = CallFunc_Conv_BoolToString_ReturnValue_1;
	Parms.K2Node_MakeStruct_AutoSettingData_22 = K2Node_MakeStruct_AutoSettingData_22;
	Parms.K2Node_MakeStruct_AutoSettingData_23 = K2Node_MakeStruct_AutoSettingData_23;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_22 = CallFunc_Conv_DoubleToString_ReturnValue_22;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_23 = CallFunc_Conv_DoubleToString_ReturnValue_23;
	Parms.K2Node_MakeStruct_AutoSettingData_24 = K2Node_MakeStruct_AutoSettingData_24;
	Parms.K2Node_MakeStruct_AutoSettingData_25 = K2Node_MakeStruct_AutoSettingData_25;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_24 = CallFunc_Conv_DoubleToString_ReturnValue_24;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_25 = CallFunc_Conv_DoubleToString_ReturnValue_25;
	Parms.K2Node_MakeStruct_AutoSettingData_26 = K2Node_MakeStruct_AutoSettingData_26;
	Parms.K2Node_MakeStruct_AutoSettingData_27 = K2Node_MakeStruct_AutoSettingData_27;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_26 = CallFunc_Conv_DoubleToString_ReturnValue_26;
	Parms.CallFunc_Conv_BoolToString_ReturnValue_2 = CallFunc_Conv_BoolToString_ReturnValue_2;
	Parms.K2Node_MakeStruct_AutoSettingData_28 = K2Node_MakeStruct_AutoSettingData_28;
	Parms.K2Node_MakeStruct_AutoSettingData_29 = K2Node_MakeStruct_AutoSettingData_29;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_27 = CallFunc_Conv_DoubleToString_ReturnValue_27;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_28 = CallFunc_Conv_DoubleToString_ReturnValue_28;
	Parms.K2Node_MakeStruct_AutoSettingData_30 = K2Node_MakeStruct_AutoSettingData_30;
	Parms.K2Node_MakeStruct_AutoSettingData_31 = K2Node_MakeStruct_AutoSettingData_31;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_29 = CallFunc_Conv_DoubleToString_ReturnValue_29;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_30 = CallFunc_Conv_DoubleToString_ReturnValue_30;
	Parms.K2Node_MakeStruct_AutoSettingData_32 = K2Node_MakeStruct_AutoSettingData_32;
	Parms.K2Node_MakeStruct_AutoSettingData_33 = K2Node_MakeStruct_AutoSettingData_33;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_31 = CallFunc_Conv_DoubleToString_ReturnValue_31;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_32 = CallFunc_Conv_DoubleToString_ReturnValue_32;
	Parms.K2Node_MakeStruct_AutoSettingData_34 = K2Node_MakeStruct_AutoSettingData_34;
	Parms.K2Node_MakeStruct_AutoSettingData_35 = K2Node_MakeStruct_AutoSettingData_35;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_33 = CallFunc_Conv_DoubleToString_ReturnValue_33;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_34 = CallFunc_Conv_DoubleToString_ReturnValue_34;
	Parms.K2Node_MakeStruct_AutoSettingData_36 = K2Node_MakeStruct_AutoSettingData_36;
	Parms.K2Node_MakeStruct_AutoSettingData_37 = K2Node_MakeStruct_AutoSettingData_37;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_35 = CallFunc_Conv_DoubleToString_ReturnValue_35;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_36 = CallFunc_Conv_DoubleToString_ReturnValue_36;
	Parms.K2Node_MakeStruct_AutoSettingData_38 = K2Node_MakeStruct_AutoSettingData_38;
	Parms.K2Node_MakeStruct_AutoSettingData_39 = K2Node_MakeStruct_AutoSettingData_39;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_37 = CallFunc_Conv_DoubleToString_ReturnValue_37;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_38 = CallFunc_Conv_DoubleToString_ReturnValue_38;
	Parms.K2Node_MakeStruct_AutoSettingData_40 = K2Node_MakeStruct_AutoSettingData_40;
	Parms.K2Node_MakeStruct_AutoSettingData_41 = K2Node_MakeStruct_AutoSettingData_41;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_39 = CallFunc_Conv_DoubleToString_ReturnValue_39;
	Parms.K2Node_MakeStruct_AutoSettingData_42 = K2Node_MakeStruct_AutoSettingData_42;
	Parms.CallFunc_Conv_BoolToString_ReturnValue_3 = CallFunc_Conv_BoolToString_ReturnValue_3;
	Parms.K2Node_MakeStruct_AutoSettingData_43 = K2Node_MakeStruct_AutoSettingData_43;
	Parms.CallFunc_Conv_BoolToString_ReturnValue_4 = CallFunc_Conv_BoolToString_ReturnValue_4;
	Parms.K2Node_MakeStruct_AutoSettingData_44 = K2Node_MakeStruct_AutoSettingData_44;
	Parms.CallFunc_Conv_BoolToString_ReturnValue_5 = CallFunc_Conv_BoolToString_ReturnValue_5;
	Parms.K2Node_MakeStruct_AutoSettingData_45 = K2Node_MakeStruct_AutoSettingData_45;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_40 = CallFunc_Conv_DoubleToString_ReturnValue_40;
	Parms.K2Node_MakeStruct_AutoSettingData_46 = K2Node_MakeStruct_AutoSettingData_46;
	Parms.CallFunc_Conv_DoubleToString_InDouble_ImplicitCast = CallFunc_Conv_DoubleToString_InDouble_ImplicitCast;
	Parms.CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_1 = CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_1;
	Parms.CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_2 = CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_2;
	Parms.CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_3 = CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_3;
	Parms.CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_4 = CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_4;
	Parms.CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_5 = CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_5;
	Parms.CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_6 = CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_6;
	Parms.CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_7 = CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_7;
	Parms.CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_8 = CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_8;
	Parms.CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_9 = CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_9;
	Parms.CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_10 = CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_10;

	UObject::ProcessEvent(Func, &Parms);

}

}


