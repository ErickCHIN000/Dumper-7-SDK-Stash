#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x51 (0x109 - 0xB8)
// BlueprintGeneratedClass MedicalComponent.MedicalComponent_C
class UMedicalComponent_C : public UBaseComponent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         Bleed_;                                            // 0xC0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                         HeavyBleed_;                                       // 0xC1(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                         BrokenBone_;                                       // 0xC2(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3740[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_PlayerCharacter_C*                 Character;                                         // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       Health;                                            // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MaxHealth;                                         // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          BleedTimer;                                        // 0xE0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          HeavyBleedTimer;                                   // 0xE8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          BleedStopTimer;                                    // 0xF0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          HeavyBleedStopTimer;                               // 0xF8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          BrokenBoneStopTimer;                               // 0x100(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         RadiationSickness_;                                // 0x108(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMedicalComponent_C* GetDefaultObj();

	void GetPlayerRef(class ABP_PlayerCharacter_C** Player);
	void OnRep_RadiationSickness_();
	void HeavyBleed(class AActor* CallFunc_GetOwner_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, class ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character, bool K2Node_DynamicCast_bSuccess, float CallFunc_Svr_Damage_BaseDamage_ImplicitCast);
	void Bleed(class AActor* CallFunc_GetOwner_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, class ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character, bool K2Node_DynamicCast_bSuccess, float CallFunc_Svr_Damage_BaseDamage_ImplicitCast);
	void SetPostProcessHealth(bool Damage, bool CallFunc_GetBoolCVar_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_NormalizeToRange_ReturnValue, const struct FVector4& CallFunc_MakeVector4_ReturnValue);
	void IncreaseHealth(double Amount, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_1, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_2, class AController* CallFunc_GetController_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class UPassiveSkillsComponent_C* CallFunc_GetComponentByClass_ReturnValue, class AController* CallFunc_GetController_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue_2, class UPassiveSkillsComponent_C* CallFunc_GetComponentByClass_ReturnValue_1, class UPassiveSkillsComponent_C* CallFunc_GetComponentByClass_ReturnValue_2, TScriptInterface<class IInt_PassiveSkills_C> K2Node_DynamicCast_AsInt_Passive_Skills, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IInt_PassiveSkills_C> K2Node_DynamicCast_AsInt_Passive_Skills_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_StoreStats_ReturnValue, bool CallFunc_SetAchievement_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, TScriptInterface<class IBPI_Player_C> K2Node_DynamicCast_AsBPI_Player, bool K2Node_DynamicCast_bSuccess_2, double CallFunc_RandomFloatInRange_ReturnValue, TScriptInterface<class IBPI_Player_C> K2Node_DynamicCast_AsBPI_Player_1, bool K2Node_DynamicCast_bSuccess_3, double CallFunc_RandomFloatInRange_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue);
	void OnRep_BrokenBone_(class ABP_PlayerCharacter_C* PlayerRef, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character, bool K2Node_DynamicCast_bSuccess);
	void OnRep_HeavyBleed_(double CallFunc_RandomFloatInRange_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_K2_TimerExistsHandle_ReturnValue, float CallFunc_K2_SetTimer_Time_ImplicitCast);
	void OnRep_Bleed_(double CallFunc_RandomFloatInRange_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_K2_TimerExistsHandle_ReturnValue, float CallFunc_K2_SetTimer_Time_ImplicitCast);
	void ComponentPreSave();
	void SendStaminaToClient(double NewStamina);
	void UpdatePlayerSpeed(double NewSpeed);
	void SendHealthToClient(double NewHealth);
	void SendHungerToClient(double NewHunger);
	void SendThirstToClient(double NewThirst);
	void SendRadiationToClient(double NewRadiation);
	void PlayerDeath();
	void PlayMontage(class UAnimMontage* Montage, double Play_Rate);
	void StopMontage(class UAnimMontage* Montage);
	void CreateNotificationUI(class FText Text, class UTexture2D* Image, const struct FLinearColor& Color, double UI_Delay);
	void SendOxygenToClient(double NewOxygen);
	void LoadComponent();
	void Event_TimeToStopBleed();
	void Event_TimeToStopHeavyBleed();
	void Event_TimeToStopBrokenBone();
	void Time_Bleed();
	void Time_HeavyBleed();
	void Time_BrokenBone();
	void ComponentLoaded();
	void Client_CreateMedUI(class FName MedicalEffect, bool Adding_);
	void Svr_Damage(class AActor* DamagedActor, float BaseDamage);
	void Client_RemoveEffect(TArray<class FName>& Array);
	void ExecuteUbergraph_MedicalComponent(int32 EntryPoint, TArray<class FName>& K2Node_CustomEvent_Array, int32 CallFunc_Array_Length_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Array_Index_Variable, class FName CallFunc_Array_Get_Item, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool K2Node_SwitchName_CmpSuccess, double K2Node_Event_NewStamina, double K2Node_Event_NewSpeed, double K2Node_Event_NewHealth, double K2Node_Event_NewHunger, double K2Node_Event_NewThirst, double K2Node_Event_NewRadiation, class UAnimMontage* K2Node_Event_Montage_1, double K2Node_Event_Play_Rate, class UAnimMontage* K2Node_Event_Montage, class FText K2Node_Event_Text, class UTexture2D* K2Node_Event_Image, const struct FLinearColor& K2Node_Event_Color, double K2Node_Event_UI_Delay, double K2Node_Event_NewOxygen, double CallFunc_RandomFloatInRange_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, bool CallFunc_K2_TimerExistsHandle_ReturnValue, bool CallFunc_K2_TimerExistsHandle_ReturnValue_1, class FName K2Node_CustomEvent_MedicalEffect, bool K2Node_CustomEvent_Adding_, bool CallFunc_K2_TimerExistsHandle_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue_1, class ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character_1, bool K2Node_DynamicCast_bSuccess_1, class AActor* K2Node_CustomEvent_DamagedActor, float K2Node_CustomEvent_BaseDamage, float CallFunc_ApplyDamage_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_2);
};

}


