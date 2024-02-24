#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class XeSSBlueprint.XeSSBlueprintLibrary
class UXeSSBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UXeSSBlueprintLibrary* GetDefaultObj();

	void SetXeSSQualityMode(enum class EXeSSQualityMode QualityMode);
	bool IsXeSSSupported();
	bool GetXeSSQualityModeInformation(enum class EXeSSQualityMode QualityMode, float* ScreenPercentage);
	enum class EXeSSQualityMode GetXeSSQualityMode();
	TArray<enum class EXeSSQualityMode> GetSupportedXeSSQualityModes();
	enum class EXeSSQualityMode GetDefaultXeSSQualityMode(const struct FIntPoint& ScreenResolution);
};

}


