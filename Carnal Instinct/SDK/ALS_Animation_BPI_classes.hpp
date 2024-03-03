#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass ALS_Animation_BPI.ALS_Animation_BPI_C
class IALS_Animation_BPI_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IALS_Animation_BPI_C* GetDefaultObj();

	void BPI_SetOverlayOverrideState(int32 OverlayOverrideState);
	void BPI_SetGroundedEntryState(enum class EGroundedEntryState GroundedEntryState);
	void BPI_Jumped();
};

}


