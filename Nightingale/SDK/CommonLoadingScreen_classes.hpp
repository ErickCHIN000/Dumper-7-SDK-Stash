#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class CommonLoadingScreen.LoadingProcessInterface
class ILoadingProcessInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ILoadingProcessInterface* GetDefaultObj();

};

// 0x38 (0x70 - 0x38)
// Class CommonLoadingScreen.CommonLoadingScreenSettings
class UCommonLoadingScreenSettings : public UDeveloperSettingsBackedByCVars
{
public:
	struct FSoftClassPath                        LoadingScreenWidget;                               // 0x38(0x20)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LoadingScreenZOrder;                               // 0x58(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HoldLoadingScreenAdditionalSecs;                   // 0x5C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LoadingScreenHeartbeatHangDuration;                // 0x60(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LogLoadingScreenHeartbeatInterval;                 // 0x64(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         LogLoadingScreenReasonEveryFrame;                  // 0x68(0x1)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ForceLoadingScreenVisible;                         // 0x69(0x1)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HoldLoadingScreenAdditionalSecsEvenInEditor;       // 0x6A(0x1)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ForceTickLoadingScreenEvenInEditor;                // 0x6B(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36E[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCommonLoadingScreenSettings* GetDefaultObj();

};

// 0xB0 (0xE0 - 0x30)
// Class CommonLoadingScreen.LoadingScreenManager
class ULoadingScreenManager : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_378[0xA8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ELoadingReason                    LoadingReason;                                     // 0xD8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_379[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULoadingScreenManager* GetDefaultObj();

	class FString GetDebugReasonForShowingOrHidingLoadingScreen();
};

// 0x20 (0x48 - 0x28)
// Class CommonLoadingScreen.LoadingProcessTask
class ULoadingProcessTask : public UObject
{
public:
	uint8                                        Pad_39E[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULoadingProcessTask* GetDefaultObj();

	void Unregister();
	void SetShowLoadingScreenReason(const class FString& InReason, enum class ELoadingReason& LoadingReason);
	class ULoadingProcessTask* CreateLoadingScreenProcessTask(class UObject* WorldContextObject, const class FString& ShowLoadingScreenReason, enum class ELoadingReason& LoadingReason);
};

}


