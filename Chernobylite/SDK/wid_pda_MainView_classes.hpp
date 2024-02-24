#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x51 (0x2B1 - 0x260)
// WidgetBlueprintGeneratedClass wid_pda_MainView.wid_pda_MainView_C
class UWid_pda_MainView_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWid_pda_Notes_C*                      Companions;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_pda_Notes_C*                      CraftingRecipes;                                   // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            CurrentApplication;                                // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_Inventory_Main_C*                 Inventory;                                         // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_pda_Map_C*                        Map;                                               // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_PDA_Menu_C*                       Menu;                                              // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_pda_Notes_C*                      Skills;                                            // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       Switcher;                                          // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        CurrentApplicationIndex;                           // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimerOpacity;                                      // 0x2AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TimerAnimationPlaying;                             // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UWid_pda_MainView_C* GetDefaultObj();

	void OnMouseUnhover(class UWid_PDA_Menu_Entry_C* CallFunc_GetTab_NewParam);
	void OnMouseHover(int32 NewIndex, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWid_PDA_Menu_Entry_C* K2Node_DynamicCast_AsWid_PDA_Menu_Entry, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetChildAt_ReturnValue_1, int32 CallFunc_GetChildrenCount_ReturnValue, class UWid_PDA_Menu_Entry_C* K2Node_DynamicCast_AsWid_PDA_Menu_Entry_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void SelectApp(int32 CurrentApplicationIndex, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, class UTexture2D* Temp_object_Variable_2, class UTexture2D* Temp_object_Variable_3, class UTexture2D* Temp_object_Variable_4, class UWid_pda_Notes_C* Temp_object_Variable_5, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class UWidget* CallFunc_GetActiveWidget_ReturnValue, class UWid_pda_IFullScreen_C* K2Node_DynamicCast_AsWid_Pda_IFull_Screen, bool K2Node_DynamicCast_bSuccess, class UWid_pda_Notes_C* Temp_object_Variable_6, class UWidget* CallFunc_GetActiveWidget_ReturnValue_1, class UWid_pda_IFullScreen_C* K2Node_DynamicCast_AsWid_Pda_IFull_Screen_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, class UTexture2D* K2Node_Select_Default, class UWid_pda_Notes_C* K2Node_Select_Default_1);
	void InputClose();
	void InputRDown();
	void InputRLeft();
	void InputRLeftRight(float Axis);
	void InputRRight();
	void InputRUp();
	void OpenMap();
	void PreConstruct(bool IsDesignTime);
	void InputRight();
	void InputLeft();
	void InputUp();
	void InputDown();
	void InputFaceDown();
	void InputFaceRight();
	void InputFaceLeft();
	void InputFaceUp();
	void InputRightStick();
	void InputLeftStick();
	void InputL2();
	void InputR2();
	void InputDPadUp();
	void InputDPadRight();
	void InputDPadDown();
	void InputDPadLeft();
	void InputL1();
	void InputR1();
	void InputLeftRight(float Axis);
	void InputUpDown(float Axis);
	void InputQuickUse1();
	void InputQuickUse2();
	void InputQuickUse3();
	void InputQuickUse4();
	void InputFaceDownReleased();
	void Construct();
	void InputZoomUp();
	void InputZoomDown();
	void InputForceLeave();
	void SwitchToMapApp(class Abp_MinimapTag_C* Tag);
	void OpenApp(int32 InAppIndx);
	void SwitchApp(int32 InAppIndx);
	void InputFaceRightReleased();
	void InputFaceLeftReleased();
	void ForceDropItem();
	void InputUIAccept();
	void InputQuickUse5();
	void InputQuickUse6();
	void InputQuickUse7();
	void InputQuickUse8();
	void InputAssign();
	void BackButtonClicked();
	void BindBackButtons();
	void InputFaceUpReleased();
	void InputRUpDown(float Axis);
	void ExecuteUbergraph_wid_pda_MainView(int32 EntryPoint, class UWidget* CallFunc_GetActiveWidget_ReturnValue, class UWidget* CallFunc_GetActiveWidget_ReturnValue_1, class UWid_pda_IFullScreen_C* K2Node_DynamicCast_AsWid_Pda_IFull_Screen, bool K2Node_DynamicCast_bSuccess, class UWid_pda_IFullScreen_C* K2Node_DynamicCast_AsWid_Pda_IFull_Screen_1, bool K2Node_DynamicCast_bSuccess_1, class UWidget* CallFunc_GetActiveWidget_ReturnValue_2, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class UWid_pda_IFullScreen_C* K2Node_DynamicCast_AsWid_Pda_IFull_Screen_2, bool K2Node_DynamicCast_bSuccess_2, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, class UWidget* CallFunc_GetActiveWidget_ReturnValue_3, FDelegateProperty_ Temp_delegate_Variable_1, class UWid_pda_IFullScreen_C* K2Node_DynamicCast_AsWid_Pda_IFull_Screen_3, bool K2Node_DynamicCast_bSuccess_3, class UWidget* CallFunc_GetActiveWidget_ReturnValue_4, class UWidget* CallFunc_GetActiveWidget_ReturnValue_5, class UWid_pda_IFullScreen_C* K2Node_DynamicCast_AsWid_Pda_IFull_Screen_4, bool K2Node_DynamicCast_bSuccess_4, class UWid_pda_IFullScreen_C* K2Node_DynamicCast_AsWid_Pda_IFull_Screen_5, bool K2Node_DynamicCast_bSuccess_5, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_1, FDelegateProperty_ Temp_delegate_Variable_2, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_2, class UWidget* CallFunc_GetActiveWidget_ReturnValue_6, class UWid_pda_IFullScreen_C* K2Node_DynamicCast_AsWid_Pda_IFull_Screen_6, bool K2Node_DynamicCast_bSuccess_6, class UWidget* CallFunc_GetActiveWidget_ReturnValue_7, class UWid_pda_IFullScreen_C* K2Node_DynamicCast_AsWid_Pda_IFull_Screen_7, bool K2Node_DynamicCast_bSuccess_7, bool CallFunc_CanHidePhone_CanHide, class UWid_pda_Notes_C* Temp_object_Variable, class UWidget* CallFunc_GetActiveWidget_ReturnValue_8, class UWid_pda_IFullScreen_C* K2Node_DynamicCast_AsWid_Pda_IFull_Screen_8, bool K2Node_DynamicCast_bSuccess_8, class UWid_pda_Notes_C* Temp_object_Variable_1, class UWidget* CallFunc_GetActiveWidget_ReturnValue_9, class UWid_pda_IFullScreen_C* K2Node_DynamicCast_AsWid_Pda_IFull_Screen_9, bool K2Node_DynamicCast_bSuccess_9, class UWidget* CallFunc_GetActiveWidget_ReturnValue_10, class UWid_pda_IFullScreen_C* K2Node_DynamicCast_AsWid_Pda_IFull_Screen_10, bool K2Node_DynamicCast_bSuccess_10, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, int32 Temp_int_Variable, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_1, class UWidget* CallFunc_GetActiveWidget_ReturnValue_11, bool Temp_bool_IsClosed_Variable_2, class UWid_pda_IFullScreen_C* K2Node_DynamicCast_AsWid_Pda_IFull_Screen_11, bool K2Node_DynamicCast_bSuccess_11, bool Temp_bool_Has_Been_Initd_Variable_2, class UTexture2D* Temp_object_Variable_2, bool Temp_bool_Has_Been_Initd_Variable_3, bool Temp_bool_IsClosed_Variable_3, bool Temp_bool_Has_Been_Initd_Variable_4, class UTexture2D* Temp_object_Variable_3, class UWidget* CallFunc_GetActiveWidget_ReturnValue_12, class UTexture2D* Temp_object_Variable_4, class UWid_pda_IFullScreen_C* K2Node_DynamicCast_AsWid_Pda_IFull_Screen_12, bool K2Node_DynamicCast_bSuccess_12, int32 CallFunc_GetActiveWidgetIndex_ReturnValue_1, class UWidget* CallFunc_GetActiveWidget_ReturnValue_13, class UTexture2D* Temp_object_Variable_5, class UWid_pda_IFullScreen_C* K2Node_DynamicCast_AsWid_Pda_IFull_Screen_13, bool K2Node_DynamicCast_bSuccess_13, bool Temp_bool_IsClosed_Variable_4, class UWidget* CallFunc_GetActiveWidget_ReturnValue_14, class UWid_pda_IFullScreen_C* K2Node_DynamicCast_AsWid_Pda_IFull_Screen_14, bool K2Node_DynamicCast_bSuccess_14, class UWid_pda_Map_C* K2Node_DynamicCast_AsWid_Pda_Map, bool K2Node_DynamicCast_bSuccess_15, class UWidget* CallFunc_GetActiveWidget_ReturnValue_15, class UWid_pda_IFullScreen_C* K2Node_DynamicCast_AsWid_Pda_IFull_Screen_15, bool K2Node_DynamicCast_bSuccess_16, float K2Node_Event_Axis_3, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UTexture2D* Temp_object_Variable_6, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_GetChildrenCount_ReturnValue_3, bool K2Node_Event_IsDesignTime, int32 CallFunc_Percent_IntInt_ReturnValue_1, int32 Temp_int_Variable_1, class UWid_pda_Notes_C* Temp_object_Variable_7, class UWid_pda_Notes_C* Temp_object_Variable_8, int32 Temp_int_Variable_2, class UTexture2D* Temp_object_Variable_9, class UWidget* CallFunc_GetActiveWidget_ReturnValue_16, class UWid_pda_IFullScreen_C* K2Node_DynamicCast_AsWid_Pda_IFull_Screen_16, bool K2Node_DynamicCast_bSuccess_17, class UTexture2D* Temp_object_Variable_10, class UTexture2D* Temp_object_Variable_11, class UTexture2D* Temp_object_Variable_12, class UWidget* CallFunc_GetActiveWidget_ReturnValue_17, class UWid_pda_IFullScreen_C* K2Node_DynamicCast_AsWid_Pda_IFull_Screen_17, bool K2Node_DynamicCast_bSuccess_18, class UWidget* CallFunc_GetActiveWidget_ReturnValue_18, class UWid_pda_IFullScreen_C* K2Node_DynamicCast_AsWid_Pda_IFull_Screen_18, bool K2Node_DynamicCast_bSuccess_19, class UTexture2D* Temp_object_Variable_13, float K2Node_Event_Axis_2, float K2Node_Event_Axis_1, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, int32 Temp_int_Variable_3, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class Abp_MinimapTag_C* K2Node_CustomEvent_Tag, bool CallFunc_CloseInventory_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 K2Node_Event_InAppIndx_1, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 K2Node_Event_InAppIndx, class UWidget* CallFunc_GetActiveWidget_ReturnValue_19, class UWid_pda_IFullScreen_C* K2Node_DynamicCast_AsWid_Pda_IFull_Screen_19, bool K2Node_DynamicCast_bSuccess_20, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UWidget* CallFunc_GetActiveWidget_ReturnValue_20, class UWid_pda_IFullScreen_C* K2Node_DynamicCast_AsWid_Pda_IFull_Screen_20, bool K2Node_DynamicCast_bSuccess_21, class UWid_Inventory_Grid_GrabPanel_C* K2Node_DynamicCast_AsWid_Inventory_Grid_Grab_Panel, bool K2Node_DynamicCast_bSuccess_22, class UWidget* CallFunc_GetActiveWidget_ReturnValue_21, class UWid_pda_IFullScreen_C* K2Node_DynamicCast_AsWid_Pda_IFull_Screen_21, bool K2Node_DynamicCast_bSuccess_23, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class ACGGameModeBase* CallFunc_GetCGGameMode_AsFirst_Person_Game_Mode, int32 CallFunc_GetCurrentControllerIconsSetting_ReturnValue, class UWidget* CallFunc_GetActiveWidget_ReturnValue_22, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, class UWid_pda_IFullScreen_C* K2Node_DynamicCast_AsWid_Pda_IFull_Screen_22, bool K2Node_DynamicCast_bSuccess_24, class UWidget* CallFunc_GetActiveWidget_ReturnValue_23, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class UWid_pda_IFullScreen_C* K2Node_DynamicCast_AsWid_Pda_IFull_Screen_23, bool K2Node_DynamicCast_bSuccess_25, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, TArray<class UWid_LevelTimer_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, bool CallFunc_BooleanOR_ReturnValue, class UWid_LevelTimer_C* CallFunc_Array_Get_Item, bool CallFunc_IsAnimationPlaying_ReturnValue, float CallFunc_GetRenderOpacity_ReturnValue, float CallFunc_PauseAnimation_ReturnValue, TArray<class UWid_LevelTimer_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_1, class UWid_LevelTimer_C* CallFunc_Array_Get_Item_1, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32 Temp_int_Variable_4, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWid_pda_IFullScreen_C* K2Node_DynamicCast_AsWid_Pda_IFull_Screen_24, bool K2Node_DynamicCast_bSuccess_26, bool CallFunc_LessEqual_IntInt_ReturnValue, class FText CallFunc_GetName_Name, int32 CallFunc_Add_IntInt_ReturnValue_2, TScriptInterface<class IPdaInput> K2Node_DynamicCast_AsPda_Input, bool K2Node_DynamicCast_bSuccess_27, class UTexture2D* K2Node_Select_Default, bool CallFunc_Greater_IntInt_ReturnValue, class UWid_pda_Notes_C* K2Node_Select_Default_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class UTexture2D* K2Node_Select_Default_2, bool CallFunc_Greater_IntInt_ReturnValue_1, class UWid_pda_Notes_C* K2Node_Select_Default_3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, int32 CallFunc_PostEvent_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, int32 CallFunc_PostEvent_ReturnValue_1, class UWid_Inventory_QuickMenu_C* K2Node_DynamicCast_AsWid_Inventory_Quick_Menu, bool K2Node_DynamicCast_bSuccess_28, int32 CallFunc_PostEvent_ReturnValue_2, float K2Node_Event_Axis, float CallFunc_Abs_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, bool CallFunc_BooleanAND_ReturnValue_1);
};

}


