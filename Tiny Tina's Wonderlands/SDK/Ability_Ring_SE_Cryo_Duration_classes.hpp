#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE (0x140 - 0x132)
// BlueprintGeneratedClass Ability_Ring_SE_Cryo_Duration.Ability_Ring_SE_Cryo_Duration_C
class UAbility_Ring_SE_Cryo_Duration_C : public UBP_InventoryAbility_C
{
public:
	uint8                                        Pad_18CA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStatusEffectData*                     StatusEffect;                                      // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAbility_Ring_SE_Cryo_Duration_C* GetDefaultObj();

};

}


