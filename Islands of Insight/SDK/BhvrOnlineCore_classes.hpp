#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0xD0 - 0x28)
// Class BhvrOnlineCore.OnlineSdkBase
class UOnlineSdkBase : public UObject
{
public:
	uint8                                        Pad_922[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHttpRequestFactory                   RequestFactory;                                    // 0x30(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FHttpRequestExecutor                  RequestExecutor;                                   // 0x50(0x30)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FJsonOptions                          JsonOptions;                                       // 0x80(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UOnlineSdkBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class BhvrOnlineCore.OnlineApiBase
class UOnlineApiBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UOnlineApiBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class BhvrOnlineCore.OnlineBlueprintLibrary
class UOnlineBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UOnlineBlueprintLibrary* GetDefaultObj();

	int32 Conv_OnlineStatusToInteger(struct FOnlineStatus& InOnlineStatus);
	struct FOnlineStatus Conv_IntegerToOnlineStatus(int32 InCode);
};

// 0x50 (0x80 - 0x30)
// Class BhvrOnlineCore.OnlineSdkSubsystem
class UOnlineSdkSubsystem : public UGameInstanceSubsystem
{
public:
	TMap<struct FOnlineSdkId, class UOnlineSdkBase*> OnlineSdks;                                        // 0x30(0x50)(Edit, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineSdkSubsystem* GetDefaultObj();

	class UOnlineSdkBase* GetOnlineSdk(TSubclassOf<class UOnlineSdkBase> InOnlineSdkClass, const struct FGameplayTag& InGameplayTag);
};

}


