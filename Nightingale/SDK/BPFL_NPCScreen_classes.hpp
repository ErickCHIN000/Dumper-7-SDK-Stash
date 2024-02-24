#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_NPCScreen.BPFL_NPCScreen_C
class UBPFL_NPCScreen_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_NPCScreen_C* GetDefaultObj();

	void GetNPCMenu(const struct FDataTableRowHandle& NPC_Row, class UObject* __WorldContext, enum class E_ui_NPCMenus* Menu_Type, class FText* Optional_Minus_Menu_Name_, TArray<struct FDataTableRowHandle>* Available_Content, bool CallFunc_DoesDataTableRowExist_ReturnValue, const struct FS_NPCMenu_Content& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
};

}


