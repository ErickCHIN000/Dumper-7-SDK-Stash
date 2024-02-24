#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x340 - 0x288)
// WidgetBlueprintGeneratedClass TitleScreenHUD.TitleScreenHUD_C
class UTitleScreenHUD_C : public UGGHUDUserWidgetMainMenu
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x288(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                          WidgetContainer;                                   // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<class AGGGoat*, class UUserWidget*>     Widgets;                                           // 0x298(0x50)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)
	TMap<class AGGPartyMemberSpawnPoint*, class UUserWidget*> PartyMemberPoints;                                 // 0x2E8(0x50)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)
	class ABP_CinematicGoat_C*                   CinematicGoat;                                     // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTitleScreenHUD_C* GetDefaultObj();

	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, class AGGPlayerController* CallFunc_GetPrimaryGGPlayerController_ReturnValue, class ABP_MenuPlayerController_C* K2Node_DynamicCast_AsBP_Menu_Player_Controller, bool K2Node_DynamicCast_bSuccess, enum class ECastResult CallFunc_GetActiveMenuWidgetCast_Result, class UGGMenuUserWidget* CallFunc_GetActiveMenuWidgetCast_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FEventReply& CallFunc_SetUserFocus_ReturnValue);
	void Construct();
	void UpdatePositions();
	void CustomEvent_0();
	void RefreshPartyPointInviteWidgets();
	void OnMenuClosed(const struct FGameplayTag& InMenuTag, const struct FMenuNavigationContext& Context);
	void OnMenuOpened(const struct FGameplayTag& InMenuTag, const struct FMenuNavigationContext& Context);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_TitleScreenHUD(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, class UPlayerInviteWidget_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class ABP_CinematicGoat_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, TArray<class AGGGoat*>& CallFunc_Map_Keys_Keys, class AGGGoat* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_2, class UUserWidget* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, TArray<class AGGPartyMemberSpawnPoint*>& CallFunc_GetAllActorsOfClass_OutActors_1, class AGGPartyMemberSpawnPoint* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_3, const struct FVector& CallFunc_GetInviteButtonLocation_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FVector2D& CallFunc_ProjectWorldToScreen_ScreenPosition, bool CallFunc_ProjectWorldToScreen_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, TArray<class AGGPartyMemberSpawnPoint*>& CallFunc_Map_Keys_Keys_1, float CallFunc_GetViewportScale_ReturnValue, class AGGPartyMemberSpawnPoint* CallFunc_Array_Get_Item_2, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue, bool CallFunc_IsClaimed_ReturnValue, const struct FVector& CallFunc_GetInviteButtonLocation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const struct FVector2D& CallFunc_ProjectWorldToScreen_ScreenPosition_1, bool CallFunc_ProjectWorldToScreen_ReturnValue_1, class UUserWidget* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, float CallFunc_GetViewportScale_ReturnValue_1, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, const struct FAnchors& K2Node_MakeStruct_Anchors, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue_1, int32 CallFunc_Map_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_3, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_3, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, enum class ESlateVisibility Temp_byte_Variable_2, class ABP_CinematicGoat_C* CallFunc_GetActorOfClass_ReturnValue, int32 Temp_int_Array_Index_Variable_3, bool CallFunc_IsMainMenuStartingLevel_ReturnValue, class ABP_CinematicGoat_C* CallFunc_Array_Get_Item_3, bool CallFunc_BooleanOR_ReturnValue, class AGGPlayerController* CallFunc_GetGGPlayerController_ReturnValue, class UTrackerGoatWidget_C* CallFunc_Create_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, const struct FGameplayTag& K2Node_CustomEvent_InMenuTag_1, const struct FMenuNavigationContext& K2Node_CustomEvent_Context_1, class AGGPlayerController* K2Node_DynamicCast_AsGGPlayer_Controller, bool K2Node_DynamicCast_bSuccess_1, const struct FGameplayTag& K2Node_CustomEvent_InMenuTag, const struct FMenuNavigationContext& K2Node_CustomEvent_Context, bool CallFunc_HasBlockingChildMenuOpened_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default, bool Temp_bool_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, enum class ESlateVisibility K2Node_Select_Default_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_3, class AGGPlayerController* K2Node_DynamicCast_AsGGPlayer_Controller_1, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_Event_IsDesignTime, enum class ECastResult CallFunc_GetActiveMenuWidgetCast_Result, class UGGMenuUserWidget* CallFunc_GetActiveMenuWidgetCast_ReturnValue, bool CallFunc_IsMobilePlatform_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1);
};

}


