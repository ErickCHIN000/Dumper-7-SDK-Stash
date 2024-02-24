#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x580 - 0x4C8)
// Class GVoiceWrapper.VoipInputAkComponent
class UVoipInputAkComponent : public UAkAudioInputComponent
{
public:
	class FString                                UniquePlayerId;                                    // 0x4C8(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkRtpc*                               SpeedModifierRtpc;                                 // 0x4D8(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsPlayerSpeaking;                                  // 0x4E0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1317[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<uint32, float>                          AuxSendGains;                                      // 0x4E8(0x50)(Transient, NativeAccessSpecifierPrivate)
	class UAkRtpc*                               CachedInteriorDistanceRtpc;                        // 0x538(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxPlayingAttenuationRadius;                       // 0x540(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        CachedSpeedModifier;                               // 0x544(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        SampleRate;                                        // 0x548(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        ChannelCount;                                      // 0x54C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1327[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVoipInputAkComponent* GetDefaultObj();

};

// 0x2F0 (0x320 - 0x30)
// Class GVoiceWrapper.VoipWrapperSubsystem
class UVoipWrapperSubsystem : public UWorldSubsystem
{
public:
	uint8                                        Pad_1371[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ConfigAppID;                                       // 0x40(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                ConfigAppKey;                                      // 0x50(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                ConfigServerInfo;                                  // 0x60(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                PartyInputEventPath;                               // 0x70(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                PublicInputEventPath;                              // 0x80(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                LocalUserLoopbackEventPath;                        // 0x90(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                PlaySpeedRtpcPath;                                 // 0xA0(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         EnableInPIE;                                       // 0xB0(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_137A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAudioEvent*                         PartyInputReceiveEvent;                            // 0xB8(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAkAudioEvent*                         PublicInputReceiveEvent;                           // 0xC0(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAkAudioEvent*                         LocalUserLoopbackEvent;                            // 0xC8(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAkRtpc*                               PlaySpeedModRtpc;                                  // 0xD0(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                LocalPlayerId;                                     // 0xD8(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                RealmRoomId;                                       // 0xE8(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                ActivePartyRoomId;                                 // 0xF8(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTimerHandle                          TimerHandler;                                      // 0x108(0x8)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class FString>                        ActiveRooms;                                       // 0x110(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	class UMutePlayerSubsystem*                  MuteSubsystem;                                     // 0x120(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FVoipRoomMemberInfo>           RoomMembersInfo;                                   // 0x128(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<class UVoipInputAkComponent*>         ActiveInputs;                                      // 0x138(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UVoipInputAkComponent*                 LocalUserInput;                                    // 0x148(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1390[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FString, class FString>           PlayerUniqueIdToNameMap;                           // 0x160(0x50)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1393[0x170];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVoipWrapperSubsystem* GetDefaultObj();

	void OnMuteStatusChanged(const class FString& UniquePlayerId, enum class EMuteAction MuteAction);
};

}


