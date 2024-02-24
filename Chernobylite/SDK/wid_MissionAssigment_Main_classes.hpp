#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD8 (0x338 - 0x260)
// WidgetBlueprintGeneratedClass wid_MissionAssigment_Main.wid_MissionAssigment_Main_C
class UWid_MissionAssigment_Main_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWid_AvailableMissionsPanel_C*         AvailableMissionsPanel;                            // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          MainCanvas;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TScriptInterface<class IWid_IMissionAssigmentApp_C> CurrentApp;                                        // 0x278(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EEventMap                         CurrentMap;                                        // 0x288(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_702[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            GoBack;                                            // 0x290(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FVector2D                             CurrentRectMin;                                    // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CurrentRectMax;                                    // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MapMoveModeOn;                                     // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_70C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                MapInformation;                                    // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class Ubp_TagsInformation_C*                 QuestTags;                                         // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class UCanvasPanelSlot*, struct FQuest_Tag_Info> Tags;                                              // 0x2C8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         CompanionsPanelVisible;                            // 0x318(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_717[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            GoBackSelected;                                    // 0x320(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWid_WorkshopUI_Main_C*                Parent;                                            // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_MissionAssigment_Main_C* GetDefaultObj();

	void AnyMenuVisible(bool* Visible, bool MenuVisible, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWid_LevelSelectorMenu_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, int32 CallFunc_Array_Length_ReturnValue, class UWid_LevelSelectorMenu_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsVisible_ReturnValue);
	void GetCurrentEvent(class FName* Name, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, TMap<enum class EEventMap, struct FActiveQuestInfo> CallFunc_GetActiveQuests_ReturnValue, const struct FActiveQuestInfo& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void ChangeApp(TScriptInterface<class IWid_IMissionAssigmentApp_C> New_App);
	void Init(class FName EventID, enum class EEventMap Map, class FName CallFunc_GetCurrentEvent_Name, TScriptInterface<class IWid_IMissionAssigmentApp_C> CallFunc_ChangeApp_New_App_CastInput);
	void Start();
	void End();
	void Right();
	void Left();
	void Toggle1();
	void Toggle2();
	void MoveOut();
	void UpDown(float Axis);
	void LeftRight(float Axis);
	void Construct();
	void Up();
	void Down();
	void Accept();
	void Back();
	void Show(bool Show);
	void GoBackEvent(class FName EventID, class FName CompanionID);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void AlternativeAttack();
	void AnyKey();
	void KeyboardMenu();
	void ExecuteUbergraph_wid_MissionAssigment_Main(int32 EntryPoint, float K2Node_Event_Axis_1, float K2Node_Event_Axis, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, TArray<struct FInnerEvent>& CallFunc_GetActiveEvents_ReturnValue, const struct FInnerEvent& CallFunc_Array_Get_Item, bool K2Node_Event_Show, class FName K2Node_CustomEvent_EventID, class FName K2Node_CustomEvent_CompanionID, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class FName CallFunc_GetCurrentEvent_Name, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_AnyMenuVisible_Visible, class UWid_FoodPanel_v3_Entry_C* K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry, bool K2Node_DynamicCast_bSuccess, TArray<class UWid_LevelSelectorMenu_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, bool CallFunc_IsVisible_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UWid_LevelSelectorMenu_C* CallFunc_Array_Get_Item_1, bool CallFunc_IsVisible_ReturnValue_1, TArray<class UWid_LevelSelectorMenu_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_1, class UWid_LevelSelectorMenu_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UWid_LevelSelectorMenu_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, class UWidget* CallFunc_GetChildAt_ReturnValue_1, class UWid_FoodPanel_v3_Entry_C* K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry_1, bool K2Node_DynamicCast_bSuccess_1, int32 Temp_int_Array_Index_Variable_2, class UWid_LevelSelectorMenu_C* CallFunc_Array_Get_Item_3, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2);
	void GoBackSelected__DelegateSignature(class FName EventID, class FName CompanionID);
	void GoBack__DelegateSignature();
};

}


