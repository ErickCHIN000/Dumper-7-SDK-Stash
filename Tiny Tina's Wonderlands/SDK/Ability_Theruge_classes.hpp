#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA9 (0x1B9 - 0x110)
// BlueprintGeneratedClass Ability_Theruge.Ability_Theruge_C
class UAbility_Theruge_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x110(0x8)(Transient, DuplicateTransient)
	class AActor*                                PlayerOwner;                                       // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          ClearCalamityTimer;                                // 0x120(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TArray<class AActor*>                        DamagedActors;                                     // 0x128(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class AActor*                                DamagedActor;                                      // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOakCharacter_Player*                  PlayerCharacter;                                   // 0x140(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_JointTraining; // 0x148(0x28)(None)
	float                                        ActionSkillReduction;                              // 0x170(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4740[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 ActionSkillReductionHandle;                        // 0x178(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FGameResourcePoolReference            ActionSkillCooldown;                               // 0x190(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference)
	class UBPEventHub_PlayerCharacter_C*         EventHub;                                          // 0x1A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsCoolingDown;                                    // 0x1B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4748[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxCharges;                                        // 0x1B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsChargeSkill;                                     // 0x1B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UAbility_Theruge_C* GetDefaultObj();

	void RestoreActionSkillCooldown(int32 MaxCharges, float Cooldown_CurrentValue, float Cooldown_Calc_MaxValue, float Cooldown_Calc_CurrentValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Percent_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_BreakResourcePoolReference_bValid, float CallFunc_BreakResourcePoolReference_CurrentValue, float CallFunc_BreakResourcePoolReference_MinValue, float CallFunc_BreakResourcePoolReference_MaxValue);
	bool IsCurrentActionSkill(class UOakPlayerAbility* ActionSkill, class UOakPlayerAbility* CallFunc_GetSlotAbility_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void OnActivated();
	void OnDeactivated();
	void OnSpellcast(class AGrenadeMod* GrenadeMod, class AOakCharacter_Player* EquippedPlayer);
	void ActionSkillEnded(class UOakActionAbility* ActionAbility);
	void ActionSkillReady(class UOakActionAbility* ActionAbility);
	void ExecuteUbergraph_Ability_Theruge(int32 EntryPoint, class AActor* CallFunc_GetAbilityOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetDataTableValueFromHandle_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AGrenadeMod* K2Node_CustomEvent_GrenadeMod, class AOakCharacter_Player* K2Node_CustomEvent_EquippedPlayer, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FGameResourcePoolReference& CallFunc_GetResourcePoolByResource_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, bool CallFunc_RemoveStatusEffect_ReturnValue, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate2, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate3, class UOakActionAbility* K2Node_CustomEvent_ActionAbility1, const class FString& CallFunc_GetDisplayName_ReturnValue, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate4, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_BreakGbxAttributeInteger_Value, int32 CallFunc_BreakGbxAttributeInteger_BaseValue, bool CallFunc_Greater_IntInt_ReturnValue1, bool CallFunc_IsCurrentActionSkill_ReturnValue, class UOakActionAbility* K2Node_CustomEvent_ActionAbility, const class FString& CallFunc_GetDisplayName_ReturnValue1, bool CallFunc_IsCurrentActionSkill_ReturnValue1, const class FString& CallFunc_Concat_StrStr_ReturnValue1, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate5);
};

}


