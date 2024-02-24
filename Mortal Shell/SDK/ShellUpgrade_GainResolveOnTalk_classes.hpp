#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x60 - 0x48)
// BlueprintGeneratedClass ShellUpgrade_GainResolveOnTalk.ShellUpgrade_GainResolveOnTalk_C
class UShellUpgrade_GainResolveOnTalk_C : public UShellUpgradeBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x48(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class AActor*>                        AlreadyTalkedList;                                 // 0x50(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UShellUpgrade_GainResolveOnTalk_C* GetDefaultObj();

	void OnAbilityGained();
	void OnAbilityLost();
	void OnTalk(class AActor* NPC);
	void ExecuteUbergraph_ShellUpgrade_GainResolveOnTalk(int32 EntryPoint, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class AActor* K2Node_CustomEvent_NPC, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
};

}


