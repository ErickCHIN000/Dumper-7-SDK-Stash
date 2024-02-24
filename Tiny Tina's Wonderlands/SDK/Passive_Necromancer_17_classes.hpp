#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x16 (0x2D0 - 0x2BA)
// BlueprintGeneratedClass Passive_Necromancer_17.Passive_Necromancer_17_C
class UPassive_Necromancer_17_C : public U_Passive_Parent_C
{
public:
	uint8                                        Pad_2706[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(Transient, DuplicateTransient)
	class UBPEventHub_PlayerCharacter_C*         PlayerEventHub;                                    // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPassive_Necromancer_17_C* GetDefaultObj();

	void OakPassiveOnCastSpell(class AGrenadeMod* SpellMod, class AOakCharacter_Player* EquippedPlayer);
	void OnActivated();
	void ExecuteUbergraph_Passive_Necromancer_17(int32 EntryPoint, class AGrenadeMod* K2Node_Event_SpellMod, class AOakCharacter_Player* K2Node_Event_EquippedPlayer, class UBPEventHub_PlayerCharacter_C* K2Node_DynamicCast_AsBPEvent_Hub_Player_Character, bool K2Node_DynamicCast_bSuccess);
};

}


