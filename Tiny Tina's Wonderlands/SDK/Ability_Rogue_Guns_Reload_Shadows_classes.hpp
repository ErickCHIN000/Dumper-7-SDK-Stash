#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x210 - 0x198)
// BlueprintGeneratedClass Ability_Rogue_Guns_Reload_Shadows.Ability_Rogue_Guns_Reload_Shadows_C
class UAbility_Rogue_Guns_Reload_Shadows_C : public UAbility_All_Enchantment_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x198(0x8)(Transient, DuplicateTransient)
	float                                        DurationExtensionAmount;                           // 0x1A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_416E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Rogue_Guns_Reload_Shadows; // 0x1A8(0x28)(None)
	float                                        DurationExtensionUses;                             // 0x1D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFromtheShadowsActive;                            // 0x1D4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_417B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          Init_DurationExtension;                            // 0x1D8(0x38)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UAbility_Rogue_Guns_Reload_Shadows_C* GetDefaultObj();

	void Enchantment_OnReload(class AWeapon* EventWeapon, bool bCompleted, bool bAmmoGiven);
	void OnActivated();
	void Enchantment_ActionSkillEnded(class UOakActionAbility* ActionAbility, enum class Enum_ActionSkills ActionSkill);
	void Enchantment_ActionSkillActivated(class UOakActionAbility* ActionAbility, enum class Enum_ActionSkills ActionSkill);
	void ExecuteUbergraph_Ability_Rogue_Guns_Reload_Shadows(int32 EntryPoint, float Temp_float_Variable, class AWeapon* K2Node_Event_EventWeapon, bool K2Node_Event_bCompleted, bool K2Node_Event_bAmmoGiven, const struct FGameResourcePoolReference& CallFunc_GetResourcePoolByResource_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class UBPEventHub_PlayerCharacter_C* K2Node_DynamicCast_AsBPEvent_Hub_Player_Character, bool K2Node_DynamicCast_bSuccess, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class UOakActionAbility* K2Node_Event_ActionAbility1, enum class Enum_ActionSkills K2Node_Event_ActionSkill1, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess1, class AActor* CallFunc_GetAbilityOwner_ReturnValue, bool CallFunc_HasPlayerClass_Res, float CallFunc_EvaluateAttributeInitializationData_ReturnValue, class UOakActionAbility* K2Node_Event_ActionAbility, enum class Enum_ActionSkills K2Node_Event_ActionSkill, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1);
};

}


