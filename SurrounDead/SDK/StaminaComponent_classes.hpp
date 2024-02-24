#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x120 - 0xB8)
// BlueprintGeneratedClass StaminaComponent.StaminaComponent_C
class UStaminaComponent_C : public UBaseComponent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       MaxStamina;                                        // 0xC0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CurrentStamina;                                    // 0xC8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlySprinting;                                // 0xD0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_438A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       SprintSpeed;                                       // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       WalkSpeed;                                         // 0xE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          StaminaSprintTimer;                                // 0xE8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       StaminaDrain;                                      // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          RecoverTimer;                                      // 0xF8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       StaminaRecoverAmount;                              // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            NoStamina;                                         // 0x108(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UPassiveSkillsComponent_C*             PassiveSkillsComponent;                            // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UStaminaComponent_C* GetDefaultObj();

	void Increase_Stamina(double Amount, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_1, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue);
	void ReduceStamina(double StaminaDrain, bool CallFunc_GetBoolCVar_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, TScriptInterface<class IBPI_Player_C> K2Node_DynamicCast_AsBPI_Player, bool K2Node_DynamicCast_bSuccess, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, float CallFunc_K2_SetTimer_InitialStartDelay_ImplicitCast);
	void F_CheckStamina(bool CallFunc_GetBoolCVar_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, TScriptInterface<class IInt_PassiveSkills_C> K2Node_DynamicCast_AsInt_Passive_Skills, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetFloatCVar_ReturnValue, TScriptInterface<class IBPI_Player_C> K2Node_DynamicCast_AsBPI_Player, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_GetVelocity_ReturnValue, double CallFunc_VSize_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast);
	void F_SprintOnOff(bool State, bool SprintState, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IBPI_Player_C> K2Node_DynamicCast_AsBPI_Player, bool K2Node_DynamicCast_bSuccess, double CallFunc_Subtract_DoubleDouble_ReturnValue, class ABP_PlayerCharacter_C* CallFunc_GetPlayerRef_Player, class AActor* CallFunc_GetOwner_ReturnValue_1, TScriptInterface<class IBPI_Player_C> K2Node_DynamicCast_AsBPI_Player_1, bool K2Node_DynamicCast_bSuccess_1, class ABP_PlayerCharacter_C* CallFunc_GetPlayerRef_Player_1, double CallFunc_SelectFloat_ReturnValue, TScriptInterface<class IBPI_Player_C> K2Node_DynamicCast_AsBPI_Player_2, bool K2Node_DynamicCast_bSuccess_2, double CallFunc_Divide_DoubleDouble_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, TScriptInterface<class IBPI_Player_C> K2Node_DynamicCast_AsBPI_Player_3, bool K2Node_DynamicCast_bSuccess_3, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, TScriptInterface<class IBPI_Player_C> K2Node_DynamicCast_AsBPI_Player_4, bool K2Node_DynamicCast_bSuccess_4, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, TScriptInterface<class IBPI_Player_C> K2Node_DynamicCast_AsBPI_Player_5, bool K2Node_DynamicCast_bSuccess_5, double CallFunc_SelectFloat_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, bool CallFunc_EqualEqual_BoolBool_ReturnValue, float CallFunc_K2_SetTimer_InitialStartDelay_ImplicitCast);
	void ComponentLoaded();
	void ComponentPreSave();
	void ToggleSprint(bool State);
	void Server_ToggleSprint(bool State);
	void RecoverStamina();
	void LoadComponent();
	void ExecuteUbergraph_StaminaComponent(int32 EntryPoint, bool K2Node_CustomEvent_State_1, bool K2Node_CustomEvent_State, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, TScriptInterface<class IBPI_Player_C> K2Node_DynamicCast_AsBPI_Player, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetFloatCVar_ReturnValue, class AController* CallFunc_GetController_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, class UPassiveSkillsComponent_C* CallFunc_GetComponentByClass_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast);
	void NoStamina__DelegateSignature();
};

}


