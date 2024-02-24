#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class StreamlineBlueprint.StreamlineLibrary
class UStreamlineLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UStreamlineLibrary* GetDefaultObj();

	enum class EUStreamlineFeatureSupport QueryStreamlineFeatureSupport(enum class EUStreamlineFeature Feature);
	bool IsStreamlineFeatureSupported(enum class EUStreamlineFeature Feature);
	struct FStreamlineFeatureRequirements GetStreamlineFeatureInformation(enum class EUStreamlineFeature Feature);
	void BreakStreamlineFeatureRequirements(enum class EUStreamlineFeatureRequirementsFlags Requirements, bool* D3D11Supported, bool* D3D12Supported, bool* VulkanSupported, bool* VSyncOffRequired, bool* HardwareSchedulingRequired);
};

// 0x0 (0x28 - 0x28)
// Class StreamlineBlueprint.StreamlineLibraryDLSSG
class UStreamlineLibraryDLSSG : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UStreamlineLibraryDLSSG* GetDefaultObj();

	void SetDLSSGMode(enum class EUStreamlineDLSSGMode DLSSGMode);
	enum class EUStreamlineFeatureSupport QueryDLSSGSupport();
	bool IsDLSSGSupported();
	bool IsDLSSGModeSupported(enum class EUStreamlineDLSSGMode DLSSGMode);
	TArray<enum class EUStreamlineDLSSGMode> GetSupportedDLSSGModes();
	enum class EUStreamlineDLSSGMode GetDLSSGMode();
	void GetDLSSGFrameTiming(float* FrameRateInHertz, int32* FramesPresented);
	enum class EUStreamlineDLSSGMode GetDefaultDLSSGMode();
};

// 0x0 (0x28 - 0x28)
// Class StreamlineBlueprint.StreamlineLibraryReflex
class UStreamlineLibraryReflex : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UStreamlineLibraryReflex* GetDefaultObj();

	void SetReflexMode(enum class EUStreamlineReflexMode Mode);
	enum class EUStreamlineFeatureSupport QueryReflexSupport();
	bool IsReflexSupported();
	float GetRenderLatencyInMs();
	enum class EUStreamlineReflexMode GetReflexMode();
	float GetGameToRenderLatencyInMs();
	float GetGameLatencyInMs();
	enum class EUStreamlineReflexMode GetDefaultReflexMode();
};

}


