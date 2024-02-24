#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x278 - 0x260)
// WidgetBlueprintGeneratedClass wid_OnScreen_Inventory_HP.wid_OnScreen_Inventory_HP_C
class UWid_OnScreen_Inventory_HP_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UCanvasPanel*                          VisibilityContainer;                               // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_Inventory_HP_V2_C*                Wid_Inventory_HP_V2;                               // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_OnScreen_Inventory_HP_C* GetDefaultObj();

	void UpdateVisibilityContainerVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class ACGGameModeBase* CallFunc_GetCGGameMode_AsFirst_Person_Game_Mode, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_GetIsPhotoModeActive_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void Construct();
	void Destruct();
	void BindVisibilityContainerCallback();
	void UnbindVisibilityContainerCallback();
	void PhotomodeChanged(bool bIsActivated);
	void ExecuteUbergraph_wid_OnScreen_Inventory_HP(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_CustomEvent_bIsActivated, class ACGGameModeBase* CallFunc_GetCGGameModeBase_ReturnValue);
};

}


