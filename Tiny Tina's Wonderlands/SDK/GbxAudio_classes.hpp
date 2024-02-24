#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class GbxAudio.ActiveAmbientLocationChooser
class UActiveAmbientLocationChooser : public UObject
{
public:

	static class UClass* StaticClass();
	static class UActiveAmbientLocationChooser* GetDefaultObj();

	struct FVector TransformLevelLocationToWorld(const struct FVector& Location);
};

// 0x0 (0x28 - 0x28)
// Class GbxAudio.ActiveAmbientLocationChooser_Blueprint
class UActiveAmbientLocationChooser_Blueprint : public UActiveAmbientLocationChooser
{
public:

	static class UClass* StaticClass();
	static class UActiveAmbientLocationChooser_Blueprint* GetDefaultObj();

	bool NominateSoundLocation(class UActiveAmbientSoundComponent* ActiveAmbientComponent, struct FVector* Out_Location, float Out_Radius);
	void InitLocationChooser(class UActiveAmbientSoundComponent* ActiveAmbientComponent);
};

// 0x20 (0x48 - 0x28)
// Class GbxAudio.ActiveAmbientLocationChooser_RandomWithinActor
class UActiveAmbientLocationChooser_RandomWithinActor : public UActiveAmbientLocationChooser
{
public:
	TLazyObjectPtr<class AActor>                 WithinActor;                                       // 0x28(0x1C)(Edit, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1F3[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UActiveAmbientLocationChooser_RandomWithinActor* GetDefaultObj();

};

// 0x10 (0x58 - 0x48)
// Class GbxAudio.ActiveAmbientLocationChooser_RandomWithTrace
class UActiveAmbientLocationChooser_RandomWithTrace : public UActiveAmbientLocationChooser_RandomWithinActor
{
public:
	struct FVector                               TraceVector;                                       // 0x48(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FA[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UActiveAmbientLocationChooser_RandomWithTrace* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class GbxAudio.ActiveAmbientLocationChooser_RandomOnCeiling
class UActiveAmbientLocationChooser_RandomOnCeiling : public UActiveAmbientLocationChooser_RandomWithTrace
{
public:

	static class UClass* StaticClass();
	static class UActiveAmbientLocationChooser_RandomOnCeiling* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class GbxAudio.ActiveAmbientLocationChooser_RandomOnFloor
class UActiveAmbientLocationChooser_RandomOnFloor : public UActiveAmbientLocationChooser_RandomWithTrace
{
public:

	static class UClass* StaticClass();
	static class UActiveAmbientLocationChooser_RandomOnFloor* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class GbxAudio.ActiveAmbientLocationChooser_PreselectedLocation
class UActiveAmbientLocationChooser_PreselectedLocation : public UActiveAmbientLocationChooser
{
public:
	uint8                                        Pad_21A[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       Locations;                                         // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                Radii;                                             // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UActiveAmbientLocationChooser_PreselectedLocation* GetDefaultObj();

	void UpdateLocations();
	void DrawLocations();
	bool AddLocation(struct FVector& InLocation, float InRadius);
};

// 0x38 (0x88 - 0x50)
// Class GbxAudio.ActiveAmbientLocationChooser_Party
class UActiveAmbientLocationChooser_Party : public UActiveAmbientLocationChooser_PreselectedLocation
{
public:
	float                                        PartierWeight;                                     // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PartierRadius;                                     // 0x54(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatInterval                        IntensityRange;                                    // 0x58(0x8)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PartyDecayPerNomination;                           // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVisualizeParty;                                   // 0x64(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PartyVisualizationLineLength;                      // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                PartyWeights;                                      // 0x70(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        TotalPartyWeight;                                  // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_231[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UActiveAmbientLocationChooser_Party* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxAudio.ActiveAmbientLocationValidator
class UActiveAmbientLocationValidator : public UObject
{
public:

	static class UClass* StaticClass();
	static class UActiveAmbientLocationValidator* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxAudio.ActiveAmbientLocationValidator_Blueprint
class UActiveAmbientLocationValidator_Blueprint : public UActiveAmbientLocationValidator
{
public:

	static class UClass* StaticClass();
	static class UActiveAmbientLocationValidator_Blueprint* GetDefaultObj();

	bool IsProposedLocationValid(class UActiveAmbientSoundComponent* ActiveAmbientComponent, struct FVector& Location);
};

// 0x8 (0x30 - 0x28)
// Class GbxAudio.ActiveAmbientLocationValidator_DistanceFromListener
class UActiveAmbientLocationValidator_DistanceFromListener : public UActiveAmbientLocationValidator
{
public:
	struct FFloatInterval                        Range;                                             // 0x28(0x8)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UActiveAmbientLocationValidator_DistanceFromListener* GetDefaultObj();

};

// 0x10 (0x468 - 0x458)
// Class GbxAudio.ActiveAmbientSound
class AActiveAmbientSound : public AActor
{
public:
	int32                                        TargetInstances;                                   // 0x458(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UActiveAmbientSoundComponent*          ActiveAmbientSound;                                // 0x460(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AActiveAmbientSound* GetDefaultObj();

	void EnableSounds();
	void DisableSounds();
};

// 0x90 (0x208 - 0x178)
// Class GbxAudio.ActiveAmbientSoundComponent
class UActiveAmbientSoundComponent : public UActorComponent
{
public:
	class UWwiseEvent*                           StartEvent;                                        // 0x178(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatInterval                        LoopDuration;                                      // 0x180(0x8)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           ExpiredStopEvent;                                  // 0x188(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExpiredStopFadeTime;                               // 0x190(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TargetSimultaneousInstances;                       // 0x194(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatInterval                        RepopulateDelay;                                   // 0x198(0x8)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActiveAmbientLocationChooser*         LocationChooser;                                   // 0x1A0(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActiveAmbientLocationValidator*       LocationValidator;                                 // 0x1A8(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UActiveAmbientUpdater*>         Updaters;                                          // 0x1B0(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bWaryOfPlayers;                                    // 0x1C0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_294[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WaryDistance;                                      // 0x1C4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           WaryStopEvent;                                     // 0x1C8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WaryStopFadeTime;                                  // 0x1D0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartleRecoveryTime;                               // 0x1D4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           StartedStopEvent;                                  // 0x1D8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartledStopFadeTime;                              // 0x1E0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A1[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FActiveAmbientInstance>        ActiveAmbientInstances;                            // 0x1E8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	float                                        NextSpawnTime;                                     // 0x1F8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeSinceLastSpawn;                                // 0x1FC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RemainingStartleRecovery;                          // 0x200(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A4[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UActiveAmbientSoundComponent* GetDefaultObj();

	void Startle(struct FVector& Location, float Radius);
};

// 0x0 (0x28 - 0x28)
// Class GbxAudio.ActiveAmbientUpdater
class UActiveAmbientUpdater : public UObject
{
public:

	static class UClass* StaticClass();
	static class UActiveAmbientUpdater* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxAudio.ActiveAmbientUpdater_Blueprint
class UActiveAmbientUpdater_Blueprint : public UActiveAmbientUpdater
{
public:

	static class UClass* StaticClass();
	static class UActiveAmbientUpdater_Blueprint* GetDefaultObj();

	void UpdateActiveAmbientInstance(class UActiveAmbientSoundComponent* ActiveAmbientComponent, struct FActiveAmbientInstance* ActiveAmbientInstance, float DeltaTime);
	void InitializeActiveAmbientInstance(class UActiveAmbientSoundComponent* ActiveAmbientComponent, struct FActiveAmbientInstance* ActiveAmbientInstance);
};

// 0x8 (0x30 - 0x28)
// Class GbxAudio.ActiveAmbientUpdater_MoveInRandomDirection
class UActiveAmbientUpdater_MoveInRandomDirection : public UActiveAmbientUpdater
{
public:
	struct FFloatInterval                        SpeedRange;                                        // 0x28(0x8)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UActiveAmbientUpdater_MoveInRandomDirection* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class GbxAudio.ActiveAmbientUpdater_MoveWithWobble
class UActiveAmbientUpdater_MoveWithWobble : public UActiveAmbientUpdater_MoveInRandomDirection
{
public:
	float                                        DirectionUpdateFrequency;                          // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DirectionUpdateCone;                               // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UActiveAmbientUpdater_MoveWithWobble* GetDefaultObj();

};

// 0x8 (0x540 - 0x538)
// Class GbxAudio.AmbientSoundBox
class AAmbientSoundBox : public AWwiseAmbientSound
{
public:
	class UBoxComponent*                         BoxComponent;                                      // 0x538(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AAmbientSoundBox* GetDefaultObj();

};

// 0x8 (0x540 - 0x538)
// Class GbxAudio.AmbientSoundSphere
class AAmbientSoundSphere : public AWwiseAmbientSound
{
public:
	class USphereComponent*                      SphereComponent;                                   // 0x538(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AAmbientSoundSphere* GetDefaultObj();

};

// 0x28 (0x560 - 0x538)
// Class GbxAudio.AmbientSoundSpline
class AAmbientSoundSpline : public AWwiseAmbientSound
{
public:
	class USplineComponent*                      SplineComponent;                                   // 0x538(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceEmitterUniformScale;                         // 0x540(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_349[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoxSphereBounds                      CachedBounds;                                      // 0x544(0x1C)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AAmbientSoundSpline* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class GbxAudio.AnimNotify_CharacterSound
class UAnimNotify_CharacterSound : public UAnimNotify
{
public:
	class UCharacterSoundTag*                    Tag;                                               // 0x38(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAnimNotify_CharacterSound* GetDefaultObj();

};

// 0x50 (0x88 - 0x38)
// Class GbxAudio.AnimNotify_Foley
class UAnimNotify_Foley : public UAnimNotify
{
public:
	struct FFoleyEventParams                     FoleyParams;                                       // 0x38(0x48)(Edit, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         bRestrictToMatchingPlayerPerspective;              // 0x80(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37E[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAnimNotify_Foley* GetDefaultObj();

};

// 0x8 (0x90 - 0x88)
// Class GbxAudio.AnimNotify_FootFoley
class UAnimNotify_FootFoley : public UAnimNotify_Foley
{
public:
	int32                                        FootIndex;                                         // 0x88(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_391[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAnimNotify_FootFoley* GetDefaultObj();

};

// 0x30 (0x68 - 0x38)
// Class GbxAudio.AnimNotify_WwiseEvent
class UAnimNotify_WwiseEvent : public UAnimNotify
{
public:
	class UWwiseEvent*                           WwiseEvent;                                        // 0x38(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWwiseNotifyComponentMethod       PlaybackMethod;                                    // 0x40(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A0[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  WwiseComponentTag;                                 // 0x48(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SocketName;                                        // 0x50(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAttachToOwner;                                    // 0x58(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        EmitterRadius;                                     // 0x5C(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnorePerspective;                                // 0x60(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAcousticsMode                    AcousticsMode;                                     // 0x61(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A9[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAnimNotify_WwiseEvent* GetDefaultObj();

};

// 0x80 (0xB0 - 0x30)
// Class GbxAudio.AnimNotifyState_LoopingSound
class UAnimNotifyState_LoopingSound : public UAnimNotifyState
{
public:
	class UWwiseEvent*                           StartEvent;                                        // 0x30(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           StopEvent;                                         // 0x38(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWwiseNotifyComponentMethod       PlaybackMethod;                                    // 0x40(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  WwiseComponentTag;                                 // 0x48(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SocketName;                                        // 0x50(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAttachToOwner;                                    // 0x58(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BF[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        EmitterRadius;                                     // 0x5C(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<uint32, struct FActiveLoopingSoundNotifyData> ActivePlaybackInstances;                           // 0x60(0x50)(BlueprintReadOnly, ZeroConstructor, Transient, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAnimNotifyState_LoopingSound* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxAudio.AudioDistanceThresholdSubscriberInterface
class IAudioDistanceThresholdSubscriberInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IAudioDistanceThresholdSubscriberInterface* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class GbxAudio.AudioDistanceThresholdManager
class UAudioDistanceThresholdManager : public UObject
{
public:
	uint8                                        Pad_3FD[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class UWorld>                 World;                                             // 0x30(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FADMSubscriberData>            SubscriberData;                                    // 0x38(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FE[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAudioDistanceThresholdManager* GetDefaultObj();

};

// 0x178 (0x1A0 - 0x28)
// Class GbxAudio.AudioOcclusionVoxelDataProvider
class UAudioOcclusionVoxelDataProvider : public UVoxelDataProvider
{
public:
	struct FIntVector                            DataResolution;                                    // 0x28(0xC)(Edit, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseMaterialLibrary;                               // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                TritonMaterialLibraryFile;                         // 0x38(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           ExtraTritonMaterialEquivalences;                   // 0x48(0x50)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 CheckCollisionChannel;                             // 0x98(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionResponse                CheckCollisionResponse;                            // 0x99(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVoxelizeFoliage;                                  // 0x9A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_421[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ExtraTerrainThickness;                             // 0x9C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFlagMatchingVoxels;                               // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_424[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAudioPrepComponentFilter             FlagVoxelsForComponentsFilter;                     // 0xA8(0xA8)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_426[0x50];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAudioOcclusionVoxelDataProvider* GetDefaultObj();

};

// 0x0 (0x458 - 0x458)
// Class GbxAudio.AudioOcclusionVoxelizerZone
class AAudioOcclusionVoxelizerZone : public AActor
{
public:

	static class UClass* StaticClass();
	static class AAudioOcclusionVoxelizerZone* GetDefaultObj();

	void Voxelize();
	void ExportAsRLE();
	void ExportAsRaw();
};

// 0x0 (0x28 - 0x28)
// Class GbxAudio.AudioPrepLocationConsumer
class IAudioPrepLocationConsumer : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IAudioPrepLocationConsumer* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxAudio.AudioPrepLocationFinder
class UAudioPrepLocationFinder : public UObject
{
public:

	static class UClass* StaticClass();
	static class UAudioPrepLocationFinder* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class GbxAudio.AudioPrepLocationFinder_Blueprint
class UAudioPrepLocationFinder_Blueprint : public UAudioPrepLocationFinder
{
public:
	TScriptInterface<class IAudioPrepLocationConsumer> CurrentConsumer;                                   // 0x28(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAudioPrepLocationFinder_Blueprint* GetDefaultObj();

	void AddLocation(const struct FVector& Location, const struct FRotator& Rotation, float Radius);
	void AddFoundLocations();
};

// 0x0 (0x28 - 0x28)
// Class GbxAudio.ActiveAmbientLocationFinder_Blueprint
class UActiveAmbientLocationFinder_Blueprint : public UAudioPrepLocationFinder
{
public:

	static class UClass* StaticClass();
	static class UActiveAmbientLocationFinder_Blueprint* GetDefaultObj();

	void AddFoundLocations(class UActiveAmbientSoundComponent* ActiveAmbientComponent, class UActiveAmbientLocationChooser_PreselectedLocation* PreselectedLocationChooser);
};

// 0x0 (0x28 - 0x28)
// Class GbxAudio.AudioPrepLocationFinder_ActorList
class UAudioPrepLocationFinder_ActorList : public UAudioPrepLocationFinder
{
public:

	static class UClass* StaticClass();
	static class UAudioPrepLocationFinder_ActorList* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxAudio.AudioPrepLocationFinder_FilteredComponents
class UAudioPrepLocationFinder_FilteredComponents : public UAudioPrepLocationFinder
{
public:

	static class UClass* StaticClass();
	static class UAudioPrepLocationFinder_FilteredComponents* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxAudio.AudioPrepLocationFinder_SplineTracer
class UAudioPrepLocationFinder_SplineTracer : public UAudioPrepLocationFinder
{
public:

	static class UClass* StaticClass();
	static class UAudioPrepLocationFinder_SplineTracer* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxAudio.AudioPrepLocationFinder_PincushionTracer
class UAudioPrepLocationFinder_PincushionTracer : public UAudioPrepLocationFinder
{
public:

	static class UClass* StaticClass();
	static class UAudioPrepLocationFinder_PincushionTracer* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxAudio.AudioPrepLocationFinder_TraceDownToActor
class UAudioPrepLocationFinder_TraceDownToActor : public UAudioPrepLocationFinder
{
public:

	static class UClass* StaticClass();
	static class UAudioPrepLocationFinder_TraceDownToActor* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxAudio.AudioPrepLocationFinder_FoliageLocations
class UAudioPrepLocationFinder_FoliageLocations : public UAudioPrepLocationFinder
{
public:

	static class UClass* StaticClass();
	static class UAudioPrepLocationFinder_FoliageLocations* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxAudio.AudioPrepLocationFinder_LandscapeGrassLocations
class UAudioPrepLocationFinder_LandscapeGrassLocations : public UAudioPrepLocationFinder
{
public:

	static class UClass* StaticClass();
	static class UAudioPrepLocationFinder_LandscapeGrassLocations* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxAudio.AudioPrepLocationFinder_InstanceLocations
class UAudioPrepLocationFinder_InstanceLocations : public UAudioPrepLocationFinder
{
public:

	static class UClass* StaticClass();
	static class UAudioPrepLocationFinder_InstanceLocations* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxAudio.AudioPrepLocationFinder_Grid
class UAudioPrepLocationFinder_Grid : public UAudioPrepLocationFinder
{
public:

	static class UClass* StaticClass();
	static class UAudioPrepLocationFinder_Grid* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxAudio.AudioPrepLocationFinder_TraceGrid
class UAudioPrepLocationFinder_TraceGrid : public UAudioPrepLocationFinder
{
public:

	static class UClass* StaticClass();
	static class UAudioPrepLocationFinder_TraceGrid* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxAudio.AudioPrepLocationFinder_VoxelMaterialBoundary
class UAudioPrepLocationFinder_VoxelMaterialBoundary : public UAudioPrepLocationFinder
{
public:

	static class UClass* StaticClass();
	static class UAudioPrepLocationFinder_VoxelMaterialBoundary* GetDefaultObj();

};

// 0x70 (0xA0 - 0x30)
// Class GbxAudio.CharacterSoundData
class UCharacterSoundData : public UGbxDataAsset
{
public:
	struct FGbxTriggerProperty                   TriggerRefreshAll;                                 // 0x30(0x1)(Edit, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_4F6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCharacterSoundData*                   InheritData;                                       // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInheritableSoundMap                  Sounds;                                            // 0x40(0x50)(Edit, NativeAccessSpecifierPublic)
	struct FInheritableVocalLoopList             VocalLoops;                                        // 0x90(0x10)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCharacterSoundData* GetDefaultObj();

	void RefreshAll();
};

// 0x0 (0x28 - 0x28)
// Class GbxAudio.CharacterSoundInterface
class ICharacterSoundInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ICharacterSoundInterface* GetDefaultObj();

};

// 0x1C0 (0x338 - 0x178)
// Class GbxAudio.CharacterSoundLogicComponent
class UCharacterSoundLogicComponent : public UActorComponent
{
public:
	uint8                                        Pad_4F9[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCurrentVocalization                  CurrentVocalization;                               // 0x180(0x20)(Transient, Protected, NativeAccessSpecifierProtected)
	struct FCurrentVocalLoopInfo                 CurrentVocalLoop;                                  // 0x1A0(0x48)(Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_4FA[0x150];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCharacterSoundLogicComponent* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class GbxAudio.CharacterSoundTag
class UCharacterSoundTag : public UGbxDataAsset
{
public:
	enum class ECharacterSoundType               Type;                                              // 0x30(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_503[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ChanceToPlay;                                      // 0x34(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHighPriorityInterruptingVox;                      // 0x38(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPainVox;                                          // 0x39(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeathVox;                                         // 0x3A(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_507[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  WwiseComponentTag;                                 // 0x40(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PlaybackSocket;                                    // 0x48(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCharacterSoundTag* GetDefaultObj();

};

// 0xC8 (0x520 - 0x458)
// Class GbxAudio.DistributedAmbientSound
class ADistributedAmbientSound : public AActor
{
public:
	uint8                                        Pad_51E[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWwiseEvent*>                   SoundVariants;                                     // 0x468(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EDistributedSoundMode             SoundMode;                                         // 0x478(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_51F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioPrepLocationFinder*              LocationFinder;                                    // 0x480(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTreatLocationsAsOneSource;                        // 0x488(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWwiseMultiPositionType           MultiPositionType;                                 // 0x489(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_522[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DOffset;                                           // 0x48C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DScale;                                            // 0x490(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxEmitterSize;                                    // 0x494(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CombinedSourceVolumeRatio;                         // 0x498(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseUnconditionalSampleModeForAcoustics;           // 0x49C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_526[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWwiseAudioComponent*>          AudioComponents;                                   // 0x4A0(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<uint8>                                PackedTreeData;                                    // 0x4B0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FBox                                  Bounds;                                            // 0x4C0(0x1C)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_529[0x44];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ADistributedAmbientSound* GetDefaultObj();

	void DoUpdateTree();
	void DoFindNewLocationsAndRebuild();
};

// 0x0 (0x458 - 0x458)
// Class GbxAudio.FluidSimExampleZone
class AFluidSimExampleZone : public AActor
{
public:

	static class UClass* StaticClass();
	static class AFluidSimExampleZone* GetDefaultObj();

	void UpdateVisualization();
	void ExportVectorField();
	void ApplyToOtherSim();
};

// 0x50 (0x320 - 0x2D0)
// Class GbxAudio.FoleyAccessoryComponent
class UFoleyAccessoryComponent : public USceneComponent
{
public:
	class UWwiseEvent*                           FoleyAccessoryWwiseEvent;                          // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           LoopStartWwiseEvent;                               // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccessoryVolume;                                   // 0x2E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccesoryPitch;                                     // 0x2E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccessoryRadius;                                   // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_54A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UFoleyMainComponent*                   MyFoleyMain;                                       // 0x2F0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_54B[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFoleyAccessoryComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxAudio.FoleyImplementerInterface
class IFoleyImplementerInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IFoleyImplementerInterface* GetDefaultObj();

};

// 0x100 (0x278 - 0x178)
// Class GbxAudio.FoleyMainComponent
class UFoleyMainComponent : public UActorComponent
{
public:
	class UWwiseEvent*                           FoleyMainWwiseEvent;                               // 0x178(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           LoopStartWwiseEvent;                               // 0x180(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           FootstepWwiseEvent;                                // 0x188(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UWwiseEvent*>                   PerFootFootstepWwiseEvents;                        // 0x190(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UWwiseSwitch*                          CharacterSizeSwitch;                               // 0x1A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FoleyVolume;                                       // 0x1A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FoleyPitch;                                        // 0x1AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FootstepVolume;                                    // 0x1B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FootstepPitch;                                     // 0x1B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          FootstepFoleyComponentTags;                        // 0x1B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        FoleyAccessoryVolume;                              // 0x1C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FoleyAccessoryPitch;                               // 0x1CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FExtraFoleyParameter>          ExtraParameters;                                   // 0x1D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        AttenuationScalingFactor;                          // 0x1E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_599[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFoleyEventParams                     CachedFootstepParams;                              // 0x1E8(0x48)(Transient, NativeAccessSpecifierPublic)
	class UWwiseSwitch*                          LastMaterialSwitch;                                // 0x230(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           SurfaceModifierEvent;                              // 0x238(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SurfaceModifierVolume;                             // 0x240(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SurfaceModifierFootstepVolumeMultiplier;           // 0x244(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UFoleyAccessoryComponent*>      AssociatedFoleyAccessories;                        // 0x248(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A4[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFoleyMainComponent* GetDefaultObj();

	void SetSurfaceModifier(class UWwiseEvent* PlayEvent, float Volume, float FootstepVolumeMultiplier);
	void PlayFootstepEvent(const struct FFoleyEventParams& EventParams);
	void PlayFootstep(const struct FVector& FootstepLocation, const struct FRotator& FootstepRotation, class UWwiseSwitch* MaterialSwitch, float VolumeAdjustment, float PitchAdjustment, class UWwiseEvent* ConfigureEvent, bool bPreview);
};

// 0x0 (0x28 - 0x28)
// Class GbxAudio.GbxAudioBlueprintLibrary
class UGbxAudioBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGbxAudioBlueprintLibrary* GetDefaultObj();

	void TriggerCharacterSound(class AActor* Character, class UCharacterSoundTag* SoundTag);
	void RemoveListenerAudioEffect(class AActor* Character, class UWwiseAuxBus* Efx);
	bool PassesAudioPreparationHitFilter(const struct FHitResult& Hit, struct FAudioPrepHitResultFilter& Filter);
	bool PassesAudioPreparationComponentFilter(class UPrimitiveComponent* Component, struct FAudioPrepComponentFilter& Filter);
	void ApplyListenerAudioEffect(class AActor* Character, class UWwiseAuxBus* Efx, float WetVolume, float DryVolume);
};

// 0x1B8 (0x1E8 - 0x30)
// Class GbxAudio.GbxAudioGlobalsData
class UGbxAudioGlobalsData : public UGbxDataAsset
{
public:
	class UWwiseEvent*                           PauseGameAudioEvent;                               // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           UnpauseGameAudioEvent;                             // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           PreLevelTransitionEvent;                           // 0x40(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           PostLevelTransitionEvent;                          // 0x48(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseRtpc*                            MasterVolumeParameter;                             // 0x50(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseRtpc*                            UserVolumeMusicParameter;                          // 0x58(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseRtpc*                            UserVolumeSfxParameter;                            // 0x60(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseRtpc*                            UserVolumeVOParameter;                             // 0x68(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseRtpc*                            UserVolumeHdrSfxParameter;                         // 0x70(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseRtpc*                            UserVolumeHdrVOParameter;                          // 0x78(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseRtpc*                            UserVolumeHdrMixRtpc;                              // 0x80(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseRtpc*                            UserPS4ControllerRtpc;                             // 0x88(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UWwiseBank*>                    AlwaysLoadedBanks;                                 // 0x90(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bEnableAcoustics;                                  // 0xA0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_654[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OcclusionStrength;                                 // 0xA4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatInterval                        RedirectionVolumeInterval;                         // 0xA8(0x8)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           EarlyReflectionsVolumeCurve;                       // 0xB0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           LateReverbVolumeCurve;                             // 0xB8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           ReverbBoostOutdoornessModifierCurve;               // 0xC0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReverbBoostDryGainFraction;                        // 0xC8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EarlyReflectionsReverbBoostStrength;               // 0xCC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LateReverbReverbBoostStrength;                     // 0xD0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeaponFireReverbBoost;                             // 0xD4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExplosionReverbBoost;                              // 0xD8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_668[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWwiseEvent*                           MusicVolumeSliderPreviewSound;                     // 0xE0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           MusicVolumeSliderPreviewSoundStop;                 // 0xE8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           SFXVolumeSliderPreviewSound;                       // 0xF0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           VOVolumeSliderPreviewSound;                        // 0xF8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           VoiceCommVolumeSliderPreviewSound;                 // 0x100(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           StartStandardCinematicModeEvent;                   // 0x108(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           EndStandardCinematicModeEvent;                     // 0x110(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           StartExclusiveCinematicModeEvent;                  // 0x118(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           EndExclusiveCinematicModeEvent;                    // 0x120(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCharacterSoundTag*                    JumpedVocalizationTag;                             // 0x128(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseRtpc*                            FootstepVolumeRtpc;                                // 0x130(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseRtpc*                            FoleyMainVolumeRtpc;                               // 0x138(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseRtpc*                            FoleyAccessoryVolumeRtpc;                          // 0x140(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseRtpc*                            FootstepPitchRtpc;                                 // 0x148(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseRtpc*                            FoleyMainPitchRtpc;                                // 0x150(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseRtpc*                            FoleyAccessoryPitchRtpc;                           // 0x158(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseRtpc*                            FoleyPerspectiveRtpc;                              // 0x160(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseRtpc*                            SurfaceModifierVolumeRtpc;                         // 0x168(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseSwitch*                          HighDetailFoleySwitch;                             // 0x170(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseSwitch*                          LowDetailFoleySwitch;                              // 0x178(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           FootstepAction;                                    // 0x180(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           HandPlantAction;                                   // 0x188(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FirstPersonFootstepsForwardOffset;                 // 0x190(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_689[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWwiseRtpc*                            CharacterRelativeSpeedRtpc;                        // 0x198(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseRtpc*                            CharacterRelativeVerticalAirSpeedRtpc;             // 0x1A0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseRtpc*                            WalkingSlopeRtpc;                                  // 0x1A8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseRtpc*                            WaterDepthRtpc;                                    // 0x1B0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseRtpc*                            RelativeWaterDepthRtpc;                            // 0x1B8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseRtpc*                            RandomVariationRtpc;                               // 0x1C0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseRtpc*                            PerspectiveRtpc;                                   // 0x1C8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseRtpc*                            ExplosionSizeRtpc;                                 // 0x1D0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseRtpc*                            PlayerLocationOutdoornessRTPC;                     // 0x1D8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseRtpc*                            OutdoornessRTPC;                                   // 0x1E0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxAudioGlobalsData* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class GbxAudio.GbxAudioSettings
class UGbxAudioSettings : public UObject
{
public:
	class UGbxAudioGlobalsData*                  AudioGlobalsData;                                  // 0x28(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                       DefaultAudioGlobalsData;                           // 0x30(0x18)(Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FoleyCullingDistanceFraction;                      // 0x48(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FoleyCullingDistanceMinVolumeForReduction;         // 0x4C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FoleyCullingDistanceReductionFractionPerDBOverMin; // 0x50(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6B3[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSoftObjectPath>               SkipCinematicEvents;                               // 0x58(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxAudioSettings* GetDefaultObj();

};

// 0x98 (0x368 - 0x2D0)
// Class GbxAudio.LightAudioComponent
class ULightAudioComponent : public USceneComponent
{
public:
	uint8                                        Pad_6E6[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class UWwiseRtpc*, float>               PersistentRTPCValues;                              // 0x2D8(0x50)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UWwiseEvent*>                   Loops;                                             // 0x328(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWwiseLocationOverride>        RelativeDetailedLocations;                         // 0x338(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bDynamicPosition;                                  // 0x348(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6EE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioDistanceThresholdManager*        SubscribedToManager;                               // 0x350(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6EF[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULightAudioComponent* GetDefaultObj();

	void SetRTPCValue(class UWwiseRtpc* GameParameter, float Value, bool bPersistent, float ValueChangeDuration, enum class EWwiseCurveInterpolation FadeCurve);
	struct FWwisePlaybackInstance PostWwiseEvent(class UWwiseEvent* WwiseEvent);
};

// 0xB8 (0x230 - 0x178)
// Class GbxAudio.MusicSequencerComponent
class UMusicSequencerComponent : public UActorComponent
{
public:
	uint8                                        Pad_71F[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BPM;                                               // 0x180(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SequencerLatencyInSeconds;                         // 0x184(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bKillLateEvents;                                   // 0x188(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_723[0x9F];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bRegisteredWithAudioDevice;                        // 0x228(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_725[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMusicSequencerComponent* GetDefaultObj();

	void StopSequence();
	void PostSequenceEvent(class UWwiseAudioComponent* WwiseComponent, class UWwiseEvent* WwiseEvent, int32 Note, int32 Velocity, int32 Channel, float StartBeat, float Duration);
	void PlaySequence();
	void PauseSequence();
	bool IsPlaying();
	float GetRealTimeUntilBeat(float Beat);
	float GetCurrentBeat();
};

// 0x0 (0x38 - 0x38)
// Class GbxAudio.ParticleModuleGbxAudioBase
class UParticleModuleGbxAudioBase : public UParticleModule
{
public:

	static class UClass* StaticClass();
	static class UParticleModuleGbxAudioBase* GetDefaultObj();

};

// 0x50 (0x88 - 0x38)
// Class GbxAudio.ParticleModuleGbxAudioLoop
class UParticleModuleGbxAudioLoop : public UParticleModuleGbxAudioBase
{
public:
	class UWwiseEvent*                           LoopStartEvent;                                    // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           LoopStopEvent;                                     // 0x40(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWwiseMultiPositionType           MultiPositionType;                                 // 0x48(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_738[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AudioComponentRadius;                              // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRawDistributionFloat                 GainOverLifetime;                                  // 0x50(0x38)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UParticleModuleGbxAudioLoop* GetDefaultObj();

};

// 0x50 (0x88 - 0x38)
// Class GbxAudio.ParticleModuleGbxAudioPool
class UParticleModuleGbxAudioPool : public UParticleModuleGbxAudioBase
{
public:
	class UWwiseEvent*                           AudioEvent;                                        // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxNumberOfAudioComponents;                        // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStealComponents;                                  // 0x44(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_748[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AudioComponentRadius;                              // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_749[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRawDistributionFloat                 GainOverLifetime;                                  // 0x50(0x38)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UParticleModuleGbxAudioPool* GetDefaultObj();

};

// 0x38 (0x3A0 - 0x368)
// Class GbxAudio.WindAudioLoopComponent
class UWindAudioLoopComponent : public ULightAudioComponent
{
public:
	class UWwiseRtpc*                            WindSpeedAudioParameter;                           // 0x368(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseRtpc*                            WindAccelerationAudioParameter;                    // 0x370(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWindDirectionalSensitivity           WindSensitivity;                                   // 0x378(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_751[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWindAudioLoopComponent* GetDefaultObj();

};

// 0x20 (0x198 - 0x178)
// Class GbxAudio.WwiseListenerEffectComponent
class UWwiseListenerEffectComponent : public UActorComponent
{
public:
	uint8                                        Pad_77E[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bRegisteredWithAudioDevice;                        // 0x180(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_781[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWwiseEffectInfo>              WwiseEffects;                                      // 0x188(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UWwiseListenerEffectComponent* GetDefaultObj();

	void RemoveAudioEffect(class UWwiseAuxBus* Efx);
	void RemoveAllAudioEffects();
	void ApplyAudioEffect(class UWwiseAuxBus* Efx, float WetPercent, float DryPercent);
};

}


