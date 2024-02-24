#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x1A0 - 0x198)
// BlueprintGeneratedClass Ability_Mage_Melee_MageMeleeKill_Ammo.Ability_Mage_Melee_MageMeleeKill_Ammo_C
class UAbility_Mage_Melee_MageMeleeKill_Ammo_C : public UAbility_All_Enchantment_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x198(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAbility_Mage_Melee_MageMeleeKill_Ammo_C* GetDefaultObj();

	void Enchantment_DoOnKillBehavior();
	void ExecuteUbergraph_Ability_Mage_Melee_MageMeleeKill_Ammo(int32 EntryPoint, float CallFunc_EvaluateAttributeInitializer_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FCeil_ReturnValue, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, class AWeapon* CallFunc_GetActiveWeapon_ReturnValue, bool CallFunc_HasPlayerClass_Res);
};

}


