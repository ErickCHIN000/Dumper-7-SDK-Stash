#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x24 (0x1BC - 0x198)
// BlueprintGeneratedClass Ability_All_Guns_Reload_Companion.Ability_All_Guns_Reload_Companion_C
class UAbility_All_Guns_Reload_Companion_C : public UAbility_All_Enchantment_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x198(0x8)(Transient, DuplicateTransient)
	struct FDataTableValueHandle                 Duration_Handle;                                   // 0x1A0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        BuffDuration;                                      // 0x1B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAbility_All_Guns_Reload_Companion_C* GetDefaultObj();

	void Enchantment_OnReload(class AWeapon* EventWeapon, bool bCompleted, bool bAmmoGiven);
	void OnActivated();
	void OnDeactivated();
	void ExecuteUbergraph_Ability_All_Guns_Reload_Companion(int32 EntryPoint, class AWeapon* K2Node_Event_EventWeapon, bool K2Node_Event_bCompleted, bool K2Node_Event_bAmmoGiven, float CallFunc_GetDataTableValueFromHandle_ReturnValue, const struct FOakAbilityTimerSpec& K2Node_MakeStruct_OakAbilityTimerSpec, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue);
};

}


