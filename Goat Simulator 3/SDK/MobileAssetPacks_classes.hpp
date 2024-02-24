#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0xD8 - 0x30)
// Class MobileAssetPacks.AssetPacksSubsystem
class UAssetPacksSubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_2A5[0xA8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAssetPacksSubsystem* GetDefaultObj();

	void TryResumeNonWifiDownloads();
	TArray<class FString> GetAllAssetPacks();
	bool FetchStatus(const class FString& AssetPack, FDelegateProperty_ Callback);
	bool DownloadPack(const class FString& AssetPack, FDelegateProperty_ Callback);
	void CancelAllDownloads();
};

// 0x10 (0x38 - 0x28)
// Class MobileAssetPacks.MobileAssetPacksSettings
class UMobileAssetPacksSettings : public UObject
{
public:
	TArray<struct FAssetPack>                    OnDemandAssetPacks;                                // 0x28(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMobileAssetPacksSettings* GetDefaultObj();

};

}


