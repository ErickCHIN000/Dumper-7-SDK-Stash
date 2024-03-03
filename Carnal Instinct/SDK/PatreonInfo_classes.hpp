#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x48 - 0x28)
// Class PatreonInfo.PatreonInfoHandler
class UPatreonInfoHandler : public UObject
{
public:
	FMulticastInlineDelegateProperty_            GetPatreonInfoFailedDelegate;                      // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            GetPatreonInfoSucceededDelegate;                   // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UPatreonInfoHandler* GetDefaultObj();

	void GetPatreonInfo(const class FString& Token);
};

// 0x0 (0x28 - 0x28)
// Class PatreonInfo.PatreonInfoLibrary
class UPatreonInfoLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UPatreonInfoLibrary* GetDefaultObj();

	void SavePatreonInfo();
	void OpenBrowserForPatreonKey();
	class FString GetClipboardContents();
	class UPatreonInfoHandler* CreatePatreonInfoHandler();
};

// 0x20 (0x48 - 0x28)
// Class PatreonInfo.PatreonInfoSaveGame
class UPatreonInfoSaveGame : public USaveGame
{
public:
	struct FGuid                                 Identifier;                                        // 0x28(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ComputerName;                                      // 0x38(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UPatreonInfoSaveGame* GetDefaultObj();

};

// 0x40 (0x78 - 0x38)
// Class PatreonInfo.PatreonInfoSettings
class UPatreonInfoSettings : public UDeveloperSettings
{
public:
	class FString                                GetTokenURL;                                       // 0x38(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PatreonInfoGetURL;                                 // 0x48(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PatreonCampaignID;                                 // 0x58(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FE[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                UserAgentName;                                     // 0x60(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFormatLists;                                      // 0x70(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStripEndTags;                                     // 0x71(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_201[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPatreonInfoSettings* GetDefaultObj();

};

}


