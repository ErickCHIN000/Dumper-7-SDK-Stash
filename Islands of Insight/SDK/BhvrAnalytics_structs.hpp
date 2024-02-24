#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x50 - 0x0)
// ScriptStruct BhvrAnalytics.BhvrAnalyticsEvent_Session
struct FBhvrAnalyticsEvent_Session
{
public:
	class FString                                SessionId;                                         // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SessionPlatform;                                   // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SessionBuild;                                      // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        SessionOrder;                                      // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             SessionBeginTime;                                  // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SessionCohort;                                     // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x60 - 0x50)
// ScriptStruct BhvrAnalytics.BhvrAnalyticsEvent_Achievement
struct FBhvrAnalyticsEvent_Achievement : public FBhvrAnalyticsEvent_Session
{
public:
	class FString                                Achievement;                                       // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x68 - 0x50)
// ScriptStruct BhvrAnalytics.BhvrAnalyticsEvent_LoadingTime
struct FBhvrAnalyticsEvent_LoadingTime : public FBhvrAnalyticsEvent_Session
{
public:
	int32                                        TimeInMs;                                          // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                LoadingStep;                                       // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x50 - 0x50)
// ScriptStruct BhvrAnalytics.BhvrAnalyticsEvent_Heartbeat
struct FBhvrAnalyticsEvent_Heartbeat : public FBhvrAnalyticsEvent_Session
{
public:
};

// 0x68 (0xB8 - 0x50)
// ScriptStruct BhvrAnalytics.BhvrAnalyticsEvent_ClientInfo
struct FBhvrAnalyticsEvent_ClientInfo : public FBhvrAnalyticsEvent_Session
{
public:
	class FString                                Os;                                                // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Device;                                            // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Gpu;                                               // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                GpuDriverVersion;                                  // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Memory;                                            // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Platform;                                          // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Language;                                          // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x50 - 0x50)
// ScriptStruct BhvrAnalytics.BhvrAnalyticsEvent_SessionEnd
struct FBhvrAnalyticsEvent_SessionEnd : public FBhvrAnalyticsEvent_Session
{
public:
};

// 0x0 (0x50 - 0x50)
// ScriptStruct BhvrAnalytics.BhvrAnalyticsEvent_SessionStart
struct FBhvrAnalyticsEvent_SessionStart : public FBhvrAnalyticsEvent_Session
{
public:
};

}


