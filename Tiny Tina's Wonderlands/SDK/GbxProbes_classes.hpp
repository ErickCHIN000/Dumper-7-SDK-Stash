#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class GbxProbes.GbxProbesBlueprintLibrary
class UGbxProbesBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGbxProbesBlueprintLibrary* GetDefaultObj();

	void ResolveGbxProbeId(class UObject* InObj, const struct FGameplayTag& InTag, struct FGbxProbeId* OutId, bool* IsValid);
	void MakeProbeId(const class FString& Class, const class FString& Type, const class FString& SubType, struct FGbxProbeId* OutId);
	void IsValidId(struct FGbxProbeId& ProbeId, bool* IsValid);
	void IsTestProbeEnabled(struct FGbxProbeId& ProbeId, class FName Test, bool* IsEnabled);
	void IsTestEnabled(class FName Test, bool* IsEnabled);
	void IsClassEnabled(class FName Class, bool* IsEnabled);
	void FlushPendingTestProbes();
	void EmitTestProbeResultWithData(struct FGbxProbeId& ProbeId, class FName Test, enum class EGbxProbeResult Result, TArray<struct FGbxProbeExtraData>& ExtraDataArray);
	void EmitTestProbeResult(struct FGbxProbeId& ProbeId, class FName Test, enum class EGbxProbeResult Result, const class FString& ExtraData);
};

}


