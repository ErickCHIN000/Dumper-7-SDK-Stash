#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5B (0x2E0 - 0x285)
// WidgetBlueprintGeneratedClass OnlineListWidget.OnlineListWidget_C
class UOnlineListWidget_C : public UBaseAutoHideWidget_C
{
public:
	uint8                                        Pad_1F3E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x288(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UScrollBox*                            LineBox;                                           // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USHRadioGroup*                         LineRadioGroup;                                    // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            PlayersMax;                                        // 0x2A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            PlayersOnline;                                     // 0x2A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_0;                                       // 0x2B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTooltipsBar_C*                        TooltipsBar;                                       // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        MinLines;                                          // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PlayerNum;                                         // 0x2C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PlayerMax;                                         // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F55[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ServerName;                                        // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UOnlineListWidget_C* GetDefaultObj();

	class FText GetText_0(class FText CallFunc_Conv_StringToText_ReturnValue);
	class FText Get_PlayersMax_Text_0(const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	class FText Get_PlayersOnline_Text_0(class FText CallFunc_Conv_IntToText_ReturnValue);
	void UpdatePlayersNum(bool CallFunc_GetSessionStats_ReturnValue);
	void SortList(TArray<class USHOnlinePlayerInfo*>& OnlineList, TArray<class USHOnlinePlayerInfo*>* Result, int32 PartyLeaderIndex, int32 LocalPlayerIndex, const TArray<class USHOnlinePlayerInfo*>& OutResult, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class USHOnlinePlayerInfo* CallFunc_Array_Get_Item, bool CallFunc_GetIsPartyLeader_ReturnValue, class USHParty* CallFunc_GetParty_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsOnline_ReturnValue, bool CallFunc_GetIsPartyLeader_ReturnValue_1, bool CallFunc_IsLocalPlayer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsInParty_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class USHOnlinePlayerInfo* CallFunc_Array_Get_Item_1, class ASHPlayerController* K2Node_DynamicCast_AsSHPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class USHOnlinePlayerInfo* CallFunc_Array_Get_Item_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class USHGlobals* CallFunc_GetSHGlobals_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue);
	bool IsEven(int32 Input, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void Draw(const TArray<class USHOnlinePlayerInfo*>& TempArray, bool Temp_bool_Variable, class USHOnlinePlayerInfo* Temp_object_Variable, class UOnlineUserLine_C* CallFunc_Create_ReturnValue, int32 Temp_int_Variable, bool CallFunc_IsEven_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UOnlineUserLine_C* CallFunc_Create_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, TArray<class USHOnlinePlayerInfo*>& CallFunc_SortList_Result, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class USHOnlinePlayerInfo* CallFunc_Array_Get_Item, class ASHGameState* K2Node_DynamicCast_AsSHGame_State, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class USHOnlinePlayerInfo* K2Node_Select_Default, int32 CallFunc_Max_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, bool CallFunc_EqualEqual_KeyKey_ReturnValue_3, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, TScriptInterface<class IBPI_CharInventory_C> K2Node_DynamicCast_AsBPI_Char_Inventory, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanOR_ReturnValue_1, TScriptInterface<class IPlayerHUDInterface_C> CallFunc_GetHudWidget_HUDInterface, bool CallFunc_BooleanOR_ReturnValue_2, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Show();
	void OnUpdateOnlineUI_Event_0();
	void OnUpdateSession_Event_0();
	void OnTooltipButtonClicked_Event_0(enum class ETooltipButtonType ButtonType);
	void ExecuteUbergraph_OnlineListWidget(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ASHPlayerController* K2Node_DynamicCast_AsSHPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ASHGameState* K2Node_DynamicCast_AsSHGame_State, bool K2Node_DynamicCast_bSuccess_1, class FText CallFunc_FindTextInLocalizationTable_OutText, bool CallFunc_FindTextInLocalizationTable_ReturnValue, const struct FTooltipButtonInfo& K2Node_MakeStruct_TooltipButtonInfo, const struct FTooltipButtonInfo& K2Node_MakeStruct_TooltipButtonInfo_1, class USHGlobals* CallFunc_GetSHGlobals_ReturnValue, enum class ETooltipButtonType K2Node_CustomEvent_ButtonType, const struct FTooltipButtonInfo& K2Node_Select_Default, bool K2Node_SwitchEnum_CmpSuccess, TArray<struct FTooltipButtonInfo>& K2Node_MakeArray_Array, class USHUserWidget* CallFunc_GetSelectedWidget_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class UOnlineUserLine_C* K2Node_DynamicCast_AsOnline_User_Line, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IBPI_CharInventory_C> K2Node_DynamicCast_AsBPI_Char_Inventory, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class IPlayerHUDInterface_C> CallFunc_GetHudWidget_HUDInterface, class UOnlineUserLine_C* K2Node_DynamicCast_AsOnline_User_Line_1, bool K2Node_DynamicCast_bSuccess_4);
};

}


