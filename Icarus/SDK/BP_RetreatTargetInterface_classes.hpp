#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_RetreatTargetInterface.BP_RetreatTargetInterface_C
class IBP_RetreatTargetInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBP_RetreatTargetInterface_C* GetDefaultObj();

	void GetRetreatExitLocation(struct FVector* WorldLocation, struct FRotator* WorldRotation);
	void GetRetreatEntryLocation(struct FVector* WorldLocation, struct FRotator* WorldRotation);
};

}


