#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0x310 - 0x260)
// WidgetBlueprintGeneratedClass wid_MainMenu_Debug.wid_MainMenu_Debug_C
class UWid_MainMenu_Debug_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWid_menu_button_C*                    Back;                                              // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Background;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_0;                                     // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_1;                                     // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListView*                             ListView_0;                                        // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListView*                             ListView_1;                                        // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListView*                             ListView_65;                                       // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          Menu;                                              // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        PadBack;                                           // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_menu_button_C*                    Start;                                             // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_02_C*                    MainMenu;                                          // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        Index_HACK;                                        // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEventMap                         SelectedLevel;                                     // 0x2CC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1ED1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AEventSystemBackend*                   Backend;                                           // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                MapInfo;                                           // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_MainMenu_Debug_C*                 NewVar_0;                                          // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InputEnabled;                                      // 0x2E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1EE7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SelectedQuest;                                     // 0x2EC(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  SelectedMood;                                      // 0x2F4(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1EEF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EEventMap>                 MapsToShow;                                        // 0x300(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWid_MainMenu_Debug_C* GetDefaultObj();

	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BackBtn();
	void Up();
	void Down();
	void Left();
	void Right();
	void SelectSensitivity(bool Select);
	void PressBack();
	void PreConstruct(bool IsDesignTime);
	void CustomEvent_0();
	void CustomEvent();
	void ReloadQuests();
	void ExecuteUbergraph_wid_MainMenu_Debug(int32 EntryPoint, TMap<enum class EEventMap, struct FStruct_MapInformation> Temp_byte_Variable, class UWid_DebugMenu_List_Entry_2_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWid_DebugMenu_List_Entry_3_C* CallFunc_Create_ReturnValue_1, class UWid_Menu_Loading_C* CallFunc_Create_ReturnValue_2, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool K2Node_CustomEvent_Select, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class UWid_DebugMenu_List_Entry_C* CallFunc_Create_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool K2Node_Event_IsDesignTime, TArray<class AEventSystemBackend*>& CallFunc_GetAllActorsOfClass_OutActors, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Prepeare_ReturnValue, const struct FStruct_MapInformation& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, int32 Temp_int_Array_Index_Variable_3, class AEventSystemBackend* CallFunc_Array_Get_Item, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_2, class UDataTable* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_3, bool CallFunc_ActivateQuestDebug_ReturnValue, class UDataTable* CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_1, class FName CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_SetMood_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, enum class EEventMap CallFunc_Array_Get_Item_3, bool CallFunc_Less_IntInt_ReturnValue_3);
};

}


