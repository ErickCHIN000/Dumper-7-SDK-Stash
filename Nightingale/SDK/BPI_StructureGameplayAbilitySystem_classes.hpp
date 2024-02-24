#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_StructureGameplayAbilitySystem.BPI_StructureGameplayAbilitySystem_C
class IBPI_StructureGameplayAbilitySystem_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_StructureGameplayAbilitySystem_C* GetDefaultObj();

	void RemoveGameplayTagFromStructure(const struct FGameplayTag& GameplayTag);
	void AddGameplayTagToStructure(const struct FGameplayTag& GameplayTag);
};

}


