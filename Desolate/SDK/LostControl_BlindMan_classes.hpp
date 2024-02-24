#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x310 - 0x290)
// BlueprintGeneratedClass LostControl_BlindMan.LostControl_BlindMan_C
class ALostControl_BlindMan_C : public AGenericLostControlEffect_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x290(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FWeaponDetailedAnimMontageInfo        LostControlApplyAnimMontage;                       // 0x298(0x60)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FWeaponAnimMontageInfo                CurrentPlayingMontage;                             // 0x2F8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class ALostControl_BlindMan_C* GetDefaultObj();

	void OnApply();
	void OnFinish(bool bWasInterruptedByQTE);
	void ExecuteUbergraph_LostControl_BlindMan(int32 EntryPoint, bool K2Node_Event_bWasInterruptedByQTE, const struct FWeaponAnimMontageInfo& CallFunc_GetCurrentWeaponMontage_ReturnValue, float CallFunc_PlayWeaponAnimation_ReturnValue);
};

}


