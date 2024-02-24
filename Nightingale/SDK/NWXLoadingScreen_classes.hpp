#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x2F8 - 0x2C0)
// Class NWXLoadingScreen.NWXLoadingScreenBase
class UNWXLoadingScreenBase : public UUserWidget
{
public:
	class FString                                SourceMap;                                         // 0x2C0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                DestinationMap;                                    // 0x2D0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8B1[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNWXLoadingScreenBase* GetDefaultObj();

	void ReceiveMapContextChanged(const class FString& NewSourceMap, const class FString& NewDestinationMap);
};

// 0x20 (0x58 - 0x38)
// Class NWXLoadingScreen.NWXLoadingScreenSettings
class UNWXLoadingScreenSettings : public UDeveloperSettings
{
public:
	int32                                        DefaultLoadingScreenZOrder;                        // 0x38(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultFadeTime;                                   // 0x3C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          DefaultFadeColor;                                  // 0x40(0x10)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNWXLoadingScreenBase>     LoadingScreenWidget;                               // 0x50(0x8)(Edit, ZeroConstructor, Config, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNWXLoadingScreenSettings* GetDefaultObj();

};

}


