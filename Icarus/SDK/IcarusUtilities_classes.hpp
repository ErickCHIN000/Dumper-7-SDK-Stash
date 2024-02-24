#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class IcarusUtilities.RowLibrary
class URowLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class URowLibrary* GetDefaultObj();

	bool IsRowHandleValid(struct FRowHandle& RowHandle);
	bool IsRowHandleNone(struct FRowHandle& RowHandle);
	bool IsRowEnumValid(struct FRowEnum& Enum);
	bool IsRowEnumNone(struct FRowEnum& Enum);
	int32 GetRowIndex(struct FRowHandle& Row);
	struct FRowMetadata GetMetadata(const struct FRowHandle& RowHandle);
	struct FFeatureLevelsRowHandle GetFeatureLevel(const struct FRowHandle& RowHandle);
	class FName GetDataTableName(const struct FRowHandle& RowHandle);
	class UIcarusDataTable* GetDataTableForEdit(const struct FRowHandle& RowHandle);
	class UIcarusDataTable* GetDataTable(const struct FRowHandle& RowHandle);
	bool EqualEqual_FRowHandleFRowHandle(const struct FRowHandle& RowHandleA, const struct FRowHandle& RowHandleB);
};

// 0x8 (0xB8 - 0xB0)
// Class IcarusUtilities.IcarusDataTable
class UIcarusDataTable : public UDataTable
{
public:
	class UIcarusMetaTable*                      MetaTable;                                         // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UIcarusDataTable* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class IcarusUtilities.FeatureLevelsLibrary
class UFeatureLevelsLibrary : public URowLibrary
{
public:

	static class UClass* StaticClass();
	static class UFeatureLevelsLibrary* GetDefaultObj();

	struct FFeatureLevelsRowHandle StructToRowHandle(const struct FFeatureLevelsEnum& EnumValue);
	class FName StructToName(const struct FFeatureLevelsEnum& EnumValue);
	int32 StructToInt(const struct FFeatureLevelsEnum& EnumValue);
	struct FFeatureLevelsEnum RowHandleToStruct(const struct FFeatureLevelsRowHandle& RowHandle);
	void RemoveRowFromFeatureLevelsTable(class FName Name);
	void RefreshConstants();
	int32 NumRows();
	bool NotEqual_EnumName(const struct FFeatureLevelsEnum& A, class FName B);
	bool NotEqual_EnumEnum(const struct FFeatureLevelsEnum& A, const struct FFeatureLevelsEnum& B);
	struct FFeatureLevelsEnum NameToStruct(class FName NameValue);
	int32 NameToInt(class FName NameValue);
	struct FFeatureLevelsRowHandle MakeLiteralFeatureLevels(const struct FFeatureLevelsRowHandle& RowHandle);
	struct FFeatureLevelsRowHandle MakeFeatureLevelsFromIndex(int32 Index);
	struct FFeatureLevelsEnum MakeFeatureLevelsEnum(const struct FFeatureLevelsEnum& Enum);
	struct FFeatureLevelsRowHandle MakeFeatureLevels(class FName RowName);
	bool IsValidName(class FName NameValue);
	struct FFeatureLevelsEnum IntToStruct(int32 IntValue);
	class FName IntToName(int32 IntValue);
	void GetFeatureLevelsStruct(const struct FFeatureLevelsRowHandle& RowHandle, struct FFeatureLevelData* FeatureLevels, enum class EValid* Paths);
	bool EqualEqual_FFeatureLevelsRowHandleFFeatureLevelsRowHandle(const struct FFeatureLevelsRowHandle& RowHandleA, const struct FFeatureLevelsRowHandle& RowHandleB);
	bool EqualEqual_EnumEnum(const struct FFeatureLevelsEnum& A, const struct FFeatureLevelsEnum& B);
	struct FFeatureLevelsRowHandle CastToFeatureLevelsRowHandle(const struct FRowHandle& RowHandle, enum class EValid* Paths);
	void BreakFeatureLevelsEnum(const struct FFeatureLevelsEnum& Enum, class FName* Name, int32* Index);
	void AddRowToFeatureLevelsTable(class FName Name, const struct FFeatureLevelData& Data, struct FFeatureLevelsRowHandle* NewRow, bool bOverrideExistingRow);
};

// 0x0 (0xB8 - 0xB8)
// Class IcarusUtilities.FeatureLevelsTable
class UFeatureLevelsTable : public UIcarusDataTable
{
public:

	static class UClass* StaticClass();
	static class UFeatureLevelsTable* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class IcarusUtilities.IcarusContainerLibrary
class UIcarusContainerLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UIcarusContainerLibrary* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class IcarusUtilities.IcarusFeatureLevelFunctionLibrary
class UIcarusFeatureLevelFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UIcarusFeatureLevelFunctionLibrary* GetDefaultObj();

	bool IsFeatureLevelEnabled(const struct FFeatureLevelsRowHandle& InFeatureLevel);
	struct FFeatureLevelsRowHandle GetCurrentFeatureLevel();
};

// 0x0 (0x28 - 0x28)
// Class IcarusUtilities.IcarusHashesFunctionLibrary
class UIcarusHashesFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UIcarusHashesFunctionLibrary* GetDefaultObj();

	int32 NameToHash(class FName& Name);
	class FName HashToName(int32 Hash);
};

// 0x0 (0xB0 - 0xB0)
// Class IcarusUtilities.IcarusMetaTable
class UIcarusMetaTable : public UDataTable
{
public:

	static class UClass* StaticClass();
	static class UIcarusMetaTable* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class IcarusUtilities.IcarusStringFunctionLibrary
class UIcarusStringFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UIcarusStringFunctionLibrary* GetDefaultObj();

	bool StringContainsSpecialCharacters_Output(const class FString& String, TArray<class FString>* OutSpecialCharacters);
	bool StringContainsSpecialCharacters(const class FString& String);
	TArray<class FString> ParseIntoLines(const class FString& MultiLineInput);
	bool LexicalLess_Text(class FText& TextA, class FText& TextB);
	bool LexicalLess_String(const class FString& StringA, const class FString& StringB);
	bool LexicalLess_Name(class FName& NameA, class FName& NameB);
	bool FastLess_Name(class FName& NameA, class FName& NameB);
};

// 0x0 (0x28 - 0x28)
// Class IcarusUtilities.LessInterface
class ILessInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ILessInterface* GetDefaultObj();

	bool LessThan(class UObject* Other);
};

// 0x518 (0x638 - 0x120)
// Class IcarusUtilities.PanningPanel
class UPanningPanel : public UPanelWidget
{
public:
	uint8                                        Pad_18C6[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScrollBarStyle                       ScrollBarStyle;                                    // 0x130(0x4D0)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	enum class EPanningDirection                 PanningDirection;                                  // 0x600(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_18CA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ScrollBarThickness;                                // 0x604(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             ScrollbarPadding;                                  // 0x60C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             Size;                                              // 0x614(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             ZoomRange;                                         // 0x61C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ZoomOverride;                                      // 0x624(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             PositionOverride;                                  // 0x628(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAllowScroll;                                      // 0x630(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_18E3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        OverscrollAmount;                                  // 0x634(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UPanningPanel* GetDefaultObj();

	void SetZoomOverride(float Value);
	void SetPositionOverride(const struct FVector2D& Position);
	void Refresh();
	struct FVector2D GetPosition();
	class UOverlaySlot* AddChildToOverlay(class UWidget* Content);
};

}


