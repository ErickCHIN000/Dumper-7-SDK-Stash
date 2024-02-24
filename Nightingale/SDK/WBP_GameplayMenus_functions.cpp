#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_GameplayMenus.WBP_GameplayMenus_C
// (None)

class UClass* UWBP_GameplayMenus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_GameplayMenus_C");

	return Clss;
}


// WBP_GameplayMenus_C WBP_GameplayMenus.Default__WBP_GameplayMenus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_GameplayMenus_C* UWBP_GameplayMenus_C::GetDefaultObj()
{
	static class UWBP_GameplayMenus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_GameplayMenus_C*>(UWBP_GameplayMenus_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_GameplayMenus.WBP_GameplayMenus_C.DetermineOpenWidgetAudio
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                AudioMainWidgetTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              IndexToActivate                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplayMenus_C::DetermineOpenWidgetAudio(const struct FGameplayTag& AudioMainWidgetTag, int32 IndexToActivate, const struct FGameplayTag& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplayMenus_C", "DetermineOpenWidgetAudio");

	Params::UWBP_GameplayMenus_C_DetermineOpenWidgetAudio_Params Parms{};

	Parms.AudioMainWidgetTag = AudioMainWidgetTag;
	Parms.IndexToActivate = IndexToActivate;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue_1 = CallFunc_GetActiveWidgetIndex_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplayMenus.WBP_GameplayMenus_C.TriggerCloseWidgetAudio
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// class UUIAudioSubsystem*           CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue                      (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplayMenus_C::TriggerCloseWidgetAudio(int32 CallFunc_GetActiveWidgetIndex_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FGameplayTag& CallFunc_Array_Get_Item, class UUIAudioSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplayMenus_C", "TriggerCloseWidgetAudio");

	Params::UWBP_GameplayMenus_C_TriggerCloseWidgetAudio_Params Parms{};

	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue = CallFunc_MakeLiteralGameplayTag_ReturnValue;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue_1 = CallFunc_GetActiveWidgetIndex_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplayMenus.WBP_GameplayMenus_C.TriggerOpenWidgetAudio
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                WidgetTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue                      (NoDestructor, HasGetValueTypeHash)
// class UUIAudioSubsystem*           CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplayMenus_C::TriggerOpenWidgetAudio(const struct FGameplayTag& WidgetTag, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, class UUIAudioSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplayMenus_C", "TriggerOpenWidgetAudio");

	Params::UWBP_GameplayMenus_C_TriggerOpenWidgetAudio_Params Parms{};

	Parms.WidgetTag = WidgetTag;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue = CallFunc_MakeLiteralGameplayTag_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplayMenus.WBP_GameplayMenus_C.HandleTriggeringAction
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           CallFunc_GetButtonFromIndex_Button                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplayMenus_C::HandleTriggeringAction(class UCommonButtonBase* Button, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class UCommonButtonBase* CallFunc_GetButtonFromIndex_Button, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplayMenus_C", "HandleTriggeringAction");

	Params::UWBP_GameplayMenus_C_HandleTriggeringAction_Params Parms{};

	Parms.Button = Button;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_GetButtonFromIndex_Button = CallFunc_GetButtonFromIndex_Button;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplayMenus.WBP_GameplayMenus_C.GetButtonFromIndex
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              SwitcherIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           Button                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_DynamicCast_AsCommon_Button_Base                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplayMenus_C::GetButtonFromIndex(int32 SwitcherIndex, class UCommonButtonBase** Button, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Clamp_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UCommonButtonBase* K2Node_DynamicCast_AsCommon_Button_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplayMenus_C", "GetButtonFromIndex");

	Params::UWBP_GameplayMenus_C_GetButtonFromIndex_Params Parms{};

	Parms.SwitcherIndex = SwitcherIndex;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsCommon_Button_Base = K2Node_DynamicCast_AsCommon_Button_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Button != nullptr)
		*Button = Parms.Button;

}


// Function WBP_GameplayMenus.WBP_GameplayMenus_C.IsCurrentlyOnGuideBook
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsCurrentlyOnGuideBook                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplayMenus_C::IsCurrentlyOnGuideBook(bool* IsCurrentlyOnGuideBook, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplayMenus_C", "IsCurrentlyOnGuideBook");

	Params::UWBP_GameplayMenus_C_IsCurrentlyOnGuideBook_Params Parms{};

	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsCurrentlyOnGuideBook != nullptr)
		*IsCurrentlyOnGuideBook = Parms.IsCurrentlyOnGuideBook;

}


// Function WBP_GameplayMenus.WBP_GameplayMenus_C.BP_OnHandleBackAction
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_GameplayMenus_C::BP_OnHandleBackAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplayMenus_C", "BP_OnHandleBackAction");

	Params::UWBP_GameplayMenus_C_BP_OnHandleBackAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_GameplayMenus.WBP_GameplayMenus_C.TryToSwitchScreens
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              IndexToActivate                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsSameTab                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           ButtonToFocus                                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           CallFunc_GetButtonFromIndex_Button                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplayMenus_C::TryToSwitchScreens(int32 IndexToActivate, bool* IsSameTab, class UCommonButtonBase* ButtonToFocus, class UCommonButtonBase* CallFunc_GetButtonFromIndex_Button, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplayMenus_C", "TryToSwitchScreens");

	Params::UWBP_GameplayMenus_C_TryToSwitchScreens_Params Parms{};

	Parms.IndexToActivate = IndexToActivate;
	Parms.ButtonToFocus = ButtonToFocus;
	Parms.CallFunc_GetButtonFromIndex_Button = CallFunc_GetButtonFromIndex_Button;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsSameTab != nullptr)
		*IsSameTab = Parms.IsSameTab;

}


// Function WBP_GameplayMenus.WBP_GameplayMenus_C.CycleTab
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              DeltaIncrement                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentActiveIndex                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              IndexToSelect                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           CallFunc_GetButtonFromIndex_Button                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplayMenus_C::CycleTab(int32 DeltaIncrement, int32 CurrentActiveIndex, int32 IndexToSelect, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class UCommonButtonBase* CallFunc_GetButtonFromIndex_Button, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplayMenus_C", "CycleTab");

	Params::UWBP_GameplayMenus_C_CycleTab_Params Parms{};

	Parms.DeltaIncrement = DeltaIncrement;
	Parms.CurrentActiveIndex = CurrentActiveIndex;
	Parms.IndexToSelect = IndexToSelect;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_GetButtonFromIndex_Button = CallFunc_GetButtonFromIndex_Button;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplayMenus.WBP_GameplayMenus_C.DeselectOtherButtons
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           SelectedButton                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             LNavButtons                                                      (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_DynamicCast_AsCommon_Button_Base                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplayMenus_C::DeselectOtherButtons(class UCommonButtonBase* SelectedButton, const TArray<class UWidget*>& LNavButtons, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UCommonButtonBase* K2Node_DynamicCast_AsCommon_Button_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplayMenus_C", "DeselectOtherButtons");

	Params::UWBP_GameplayMenus_C_DeselectOtherButtons_Params Parms{};

	Parms.SelectedButton = SelectedButton;
	Parms.LNavButtons = LNavButtons;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsCommon_Button_Base = K2Node_DynamicCast_AsCommon_Button_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplayMenus.WBP_GameplayMenus_C.ActivateOptionsScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GameplayMenus_C::ActivateOptionsScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplayMenus_C", "ActivateOptionsScreen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplayMenus.WBP_GameplayMenus_C.ActivateGuidebookScreenJournalCategory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                CallFunc_GuideBookQuestCategoryTag_ReturnValue                   (NoDestructor, HasGetValueTypeHash)
// class UBP_GuideBookComponent_C*    CallFunc_GetLocalPlayerGuideBookComponent_GuideBook              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplayMenus_C::ActivateGuidebookScreenJournalCategory(const struct FGameplayTag& CallFunc_GuideBookQuestCategoryTag_ReturnValue, class UBP_GuideBookComponent_C* CallFunc_GetLocalPlayerGuideBookComponent_GuideBook)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplayMenus_C", "ActivateGuidebookScreenJournalCategory");

	Params::UWBP_GameplayMenus_C_ActivateGuidebookScreenJournalCategory_Params Parms{};

	Parms.CallFunc_GuideBookQuestCategoryTag_ReturnValue = CallFunc_GuideBookQuestCategoryTag_ReturnValue;
	Parms.CallFunc_GetLocalPlayerGuideBookComponent_GuideBook = CallFunc_GetLocalPlayerGuideBookComponent_GuideBook;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplayMenus.WBP_GameplayMenus_C.ActivateGuidebookScreenCraftingCategory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                CallFunc_GuideBookCraftingRecipesCategoryTag_ReturnValue         (NoDestructor, HasGetValueTypeHash)
// class UBP_GuideBookComponent_C*    CallFunc_GetLocalPlayerGuideBookComponent_GuideBook              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplayMenus_C::ActivateGuidebookScreenCraftingCategory(const struct FGameplayTag& CallFunc_GuideBookCraftingRecipesCategoryTag_ReturnValue, class UBP_GuideBookComponent_C* CallFunc_GetLocalPlayerGuideBookComponent_GuideBook)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplayMenus_C", "ActivateGuidebookScreenCraftingCategory");

	Params::UWBP_GameplayMenus_C_ActivateGuidebookScreenCraftingCategory_Params Parms{};

	Parms.CallFunc_GuideBookCraftingRecipesCategoryTag_ReturnValue = CallFunc_GuideBookCraftingRecipesCategoryTag_ReturnValue;
	Parms.CallFunc_GetLocalPlayerGuideBookComponent_GuideBook = CallFunc_GetLocalPlayerGuideBookComponent_GuideBook;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplayMenus.WBP_GameplayMenus_C.ActivateGuidebookScreenBuildingCategory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                CallFunc_GuideBookBuildingCategoryTag_ReturnValue                (NoDestructor, HasGetValueTypeHash)
// class UBP_GuideBookComponent_C*    CallFunc_GetLocalPlayerGuideBookComponent_GuideBook              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplayMenus_C::ActivateGuidebookScreenBuildingCategory(const struct FGameplayTag& CallFunc_GuideBookBuildingCategoryTag_ReturnValue, class UBP_GuideBookComponent_C* CallFunc_GetLocalPlayerGuideBookComponent_GuideBook)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplayMenus_C", "ActivateGuidebookScreenBuildingCategory");

	Params::UWBP_GameplayMenus_C_ActivateGuidebookScreenBuildingCategory_Params Parms{};

	Parms.CallFunc_GuideBookBuildingCategoryTag_ReturnValue = CallFunc_GuideBookBuildingCategoryTag_ReturnValue;
	Parms.CallFunc_GetLocalPlayerGuideBookComponent_GuideBook = CallFunc_GetLocalPlayerGuideBookComponent_GuideBook;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplayMenus.WBP_GameplayMenus_C.ActivateGuidebookScreen
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                CategoryToSwitch                                                 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplayMenus_C::ActivateGuidebookScreen(const struct FGameplayTag& CategoryToSwitch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplayMenus_C", "ActivateGuidebookScreen");

	Params::UWBP_GameplayMenus_C_ActivateGuidebookScreen_Params Parms{};

	Parms.CategoryToSwitch = CategoryToSwitch;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplayMenus.WBP_GameplayMenus_C.ActivateInventoryScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GameplayMenus_C::ActivateInventoryScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplayMenus_C", "ActivateInventoryScreen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplayMenus.WBP_GameplayMenus_C.ActivateMapScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GameplayMenus_C::ActivateMapScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplayMenus_C", "ActivateMapScreen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplayMenus.WBP_GameplayMenus_C.ActivateSocialScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GameplayMenus_C::ActivateSocialScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplayMenus_C", "ActivateSocialScreen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplayMenus.WBP_GameplayMenus_C.BndEvt__WBP_GameplayMenus_Button_Social_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplayMenus_C::BndEvt__WBP_GameplayMenus_Button_Social_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplayMenus_C", "BndEvt__WBP_GameplayMenus_Button_Social_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_GameplayMenus_C_BndEvt__WBP_GameplayMenus_Button_Social_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplayMenus.WBP_GameplayMenus_C.BndEvt__WBP_GameplayMenus_Button_Inventory_K2Node_ComponentBoundEvent_2_CommonSelectedStateChangedBase__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplayMenus_C::BndEvt__WBP_GameplayMenus_Button_Inventory_K2Node_ComponentBoundEvent_2_CommonSelectedStateChangedBase__DelegateSignature(class UCommonButtonBase* Button, bool Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplayMenus_C", "BndEvt__WBP_GameplayMenus_Button_Inventory_K2Node_ComponentBoundEvent_2_CommonSelectedStateChangedBase__DelegateSignature");

	Params::UWBP_GameplayMenus_C_BndEvt__WBP_GameplayMenus_Button_Inventory_K2Node_ComponentBoundEvent_2_CommonSelectedStateChangedBase__DelegateSignature_Params Parms{};

	Parms.Button = Button;
	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplayMenus.WBP_GameplayMenus_C.BndEvt__WBP_GameplayMenus_Button_Inventory_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplayMenus_C::BndEvt__WBP_GameplayMenus_Button_Inventory_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplayMenus_C", "BndEvt__WBP_GameplayMenus_Button_Inventory_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_GameplayMenus_C_BndEvt__WBP_GameplayMenus_Button_Inventory_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplayMenus.WBP_GameplayMenus_C.BndEvt__WBP_GameplayMenus_Button_Map_K2Node_ComponentBoundEvent_4_CommonSelectedStateChangedBase__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplayMenus_C::BndEvt__WBP_GameplayMenus_Button_Map_K2Node_ComponentBoundEvent_4_CommonSelectedStateChangedBase__DelegateSignature(class UCommonButtonBase* Button, bool Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplayMenus_C", "BndEvt__WBP_GameplayMenus_Button_Map_K2Node_ComponentBoundEvent_4_CommonSelectedStateChangedBase__DelegateSignature");

	Params::UWBP_GameplayMenus_C_BndEvt__WBP_GameplayMenus_Button_Map_K2Node_ComponentBoundEvent_4_CommonSelectedStateChangedBase__DelegateSignature_Params Parms{};

	Parms.Button = Button;
	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplayMenus.WBP_GameplayMenus_C.BndEvt__WBP_GameplayMenus_Button_Map_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplayMenus_C::BndEvt__WBP_GameplayMenus_Button_Map_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplayMenus_C", "BndEvt__WBP_GameplayMenus_Button_Map_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_GameplayMenus_C_BndEvt__WBP_GameplayMenus_Button_Map_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplayMenus.WBP_GameplayMenus_C.BndEvt__WBP_GameplayMenus_Button_Guidebook_K2Node_ComponentBoundEvent_6_CommonSelectedStateChangedBase__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplayMenus_C::BndEvt__WBP_GameplayMenus_Button_Guidebook_K2Node_ComponentBoundEvent_6_CommonSelectedStateChangedBase__DelegateSignature(class UCommonButtonBase* Button, bool Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplayMenus_C", "BndEvt__WBP_GameplayMenus_Button_Guidebook_K2Node_ComponentBoundEvent_6_CommonSelectedStateChangedBase__DelegateSignature");

	Params::UWBP_GameplayMenus_C_BndEvt__WBP_GameplayMenus_Button_Guidebook_K2Node_ComponentBoundEvent_6_CommonSelectedStateChangedBase__DelegateSignature_Params Parms{};

	Parms.Button = Button;
	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplayMenus.WBP_GameplayMenus_C.BndEvt__WBP_GameplayMenus_Button_Guidebook_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplayMenus_C::BndEvt__WBP_GameplayMenus_Button_Guidebook_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplayMenus_C", "BndEvt__WBP_GameplayMenus_Button_Guidebook_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_GameplayMenus_C_BndEvt__WBP_GameplayMenus_Button_Guidebook_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplayMenus.WBP_GameplayMenus_C.BndEvt__WBP_GameplayMenus_Button_Close_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplayMenus_C::BndEvt__WBP_GameplayMenus_Button_Close_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplayMenus_C", "BndEvt__WBP_GameplayMenus_Button_Close_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_GameplayMenus_C_BndEvt__WBP_GameplayMenus_Button_Close_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplayMenus.WBP_GameplayMenus_C.BndEvt__WBP_GameplayMenus_Button_Social_1_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplayMenus_C::BndEvt__WBP_GameplayMenus_Button_Social_1_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplayMenus_C", "BndEvt__WBP_GameplayMenus_Button_Social_1_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_GameplayMenus_C_BndEvt__WBP_GameplayMenus_Button_Social_1_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplayMenus.WBP_GameplayMenus_C.BndEvt__WBP_GameplayMenus_Button_Options_K2Node_ComponentBoundEvent_14_CommonSelectedStateChangedBase__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplayMenus_C::BndEvt__WBP_GameplayMenus_Button_Options_K2Node_ComponentBoundEvent_14_CommonSelectedStateChangedBase__DelegateSignature(class UCommonButtonBase* Button, bool Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplayMenus_C", "BndEvt__WBP_GameplayMenus_Button_Options_K2Node_ComponentBoundEvent_14_CommonSelectedStateChangedBase__DelegateSignature");

	Params::UWBP_GameplayMenus_C_BndEvt__WBP_GameplayMenus_Button_Options_K2Node_ComponentBoundEvent_14_CommonSelectedStateChangedBase__DelegateSignature_Params Parms{};

	Parms.Button = Button;
	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplayMenus.WBP_GameplayMenus_C.BndEvt__WBP_GameplayMenus_CBU_Previous_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplayMenus_C::BndEvt__WBP_GameplayMenus_CBU_Previous_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplayMenus_C", "BndEvt__WBP_GameplayMenus_CBU_Previous_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_GameplayMenus_C_BndEvt__WBP_GameplayMenus_CBU_Previous_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplayMenus.WBP_GameplayMenus_C.BndEvt__WBP_GameplayMenus_CBU_Next_K2Node_ComponentBoundEvent_12_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplayMenus_C::BndEvt__WBP_GameplayMenus_CBU_Next_K2Node_ComponentBoundEvent_12_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplayMenus_C", "BndEvt__WBP_GameplayMenus_CBU_Next_K2Node_ComponentBoundEvent_12_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_GameplayMenus_C_BndEvt__WBP_GameplayMenus_CBU_Next_K2Node_ComponentBoundEvent_12_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplayMenus.WBP_GameplayMenus_C.BndEvt__WBP_GameplayMenus_WBP_GuideBook_Screen_K2Node_ComponentBoundEvent_13_OnEnterPlacementMode__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameplayMenus_C::BndEvt__WBP_GameplayMenus_WBP_GuideBook_Screen_K2Node_ComponentBoundEvent_13_OnEnterPlacementMode__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplayMenus_C", "BndEvt__WBP_GameplayMenus_WBP_GuideBook_Screen_K2Node_ComponentBoundEvent_13_OnEnterPlacementMode__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameplayMenus.WBP_GameplayMenus_C.BndEvt__WBP_GameplayMenus_Button_Map_K2Node_ComponentBoundEvent_15_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplayMenus_C::BndEvt__WBP_GameplayMenus_Button_Map_K2Node_ComponentBoundEvent_15_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplayMenus_C", "BndEvt__WBP_GameplayMenus_Button_Map_K2Node_ComponentBoundEvent_15_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_GameplayMenus_C_BndEvt__WBP_GameplayMenus_Button_Map_K2Node_ComponentBoundEvent_15_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplayMenus.WBP_GameplayMenus_C.BndEvt__WBP_GameplayMenus_Button_Inventory_K2Node_ComponentBoundEvent_17_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplayMenus_C::BndEvt__WBP_GameplayMenus_Button_Inventory_K2Node_ComponentBoundEvent_17_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplayMenus_C", "BndEvt__WBP_GameplayMenus_Button_Inventory_K2Node_ComponentBoundEvent_17_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_GameplayMenus_C_BndEvt__WBP_GameplayMenus_Button_Inventory_K2Node_ComponentBoundEvent_17_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplayMenus.WBP_GameplayMenus_C.BndEvt__WBP_GameplayMenus_Button_Guidebook_K2Node_ComponentBoundEvent_18_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplayMenus_C::BndEvt__WBP_GameplayMenus_Button_Guidebook_K2Node_ComponentBoundEvent_18_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplayMenus_C", "BndEvt__WBP_GameplayMenus_Button_Guidebook_K2Node_ComponentBoundEvent_18_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_GameplayMenus_C_BndEvt__WBP_GameplayMenus_Button_Guidebook_K2Node_ComponentBoundEvent_18_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplayMenus.WBP_GameplayMenus_C.BndEvt__WBP_GameplayMenus_Button_Social_K2Node_ComponentBoundEvent_19_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplayMenus_C::BndEvt__WBP_GameplayMenus_Button_Social_K2Node_ComponentBoundEvent_19_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplayMenus_C", "BndEvt__WBP_GameplayMenus_Button_Social_K2Node_ComponentBoundEvent_19_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_GameplayMenus_C_BndEvt__WBP_GameplayMenus_Button_Social_K2Node_ComponentBoundEvent_19_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplayMenus.WBP_GameplayMenus_C.BndEvt__WBP_GameplayMenus_Button_Options_K2Node_ComponentBoundEvent_20_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplayMenus_C::BndEvt__WBP_GameplayMenus_Button_Options_K2Node_ComponentBoundEvent_20_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplayMenus_C", "BndEvt__WBP_GameplayMenus_Button_Options_K2Node_ComponentBoundEvent_20_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_GameplayMenus_C_BndEvt__WBP_GameplayMenus_Button_Options_K2Node_ComponentBoundEvent_20_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplayMenus.WBP_GameplayMenus_C.BndEvt__WBP_GameplayMenus_Button_Social_K2Node_ComponentBoundEvent_0_CommonSelectedStateChangedBase__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplayMenus_C::BndEvt__WBP_GameplayMenus_Button_Social_K2Node_ComponentBoundEvent_0_CommonSelectedStateChangedBase__DelegateSignature(class UCommonButtonBase* Button, bool Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplayMenus_C", "BndEvt__WBP_GameplayMenus_Button_Social_K2Node_ComponentBoundEvent_0_CommonSelectedStateChangedBase__DelegateSignature");

	Params::UWBP_GameplayMenus_C_BndEvt__WBP_GameplayMenus_Button_Social_K2Node_ComponentBoundEvent_0_CommonSelectedStateChangedBase__DelegateSignature_Params Parms{};

	Parms.Button = Button;
	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplayMenus.WBP_GameplayMenus_C.BndEvt__WBP_GameplayMenus_Button_System_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplayMenus_C::BndEvt__WBP_GameplayMenus_Button_System_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplayMenus_C", "BndEvt__WBP_GameplayMenus_Button_System_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_GameplayMenus_C_BndEvt__WBP_GameplayMenus_Button_System_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplayMenus.WBP_GameplayMenus_C.BndEvt__WBP_GameplayMenus_Button_System_K2Node_ComponentBoundEvent_16_CommonSelectedStateChangedBase__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplayMenus_C::BndEvt__WBP_GameplayMenus_Button_System_K2Node_ComponentBoundEvent_16_CommonSelectedStateChangedBase__DelegateSignature(class UCommonButtonBase* Button, bool Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplayMenus_C", "BndEvt__WBP_GameplayMenus_Button_System_K2Node_ComponentBoundEvent_16_CommonSelectedStateChangedBase__DelegateSignature");

	Params::UWBP_GameplayMenus_C_BndEvt__WBP_GameplayMenus_Button_System_K2Node_ComponentBoundEvent_16_CommonSelectedStateChangedBase__DelegateSignature_Params Parms{};

	Parms.Button = Button;
	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplayMenus.WBP_GameplayMenus_C.BndEvt__WBP_GameplayMenus_Button_System_K2Node_ComponentBoundEvent_21_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplayMenus_C::BndEvt__WBP_GameplayMenus_Button_System_K2Node_ComponentBoundEvent_21_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplayMenus_C", "BndEvt__WBP_GameplayMenus_Button_System_K2Node_ComponentBoundEvent_21_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_GameplayMenus_C_BndEvt__WBP_GameplayMenus_Button_System_K2Node_ComponentBoundEvent_21_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameplayMenus.WBP_GameplayMenus_C.ExecuteUbergraph_WBP_GameplayMenus
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_20                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_19                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_Selected_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_18                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_17                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_Selected_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_16                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_15                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_Selected_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_14                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_13                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_12                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_11                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_Selected_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_10                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_9                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryToSwitchScreens_IsSameTab                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryToSwitchScreens_IsSameTab_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryToSwitchScreens_IsSameTab_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryToSwitchScreens_IsSameTab_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryToSwitchScreens_IsSameTab_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_8                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_7                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_6                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_5                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_4                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_3                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_Selected_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_Selected                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryToSwitchScreens_IsSameTab_5                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameplayMenus_C::ExecuteUbergraph_WBP_GameplayMenus(int32 EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_20, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_19, bool K2Node_ComponentBoundEvent_Selected_5, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_18, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_17, bool K2Node_ComponentBoundEvent_Selected_4, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_16, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_15, bool K2Node_ComponentBoundEvent_Selected_3, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_14, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_13, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_12, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_11, bool K2Node_ComponentBoundEvent_Selected_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_10, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_9, bool CallFunc_TryToSwitchScreens_IsSameTab, bool CallFunc_TryToSwitchScreens_IsSameTab_1, bool CallFunc_TryToSwitchScreens_IsSameTab_2, bool CallFunc_TryToSwitchScreens_IsSameTab_3, bool CallFunc_TryToSwitchScreens_IsSameTab_4, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_8, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_7, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_6, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_5, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_4, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_3, bool K2Node_ComponentBoundEvent_Selected_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, bool K2Node_ComponentBoundEvent_Selected, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, bool CallFunc_TryToSwitchScreens_IsSameTab_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameplayMenus_C", "ExecuteUbergraph_WBP_GameplayMenus");

	Params::UWBP_GameplayMenus_C_ExecuteUbergraph_WBP_GameplayMenus_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button_20 = K2Node_ComponentBoundEvent_Button_20;
	Parms.K2Node_ComponentBoundEvent_Button_19 = K2Node_ComponentBoundEvent_Button_19;
	Parms.K2Node_ComponentBoundEvent_Selected_5 = K2Node_ComponentBoundEvent_Selected_5;
	Parms.K2Node_ComponentBoundEvent_Button_18 = K2Node_ComponentBoundEvent_Button_18;
	Parms.K2Node_ComponentBoundEvent_Button_17 = K2Node_ComponentBoundEvent_Button_17;
	Parms.K2Node_ComponentBoundEvent_Selected_4 = K2Node_ComponentBoundEvent_Selected_4;
	Parms.K2Node_ComponentBoundEvent_Button_16 = K2Node_ComponentBoundEvent_Button_16;
	Parms.K2Node_ComponentBoundEvent_Button_15 = K2Node_ComponentBoundEvent_Button_15;
	Parms.K2Node_ComponentBoundEvent_Selected_3 = K2Node_ComponentBoundEvent_Selected_3;
	Parms.K2Node_ComponentBoundEvent_Button_14 = K2Node_ComponentBoundEvent_Button_14;
	Parms.K2Node_ComponentBoundEvent_Button_13 = K2Node_ComponentBoundEvent_Button_13;
	Parms.K2Node_ComponentBoundEvent_Button_12 = K2Node_ComponentBoundEvent_Button_12;
	Parms.K2Node_ComponentBoundEvent_Button_11 = K2Node_ComponentBoundEvent_Button_11;
	Parms.K2Node_ComponentBoundEvent_Selected_2 = K2Node_ComponentBoundEvent_Selected_2;
	Parms.K2Node_ComponentBoundEvent_Button_10 = K2Node_ComponentBoundEvent_Button_10;
	Parms.K2Node_ComponentBoundEvent_Button_9 = K2Node_ComponentBoundEvent_Button_9;
	Parms.CallFunc_TryToSwitchScreens_IsSameTab = CallFunc_TryToSwitchScreens_IsSameTab;
	Parms.CallFunc_TryToSwitchScreens_IsSameTab_1 = CallFunc_TryToSwitchScreens_IsSameTab_1;
	Parms.CallFunc_TryToSwitchScreens_IsSameTab_2 = CallFunc_TryToSwitchScreens_IsSameTab_2;
	Parms.CallFunc_TryToSwitchScreens_IsSameTab_3 = CallFunc_TryToSwitchScreens_IsSameTab_3;
	Parms.CallFunc_TryToSwitchScreens_IsSameTab_4 = CallFunc_TryToSwitchScreens_IsSameTab_4;
	Parms.K2Node_ComponentBoundEvent_Button_8 = K2Node_ComponentBoundEvent_Button_8;
	Parms.K2Node_ComponentBoundEvent_Button_7 = K2Node_ComponentBoundEvent_Button_7;
	Parms.K2Node_ComponentBoundEvent_Button_6 = K2Node_ComponentBoundEvent_Button_6;
	Parms.K2Node_ComponentBoundEvent_Button_5 = K2Node_ComponentBoundEvent_Button_5;
	Parms.K2Node_ComponentBoundEvent_Button_4 = K2Node_ComponentBoundEvent_Button_4;
	Parms.K2Node_ComponentBoundEvent_Button_3 = K2Node_ComponentBoundEvent_Button_3;
	Parms.K2Node_ComponentBoundEvent_Selected_1 = K2Node_ComponentBoundEvent_Selected_1;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Selected = K2Node_ComponentBoundEvent_Selected;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_TryToSwitchScreens_IsSameTab_5 = CallFunc_TryToSwitchScreens_IsSameTab_5;

	UObject::ProcessEvent(Func, &Parms);

}

}


