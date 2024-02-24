#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2E (0x2E8 - 0x2BA)
// BlueprintGeneratedClass Passive_Necromancer_04.Passive_Necromancer_04_C
class UPassive_Necromancer_04_C : public U_Passive_Parent_C
{
public:
	uint8                                        Pad_2DD6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(Transient, DuplicateTransient)
	float                                        DurationTimer;                                     // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DD9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 DurationTimerHandle;                               // 0x2D0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UPassive_Necromancer_04_C* GetDefaultObj();

	void OnActivated();
	void OakPassiveOnCastSpell(class AGrenadeMod* SpellMod, class AOakCharacter_Player* EquippedPlayer);
	void ExecuteUbergraph_Passive_Necromancer_04(int32 EntryPoint, class AGrenadeMod* K2Node_Event_SpellMod, class AOakCharacter_Player* K2Node_Event_EquippedPlayer, float CallFunc_GetDataTableValueFromHandle_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue);
};

}


