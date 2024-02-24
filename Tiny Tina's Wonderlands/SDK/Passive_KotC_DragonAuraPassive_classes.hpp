#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE (0x2C8 - 0x2BA)
// BlueprintGeneratedClass Passive_KotC_DragonAuraPassive.Passive_KotC_DragonAuraPassive_C
class UPassive_KotC_DragonAuraPassive_C : public U_Passive_Parent_C
{
public:
	uint8                                        Pad_5A0[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UPassive_KotC_DragonAuraPassive_C* GetDefaultObj();

	void OnActivated();
	void OnDeactivated();
	void OnPaused();
	void ExecuteUbergraph_Passive_KotC_DragonAuraPassive(int32 EntryPoint, class AActor* CallFunc_GetAbilityOwner_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue1, bool CallFunc_HasAbility_ReturnValue, bool CallFunc_HasAbility_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue);
};

}


