#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x5C - 0x48)
// BlueprintGeneratedClass ShellUpgrade_ModifyControllerFloat.ShellUpgrade_ModifyControllerFloat_C
class UShellUpgrade_ModifyControllerFloat_C : public UShellUpgradeBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x48(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                  Float;                                             // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        Delta;                                             // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UShellUpgrade_ModifyControllerFloat_C* GetDefaultObj();

	void OnAbilityLost();
	void OnAbilityGained();
	void ExecuteUbergraph_ShellUpgrade_ModifyControllerFloat(int32 EntryPoint, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, float CallFunc_Multiply_FloatFloat_ReturnValue);
};

}


