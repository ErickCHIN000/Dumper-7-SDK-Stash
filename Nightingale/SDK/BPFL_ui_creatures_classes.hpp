#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_ui_creatures.BPFL_ui_creatures_C
class UBPFL_ui_creatures_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_ui_creatures_C* GetDefaultObj();

	void BreakCreatureUIInfo(const struct FDataTableRowHandle& CreatureUIINfoHandle, class UObject* __WorldContext, class FText* CreatureName, TSoftObjectPtr<class UTexture2D>* CreatureIcon, int32* FerocityMin, int32* FerocityMax, TArray<enum class EBiomeID>* Biomes, bool* ShowNameplate, bool CallFunc_IsValidRowHandle_IsValid, const struct FS_CreatureUIData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
};

}


