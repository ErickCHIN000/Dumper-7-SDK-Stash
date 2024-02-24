#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x78 - 0x28)
// Class ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject
class UChromaSDKPluginAnimation1DObject : public UObject
{
public:
	uint8                                        Pad_1DA[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EChromaSDKDevice1DEnum            Device;                                            // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FChromaSDKColorFrame1D>        Frames;                                            // 0x38(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DD[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UChromaSDKPluginAnimation1DObject* GetDefaultObj();

	void Unload();
	bool IsLoaded();
};

// 0x50 (0x78 - 0x28)
// Class ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject
class UChromaSDKPluginAnimation2DObject : public UObject
{
public:
	uint8                                        Pad_1F9[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EChromaSDKDevice2DEnum            Device;                                            // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FChromaSDKColorFrame2D>        Frames;                                            // 0x38(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FC[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UChromaSDKPluginAnimation2DObject* GetDefaultObj();

	void Unload();
	bool IsLoaded();
};

// 0x0 (0x28 - 0x28)
// Class ChromaSDKPlugin.ChromaSDKPluginBPLibrary
class UChromaSDKPluginBPLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UChromaSDKPluginBPLibrary* GetDefaultObj();

	void UnloadAnimationName(const class FString& AnimationName);
	void UnloadAnimation(int32 AnimationId);
	void TrimStartFramesName(const class FString& AnimationName, int32 NumberOfFrames);
	void TrimStartFrames(int32 AnimationId, int32 NumberOfFrames);
	void TrimFrameName(const class FString& AnimationName, int32 FrameId);
	void TrimFrame(int32 AnimationId, int32 FrameId);
	void TrimEndFramesName(const class FString& AnimationName, int32 LastFrameId);
	void TrimEndFrames(int32 AnimationId, int32 LastFrameId);
	struct FLinearColor ToLinearColor(int32 ColorParam);
	int32 ToBGR(struct FLinearColor& ColorParam);
	void SubtractNonZeroTargetAllKeysAllFramesOffsetName(const class FString& SourceAnimationName, const class FString& TargetAnimationName, int32 Offset);
	void SubtractNonZeroTargetAllKeysAllFramesOffset(int32 SourceAnimationId, int32 TargetAnimationId, int32 Offset);
	void SubtractNonZeroTargetAllKeysAllFramesName(const class FString& SourceAnimationName, const class FString& TargetAnimationName);
	void SubtractNonZeroTargetAllKeysAllFrames(int32 SourceAnimationId, int32 TargetAnimationId);
	void SubtractNonZeroAllKeysName(const class FString& SourceAnimationName, const class FString& TargetAnimationName, int32 FrameId);
	void SubtractNonZeroAllKeysAllFramesOffsetName(const class FString& SourceAnimationName, const class FString& TargetAnimationName, int32 Offset);
	void SubtractNonZeroAllKeysAllFramesOffset(int32 SourceAnimationId, int32 TargetAnimationId, int32 Offset);
	void SubtractNonZeroAllKeysAllFramesName(const class FString& SourceAnimationName, const class FString& TargetAnimationName);
	void SubtractNonZeroAllKeysAllFrames(int32 SourceAnimationId, int32 TargetAnimationId);
	void SubtractNonZeroAllKeys(int32 SourceAnimationId, int32 TargetAnimationId, int32 FrameId);
	void StopAnimationType(enum class EChromaSDKDeviceEnum Device);
	void StopAnimations(TArray<class FString>& AnimationNames);
	void StopAnimationComposite(const class FString& AnimationName);
	void StopAnimation(const class FString& AnimationName);
	void StopAll();
	void SetMouseLedColor(enum class EChromaSDKMouseLed Led, struct FLinearColor& ColorParam, TArray<struct FChromaSDKColors>& Colors);
	void SetKeysNonZeroColorName(const class FString& AnimationName, int32 FrameIndex, TArray<enum class EChromaSDKKeyboardKey>& Keys, struct FLinearColor& ColorParam);
	void SetKeysNonZeroColorAllFramesName(const class FString& AnimationName, TArray<enum class EChromaSDKKeyboardKey>& Keys, struct FLinearColor& ColorParam);
	void SetKeysNonZeroColorAllFrames(int32 AnimationId, TArray<enum class EChromaSDKKeyboardKey>& Keys, struct FLinearColor& ColorParam);
	void SetKeysNonZeroColor(int32 AnimationId, int32 FrameIndex, TArray<enum class EChromaSDKKeyboardKey>& Keys, struct FLinearColor& ColorParam);
	void SetKeysColorRGBName(const class FString& AnimationName, int32 FrameIndex, TArray<enum class EChromaSDKKeyboardKey>& Keys, int32 Red, int32 Green, int32 blue);
	void SetKeysColorRGB(int32 AnimationId, int32 FrameIndex, TArray<enum class EChromaSDKKeyboardKey>& Keys, int32 Red, int32 Green, int32 blue);
	void SetKeysColorName(const class FString& AnimationName, int32 FrameIndex, TArray<enum class EChromaSDKKeyboardKey>& Keys, struct FLinearColor& ColorParam);
	void SetKeysColorAllFramesRGBName(const class FString& AnimationName, TArray<enum class EChromaSDKKeyboardKey>& Keys, int32 Red, int32 Green, int32 blue);
	void SetKeysColorAllFramesRGB(int32 AnimationId, TArray<enum class EChromaSDKKeyboardKey>& Keys, int32 Red, int32 Green, int32 blue);
	void SetKeysColorAllFramesName(const class FString& AnimationName, TArray<enum class EChromaSDKKeyboardKey>& Keys, struct FLinearColor& ColorParam);
	void SetKeysColorAllFrames(int32 AnimationId, TArray<enum class EChromaSDKKeyboardKey>& Keys, struct FLinearColor& ColorParam);
	void SetKeysColor(int32 AnimationId, int32 FrameIndex, TArray<enum class EChromaSDKKeyboardKey>& Keys, struct FLinearColor& ColorParam);
	void SetKeyNonZeroColorName(const class FString& AnimationName, int32 FrameIndex, enum class EChromaSDKKeyboardKey Key, struct FLinearColor& ColorParam);
	void SetKeyNonZeroColorAllFramesName(const class FString& AnimationName, enum class EChromaSDKKeyboardKey Key, struct FLinearColor& ColorParam);
	void SetKeyNonZeroColorAllFrames(int32 AnimationId, enum class EChromaSDKKeyboardKey Key, struct FLinearColor& ColorParam);
	void SetKeyNonZeroColor(int32 AnimationId, int32 FrameIndex, enum class EChromaSDKKeyboardKey Key, struct FLinearColor& ColorParam);
	void SetKeyColorName(const class FString& AnimationName, int32 FrameIndex, enum class EChromaSDKKeyboardKey Key, struct FLinearColor& ColorParam);
	void SetKeyColorAllFramesName(const class FString& AnimationName, enum class EChromaSDKKeyboardKey Key, struct FLinearColor& ColorParam);
	void SetKeyColorAllFrames(int32 AnimationId, enum class EChromaSDKKeyboardKey Key, struct FLinearColor& ColorParam);
	void SetKeyColor(int32 AnimationId, int32 FrameIndex, enum class EChromaSDKKeyboardKey Key, struct FLinearColor& ColorParam);
	void SetKeyboardKeyColor(enum class EChromaSDKKeyboardKey Key, struct FLinearColor& ColorParam, TArray<struct FChromaSDKColors>& Colors);
	void SetChromaCustomFlagName(const class FString& AnimationName, bool Flag);
	void SetChromaCustomColorAllFramesName(const class FString& AnimationName);
	void ReverseAllFramesName(const class FString& AnimationName);
	void ReverseAllFrames(int32 AnimationId);
	void ReduceFramesName(const class FString& AnimationName, int32 N);
	void ReduceFrames(int32 AnimationId, int32 N);
	void PreviewFrameName(const class FString& AnimationName, int32 FrameId);
	int32 PreviewFrame(int32 AnimationId, int32 FrameId);
	void PlayAnimations(TArray<class FString>& AnimationNames, bool Loop);
	void PlayAnimationName(const class FString& AnimationName, bool Loop);
	void PlayAnimationComposite(const class FString& AnimationName, bool Loop);
	void PlayAnimation(const class FString& AnimationName, bool Loop);
	void OverrideFrameDurationName(const class FString& AnimationName, float Duration);
	void OffsetNonZeroColorsName(const class FString& AnimationName, int32 FrameId, int32 Red, int32 Green, int32 blue);
	void OffsetNonZeroColorsAllFramesName(const class FString& AnimationName, int32 Red, int32 Green, int32 blue);
	void OffsetNonZeroColorsAllFrames(int32 AnimationId, int32 Red, int32 Green, int32 blue);
	void OffsetNonZeroColors(int32 AnimationId, int32 FrameId, int32 Red, int32 Green, int32 blue);
	void OffsetColorsName(const class FString& AnimationName, int32 FrameId, int32 Red, int32 Green, int32 blue);
	void OffsetColorsAllFramesName(const class FString& AnimationName, int32 Red, int32 Green, int32 blue);
	void OffsetColorsAllFrames(int32 AnimationId, int32 Red, int32 Green, int32 blue);
	void OffsetColors(int32 AnimationId, int32 FrameId, int32 Red, int32 Green, int32 blue);
	void MultiplyTargetColorLerpAllFramesName(const class FString& AnimationName, struct FLinearColor& ColorParam1, struct FLinearColor& ColorParam2);
	void MultiplyTargetColorLerpAllFrames(int32 AnimationId, struct FLinearColor& ColorParam1, struct FLinearColor& ColorParam2);
	void MultiplyNonZeroTargetColorLerpAllFramesName(const class FString& AnimationName, struct FLinearColor& ColorParam1, struct FLinearColor& ColorParam2);
	void MultiplyNonZeroTargetColorLerpAllFrames(int32 AnimationId, struct FLinearColor& ColorParam1, struct FLinearColor& ColorParam2);
	void MultiplyIntensityRGBName(const class FString& AnimationName, int32 FrameId, int32 Red, int32 Green, int32 blue);
	void MultiplyIntensityRGB(int32 AnimationId, int32 FrameId, int32 Red, int32 Green, int32 blue);
	void MultiplyIntensityName(const class FString& AnimationName, int32 FrameId, float Intensity);
	void MultiplyIntensityColorName(const class FString& AnimationName, int32 FrameId, struct FLinearColor& ColorParam);
	void MultiplyIntensityColorAllFramesName(const class FString& AnimationName, struct FLinearColor& ColorParam);
	void MultiplyIntensityColorAllFrames(int32 AnimationId, struct FLinearColor& ColorParam);
	void MultiplyIntensityColor(int32 AnimationId, int32 FrameId, struct FLinearColor& ColorParam);
	void MultiplyIntensityAllFramesRGBName(const class FString& AnimationName, float RedIntensity, float GreenIntensity, float blueIntensity);
	void MultiplyIntensityAllFramesRGB(int32 AnimationId, float RedIntensity, float GreenIntensity, float blueIntensity);
	void MultiplyIntensityAllFramesName(const class FString& AnimationName, float Intensity);
	void MultiplyIntensityAllFrames(int32 AnimationId, float Intensity);
	void MultiplyIntensity(int32 AnimationId, int32 FrameId, float Intensity);
	void MultiplyColorLerpAllFramesName(const class FString& AnimationName, struct FLinearColor& ColorParam1, struct FLinearColor& ColorParam2);
	void MultiplyColorLerpAllFrames(int32 AnimationId, struct FLinearColor& ColorParam1, struct FLinearColor& ColorParam2);
	void MakeBlankFramesRGBName(const class FString& AnimationName, int32 FrameCount, float Duration, int32 Red, int32 Green, int32 blue);
	void MakeBlankFramesRGB(int32 AnimationId, int32 FrameCount, float Duration, int32 Red, int32 Green, int32 blue);
	void MakeBlankFramesRandomName(const class FString& AnimationName, int32 FrameCount, float Duration);
	void MakeBlankFramesRandomBlackAndWhiteName(const class FString& AnimationName, int32 FrameCount, float Duration);
	void MakeBlankFramesRandomBlackAndWhite(int32 AnimationId, int32 FrameCount, float Duration);
	void MakeBlankFramesRandom(int32 AnimationId, int32 FrameCount, float Duration);
	void MakeBlankFramesName(const class FString& AnimationName, int32 FrameCount, float Duration, struct FLinearColor& ColorParam);
	void MakeBlankFrames(int32 AnimationId, int32 FrameCount, float Duration, struct FLinearColor& ColorParam);
	void LoadAnimationName(const class FString& AnimationName);
	void LoadAnimation(int32 AnimationId);
	int32 LerpColorBGR(int32 From, int32 To, float T);
	struct FLinearColor LerpColor(const struct FLinearColor& ColorParam1, const struct FLinearColor& ColorParam2, float T);
	float Lerp(float Start, float End, float Amt);
	bool IsPlatformWindows();
	bool IsInitialized();
	bool IsAnimationTypePlaying(enum class EChromaSDKDeviceEnum Device);
	bool IsAnimationPlaying(const class FString& AnimationName);
	void InvertColorsAllFramesName(const class FString& AnimationName);
	void InvertColorsAllFrames(int32 AnimationId);
	void InsertFrameName(const class FString& AnimationName, int32 SourceFrame, int32 TargetFrame);
	void InsertFrame(int32 AnimationId, int32 SourceFrame, int32 TargetFrame);
	void InsertDelayName(const class FString& AnimationName, int32 FrameId, int32 Delay);
	void InsertDelay(int32 AnimationId, int32 FrameId, int32 Delay);
	struct FLinearColor GetRGB(int32 Red, int32 Green, int32 blue);
	int32 GetPlayingAnimationId(int32 Index);
	int32 GetPlayingAnimationCount();
	struct FLinearColor GetMouseLedColor(enum class EChromaSDKMouseLed Led, TArray<struct FChromaSDKColors>& Colors);
	int32 GetMaxRow(enum class EChromaSDKDevice2DEnum Device);
	int32 GetMaxLeds(enum class EChromaSDKDevice1DEnum Device);
	int32 GetMaxColumn(enum class EChromaSDKDevice2DEnum Device);
	struct FLinearColor GetKeyColorName(const class FString& AnimationName, int32 FrameIndex, enum class EChromaSDKKeyboardKey Key);
	struct FLinearColor GetKeyColor(int32 AnimationId, int32 FrameIndex, enum class EChromaSDKKeyboardKey Key);
	enum class EChromaSDKKeyboardKey GetKeyboardRazerKey(const struct FKey& Key);
	struct FLinearColor GetKeyboardKeyColor(enum class EChromaSDKKeyboardKey Key, TArray<struct FChromaSDKColors>& Colors);
	int32 GetFrameCountName(const class FString& AnimationName);
	int32 GetFrameCount(int32 AnimationId);
	class FString GetAnimationName(int32 AnimationId);
	int32 GetAnimationIdByIndex(int32 Index);
	int32 GetAnimationId(const class FString& AnimationName);
	int32 GetAnimationCount();
	int32 GetAnimation(const class FString& AnimationName);
	void FillZeroColorRGBName(const class FString& AnimationName, int32 FrameId, int32 Red, int32 Green, int32 blue);
	void FillZeroColorRGB(int32 AnimationId, int32 FrameId, int32 Red, int32 Green, int32 blue);
	void FillZeroColorName(const class FString& AnimationName, int32 FrameId, struct FLinearColor& ColorParam);
	void FillZeroColorAllFramesRGBName(const class FString& AnimationName, int32 Red, int32 Green, int32 blue);
	void FillZeroColorAllFramesRGB(int32 AnimationId, int32 Red, int32 Green, int32 blue);
	void FillZeroColorAllFramesName(const class FString& AnimationName, struct FLinearColor& ColorParam);
	void FillZeroColorAllFrames(int32 AnimationId, struct FLinearColor& ColorParam);
	void FillZeroColor(int32 AnimationId, int32 FrameId, struct FLinearColor& ColorParam);
	void FillThresholdRGBColorsAllFramesRGBName(const class FString& AnimationName, int32 RedThreshold, int32 GreenThreshold, int32 blueThreshold, int32 Red, int32 Green, int32 blue);
	void FillThresholdRGBColorsAllFramesRGB(int32 AnimationId, int32 RedThreshold, int32 GreenThreshold, int32 blueThreshold, int32 Red, int32 Green, int32 blue);
	void FillThresholdColorsRGBName(const class FString& AnimationName, int32 FrameId, int32 Threshold, int32 Red, int32 Green, int32 blue);
	void FillThresholdColorsRGB(int32 AnimationId, int32 FrameId, int32 Threshold, int32 Red, int32 Green, int32 blue);
	void FillThresholdColorsMinMaxAllFramesRGBName(const class FString& AnimationName, int32 MinThreshold, int32 MinRed, int32 MinGreen, int32 MinBlue, int32 MaxThreshold, int32 MaxRed, int32 MaxGreen, int32 MaxBlue);
	void FillThresholdColorsMinMaxAllFramesRGB(int32 AnimationId, int32 MinThreshold, int32 MinRed, int32 MinGreen, int32 MinBlue, int32 MaxThreshold, int32 MaxRed, int32 MaxGreen, int32 MaxBlue);
	void FillThresholdColorsAllFramesRGBName(const class FString& AnimationName, int32 Threshold, int32 Red, int32 Green, int32 blue);
	void FillThresholdColorsAllFramesRGB(int32 AnimationId, int32 Threshold, int32 Red, int32 Green, int32 blue);
	void FillThresholdColorsAllFramesName(const class FString& AnimationName, int32 Threshold, struct FLinearColor& ColorParam);
	void FillThresholdColorsAllFrames(int32 AnimationId, int32 Threshold, struct FLinearColor& ColorParam);
	void FillRandomColorsName(const class FString& AnimationName, int32 FrameId);
	void FillRandomColorsBlackAndWhiteName(const class FString& AnimationName, int32 FrameId);
	void FillRandomColorsBlackAndWhiteAllFramesName(const class FString& AnimationName);
	void FillRandomColorsBlackAndWhiteAllFrames(int32 AnimationId);
	void FillRandomColorsBlackAndWhite(int32 AnimationId, int32 FrameId);
	void FillRandomColorsAllFramesName(const class FString& AnimationName);
	void FillRandomColorsAllFrames(int32 AnimationId);
	void FillRandomColors(int32 AnimationId, int32 FrameId);
	void FillNonZeroColorRGBName(const class FString& AnimationName, int32 FrameId, int32 Red, int32 Green, int32 blue);
	void FillNonZeroColorRGB(int32 AnimationId, int32 FrameId, int32 Red, int32 Green, int32 blue);
	void FillNonZeroColorName(const class FString& AnimationName, int32 FrameId, struct FLinearColor& ColorParam);
	void FillNonZeroColorAllFramesRGBName(const class FString& AnimationName, int32 Red, int32 Green, int32 blue);
	void FillNonZeroColorAllFramesRGB(int32 AnimationId, int32 Red, int32 Green, int32 blue);
	void FillNonZeroColorAllFramesName(const class FString& AnimationName, struct FLinearColor& ColorParam);
	void FillNonZeroColorAllFrames(int32 AnimationId, struct FLinearColor& ColorParam);
	void FillNonZeroColor(int32 AnimationId, int32 FrameId, struct FLinearColor& ColorParam);
	void FillColorRGBName(const class FString& AnimationName, int32 FrameId, int32 Red, int32 Green, int32 blue);
	void FillColorRGB(int32 AnimationId, int32 FrameId, int32 Red, int32 Green, int32 blue);
	void FillColorName(const class FString& AnimationName, int32 FrameId, struct FLinearColor& ColorParam);
	void FillColorAllFramesRGBName(const class FString& AnimationName, int32 Red, int32 Green, int32 blue);
	void FillColorAllFramesRGB(int32 AnimationId, int32 Red, int32 Green, int32 blue);
	void FillColorAllFramesName(const class FString& AnimationName, struct FLinearColor& ColorParam);
	void FillColorAllFrames(int32 AnimationId, struct FLinearColor& ColorParam);
	void FillColor(int32 AnimationId, int32 FrameId, struct FLinearColor& ColorParam);
	void FadeStartFramesName(const class FString& AnimationName, int32 Fade);
	void FadeStartFrames(int32 AnimationId, int32 Fade);
	void FadeEndFramesName(const class FString& AnimationName, int32 Fade);
	void FadeEndFrames(int32 AnimationId, int32 Fade);
	void DuplicateMirrorFramesName(const class FString& AnimationName);
	void DuplicateMirrorFrames(int32 AnimationId);
	void DuplicateFramesName(const class FString& AnimationName);
	void DuplicateFrames(int32 AnimationId);
	void DuplicateFirstFrameName(const class FString& AnimationName, int32 FrameCount);
	void DuplicateFirstFrame(int32 AnimationId, int32 FrameCount);
	TArray<struct FChromaSDKColors> CreateRandomColorsBlackAndWhite2D(enum class EChromaSDKDevice2DEnum Device);
	TArray<struct FLinearColor> CreateRandomColorsBlackAndWhite1D(enum class EChromaSDKDevice1DEnum Device);
	TArray<struct FChromaSDKColors> CreateRandomColors2D(enum class EChromaSDKDevice2DEnum Device);
	TArray<struct FLinearColor> CreateRandomColors1D(enum class EChromaSDKDevice1DEnum Device);
	TArray<struct FChromaSDKColors> CreateColors2D(enum class EChromaSDKDevice2DEnum Device);
	TArray<struct FLinearColor> CreateColors1D(enum class EChromaSDKDevice1DEnum Device);
	void CopyNonZeroTargetAllKeysName(const class FString& SourceAnimationName, const class FString& TargetAnimationName, int32 FrameId);
	void CopyNonZeroTargetAllKeysAllFramesOffsetName(const class FString& SourceAnimationName, const class FString& TargetAnimationName, int32 Offset);
	void CopyNonZeroTargetAllKeysAllFramesOffset(int32 SourceAnimationId, int32 TargetAnimationId, int32 Offset);
	void CopyNonZeroTargetAllKeysAllFramesName(const class FString& SourceAnimationName, const class FString& TargetAnimationName);
	void CopyNonZeroTargetAllKeysAllFrames(int32 SourceAnimationId, int32 TargetAnimationId);
	void CopyNonZeroTargetAllKeys(int32 SourceAnimationId, int32 TargetAnimationId, int32 FrameId);
	void CopyNonZeroKeysColorName(const class FString& SourceAnimationName, const class FString& TargetAnimationName, int32 FrameIndex, TArray<enum class EChromaSDKKeyboardKey>& Keys);
	void CopyNonZeroKeysColorAllFramesName(const class FString& SourceAnimationName, const class FString& TargetAnimationName, TArray<enum class EChromaSDKKeyboardKey>& Keys);
	void CopyNonZeroKeysColorAllFrames(int32 SourceAnimationId, int32 TargetAnimationId, TArray<enum class EChromaSDKKeyboardKey>& Keys);
	void CopyNonZeroKeysColor(int32 SourceAnimationId, int32 TargetAnimationId, int32 FrameIndex, TArray<enum class EChromaSDKKeyboardKey>& Keys);
	void CopyNonZeroKeyColorName(const class FString& SourceAnimationName, const class FString& TargetAnimationName, int32 FrameIndex, enum class EChromaSDKKeyboardKey Key);
	void CopyNonZeroKeyColor(int32 SourceAnimationId, int32 TargetAnimationId, int32 FrameIndex, enum class EChromaSDKKeyboardKey Key);
	void CopyNonZeroAllKeysOffsetName(const class FString& SourceAnimationName, const class FString& TargetAnimationName, int32 FrameId, int32 Offset);
	void CopyNonZeroAllKeysOffset(int32 SourceAnimationId, int32 TargetAnimationId, int32 FrameId, int32 Offset);
	void CopyNonZeroAllKeysName(const class FString& SourceAnimationName, const class FString& TargetAnimationName, int32 FrameId);
	void CopyNonZeroAllKeysAllFramesOffsetName(const class FString& SourceAnimationName, const class FString& TargetAnimationName, int32 Offset);
	void CopyNonZeroAllKeysAllFramesOffset(int32 SourceAnimationId, int32 TargetAnimationId, int32 Offset);
	void CopyNonZeroAllKeysAllFramesName(const class FString& SourceAnimationName, const class FString& TargetAnimationName);
	void CopyNonZeroAllKeysAllFrames(int32 SourceAnimationId, int32 TargetAnimationId);
	void CopyNonZeroAllKeys(int32 SourceAnimationId, int32 TargetAnimationId, int32 FrameId);
	void CopyKeysColorName(const class FString& SourceAnimationName, const class FString& TargetAnimationName, int32 FrameIndex, TArray<enum class EChromaSDKKeyboardKey>& Keys);
	void CopyKeysColorAllFramesName(const class FString& SourceAnimationName, const class FString& TargetAnimationName, TArray<enum class EChromaSDKKeyboardKey>& Keys);
	void CopyKeysColorAllFrames(int32 SourceAnimationId, int32 TargetAnimationId, TArray<enum class EChromaSDKKeyboardKey>& Keys);
	void CopyKeysColor(int32 SourceAnimationId, int32 TargetAnimationId, int32 FrameIndex, TArray<enum class EChromaSDKKeyboardKey>& Keys);
	void CopyKeyColorName(const class FString& SourceAnimationName, const class FString& TargetAnimationName, int32 FrameIndex, enum class EChromaSDKKeyboardKey Key);
	void CopyKeyColor(int32 SourceAnimationId, int32 TargetAnimationId, int32 FrameIndex, enum class EChromaSDKKeyboardKey Key);
	void CopyAnimationName(const class FString& SourceAnimationName, const class FString& TargetAnimationName);
	void CopyAnimation(int32 SourceAnimationId, const class FString& TargetAnimationName);
	void CopyAllKeysName(const class FString& SourceAnimationName, const class FString& TargetAnimationName, int32 FrameId);
	void CopyAllKeysAllFramesName(const class FString& SourceAnimationName, const class FString& TargetAnimationName);
	void CopyAllKeysAllFrames(int32 SourceAnimationId, int32 TargetAnimationId);
	void CopyAllKeys(int32 SourceAnimationId, int32 TargetAnimationId, int32 FrameId);
	void CloseAnimationName(const class FString& AnimationName);
	void CloseAnimation(int32 AnimationId);
	void ClearAnimationType(enum class EChromaSDKDeviceEnum Device);
	void ClearAll();
	int32 ChromaSDKUnInit();
	int32 ChromaSDKSetEffect(struct FChromaSDKGuid& EffectId);
	int32 ChromaSDKInit();
	int32 ChromaSDKDeleteEffect(struct FChromaSDKGuid& EffectId);
	struct FChromaSDKEffectResult ChromaSDKCreateEffectStatic(enum class EChromaSDKDeviceEnum Device, struct FLinearColor& ColorParam);
	struct FChromaSDKEffectResult ChromaSDKCreateEffectNone(enum class EChromaSDKDeviceEnum Device);
	struct FChromaSDKEffectResult ChromaSDKCreateEffectKeyboardCustom2D(TArray<struct FChromaSDKColors>& Colors);
	struct FChromaSDKEffectResult ChromaSDKCreateEffectCustom2D(enum class EChromaSDKDevice2DEnum Device, TArray<struct FChromaSDKColors>& Colors);
	struct FChromaSDKEffectResult ChromaSDKCreateEffectCustom1D(enum class EChromaSDKDevice1DEnum Device, TArray<struct FLinearColor>& Colors);
	void AppendAllFramesName(const class FString& SourceAnimationName, const class FString& TargetAnimationName);
	void AppendAllFrames(int32 SourceAnimationId, int32 TargetAnimationId);
	void AddNonZeroTargetAllKeysAllFramesOffsetName(const class FString& SourceAnimationName, const class FString& TargetAnimationName, int32 Offset);
	void AddNonZeroTargetAllKeysAllFramesOffset(int32 SourceAnimationId, int32 TargetAnimationId, int32 Offset);
	void AddNonZeroTargetAllKeysAllFramesName(const class FString& SourceAnimationName, const class FString& TargetAnimationName);
	void AddNonZeroTargetAllKeysAllFrames(int32 SourceAnimationId, int32 TargetAnimationId);
	void AddNonZeroAllKeysName(const class FString& SourceAnimationName, const class FString& TargetAnimationName, int32 FrameId);
	void AddNonZeroAllKeysAllFramesOffsetName(const class FString& SourceAnimationName, const class FString& TargetAnimationName, int32 Offset);
	void AddNonZeroAllKeysAllFramesOffset(int32 SourceAnimationId, int32 TargetAnimationId, int32 Offset);
	void AddNonZeroAllKeysAllFramesName(const class FString& SourceAnimationName, const class FString& TargetAnimationName);
	void AddNonZeroAllKeysAllFrames(int32 SourceAnimationId, int32 TargetAnimationId);
	void AddNonZeroAllKeys(int32 SourceAnimationId, int32 TargetAnimationId, int32 FrameId);
};

}


