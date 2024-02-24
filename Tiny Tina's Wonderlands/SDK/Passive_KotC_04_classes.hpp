#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x230 - 0x200)
// BlueprintGeneratedClass Passive_KotC_04.Passive_KotC_04_C
class UPassive_KotC_04_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x200(0x8)(Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_Passive_KotC_04; // 0x208(0x28)(None)

	static class UClass* StaticClass();
	static class UPassive_KotC_04_C* GetDefaultObj();

	void GetSkillGrade(int32* Res);
	void OnActivated();
	void ExecuteUbergraph_Passive_KotC_04(int32 EntryPoint, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier);
};

}


