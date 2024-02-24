#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x298 - 0x278)
// Class TwAudio.TwAkAmbientVolume
class ATwAkAmbientVolume : public AVolume
{
public:
	TArray<class UAkAudioEvent*>                 AkEvents;                                          // 0x278(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinInterval;                                       // 0x288(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxInterval;                                       // 0x28C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimerHandle                          TimerHandle;                                       // 0x290(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ATwAkAmbientVolume* GetDefaultObj();

};

// 0x8 (0x228 - 0x220)
// Class TwAudio.TwAkEmitterArrayActor
class ATwAkEmitterArrayActor : public AActor
{
public:
	uint8                                        Pad_3[0x8];                                        // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ATwAkEmitterArrayActor* GetDefaultObj();

};

// 0x80 (0x130 - 0xB0)
// Class TwAudio.TwAkEmitterArrayComponent
class UTwAkEmitterArrayComponent : public UActorComponent
{
public:
	class FString                                VoiceGroup;                                        // 0xB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumberOfVoices;                                    // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ActiveVoiceCount;                                  // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UpdateRateSeconds;                                 // 0xC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B[0x4];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAudioEvent*                         EventOnStartup;                                    // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IsMovingTolerance;                                 // 0xD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C[0x1C];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ATwAkEmitterArrayActor*>        VoiceEmitterActors;                                // 0xF8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         VoiceEnabled;                                      // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_D[0x27];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTwAkEmitterArrayComponent* GetDefaultObj();

	void PostEvent(class UAkAudioEvent* Event);
	void EnableVoice();
	void DisableVoice();
};

// 0x8 (0x280 - 0x278)
// Class TwAudio.TwAkReverbVolume
class ATwAkReverbVolume : public AVolume
{
public:
	class UAkLateReverbComponent*                LateReverbComponent;                               // 0x278(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ATwAkReverbVolume* GetDefaultObj();

};

// 0x30 (0x258 - 0x228)
// Class TwAudio.TwRTPCTrigger
class ATwRTPCTrigger : public ATriggerSphere
{
public:
	class FName                                  RTPCName;                                          // 0x228(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MinValue;                                          // 0x230(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxValue;                                          // 0x234(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        InterpolationTimeMs;                               // 0x238(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECollisionChannel                 PlayerCollisionChannel;                            // 0x23C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_16[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class APawn*>                         OverlappingPlayers;                                // 0x240(0x10)(ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SphereRadius;                                      // 0x250(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_18[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ATwRTPCTrigger* GetDefaultObj();

};

// 0x50 (0x280 - 0x230)
// Class TwAudio.TwAkSplineProximityEffectsComponent
class UTwAkSplineProximityEffectsComponent : public UAkLateReverbComponent
{
public:
	class FName                                  StateGroupName;                                    // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  StateName;                                         // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ActivationDistance;                                // 0x240(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAudioEvent*                         EventOnEntry;                                      // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         EventOnExit;                                       // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                PlayEventOn;                                       // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CollideWithPlayerCapsules;                         // 0x260(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_25[0x1F];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTwAkSplineProximityEffectsComponent* GetDefaultObj();

	void EndOverlap(class AActor* A1, class AActor* A2);
	void BeginOverlap(class AActor* A1, class AActor* A2);
};

// 0x1D0 (0x3F0 - 0x220)
// Class TwAudio.TwAmbienceMap
class ATwAmbienceMap : public AActor
{
public:
	class UAkAudioEvent*                         DefaultAudioEvent;                                 // 0x220(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         RedAudioEvent;                                     // 0x228(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         GreenAudioEvent;                                   // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         BlueAudioEvent;                                    // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         FireDefaultOnceOnEntry;                            // 0x240(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         FireRedOnceOnEntry;                                // 0x241(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         FireGreenOnceOnEntry;                              // 0x242(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         FireBlueOnceOnEntry;                               // 0x243(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UpdateRateSeconds;                                 // 0x244(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SecondsToMoveToNewPosition;                        // 0x248(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SpiralCheckScales;                                 // 0x24C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DrawHeatmapVisualization;                          // 0x250(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            AmbienceHeatmap;                                   // 0x258(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  WorldBoundsTag;                                    // 0x260(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    VisualizerMaterial;                                // 0x268(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDecalComponent*                       DebugOverlayDecal;                                 // 0x270(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInstanceDynamic*              DebugDecalMID;                                     // 0x278(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_31[0xF0];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ATwAkEmitterArrayActor*                Emitters[0x4];                                     // 0x370(0x20)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_33[0x60];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ATwAmbienceMap* GetDefaultObj();

};

// 0x28 (0x60 - 0x38)
// Class TwAudio.TwAnimNotify_PostAkEvent
class UTwAnimNotify_PostAkEvent : public UAnimNotify
{
public:
	class UAkAudioEvent*                         AkEvent;                                           // 0x38(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAttachToOwner : 1;                                // Mask: 0x1, PropSize: 0x10x40(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1 : 7;                                      // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_37[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  AttachName;                                        // 0x44(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bStopWhenOwnerDestroyed : 1;                       // Mask: 0x1, PropSize: 0x10x4C(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bNotifyAI : 1;                                     // Mask: 0x2, PropSize: 0x10x4C(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_2 : 6;                                      // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_38[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AINoiseStrength;                                   // 0x50(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AINoiseRange;                                      // 0x54(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAINoiseType                      AINoiseType;                                       // 0x58(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTwAnimNotify_PostAkEvent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class TwAudio.TwSoundShapeLibrary
class UTwSoundShapeLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UTwSoundShapeLibrary* GetDefaultObj();

};

// 0x40 (0x260 - 0x220)
// Class TwAudio.TwSplineEmitterBase
class ATwSplineEmitterBase : public AActor
{
public:
	class FString                                VoiceGroup;                                        // 0x220(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumberOfVoices;                                    // 0x230(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UpdateRateSeconds;                                 // 0x234(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         EventOnStartup;                                    // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40[0x10];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ATwAkEmitterArrayActor*>        VoiceEmitterActors;                                // 0x250(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class ATwSplineEmitterBase* GetDefaultObj();

};

}


