#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass RALS_Animation_BPI.RALS_Animation_BPI_C
class IRALS_Animation_BPI_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IRALS_Animation_BPI_C* GetDefaultObj();

	void BPI_SetOverlayOverrideState(int32 OverlayOverrideState);
	void BPI_SetGroundedEntryState(enum class ERALS_GroundedEntryState GroundedEntryState);
	void BPI_Jumped();
};

}


