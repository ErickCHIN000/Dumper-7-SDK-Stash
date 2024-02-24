#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x518 - 0x510)
// BlueprintGeneratedClass GA_CreatureAbility_EotenOfferingRejection.GA_CreatureAbility_EotenOfferingRejection_C
class UGA_CreatureAbility_EotenOfferingRejection_C : public UGA_CreatureAbilityBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x510(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_CreatureAbility_EotenOfferingRejection_C* GetDefaultObj();

	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_CreatureAbility_EotenOfferingRejection(int32 EntryPoint, const struct FGameplayTag& Temp_struct_Variable);
};

}


