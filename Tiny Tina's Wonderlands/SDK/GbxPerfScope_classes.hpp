#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// Class GbxPerfScope.GbxPerfScopeOptions
class UGbxPerfScopeOptions : public UObject
{
public:
	class FString                                AnalyticsURL;                                      // 0x28(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxPerfScopeOptions* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class GbxPerfScope.GbxPerfScopePerfSampleData
class UGbxPerfScopePerfSampleData : public UObject
{
public:
	TArray<struct FPerfSample>                   Samples;                                           // 0x28(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxPerfScopePerfSampleData* GetDefaultObj();

	void GetMapGPUHotspots(class UObject* WorldContext, int32 NumSamples, const struct FLatentActionInfo& LatentInfo);
};

}


