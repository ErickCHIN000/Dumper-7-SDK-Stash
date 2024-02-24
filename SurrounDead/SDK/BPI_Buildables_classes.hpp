#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_Buildables.BPI_Buildables_C
class IBPI_Buildables_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_Buildables_C* GetDefaultObj();

	void GetBuildType(enum class Enum_BuildingSnapTypes* Type);
	void RemoveModularBuilds();
	void Requires_Power_(bool* Required_);
	void OnDestroy(class AActor* Actor);
	void OnInteractBuildable(class AActor* Actor);
	void Power_Off(class AActor* Actor);
	void Power_On(class AActor* Actor);
};

}


