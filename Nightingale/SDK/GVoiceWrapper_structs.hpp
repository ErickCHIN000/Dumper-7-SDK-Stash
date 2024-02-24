#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EVoipNotificationType : uint8
{
	Invalid                        = 0,
	JoinRoom                       = 1,
	LeaveRoom                      = 2,
	StartTalking                   = 3,
	StopTalking                    = 4,
	EVoipNotificationType_MAX      = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct GVoiceWrapper.VoipSampleMemBlock
struct FVoipSampleMemBlock
{
public:
	TArray<float>                                SampleData;                                        // 0x0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GVoiceWrapper.NotificationData
struct FNotificationData
{
public:
	class FString                                UniqueID;                                          // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVoipNotificationType             Type;                                              // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13A5[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


