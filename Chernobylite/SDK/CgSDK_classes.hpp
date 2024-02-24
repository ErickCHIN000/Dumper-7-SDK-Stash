#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class CgSDK.CgSDKBlueprint
class UCgSDKBlueprint : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UCgSDKBlueprint* GetDefaultObj();

	bool ShowProgressBar(const class FString& ProgressBarName);
	bool SetStateWithKey(const class FString& StateName, enum class EFCgSdkLedId Key);
	bool SetState(const class FString& StateName);
	bool SetProgressBarValue(const class FString& ProgressBarName, int32 Value);
	bool SetGame(const class FString& GameName);
	bool SetEventWithKey(const class FString& EventName, enum class EFCgSdkLedId Key);
	bool SetEvent(const class FString& EventName);
	bool RequestControl();
	bool ReleaseControl();
	void PerformProtocolHandshake();
	bool HideProgressBar(const class FString& ProgressBarName);
	bool ClearStateWithKey(const class FString& StateName, enum class EFCgSdkLedId Key);
	bool ClearState(const class FString& StateName);
	bool ClearAllStates();
	bool ClearAllEvents();
};

}


