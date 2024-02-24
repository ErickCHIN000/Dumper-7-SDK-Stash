#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1F0 (0x218 - 0x28)
// Class AffinityTable.AffinityTable
class UAffinityTable : public UObject
{
public:
	class FString                                Description;                                       // 0x28(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UScriptStruct*>                 Structures;                                        // 0x38(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTag>                  RowTags;                                           // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTag>                  ColumnTags;                                        // 0x58(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_E3D[0x1B0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAffinityTable* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AffinityTable.AffinityTableBlueprintLibrary
class UAffinityTableBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAffinityTableBlueprintLibrary* GetDefaultObj();

	bool QueryTableForRow(class UAffinityTable* Table, struct FGameplayTag& RowTag, bool ExactMatch, const TArray<class UScriptStruct*>& StructureTypes, TArray<struct FCellDataArrayWrapper>* OutMemoryPtrs);
	bool QueryTable(class UAffinityTable* Table, struct FGameplayTag& RowTag, struct FGameplayTag& ColumnTag, bool ExactMatch, const TArray<class UScriptStruct*>& StructureTypes, TArray<struct FAffinityTableCellDataWrapper>* OutMemoryPtrs);
	void GetTableCellsData(class UScriptStruct* StructType, int32 DataIndex, const TArray<struct FCellDataArrayWrapper>& MemoryPtrs, TArray<struct FAffinityTableCellDataWrapper>* OutData);
	void GetTableCellData(class UScriptStruct* StructType, int32 DataIndex, const TArray<struct FAffinityTableCellDataWrapper>& MemoryPtrs, struct FAffinityTableCellDataWrapper* OutData);
};

}


