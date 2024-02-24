#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x34 (0x374 - 0x340)
// WidgetBlueprintGeneratedClass WBP_sw_RealmInfoTab_Overview.WBP_sw_RealmInfoTab_Overview_C
class UWBP_sw_RealmInfoTab_Overview_C : public UNWXUserWidget
{
public:
	class UWBP_sw_RealmInfo_GenericRoundImageHolder_C* FactionImgHolder;                                  // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_sw_RealmInfo_GenericImageWithDescriptionHolder_C* RealmCardHolder;                                   // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_NoInfo;                                        // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        Txtr_realmDescription;                             // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        Txtr_realmName;                                    // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDataTable*                            DT_FactionIcon;                                    // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        ImageSize;                                         // 0x370(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_sw_RealmInfoTab_Overview_C* GetDefaultObj();

	void AddMinorCards(class UWBP_sw_RealmInfo_MinorCard_Entry_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ANWXGameStateBase* CallFunc_GetNWXGameStateBase_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, const struct FRealmCardDefinitionReference& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class IRealmCard> CallFunc_GetRealmCardInterfaceFromRealmCardDefinitionReference_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetIcon_ReturnValue, class FText CallFunc_GetName_ReturnValue, class FText CallFunc_GetDescription_ReturnValue);
	void RealmDetailsDisplayNoInfoText(bool ShouldDisplay);
	void UpdateRealmCards(TArray<struct FItemData>& RealmCards, bool IncludeMinorCards, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ANWXGameStateBase* CallFunc_GetNWXGameStateBase_ReturnValue, bool CallFunc_Array_IsNotEmpty_ReturnValue, bool CallFunc_Array_IsNotEmpty_ReturnValue_1, const struct FItemData& CallFunc_Array_Get_Item, bool CallFunc_BooleanOR_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetDefaultItemFullSizeIcon_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UNWXItemPresentationDataAsset* K2Node_DynamicCast_AsNWXItem_Presentation_Data_Asset, bool K2Node_DynamicCast_bSuccess);
	void UpdateRealmDetails(const struct FRealmSettings& RealmSettings, class FText UnknownRealm, const struct FGameplayTagContainer& RealmTags, const class FString& RealmTagsString, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, bool CallFunc_Array_IsNotEmpty_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class FText CallFunc_UI_Get_NWXRealmName_FromTags_Map_Level_Name, class FText CallFunc_UI_Get_NWXRealmName_FromTags_Description, bool CallFunc_UI_Get_NWXRealmName_FromTags_Found_Details);
	void UpdateFactionImgHolder(TArray<enum class EFaction>& Factions, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class FText Temp_text_Variable_6, bool CallFunc_Array_IsNotEmpty_ReturnValue, enum class EFaction Temp_byte_Variable, enum class EFaction CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FS_Faction& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, class FText K2Node_Select_Default);
};

}


