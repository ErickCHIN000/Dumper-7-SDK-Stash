#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x36 (0x2F0 - 0x2BA)
// BlueprintGeneratedClass Passive_KotC_19.Passive_KotC_19_C
class UPassive_KotC_19_C : public U_Passive_Parent_C
{
public:
	uint8                                        Pad_2D7E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_Passive_KotC_19; // 0x2C8(0x28)(None)

	static class UClass* StaticClass();
	static class UPassive_KotC_19_C* GetDefaultObj();

	void OnActivated();
	void ExecuteUbergraph_Passive_KotC_19(int32 EntryPoint, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier);
};

}


