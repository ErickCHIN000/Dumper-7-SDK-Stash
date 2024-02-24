#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x60 - 0x38)
// Class ImgMedia.ImgMediaSource
class UImgMediaSource : public UBaseMediaSource
{
public:
	struct FFrameRate                            FrameRateOverride;                                 // 0x38(0x8)(Edit, BlueprintVisible, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProxyOverride;                                     // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDirectoryPath                        SequencePath;                                      // 0x50(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UImgMediaSource* GetDefaultObj();

	void SetSequencePath(const class FString& Path);
	class FString GetSequencePath();
	void GetProxies(TArray<class FString>* OutProxies);
};

}


