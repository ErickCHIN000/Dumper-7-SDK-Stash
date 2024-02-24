#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x540 - 0x4B8)
// WidgetBlueprintGeneratedClass WBP_DB_Shard_Screen.WBP_DB_Shard_Screen_C
class UWBP_DB_Shard_Screen_C : public UNWXCommonWindowWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_button_base_C*                    BU_Cancel;                                         // 0x4C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_Back;                                          // 0x4C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCircularThrobber*                     CircularThrobber_71;                               // 0x4D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_supportFire;                                   // 0x4D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_supportPermissions;                            // 0x4E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          ShardBox;                                          // 0x4E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              SupportPermissionsImage;                           // 0x4F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_UIK_MenuTabs_C*                   TAB_ShardFilters;                                  // 0x4F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            ShardSelected;                                     // 0x500(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            ShardSelectCancelled;                              // 0x510(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class FString>                        Shards;                                            // 0x520(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<class FString>                        SortedAllShards;                                   // 0x530(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_DB_Shard_Screen_C* GetDefaultObj();

	class UWidget* BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	class UWidget* SupportPermissions_ToolTipWidget(class FText Temp_text_Variable, class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue);
	void IsPreflightShard(const class FString& Shard, bool* IsPreflight, bool CallFunc_StartsWith_ReturnValue);
	void GetPreflightShards(TArray<class FString>* FilteredShards, const TArray<class FString>& LocalFilteredShards, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_IsPreflightShard_IsPreflight);
	void IsHourlyShard(const class FString& Shard, bool* IsHourly, bool CallFunc_StartsWith_ReturnValue);
	void GetHourlyShards(TArray<class FString>* FilteredShards, const TArray<class FString>& LocalFilteredShards, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsHourlyShard_IsHourly);
	void IsNightlyShard(const class FString& Shard, bool* IsNightly, bool CallFunc_StartsWith_ReturnValue);
	void GetNightlyShards(TArray<class FString>* FilteredShards, const TArray<class FString>& LocalFilteredShards, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsNightlyShard_IsNightly);
	void SortShardList(TArray<class FString>& ShardList, TArray<class FString>* SortedShardList, const class FString& LoopCurrentShard, const TArray<class FString>& LocalOtherShards, const TArray<class FString>& LocalPreflightShards, const TArray<class FString>& LocalHourlyShards, const TArray<class FString>& LocalNightlyShards, const TArray<class FString>& LocalSortedShardList, int32 CallFunc_Array_Length_ReturnValue, TArray<class FString>& CallFunc_DecreasingStringSort_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_IsPreflightShard_IsPreflight, int32 CallFunc_Array_AddUnique_ReturnValue_1, bool CallFunc_IsHourlyShard_IsHourly, int32 CallFunc_Array_AddUnique_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsNightlyShard_IsNightly, const class FString& CallFunc_Array_Get_Item, TArray<class FString>& CallFunc_DecreasingStringSort_ReturnValue_1, TArray<class FString>& CallFunc_DecreasingStringSort_ReturnValue_2, TArray<class FString>& CallFunc_DecreasingStringSort_ReturnValue_3);
	void RefreshShardList(TArray<class FString>& FilteredShardList, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_Array_Get_Item, const class FString& CallFunc_GetShardNameForID_ShardName, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWBP_DB_Shard_sw_ListEntry_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
	void OnShardSelected(const class FString& Shard);
	void FocusDefaultWidget(class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void UsingGamepadChangedHandler(bool UsingGamepad);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void GetShardNameForID(const class FString& ShardId, class FString* ShardName, bool K2Node_SwitchString_CmpSuccess);
	void BndEvt__BU_Cancel_K2Node_ComponentBoundEvent_0_BU_Click__DelegateSignature();
	void Construct();
	void InputCancelPressed();
	void Destruct();
	void BndEvt__WBP_ShardSelect_TAB_ShardFilters_K2Node_ComponentBoundEvent_5_TabSelected__DelegateSignature(class FText SelectedTabName, int32 ActiveTab);
	void OnUsingGamepadChanged_1(bool bUsingGamepad);
	void BndEvt__WBP_DB_Shard_Screen_CBU_Back_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BP_OnDeactivated();
	void ExecuteUbergraph_WBP_DB_Shard_Screen(int32 EntryPoint, TArray<class FString>& CallFunc_SortShardList_SortedShardList, TArray<class FString>& CallFunc_GetNightlyShards_FilteredShards, TArray<class FString>& CallFunc_GetHourlyShards_FilteredShards, TArray<class FString>& CallFunc_GetPreflightShards_FilteredShards, class FText K2Node_ComponentBoundEvent_SelectedTabName, int32 K2Node_ComponentBoundEvent_ActiveTab, bool K2Node_SwitchInteger_CmpSuccess, class UNWXUILoginSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasSupportPermissions_ReturnValue, bool K2Node_Event_bUsingGamepad, enum class ESlateVisibility CallFunc_UI_BoolSet_Visibility_Visible_Result, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button);
	void ShardSelectCancelled__DelegateSignature();
	void ShardSelected__DelegateSignature(const class FString& Shard);
};

}


