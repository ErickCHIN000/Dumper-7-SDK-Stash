#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x36 (0x168 - 0x132)
// BlueprintGeneratedClass Ability_Ring_Cond_LowAmmo.Ability_Ring_Cond_LowAmmo_C
class UAbility_Ring_Cond_LowAmmo_C : public UBP_InventoryAbility_C
{
public:
	uint8                                        Pad_40E0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x138(0x8)(Transient, DuplicateTransient)
	struct FTimerHandle                          Timer;                                             // 0x140(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        LowAmmoPercent;                                    // 0x148(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40E8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStatusEffectInstanceReference        LowAmmoRingStatus;                                 // 0x150(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UAbility_Ring_Cond_LowAmmo_C* GetDefaultObj();

	void QueryRingStatusEffect(bool* HasStatusEffect, const struct FStatusEffectQuery& K2Node_MakeStruct_StatusEffectQuery, const struct FStatusEffectQueryResult& CallFunc_QueryStatusEffect_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void OnDeactivated();
	void CheckPlayerLowAmmo();
	void OnActivated();
	void QueryAndRemoveStatusEffect();
	void ExecuteUbergraph_Ability_Ring_Cond_LowAmmo(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AWeapon* CallFunc_GetActiveWeapon_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, bool CallFunc_QueryRingStatusEffect_HasStatusEffect, bool CallFunc_QueryRingStatusEffect_HasStatusEffect1, bool CallFunc_Not_PreBool_ReturnValue, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, bool CallFunc_RemoveStatusEffect_ReturnValue);
};

}


