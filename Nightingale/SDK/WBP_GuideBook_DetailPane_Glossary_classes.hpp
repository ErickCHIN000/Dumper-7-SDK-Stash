#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x3A0 - 0x360)
// WidgetBlueprintGeneratedClass WBP_GuideBook_DetailPane_Glossary.WBP_GuideBook_DetailPane_Glossary_C
class UWBP_GuideBook_DetailPane_Glossary_C : public UNWXGuidebookDetailPane
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTileView*                             Grid_RelatedRealms;                                // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_card;                                          // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            Scrollbox_description;                             // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_body;                                          // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TXT_RealmLevel;                                    // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TXT_Title;                                         // 0x390(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          Vb_RealmContainer;                                 // 0x398(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_GuideBook_DetailPane_Glossary_C* GetDefaultObj();

	void OnRealmCardTilePressed(class UNWXMenuDataEntry* MenuDataEntry);
	void UpdateRelatedRealmCardsGrid(class UNWXMenuDataEntryGlossary* GlossaryEntry, class UNWXGlossaryToAssociatedRealmsRelationsTracker* LAssociatedRealmsTracker, const TArray<class UNWXMenuDataEntry*>& LRelatedRealmCardEntries, class UNWXGlossaryToAssociatedRealmsRelationsTracker* CallFunc_GetRelationsTracker_ReturnValue, bool CallFunc_Array_IsEmpty_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default, class FText CallFunc_GetDisplayName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<class UNWXMenuDataEntry*>& CallFunc_GetRelatedEntries_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	void OnRealmCardDoubleClicked(class UNWXMenuDataEntry* MenuDataEntry, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTag& CallFunc_GuideBookCraftingRecipesCategoryTag_ReturnValue);
	void OnGridEntryReleased(class UUserWidget* Widget, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWBP_GuideBook_Thumb_C* K2Node_DynamicCast_AsWBP_Guide_Book_Thumb, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void OnGridEntryGenerated(class UUserWidget* Widget, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWBP_GuideBook_Thumb_C* K2Node_DynamicCast_AsWBP_Guide_Book_Thumb, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void UpdateCosmetics(class UBP_MenuDataEntry_Glossary_C* GlossaryEntry, bool Temp_bool_Variable, bool CallFunc_HasFiniteMaxLevel_ReturnValue, bool CallFunc_SpawnsInAllLevels_ReturnValue, const struct FResourceLevelRange& CallFunc_GetLevelRange_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, int64 CallFunc_Conv_IntToInt64_ReturnValue_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, class FText K2Node_Select_Default, bool CallFunc_GetImage_IsValidReference, TSoftObjectPtr<class UTexture2D> CallFunc_GetImage_EntryImage, class FText CallFunc_GetDescription_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, class UBP_MenuDataEntry_Glossary_C* K2Node_DynamicCast_AsBP_Menu_Data_Entry_Glossary, bool K2Node_DynamicCast_bSuccess);
	void ResetCosmetics();
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_GuideBook_DetailPane_Glossary(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue);
};

}


