#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x40 - 0x38)
// Class CombatComponents.CCActivateCollisionNotifyWindow
class UCCActivateCollisionNotifyWindow : public UAnimNotify_PlayMontageNotifyWindow
{
public:
	enum class ECCCollisionPart                  CollisionPart;                                     // 0x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B06[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCCActivateCollisionNotifyWindow* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class CombatComponents.CCClearHitActorsNotify
class UCCClearHitActorsNotify : public UAnimNotify_PlayMontageNotify
{
public:

	static class UClass* StaticClass();
	static class UCCClearHitActorsNotify* GetDefaultObj();

};

// 0x150 (0x1F0 - 0xA0)
// Class CombatComponents.CCCollisionHandlerComponent
class UCCCollisionHandlerComponent : public UActorComponent
{
public:
	uint8                                        bTraceComplex : 1;                                 // Mask: 0x1, PropSize: 0x10xA0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_44 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_BAE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TraceRadius;                                       // 0xA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TraceCheckInterval;                                // 0xA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BB3[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSubclassOf<class AActor>>            IgnoredClasses;                                    // 0xB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class FName>                          IgnoredCollisionProfileNames;                      // 0xC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<enum class EObjectTypeQuery>          ObjectTypesToCollideWith;                          // 0xD0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        IgnoredActors;                                     // 0xE0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ECCCollisionPart                  ActivatedCollisionPart;                            // 0xF0(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BBC[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCCCollidingComponent>         ActiveCollidingComponents;                         // 0xF8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        bIsCollisionActivated : 1;                         // Mask: 0x1, PropSize: 0x10x108(0x1)(Net, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_46 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_BC0[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          TimerHandle_TraceCheck;                            // 0x110(0x8)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class FName, struct FVector>            LastFrameSocketLocations;                          // 0x118(0x50)(Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_BC4[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnHit;                                             // 0x170(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_BC9[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnCollisionActivated;                              // 0x198(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_BCD[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnCollisionDeactivated;                            // 0x1C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_BCF[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bDebug : 1;                                        // Mask: 0x1, PropSize: 0x10x1E8(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BD0[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCCCollisionHandlerComponent* GetDefaultObj();

	void UpdateCollidingComponents(TArray<struct FCCCollidingComponent>& CollidingComponents);
	void UpdateCollidingComponent(class UPrimitiveComponent* Component, TArray<class FName>& Sockets);
	void TraceCheckLoop();
	void SetActiveCollisionPart(enum class ECCCollisionPart CollisionPart);
	void OnRep_IsCollisionActivated();
	bool IsCollisionActivated();
	enum class ECCCollisionPart GetActivatedCollisionPart();
	void DrawHitSphere(const struct FVector& Location);
	void DrawDebugTrace(const struct FVector& Start, const struct FVector& End);
	void DeactivateCollision();
	void ClearHitActors();
	void ActivateCollision(enum class ECCCollisionPart CollisionPart);
};

// 0x8 (0x48 - 0x40)
// Class CombatComponents.CCRotateOwnerNotify
class UCCRotateOwnerNotify : public UAnimNotify_PlayMontageNotify
{
public:
	float                                        DegreesPerSecond;                                  // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxPossibleRotation;                               // 0x44(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCCRotateOwnerNotify* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class CombatComponents.CCRotateOwnerNotifyWindow
class UCCRotateOwnerNotifyWindow : public UAnimNotify_PlayMontageNotifyWindow
{
public:
	float                                        DegreesPerSecond;                                  // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C02[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCCRotateOwnerNotifyWindow* GetDefaultObj();

};

// 0x60 (0x100 - 0xA0)
// Class CombatComponents.CCRotatingOwnerComponent
class UCCRotatingOwnerComponent : public UActorComponent
{
public:
	uint8                                        bIsRotating : 1;                                   // Mask: 0x1, PropSize: 0x10xA0(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_4C : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_C94[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnRotatingStart;                                   // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_C98[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnRotatingEnd;                                     // 0xD8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_C99[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCCRotatingOwnerComponent* GetDefaultObj();

	void StopRotating();
	void StartRotatingWithLimit(float MaxPossibleRotation, float DegressPerSecond);
	void StartRotating(float Time, float DegressPerSecond);
	void SetOwnerRotation(struct FRotator& NewRotation);
	void NotifyOnRotatingStart();
	void NotifyOnRotatingEnd();
	bool IsRotating();
};

// 0x0 (0x28 - 0x28)
// Class CombatComponents.CCRotatingOwnerInterface
class ICCRotatingOwnerInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ICCRotatingOwnerInterface* GetDefaultObj();

	struct FRotator GetDesiredRotation();
};

}


