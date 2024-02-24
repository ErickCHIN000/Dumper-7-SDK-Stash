#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class Gridly.GridlyBPFunctionLibrary
class UGridlyBPFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGridlyBPFunctionLibrary* GetDefaultObj();

	void UpdateLocalizationPreview(TArray<struct FPolyglotTextData>& PolyglotTextDatas);
	class FString GetLocalizationPreviewCulture();
	void EnableLocalizationPreview(const class FString& Culture);
};

// 0x10 (0xC0 - 0xB0)
// Class Gridly.GridlyDataTable
class UGridlyDataTable : public UDataTable
{
public:
	class FString                                ViewId;                                            // 0xB0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGridlyDataTable* GetDefaultObj();

};

// 0x148 (0x170 - 0x28)
// Class Gridly.GridlyGameSettings
class UGridlyGameSettings : public UObject
{
public:
	class FString                                ImportApiKey;                                      // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        ImportFromViewIds;                                 // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	int32                                        ImportMaxRecordsPerRequest;                        // 0x48(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ExportApiKey;                                      // 0x50(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ExportViewId;                                      // 0x60(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ExportMaxRecordsPerRequest;                        // 0x70(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseCombinedNamespaceId;                           // 0x74(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlsoExportNamespaceColumn;                        // 0x75(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_184[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                NamespaceColumnId;                                 // 0x78(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SourceLanguageColumnIdPrefix;                      // 0x88(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TargetLanguageColumnIdPrefix;                      // 0x98(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseCustomCultureMapping;                          // 0xA8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_186[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FString, class FString>           CustomCultureMapping;                              // 0xB0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, Config, NativeAccessSpecifierPublic)
	bool                                         bExportContext;                                    // 0x100(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_188[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ContextColumnId;                                   // 0x108(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExportMetadata;                                   // 0x118(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_189[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FString, struct FGridlyColumnInfo> MetadataMapping;                                   // 0x120(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGridlyGameSettings* GetDefaultObj();

};

// 0xA8 (0xD8 - 0x30)
// Class Gridly.GridlyTask_DownloadLocalizedTexts
class UGridlyTask_DownloadLocalizedTexts : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnProgress;                                        // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_199[0x78];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGridlyTask_DownloadLocalizedTexts* GetDefaultObj();

	class UGridlyTask_DownloadLocalizedTexts* DownloadLocalizedTexts(class UObject* WorldContextObject);
};

// 0xB0 (0xE0 - 0x30)
// Class Gridly.GridlyTask_ImportDataTableFromGridly
class UGridlyTask_ImportDataTableFromGridly : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnProgress;                                        // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AB[0x78];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGridlyDataTable*                      GridlyDataTable;                                   // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGridlyTask_ImportDataTableFromGridly* GetDefaultObj();

	class UGridlyTask_ImportDataTableFromGridly* ImportDataTableFromGridly(class UObject* WorldContextObject, class UGridlyDataTable* GridlyDataTable);
};

}


