#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE (0x660 - 0x652)
// BlueprintGeneratedClass SpellActor_Meteor_Mod_03.SpellActor_Meteor_Mod_03_C
class ASpellActor_Meteor_Mod_03_C : public ASpellActor_Meteor_Base_C
{
public:
	uint8                                        Pad_428A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x658(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ASpellActor_Meteor_Mod_03_C* GetDefaultObj();

	void UserConstructionScript();
	void TrySpawnMeteor();
	void ExecuteUbergraph_SpellActor_Meteor_Mod_03(int32 EntryPoint);
};

}


