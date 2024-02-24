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

// 0x88 (0x88 - 0x0)
// ScriptStruct LoadingScreen.LoadingScreenDescription
struct FLoadingScreenDescription
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FC[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinimumLoadingScreenDisplayTime;                   // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoCompleteWhenLoadingCompletes;                 // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMoviesAreSkippable;                               // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWaitForManualStop;                                // 0xA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMoviePlaybackType                PlaybackType;                                      // 0xB(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_100[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        MoviePaths;                                        // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowUIOverlay;                                    // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_105[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  LoadingText;                                       // 0x28(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMargin                               LoadingTextAndIconMargin;                          // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               LoadingTextMargin;                                 // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               LoadingIconMargin;                                 // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FSoftObjectPath>               Images;                                            // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStretch                          ImageStretch;                                      // 0x80(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_108[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}


