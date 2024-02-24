#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_PortalArch.BPI_PortalArch_C
class IBPI_PortalArch_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_PortalArch_C* GetDefaultObj();

	void UpdatePortalState(enum class ETemporalPortalState PortalState);
};

}


