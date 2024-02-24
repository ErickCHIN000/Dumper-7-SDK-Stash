#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE (0x660 - 0x652)
// BlueprintGeneratedClass SpellActor_Meteor_DRains.SpellActor_Meteor_DRains_C
class ASpellActor_Meteor_DRains_C : public ASpellActor_Meteor_Mod_01_C
{
public:
	uint8                                        Pad_3F05[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x658(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ASpellActor_Meteor_DRains_C* GetDefaultObj();

	void UserConstructionScript();
	void TrySpawnMeteor();
	void ExecuteUbergraph_SpellActor_Meteor_DRains(int32 EntryPoint, bool CallFunc_RandomBoolWithWeight_ReturnValue, bool Temp_bool_Variable, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable1, class UClass* K2Node_Select_Default, const struct FForceSelection& CallFunc_Conv_FloatToForceSelection_ReturnValue, const struct FSpellLightProjectileInitializationData& K2Node_MakeStruct_SpellLightProjectileInitializationData);
};

}


