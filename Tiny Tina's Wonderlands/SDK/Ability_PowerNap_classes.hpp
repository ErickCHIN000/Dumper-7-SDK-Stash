#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x124 - 0x110)
// BlueprintGeneratedClass Ability_PowerNap.Ability_PowerNap_C
class UAbility_PowerNap_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x110(0x8)(Transient, DuplicateTransient)
	class AOakCharacter_Player*                  Owner;                                             // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AmpChargePercent;                                  // 0x120(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAbility_PowerNap_C* GetDefaultObj();

	void SetAmpValues(float Value);
	void OnActivated();
	void ExecuteUbergraph_Ability_PowerNap(int32 EntryPoint);
};

}


