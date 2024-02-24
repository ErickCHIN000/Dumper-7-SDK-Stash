#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EReplicatedTimerState : uint8
{
	INVALID                        = 0,
	PENDING                        = 1,
	ACTIVE                         = 2,
	PAUSED                         = 3,
	COMPLETE                       = 4,
	EReplicatedTimerState_MAX      = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x24 - 0xC)
// ScriptStruct ReplicatedTimers.ReplicatedTimerCheckpointData
struct FReplicatedTimerCheckpointData : public FFastArraySerializerItem
{
public:
	class FName                                  TimerName;                                         // 0xC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  Name;                                              // 0x14(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        ReachedAt;                                         // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bReached;                                          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_16C0[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x160 - 0x108)
// ScriptStruct ReplicatedTimers.ReplicatedTimerCheckpointDataArray
struct FReplicatedTimerCheckpointDataArray : public FFastArraySerializer
{
public:
	TArray<struct FReplicatedTimerCheckpointData> Items;                                             // 0x108(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_16CA[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ReplicatedTimers.ReplicatedTimerEvaluationRates
struct FReplicatedTimerEvaluationRates
{
public:
	float                                        ServerEvaluationRate;                              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        ClientEvaluationRate;                              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x34 (0x40 - 0xC)
// ScriptStruct ReplicatedTimers.ReplicatedTimerData
struct FReplicatedTimerData : public FFastArraySerializerItem
{
public:
	class FName                                  Name;                                              // 0xC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EReplicatedTimerState             State;                                             // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_16E0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StartedAt;                                         // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_16E5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimespan                             InitialTimespan;                                   // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_16E9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TotalPausedSeconds;                                // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTimespan                             AddedTimespan;                                     // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FReplicatedTimerEvaluationRates       EvaluationRates;                                   // 0x38(0x8)(NoDestructor, NativeAccessSpecifierPrivate)
};

// 0x58 (0x160 - 0x108)
// ScriptStruct ReplicatedTimers.ReplicatedTimerDataArray
struct FReplicatedTimerDataArray : public FFastArraySerializer
{
public:
	TArray<struct FReplicatedTimerData>          Items;                                             // 0x108(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_16F4[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ReplicatedTimers.BlueprintDelegateHandle
struct FBlueprintDelegateHandle
{
public:
	uint8                                        Pad_16FC[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


