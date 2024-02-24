#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// Class GbxRuntime.GbxDataAsset
class UGbxDataAsset : public UDataAsset
{
public:

	static class UClass* StaticClass();
	static class UGbxDataAsset* GetDefaultObj();

};

// 0x60 (0x88 - 0x28)
// Class GbxRuntime.GbxCondition
class UGbxCondition : public UObject
{
public:
	bool                                         bInvertCondition;                                  // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EConditionRefreshRate             RefreshRate;                                       // 0x29(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_172[0x5E];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxCondition* GetDefaultObj();

	bool K2_EvaluateConditionType(TSubclassOf<class UGbxCondition> Condition, class UObject* Context);
	bool K2_EvaluateCondition(class UGbxCondition* Condition, class UObject* Context);
};

// 0x0 (0x30 - 0x30)
// Class GbxRuntime.GbxDataAssetBlueprintable
class UGbxDataAssetBlueprintable : public UGbxDataAsset
{
public:

	static class UClass* StaticClass();
	static class UGbxDataAssetBlueprintable* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxRuntime.NumericRangeExt
class UNumericRangeExt : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UNumericRangeExt* GetDefaultObj();

	class FString ToValueVarianceString(struct FNumericRange& Range);
	class FString ToValueString(struct FNumericRange& Range);
	class FString ToString(struct FNumericRange& Range);
	class FString ToMinMaxString(struct FNumericRange& Range);
	void SetMinimum(struct FNumericRange* Range, float Minimum);
	void SetMaximum(struct FNumericRange* Range, float Maximum);
	bool IsWithin(struct FNumericRange& Range, float Value);
	float GetMinimum(struct FNumericRange& Range);
	float GetMaximum(struct FNumericRange& Range);
	float GenerateRandomNumber(struct FNumericRange& Range);
	struct FNumericRange CreateNumericRangeMinMax(float Minimum, float Maximum);
	struct FNumericRange CreateNumericRange(float Value, float Variance);
};

// 0x0 (0x458 - 0x458)
// Class GbxRuntime.RenderActor
class ARenderActor : public AActor
{
public:

	static class UClass* StaticClass();
	static class ARenderActor* GetDefaultObj();

};

}


