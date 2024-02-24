#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x54 (0x2B4 - 0x260)
// WidgetBlueprintGeneratedClass wid_PDA_Menu.wid_PDA_Menu_C
class UWid_PDA_Menu_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWid_ButtonIndicator_C*                ButtonIndicatorLeft;                               // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_ButtonIndicator_C*                ButtonIndicatorRight;                              // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                LeftArrow;                                         // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                RightArrow;                                        // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        TabContainer;                                      // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        CurrentSelected;                                   // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2100[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_pda_MainView_C*                   PDA;                                               // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IPDA_Menu_Owner_Interface_C> InvestiationBoardInterface;                        // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        ItemPadding;                                       // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_PDA_Menu_C* GetDefaultObj();

	void IsAnyChildHovered(bool* Hovered, int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_IsHovered_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void DeselectAll(int32 Temp_int_Variable, int32 CallFunc_GetChildrenCount_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UWid_PDA_Menu_Entry_C* K2Node_DynamicCast_AsWid_PDA_Menu_Entry, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void GetTab(int32 Index, class UWid_PDA_Menu_Entry_C** NewParam, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWid_PDA_Menu_Entry_C* K2Node_DynamicCast_AsWid_PDA_Menu_Entry, bool K2Node_DynamicCast_bSuccess);
	void SelectTab(int32 Index, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, bool Temp_bool_Variable, class APawn* CallFunc_GetPlayerPawn_ReturnValue, int32 CallFunc_PostEvent_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 K2Node_Select_Default, class UWid_PDA_Menu_Entry_C* K2Node_DynamicCast_AsWid_PDA_Menu_Entry, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Percent_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue_1, class UWid_PDA_Menu_Entry_C* K2Node_DynamicCast_AsWid_PDA_Menu_Entry_1, bool K2Node_DynamicCast_bSuccess_1);
	void CreateTab(class FText Name, bool Set_Size, int32 Elements, int32 AppIndex, bool Unlocked, class FName ID, bool DontChangeTooltip, float NewLocalVar_0, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWid_PDA_Menu_Entry_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void SelectNext();
	void SelectPrevious();
	void PreConstruct(bool IsDesignTime);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void ExecuteUbergraph_wid_PDA_Menu(int32 EntryPoint, const struct FPointerEvent& K2Node_Event_MouseEvent, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, int32 CallFunc_GetChildrenCount_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue_1);
};

}


