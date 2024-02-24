#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x5C - 0x48)
// BlueprintGeneratedClass ShellUpgrade_Gland_Hadern.ShellUpgrade_Gland_Hadern_C
class UShellUpgrade_Gland_Hadern_C : public UShellUpgradeBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x48(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         bHPAdded;                                          // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bResolveSegmentAdded;                              // 0x51(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_290[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxHPBoost;                                        // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ResolveBonus;                                      // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UShellUpgrade_Gland_Hadern_C* GetDefaultObj();

	void ApplyMaxResolveBoost();
	void RemoveMaxResolveBoost();
	void OnGlandStateChanged_Event(bool bEnabled);
	void RemoveHPBoost();
	void ApplyHPBoost();
	void OnAbilityLost();
	void OnAbilityGained();
	void MaxResolveChanged();
	void ExecuteUbergraph_ShellUpgrade_Gland_Hadern(int32 EntryPoint, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1, int32 CallFunc_Subtract_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_FMin_ReturnValue, bool K2Node_CustomEvent_bEnabled, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, bool CallFunc_IsGlandOn_ReturnValue);
};

}


