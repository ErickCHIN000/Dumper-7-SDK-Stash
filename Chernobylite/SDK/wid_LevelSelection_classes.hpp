#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE8 (0x348 - 0x260)
// WidgetBlueprintGeneratedClass wid_LevelSelection.wid_LevelSelection_C
class UWid_LevelSelection_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWid_LevelSelection_Entry_C*           Base;                                              // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Canvas123;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_LevelSelection_Entry_C*           CoolingTowers;                                     // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_LevelSelection_Entry_C*           Level1;                                            // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_LevelSelection_Entry_C*           Level2;                                            // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_LevelSelection_Entry_C*           Level3;                                            // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_LevelSelection_Entry_C*           Level4;                                            // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_LevelSelection_Entry_C*           Level5;                                            // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_LevelSelection_Entry_C*           Level6;                                            // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          LevelIcons;                                        // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MapDetailInformation_C*           MapDetailInformation;                              // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_LevelSelector_Tutorial_Missions_C* TutorialMissions;                                  // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_LevelSelection_Entry_C*           CurrentSelection;                                  // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            NewSelection;                                      // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FSlateColor                           SelectedColor;                                     // 0x2E0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           WhiteColor;                                        // 0x308(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWid_MissionSelection_Main_C*          Parent;                                            // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            NewSelectionObj;                                   // 0x338(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWid_LevelSelection_C* GetDefaultObj();

	void GetCurrentSelection(class FName* EventID, enum class EEventMap* Map);
	void GetAllLevelsDesc(TArray<class UWid_LevelSelection_Entry_Desc_C*>* LevelsDesc, const TArray<class UWid_LevelSelection_Entry_Desc_C*>& Result, int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UWid_LevelSelection_Entry_Desc_C* K2Node_DynamicCast_AsWid_Level_Selection_Entry_Desc, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void GetAllLevels(TArray<class UWid_LevelSelection_Entry_C*>* Levels, const TArray<class UWid_LevelSelection_Entry_C*>& Result, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWid_LevelSelection_Entry_C* K2Node_DynamicCast_AsWid_Level_Selection_Entry, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void SelectByMap(enum class EEventMap Map, int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UWid_LevelSelection_Entry_C* K2Node_DynamicCast_AsWid_Level_Selection_Entry, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void CurrentSelectedMap(enum class EEventMap* Mapp);
	void SelectElem(class UWid_LevelSelection_Entry_C* Next, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APawn* CallFunc_GetPlayerPawn_ReturnValue, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, int32 CallFunc_PostEvent_ReturnValue);
	void Construct();
	void Right();
	void Left();
	void Up();
	void Down();
	void PreConstruct(bool IsDesignTime);
	void Start();
	void End();
	void Accept();
	void UpdateAllLevels();
	void ExecuteUbergraph_wid_LevelSelection(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool K2Node_Event_IsDesignTime, TArray<class UWid_LevelSelection_Entry_Desc_C*>& CallFunc_GetAllLevelsDesc_LevelsDesc, int32 Temp_int_Loop_Counter_Variable_1, class UWid_LevelSelection_Entry_Desc_C* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, TArray<class UWid_LevelSelection_Entry_Desc_C*>& CallFunc_GetAllLevelsDesc_LevelsDesc_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, TArray<class UWid_LevelSelection_Entry_C*>& CallFunc_GetAllLevels_Levels, class UWid_LevelSelection_Entry_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, TArray<class UWid_LevelSelection_Entry_C*>& CallFunc_GetAllLevels_Levels_1, int32 Temp_int_Array_Index_Variable_2, int32 CallFunc_Array_Length_ReturnValue_3, class UWid_LevelSelection_Entry_C* CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, int32 Temp_int_Array_Index_Variable_3, class UWid_LevelSelection_Entry_Desc_C* CallFunc_Array_Get_Item_3, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_3, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue, int32 CallFunc_GetChildIndex_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_Percent_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_IsVisible_ReturnValue_1, class UWid_LevelSelection_Entry_C* K2Node_DynamicCast_AsWid_Level_Selection_Entry, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetChildIndex_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 CallFunc_Percent_IntInt_ReturnValue_1, class UWidget* CallFunc_GetChildAt_ReturnValue_1, class UWid_LevelSelection_Entry_C* K2Node_DynamicCast_AsWid_Level_Selection_Entry_1, bool K2Node_DynamicCast_bSuccess_1);
	void NewSelectionObj__DelegateSignature(class UWid_LevelSelection_Entry_C* Entry);
	void NewSelection__DelegateSignature(enum class EEventMap Map);
};

}


