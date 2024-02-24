#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x3E0 - 0x350)
// WidgetBlueprintGeneratedClass UMG_CheatOverlay.UMG_CheatOverlay_C
class UUMG_CheatOverlay_C : public UCheatOverlayBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UInvalidationBox*                      InvalidationBox_1;                                 // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              MainOverlay;                                       // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_SearchBox_C*                      SearchBar;                                         // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_CloseButton_2_C*                  UMG_CloseButton_2_C_1;                             // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            WidgetList;                                        // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UCheatFunctionBase>     TopFunction;                                       // 0x380(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, InstancedReference, HasGetValueTypeHash)
	TArray<class UUMG_CheatFunctionBorder_C*>    CheatWidgets;                                      // 0x3A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	enum class ECheatContext                     Context;                                           // 0x3B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Changed;                                           // 0x3B9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         QueuePreview;                                      // 0x3BA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3677[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PreviewText;                                       // 0x3C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class UCheatFunctionBase*>            FilteredWidgets;                                   // 0x3D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UUMG_CheatOverlay_C* GetDefaultObj();

	void SetTopFunction(class UCheatFunctionBase* NewTop, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UCF_Base_C* K2Node_DynamicCast_AsCF_Base, bool K2Node_DynamicCast_bSuccess, class UCheatFunctionBase* K2Node_DynamicCast_AsCheat_Function_Base, bool K2Node_DynamicCast_bSuccess_1, TSoftObjectPtr<class UCF_Base_C> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, class UCF_Base_C* K2Node_DynamicCast_AsCF_Base_1, bool K2Node_DynamicCast_bSuccess_2);
	void OnSetFilteredWidgets(TArray<class UCheatFunctionBase*>& Array, const TArray<class UWidget*>& NewSet, TSet<class UWidget*> CurrentSet, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UCheatFunctionBase* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UCheatFunctionBase* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class UCF_Base_C* K2Node_DynamicCast_AsCF_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UUMG_CheatFunctionBorder_C* K2Node_DynamicCast_AsUMG_Cheat_Function_Border, bool K2Node_DynamicCast_bSuccess_1, class UWidget* CallFunc_Array_Get_Item_2, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue);
	void AddCustomAutomationFunctionImpl(const class FString& Name, TArray<class FString>& Instructions, const class FString& Description, class UCF_AutomationInstructionSet_C* _NewFunc, class UCF_AutomationInstructionSet_C* CallFunc_Create_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void AddCustomFunctionImpl(const class FString& Name, TArray<class FString>& Instructions, const class FString& Description, class UCF_BaseInstructionSet_C* _NewFunc, class UCF_BaseInstructionSet_C* CallFunc_Create_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	enum class ESlateVisibility GetPanelVisibility(bool CallFunc_IsWaiting_ReturnValue, bool CallFunc_IsShowing_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void BuildWidget(const TArray<class UClass*>& ClassList, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FCheatFunctionRow& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void GetTopFunction(class UCheatFunctionBase** Top, class FText CallFunc_GetText_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, class UCheatFunctionBase* K2Node_DynamicCast_AsCheat_Function_Base, bool K2Node_DynamicCast_bSuccess);
	void OnAddCheat(class UCheatFunctionBase* Widget, class UUMG_CheatFunctionBorder_C* NewWidget, class UUMG_CheatFunctionBorder_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue_1, const struct FMargin& K2Node_MakeStruct_Margin, TSoftObjectPtr<class UUMG_CheatOverlay_C> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& CallFunc_GetKey_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue);
	void Toggle();
	void ClearFilteredWidgets();
	void AddFilteredWidget(class UCheatFunctionBase* Widget);
	void BndEvt__SearchBar_K2Node_ComponentBoundEvent_2_OnSearchBoxChangedEvent__DelegateSignature(class FText& Text);
	void BndEvt__SearchBar_K2Node_ComponentBoundEvent_1_OnSearchBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod);
	void BndEvt__SearchBar_K2Node_ComponentBoundEvent_3_SearchBoxReply__DelegateSignature(struct FKeyEvent& KeyEvent);
	void Setup(enum class ECheatContext Context);
	void AddCustomFunction(const class FString& Name, TArray<class FString>& ScriptLines, const class FString& Description);
	void AddCheat(class UCheatFunctionBase* Widget);
	void AddCustomAutomationFunction(const class FString& Name, TArray<class FString>& ScriptLines, const class FString& Description);
	void BndEvt__UMG_CloseButton_2_C_1_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature();
	void RequestReloadCheats();
	void OnShowChanged(bool bNewShow);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void SetFilteredWidgets(TArray<class UCheatFunctionBase*>& Widgets);
	void Construct();
	void HidePanelDisplay();
	void OnWaitingChanged(bool bNewWaiting);
	void UpdateVisibility();
	void ExecuteUbergraph_UMG_CheatOverlay(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Has_Been_Initd_Variable, class UCheatFunctionBase* K2Node_Event_Widget_1, class FText K2Node_ComponentBoundEvent_Text_1, class UCF_Base_C* K2Node_DynamicCast_AsCF_Base, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Conv_TextToString_ReturnValue, TSoftObjectPtr<class UCF_Base_C> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UUMG_CheatFunctionBorder_C* K2Node_DynamicCast_AsUMG_Cheat_Function_Border, bool K2Node_DynamicCast_bSuccess_1, class FText K2Node_ComponentBoundEvent_Text, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class UCheatFunctionBase* K2Node_DynamicCast_AsCheat_Function_Base, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue, const struct FKeyEvent& K2Node_ComponentBoundEvent_KeyEvent, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, enum class ECheatContext K2Node_CustomEvent_Context, const class FString& K2Node_Event_Name_1, TArray<class FString>& K2Node_Event_ScriptLines_1, const class FString& K2Node_Event_Description_1, class UCheatFunctionBase* K2Node_Event_Widget, const class FString& K2Node_Event_Name, TArray<class FString>& K2Node_Event_ScriptLines, const class FString& K2Node_Event_Description, bool CallFunc_IsShowing_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, class UCheatFunctionBase* K2Node_DynamicCast_AsCheat_Function_Base_1, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue_1, class UCF_Base_C* K2Node_DynamicCast_AsCF_Base_1, bool K2Node_DynamicCast_bSuccess_4, bool K2Node_Event_bNewShow, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AIcarusPlayerController* K2Node_DynamicCast_AsIcarus_Player_Controller, bool K2Node_DynamicCast_bSuccess_5, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, TArray<class UCheatFunctionBase*>& K2Node_Event_Widgets, class UPanelSlot* CallFunc_AddChild_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess_6, bool K2Node_SwitchEnum_CmpSuccess_1, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsShowing_ReturnValue_1, bool K2Node_Event_bNewWaiting, enum class ESlateVisibility CallFunc_GetPanelVisibility_ReturnValue);
};

}


