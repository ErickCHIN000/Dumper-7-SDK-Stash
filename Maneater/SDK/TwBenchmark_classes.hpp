#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x360 - 0x2C0)
// Class TwBenchmark.TwBenchmarkGameMode
class ATwBenchmarkGameMode : public AGameModeBase
{
public:
	TArray<class ACameraActor*>                  CamerasLeft;                                       // 0x2C0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        TimeSpentAtEachCamera;                             // 0x2D0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_483[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StartupDelayTime;                                  // 0x2E0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_487[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  BenchmarkLevelName;                                // 0x2F0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  CameraTag;                                         // 0x2F8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bRecordCameraCSV;                                  // 0x300(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bRecordFPSChart;                                   // 0x301(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bRecordHealthSnapshot;                             // 0x302(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_48F[0x5D];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ATwBenchmarkGameMode* GetDefaultObj();

	void OnBenchmarkLevelLoaded();
};

// 0x28 (0x248 - 0x220)
// Class TwBenchmark.TwGameplayProfilerActor
class ATwGameplayProfilerActor : public AActor
{
public:
	float                                        StartupDelayTime;                                  // 0x220(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4A8[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RecordDuration;                                    // 0x230(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4AA[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bRecordFPSChart;                                   // 0x240(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bTimerExpired;                                     // 0x241(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4AC[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ATwGameplayProfilerActor* GetDefaultObj();

	void EndProfiling();
	void BeginProfiling();
};

}


