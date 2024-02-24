#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE (0x2C8 - 0x2BA)
// BlueprintGeneratedClass Passive_Rogue_15.Passive_Rogue_15_C
class UPassive_Rogue_15_C : public U_Passive_Parent_C
{
public:
	uint8                                        Pad_155D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UPassive_Rogue_15_C* GetDefaultObj();

	void OakPassiveOnCausedElementalEffect(class AActor* Target, const struct FStatusEffectSpec& Spec);
	void ExecuteUbergraph_Passive_Rogue_15(int32 EntryPoint, class AActor* K2Node_Event_Target, const struct FStatusEffectSpec& K2Node_Event_Spec, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue);
};

}


