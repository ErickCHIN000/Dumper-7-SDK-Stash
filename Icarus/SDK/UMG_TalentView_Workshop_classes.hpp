#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC1 (0x331 - 0x270)
// WidgetBlueprintGeneratedClass UMG_TalentView_Workshop.UMG_TalentView_Workshop_C
class UUMG_TalentView_Workshop_C : public UTalentViewInterface
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                          ArchetypeBox;                                      // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Corner;                                            // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Corner_1;                                          // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Corner_2;                                          // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Corner_3;                                          // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Divider;                                           // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Divider_1;                                         // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Gradient;                                          // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       GraphWidgetSwitcher;                               // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Noise;                                             // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_PhysicalKeyPrompt_C*              Pan;                                               // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Pattern;                                           // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_PhysicalKeyPrompt_C*              Select_1;                                          // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_CurrencyExchangeButton_C*         UMG_CurrencyExchangeButton;                        // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_MetaResourceDisplay_C*            UMG_MetaResourceDisplay;                           // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_PhysicalKeyPrompt_C*              UMG_PhysicalKeyPrompt;                             // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_TalentFilter_C*                   UMG_TalentFilter;                                  // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_TreePoints_C*                     UMG_TreePoints;                                    // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UUMG_TalentArchetype_Player_C*> Buttons;                                           // 0x308(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class FText                                  AvailableTalents;                                  // 0x318(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Initialised;                                       // 0x330(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUMG_TalentView_Workshop_C* GetDefaultObj();

	class UTalentGraphWidget* GetGraphWidget(class UWidget* CallFunc_GetActiveWidget_ReturnValue, class UTalentGraphWidget* K2Node_DynamicCast_AsTalent_Graph_Widget, bool K2Node_DynamicCast_bSuccess);
	TArray<class UTalentTreeWidget*> GetTalentTreeWidgets(TSet<class UTalentTreeWidget*> Talent_Trees, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UTalentTreeWidget*>& CallFunc_Set_ToArray_Result, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UUMG_TalentGraph_C* K2Node_DynamicCast_AsUMG_Talent_Graph, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue);
	void Setup(const struct FTalentArchetypesRowHandle& CurrentArchetype, int32 Temp_int_Array_Index_Variable, class UTalentModelInterface_Const* CallFunc_GetModel_ReturnValue, TArray<struct FTalentArchetypesRowHandle>& CallFunc_GetArchetypes_ReturnValue, const struct FTalentArchetypesRowHandle& CallFunc_Array_Get_Item, const struct FTalentArchetypesRowHandle& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, class UUMG_TalentArchetype_Orbital_C* CallFunc_Create_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UUMG_TalentGraph_C* CallFunc_Create_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Add_ReturnValue);
	void OnClick(const struct FTalentArchetypesRowHandle& Archetype);
	void OnModelViewChanged(class UTalentModelInterface* InModel, class UTalentViewInterface* InView);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ResearchResult(bool bSuccess);
	void Nothing();
	void Nothing3();
	void Nothing2();
	void ReplicationResult2(bool bSuccess, struct FItemData& Item);
	void ExecuteUbergraph_UMG_TalentView_Workshop(int32 EntryPoint, bool K2Node_CustomEvent_bSuccess, const struct FItemData& K2Node_CustomEvent_Item, class FText Temp_text_Variable, const struct FItemableData& CallFunc_GetItemableData_ItemableData, enum class EDataValid CallFunc_GetItemableData_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_Format_ReturnValue, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, int32 Temp_int_Array_Index_Variable, class FText Temp_text_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FTalentArchetypesRowHandle& K2Node_CustomEvent_Archetype, class UUMG_TalentArchetype_Player_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UTalentModelInterface_Const* CallFunc_GetModel_ReturnValue, TArray<struct FTalentArchetypesRowHandle>& CallFunc_GetArchetypes_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UTalentModelInterface* K2Node_Event_InModel, class UTalentViewInterface* K2Node_Event_InView, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool K2Node_CustomEvent_bSuccess_1, class UPlayerDataComponent* CallFunc_GetPlayerDataComponent_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, int32 Temp_int_Loop_Counter_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, bool CallFunc_IsValid_ReturnValue, class UUMG_ConfirmationPopup_C* CallFunc_GetConfirmationWindow_ConfirmationWidget, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface_1, bool K2Node_DynamicCast_bSuccess_1, class FText K2Node_Select_Default, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface_1, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails_2, bool CallFunc_IsValid_ReturnValue_1, class UUMG_ConfirmationPopup_C* CallFunc_GetConfirmationWindow_ConfirmationWidget_1);
};

}


