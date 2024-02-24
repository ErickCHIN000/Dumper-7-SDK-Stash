#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C8 (0x200 - 0x38)
// Class LoadingScreen.LoadingScreenSettings
class ULoadingScreenSettings : public UDeveloperSettings
{
public:
	struct FLoadingScreenDescription             StartupScreen;                                     // 0x38(0x88)(Edit, Config, NativeAccessSpecifierPublic)
	struct FLoadingScreenDescription             DefaultScreen;                                     // 0xC0(0x88)(Edit, Config, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        TipFont;                                           // 0x148(0x50)(Edit, BlueprintVisible, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        LoadingFont;                                       // 0x198(0x50)(Edit, BlueprintVisible, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TipWrapAt;                                         // 0x1E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FA[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FText>                          Tips;                                              // 0x1F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ULoadingScreenSettings* GetDefaultObj();

};

}


