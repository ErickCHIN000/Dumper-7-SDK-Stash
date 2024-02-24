#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x90 - 0x80)
// BlueprintGeneratedClass BPItemEffectParry_BonusDamage.BPItemEffectParry_BonusDamage_C
class UBPItemEffectParry_BonusDamage_C : public UBPItemEffectParryBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x80(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        DmgMultiplierBonus;                                // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DmgMultiplierBonusIfFamiliar;                      // 0x8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBPItemEffectParry_BonusDamage_C* GetDefaultObj();

	void OnParry(class ABaseCharacter_C* ParriedEnemy);
	void OnDmgHappened();
	void ExecuteUbergraph_BPItemEffectParry_BonusDamage(int32 EntryPoint, bool Temp_bool_Variable, class ABaseCharacter_C* K2Node_Event_ParriedEnemy, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable_1, float K2Node_Select_Default, float CallFunc_Subtract_FloatFloat_ReturnValue, float K2Node_Select_Default_1, float CallFunc_Add_FloatFloat_ReturnValue);
};

}


