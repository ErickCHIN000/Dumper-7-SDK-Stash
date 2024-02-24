#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x79 (0x2D9 - 0x260)
// WidgetBlueprintGeneratedClass wid_MissionSelection_Main.wid_MissionSelection_Main_C
class UWid_MissionSelection_Main_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWid_CompanionsPanel_C*                CompanionsPanel;                                   // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_LevelSelection_C*                 LevelSelection;                                    // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          MainCanvas;                                        // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_LevelSelector_Tutorial_Companions_C* Tutorial_Companions;                               // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_LevelSelection_Buttons_C*         Wid_LevelSelection_Buttons;                        // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TScriptInterface<class IWid_IMissionSelectionApp_C> CurentInputApp;                                    // 0x290(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	FMulticastInlineDelegateProperty_            Assign;                                            // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnMoveOut;                                         // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            GoBack;                                            // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWid_WorkshopUI_Main_C*                Parent;                                            // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TutorialsAlreadyShown;                             // 0x2D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UWid_MissionSelection_Main_C* GetDefaultObj();

	void ShowCustomTutorials(bool Show, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, int32 CallFunc_GetCurrentDay_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void AnyMenuVisible(bool* Visible, bool MenuVisible, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsVisible_ReturnValue, TArray<class UWid_LevelSelectorMenu_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, bool CallFunc_BooleanOR_ReturnValue, class UWid_LevelSelectorMenu_C* CallFunc_Array_Get_Item, bool CallFunc_IsVisible_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void GetCurrentEvent(class FName* Name, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, enum class EEventMap CallFunc_CurrentSelectedMap_Mapp, TMap<enum class EEventMap, struct FActiveQuestInfo> CallFunc_GetActiveQuests_ReturnValue, const struct FActiveQuestInfo& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void UpdateAllCompanions(class FName EventID, class UWid_CompanionsPanel_C** CompanionsPanel, int32 Index, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UWid_FoodPanel_v3_Entry_C* K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry, bool K2Node_DynamicCast_bSuccess);
	void ChangeApp(TScriptInterface<class IWid_IMissionSelectionApp_C> New);
	void End();
	void Toggle1();
	void Toggle2();
	void UpDown(float Axis);
	void LeftRight(float Axis);
	void Construct();
	void Right();
	void Left();
	void Up();
	void Down();
	void Accept();
	void Start();
	void MoveOut();
	void Show(bool Show);
	void Back();
	void AlternativeAttack();
	void AnyKey();
	void KeyboardMenu();
	void New_Sel(class UWid_LevelSelection_Entry_C* Entry);
	void OnSelected(class FName EventID);
	void NewSelectionEvent(enum class EEventMap Map);
	void ExecuteUbergraph_wid_MissionSelection_Main(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, float K2Node_Event_Axis_1, float K2Node_Event_Axis, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, TScriptInterface<class IWid_IMissionSelectionApp_C> CallFunc_ChangeApp_New_CastInput, TScriptInterface<class IWid_IMissionSelectionApp_C> CallFunc_Start_self_CastInput, class FName CallFunc_GetCurrentSelection_EventID, enum class EEventMap CallFunc_GetCurrentSelection_Map, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, bool K2Node_Event_Show, class FName CallFunc_GetCurrentEvent_Name, class UWid_CompanionsPanel_C* CallFunc_UpdateAllCompanions_CompanionsPanel, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, TScriptInterface<class IWid_IMissionSelectionApp_C> CallFunc_Start_self_CastInput_1, TArray<class UWid_LevelSelectorMenu_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UWid_LevelSelectorMenu_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_AnyMenuVisible_Visible, TArray<class UWid_LevelSelectorMenu_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UWid_LevelSelectorMenu_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_2, bool CallFunc_IsVisible_ReturnValue_1, class UWid_LevelSelectorMenu_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, TArray<class UWid_LevelSelectorMenu_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_3, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_IsVisible_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_3, class UWid_LevelSelectorMenu_C* CallFunc_Array_Get_Item_2, int32 Temp_int_Loop_Counter_Variable_4, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_4, TArray<class AEventSystemBackend*>& CallFunc_GetAllActorsOfClass_OutActors, class AEventSystemBackend* CallFunc_Array_Get_Item_3, bool CallFunc_IsValid_ReturnValue, class UWid_LevelSelection_Entry_C* K2Node_CustomEvent_Entry, int32 Temp_int_Array_Index_Variable_4, class UWid_LevelSelectorMenu_C* CallFunc_Array_Get_Item_4, class FName K2Node_CustomEvent_EventID, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& CallFunc_Conv_NameToString_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, enum class EEventMap K2Node_CustomEvent_Map, TArray<struct FInnerEvent>& CallFunc_GetActiveEvents_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_4, const struct FInnerEvent& CallFunc_Array_Get_Item_5, bool CallFunc_Less_IntInt_ReturnValue_4, bool CallFunc_EqualEqual_NameName_ReturnValue);
	void GoBack__DelegateSignature();
	void OnMoveOut__DelegateSignature();
	void Assign__DelegateSignature(class FName Event, enum class EEventMap Map);
};

}


