#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MedicalComponent.MedicalComponent_C
// (None)

class UClass* UMedicalComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MedicalComponent_C");

	return Clss;
}


// MedicalComponent_C MedicalComponent.Default__MedicalComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMedicalComponent_C* UMedicalComponent_C::GetDefaultObj()
{
	static class UMedicalComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMedicalComponent_C*>(UMedicalComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MedicalComponent.MedicalComponent_C.GetPlayerRef
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerCharacter_C*       Player                                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UMedicalComponent_C::GetPlayerRef(class ABP_PlayerCharacter_C** Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MedicalComponent_C", "GetPlayerRef");

	Params::UMedicalComponent_C_GetPlayerRef_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Player != nullptr)
		*Player = Parms.Player;

}


// Function MedicalComponent.MedicalComponent_C.OnRep_RadiationSickness?
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMedicalComponent_C::OnRep_RadiationSickness_()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MedicalComponent_C", "OnRep_RadiationSickness?");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MedicalComponent.MedicalComponent_C.HeavyBleed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerCharacter_C*       K2Node_DynamicCast_AsBP_Player_Character                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Svr_Damage_BaseDamage_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMedicalComponent_C::HeavyBleed(class AActor* CallFunc_GetOwner_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, class ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character, bool K2Node_DynamicCast_bSuccess, float CallFunc_Svr_Damage_BaseDamage_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MedicalComponent_C", "HeavyBleed");

	Params::UMedicalComponent_C_HeavyBleed_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_Character = K2Node_DynamicCast_AsBP_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Svr_Damage_BaseDamage_ImplicitCast = CallFunc_Svr_Damage_BaseDamage_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MedicalComponent.MedicalComponent_C.Bleed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerCharacter_C*       K2Node_DynamicCast_AsBP_Player_Character                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Svr_Damage_BaseDamage_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMedicalComponent_C::Bleed(class AActor* CallFunc_GetOwner_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, class ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character, bool K2Node_DynamicCast_bSuccess, float CallFunc_Svr_Damage_BaseDamage_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MedicalComponent_C", "Bleed");

	Params::UMedicalComponent_C_Bleed_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_Character = K2Node_DynamicCast_AsBP_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Svr_Damage_BaseDamage_ImplicitCast = CallFunc_Svr_Damage_BaseDamage_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MedicalComponent.MedicalComponent_C.SetPostProcessHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBoolCVar_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NormalizeToRange_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    CallFunc_MakeVector4_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMedicalComponent_C::SetPostProcessHealth(bool Damage, bool CallFunc_GetBoolCVar_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_NormalizeToRange_ReturnValue, const struct FVector4& CallFunc_MakeVector4_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MedicalComponent_C", "SetPostProcessHealth");

	Params::UMedicalComponent_C_SetPostProcessHealth_Params Parms{};

	Parms.Damage = Damage;
	Parms.CallFunc_GetBoolCVar_ReturnValue = CallFunc_GetBoolCVar_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_NormalizeToRange_ReturnValue = CallFunc_NormalizeToRange_ReturnValue;
	Parms.CallFunc_MakeVector4_ReturnValue = CallFunc_MakeVector4_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MedicalComponent.MedicalComponent_C.IncreaseHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_1                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_2                       (ZeroConstructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class UPassiveSkillsComponent_C*   CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPassiveSkillsComponent_C*   CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPassiveSkillsComponent_C*   CallFunc_GetComponentByClass_ReturnValue_2                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IInt_PassiveSkills_C>K2Node_DynamicCast_AsInt_Passive_Skills                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IInt_PassiveSkills_C>K2Node_DynamicCast_AsInt_Passive_Skills_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_StoreStats_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetAchievement_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_Player_C>K2Node_DynamicCast_AsBPI_Player                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_Player_C>K2Node_DynamicCast_AsBPI_Player_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMedicalComponent_C::IncreaseHealth(double Amount, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_1, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_2, class AController* CallFunc_GetController_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class UPassiveSkillsComponent_C* CallFunc_GetComponentByClass_ReturnValue, class AController* CallFunc_GetController_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue_2, class UPassiveSkillsComponent_C* CallFunc_GetComponentByClass_ReturnValue_1, class UPassiveSkillsComponent_C* CallFunc_GetComponentByClass_ReturnValue_2, TScriptInterface<class IInt_PassiveSkills_C> K2Node_DynamicCast_AsInt_Passive_Skills, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IInt_PassiveSkills_C> K2Node_DynamicCast_AsInt_Passive_Skills_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_StoreStats_ReturnValue, bool CallFunc_SetAchievement_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, TScriptInterface<class IBPI_Player_C> K2Node_DynamicCast_AsBPI_Player, bool K2Node_DynamicCast_bSuccess_2, double CallFunc_RandomFloatInRange_ReturnValue, TScriptInterface<class IBPI_Player_C> K2Node_DynamicCast_AsBPI_Player_1, bool K2Node_DynamicCast_bSuccess_3, double CallFunc_RandomFloatInRange_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MedicalComponent_C", "IncreaseHealth");

	Params::UMedicalComponent_C_IncreaseHealth_Params Parms{};

	Parms.Amount = Amount;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue = CallFunc_NotEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue = CallFunc_Conv_DoubleToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_1 = CallFunc_Conv_DoubleToString_ReturnValue_1;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_2 = CallFunc_Conv_DoubleToString_ReturnValue_2;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue_1 = CallFunc_GetController_ReturnValue_1;
	Parms.CallFunc_GetController_ReturnValue_2 = CallFunc_GetController_ReturnValue_2;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue_2 = CallFunc_GetComponentByClass_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsInt_Passive_Skills = K2Node_DynamicCast_AsInt_Passive_Skills;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsInt_Passive_Skills_1 = K2Node_DynamicCast_AsInt_Passive_Skills_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_StoreStats_ReturnValue = CallFunc_StoreStats_ReturnValue;
	Parms.CallFunc_SetAchievement_ReturnValue = CallFunc_SetAchievement_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Player = K2Node_DynamicCast_AsBPI_Player;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Player_1 = K2Node_DynamicCast_AsBPI_Player_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MedicalComponent.MedicalComponent_C.OnRep_BrokenBone?
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerCharacter_C*       PlayerRef                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerCharacter_C*       K2Node_DynamicCast_AsBP_Player_Character                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMedicalComponent_C::OnRep_BrokenBone_(class ABP_PlayerCharacter_C* PlayerRef, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MedicalComponent_C", "OnRep_BrokenBone?");

	Params::UMedicalComponent_C_OnRep_BrokenBone__Params Parms{};

	Parms.PlayerRef = PlayerRef;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_Character = K2Node_DynamicCast_AsBP_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MedicalComponent.MedicalComponent_C.OnRep_HeavyBleed?
// (HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_TimerExistsHandle_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimer_Time_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMedicalComponent_C::OnRep_HeavyBleed_(double CallFunc_RandomFloatInRange_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_K2_TimerExistsHandle_ReturnValue, float CallFunc_K2_SetTimer_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MedicalComponent_C", "OnRep_HeavyBleed?");

	Params::UMedicalComponent_C_OnRep_HeavyBleed__Params Parms{};

	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_K2_TimerExistsHandle_ReturnValue = CallFunc_K2_TimerExistsHandle_ReturnValue;
	Parms.CallFunc_K2_SetTimer_Time_ImplicitCast = CallFunc_K2_SetTimer_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MedicalComponent.MedicalComponent_C.OnRep_Bleed?
// (HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_TimerExistsHandle_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimer_Time_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMedicalComponent_C::OnRep_Bleed_(double CallFunc_RandomFloatInRange_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_K2_TimerExistsHandle_ReturnValue, float CallFunc_K2_SetTimer_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MedicalComponent_C", "OnRep_Bleed?");

	Params::UMedicalComponent_C_OnRep_Bleed__Params Parms{};

	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_K2_TimerExistsHandle_ReturnValue = CallFunc_K2_TimerExistsHandle_ReturnValue;
	Parms.CallFunc_K2_SetTimer_Time_ImplicitCast = CallFunc_K2_SetTimer_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MedicalComponent.MedicalComponent_C.ComponentPreSave
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMedicalComponent_C::ComponentPreSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MedicalComponent_C", "ComponentPreSave");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MedicalComponent.MedicalComponent_C.SendStaminaToClient
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewStamina                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMedicalComponent_C::SendStaminaToClient(double NewStamina)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MedicalComponent_C", "SendStaminaToClient");

	Params::UMedicalComponent_C_SendStaminaToClient_Params Parms{};

	Parms.NewStamina = NewStamina;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MedicalComponent.MedicalComponent_C.UpdatePlayerSpeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewSpeed                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMedicalComponent_C::UpdatePlayerSpeed(double NewSpeed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MedicalComponent_C", "UpdatePlayerSpeed");

	Params::UMedicalComponent_C_UpdatePlayerSpeed_Params Parms{};

	Parms.NewSpeed = NewSpeed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MedicalComponent.MedicalComponent_C.SendHealthToClient
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewHealth                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMedicalComponent_C::SendHealthToClient(double NewHealth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MedicalComponent_C", "SendHealthToClient");

	Params::UMedicalComponent_C_SendHealthToClient_Params Parms{};

	Parms.NewHealth = NewHealth;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MedicalComponent.MedicalComponent_C.SendHungerToClient
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewHunger                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMedicalComponent_C::SendHungerToClient(double NewHunger)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MedicalComponent_C", "SendHungerToClient");

	Params::UMedicalComponent_C_SendHungerToClient_Params Parms{};

	Parms.NewHunger = NewHunger;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MedicalComponent.MedicalComponent_C.SendThirstToClient
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewThirst                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMedicalComponent_C::SendThirstToClient(double NewThirst)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MedicalComponent_C", "SendThirstToClient");

	Params::UMedicalComponent_C_SendThirstToClient_Params Parms{};

	Parms.NewThirst = NewThirst;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MedicalComponent.MedicalComponent_C.SendRadiationToClient
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewRadiation                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMedicalComponent_C::SendRadiationToClient(double NewRadiation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MedicalComponent_C", "SendRadiationToClient");

	Params::UMedicalComponent_C_SendRadiationToClient_Params Parms{};

	Parms.NewRadiation = NewRadiation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MedicalComponent.MedicalComponent_C.PlayerDeath
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMedicalComponent_C::PlayerDeath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MedicalComponent_C", "PlayerDeath");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MedicalComponent.MedicalComponent_C.PlayMontage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Play_Rate                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMedicalComponent_C::PlayMontage(class UAnimMontage* Montage, double Play_Rate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MedicalComponent_C", "PlayMontage");

	Params::UMedicalComponent_C_PlayMontage_Params Parms{};

	Parms.Montage = Montage;
	Parms.Play_Rate = Play_Rate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MedicalComponent.MedicalComponent_C.StopMontage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UMedicalComponent_C::StopMontage(class UAnimMontage* Montage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MedicalComponent_C", "StopMontage");

	Params::UMedicalComponent_C_StopMontage_Params Parms{};

	Parms.Montage = Montage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MedicalComponent.MedicalComponent_C.CreateNotificationUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*                  Image                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             UI_Delay                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMedicalComponent_C::CreateNotificationUI(class FText Text, class UTexture2D* Image, const struct FLinearColor& Color, double UI_Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MedicalComponent_C", "CreateNotificationUI");

	Params::UMedicalComponent_C_CreateNotificationUI_Params Parms{};

	Parms.Text = Text;
	Parms.Image = Image;
	Parms.Color = Color;
	Parms.UI_Delay = UI_Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MedicalComponent.MedicalComponent_C.SendOxygenToClient
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewOxygen                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMedicalComponent_C::SendOxygenToClient(double NewOxygen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MedicalComponent_C", "SendOxygenToClient");

	Params::UMedicalComponent_C_SendOxygenToClient_Params Parms{};

	Parms.NewOxygen = NewOxygen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MedicalComponent.MedicalComponent_C.LoadComponent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMedicalComponent_C::LoadComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MedicalComponent_C", "LoadComponent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MedicalComponent.MedicalComponent_C.Event_TimeToStopBleed
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMedicalComponent_C::Event_TimeToStopBleed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MedicalComponent_C", "Event_TimeToStopBleed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MedicalComponent.MedicalComponent_C.Event_TimeToStopHeavyBleed
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMedicalComponent_C::Event_TimeToStopHeavyBleed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MedicalComponent_C", "Event_TimeToStopHeavyBleed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MedicalComponent.MedicalComponent_C.Event_TimeToStopBrokenBone
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMedicalComponent_C::Event_TimeToStopBrokenBone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MedicalComponent_C", "Event_TimeToStopBrokenBone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MedicalComponent.MedicalComponent_C.Time_Bleed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMedicalComponent_C::Time_Bleed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MedicalComponent_C", "Time_Bleed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MedicalComponent.MedicalComponent_C.Time_HeavyBleed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMedicalComponent_C::Time_HeavyBleed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MedicalComponent_C", "Time_HeavyBleed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MedicalComponent.MedicalComponent_C.Time_BrokenBone
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMedicalComponent_C::Time_BrokenBone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MedicalComponent_C", "Time_BrokenBone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MedicalComponent.MedicalComponent_C.ComponentLoaded
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMedicalComponent_C::ComponentLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MedicalComponent_C", "ComponentLoaded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MedicalComponent.MedicalComponent_C.Client_CreateMedUI
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        MedicalEffect                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Adding_                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMedicalComponent_C::Client_CreateMedUI(class FName MedicalEffect, bool Adding_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MedicalComponent_C", "Client_CreateMedUI");

	Params::UMedicalComponent_C_Client_CreateMedUI_Params Parms{};

	Parms.MedicalEffect = MedicalEffect;
	Parms.Adding_ = Adding_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MedicalComponent.MedicalComponent_C.Svr_Damage
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DamagedActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              BaseDamage                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMedicalComponent_C::Svr_Damage(class AActor* DamagedActor, float BaseDamage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MedicalComponent_C", "Svr_Damage");

	Params::UMedicalComponent_C_Svr_Damage_Params Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.BaseDamage = BaseDamage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MedicalComponent.MedicalComponent_C.Client_RemoveEffect
// (Net, HasOutParams, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                Array                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMedicalComponent_C::Client_RemoveEffect(TArray<class FName>& Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MedicalComponent_C", "Client_RemoveEffect");

	Params::UMedicalComponent_C_Client_RemoveEffect_Params Parms{};

	Parms.Array = Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MedicalComponent.MedicalComponent_C.ExecuteUbergraph_MedicalComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_CustomEvent_Array                                         (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_NewStamina                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_NewSpeed                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_NewHealth                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_NewHunger                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_NewThirst                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_NewRadiation                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_Event_Montage_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_Play_Rate                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_Event_Montage                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_Text                                                (None)
// class UTexture2D*                  K2Node_Event_Image                                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_Color                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_UI_Delay                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_NewOxygen                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_2                       (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_TimerExistsHandle_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_TimerExistsHandle_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_MedicalEffect                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Adding_                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_TimerExistsHandle_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerCharacter_C*       K2Node_DynamicCast_AsBP_Player_Character                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerCharacter_C*       K2Node_DynamicCast_AsBP_Player_Character_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DamagedActor                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_BaseDamage                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplyDamage_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMedicalComponent_C::ExecuteUbergraph_MedicalComponent(int32 EntryPoint, TArray<class FName>& K2Node_CustomEvent_Array, int32 CallFunc_Array_Length_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Array_Index_Variable, class FName CallFunc_Array_Get_Item, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool K2Node_SwitchName_CmpSuccess, double K2Node_Event_NewStamina, double K2Node_Event_NewSpeed, double K2Node_Event_NewHealth, double K2Node_Event_NewHunger, double K2Node_Event_NewThirst, double K2Node_Event_NewRadiation, class UAnimMontage* K2Node_Event_Montage_1, double K2Node_Event_Play_Rate, class UAnimMontage* K2Node_Event_Montage, class FText K2Node_Event_Text, class UTexture2D* K2Node_Event_Image, const struct FLinearColor& K2Node_Event_Color, double K2Node_Event_UI_Delay, double K2Node_Event_NewOxygen, double CallFunc_RandomFloatInRange_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, bool CallFunc_K2_TimerExistsHandle_ReturnValue, bool CallFunc_K2_TimerExistsHandle_ReturnValue_1, class FName K2Node_CustomEvent_MedicalEffect, bool K2Node_CustomEvent_Adding_, bool CallFunc_K2_TimerExistsHandle_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue_1, class ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character_1, bool K2Node_DynamicCast_bSuccess_1, class AActor* K2Node_CustomEvent_DamagedActor, float K2Node_CustomEvent_BaseDamage, float CallFunc_ApplyDamage_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MedicalComponent_C", "ExecuteUbergraph_MedicalComponent");

	Params::UMedicalComponent_C_ExecuteUbergraph_MedicalComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Array = K2Node_CustomEvent_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.K2Node_Event_NewStamina = K2Node_Event_NewStamina;
	Parms.K2Node_Event_NewSpeed = K2Node_Event_NewSpeed;
	Parms.K2Node_Event_NewHealth = K2Node_Event_NewHealth;
	Parms.K2Node_Event_NewHunger = K2Node_Event_NewHunger;
	Parms.K2Node_Event_NewThirst = K2Node_Event_NewThirst;
	Parms.K2Node_Event_NewRadiation = K2Node_Event_NewRadiation;
	Parms.K2Node_Event_Montage_1 = K2Node_Event_Montage_1;
	Parms.K2Node_Event_Play_Rate = K2Node_Event_Play_Rate;
	Parms.K2Node_Event_Montage = K2Node_Event_Montage;
	Parms.K2Node_Event_Text = K2Node_Event_Text;
	Parms.K2Node_Event_Image = K2Node_Event_Image;
	Parms.K2Node_Event_Color = K2Node_Event_Color;
	Parms.K2Node_Event_UI_Delay = K2Node_Event_UI_Delay;
	Parms.K2Node_Event_NewOxygen = K2Node_Event_NewOxygen;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_2 = CallFunc_RandomFloatInRange_ReturnValue_2;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_2 = CallFunc_K2_SetTimerDelegate_ReturnValue_2;
	Parms.CallFunc_K2_TimerExistsHandle_ReturnValue = CallFunc_K2_TimerExistsHandle_ReturnValue;
	Parms.CallFunc_K2_TimerExistsHandle_ReturnValue_1 = CallFunc_K2_TimerExistsHandle_ReturnValue_1;
	Parms.K2Node_CustomEvent_MedicalEffect = K2Node_CustomEvent_MedicalEffect;
	Parms.K2Node_CustomEvent_Adding_ = K2Node_CustomEvent_Adding_;
	Parms.CallFunc_K2_TimerExistsHandle_ReturnValue_2 = CallFunc_K2_TimerExistsHandle_ReturnValue_2;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_Character = K2Node_DynamicCast_AsBP_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Player_Character_1 = K2Node_DynamicCast_AsBP_Player_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CustomEvent_DamagedActor = K2Node_CustomEvent_DamagedActor;
	Parms.K2Node_CustomEvent_BaseDamage = K2Node_CustomEvent_BaseDamage;
	Parms.CallFunc_ApplyDamage_ReturnValue = CallFunc_ApplyDamage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1 = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_2 = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


