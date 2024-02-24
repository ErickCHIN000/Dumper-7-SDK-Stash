#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x208 (0x438 - 0x230)
// WidgetBlueprintGeneratedClass ItemDescription.ItemDescription_C
class UItemDescription_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_Scale_Large;                                  // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Scale_Medium;                                 // 0x240(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Scale_Default;                                // 0x248(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      FadeIn;                                            // 0x250(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_Collapsed;                             // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            FamText;                                           // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_ItemDescription_Background;                  // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        ItemDescriptionRichTextBox;                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ItemNameText;                                      // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ItemTypeText;                                      // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_1;                                       // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_2;                                       // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Texture_Collapsed;                                 // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFamiliarityWidget_C*                  UI_FamiliarityWidget;                              // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FInventoryItem                        Item;                                              // 0x2A8(0x132)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_C04[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              BGImageMat;                                        // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_InventoryItem_CanUse         CanUse;                                            // 0x3E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsShown;                                           // 0x3E9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C0D[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        WeaponUpgradeLevel;                                // 0x3EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowWeaponUpgradeLevel;                            // 0x3F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C11[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  EffectDescription;                                 // 0x3F8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  EffectDescription_WithFam;                         // 0x410(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                EndEffectDescription;                              // 0x428(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UItemDescription_C* GetDefaultObj();

	class FText SetItemFamEffectText(class FName ID, class FText Effect, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class FText CallFunc_StormMode_ItemFamEffectText_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_StormModeIsActive_ReturnValue);
	class FText SetItemEffectText(class FName ID, class FText Effect, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_StormMode_ItemEffectText_ReturnValue, bool CallFunc_StormModeIsActive_ReturnValue);
	void HandleScale(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, enum class Enum_HUD_Size CallFunc_GetUIScale_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void SetItemName(class FText ItemName, bool Temp_bool_Variable, class FText CallFunc_CheckItemName_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const class FString& K2Node_Select_Default, class FText CallFunc_Conv_StringToText_ReturnValue);
	void IsSelectedItemAWeaponAndHasUpgrades(class FName CallFunc_GetAxatanaOreID_ID, int32 CallFunc_GetNamedPCInt_Value, int32 CallFunc_GetNamedPCInt_Value_1, int32 CallFunc_GetNamedPCInt_Value_2, int32 CallFunc_GetNamedPCInt_Value_3, int32 CallFunc_GetNamedPCInt_Value_4, bool K2Node_SwitchName_CmpSuccess);
	class FText HideEffectDescription(class FText EffectDescription, class FName ID, bool Familiarity, class FText Temp_text_Variable, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable, class FText K2Node_Select_Default);
	class FString ItalicDescription(class FText& InText, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2);
	class FString GetCannotUseString(enum class Enum_InventoryItem_CanUse Temp_byte_Variable, const class FString& Temp_string_Variable, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& K2Node_Select_Default);
	void ItemDetails(bool Local_HasFamiliarity, class FText Local_FamiliarityDescription, int32 Local_AmountToUnlock, class FText Local_Description, enum class EItemType Local_ItemType, class FText Local_Name, class FName Local_ID, const class FString& CallFunc_GetCannotUseString_ReturnValue, bool Temp_bool_Variable, const class FString& Temp_string_Variable, const class FString& CallFunc_ItalicDescription_ReturnValue, int32 CallFunc_GetItemMaxFamiliarity_MaxFamiliarity, int32 CallFunc_GetItemFamiliarity_Value, const class FString& CallFunc_CreateExtendedDescription_ReturnValue, bool CallFunc_CreateExtendedDescription_OutputPin, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& K2Node_Select_Default, const class FString& CallFunc_CreateItemEffectDescription_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, int32 CallFunc_GetItemMaxFamiliarity_MaxFamiliarity_1, int32 CallFunc_GetItemFamiliarity_Value_1, class FText CallFunc_SetItemFamEffectText_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_GetAverageFamiliarity_ReturnValue, class FText CallFunc_SetItemEffectText_ReturnValue, bool Temp_bool_Variable_1, const class FString& K2Node_Select_Default_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, class FText CallFunc_Conv_StringToText_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void InstantReset();
	void Reset(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void SetFamiliarityVisibility(bool bVisiblity);
	void HandleParallax(const struct FVector2D& NormalizedMousePos, const struct FVector2D& CallFunc_GetMousePosFromCenterOfScreen_Position);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void SetItemInfo(const struct FInventoryItem& Item, enum class Enum_InventoryItem_CanUse CanUse);
	void ExecuteUbergraph_ItemDescription(int32 EntryPoint, const struct FInventoryItem& K2Node_CustomEvent_Item, enum class Enum_InventoryItem_CanUse K2Node_CustomEvent_CanUse, bool K2Node_Event_IsDesignTime);
};

}


