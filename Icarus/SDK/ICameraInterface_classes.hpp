#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass ICameraInterface.ICameraInterface_C
class IICameraInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IICameraInterface_C* GetDefaultObj();

	void UpdateCamera(const struct FVector& InLocation, const struct FRotator& InRotation, float InFOV, bool ForceUpdate, struct FVector* OutLocation, struct FRotator* OutRotation, float* OutFOV, bool* Return);
};

}


