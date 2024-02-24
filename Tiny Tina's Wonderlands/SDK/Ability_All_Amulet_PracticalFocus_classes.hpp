#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE (0x140 - 0x132)
// BlueprintGeneratedClass Ability_All_Amulet_PracticalFocus.Ability_All_Amulet_PracticalFocus_C
class UAbility_All_Amulet_PracticalFocus_C : public UBP_InventoryAbility_C
{
public:
	uint8                                        Pad_4330[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x138(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAbility_All_Amulet_PracticalFocus_C* GetDefaultObj();

	void ExecuteUbergraph_Ability_All_Amulet_PracticalFocus(int32 EntryPoint);
};

}


