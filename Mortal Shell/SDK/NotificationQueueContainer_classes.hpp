#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x150 (0x380 - 0x230)
// WidgetBlueprintGeneratedClass NotificationQueueContainer.NotificationQueueContainer_C
class UNotificationQueueContainer_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class URetainerBox*                          RetainerBox_NotificationContainer;                 // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_Notification;                          // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FToolTipInfo                          ItemTooltip;                                       // 0x248(0xB4)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_3092[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ItemUsedText;                                      // 0x300(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         ShowFamiliarity;                                   // 0x318(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3098[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Familiarity_DiamondsNumber_New;                    // 0x31C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Familiarity_DiamondsNumber_Old;                    // 0x320(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bAnimateLastDiamondOfFamiliarity;                  // 0x324(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_309F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        AcquiredAmount;                                    // 0x328(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30A6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameplayPC_C*                         GameplayPC;                                        // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ID;                                                // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Notify_Counter;                                    // 0x340(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30AD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            Notify_CountDecreased;                             // 0x348(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FToolTipInfo>                  Weapons;                                           // 0x358(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class FName>                          Wepons_ID;                                         // 0x368(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UStormModeNotifier_Component_C*        StormModeNotifier;                                 // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UNotificationQueueContainer_C* GetDefaultObj();

	void CreateNotification_StormMode(class FName ID, int32 LastUnlockedTier, float Progress, float Local_Progress, int32 Local_UnlockedTier, class FName Local_ID, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UNotification_StormMode_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void SetWeaponDetails(enum class EComboTypes Weapon, int32 Local_Index, int32 CallFunc_Conv_ByteToInt_ReturnValue, class FName CallFunc_Array_Get_Item, const struct FToolTipInfo& CallFunc_Array_Get_Item_1);
	class UTexture2D* GetShellIcon(bool IsNameKnown, enum class EArmorTypes CurrentShell, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, class UTexture2D* Temp_object_Variable_2, class UTexture2D* Temp_object_Variable_3, class UTexture2D* Temp_object_Variable_4, class UTexture2D* Temp_object_Variable_5, bool Temp_bool_Variable, enum class EArmorTypes Temp_byte_Variable, class UTexture2D* Temp_object_Variable_6, class UTexture2D* Temp_object_Variable_7, class UTexture2D* Temp_object_Variable_8, class UTexture2D* Temp_object_Variable_9, class UTexture2D* Temp_object_Variable_10, class UTexture2D* Temp_object_Variable_11, enum class EArmorTypes Temp_byte_Variable_1, class UTexture2D* K2Node_Select_Default, class UTexture2D* K2Node_Select_Default_1, class UTexture2D* K2Node_Select_Default_2);
	void SetShellRetrievedDetails(class FText& ShellName, class FText ShellTagline, enum class EArmorTypes ShellRetrieved, enum class EArmorTypes* Shell, bool CallFunc_IsShellNameKnown_bKnown, class UTexture2D* CallFunc_GetShellIcon_ReturnValue, const struct FToolTipInfo& K2Node_MakeStruct_ToolTipInfo);
	void CreateNotification(bool IsShellNotify, bool IsShellRenouncedNotify, enum class Enum_NotifyType NotifyType, enum class EArmorTypes CurrentArmor, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UNotification_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void SetUsedItemDetails(const struct FToolTipInfo& ItemTooltip, int32 PreviousFamiliarity, int32 NewFamiliarity, int32 CurrentFamiliarity, int32 MaxFamiliarity, class FName ID);
	void SetGenericNotificationDetails(const struct FToolTipInfo& Tooltip, class FText NotificationText, bool ShowFamiliarity, bool AnimateLastDiamong, int32 PreviousFamiliarity, int32 CurrentFamiliarity, int32 MaxFamiliarity, bool* IsShellNotify, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void SetAcquiredItemDetails(const struct FToolTipInfo& ItemTooltip, int32 Familiarity, int32 MaxFamiliarity, class FName ID, int32 Amount);
	void SetShellEquippedDetails(class FText& ShellName, class FText ShellTagline, bool* IsDarkForm, enum class EArmorTypes* Shell, bool CallFunc_IsShellNameKnown_bKnown, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UTexture2D* CallFunc_GetShellIcon_ReturnValue, const struct FToolTipInfo& K2Node_MakeStruct_ToolTipInfo);
	void SetNewFamiliarity(struct FToolTipInfo& ToolTipInfo, int32 CallFunc_AddFamiliarity_ReturnValue);
	int32 AddFamiliarity(struct FToolTipInfo& ToolTipInfo, int32 CallFunc_Add_IntInt_ReturnValue);
	void SetFamiliarityAndDetermineIfWeNeedToAnimateLastDiamond(int32 PreviousFamiliarity, int32 NewFamiliarity, int32 CurrentFamiliarity, int32 MaxFamiliarity, int32 Local_NewFamiliarity, int32 Local_PreviousFamiliarity, int32 Local_MaxFamiliarity, int32 Local_CurrentFamiliarity, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, float CallFunc_NormalizeToRange_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_3, float CallFunc_NormalizeToRange_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_4, float CallFunc_Multiply_IntFloat_ReturnValue_1, int32 CallFunc_FFloor_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_5, float CallFunc_NormalizeToRange_ReturnValue_2, float CallFunc_Multiply_IntFloat_ReturnValue_2, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Round_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9);
	void GetLastNotificationPos();
	void Construct();
	void OnItemFamiliarityChanged_Set(const struct FToolTipInfo& Tooltip, int32 PreviousFamiliarity, int32 CurrentFamiliarity, int32 MaxFamiliarity, class FName ID);
	void OnItemAcquired_Set(const struct FToolTipInfo& InventoryItem, int32 Familiarity, int32 MaxFamiliarity, class FName ID, int32 Amount);
	void OnShellEquipped_Set(class FText ShellName, class FText ShellTagline);
	void OnGenericNotification_Set(const struct FToolTipInfo& Tooltip, class FText NotificationText, bool ShowFamiliarity, bool AnimateLastDiamond, int32 PreviousFamiliarity, int32 CurrentFamiliarity, int32 MaxFamiliarity);
	void OnItemFamiliarityChanged_Bind();
	void OnItemAcquired_Bind();
	void OnShellEquipped_Bind();
	void OnGenericNotification_Bind();
	void OnShellRetrieved_Bind();
	void OnShellRetrieved_Set(class FText ShellName, class FText ShellTagline, enum class EArmorTypes ShellRetrieved);
	void Notify_Removed();
	void OnWeaponEquipped_Bind();
	void OnWeaponEquipped_Set(enum class EComboTypes Weapon, bool IsChangingWeaponMode);
	void OnInitialized();
	void OnWeaponEquipped_Unbind();
	void OnMilestoneUnlocked(class FName ID, int32 LastUnlockedTier, float Progress);
	void ExecuteUbergraph_NotificationQueueContainer(int32 EntryPoint, class FName K2Node_CustomEvent_ID, int32 K2Node_CustomEvent_LastUnlockedTier, float K2Node_CustomEvent_Progress, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, enum class Enum_NotifyType Temp_byte_Variable, enum class Enum_NotifyType Temp_byte_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FToolTipInfo& K2Node_CustomEvent_ToolTip_1, int32 K2Node_CustomEvent_PreviousFamiliarity_1, int32 K2Node_CustomEvent_CurrentFamiliarity_1, int32 K2Node_CustomEvent_MaxFamiliarity_2, class FName K2Node_CustomEvent_ID_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess, const struct FToolTipInfo& K2Node_CustomEvent_InventoryItem, int32 K2Node_CustomEvent_Familiarity, int32 K2Node_CustomEvent_MaxFamiliarity_1, class FName K2Node_CustomEvent_ID_1, int32 K2Node_CustomEvent_Amount, class FText K2Node_CustomEvent_ShellName_1, class FText K2Node_CustomEvent_ShellTagline_1, const struct FToolTipInfo& K2Node_CustomEvent_ToolTip, class FText K2Node_CustomEvent_NotificationText, bool K2Node_CustomEvent_ShowFamiliarity, bool K2Node_CustomEvent_AnimateLastDiamond, int32 K2Node_CustomEvent_PreviousFamiliarity, int32 K2Node_CustomEvent_CurrentFamiliarity, int32 K2Node_CustomEvent_MaxFamiliarity, bool CallFunc_SetShellEquippedDetails_IsDarkForm, enum class EArmorTypes CallFunc_SetShellEquippedDetails_Shell, bool CallFunc_SetGenericNotificationDetails_IsShellNotify, enum class Enum_NotifyType K2Node_Select_Default, class FText K2Node_CustomEvent_ShellName, class FText K2Node_CustomEvent_ShellTagline, enum class EArmorTypes K2Node_CustomEvent_ShellRetrieved, enum class EArmorTypes CallFunc_SetShellRetrievedDetails_Shell, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, enum class EComboTypes K2Node_CustomEvent_Weapon, bool K2Node_CustomEvent_IsChangingWeaponMode, bool CallFunc_Not_PreBool_ReturnValue, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FInventoryItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_GetItemFamiliarity_Value, const struct FToolTipInfo& K2Node_MakeStruct_ToolTipInfo, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UStormModeNotifier_Component_C* CallFunc_GetNotifierComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6);
	void Notify_CountDecreased__DelegateSignature();
};

}


