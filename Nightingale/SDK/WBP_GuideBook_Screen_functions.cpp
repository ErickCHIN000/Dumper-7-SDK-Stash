#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_GuideBook_Screen.WBP_GuideBook_Screen_C
// (None)

class UClass* UWBP_GuideBook_Screen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_GuideBook_Screen_C");

	return Clss;
}


// WBP_GuideBook_Screen_C WBP_GuideBook_Screen.Default__WBP_GuideBook_Screen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_GuideBook_Screen_C* UWBP_GuideBook_Screen_C::GetDefaultObj()
{
	static class UWBP_GuideBook_Screen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_GuideBook_Screen_C*>(UWBP_GuideBook_Screen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_GuideBook_Screen.WBP_GuideBook_Screen_C.IsEntityPinned
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsPinned                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_Screen_C::IsEntityPinned(class FName ID, bool* IsPinned)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_Screen_C", "IsEntityPinned");

	Params::UWBP_GuideBook_Screen_C_IsEntityPinned_Params Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

	if (IsPinned != nullptr)
		*IsPinned = Parms.IsPinned;

}


// Function WBP_GuideBook_Screen.WBP_GuideBook_Screen_C.DoNavigationToSearchBar
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_GuideBook_Screen_C::DoNavigationToSearchBar(enum class EUINavigation Navigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_Screen_C", "DoNavigationToSearchBar");

	Params::UWBP_GuideBook_Screen_C_DoNavigationToSearchBar_Params Parms{};

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_GuideBook_Screen.WBP_GuideBook_Screen_C.HandleQuestSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOngoingTaskProgress        Task                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class E_Contract_StateType    State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_Screen_C::HandleQuestSelected(const struct FOngoingTaskProgress& Task, enum class E_Contract_StateType State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_Screen_C", "HandleQuestSelected");

	Params::UWBP_GuideBook_Screen_C_HandleQuestSelected_Params Parms{};

	Parms.Task = Task;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_Screen.WBP_GuideBook_Screen_C.HandleQuestUnselected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GuideBook_Screen_C::HandleQuestUnselected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_Screen_C", "HandleQuestUnselected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GuideBook_Screen.WBP_GuideBook_Screen_C.OnPlacementModeEntered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GuideBook_Screen_C::OnPlacementModeEntered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_Screen_C", "OnPlacementModeEntered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GuideBook_Screen.WBP_GuideBook_Screen_C.Handle Quest Tracking Changed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOngoingTaskProgress        TaskProgress                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class E_Contract_StateType    State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetUniqueIDFromOngoingTask_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_Guid_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_Screen_C::Handle_Quest_Tracking_Changed(const struct FOngoingTaskProgress& TaskProgress, enum class E_Contract_StateType State, const struct FGuid& CallFunc_GetUniqueIDFromOngoingTask_ReturnValue, bool CallFunc_IsValid_Guid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_Screen_C", "Handle Quest Tracking Changed");

	Params::UWBP_GuideBook_Screen_C_Handle_Quest_Tracking_Changed_Params Parms{};

	Parms.TaskProgress = TaskProgress;
	Parms.State = State;
	Parms.CallFunc_GetUniqueIDFromOngoingTask_ReturnValue = CallFunc_GetUniqueIDFromOngoingTask_ReturnValue;
	Parms.CallFunc_IsValid_Guid_ReturnValue = CallFunc_IsValid_Guid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_Screen.WBP_GuideBook_Screen_C.OnTilePressedGamepad
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     CallFunc_OnFocusedWithGamepad_Default_Gamepad_Focused_Widget     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_OnFocusedWithGamepad_DefaultGamepadFocusedWidget        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNWXGuidebookDetailPane*     K2Node_DynamicCast_AsNWXGuidebook_Detail_Pane                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUserWidget*>         CallFunc_GetDisplayedEntryWidgets_ReturnValue                    (ConstParm, ReferenceParm, ContainsInstancedReference)
// class UUserWidget*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetActiveCategory_ReturnValue                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_Screen_C::OnTilePressedGamepad(class UWidget* CallFunc_OnFocusedWithGamepad_Default_Gamepad_Focused_Widget, class UWidget* CallFunc_OnFocusedWithGamepad_DefaultGamepadFocusedWidget, class UWidget* CallFunc_GetActiveWidget_ReturnValue, class UNWXGuidebookDetailPane* K2Node_DynamicCast_AsNWXGuidebook_Detail_Pane, bool K2Node_DynamicCast_bSuccess, TArray<class UUserWidget*>& CallFunc_GetDisplayedEntryWidgets_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item, const struct FGameplayTag& CallFunc_GetActiveCategory_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_Screen_C", "OnTilePressedGamepad");

	Params::UWBP_GuideBook_Screen_C_OnTilePressedGamepad_Params Parms{};

	Parms.CallFunc_OnFocusedWithGamepad_Default_Gamepad_Focused_Widget = CallFunc_OnFocusedWithGamepad_Default_Gamepad_Focused_Widget;
	Parms.CallFunc_OnFocusedWithGamepad_DefaultGamepadFocusedWidget = CallFunc_OnFocusedWithGamepad_DefaultGamepadFocusedWidget;
	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXGuidebook_Detail_Pane = K2Node_DynamicCast_AsNWXGuidebook_Detail_Pane;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDisplayedEntryWidgets_ReturnValue = CallFunc_GetDisplayedEntryWidgets_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetActiveCategory_ReturnValue = CallFunc_GetActiveCategory_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess = GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_Screen.WBP_GuideBook_Screen_C.InitializeDesignerPreview
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Temp_text_Variable                                               (ConstParm)
// class UWBP_GB_CategoryTab_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_Screen_C::InitializeDesignerPreview(class FText Temp_text_Variable, class UWBP_GB_CategoryTab_C* CallFunc_Create_ReturnValue, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FGameplayTag& Temp_struct_Variable, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_Screen_C", "InitializeDesignerPreview");

	Params::UWBP_GuideBook_Screen_C_InitializeDesignerPreview_Params Parms{};

	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_Screen.WBP_GuideBook_Screen_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     LActiveChild                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNWXCommonUserWidget*        K2Node_DynamicCast_AsNWXCommon_User_Widget                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_BP_GetDesiredFocusTarget_ReturnValue                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetLastSelectedWidgetEntry_ReturnValue                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_Guidebook_JournalList_C*K2Node_DynamicCast_AsWBP_Guidebook_Journal_List                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetFocusWidgetInQuestList_FocusWidget                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetActiveCategory_ReturnValue                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_GuideBook_Screen_C::BP_GetDesiredFocusTarget(class UWidget* LActiveChild, class UNWXCommonUserWidget* K2Node_DynamicCast_AsNWXCommon_User_Widget, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue, class UWidget* CallFunc_GetLastSelectedWidgetEntry_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWBP_Guidebook_JournalList_C* K2Node_DynamicCast_AsWBP_Guidebook_Journal_List, bool K2Node_DynamicCast_bSuccess_1, class UWidget* CallFunc_GetFocusWidgetInQuestList_FocusWidget, bool CallFunc_IsValid_ReturnValue_2, const struct FGameplayTag& CallFunc_GetActiveCategory_ReturnValue, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_Screen_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_GuideBook_Screen_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.LActiveChild = LActiveChild;
	Parms.K2Node_DynamicCast_AsNWXCommon_User_Widget = K2Node_DynamicCast_AsNWXCommon_User_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BP_GetDesiredFocusTarget_ReturnValue = CallFunc_BP_GetDesiredFocusTarget_ReturnValue;
	Parms.CallFunc_GetLastSelectedWidgetEntry_ReturnValue = CallFunc_GetLastSelectedWidgetEntry_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Guidebook_Journal_List = K2Node_DynamicCast_AsWBP_Guidebook_Journal_List;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetFocusWidgetInQuestList_FocusWidget = CallFunc_GetFocusWidgetInQuestList_FocusWidget;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetActiveCategory_ReturnValue = CallFunc_GetActiveCategory_ReturnValue;
	Parms.GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess = GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_GuideBook_Screen.WBP_GuideBook_Screen_C.HandleCodexPopup
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsOpen                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_Screen_C::HandleCodexPopup(bool IsOpen, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class EUMGSequencePlayMode Temp_byte_Variable_2, enum class EUMGSequencePlayMode Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default, enum class EUMGSequencePlayMode K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_Screen_C", "HandleCodexPopup");

	Params::UWBP_GuideBook_Screen_C_HandleCodexPopup_Params Parms{};

	Parms.IsOpen = IsOpen;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_Screen.WBP_GuideBook_Screen_C.OnGuideThumbHovered
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHovered                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntry*           MenuDataEntry                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNWXGuidebookDetailPane*     K2Node_DynamicCast_AsNWXGuidebook_Detail_Pane                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_Screen_C::OnGuideThumbHovered(bool IsHovered, class UNWXMenuDataEntry* MenuDataEntry, class UWidget* CallFunc_GetActiveWidget_ReturnValue, class UNWXGuidebookDetailPane* K2Node_DynamicCast_AsNWXGuidebook_Detail_Pane, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_Screen_C", "OnGuideThumbHovered");

	Params::UWBP_GuideBook_Screen_C_OnGuideThumbHovered_Params Parms{};

	Parms.IsHovered = IsHovered;
	Parms.MenuDataEntry = MenuDataEntry;
	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXGuidebook_Detail_Pane = K2Node_DynamicCast_AsNWXGuidebook_Detail_Pane;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_Screen.WBP_GuideBook_Screen_C.OnGuideThumbDoubleClicked
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXMenuDataEntry*           MenuDataEntry                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNWXGuidebookDetailPane*     K2Node_DynamicCast_AsNWXGuidebook_Detail_Pane                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_Screen_C::OnGuideThumbDoubleClicked(class UNWXMenuDataEntry* MenuDataEntry, class UWidget* CallFunc_GetActiveWidget_ReturnValue, class UNWXGuidebookDetailPane* K2Node_DynamicCast_AsNWXGuidebook_Detail_Pane, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_Screen_C", "OnGuideThumbDoubleClicked");

	Params::UWBP_GuideBook_Screen_C_OnGuideThumbDoubleClicked_Params Parms{};

	Parms.MenuDataEntry = MenuDataEntry;
	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXGuidebook_Detail_Pane = K2Node_DynamicCast_AsNWXGuidebook_Detail_Pane;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_Screen.WBP_GuideBook_Screen_C.OnNavigatingToEntryInNewCategory
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GuideBook_Screen_C::OnNavigatingToEntryInNewCategory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_Screen_C", "OnNavigatingToEntryInNewCategory");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GuideBook_Screen.WBP_GuideBook_Screen_C.OnGridlistPanelCollapsedToggled
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGroupExpanded                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                GroupID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveGameplayTag_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_Screen_C::OnGridlistPanelCollapsedToggled(bool IsGroupExpanded, const struct FGameplayTag& GroupID, bool CallFunc_RemoveGameplayTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_Screen_C", "OnGridlistPanelCollapsedToggled");

	Params::UWBP_GuideBook_Screen_C_OnGridlistPanelCollapsedToggled_Params Parms{};

	Parms.IsGroupExpanded = IsGroupExpanded;
	Parms.GroupID = GroupID;
	Parms.CallFunc_RemoveGameplayTag_ReturnValue = CallFunc_RemoveGameplayTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_Screen.WBP_GuideBook_Screen_C.UnbindFromLeftPageEvents
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_Guidebook_FlatList_C*   LFlatList                                                        (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_Guidebook_GridList_C*   LGridlist                                                        (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_Guidebook_JournalList_C*LJournalPage                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     LLeftContainerChild                                              (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_Guidebook_FlatList_C*   K2Node_DynamicCast_AsWBP_Guidebook_Flat_List                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_Guidebook_GridList_C*   K2Node_DynamicCast_AsWBP_Guidebook_Grid_List                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Guidebook_JournalList_C*K2Node_DynamicCast_AsWBP_Guidebook_Journal_List                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_Screen_C::UnbindFromLeftPageEvents(class UWBP_Guidebook_FlatList_C* LFlatList, class UWBP_Guidebook_GridList_C* LGridlist, class UWBP_Guidebook_JournalList_C* LJournalPage, class UWidget* LLeftContainerChild, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UWBP_Guidebook_FlatList_C* K2Node_DynamicCast_AsWBP_Guidebook_Flat_List, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class UWBP_Guidebook_GridList_C* K2Node_DynamicCast_AsWBP_Guidebook_Grid_List, bool K2Node_DynamicCast_bSuccess_1, class UWBP_Guidebook_JournalList_C* K2Node_DynamicCast_AsWBP_Guidebook_Journal_List, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_Screen_C", "UnbindFromLeftPageEvents");

	Params::UWBP_GuideBook_Screen_C_UnbindFromLeftPageEvents_Params Parms{};

	Parms.LFlatList = LFlatList;
	Parms.LGridlist = LGridlist;
	Parms.LJournalPage = LJournalPage;
	Parms.LLeftContainerChild = LLeftContainerChild;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_DynamicCast_AsWBP_Guidebook_Flat_List = K2Node_DynamicCast_AsWBP_Guidebook_Flat_List;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_DynamicCast_AsWBP_Guidebook_Grid_List = K2Node_DynamicCast_AsWBP_Guidebook_Grid_List;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsWBP_Guidebook_Journal_List = K2Node_DynamicCast_AsWBP_Guidebook_Journal_List;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_Screen.WBP_GuideBook_Screen_C.RemoveBindings
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_Screen_C::RemoveBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_Screen_C", "RemoveBindings");

	Params::UWBP_GuideBook_Screen_C_RemoveBindings_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_Screen.WBP_GuideBook_Screen_C.SetupBindings
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_Screen_C::SetupBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_Screen_C", "SetupBindings");

	Params::UWBP_GuideBook_Screen_C_SetupBindings_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_Screen.WBP_GuideBook_Screen_C.UpdateLeftContentWidget
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_Guidebook_FlatList_C*   LFlatList                                                        (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_Guidebook_GridList_C*   LGridlist                                                        (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_Guidebook_JournalList_C*LJournalList                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     LActiveChild                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSlateChildSize             K2Node_MakeStruct_SlateChildSize                                 (NoDestructor)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_Guidebook_FlatList_C*   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_Guidebook_FlatList_C*   K2Node_DynamicCast_AsWBP_Guidebook_Flat_List                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Guidebook_GridList_C*   CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue_2                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_Guidebook_JournalList_C*CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FSlateChildSize             K2Node_MakeStruct_SlateChildSize_1                               (NoDestructor)
// struct FSlateChildSize             K2Node_MakeStruct_SlateChildSize_2                               (NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue_1                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_Guidebook_GridList_C*   K2Node_DynamicCast_AsWBP_Guidebook_Grid_List                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Guidebook_JournalList_C*K2Node_DynamicCast_AsWBP_Guidebook_Journal_List                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetActiveCategory_ReturnValue                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue_2                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_Screen_C::UpdateLeftContentWidget(class UWBP_Guidebook_FlatList_C* LFlatList, class UWBP_Guidebook_GridList_C* LGridlist, class UWBP_Guidebook_JournalList_C* LJournalList, class UWidget* LActiveChild, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UWBP_Guidebook_FlatList_C* CallFunc_Create_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, class UWBP_Guidebook_FlatList_C* K2Node_DynamicCast_AsWBP_Guidebook_Flat_List, bool K2Node_DynamicCast_bSuccess, class UWBP_Guidebook_GridList_C* CallFunc_Create_ReturnValue_1, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_2, class UWBP_Guidebook_JournalList_C* CallFunc_Create_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize_1, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class UWBP_Guidebook_GridList_C* K2Node_DynamicCast_AsWBP_Guidebook_Grid_List, bool K2Node_DynamicCast_bSuccess_1, class UWBP_Guidebook_JournalList_C* K2Node_DynamicCast_AsWBP_Guidebook_Journal_List, bool K2Node_DynamicCast_bSuccess_2, const struct FGameplayTag& CallFunc_GetActiveCategory_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_Screen_C", "UpdateLeftContentWidget");

	Params::UWBP_GuideBook_Screen_C_UpdateLeftContentWidget_Params Parms{};

	Parms.LFlatList = LFlatList;
	Parms.LGridlist = LGridlist;
	Parms.LJournalList = LJournalList;
	Parms.LActiveChild = LActiveChild;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_MakeStruct_SlateChildSize = K2Node_MakeStruct_SlateChildSize;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue_1 = CallFunc_GetOwningPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsWBP_Guidebook_Flat_List = K2Node_DynamicCast_AsWBP_Guidebook_Flat_List;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue_2 = CallFunc_GetOwningPlayerController_ReturnValue_2;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.K2Node_MakeStruct_SlateChildSize_1 = K2Node_MakeStruct_SlateChildSize_1;
	Parms.K2Node_MakeStruct_SlateChildSize_2 = K2Node_MakeStruct_SlateChildSize_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue_1 = CallFunc_AddChildToVerticalBox_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.K2Node_DynamicCast_AsWBP_Guidebook_Grid_List = K2Node_DynamicCast_AsWBP_Guidebook_Grid_List;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsWBP_Guidebook_Journal_List = K2Node_DynamicCast_AsWBP_Guidebook_Journal_List;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetActiveCategory_ReturnValue = CallFunc_GetActiveCategory_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess = GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue_2 = CallFunc_AddChildToVerticalBox_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_Screen.WBP_GuideBook_Screen_C.TryGetIDFromLastSelectedEntry
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                CategoryTag                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       ID                                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntry*           LastSelectedEntry                                                (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetID_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntry*           CallFunc_GetLastSelectedEntryForCategory_ReturnValue             (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_Screen_C::TryGetIDFromLastSelectedEntry(const struct FGameplayTag& CategoryTag, struct FGuid* ID, class UNWXMenuDataEntry* LastSelectedEntry, const struct FGuid& CallFunc_GetID_ReturnValue, class UNWXMenuDataEntry* CallFunc_GetLastSelectedEntryForCategory_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_Screen_C", "TryGetIDFromLastSelectedEntry");

	Params::UWBP_GuideBook_Screen_C_TryGetIDFromLastSelectedEntry_Params Parms{};

	Parms.CategoryTag = CategoryTag;
	Parms.LastSelectedEntry = LastSelectedEntry;
	Parms.CallFunc_GetID_ReturnValue = CallFunc_GetID_ReturnValue;
	Parms.CallFunc_GetLastSelectedEntryForCategory_ReturnValue = CallFunc_GetLastSelectedEntryForCategory_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ID != nullptr)
		*ID = std::move(Parms.ID);

}


// Function WBP_GuideBook_Screen.WBP_GuideBook_Screen_C.UpdateWithLastSelectedEntry
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXGuidebookDetailPane*     LDetailPane                                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntry*           LLastSelectedEntry                                               (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetActiveCategory_ReturnValue                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntry*           CallFunc_GetLastSelectedEntryForCategory_ReturnValue             (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUnlocked_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGuidebookDetailPane*     K2Node_DynamicCast_AsNWXGuidebook_Detail_Pane                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_Screen_C::UpdateWithLastSelectedEntry(class UNWXGuidebookDetailPane* LDetailPane, class UNWXMenuDataEntry* LLastSelectedEntry, const struct FGameplayTag& CallFunc_GetActiveCategory_ReturnValue, class UNWXMenuDataEntry* CallFunc_GetLastSelectedEntryForCategory_ReturnValue, class UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_IsUnlocked_ReturnValue, class UNWXGuidebookDetailPane* K2Node_DynamicCast_AsNWXGuidebook_Detail_Pane, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_Screen_C", "UpdateWithLastSelectedEntry");

	Params::UWBP_GuideBook_Screen_C_UpdateWithLastSelectedEntry_Params Parms{};

	Parms.LDetailPane = LDetailPane;
	Parms.LLastSelectedEntry = LLastSelectedEntry;
	Parms.CallFunc_GetActiveCategory_ReturnValue = CallFunc_GetActiveCategory_ReturnValue;
	Parms.CallFunc_GetLastSelectedEntryForCategory_ReturnValue = CallFunc_GetLastSelectedEntryForCategory_ReturnValue;
	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.CallFunc_IsUnlocked_ReturnValue = CallFunc_IsUnlocked_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXGuidebook_Detail_Pane = K2Node_DynamicCast_AsNWXGuidebook_Detail_Pane;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_Screen.WBP_GuideBook_Screen_C.InitializeRibbons
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LCurrentIndex                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LLastIndex                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<struct FGameplayTag, class FText>LRibbonCategoryToNameMap                                         (Edit, BlueprintVisible)
// TMap<struct FGameplayTag, class FText>K2Node_MakeVariable_MakeVariableOutput                           (None)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_GB_CategoryTab_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        CallFunc_GetCategoryOrdering_ReturnValue                         (ConstParm, ReferenceParm)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        CallFunc_GetCategoryOrdering_ReturnValue_1                       (ConstParm, ReferenceParm)
// struct FGameplayTag                CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void UWBP_GuideBook_Screen_C::InitializeRibbons(int32 LCurrentIndex, int32 LLastIndex, TMap<struct FGameplayTag, class FText> LRibbonCategoryToNameMap, TMap<struct FGameplayTag, class FText> K2Node_MakeVariable_MakeVariableOutput, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_GB_CategoryTab_C* CallFunc_Create_ReturnValue, TArray<struct FGameplayTag>& CallFunc_GetCategoryOrdering_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, TArray<struct FGameplayTag>& CallFunc_GetCategoryOrdering_ReturnValue_1, const struct FGameplayTag& CallFunc_Array_Get_Item, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_Screen_C", "InitializeRibbons");

	Params::UWBP_GuideBook_Screen_C_InitializeRibbons_Params Parms{};

	Parms.LCurrentIndex = LCurrentIndex;
	Parms.LLastIndex = LLastIndex;
	Parms.LRibbonCategoryToNameMap = LRibbonCategoryToNameMap;
	Parms.K2Node_MakeVariable_MakeVariableOutput = K2Node_MakeVariable_MakeVariableOutput;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetCategoryOrdering_ReturnValue = CallFunc_GetCategoryOrdering_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_GetCategoryOrdering_ReturnValue_1 = CallFunc_GetCategoryOrdering_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_Screen.WBP_GuideBook_Screen_C.ScrollUp
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScrollBox*                  ScrollBox                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScrollOffset_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_Screen_C::ScrollUp(class UScrollBox* ScrollBox, float CallFunc_GetScrollOffset_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, float CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_Screen_C", "ScrollUp");

	Params::UWBP_GuideBook_Screen_C_ScrollUp_Params Parms{};

	Parms.ScrollBox = ScrollBox;
	Parms.CallFunc_GetScrollOffset_ReturnValue = CallFunc_GetScrollOffset_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast = CallFunc_Subtract_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast = CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_Screen.WBP_GuideBook_Screen_C.ScrollDown
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScrollBox*                  ScrollBox                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScrollOffsetOfEnd_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScrollOffset_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Less_DoubleDouble_B_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_Screen_C::ScrollDown(class UScrollBox* ScrollBox, float CallFunc_GetScrollOffsetOfEnd_ReturnValue, float CallFunc_GetScrollOffset_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_Less_DoubleDouble_B_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_Screen_C", "ScrollDown");

	Params::UWBP_GuideBook_Screen_C_ScrollDown_Params Parms{};

	Parms.ScrollBox = ScrollBox;
	Parms.CallFunc_GetScrollOffsetOfEnd_ReturnValue = CallFunc_GetScrollOffsetOfEnd_ReturnValue;
	Parms.CallFunc_GetScrollOffset_ReturnValue = CallFunc_GetScrollOffset_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_B_ImplicitCast = CallFunc_Less_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast = CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_Screen.WBP_GuideBook_Screen_C.OnCategoryChanged
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                NewCategory                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_Screen_C::OnCategoryChanged(struct FGameplayTag& NewCategory, class UUserWidget* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_Screen_C", "OnCategoryChanged");

	Params::UWBP_GuideBook_Screen_C_OnCategoryChanged_Params Parms{};

	Parms.NewCategory = NewCategory;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_Screen.WBP_GuideBook_Screen_C.InitializeDetailPaneMap
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                CallFunc_GuideBookChallengeCategoryTag_ReturnValue               (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GuideBookShopCategoryTag_ReturnValue                    (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GuideBookGlossaryCategoryTag_ReturnValue                (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GuideBookTutorialCategoryTag_ReturnValue                (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GuideBookCodexCategoryTag_ReturnValue                   (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GuideBookCraftingRecipesCategoryTag_ReturnValue         (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GuideBookBuildingCategoryTag_ReturnValue                (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GuideBookQuestCategoryTag_ReturnValue                   (NoDestructor, HasGetValueTypeHash)
// TMap<struct FGameplayTag, class UUserWidget*>K2Node_MakeMap_Map                                               (ContainsInstancedReference)

void UWBP_GuideBook_Screen_C::InitializeDetailPaneMap(const struct FGameplayTag& CallFunc_GuideBookChallengeCategoryTag_ReturnValue, const struct FGameplayTag& CallFunc_GuideBookShopCategoryTag_ReturnValue, const struct FGameplayTag& CallFunc_GuideBookGlossaryCategoryTag_ReturnValue, const struct FGameplayTag& CallFunc_GuideBookTutorialCategoryTag_ReturnValue, const struct FGameplayTag& CallFunc_GuideBookCodexCategoryTag_ReturnValue, const struct FGameplayTag& CallFunc_GuideBookCraftingRecipesCategoryTag_ReturnValue, const struct FGameplayTag& CallFunc_GuideBookBuildingCategoryTag_ReturnValue, const struct FGameplayTag& CallFunc_GuideBookQuestCategoryTag_ReturnValue, TMap<struct FGameplayTag, class UUserWidget*> K2Node_MakeMap_Map)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_Screen_C", "InitializeDetailPaneMap");

	Params::UWBP_GuideBook_Screen_C_InitializeDetailPaneMap_Params Parms{};

	Parms.CallFunc_GuideBookChallengeCategoryTag_ReturnValue = CallFunc_GuideBookChallengeCategoryTag_ReturnValue;
	Parms.CallFunc_GuideBookShopCategoryTag_ReturnValue = CallFunc_GuideBookShopCategoryTag_ReturnValue;
	Parms.CallFunc_GuideBookGlossaryCategoryTag_ReturnValue = CallFunc_GuideBookGlossaryCategoryTag_ReturnValue;
	Parms.CallFunc_GuideBookTutorialCategoryTag_ReturnValue = CallFunc_GuideBookTutorialCategoryTag_ReturnValue;
	Parms.CallFunc_GuideBookCodexCategoryTag_ReturnValue = CallFunc_GuideBookCodexCategoryTag_ReturnValue;
	Parms.CallFunc_GuideBookCraftingRecipesCategoryTag_ReturnValue = CallFunc_GuideBookCraftingRecipesCategoryTag_ReturnValue;
	Parms.CallFunc_GuideBookBuildingCategoryTag_ReturnValue = CallFunc_GuideBookBuildingCategoryTag_ReturnValue;
	Parms.CallFunc_GuideBookQuestCategoryTag_ReturnValue = CallFunc_GuideBookQuestCategoryTag_ReturnValue;
	Parms.K2Node_MakeMap_Map = K2Node_MakeMap_Map;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_Screen.WBP_GuideBook_Screen_C.ScrollDialogBox
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ScrollDown                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetActiveCategory_ReturnValue                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetActiveCategory_ReturnValue_1                         (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_Screen_C::ScrollDialogBox(bool ScrollDown, const struct FGameplayTag& CallFunc_GetActiveCategory_ReturnValue, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, const struct FGameplayTag& CallFunc_GetActiveCategory_ReturnValue_1, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_Screen_C", "ScrollDialogBox");

	Params::UWBP_GuideBook_Screen_C_ScrollDialogBox_Params Parms{};

	Parms.ScrollDown = ScrollDown;
	Parms.CallFunc_GetActiveCategory_ReturnValue = CallFunc_GetActiveCategory_ReturnValue;
	Parms.GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess = GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;
	Parms.CallFunc_GetActiveCategory_ReturnValue_1 = CallFunc_GetActiveCategory_ReturnValue_1;
	Parms.GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_1 = GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_Screen.WBP_GuideBook_Screen_C.OnAnalogValueChanged
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FAnalogInputEvent           InAnalogInputEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// struct FKeyEvent                   CallFunc_GetKeyEventFromAnalogInputEvent_ReturnValue             (None)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Handled_ReturnValue_1                                   (None)
// float                              CallFunc_GetAnalogValue_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAnalogValue_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FEventReply UWBP_GuideBook_Screen_C::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FKeyEvent& CallFunc_GetKeyEventFromAnalogInputEvent_ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue_1, float CallFunc_GetAnalogValue_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, float CallFunc_GetAnalogValue_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_Screen_C", "OnAnalogValueChanged");

	Params::UWBP_GuideBook_Screen_C_OnAnalogValueChanged_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InAnalogInputEvent = InAnalogInputEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_GetKeyEventFromAnalogInputEvent_ReturnValue = CallFunc_GetKeyEventFromAnalogInputEvent_ReturnValue;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue_1 = CallFunc_Handled_ReturnValue_1;
	Parms.CallFunc_GetAnalogValue_ReturnValue = CallFunc_GetAnalogValue_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetAnalogValue_ReturnValue_1 = CallFunc_GetAnalogValue_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast = CallFunc_Less_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_GuideBook_Screen.WBP_GuideBook_Screen_C.OnInputContext
// (HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ContextIndex                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FGameplayTag                CallFunc_GuideBookBuildingCategoryTag_ReturnValue                (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetActiveCategory_ReturnValue                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// class UNWXGuidebookDetailPane*     K2Node_DynamicCast_AsNWXGuidebook_Detail_Pane                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// struct FEventReply                 CallFunc_Handled_ReturnValue_1                                   (None)

struct FEventReply UWBP_GuideBook_Screen_C::OnInputContext(int32 ContextIndex, const struct FGameplayTag& CallFunc_GuideBookBuildingCategoryTag_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, class UWidget* CallFunc_GetActiveWidget_ReturnValue, const struct FGameplayTag& CallFunc_GetActiveCategory_ReturnValue, class UNWXGuidebookDetailPane* K2Node_DynamicCast_AsNWXGuidebook_Detail_Pane, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_Screen_C", "OnInputContext");

	Params::UWBP_GuideBook_Screen_C_OnInputContext_Params Parms{};

	Parms.ContextIndex = ContextIndex;
	Parms.CallFunc_GuideBookBuildingCategoryTag_ReturnValue = CallFunc_GuideBookBuildingCategoryTag_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.CallFunc_GetActiveCategory_ReturnValue = CallFunc_GetActiveCategory_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXGuidebook_Detail_Pane = K2Node_DynamicCast_AsNWXGuidebook_Detail_Pane;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue_1 = CallFunc_Handled_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_GuideBook_Screen.WBP_GuideBook_Screen_C.UpdateQuestDetails
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOngoingTaskProgress        TaskProgress                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class E_Contract_StateType    State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetUniqueIDFromOngoingTask_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_Guid_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_Screen_C::UpdateQuestDetails(const struct FOngoingTaskProgress& TaskProgress, enum class E_Contract_StateType State, const struct FGuid& CallFunc_GetUniqueIDFromOngoingTask_ReturnValue, bool CallFunc_IsValid_Guid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_Screen_C", "UpdateQuestDetails");

	Params::UWBP_GuideBook_Screen_C_UpdateQuestDetails_Params Parms{};

	Parms.TaskProgress = TaskProgress;
	Parms.State = State;
	Parms.CallFunc_GetUniqueIDFromOngoingTask_ReturnValue = CallFunc_GetUniqueIDFromOngoingTask_ReturnValue;
	Parms.CallFunc_IsValid_Guid_ReturnValue = CallFunc_IsValid_Guid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_Screen.WBP_GuideBook_Screen_C.SavePreferences
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXPlayerState*             CallFunc_GetOwningPlayerState_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_UI_PersistenceComponent_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetActiveCategory_ReturnValue                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// struct FGameplayTag                CallFunc_GuideBookTutorialCategoryTag_ReturnValue                (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GuideBookCodexCategoryTag_ReturnValue                   (NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_TryGetIDFromLastSelectedEntry_ID                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_TryGetIDFromLastSelectedEntry_ID_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GuideBookCraftingRecipesCategoryTag_ReturnValue         (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GuideBookBuildingCategoryTag_ReturnValue                (NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_TryGetIDFromLastSelectedEntry_ID_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_TryGetIDFromLastSelectedEntry_ID_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_UI_Preferences_Guidebook K2Node_MakeStruct_S_UI_Preferences_Guidebook                     (HasGetValueTypeHash)

void UWBP_GuideBook_Screen_C::SavePreferences(class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UBP_UI_PersistenceComponent_C* CallFunc_GetComponentByClass_ReturnValue, const struct FGameplayTag& CallFunc_GetActiveCategory_ReturnValue, class FText CallFunc_GetText_ReturnValue, const struct FGameplayTag& CallFunc_GuideBookTutorialCategoryTag_ReturnValue, const struct FGameplayTag& CallFunc_GuideBookCodexCategoryTag_ReturnValue, const struct FGuid& CallFunc_TryGetIDFromLastSelectedEntry_ID, const struct FGuid& CallFunc_TryGetIDFromLastSelectedEntry_ID_1, const struct FGameplayTag& CallFunc_GuideBookCraftingRecipesCategoryTag_ReturnValue, const struct FGameplayTag& CallFunc_GuideBookBuildingCategoryTag_ReturnValue, const struct FGuid& CallFunc_TryGetIDFromLastSelectedEntry_ID_2, const struct FGuid& CallFunc_TryGetIDFromLastSelectedEntry_ID_3, const struct FS_UI_Preferences_Guidebook& K2Node_MakeStruct_S_UI_Preferences_Guidebook)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_Screen_C", "SavePreferences");

	Params::UWBP_GuideBook_Screen_C_SavePreferences_Params Parms{};

	Parms.CallFunc_GetOwningPlayerState_ReturnValue = CallFunc_GetOwningPlayerState_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetActiveCategory_ReturnValue = CallFunc_GetActiveCategory_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_GuideBookTutorialCategoryTag_ReturnValue = CallFunc_GuideBookTutorialCategoryTag_ReturnValue;
	Parms.CallFunc_GuideBookCodexCategoryTag_ReturnValue = CallFunc_GuideBookCodexCategoryTag_ReturnValue;
	Parms.CallFunc_TryGetIDFromLastSelectedEntry_ID = CallFunc_TryGetIDFromLastSelectedEntry_ID;
	Parms.CallFunc_TryGetIDFromLastSelectedEntry_ID_1 = CallFunc_TryGetIDFromLastSelectedEntry_ID_1;
	Parms.CallFunc_GuideBookCraftingRecipesCategoryTag_ReturnValue = CallFunc_GuideBookCraftingRecipesCategoryTag_ReturnValue;
	Parms.CallFunc_GuideBookBuildingCategoryTag_ReturnValue = CallFunc_GuideBookBuildingCategoryTag_ReturnValue;
	Parms.CallFunc_TryGetIDFromLastSelectedEntry_ID_2 = CallFunc_TryGetIDFromLastSelectedEntry_ID_2;
	Parms.CallFunc_TryGetIDFromLastSelectedEntry_ID_3 = CallFunc_TryGetIDFromLastSelectedEntry_ID_3;
	Parms.K2Node_MakeStruct_S_UI_Preferences_Guidebook = K2Node_MakeStruct_S_UI_Preferences_Guidebook;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_Screen.WBP_GuideBook_Screen_C.SetupPreferences
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXPlayerState*             CallFunc_GetOwningPlayerState_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_UI_PersistenceComponent_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_Screen_C::SetupPreferences(class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UBP_UI_PersistenceComponent_C* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_Screen_C", "SetupPreferences");

	Params::UWBP_GuideBook_Screen_C_SetupPreferences_Params Parms{};

	Parms.CallFunc_GetOwningPlayerState_ReturnValue = CallFunc_GetOwningPlayerState_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_Screen.WBP_GuideBook_Screen_C.UpdateDetailPane
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXMenuDataEntry*           MenuDataEntry                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNWXGuidebookDetailPane*     K2Node_DynamicCast_AsNWXGuidebook_Detail_Pane                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_Screen_C::UpdateDetailPane(class UNWXMenuDataEntry* MenuDataEntry, class UWidget* CallFunc_GetActiveWidget_ReturnValue, class UNWXGuidebookDetailPane* K2Node_DynamicCast_AsNWXGuidebook_Detail_Pane, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_Screen_C", "UpdateDetailPane");

	Params::UWBP_GuideBook_Screen_C_UpdateDetailPane_Params Parms{};

	Parms.MenuDataEntry = MenuDataEntry;
	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXGuidebook_Detail_Pane = K2Node_DynamicCast_AsNWXGuidebook_Detail_Pane;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_Screen.WBP_GuideBook_Screen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_GuideBook_Screen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_Screen_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GuideBook_Screen.WBP_GuideBook_Screen_C.TrackCraftingEntity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCraftingRecipeReference    CraftingRecipeRef                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               IsAdding                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_Screen_C::TrackCraftingEntity(const struct FCraftingRecipeReference& CraftingRecipeRef, bool IsAdding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_Screen_C", "TrackCraftingEntity");

	Params::UWBP_GuideBook_Screen_C_TrackCraftingEntity_Params Parms{};

	Parms.CraftingRecipeRef = CraftingRecipeRef;
	Parms.IsAdding = IsAdding;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_Screen.WBP_GuideBook_Screen_C.TrackBuildingEntity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStructureAssetReference    StructureAssetRef                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               IsAdding                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_Screen_C::TrackBuildingEntity(const struct FStructureAssetReference& StructureAssetRef, bool IsAdding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_Screen_C", "TrackBuildingEntity");

	Params::UWBP_GuideBook_Screen_C_TrackBuildingEntity_Params Parms{};

	Parms.StructureAssetRef = StructureAssetRef;
	Parms.IsAdding = IsAdding;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_Screen.WBP_GuideBook_Screen_C.InitializeGuideBookScreen
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_GuideBook_Screen_C::InitializeGuideBookScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_Screen_C", "InitializeGuideBookScreen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GuideBook_Screen.WBP_GuideBook_Screen_C.BndEvt__WBP_GuideBook_Screen_DetailPane_Codex_K2Node_ComponentBoundEvent_1_OnEntryPopupUpdated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               IsOpening                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_Screen_C::BndEvt__WBP_GuideBook_Screen_DetailPane_Codex_K2Node_ComponentBoundEvent_1_OnEntryPopupUpdated__DelegateSignature(bool IsOpening)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_Screen_C", "BndEvt__WBP_GuideBook_Screen_DetailPane_Codex_K2Node_ComponentBoundEvent_1_OnEntryPopupUpdated__DelegateSignature");

	Params::UWBP_GuideBook_Screen_C_BndEvt__WBP_GuideBook_Screen_DetailPane_Codex_K2Node_ComponentBoundEvent_1_OnEntryPopupUpdated__DelegateSignature_Params Parms{};

	Parms.IsOpening = IsOpening;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_Screen.WBP_GuideBook_Screen_C.BndEvt__WBP_GuideBook_Screen_DetailPane_HowToPlay_K2Node_ComponentBoundEvent_2_OnEntryPopupUpdated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               IsOpening                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_Screen_C::BndEvt__WBP_GuideBook_Screen_DetailPane_HowToPlay_K2Node_ComponentBoundEvent_2_OnEntryPopupUpdated__DelegateSignature(bool IsOpening)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_Screen_C", "BndEvt__WBP_GuideBook_Screen_DetailPane_HowToPlay_K2Node_ComponentBoundEvent_2_OnEntryPopupUpdated__DelegateSignature");

	Params::UWBP_GuideBook_Screen_C_BndEvt__WBP_GuideBook_Screen_DetailPane_HowToPlay_K2Node_ComponentBoundEvent_2_OnEntryPopupUpdated__DelegateSignature_Params Parms{};

	Parms.IsOpening = IsOpening;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_Screen.WBP_GuideBook_Screen_C.BndEvt__WBP_GuideBook_Screen_CBU_NavRight_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_Screen_C::BndEvt__WBP_GuideBook_Screen_CBU_NavRight_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_Screen_C", "BndEvt__WBP_GuideBook_Screen_CBU_NavRight_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_GuideBook_Screen_C_BndEvt__WBP_GuideBook_Screen_CBU_NavRight_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_Screen.WBP_GuideBook_Screen_C.BndEvt__WBP_GuideBook_Screen_CBU_NavLeft_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_Screen_C::BndEvt__WBP_GuideBook_Screen_CBU_NavLeft_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_Screen_C", "BndEvt__WBP_GuideBook_Screen_CBU_NavLeft_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_GuideBook_Screen_C_BndEvt__WBP_GuideBook_Screen_CBU_NavLeft_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_Screen.WBP_GuideBook_Screen_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_GuideBook_Screen_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_Screen_C", "BP_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GuideBook_Screen.WBP_GuideBook_Screen_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_GuideBook_Screen_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_Screen_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GuideBook_Screen.WBP_GuideBook_Screen_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_GuideBook_Screen_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_Screen_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GuideBook_Screen.WBP_GuideBook_Screen_C.ExecuteUbergraph_WBP_GuideBook_Screen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             CallFunc_GetLocalCharacter_PlayerCharacter                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGlobalAudioSubsystem*       CallFunc_GetEngineSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FRealmPlacementRequirement  K2Node_MakeStruct_RealmPlacementRequirement                      (None)
// struct FCraftingRecipeReference    K2Node_Event_CraftingRecipeRef                                   (HasGetValueTypeHash)
// bool                               K2Node_Event_IsAdding_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureAssetReference    K2Node_Event_StructureAssetRef                                   (HasGetValueTypeHash)
// bool                               K2Node_Event_IsAdding                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             CallFunc_GetLocalCharacter_PlayerCharacter_1                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGlobalAudioSubsystem*       CallFunc_GetEngineSubsystem_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesRealmMeetRequirement_RequirementMet                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_IsOpening_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_IsOpening                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_Screen_C::ExecuteUbergraph_WBP_GuideBook_Screen(int32 EntryPoint, class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter, class UGlobalAudioSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, const struct FRealmPlacementRequirement& K2Node_MakeStruct_RealmPlacementRequirement, const struct FCraftingRecipeReference& K2Node_Event_CraftingRecipeRef, bool K2Node_Event_IsAdding_1, const struct FStructureAssetReference& K2Node_Event_StructureAssetRef, bool K2Node_Event_IsAdding, class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter_1, class UGlobalAudioSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, class UObject* Temp_object_Variable, bool CallFunc_DoesRealmMeetRequirement_RequirementMet, bool K2Node_ComponentBoundEvent_IsOpening_1, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_ComponentBoundEvent_IsOpening, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_Screen_C", "ExecuteUbergraph_WBP_GuideBook_Screen");

	Params::UWBP_GuideBook_Screen_C_ExecuteUbergraph_WBP_GuideBook_Screen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetLocalCharacter_PlayerCharacter = CallFunc_GetLocalCharacter_PlayerCharacter;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.K2Node_MakeStruct_RealmPlacementRequirement = K2Node_MakeStruct_RealmPlacementRequirement;
	Parms.K2Node_Event_CraftingRecipeRef = K2Node_Event_CraftingRecipeRef;
	Parms.K2Node_Event_IsAdding_1 = K2Node_Event_IsAdding_1;
	Parms.K2Node_Event_StructureAssetRef = K2Node_Event_StructureAssetRef;
	Parms.K2Node_Event_IsAdding = K2Node_Event_IsAdding;
	Parms.CallFunc_GetLocalCharacter_PlayerCharacter_1 = CallFunc_GetLocalCharacter_PlayerCharacter_1;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_1 = CallFunc_GetEngineSubsystem_ReturnValue_1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_DoesRealmMeetRequirement_RequirementMet = CallFunc_DoesRealmMeetRequirement_RequirementMet;
	Parms.K2Node_ComponentBoundEvent_IsOpening_1 = K2Node_ComponentBoundEvent_IsOpening_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_IsOpening = K2Node_ComponentBoundEvent_IsOpening;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_Screen.WBP_GuideBook_Screen_C.OnEnterPlacementMode__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GuideBook_Screen_C::OnEnterPlacementMode__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_Screen_C", "OnEnterPlacementMode__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


