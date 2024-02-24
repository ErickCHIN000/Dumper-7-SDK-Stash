#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0x1E0 - 0x138)
// Class Mercuna3DMovement.Mercuna3DMovementComponent
class UMercuna3DMovementComponent : public UPawnMovementComponent
{
public:
	uint8                                        Pad_125[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMercuna3DMovementProperties          MovementProperties;                                // 0x158(0x3C)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        bPositionCorrected : 1;                            // Mask: 0x1, PropSize: 0x10x194(0x1)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_C : 7;                                      // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_127[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               PendingImpulseToApply;                             // 0x198(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               Acceleration;                                      // 0x1A4(0xC)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               AngularVelocity;                                   // 0x1B0(0xC)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_12C[0x24];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMercuna3DMovementComponent* GetDefaultObj();

	void SetVelocity(const struct FVector& NewVelocity);
	void SetAngularVelocity(const struct FVector& NewAngVel);
	struct FVector GetLocalVelocity();
	struct FRotator GetLocalRotationRate();
	void AddImpulse(const struct FVector& Impulse);
};

// 0x0 (0x28 - 0x28)
// Class Mercuna3DMovement.Mercuna3DMovementInterface
class IMercuna3DMovementInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMercuna3DMovementInterface* GetDefaultObj();

};

}


