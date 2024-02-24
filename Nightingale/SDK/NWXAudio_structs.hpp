#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EScopedAkComponentState : uint8
{
	Invalid                        = 0,
	Active                         = 1,
	Transition_OutOfRange          = 2,
	Idle                           = 3,
	Transition_IdleTimeout         = 4,
	Suspended                      = 5,
	Transition_Resumed             = 6,
	EScopedAkComponentState_MAX    = 7,
};

enum class EAudioMixState : uint8
{
	Pause_Menu                     = 0,
	Loading_Screen                 = 1,
	PlayerReady_Screen             = 2,
	Main_Menu                      = 3,
	Default_NoMenu                 = 4,
	Fullscreen_Video               = 5,
	Loading_Video                  = 6,
	Downed_Screen                  = 7,
	Death_Screen                   = 8,
	Debug_Screen                   = 9,
	NPC_Chat_Screen                = 10,
	Map_Screen                     = 11,
	Crafting_Screen                = 12,
	Credits_Screen                 = 13,
	GuideBook_Screen               = 14,
	Inventory_Screen               = 15,
	Inventory_Container_Screen     = 16,
	JobBoard_Screen                = 17,
	Shop_Screen                    = 18,
	Social_Screen                  = 19,
	Realms_Map_Screen              = 20,
	Options_Screen                 = 21,
	EAudioMixState_MAX             = 22,
};

enum class EVoiceChatVoiceEffectMode : uint8
{
	Off                            = 0,
	Demon                          = 1,
	Robot                          = 2,
	MaleToFemale                   = 3,
	FemaleToMale                   = 4,
	Drunk                          = 5,
	PapiJiang                      = 6,
	Squirrel                       = 7,
	EVoiceChatVoiceEffectMode_MAX  = 8,
};

enum class EVoiceChatMode : uint8
{
	TeamOnly                       = 0,
	RealmAndTeam                   = 1,
	EVoiceChatMode_MAX             = 2,
};

enum class EVoiceChatMicMode : uint8
{
	PushToTalk                     = 0,
	Auto                           = 1,
	EVoiceChatMicMode_MAX          = 2,
};

enum class EAudioTreeQuadrant : uint8
{
	PositiveXPositiveY             = 0,
	NegativeXPositiveY             = 1,
	PositiveXNegativeY             = 2,
	NegativeXNegativeY             = 3,
	EAudioTreeQuadrant_MAX         = 4,
};

enum class EAudioVolumeControl : uint8
{
	Master                         = 0,
	Sfx                            = 1,
	Music                          = 2,
	Voice                          = 3,
	Emote                          = 4,
	VOIP                           = 5,
	EAudioVolumeControl_MAX        = 6,
};

enum class EPanningLaw : uint8
{
	PanningLaw_6dB                 = 0,
	PanningLaw_3dB                 = 1,
	PanningLaw_MAX                 = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x28 - 0x0)
// ScriptStruct NWXAudio.VoipRoomMemberInfo
struct FVoipRoomMemberInfo
{
public:
	class FString                                UniqueID;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsLocalPlayer;                                     // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         MicOpen;                                           // 0x11(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsMuted;                                           // 0x12(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsSpeaking;                                        // 0x13(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DFC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        ActiveRooms;                                       // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct NWXAudio.ReverbAux
struct FReverbAux
{
public:
	TArray<TSoftObjectPtr<class UPhysicalMaterial>> AppropriateMaterials;                              // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	class UAkAuxBus*                             AuxBus;                                            // 0x10(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDirectionalAuxBusses*                 DirectionalAuxBusses;                              // 0x18(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReverbTime;                                        // 0x20(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CanAssignToStructureVolumes;                       // 0x24(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E43[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Priority;                                          // 0x28(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxEnclosure;                                      // 0x2C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsExterior;                                        // 0x30(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E62[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NWXAudio.ReverbAuxTimeRange
struct FReverbAuxTimeRange
{
public:
	class UAkAuxBus*                             AuxBus;                                            // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDirectionalAuxBusses*                 DirectionalAuxBusses;                              // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LowerReverbTime;                                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UpperReverbTime;                                   // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NWXAudio.MaterialReverbProperties
struct FMaterialReverbProperties
{
public:
	TArray<struct FReverbAuxTimeRange>           SortedAuxBusRanges;                                // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        AbsorptionCoefficient;                             // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E8E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NWXAudio.ReverbLocationGainInfo
struct FReverbLocationGainInfo
{
public:
	uint8                                        Pad_2E9B[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct NWXAudio.ModularAcousticZone
struct FModularAcousticZone
{
public:
	TArray<class UAcousticOpeningComponent*>     Openings;                                          // 0x0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class UActorComponent*>               AcousticSpaceComponents;                           // 0x10(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class UDynamicAkGeometryComponent*>   DynamicGeometry;                                   // 0x20(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         IsDirty;                                           // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2ECE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct NWXAudio.OuterLayerQuadrantTreeInfo
struct FOuterLayerQuadrantTreeInfo
{
public:
	float                                        TreeCount;                                         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TreeDensity;                                       // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct NWXAudio.DynamicAudioComponentInfo
struct FDynamicAudioComponentInfo
{
public:
	class FName                                  AttachSocket;                                      // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2EE2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            LocalOffsetTransform;                              // 0x10(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct NWXAudio.AudioLine
struct FAudioLine
{
public:
	uint8                                        Pad_2EE6[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct NWXAudio.OverrideVoiceInfo
struct FOverrideVoiceInfo
{
public:
	uint8                                        Pad_2EEA[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXAudio.DecayingRTPCValue
struct FDecayingRTPCValue
{
public:
	float                                        InitialRTPCValue;                                  // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FinalRTPCValue;                                    // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DecayTime;                                         // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastResetTime;                                     // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct NWXAudio.PlayingEvent
struct FPlayingEvent
{
public:
	class UAkAudioEvent*                         AudioEvent;                                        // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F0F[0x78];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXAudio.AudioEventAndPriority
struct FAudioEventAndPriority
{
public:
	class UAkAudioEvent*                         AudioEvent;                                        // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Priority;                                          // 0x8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F1E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NWXAudio.EventWithRtpc
struct FEventWithRtpc
{
public:
	class UAkAudioEvent*                         StartEvent;                                        // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         StopEvent;                                         // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkRtpc*                               Rtpc;                                              // 0x10(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InterpolationTimeMS;                               // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F38[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct NWXAudio.MaterialPuddleOverride
struct FMaterialPuddleOverride
{
public:
	TSoftObjectPtr<class UPhysicalMaterial>      Material;                                          // 0x0(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PuddleOverride;                                    // 0x28(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F5A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXAudio.AudioMenuMixState
struct FAudioMenuMixState
{
public:
	class UAkStateValue*                         State;                                             // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAudioMixState                    StateId;                                           // 0x8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Active;                                            // 0x9(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F72[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x38 - 0x8)
// ScriptStruct NWXAudio.MaterialAcousticCoefficients
struct FMaterialAcousticCoefficients : public FTableRowBase
{
public:
	TSoftObjectPtr<class UPhysicalMaterial>      PhysicalMaterial;                                  // 0x8(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Obstruction;                                       // 0x30(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Occlusion;                                         // 0x34(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct NWXAudio.PostAndStopEvents
struct FPostAndStopEvents
{
public:
	class UAkAudioEvent*                         InitialEvent;                                      // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         StopEvent;                                         // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2FA1[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct NWXAudio.PlayingMaxAttenuation
struct FPlayingMaxAttenuation
{
public:
	uint8                                        Pad_2FAC[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct NWXAudio.RTPCValuePair
struct FRTPCValuePair
{
public:
	TSoftObjectPtr<class UAkRtpc>                Rtpc;                                              // 0x0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RTPCValue;                                         // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2FBF[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


