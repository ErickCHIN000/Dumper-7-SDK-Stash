#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass I_RotatingComponent.I_RotatingComponent_C
class II_RotatingComponent_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class II_RotatingComponent_C* GetDefaultObj();

	void GetDesiredRotation(struct FRotator* Rotation);
};

}


