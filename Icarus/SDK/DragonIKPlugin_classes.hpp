#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// Class DragonIKPlugin.DragonIK_Library
class UDragonIK_Library : public UObject
{
public:
	uint8                                        Pad_3B[0x8];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDragonIK_Library* GetDefaultObj();

	struct FTransform QuatLookXatLocation(struct FTransform& LookAtFromTransform, struct FVector& LookAtTarget);
	struct FRotator LookAtVector_V2(const struct FVector& Source_Location, const struct FVector& LookAt, const struct FVector& UpDirection);
	struct FRotator LookAtRotation_V3(const struct FVector& Source, const struct FVector& Target, const struct FVector& UpVector);
	struct FRotator CustomLookRotation(const struct FVector& LookAt, const struct FVector& UpDirection);
};

}


