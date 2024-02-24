#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// Class GbxCameraModes.CameraBehavior
class UCameraBehavior : public UObject
{
public:
	uint8                                        bEnabled : 1;                                      // Mask: 0x1, PropSize: 0x10x28(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bUpdatePreViewTarget : 1;                          // Mask: 0x2, PropSize: 0x10x28(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bUpdateForRemoteClient : 1;                        // Mask: 0x4, PropSize: 0x10x28(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_35D[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCameraBehavior* GetDefaultObj();

	void Update(float DeltaTime, class UCameraState* State);
	void Start(class UCameraState* State);
	void End(class UCameraState* State);
};

// 0x78 (0xA8 - 0x30)
// Class GbxCameraModes.CameraBehavior_InitialRotation
class UCameraBehavior_InitialRotation : public UCameraBehavior
{
public:
	uint8                                        bControlPitch : 1;                                 // Mask: 0x1, PropSize: 0x10x30(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bControlYaw : 1;                                   // Mask: 0x2, PropSize: 0x10x30(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bInterruptedByInput : 1;                           // Mask: 0x4, PropSize: 0x10x30(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDisableInput : 1;                                 // Mask: 0x8, PropSize: 0x10x30(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_15 : 4;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_376[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInitialRotationAxisParams            Pitch;                                             // 0x38(0x30)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FInitialRotationAxisParams            Yaw;                                               // 0x68(0x30)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	class UGbxCondition*                         InitialCondition;                                  // 0x98(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37D[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCameraBehavior_InitialRotation* GetDefaultObj();

};

// 0x48 (0x78 - 0x30)
// Class GbxCameraModes.CameraBehavior_BlendToFOV
class UCameraBehavior_BlendToFOV : public UCameraBehavior
{
public:
	class UCurveFloat*                           FOVCurve;                                          // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddModifierToBaseFOV;                             // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_394[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FOVModifier;                                       // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxFOV;                                            // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendInTime;                                       // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendOutTime;                                      // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendInDelay;                                      // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxCondition*                         BlendInCondition;                                  // 0x50(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBlendOutWhenBlendInFails;                         // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxCondition*                         BlendOutCondition;                                 // 0x60(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentDelay;                                      // 0x68(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxFOVModifier;                                    // 0x6C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BlendPct;                                          // 0x70(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bTransitioningToTargetFoV;                         // 0x74(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3A3[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCameraBehavior_BlendToFOV* GetDefaultObj();

};

// 0x70 (0xA0 - 0x30)
// Class GbxCameraModes.CameraBehavior_Look
class UCameraBehavior_Look : public UCameraBehavior
{
public:
	enum class ECameraLookSpaces                 UpAxis;                                            // 0x30(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        YawSpeedScale;                                     // 0x34(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PitchSpeedScale;                                   // 0x38(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RollSpeedScale;                                    // 0x3C(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSnapOnStart : 1;                                  // Mask: 0x1, PropSize: 0x10x40(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_18 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3BC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCameraBehaviorLookAxis               AXIS[0x3];                                         // 0x44(0x48)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FGbxEasingFunc                        FeatheringFunction;                                // 0x8C(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C0[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCameraBehavior_Look* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class GbxCameraModes.CameraBehavior_FOV
class UCameraBehavior_FOV : public UCameraBehavior
{
public:
	float                                        FOV;                                               // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D5[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCameraBehavior_FOV* GetDefaultObj();

};

// 0x40 (0x70 - 0x30)
// Class GbxCameraModes.CameraBehavior_OffsetViewModel
class UCameraBehavior_OffsetViewModel : public UCameraBehavior
{
public:
	struct FVector                               LocationOffset;                                    // 0x30(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              RotationOffset;                                    // 0x3C(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               SplitScreenLocationOffset;                         // 0x48(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               VerticalSplitScreenLocationOffset;                 // 0x54(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               QuadSplitScreenLocationOffset;                     // 0x60(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F0[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCameraBehavior_OffsetViewModel* GetDefaultObj();

};

// 0x38 (0x2CB8 - 0x2C80)
// Class GbxCameraModes.PlayerCameraModesManager
class APlayerCameraModesManager : public AGbxPlayerCameraManager
{
public:
	uint8                                        Pad_410[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ViewTargetClippingRadius;                          // 0x2C98(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_411[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCameraModesManager*                   CameraModesManager;                                // 0x2CA0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                LastViewTarget;                                    // 0x2CA8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        ViewTargetFlags;                                   // 0x2CB0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_415[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class APlayerCameraModesManager* GetDefaultObj();

	void UpdateCameraShakeFromGbxFeedback(struct FActiveGbxFeedbackEffect& TrackedFeedback);
	void UpdateCameraShakeFromFeedback(struct FActiveTrackedFeedback* TrackedFeedback);
};

// 0x90 (0xB8 - 0x28)
// Class GbxCameraModes.CameraInputs
class UCameraInputs : public UObject
{
public:
	float                                        CurrentTime;                                       // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              RotationInput;                                     // 0x2C(0xC)(BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               AdditionalInput;                                   // 0x38(0xC)(BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AdditionalRoll;                                    // 0x44(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultFOV;                                        // 0x48(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultForegroundFOV;                              // 0x4C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               EyeLocation;                                       // 0x50(0xC)(BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_434[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              EyeRotation;                                       // 0x68(0xC)(BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_437[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              FacingRotation;                                    // 0x80(0xC)(BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               CollisionSafeLocation;                             // 0x8C(0xC)(BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                ViewTarget;                                        // 0x98(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                     Controller;                                        // 0xA0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       AttachComponent;                                   // 0xA8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AttachSocket;                                      // 0xB0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCameraInputs* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class GbxCameraModes.CameraBehavior_AnchorToEyeLocation
class UCameraBehavior_AnchorToEyeLocation : public UCameraBehavior
{
public:
	uint8                                        bSetRotation : 1;                                  // Mask: 0x1, PropSize: 0x10x30(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_450[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCameraBehavior_AnchorToEyeLocation* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class GbxCameraModes.CameraBehavior_AnchorToSocket
class UCameraBehavior_AnchorToSocket : public UCameraBehavior
{
public:
	uint8                                        bSetLocation : 1;                                  // Mask: 0x1, PropSize: 0x10x30(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSetRotation : 1;                                  // Mask: 0x2, PropSize: 0x10x30(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1C : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_456[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SocketName;                                        // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCameraBehavior_AnchorToSocket* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class GbxCameraModes.CameraBehavior_AutoFollowRotation
class UCameraBehavior_AutoFollowRotation : public UCameraBehavior
{
public:
	uint8                                        bKeepRelativeRotation : 1;                         // Mask: 0x1, PropSize: 0x10x30(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bRelativeToBase : 1;                               // Mask: 0x2, PropSize: 0x10x30(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bFollowPitch : 1;                                  // Mask: 0x4, PropSize: 0x10x30(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bFollowYaw : 1;                                    // Mask: 0x8, PropSize: 0x10x30(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bFollowRoll : 1;                                   // Mask: 0x10, PropSize: 0x10x30(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_1D : 3;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_466[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RotationRate;                                      // 0x34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_467[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCameraBehavior_AutoFollowRotation* GetDefaultObj();

};

// 0x18 (0x48 - 0x30)
// Class GbxCameraModes.CameraBehavior_CollisionDetection
class UCameraBehavior_CollisionDetection : public UCameraBehavior
{
public:
	float                                        CollisionRadius;                                   // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngleDegrees;                                      // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TraceOffsetBehind;                                 // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TraceOffsetZ;                                      // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseAnchorAsStartLocation;                         // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreChildToViewTarget;                          // 0x41(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreViewTargetAttachParent;                     // 0x42(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_486[0x5];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCameraBehavior_CollisionDetection* GetDefaultObj();

	void SetIsEnable(bool bIsEnabled);
};

// 0x10 (0x40 - 0x30)
// Class GbxCameraModes.CameraBehavior_CollisionOffsetTrace
class UCameraBehavior_CollisionOffsetTrace : public UCameraBehavior
{
public:
	float                                        CollisionRadius;                                   // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisableTrace;                                     // 0x34(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TraceOffsetZ;                                      // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseAnchorAsStartLocation;                         // 0x3C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreChildToViewTarget;                          // 0x3D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreViewTargetAttachParent;                     // 0x3E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49D[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCameraBehavior_CollisionOffsetTrace* GetDefaultObj();

};

// 0x18 (0x48 - 0x30)
// Class GbxCameraModes.CameraBehavior_DefaultFOV
class UCameraBehavior_DefaultFOV : public UCameraBehavior
{
public:
	float                                        Scale;                                             // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScaleSplitScreenHorizontal;                        // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScaleSplitScreenVertical;                          // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScaleSplitScreenQuad;                              // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxFOV;                                            // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4AD[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCameraBehavior_DefaultFOV* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class GbxCameraModes.CameraBehavior_FromAnimation
class UCameraBehavior_FromAnimation : public UCameraBehavior
{
public:
	uint8                                        bSetLocation : 1;                                  // Mask: 0x1, PropSize: 0x10x30(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSetRotation : 1;                                  // Mask: 0x2, PropSize: 0x10x30(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1F : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_4BD[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SocketName;                                        // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCameraBehavior_FromAnimation* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class GbxCameraModes.CameraBehavior_LimitLook
class UCameraBehavior_LimitLook : public UCameraBehavior
{
public:
	struct FRotator                              Min;                                               // 0x30(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              Max;                                               // 0x3C(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        bYawRelativeToBase : 1;                            // Mask: 0x1, PropSize: 0x10x48(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPitchRelativeToBase : 1;                          // Mask: 0x2, PropSize: 0x10x48(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRollRelativeToBase : 1;                           // Mask: 0x4, PropSize: 0x10x48(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSnapOnStart : 1;                                  // Mask: 0x8, PropSize: 0x10x48(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C8[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCameraBehavior_LimitLook* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class GbxCameraModes.CameraBehavior_LimitPitch
class UCameraBehavior_LimitPitch : public UCameraBehavior
{
public:
	float                                        MinPitch;                                          // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxPitch;                                          // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseInitialPitch;                                  // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4CE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InitialPitch;                                      // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCameraBehavior_LimitPitch* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class GbxCameraModes.CameraBehavior_OffsetAbsolute
class UCameraBehavior_OffsetAbsolute : public UCameraBehavior
{
public:
	struct FVector                               LocationOffset;                                    // 0x30(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D9[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCameraBehavior_OffsetAbsolute* GetDefaultObj();

};

// 0x18 (0x48 - 0x30)
// Class GbxCameraModes.CameraBehavior_OffsetCameraRelative
class UCameraBehavior_OffsetCameraRelative : public UCameraBehavior
{
public:
	struct FVector                               LocationOffset;                                    // 0x30(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              RotationOffset;                                    // 0x3C(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCameraBehavior_OffsetCameraRelative* GetDefaultObj();

};

// 0x70 (0xA0 - 0x30)
// Class GbxCameraModes.CameraBehavior_OffsetCameraRelativeFromInputs
class UCameraBehavior_OffsetCameraRelativeFromInputs : public UCameraBehavior
{
public:
	bool                                         bHackForDayOnePatch;                               // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4E5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LimitPitch;                                        // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CollisionRadius;                                   // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MoveSpeed;                                         // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBox                                  MoveLimit;                                         // 0x40(0x1C)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_4E8[0x44];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCameraBehavior_OffsetCameraRelativeFromInputs* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class GbxCameraModes.CameraBehavior_RestoreControllerRotation
class UCameraBehavior_RestoreControllerRotation : public UCameraBehavior
{
public:

	static class UClass* StaticClass();
	static class UCameraBehavior_RestoreControllerRotation* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class GbxCameraModes.CameraBehavior_RestoreStartRotation
class UCameraBehavior_RestoreStartRotation : public UCameraBehavior
{
public:
	struct FRotator                              Rotation;                                          // 0x30(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_4F0[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCameraBehavior_RestoreStartRotation* GetDefaultObj();

};

// 0x60 (0x88 - 0x28)
// Class GbxCameraModes.CameraMode
class UCameraMode : public UObject
{
public:
	class UCameraModeData*                       Data;                                              // 0x28(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UCameraBehavior*>               Behaviors;                                         // 0x30(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_4F5[0x48];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCameraMode* GetDefaultObj();

};

// 0x30 (0x60 - 0x30)
// Class GbxCameraModes.CameraModeData
class UCameraModeData : public UGbxDataAsset
{
public:
	class FName                                  ModeName;                                          // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendInTime;                                       // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bBlendOut : 1;                                     // Mask: 0x1, PropSize: 0x10x3C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsFirstPerson : 1;                                // Mask: 0x2, PropSize: 0x10x3C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShowViewModel : 1;                                // Mask: 0x4, PropSize: 0x10x3C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAllowPitchInversion : 1;                          // Mask: 0x8, PropSize: 0x10x3C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAutoPerspectiveOverride : 1;                      // Mask: 0x10, PropSize: 0x10x3C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bResetCameraRollOnStart : 1;                       // Mask: 0x20, PropSize: 0x10x3C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAllowIntentionalClipping : 1;                     // Mask: 0x40, PropSize: 0x10x3C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bInterruptTransitionWhenClipping : 1;              // Mask: 0x80, PropSize: 0x10x3C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIncludeInDebugRotation : 1;                       // Mask: 0x1, PropSize: 0x10x3D(0x1)(Edit, DuplicateTransient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_21 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_4F8[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EViewTargetRotationUpdateMethod   ViewTargetRotationUpdateMethod;                    // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECameraModeTransitionBlendType    FirstPersonBlendType;                              // 0x44(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECameraModeTransitionBlendType    ThirdPersonBlendType;                              // 0x45(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4FB[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UCameraBehavior*>               Behaviors;                                         // 0x48(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        bDisableSeparateTranslucency : 1;                  // Mask: 0x1, PropSize: 0x10x58(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4FC[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCameraModeData* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class GbxCameraModes.CameraModeSet
class UCameraModeSet : public UObject
{
public:
	class UCameraModeSetData*                    Data;                                              // 0x28(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UCameraMode*>                   Modes;                                             // 0x30(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UCameraModeSet* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class GbxCameraModes.CameraModeSetData
class UCameraModeSetData : public UGbxDataAsset
{
public:
	TArray<class UCameraModeData*>               Modes;                                             // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCameraModeSetData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxCameraModes.CameraModesFunctionLibrary
class UCameraModesFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UCameraModesFunctionLibrary* GetDefaultObj();

	void SetCameraMode(class APlayerController* Controller, class FName ModeName, float BlendTimeOverride, bool bTeleport, bool bForceResetMode);
	void ResetCameraRotation(class APlayerController* Controller, struct FRotator& NewRotation);
	void RemoveCameraModeSet(class APlayerController* Controller, class UCameraModeSetData* ModeSet);
	void PushCameraMode(class APlayerController* Controller, class FName ModeName, float BlendTimeOverride, bool bTeleport);
	void PopCameraMode(class APlayerController* Controller, class FName ModeName, float BlendTimeOverride, bool bTeleport);
	void ApplyCameraRotation(class APlayerController* Controller, struct FRotator& DeltaRotation);
	void AddCameraModeSet(class APlayerController* Controller, class UCameraModeSetData* ModeSet);
};

// 0x130 (0x158 - 0x28)
// Class GbxCameraModes.CameraModesManager
class UCameraModesManager : public UObject
{
public:
	bool                                         bIsClient;                                         // 0x28(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsRemote;                                         // 0x29(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A1[0x36];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FReplicatedCameraModeState            ReplicatedModeState;                               // 0x60(0x10)(Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bRemoteIsFirstPerson;                              // 0x70(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_5A6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          ModeNameStack;                                     // 0x78(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	class UCameraMode*                           CurrentMode;                                       // 0x88(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UCameraModeSet*>                ModeSets;                                          // 0x90(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	class UCameraInputs*                         Inputs;                                            // 0xA0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCameraState*                          State;                                             // 0xA8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_5AB[0x78];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoftClassPath                        CameraStateClassName;                              // 0x128(0x18)(Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FSoftClassPath                        CameraInputsClassName;                             // 0x140(0x18)(Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UCameraModesManager* GetDefaultObj();

};

// 0x728 (0x750 - 0x28)
// Class GbxCameraModes.CameraState
class UCameraState : public UObject
{
public:
	class UCameraInputs*                         Inputs;                                            // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPOV                                  POV;                                               // 0x30(0x1C)(BlueprintVisible, Transient, NoDestructor, NativeAccessSpecifierPublic)
	float                                        DefaultFOV;                                        // 0x4C(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AbsoluteLocationOffset;                            // 0x50(0xC)(BlueprintVisible, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               BaseLocationOffset;                                // 0x5C(0xC)(BlueprintVisible, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              BaseRotationOffset;                                // 0x68(0xC)(BlueprintVisible, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        BaseFOVOffset;                                     // 0x74(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CameraLocationOffset;                              // 0x78(0xC)(BlueprintVisible, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              CameraRotationOffset;                              // 0x84(0xC)(BlueprintVisible, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               ViewModelLocationOffset;                           // 0x90(0xC)(BlueprintVisible, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              ViewModelRotationOffset;                           // 0x9C(0xC)(BlueprintVisible, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ViewModelFOV;                                      // 0xA8(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultViewModelFOV;                               // 0xAC(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AspectRatio;                                       // 0xB0(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bConstrainAspectRatio : 1;                         // Mask: 0x1, PropSize: 0x10xB4(0x1)(BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsTransitioning : 1;                              // Mask: 0x2, PropSize: 0x10xB4(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsColliding : 1;                                  // Mask: 0x4, PropSize: 0x10xB4(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShowViewModel : 1;                                // Mask: 0x8, PropSize: 0x10xB4(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDisableSeparateTranslucency : 1;                  // Mask: 0x10, PropSize: 0x10xB4(0x1)(BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_26 : 1;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        bUpdatingInitialPitchRotation : 1;                 // Mask: 0x40, PropSize: 0x10xB4(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUpdatingInitialYawRotation : 1;                   // Mask: 0x80, PropSize: 0x10xB4(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_64C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              ClampedLookRotationRemainder;                      // 0xB8(0xC)(BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_64F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCameraStatePostProcessBlend>  PostProcessBlends;                                 // 0xC8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_652[0x50];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Focusdistance;                                     // 0x128(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_653[0x624];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCameraState* GetDefaultObj();

	void SetViewModelFOV(float NewFOV, bool bDefault);
	void SetBaseRotation(struct FRotator& NewRotation);
	void SetBaseLocation(struct FVector& NewLocation);
	void SetBaseFOV(float NewFOV, bool bDefault);
	void GetCollisionResult(enum class ECollisionStatusDirection Direction, bool* bHit, struct FVector* HitLocation);
	void GetCameraTransform(struct FVector* Location, struct FRotator* Rotation);
	struct FRotator GetBaseRotation();
	struct FVector GetBaseLocation();
	float GetBaseFOV();
	bool CameraTrace(const struct FVector& Start, const struct FVector& End, float Radius, enum class ECollisionChannel TraceChannel, uint8 IgnoreMask, struct FHitResult* OutHit);
	void AddPostProcessBlend(struct FPostProcessSettings& Settings, float BlendWeight);
};

// 0x0 (0x28 - 0x28)
// Class GbxCameraModes.CameraViewTargetInterface
class ICameraViewTargetInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ICameraViewTargetInterface* GetDefaultObj();

};

}


