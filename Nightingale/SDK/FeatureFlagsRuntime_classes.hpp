#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class FeatureFlagsRuntime.FeatureFlags
class UFeatureFlags : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UFeatureFlags* GetDefaultObj();

	bool IsFeatureFlagEnabled(class UObject* WorldContextObject, enum class EFeatureFlag Flag);
	bool IsAssetEnabled(class UObject* WorldContextObject, class UObject* Object);
	void FeatureFlagBranch(class UObject* WorldContextObject, enum class EFeatureFlag Flag, enum class EFeatureFlagStatus* Result);
};

}


