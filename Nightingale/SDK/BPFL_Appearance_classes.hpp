#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_Appearance.BPFL_Appearance_C
class UBPFL_Appearance_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_Appearance_C* GetDefaultObj();

	void GetOutfitItems(const struct FDataTableRowHandle& DT_Row, class UObject* __WorldContext, TArray<struct FCharacterAppearance_OutfitData>* Out_Items, bool* Valid, bool CallFunc_DoesDataTableRowExist_ReturnValue, const struct FCharacterAppearance_Preset& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
};

}


