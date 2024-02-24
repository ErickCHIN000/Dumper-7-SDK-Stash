#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class RealmTimerRuntime.RealmTimeCheats
class URealmTimeCheats : public UCheatManagerExtension
{
public:

	static class UClass* StaticClass();
	static class URealmTimeCheats* GetDefaultObj();

	void SetRealmTimeCycle_Server(double CycleDurationInMinutes, double RealmHoursPerCycle);
	void SetRealmTimeCycle(double CycleDurationInMinutes, double RealmHoursPerCycle);
	void SetRealmTime_Server(double InNormalizedTime);
	void SetRealmTime(double InNormalizedTime);
	void AddRealmTime_Server(double RealSecondsToAdd);
	void AddRealmTime(double RealSecondsToAdd);
};

// 0x90 (0x130 - 0xA0)
// Class RealmTimerRuntime.RealmTimerComponent
class URealmTimerComponent : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnTimeSet;                                         // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	double                                       RealmCycleDurationInMinutes;                       // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       RealmHoursPerCycle;                                // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ServerResolutionInSeconds;                         // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClientResolutionInSeconds;                         // 0xC4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTimerSchedulerOnly;                               // 0xC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1406[0x27];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       AccumulatedSeconds;                                // 0xF0(0x8)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1409[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URealmTimerComponent* GetDefaultObj();

	void UpdateClientTimingConstants(double InCycleDurationInMinutes, double InRealmHoursPerCycle);
	struct FTimerHandle SetRealmTimerByFunctionName(class UObject* Object, const class FString& FunctionName, double Time, enum class ERealmTimeFormat TimeFormat, bool bLooping);
	void SetRealmTime(enum class ERealmTimeFormat TimeFormat, enum class ETimeSpace TimeSpace, double Time);
	void OnRep_AccSeconds();
	double GetTimerResolutionInSeconds();
	double GetRealTimeElapsedSeconds();
	double GetRealmTime(enum class ERealmTimeFormat TimeFormat);
	void CallOnTick(class UObject* Object, const class FString& FunctionName);
	void AdvanceRealmTime(enum class ERealmTimeFormat TimeFormat, enum class ETimeSpace TimeSpace, double Time);
};

}


