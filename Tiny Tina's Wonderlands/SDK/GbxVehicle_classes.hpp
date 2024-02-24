#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x110 (0x320 - 0x210)
// Class GbxVehicle.TurretMovementComponent
class UTurretMovementComponent : public UPawnMovementComponent
{
public:
	uint8                                        Pad_AB8[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              TurretRelativeRotation;                            // 0x228(0xC)(Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        MovementThresholdTolerance;                        // 0x234(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DurationBeforeStop;                                // 0x238(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AC1[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWwiseEvent*                           MovementStartEvent;                                // 0x240(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           MovementStopEvent;                                 // 0x248(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseRtpc*                            MovementSpeedRTPC;                                 // 0x250(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWwisePlaybackInstance                MovementAudioPlaybackInst;                         // 0x258(0x18)(Transient, NativeAccessSpecifierPublic)
	float                                        TimeSinceStop;                                     // 0x270(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AC6[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bDisableTickWhenNotOccupied;                       // 0x276(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReturnToZeroRotation;                             // 0x277(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsePlayersView;                                   // 0x278(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAimTowardsPlayersViewLocation;                    // 0x279(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ACB[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             RotationInputs;                                    // 0x27C(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             RotationMaxSpeed;                                  // 0x284(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             RotationDamping;                                   // 0x28C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableReturnToZeroRotationRate;                   // 0x294(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AD1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ReturnToZeroRotationRate;                          // 0x298(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bControlYawMovement;                               // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bControlPitchMovement;                             // 0x2A1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableMovementCollision;                          // 0x2A2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AD4[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  PivotSocket;                                       // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUpdatedComponentRequired;                         // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsePitchConstraints;                              // 0x2B1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AD6[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PitchMinConstraint;                                // 0x2B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PitchMaxConstraint;                                // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseYawConstraints;                                // 0x2BC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AD8[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        YawMinConstraint;                                  // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        YawMaxConstraint;                                  // 0x2C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ADB[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              RemoteTurretRelativeRotation;                      // 0x2E0(0xC)(Net, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_ADF[0x24];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 TurretControlOwner;                                // 0x310(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AE2[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTurretMovementComponent* GetDefaultObj();

	void UpdateTurretControlDependency();
	void UpdateParentInitialOffset();
	void SetRotationInputs(float XValue, float YValue);
	void ServerSetRotationInputs(const struct FVector2D& InRotationInputs);
};

// 0xB8 (0x578 - 0x4C0)
// Class GbxVehicle.Vehicle
class AVehicle : public APawn
{
public:
	uint8                                        Pad_B74[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMeshComponent*                Mesh;                                              // 0x4D0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TScriptInterface<class IVehicleMovementInterface> VehicleMovement;                                   // 0x4D8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_B79[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bUnpushable;                                       // 0x500(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B7D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnActorComponentAppliedFromAspectData;             // 0x508(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UTargetableComponent*                  CachedTargetableComponent;                         // 0x518(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDamageComponent*                      CachedDamageComponent;                             // 0x520(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDamageCauserComponent*                CachedDamageCauserComponent;                       // 0x528(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTargetingComponent*                   CachedTargetingComponent;                          // 0x530(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UVehiclePartSelectionData*             VehiclePartSelectionData;                          // 0x538(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UVehiclePartData*>              VehicleParts;                                      // 0x540(0x10)(Net, ZeroConstructor, Transient, RepNotify, Protected, NativeAccessSpecifierProtected)
	float                                        CharacterCollidingResistance;                      // 0x550(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B87[0x24];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AVehicle* GetDefaultObj();

	void SetTeam(class UTeam* Team);
	void RemoveVehiclePart(class UVehiclePartData* CharacterPart);
	void OnRep_VehicleParts();
	bool IsPowerSliding();
	bool IsInAir();
	class UTeamComponent* GetTeamComponent();
	class UTeam* GetTeam();
	class UTargetingComponent* GetTargetingComponent();
	class UTargetableComponent* GetTargetableComponent();
	int32 GetNumWheelsInAir();
	TArray<class UVehiclePartData*> GetEquipedParts();
	void AddVehiclePart(class UVehiclePartData* CharacterPart);
};

// 0x0 (0x360 - 0x360)
// Class GbxVehicle.VehicleInventoryBalanceStateComponent
class UVehicleInventoryBalanceStateComponent : public UInventoryBalanceStateComponent
{
public:

	static class UClass* StaticClass();
	static class UVehicleInventoryBalanceStateComponent* GetDefaultObj();

};

// 0x368 (0x398 - 0x30)
// Class GbxVehicle.VehicleBoostData
class UVehicleBoostData : public UGbxDataAsset
{
public:
	bool                                         bApplyFullThrottleWhenBoosting;                    // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BA1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinBoostDuration;                                  // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoostPhysicsParams                   GroundBoostParams;                                 // 0x38(0x150)(Edit, NativeAccessSpecifierPublic)
	struct FBoostPhysicsParams                   AirBoostParams;                                    // 0x188(0x150)(Edit, NativeAccessSpecifierPublic)
	class UGameResourcePoolData*                 BoostPoolData;                                     // 0x2D8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bContinuousStartCheck;                             // 0x2E0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BA7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxCondition*                         StartBoostCondition;                               // 0x2E8(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxCondition*                         StopBoostCondition;                                // 0x2F0(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStopConditionCanOverrideMinBoostDuration;         // 0x2F8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPauseWhenInAir;                                   // 0x2F9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BAB[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinStartBoostSpeed;                                // 0x2FC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinStartBoostAngle;                                // 0x300(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoostCooldownTime;                                 // 0x304(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInstantBoost;                                     // 0x308(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BAF[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InstantBoostCharges;                               // 0x30C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InstantBoostDuration;                              // 0x310(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bModifySteering;                                   // 0x314(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BB4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    SteeringRatioCurve;                                // 0x318(0x78)(Edit, NativeAccessSpecifierPublic)
	float                                        SteeringRatioInterpSpeed;                          // 0x390(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BB7[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVehicleBoostData* GetDefaultObj();

};

// 0xA0 (0x218 - 0x178)
// Class GbxVehicle.VehicleBoostComponent
class UVehicleBoostComponent : public UActorComponent
{
public:
	UMulticastDelegateProperty_                  OnBoostStarted;                                    // 0x178(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnBoostStopped;                                    // 0x188(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_C45[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVehicleBoostData*                     BoostData;                                         // 0x1B0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AVehicle*                              Vehicle;                                           // 0x1B8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C49[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bIsBoosting;                                       // 0x1C1(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_C4D[0x16];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameResourcePoolReference            BoostPool;                                         // 0x1D8(0x18)(Net, Transient, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_C4E[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVehicleBoostComponent* GetDefaultObj();

	void VehicleBoostEvent__DelegateSignature();
	void StopBoost(bool bForce);
	void StartBoost();
	void ResumeBoost();
	void RegisterBoostRegenerateEvent(float BoostTarget, UDelegateProperty_& BoostValueReachedDelegate);
	void PauseBoost();
	void OnRep_IsBoosting(bool bWasBoosting);
	void K2_BoostStopped();
	void K2_BoostStarted();
	float GetRelativeBoostSpeed();
	float GetMaxBoostPoolValue();
	float GetCurrentBoostPoolValue();
	int32 GetCurrentBoostChargesCount();
	bool GetBoostEnabled();
	struct FVector GetBoostDirection();
};

// 0x10 (0x290 - 0x280)
// Class GbxVehicle.VehiclePartData
class UVehiclePartData : public UInventoryPartData
{
public:
	class FName                                  VehicleArchetype;                                  // 0x280(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsAShield;                                        // 0x288(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C6F[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVehiclePartData* GetDefaultObj();

};

// 0x98 (0x210 - 0x178)
// Class GbxVehicle.VehicleAirControlComponent
class UVehicleAirControlComponent : public UActorComponent
{
public:
	float                                        YawControlForce;                                   // 0x178(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        PitchControlForce;                                 // 0x17C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FRuntimeFloatCurve                    ForceRatio;                                        // 0x180(0x78)(Edit, NativeAccessSpecifierPrivate)
	uint8                                        Pad_C7C[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AVehicle*                              Vehicle;                                           // 0x200(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_C7D[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVehicleAirControlComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxVehicle.VehicleContactPtModifierInterface
class IVehicleContactPtModifierInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IVehicleContactPtModifierInterface* GetDefaultObj();

};

// 0x160 (0x2D8 - 0x178)
// Class GbxVehicle.VehicleDigiThrustComponent
class UVehicleDigiThrustComponent : public UActorComponent
{
public:
	UMulticastDelegateProperty_                  OnDigiThrustStarted;                               // 0x178(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnDigiThrustCollision;                             // 0x188(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnDigiThrustEnd;                                   // 0x198(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnDigiThrustEndFinished;                           // 0x1A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                        TeleportMaxDist;                                   // 0x1B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TeleportDuration;                                  // 0x1BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseTeleportDirection;                             // 0x1C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReorientOnTeleport;                               // 0x1C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D1D[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReorientationRatio;                                // 0x1C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxCondition*                         TeleportCondition;                                 // 0x1C8(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameResourcePoolData*                 BoostPoolData;                                     // 0x1D0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumChargesOnFullResource;                          // 0x1D8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D26[0x1C];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TraceStepLength;                                   // 0x1F8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        GroundDetectionTraceLength;                        // 0x1FC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        GroundTraceRadius;                                 // 0x200(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        PathPtGroundHeight;                                // 0x204(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        ValidFloorAngle;                                   // 0x208(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        FloorMaxAngleDiffBetweenGroundTraces;              // 0x20C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        FloorMaxHeightDiffBetweenGroundTraces;             // 0x210(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        RefUpBlendWeight;                                  // 0x214(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bKeepLastValidGroundUpWhenInAir;                   // 0x218(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_D35[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AVehicle*                              Vehicle;                                           // 0x220(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameResourcePoolReference            BoostPool;                                         // 0x228(0x18)(Net, Transient, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	bool                                         bTeleportRequested;                                // 0x240(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_D43[0x7F];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UGbxAction>                DigithrustInAction;                                // 0x2C0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UGbxAction>                DigithrustOutAction;                               // 0x2C8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        DigithrustOutActionDuration;                       // 0x2D0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_D50[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVehicleDigiThrustComponent* GetDefaultObj();

	void SetTeleportDirection(struct FVector& WantedDirection);
	void RequestTeleport();
	void NetMulticast_OnDigiThrustStarted();
	void NetMulticast_OnDigiThrustEndFinished();
	void NetMulticast_OnDigiThrustEnd();
	void NetMulticast_OnDigiThrustCollision();
	bool IsTeleporting();
	float GetMaxBoostPoolValue();
	float GetCurrentBoostPoolValue();
	void DigiThrustEvent__DelegateSignature();
};

// 0x0 (0x230 - 0x230)
// Class GbxVehicle.VehicleFlightComponent
class UVehicleFlightComponent : public UFloatingPawnMovement
{
public:

	static class UClass* StaticClass();
	static class UVehicleFlightComponent* GetDefaultObj();

};

// 0x78 (0x790 - 0x718)
// Class GbxVehicle.VehicleHitchAttachPtComponent
class UVehicleHitchAttachPtComponent : public USphereComponent
{
public:
	class UPrimitiveComponent*                   UpdatedPrimitive;                                  // 0x718(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AttachTransitionLength;                            // 0x720(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AttachTransitionTolerance;                         // 0x724(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E00[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BrakeTorque;                                       // 0x740(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E06[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnStartAttachTransition;                           // 0x748(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	UMulticastDelegateProperty_                  OnAttached;                                        // 0x758(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	UMulticastDelegateProperty_                  OnDetached;                                        // 0x768(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	class UWheeledVehicleMovementComponentNW*    CachedAttachedVehicleMovementComp;                 // 0x778(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWheeledVehicleMovementComponentNW*    CachedMovementComponent;                           // 0x780(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E20[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVehicleHitchAttachPtComponent* GetDefaultObj();

	bool IsAttached();
	void HitchAttachAction__DelegateSignature(class AVehicle* FromVehicle);
};

// 0x70 (0x540 - 0x4D0)
// Class GbxVehicle.VehicleHitchComponent
class UVehicleHitchComponent : public UPhysicsConstraintComponent
{
public:
	bool                                         bCheckAutoAttach;                                  // 0x4D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E81[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnStartAttachTransition;                           // 0x4D8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	UMulticastDelegateProperty_                  OnAttached;                                        // 0x4E8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	UMulticastDelegateProperty_                  OnDetached;                                        // 0x4F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	float                                        HitchAttachCheckRadius;                            // 0x508(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        YawLimit;                                          // 0x50C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        PitchLimit;                                        // 0x510(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        HitchConstraintStiffness;                          // 0x514(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        HitchConstraintDamping;                            // 0x518(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E8D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UVehicleHitchAttachPtComponent*        AttachedPoint;                                     // 0x520(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AVehicle*                              OwningVehicle;                                     // 0x528(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWheeledVehicleMovementComponent*      OwningVehicleMovementComp;                         // 0x530(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E94[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVehicleHitchComponent* GetDefaultObj();

	void TeleportTrailerAndAttachToHitch(class AActor* TrailerToAttach);
	void HitchAttachAction__DelegateSignature(class AVehicle* FromVehicle);
	void DetachFromHitch();
	void AttachToHitch(class UVehicleHitchAttachPtComponent* AttachPtToAttach);
};

// 0x110 (0x288 - 0x178)
// Class GbxVehicle.VehicleHoverComponent
class UVehicleHoverComponent : public UActorComponent
{
public:
	UMulticastDelegateProperty_                  OnHoverEnabled;                                    // 0x178(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnHoverDisabled;                                   // 0x188(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                        RawStrafeInput;                                    // 0x198(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RawForwardInput;                                   // 0x19C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FReplicatedHoverComponentState        ReplicatedState;                                   // 0x1A0(0x18)(Net, Transient, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_EFC[0x1C];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ForceRefVel;                                       // 0x1D4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FRuntimeFloatCurve                    ForceCurve;                                        // 0x1D8(0x78)(Edit, NativeAccessSpecifierPrivate)
	float                                        DampingForce;                                      // 0x250(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        BrakingDampingForce;                               // 0x254(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTireConfig*                           TireConfigWhenStrafing;                            // 0x258(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        CustomGravityModifier;                             // 0x260(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bFaceControlRotation;                              // 0x264(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_F0D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TimeToFaceControlRotation;                         // 0x268(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_F11[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AVehicle*                              Vehicle;                                           // 0x270(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWheeledVehicleMovementComponentNW*    MovementComponentNW;                               // 0x278(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_F15[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVehicleHoverComponent* GetDefaultObj();

	void VehicleHoverEvent__DelegateSignature();
	void ServerUpdateState(bool InbIsEnabled, float InStrafeInput, float InForwardInput, const struct FRotator& InTargetRotation);
	bool IsHoverEnabled();
	void EnableHover(bool bEnable);
};

// 0x0 (0x28 - 0x28)
// Class GbxVehicle.VehicleMovementInterface
class IVehicleMovementInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IVehicleMovementInterface* GetDefaultObj();

	struct FVector2D GetDirectionBasedThrottleAndSteer(struct FVector2D& StickInput);
};

// 0x20 (0x478 - 0x458)
// Class GbxVehicle.VehiclePartActor
class AVehiclePartActor : public AActor
{
public:
	bool                                         bWeldSimulatedBodies;                              // 0x458(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bWeldedBodiesShouldModifyPhysicalProperties;       // 0x459(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bForwardDamageToParent;                            // 0x45A(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_FDD[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AVehicle*                              OwningVehicle;                                     // 0x460(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  ParentSocket;                                      // 0x468(0x8)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_FE4[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AVehiclePartActor* GetDefaultObj();

	void WeldActorToVehicle(class AActor* SpawnedPart);
	void ReceiveParentVehicleBeginPlay();
	void OnRep_ParentSocket();
	void OnRep_OwningVehicle();
};

// 0x0 (0x98 - 0x98)
// Class GbxVehicle.VehiclePartSelectionData
class UVehiclePartSelectionData : public UActorPartSelectionData
{
public:

	static class UClass* StaticClass();
	static class UVehiclePartSelectionData* GetDefaultObj();

};

// 0x1F0 (0x368 - 0x178)
// Class GbxVehicle.VehiclePowerSlideComponent
class UVehiclePowerSlideComponent : public UActorComponent
{
public:
	bool                                         bApplyHandbrake;                                   // 0x178(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInAirBehavior                    InAirBehavior;                                     // 0x179(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10F0[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxNumWheelsInAir;                                 // 0x17C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnStartPowerSlide;                                 // 0x180(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnEndPowerSlide;                                   // 0x190(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnStartPowerSlideBoost;                            // 0x1A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnEndPowerSlideBoost;                              // 0x1B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bIsPowerSliding;                                   // 0x1C0(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1102[0xB7];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AngleToConsiderDrift;                              // 0x278(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MinDriftVelThreshold;                              // 0x27C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        TimeInDriftDecayRate;                              // 0x280(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MinDriftDurationForBoost;                          // 0x284(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxDriftDurationForBoost;                          // 0x288(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_110B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    BoostCurve;                                        // 0x290(0x78)(Edit, NativeAccessSpecifierPrivate)
	float                                        MaxBoostForce;                                     // 0x308(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        PostDriftBoostDurationMin;                         // 0x30C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        PostDriftBoostDurationMax;                         // 0x310(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MinVelForPostDriftBoost;                           // 0x314(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FRelativeDirectionData                BoostDirection;                                    // 0x318(0x50)(Edit, NoDestructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UVehiclePowerSlideComponent* GetDefaultObj();

	void SetPowerSlideEnabled(bool bEnable);
	void ResumePowerSlide(class FName Reason);
	void PausePowerSlide(class FName Reason);
	void OnRep_IsPowerSliding(bool bWasPowerSliding);
	bool IsPowerSlidePaused();
	bool IsInPowerSlideBoost();
	bool GetPowerSlideEnabled();
	float GetCurrentBoostRatio();
	void CancelPowerSlide();
};

// 0x20 (0x130 - 0x110)
// Class GbxVehicle.GbxVehicleWheel
class UGbxVehicleWheel : public UVehicleWheel
{
public:
	float                                        SuspensionForceXOffset;                            // 0x110(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SuspensionForceYOffset;                            // 0x114(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SuspensionTravelDirection;                         // 0x118(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxAllowedLongitudinalSlipPerRotation;             // 0x124(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1139[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxVehicleWheel* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class GbxVehicle.VehicleCollisionResponseModificationContext
class UVehicleCollisionResponseModificationContext : public UObject
{
public:
	class AVehicle*                              Collider;                                          // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AVehicle*                              Collidee;                                          // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UVehicleCollisionResponseModificationContext* GetDefaultObj();

};

// 0x788 (0xD40 - 0x5B8)
// Class GbxVehicle.WheeledVehicleMovementComponentNW
class UWheeledVehicleMovementComponentNW : public UWheeledVehicleMovementComponent4W
{
public:
	uint8                                        Pad_1367[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int8>                                 DrivenWheels;                                      // 0x5C0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EVehicleDriveType                 VehicleDriveType;                                  // 0x5D0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_136D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ForwardMarginOfError;                              // 0x5D4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ContiguousMovementDirectionThreshold;              // 0x5D8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ContiguousMovementDirectionSpeedThreshold;         // 0x5DC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bContiguousMovementAppliesToReverse;               // 0x5E0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOversteerFixupEnabled;                            // 0x5E1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1379[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    OversteerFixupCurve;                               // 0x5E8(0x78)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_137C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bAerialRotationalDampingEnabled;                   // 0x664(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_137F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RisingAerialRotationDampingFactor;                 // 0x668(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AerialRotationalDamping;                           // 0x66C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AerialRotationalDeviationAngle;                    // 0x670(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAerialAutoStabilizationEnabled;                   // 0x674(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_138A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RisingAerialAutoStabilizationFactor;               // 0x678(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AerialAutoStabilization;                           // 0x67C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseAutoUnflip;                                    // 0x680(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_138E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             AutoUnflipAngleRange;                              // 0x684(0x8)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AutoUnflipEaseInZone;                              // 0x68C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    AutoUnflipCurve;                                   // 0x690(0x78)(Edit, NativeAccessSpecifierPublic)
	float                                        AutoUnflipForce;                                   // 0x708(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1396[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    TankTreadInputDifferenceCurve;                     // 0x710(0x78)(Edit, NativeAccessSpecifierPublic)
	float                                        MaxTreadThrustOvershootValue;                      // 0x788(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_139B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    BrakeWhenTurningRatioCurve;                        // 0x790(0x78)(Edit, NativeAccessSpecifierPublic)
	float                                        OppositeThreadSpeedWhenTurningInPlace;             // 0x808(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CustomGravityModifier;                             // 0x80C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GroundedCustomGravityModifier;                     // 0x810(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableSteeringCurve;                              // 0x814(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13AB[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnBecameAirborn;                                   // 0x820(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLanded;                                          // 0x830(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_13B1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bLateralToLongitudinalVelocityShiftEnabled;        // 0x844(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13B3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    LateralToLongitudinalVelocityShiftCurve;           // 0x848(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    TireForcesRatioToSlopeAngleCurve;                  // 0x8C0(0x78)(Edit, NativeAccessSpecifierPublic)
	float                                        BalanceAssistMaxSpeed;                             // 0x938(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseSagittalBalanceCurve;                          // 0x93C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13BF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    SagittalBalanceCurve;                              // 0x940(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    SagittalBalanceSpeedCurve;                         // 0x9B8(0x78)(Edit, NativeAccessSpecifierPublic)
	float                                        SagitalBlendSpeed;                                 // 0xA30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EBrakingSagitalBlendSpeed;                         // 0xA34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EBrakingSagittalAngleRefSpeedKmH;                  // 0xA38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EBrakingSagitalLeanAngle;                          // 0xA3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseCoronalBalanceCurve;                           // 0xA40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13DD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    CoronalBalanceCurve;                               // 0xA48(0x78)(Edit, NativeAccessSpecifierPublic)
	bool                                         bUseBrakeAssist;                                   // 0xAC0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseHandBrakeAssist;                               // 0xAC1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApplyBrakeAssistOnLatForces;                      // 0xAC2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13E5[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BrakeAssistForceScale;                             // 0xAC4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    BrakeAssistCurve;                                  // 0xAC8(0x78)(Edit, NativeAccessSpecifierPublic)
	bool                                         bCanHandbrake;                                     // 0xB40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseUTurnAssist;                                   // 0xB41(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bActivateUTurnAssistOnHandbrake;                   // 0xB42(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13EF[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxCondition*                         ActivateUTurnAssistCondition;                      // 0xB48(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApplyUTurnAssistInAir;                            // 0xB50(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13F5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        UTurnAssistForce;                                  // 0xB54(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UTurnAssistForceInterpSpeed;                       // 0xB58(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UTurnAssistForceReturnToZeroInterpSpeed;           // 0xB5C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UTurnAssistRefSpeed;                               // 0xB60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UTurnAssistMaxAngularVelInfluence;                 // 0xB64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    UTurnAssistCurve;                                  // 0xB68(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    LiquidBodyWheelDepthToForceCurve;                  // 0xBE0(0x78)(Edit, NativeAccessSpecifierPublic)
	float                                        LiquidBodyDampingCoefficient;                      // 0xC58(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1407[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          CollisionResponseFormula;                          // 0xC60(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        AngleToUpsideDown;                                 // 0xC98(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_140A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPhysicalMaterial*                     DefaultPhysicalMaterial;                           // 0xCA0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPhysicalMaterial*                     UpsideDownPhysicalMaterial;                        // 0xCA8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDontMoveWhenCollided;                             // 0xCB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_140C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           CryoPenaltyCurve;                                  // 0xCB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAntiRollBarData>              AntiRollBars;                                      // 0xCC0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1411[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UVehicleCollisionResponseModificationContext* CollisionResponseContext;                          // 0xCF8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1413[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWheeledVehicleMovementComponentNW* GetDefaultObj();

	void SetToRestState();
	void SetSteerAngle(float SteerAngle, int32 WheelIndex);
	void SetSagittalBalancingEnabled(bool bEnable);
	void SetOversteerFixupEnabled(bool bEnable);
	void SetNoDriveSteerAngle(float SteerAngle, int32 WheelIndex);
	void SetNoDriveDriveTorque(float DriveTorque, int32 WheelIndex);
	void SetNoDriveBrakeTorque(float BrakeTorque, int32 WheelIndex);
	void SetLateralToLongitudinalVelocityShiftEnabled(bool bEnable);
	void SetCustomGravityModifier(float NewModifier);
	void SetCoronalBalancingEnabled(bool bEnable);
	void SetAerialRotationalDampingEnabled(bool bEnable);
	void ResetCustomGravityModifer();
	bool IsInAir();
	bool GetSagittalBalancingEnabled();
	bool GetOversteerFixupEnabled();
	int32 GetNumWheelsInAir();
	bool GetLateralToLongitudinalVelocityShiftEnabled();
	struct FVector2D GetDirectionBasedThrottleAndSteer(struct FVector2D& StickInput);
	float GetCustomGravityModifier();
	bool GetCoronalBalancingEnabled();
	struct FVector2D GetCameraRelativeThrottleAndSteer(struct FVector2D& StickInput, float* WantedDirAngle, enum class EVehicleCameraRelativeDrivingMode Mode, class UCurveFloat* AngleToSteeringCurve);
	bool GetAerialRotationalDampingEnabled();
	void ApplyAngularVelocityInfluence(float DeltaTime, float MaxInfluence, float Pitch, float Roll, float Yaw);
};

}


