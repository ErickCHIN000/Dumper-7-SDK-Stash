#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class NWXCore.BitwiseFunctions
class UBitwiseFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBitwiseFunctions* GetDefaultObj();

	bool GetNthBitValue(int32& BitMask, int32& N);
	int32 BitwiseRightShift(int32& Num, int32& ShiftAmount);
	int32 BitwiseLeftShift(int32& Num, int32& ShiftAmount);
};

// 0x0 (0x28 - 0x28)
// Class NWXCore.ComparisonFunctionLibrary
class UComparisonFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UComparisonFunctionLibrary* GetDefaultObj();

	bool CompareInts(int32 LHS, int32 RHS, enum class ENWXMathComparison Comparison);
};

// 0x0 (0x28 - 0x28)
// Class NWXCore.DataValidationHelperFunctions
class UDataValidationHelperFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UDataValidationHelperFunctions* GetDefaultObj();

	enum class EDataValidationResult ValidateTextIsSetAndInAStringTable(const class FString& Label, class FText& Text, TArray<class FText>& ValidationErrors);
	enum class EDataValidationResult ValidateTextIsEmptyOrInAStringTable(const class FString& Label, class FText& Text, TArray<class FText>& ValidationErrors);
	enum class EDataValidationResult CombineValidationResults(enum class EDataValidationResult A, enum class EDataValidationResult B);
};

// 0x0 (0x28 - 0x28)
// Class NWXCore.GetPrimitivesByTagInterface
class IGetPrimitivesByTagInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGetPrimitivesByTagInterface* GetDefaultObj();

	TArray<class UPrimitiveComponent*> GetPrimitiveComponentsByTag(struct FGameplayTagContainer& Tag);
};

// 0x0 (0xB0 - 0xB0)
// Class NWXCore.LiveServicesDataTable
class ULiveServicesDataTable : public UDataTable
{
public:

	static class UClass* StaticClass();
	static class ULiveServicesDataTable* GetDefaultObj();

	void WriteDefaultJsonFile();
	bool UpdateFromLiveConfig(const class FString& NewTableJson);
};

// 0x0 (0x28 - 0x28)
// Class NWXCore.LiveServicesFunctionLibrary
class ULiveServicesFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULiveServicesFunctionLibrary* GetDefaultObj();

	void UpdateDynamicStructsUStruct(class UObject* Struct, const struct FDynamicTypedStructs& DynamicStruct, struct FDynamicTypedStructs* DynamicStructOut);
	void UpdateDynamicStructs(const struct FDynamicTypedStructs& DynamicStruct, struct FDynamicTypedStructs* DynamicStructOut, struct FJsonStruct& JsonStruct);
	struct FDynamicTypedStructs StringToDynamicStructs(const class FString& String, bool* Succeeded);
	bool SetJsonStructByType(const struct FJsonStruct& JsonStruct, class UScriptStruct* StructType, struct FTableRowBase& StructData, struct FJsonStruct* OutJsonStruct);
	bool RemoveStructByType(const struct FDynamicTypedStructs& DynamicStruct, class UScriptStruct* StructType, struct FDynamicTypedStructs* DynamicStructOut);
	void MergeDynamicStructs(struct FDynamicTypedStructs& A, struct FDynamicTypedStructs& B, struct FDynamicTypedStructs* OutResultStruct);
	bool IsJsonEqual(const class FString& JsonStringA, const class FString& JsonStringB);
	bool IsDynamicStructEmpty(struct FDynamicTypedStructs& DynamicStruct);
	bool GetStructByType(const struct FDynamicTypedStructs& StructsContainer, class UScriptStruct* StructType, struct FTableRowBase* OutStruct);
	bool GetJsonStructByType(const struct FJsonStruct& JsonStruct, class UScriptStruct* StructType, struct FTableRowBase* OutStruct);
	class FString DynamicStructsToString(const struct FDynamicTypedStructs& Struct);
	bool DynamicStructContains(struct FDynamicTypedStructs& DynamicStruct, class UScriptStruct* StructType);
	struct FJsonStruct CreateJsonStruct(class UObject* Struct);
};

// 0x0 (0x28 - 0x28)
// Class NWXCore.NWXCoreFunctionLibrary
class UNWXCoreFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UNWXCoreFunctionLibrary* GetDefaultObj();

	bool AreAutomatedTestsRunning();
};

// 0x0 (0x30 - 0x30)
// Class NWXCore.NWXGameInstanceSubsystem
class UNWXGameInstanceSubsystem : public UGameInstanceSubsystem
{
public:

	static class UClass* StaticClass();
	static class UNWXGameInstanceSubsystem* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class NWXCore.NWXWorldSubsystem
class UNWXWorldSubsystem : public UWorldSubsystem
{
public:

	static class UClass* StaticClass();
	static class UNWXWorldSubsystem* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class NWXCore.NWXTickableWorldSubsystem
class UNWXTickableWorldSubsystem : public UTickableWorldSubsystem
{
public:

	static class UClass* StaticClass();
	static class UNWXTickableWorldSubsystem* GetDefaultObj();

};

}


