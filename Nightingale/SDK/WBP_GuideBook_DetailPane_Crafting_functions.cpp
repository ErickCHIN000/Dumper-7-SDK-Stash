#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_GuideBook_DetailPane_Crafting.WBP_GuideBook_DetailPane_Crafting_C
// (None)

class UClass* UWBP_GuideBook_DetailPane_Crafting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_GuideBook_DetailPane_Crafting_C");

	return Clss;
}


// WBP_GuideBook_DetailPane_Crafting_C WBP_GuideBook_DetailPane_Crafting.Default__WBP_GuideBook_DetailPane_Crafting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_GuideBook_DetailPane_Crafting_C* UWBP_GuideBook_DetailPane_Crafting_C::GetDefaultObj()
{
	static class UWBP_GuideBook_DetailPane_Crafting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_GuideBook_DetailPane_Crafting_C*>(UWBP_GuideBook_DetailPane_Crafting_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_GuideBook_DetailPane_Crafting.WBP_GuideBook_DetailPane_Crafting_C.Do Custom Navigation Decorations Up
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UUserWidget*>         CallFunc_GetDisplayedEntryWidgets_ReturnValue                    (ConstParm, ReferenceParm, ContainsInstancedReference)
// class UUserWidget*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumItems_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_GuideBook_DetailPane_Crafting_C::Do_Custom_Navigation_Decorations_Up(enum class EUINavigation Navigation, TArray<class UUserWidget*>& CallFunc_GetDisplayedEntryWidgets_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item, int32 CallFunc_GetNumItems_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Crafting_C", "Do Custom Navigation Decorations Up");

	Params::UWBP_GuideBook_DetailPane_Crafting_C_Do_Custom_Navigation_Decorations_Up_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.CallFunc_GetDisplayedEntryWidgets_ReturnValue = CallFunc_GetDisplayedEntryWidgets_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetNumItems_ReturnValue = CallFunc_GetNumItems_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_GuideBook_DetailPane_Crafting.WBP_GuideBook_DetailPane_Crafting_C.Do Custom Navigation Switcher Up
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UUserWidget*>         CallFunc_GetDisplayedEntryWidgets_ReturnValue                    (ConstParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UUserWidget*>         CallFunc_GetDisplayedEntryWidgets_ReturnValue_1                  (ConstParm, ReferenceParm, ContainsInstancedReference)
// class UUserWidget*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumItems_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_GuideBook_DetailPane_Crafting_C::Do_Custom_Navigation_Switcher_Up(enum class EUINavigation Navigation, TArray<class UUserWidget*>& CallFunc_GetDisplayedEntryWidgets_ReturnValue, TArray<class UUserWidget*>& CallFunc_GetDisplayedEntryWidgets_ReturnValue_1, class UUserWidget* CallFunc_Array_Get_Item, class UUserWidget* CallFunc_Array_Get_Item_1, int32 CallFunc_GetNumItems_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Crafting_C", "Do Custom Navigation Switcher Up");

	Params::UWBP_GuideBook_DetailPane_Crafting_C_Do_Custom_Navigation_Switcher_Up_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.CallFunc_GetDisplayedEntryWidgets_ReturnValue = CallFunc_GetDisplayedEntryWidgets_ReturnValue;
	Parms.CallFunc_GetDisplayedEntryWidgets_ReturnValue_1 = CallFunc_GetDisplayedEntryWidgets_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetNumItems_ReturnValue = CallFunc_GetNumItems_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_GuideBook_DetailPane_Crafting.WBP_GuideBook_DetailPane_Crafting_C.Do Custom Navigation Decorations Down
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_GuideBook_DetailPane_Crafting_C::Do_Custom_Navigation_Decorations_Down(enum class EUINavigation Navigation, bool CallFunc_GetIsEnabled_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Crafting_C", "Do Custom Navigation Decorations Down");

	Params::UWBP_GuideBook_DetailPane_Crafting_C_Do_Custom_Navigation_Decorations_Down_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_GuideBook_DetailPane_Crafting.WBP_GuideBook_DetailPane_Crafting_C.Do Custom Navigation Benches Down
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UUserWidget*>         CallFunc_GetDisplayedEntryWidgets_ReturnValue                    (ConstParm, ReferenceParm, ContainsInstancedReference)
// class UUserWidget*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumItems_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_GuideBook_DetailPane_Crafting_C::Do_Custom_Navigation_Benches_Down(enum class EUINavigation Navigation, TArray<class UUserWidget*>& CallFunc_GetDisplayedEntryWidgets_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item, bool CallFunc_GetIsEnabled_ReturnValue, int32 CallFunc_GetNumItems_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Crafting_C", "Do Custom Navigation Benches Down");

	Params::UWBP_GuideBook_DetailPane_Crafting_C_Do_Custom_Navigation_Benches_Down_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.CallFunc_GetDisplayedEntryWidgets_ReturnValue = CallFunc_GetDisplayedEntryWidgets_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.CallFunc_GetNumItems_ReturnValue = CallFunc_GetNumItems_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_GuideBook_DetailPane_Crafting.WBP_GuideBook_DetailPane_Crafting_C.OnDetailThumbTilePressed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXMenuDataEntry*           MenuDataEntry                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_DetailPane_Crafting_C::OnDetailThumbTilePressed(class UNWXMenuDataEntry* MenuDataEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Crafting_C", "OnDetailThumbTilePressed");

	Params::UWBP_GuideBook_DetailPane_Crafting_C_OnDetailThumbTilePressed_Params Parms{};

	Parms.MenuDataEntry = MenuDataEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_DetailPane_Crafting.WBP_GuideBook_DetailPane_Crafting_C.OnFocusedWithGamepad
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Default_Gamepad_Focused_Widget                                   (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_DetailPane_Crafting_C::OnFocusedWithGamepad(class UWidget** Default_Gamepad_Focused_Widget, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Crafting_C", "OnFocusedWithGamepad");

	Params::UWBP_GuideBook_DetailPane_Crafting_C_OnFocusedWithGamepad_Params Parms{};

	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Default_Gamepad_Focused_Widget != nullptr)
		*Default_Gamepad_Focused_Widget = Parms.Default_Gamepad_Focused_Widget;

}


// Function WBP_GuideBook_DetailPane_Crafting.WBP_GuideBook_DetailPane_Crafting_C.SetTitle
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_MenuDataEntry_Crafting_C*Crafting_Recipe                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UNWXCheatManager*            LCheatManager                                                    (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              (None)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class UNWXCheatManager*            K2Node_DynamicCast_AsNWXCheat_Manager                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDisplayName_ReturnValue_1                            (None)
// struct FCraftingRecipeReference    CallFunc_GetCraftingRecipeAssetReference_ReturnValue             (ConstParm, HasGetValueTypeHash)
// class FString                      CallFunc_GetAssetName_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_ViewCraftingAssetName_OutView                           (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWBP_GuideBook_DetailPane_Crafting_C::SetTitle(class UBP_MenuDataEntry_Crafting_C*& Crafting_Recipe, class UNWXCheatManager* LCheatManager, class FText CallFunc_GetDisplayName_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UNWXCheatManager* K2Node_DynamicCast_AsNWXCheat_Manager, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetDisplayName_ReturnValue_1, const struct FCraftingRecipeReference& CallFunc_GetCraftingRecipeAssetReference_ReturnValue, const class FString& CallFunc_GetAssetName_ReturnValue, const class FString& CallFunc_ViewCraftingAssetName_OutView, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Crafting_C", "SetTitle");

	Params::UWBP_GuideBook_DetailPane_Crafting_C_SetTitle_Params Parms{};

	Parms.Crafting_Recipe = Crafting_Recipe;
	Parms.LCheatManager = LCheatManager;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXCheat_Manager = K2Node_DynamicCast_AsNWXCheat_Manager;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDisplayName_ReturnValue_1 = CallFunc_GetDisplayName_ReturnValue_1;
	Parms.CallFunc_GetCraftingRecipeAssetReference_ReturnValue = CallFunc_GetCraftingRecipeAssetReference_ReturnValue;
	Parms.CallFunc_GetAssetName_ReturnValue = CallFunc_GetAssetName_ReturnValue;
	Parms.CallFunc_ViewCraftingAssetName_OutView = CallFunc_ViewCraftingAssetName_OutView;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_DetailPane_Crafting.WBP_GuideBook_DetailPane_Crafting_C.InitializeDesignerPreview
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_sw_StructureTrait_C*    CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_sw_StructureTrait_C*    CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_GenericItemConstraintSlot_C*CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_1                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_2                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_DetailPane_Crafting_C::InitializeDesignerPreview(int32 Temp_int_Variable, class UWBP_sw_StructureTrait_C* CallFunc_Create_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_sw_StructureTrait_C* CallFunc_Create_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UWBP_GenericItemConstraintSlot_C* CallFunc_Create_ReturnValue_2, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Crafting_C", "InitializeDesignerPreview");

	Params::UWBP_GuideBook_DetailPane_Crafting_C_InitializeDesignerPreview_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.CallFunc_AddChild_ReturnValue_1 = CallFunc_AddChild_ReturnValue_1;
	Parms.CallFunc_AddChild_ReturnValue_2 = CallFunc_AddChild_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_DetailPane_Crafting.WBP_GuideBook_DetailPane_Crafting_C.TryGetRealmCardInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// class UNWXMenuDataEntryCrafting*   K2Node_DynamicCast_AsNWXMenu_Data_Entry_Crafting                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipe             CallFunc_GetCraftingRecipeData_ReturnValue                       (ContainsInstancedReference)
// struct FCraftingRecipeReference    CallFunc_GetCraftingRecipeAssetReference_ReturnValue             (ConstParm, HasGetValueTypeHash)
// enum class EGetResult              CallFunc_TryGenerateCraftingPreview_Branches                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_TryGenerateCraftingPreview_ReturnValue                  (ReferenceParm)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_TryGetItemData_ItemData                                 (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetItemData_Branches                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_DetailPane_Crafting_C::TryGetRealmCardInfo(class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, TArray<struct FInventoryEntry>& K2Node_MakeArray_Array, class UNWXMenuDataEntryCrafting* K2Node_DynamicCast_AsNWXMenu_Data_Entry_Crafting, bool K2Node_DynamicCast_bSuccess, const struct FCraftingRecipe& CallFunc_GetCraftingRecipeData_ReturnValue, const struct FCraftingRecipeReference& CallFunc_GetCraftingRecipeAssetReference_ReturnValue, enum class EGetResult CallFunc_TryGenerateCraftingPreview_Branches, TArray<struct FInventoryEntry>& CallFunc_TryGenerateCraftingPreview_ReturnValue, bool CallFunc_HasTag_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, bool CallFunc_Array_IsNotEmpty_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Crafting_C", "TryGetRealmCardInfo");

	Params::UWBP_GuideBook_DetailPane_Crafting_C_TryGetRealmCardInfo_Params Parms{};

	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_DynamicCast_AsNWXMenu_Data_Entry_Crafting = K2Node_DynamicCast_AsNWXMenu_Data_Entry_Crafting;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCraftingRecipeData_ReturnValue = CallFunc_GetCraftingRecipeData_ReturnValue;
	Parms.CallFunc_GetCraftingRecipeAssetReference_ReturnValue = CallFunc_GetCraftingRecipeAssetReference_ReturnValue;
	Parms.CallFunc_TryGenerateCraftingPreview_Branches = CallFunc_TryGenerateCraftingPreview_Branches;
	Parms.CallFunc_TryGenerateCraftingPreview_ReturnValue = CallFunc_TryGenerateCraftingPreview_ReturnValue;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_TryGetItemData_ItemData = CallFunc_TryGetItemData_ItemData;
	Parms.CallFunc_TryGetItemData_Branches = CallFunc_TryGetItemData_Branches;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue = CallFunc_Array_IsNotEmpty_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_DetailPane_Crafting.WBP_GuideBook_DetailPane_Crafting_C.CheckPinnedState
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPinned                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_HUDGoalTrackingComponent_C*HudTrackingComponent                                             (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTrackedRecipeCounts_CurrentTrackedQty                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTrackedRecipeCounts_MaxTrackedQty                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetID_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_GuidToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_UI_GoalTracking_C>K2Node_DynamicCast_AsBPI_UI_Goal_Tracking                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_HUDGoalTrackingComponent_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEntityPinned_IsPinned                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_DetailPane_Crafting_C::CheckPinnedState(bool IsPinned, class UBP_HUDGoalTrackingComponent_C* HudTrackingComponent, int32 CallFunc_GetTrackedRecipeCounts_CurrentTrackedQty, int32 CallFunc_GetTrackedRecipeCounts_MaxTrackedQty, const struct FGuid& CallFunc_GetID_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_GuidToString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, TScriptInterface<class IBPI_UI_GoalTracking_C> K2Node_DynamicCast_AsBPI_UI_Goal_Tracking, bool K2Node_DynamicCast_bSuccess, class UBP_HUDGoalTrackingComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsEntityPinned_IsPinned, class UWidget* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Crafting_C", "CheckPinnedState");

	Params::UWBP_GuideBook_DetailPane_Crafting_C_CheckPinnedState_Params Parms{};

	Parms.IsPinned = IsPinned;
	Parms.HudTrackingComponent = HudTrackingComponent;
	Parms.CallFunc_GetTrackedRecipeCounts_CurrentTrackedQty = CallFunc_GetTrackedRecipeCounts_CurrentTrackedQty;
	Parms.CallFunc_GetTrackedRecipeCounts_MaxTrackedQty = CallFunc_GetTrackedRecipeCounts_MaxTrackedQty;
	Parms.CallFunc_GetID_ReturnValue = CallFunc_GetID_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_GuidToString_ReturnValue = CallFunc_Conv_GuidToString_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_UI_Goal_Tracking = K2Node_DynamicCast_AsBPI_UI_Goal_Tracking;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsEntityPinned_IsPinned = CallFunc_IsEntityPinned_IsPinned;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_DetailPane_Crafting.WBP_GuideBook_DetailPane_Crafting_C.UpdateImage
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetImage_IsValidReference                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetImage_EntryImage                                     (UObjectWrapper, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_DetailPane_Crafting_C::UpdateImage(bool CallFunc_GetImage_IsValidReference, TSoftObjectPtr<class UTexture2D> CallFunc_GetImage_EntryImage, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Crafting_C", "UpdateImage");

	Params::UWBP_GuideBook_DetailPane_Crafting_C_UpdateImage_Params Parms{};

	Parms.CallFunc_GetImage_IsValidReference = CallFunc_GetImage_IsValidReference;
	Parms.CallFunc_GetImage_EntryImage = CallFunc_GetImage_EntryImage;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_DetailPane_Crafting.WBP_GuideBook_DetailPane_Crafting_C.UnbindFromSlotEvents
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWidget*>             LSlotWidgets                                                     (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_GenericItemConstraintSlot_C*K2Node_DynamicCast_AsWBP_Generic_Item_Constraint_Slot            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSelected_IsSelected                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_DetailPane_Crafting_C::UnbindFromSlotEvents(const TArray<class UWidget*>& LSlotWidgets, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UWBP_GenericItemConstraintSlot_C* K2Node_DynamicCast_AsWBP_Generic_Item_Constraint_Slot, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsSelected_IsSelected, bool CallFunc_Not_PreBool_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Crafting_C", "UnbindFromSlotEvents");

	Params::UWBP_GuideBook_DetailPane_Crafting_C_UnbindFromSlotEvents_Params Parms{};

	Parms.LSlotWidgets = LSlotWidgets;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Generic_Item_Constraint_Slot = K2Node_DynamicCast_AsWBP_Generic_Item_Constraint_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsSelected_IsSelected = CallFunc_IsSelected_IsSelected;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_DetailPane_Crafting.WBP_GuideBook_DetailPane_Crafting_C.OnItemListClosed
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_GenericItemConstraintSlot_C*K2Node_DynamicCast_AsWBP_Generic_Item_Constraint_Slot            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSelected_IsSelected                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_DetailPane_Crafting_C::OnItemListClosed(int32 Temp_int_Array_Index_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UWBP_GenericItemConstraintSlot_C* K2Node_DynamicCast_AsWBP_Generic_Item_Constraint_Slot, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsSelected_IsSelected, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Crafting_C", "OnItemListClosed");

	Params::UWBP_GuideBook_DetailPane_Crafting_C_OnItemListClosed_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Generic_Item_Constraint_Slot = K2Node_DynamicCast_AsWBP_Generic_Item_Constraint_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsSelected_IsSelected = CallFunc_IsSelected_IsSelected;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_DetailPane_Crafting.WBP_GuideBook_DetailPane_Crafting_C.RemoveBindingsRelatedEntries
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_DetailPane_Crafting_C::RemoveBindingsRelatedEntries(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Crafting_C", "RemoveBindingsRelatedEntries");

	Params::UWBP_GuideBook_DetailPane_Crafting_C_RemoveBindingsRelatedEntries_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_DetailPane_Crafting.WBP_GuideBook_DetailPane_Crafting_C.SetupBindingsRelatedEntries
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_DetailPane_Crafting_C::SetupBindingsRelatedEntries(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Crafting_C", "SetupBindingsRelatedEntries");

	Params::UWBP_GuideBook_DetailPane_Crafting_C_SetupBindingsRelatedEntries_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_DetailPane_Crafting.WBP_GuideBook_DetailPane_Crafting_C.OnIngredientListClosed
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXWindowWidget*            Window                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ANWXHUDBase*                 CallFunc_GetLocalNWXHUD_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXHUDBase*                 CallFunc_GetLocalNWXHUD_ReturnValue_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXWindowWidget*            CallFunc_GetCurrentlyOpenWindow_ReturnValue                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNWXWindowWidget*            CallFunc_GetCurrentlyOpenWindow_ReturnValue_1                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_DetailPane_Crafting_C::OnIngredientListClosed(class UNWXWindowWidget* Window, class ANWXHUDBase* CallFunc_GetLocalNWXHUD_ReturnValue, class ANWXHUDBase* CallFunc_GetLocalNWXHUD_ReturnValue_1, class UNWXWindowWidget* CallFunc_GetCurrentlyOpenWindow_ReturnValue, class UNWXWindowWidget* CallFunc_GetCurrentlyOpenWindow_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Crafting_C", "OnIngredientListClosed");

	Params::UWBP_GuideBook_DetailPane_Crafting_C_OnIngredientListClosed_Params Parms{};

	Parms.Window = Window;
	Parms.CallFunc_GetLocalNWXHUD_ReturnValue = CallFunc_GetLocalNWXHUD_ReturnValue;
	Parms.CallFunc_GetLocalNWXHUD_ReturnValue_1 = CallFunc_GetLocalNWXHUD_ReturnValue_1;
	Parms.CallFunc_GetCurrentlyOpenWindow_ReturnValue = CallFunc_GetCurrentlyOpenWindow_ReturnValue;
	Parms.CallFunc_GetCurrentlyOpenWindow_ReturnValue_1 = CallFunc_GetCurrentlyOpenWindow_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_DetailPane_Crafting.WBP_GuideBook_DetailPane_Crafting_C.OnRecipeUnlocked
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FCraftingRecipeReference>NewlyUnlockedRecipes                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_DetailPane_Crafting_C::OnRecipeUnlocked(TArray<struct FCraftingRecipeReference>& NewlyUnlockedRecipes, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Crafting_C", "OnRecipeUnlocked");

	Params::UWBP_GuideBook_DetailPane_Crafting_C_OnRecipeUnlocked_Params Parms{};

	Parms.NewlyUnlockedRecipes = NewlyUnlockedRecipes;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_DetailPane_Crafting.WBP_GuideBook_DetailPane_Crafting_C.GetQuickCraftItems
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FInventoryEntry>     Items                                                            (Parm, OutParm)
// TArray<struct FInventoryEntry>     AutoSelectedIngredients                                          (Edit, BlueprintVisible)
// struct FInventoryEntry             HighestQuantityIngredient                                        (Edit, BlueprintVisible)
// int32                              HighestStackCount                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     K2Node_MakeArray_Array                                           (ReferenceParm)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntryCrafting*   K2Node_DynamicCast_AsNWXMenu_Data_Entry_Crafting                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipe             CallFunc_GetCraftingRecipeData_ReturnValue                       (ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingConstraintSlot     CallFunc_Array_Get_Item                                          (ContainsInstancedReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_CraftingMenu_FilterInventoryBySlotAndConstraints_EntriesMatchingConstraints(ReferenceParm)
// TArray<struct FInventoryEntry>     CallFunc_CraftingMenu_FilterInventoryBySlotAndConstraints_EntriesMatchingSlotType(ReferenceParm)
// struct FInventoryEntry             CallFunc_Array_Get_Item_1                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_DetailPane_Crafting_C::GetQuickCraftItems(TArray<struct FInventoryEntry>* Items, const TArray<struct FInventoryEntry>& AutoSelectedIngredients, const struct FInventoryEntry& HighestQuantityIngredient, int32 HighestStackCount, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<struct FInventoryEntry>& K2Node_MakeArray_Array, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UNWXMenuDataEntryCrafting* K2Node_DynamicCast_AsNWXMenu_Data_Entry_Crafting, bool K2Node_DynamicCast_bSuccess, const struct FCraftingRecipe& CallFunc_GetCraftingRecipeData_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FCraftingConstraintSlot& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_CraftingMenu_FilterInventoryBySlotAndConstraints_EntriesMatchingConstraints, TArray<struct FInventoryEntry>& CallFunc_CraftingMenu_FilterInventoryBySlotAndConstraints_EntriesMatchingSlotType, const struct FInventoryEntry& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Crafting_C", "GetQuickCraftItems");

	Params::UWBP_GuideBook_DetailPane_Crafting_C_GetQuickCraftItems_Params Parms{};

	Parms.AutoSelectedIngredients = AutoSelectedIngredients;
	Parms.HighestQuantityIngredient = HighestQuantityIngredient;
	Parms.HighestStackCount = HighestStackCount;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsNWXMenu_Data_Entry_Crafting = K2Node_DynamicCast_AsNWXMenu_Data_Entry_Crafting;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCraftingRecipeData_ReturnValue = CallFunc_GetCraftingRecipeData_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_CraftingMenu_FilterInventoryBySlotAndConstraints_EntriesMatchingConstraints = CallFunc_CraftingMenu_FilterInventoryBySlotAndConstraints_EntriesMatchingConstraints;
	Parms.CallFunc_CraftingMenu_FilterInventoryBySlotAndConstraints_EntriesMatchingSlotType = CallFunc_CraftingMenu_FilterInventoryBySlotAndConstraints_EntriesMatchingSlotType;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Items != nullptr)
		*Items = std::move(Parms.Items);

}


// Function WBP_GuideBook_DetailPane_Crafting.WBP_GuideBook_DetailPane_Crafting_C.UpdateHasCreated
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsCreated                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

void UWBP_GuideBook_DetailPane_Crafting_C::UpdateHasCreated(bool IsCreated, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Crafting_C", "UpdateHasCreated");

	Params::UWBP_GuideBook_DetailPane_Crafting_C_UpdateHasCreated_Params Parms{};

	Parms.IsCreated = IsCreated;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_DetailPane_Crafting.WBP_GuideBook_DetailPane_Crafting_C.CanOwnerCraft
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStateActive_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_DetailPane_Crafting_C::CanOwnerCraft(bool* Result, const struct FGameplayTag& Temp_struct_Variable, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_IsStateActive_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Crafting_C", "CanOwnerCraft");

	Params::UWBP_GuideBook_DetailPane_Crafting_C_CanOwnerCraft_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_IsStateActive_ReturnValue = CallFunc_IsStateActive_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function WBP_GuideBook_DetailPane_Crafting.WBP_GuideBook_DetailPane_Crafting_C.UpdateRelatedEntriesGrid
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXMenuDataEntryCrafting*   CraftingEntry                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UStructureTraitTypeUIData*>LRelatedAugmentationTypes                                        (Edit, BlueprintVisible)
// TArray<class UStructureTraitTypeUIData*>LRelatedCraftingBenchTypes                                       (Edit, BlueprintVisible)
// class UNWXRecipeToGrantingStructureRelationsTracker*LGrantingStructureTracker                                        (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXRecipeToAssociatedStructuresRelationsTracker*LRelatedStructureTracker                                         (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class UWBP_sw_StructureTrait_C*    CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_sw_StructureTrait_C*    CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyChildren_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumItems_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// int32                              CallFunc_GetNumItems_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UStructureTraitCollectionAsset*>CallFunc_GetReceivingTraitCollections_ReturnValue                (ConstParm, ReferenceParm)
// class UStructureTraitCollectionAsset*CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_1                                          (None)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UStructureTraitCollectionAsset*>CallFunc_GetEmittingTraitCollections_ReturnValue                 (ConstParm, ReferenceParm)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureTraitCollectionAsset*CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_1                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              (None)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// enum class ESlateVisibility        K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDisplayName_ReturnValue_1                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<class UNWXMenuDataEntry*>   CallFunc_GetRelatedEntries_ReturnValue                           (ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class UNWXRecipeToGrantingStructureRelationsTracker*CallFunc_GetRelationsTracker_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UNWXMenuDataEntry*>   CallFunc_GetRelatedEntries_ReturnValue_1                         (ReferenceParm)
// class UNWXRecipeToAssociatedStructuresRelationsTracker*CallFunc_GetRelationsTracker_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_DetailPane_Crafting_C::UpdateRelatedEntriesGrid(class UNWXMenuDataEntryCrafting* CraftingEntry, const TArray<class UStructureTraitTypeUIData*>& LRelatedAugmentationTypes, const TArray<class UStructureTraitTypeUIData*>& LRelatedCraftingBenchTypes, class UNWXRecipeToGrantingStructureRelationsTracker* LGrantingStructureTracker, class UNWXRecipeToAssociatedStructuresRelationsTracker* LRelatedStructureTracker, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class UWBP_sw_StructureTrait_C* CallFunc_Create_ReturnValue, class UWBP_sw_StructureTrait_C* CallFunc_Create_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, bool CallFunc_HasAnyChildren_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable_3, int32 CallFunc_GetNumItems_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class FText K2Node_Select_Default, int32 CallFunc_GetNumItems_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, TArray<class UStructureTraitCollectionAsset*>& CallFunc_GetReceivingTraitCollections_ReturnValue, class UStructureTraitCollectionAsset* CallFunc_Array_Get_Item, class FText K2Node_Select_Default_1, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, bool Temp_bool_Variable_2, TArray<class UStructureTraitCollectionAsset*>& CallFunc_GetEmittingTraitCollections_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_2, class UStructureTraitCollectionAsset* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable_1, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, class FText CallFunc_GetDisplayName_ReturnValue, bool Temp_bool_Variable_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, enum class ESlateVisibility K2Node_Select_Default_3, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<class UNWXMenuDataEntry*>& CallFunc_GetRelatedEntries_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class UNWXRecipeToGrantingStructureRelationsTracker* CallFunc_GetRelationsTracker_ReturnValue, TArray<class UNWXMenuDataEntry*>& CallFunc_GetRelatedEntries_ReturnValue_1, class UNWXRecipeToAssociatedStructuresRelationsTracker* CallFunc_GetRelationsTracker_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Crafting_C", "UpdateRelatedEntriesGrid");

	Params::UWBP_GuideBook_DetailPane_Crafting_C_UpdateRelatedEntriesGrid_Params Parms{};

	Parms.CraftingEntry = CraftingEntry;
	Parms.LRelatedAugmentationTypes = LRelatedAugmentationTypes;
	Parms.LRelatedCraftingBenchTypes = LRelatedCraftingBenchTypes;
	Parms.LGrantingStructureTracker = LGrantingStructureTracker;
	Parms.LRelatedStructureTracker = LRelatedStructureTracker;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.CallFunc_HasAnyChildren_ReturnValue_1 = CallFunc_HasAnyChildren_ReturnValue_1;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_GetNumItems_ReturnValue = CallFunc_GetNumItems_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetNumItems_ReturnValue_1 = CallFunc_GetNumItems_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_GetReceivingTraitCollections_ReturnValue = CallFunc_GetReceivingTraitCollections_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_GetEmittingTraitCollections_ReturnValue = CallFunc_GetEmittingTraitCollections_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_AddChild_ReturnValue_1 = CallFunc_AddChild_ReturnValue_1;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue_1 = CallFunc_GetDisplayName_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_GetRelatedEntries_ReturnValue = CallFunc_GetRelatedEntries_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_GetRelationsTracker_ReturnValue = CallFunc_GetRelationsTracker_ReturnValue;
	Parms.CallFunc_GetRelatedEntries_ReturnValue_1 = CallFunc_GetRelatedEntries_ReturnValue_1;
	Parms.CallFunc_GetRelationsTracker_ReturnValue_1 = CallFunc_GetRelationsTracker_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_DetailPane_Crafting.WBP_GuideBook_DetailPane_Crafting_C.TryEnableQuickCraft
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_CanOwnerCraft_Result                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntryCrafting*   K2Node_DynamicCast_AsNWXMenu_Data_Entry_Crafting                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUnlocked_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsQuickCraftable_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCraftable_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_DetailPane_Crafting_C::TryEnableQuickCraft(bool CallFunc_CanOwnerCraft_Result, class UNWXMenuDataEntryCrafting* K2Node_DynamicCast_AsNWXMenu_Data_Entry_Crafting, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsUnlocked_ReturnValue, bool CallFunc_IsQuickCraftable_ReturnValue, bool CallFunc_IsCraftable_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Crafting_C", "TryEnableQuickCraft");

	Params::UWBP_GuideBook_DetailPane_Crafting_C_TryEnableQuickCraft_Params Parms{};

	Parms.CallFunc_CanOwnerCraft_Result = CallFunc_CanOwnerCraft_Result;
	Parms.K2Node_DynamicCast_AsNWXMenu_Data_Entry_Crafting = K2Node_DynamicCast_AsNWXMenu_Data_Entry_Crafting;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsUnlocked_ReturnValue = CallFunc_IsUnlocked_ReturnValue;
	Parms.CallFunc_IsQuickCraftable_ReturnValue = CallFunc_IsQuickCraftable_ReturnValue;
	Parms.CallFunc_IsCraftable_ReturnValue = CallFunc_IsCraftable_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_DetailPane_Crafting.WBP_GuideBook_DetailPane_Crafting_C.UpdateButtonStatus
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXMenuDataEntryCrafting*   K2Node_DynamicCast_AsNWXMenu_Data_Entry_Crafting                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsQuickCraftable_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_DetailPane_Crafting_C::UpdateButtonStatus(class UNWXMenuDataEntryCrafting* K2Node_DynamicCast_AsNWXMenu_Data_Entry_Crafting, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsQuickCraftable_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Crafting_C", "UpdateButtonStatus");

	Params::UWBP_GuideBook_DetailPane_Crafting_C_UpdateButtonStatus_Params Parms{};

	Parms.K2Node_DynamicCast_AsNWXMenu_Data_Entry_Crafting = K2Node_DynamicCast_AsNWXMenu_Data_Entry_Crafting;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsQuickCraftable_ReturnValue = CallFunc_IsQuickCraftable_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_DetailPane_Crafting.WBP_GuideBook_DetailPane_Crafting_C.OnItemAddedOrRemoved
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IItemContainer>Source                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FInventoryEntry             Item                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              Quantity                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FCraftingConstraintSlot>LRecipeSlots                                                     (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingConstraintSlot     CallFunc_Array_Get_Item                                          (ContainsInstancedReference)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetItemsMatchingConstraint_IsConstraintSatisfied        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GetItemsMatchingConstraint_ItemEntries                  (ReferenceParm)
// class UWBP_GenericItemConstraintSlot_C*K2Node_DynamicCast_AsWBP_Generic_Item_Constraint_Slot            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MenuDataEntry_Crafting_C*K2Node_DynamicCast_AsBP_Menu_Data_Entry_Crafting                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipe             CallFunc_GetCraftingRecipeData_ReturnValue                       (ContainsInstancedReference)

void UWBP_GuideBook_DetailPane_Crafting_C::OnItemAddedOrRemoved(TScriptInterface<class IItemContainer>& Source, struct FInventoryEntry& Item, int32 Quantity, const TArray<struct FCraftingConstraintSlot>& LRecipeSlots, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FCraftingConstraintSlot& CallFunc_Array_Get_Item, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_GetItemsMatchingConstraint_IsConstraintSatisfied, TArray<struct FInventoryEntry>& CallFunc_GetItemsMatchingConstraint_ItemEntries, class UWBP_GenericItemConstraintSlot_C* K2Node_DynamicCast_AsWBP_Generic_Item_Constraint_Slot, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UBP_MenuDataEntry_Crafting_C* K2Node_DynamicCast_AsBP_Menu_Data_Entry_Crafting, bool K2Node_DynamicCast_bSuccess_1, const struct FCraftingRecipe& CallFunc_GetCraftingRecipeData_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Crafting_C", "OnItemAddedOrRemoved");

	Params::UWBP_GuideBook_DetailPane_Crafting_C_OnItemAddedOrRemoved_Params Parms{};

	Parms.Source = Source;
	Parms.Item = Item;
	Parms.Quantity = Quantity;
	Parms.LRecipeSlots = LRecipeSlots;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_GetItemsMatchingConstraint_IsConstraintSatisfied = CallFunc_GetItemsMatchingConstraint_IsConstraintSatisfied;
	Parms.CallFunc_GetItemsMatchingConstraint_ItemEntries = CallFunc_GetItemsMatchingConstraint_ItemEntries;
	Parms.K2Node_DynamicCast_AsWBP_Generic_Item_Constraint_Slot = K2Node_DynamicCast_AsWBP_Generic_Item_Constraint_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Menu_Data_Entry_Crafting = K2Node_DynamicCast_AsBP_Menu_Data_Entry_Crafting;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetCraftingRecipeData_ReturnValue = CallFunc_GetCraftingRecipeData_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_DetailPane_Crafting.WBP_GuideBook_DetailPane_Crafting_C.OnDetailPaneThumbReleased
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_GuideBook_Thumb_C*      K2Node_DynamicCast_AsWBP_Guide_Book_Thumb                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_DetailPane_Crafting_C::OnDetailPaneThumbReleased(class UUserWidget* Widget, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWBP_GuideBook_Thumb_C* K2Node_DynamicCast_AsWBP_Guide_Book_Thumb, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Crafting_C", "OnDetailPaneThumbReleased");

	Params::UWBP_GuideBook_DetailPane_Crafting_C_OnDetailPaneThumbReleased_Params Parms{};

	Parms.Widget = Widget;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsWBP_Guide_Book_Thumb = K2Node_DynamicCast_AsWBP_Guide_Book_Thumb;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_DetailPane_Crafting.WBP_GuideBook_DetailPane_Crafting_C.OnDetailThumbDoubleClicked
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXMenuDataEntry*           MenuDataEntry                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_MenuDataEntry_Building_C*K2Node_DynamicCast_AsBP_Menu_Data_Entry_Building                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GuideBookCraftingRecipesCategoryTag_ReturnValue         (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GuideBookBuildingCategoryTag_ReturnValue                (NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_DetailPane_Crafting_C::OnDetailThumbDoubleClicked(class UNWXMenuDataEntry* MenuDataEntry, class UBP_MenuDataEntry_Building_C* K2Node_DynamicCast_AsBP_Menu_Data_Entry_Building, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTag& CallFunc_GuideBookCraftingRecipesCategoryTag_ReturnValue, const struct FGameplayTag& CallFunc_GuideBookBuildingCategoryTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Crafting_C", "OnDetailThumbDoubleClicked");

	Params::UWBP_GuideBook_DetailPane_Crafting_C_OnDetailThumbDoubleClicked_Params Parms{};

	Parms.MenuDataEntry = MenuDataEntry;
	Parms.K2Node_DynamicCast_AsBP_Menu_Data_Entry_Building = K2Node_DynamicCast_AsBP_Menu_Data_Entry_Building;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GuideBookCraftingRecipesCategoryTag_ReturnValue = CallFunc_GuideBookCraftingRecipesCategoryTag_ReturnValue;
	Parms.CallFunc_GuideBookBuildingCategoryTag_ReturnValue = CallFunc_GuideBookBuildingCategoryTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_DetailPane_Crafting.WBP_GuideBook_DetailPane_Crafting_C.RemoveBindings
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXPlayerState*             CallFunc_GetOwningPlayerState_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetEssencePouch_Container                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetEssencePouch_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetBackpack_Container                                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetBackpack_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntryCreatedStateTracker*CallFunc_GetStateTracker_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_DetailPane_Crafting_C::RemoveBindings(class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TScriptInterface<class IItemContainer> CallFunc_GetEssencePouch_Container, bool CallFunc_GetEssencePouch_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_GetBackpack_Container, bool CallFunc_GetBackpack_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UNWXMenuDataEntryCreatedStateTracker* CallFunc_GetStateTracker_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Crafting_C", "RemoveBindings");

	Params::UWBP_GuideBook_DetailPane_Crafting_C_RemoveBindings_Params Parms{};

	Parms.CallFunc_GetOwningPlayerState_ReturnValue = CallFunc_GetOwningPlayerState_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetEssencePouch_Container = CallFunc_GetEssencePouch_Container;
	Parms.CallFunc_GetEssencePouch_ReturnValue = CallFunc_GetEssencePouch_ReturnValue;
	Parms.CallFunc_GetBackpack_Container = CallFunc_GetBackpack_Container;
	Parms.CallFunc_GetBackpack_ReturnValue = CallFunc_GetBackpack_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_GetStateTracker_ReturnValue = CallFunc_GetStateTracker_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_DetailPane_Crafting.WBP_GuideBook_DetailPane_Crafting_C.SetupBindings
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXPlayerState*             CallFunc_GetOwningPlayerState_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_HUDGoalTrackingComponent_C*CallFunc_Get_HUD_Goal_Tracking_Manager_BP_UIGoalTrackingComponent(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetEssencePouch_Container                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetEssencePouch_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetBackpack_Container                                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetBackpack_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_DetailPane_Crafting_C::SetupBindings(class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UBP_HUDGoalTrackingComponent_C* CallFunc_Get_HUD_Goal_Tracking_Manager_BP_UIGoalTrackingComponent, TScriptInterface<class IItemContainer> CallFunc_GetEssencePouch_Container, bool CallFunc_GetEssencePouch_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, TScriptInterface<class IItemContainer> CallFunc_GetBackpack_Container, bool CallFunc_GetBackpack_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Crafting_C", "SetupBindings");

	Params::UWBP_GuideBook_DetailPane_Crafting_C_SetupBindings_Params Parms{};

	Parms.CallFunc_GetOwningPlayerState_ReturnValue = CallFunc_GetOwningPlayerState_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Get_HUD_Goal_Tracking_Manager_BP_UIGoalTrackingComponent = CallFunc_Get_HUD_Goal_Tracking_Manager_BP_UIGoalTrackingComponent;
	Parms.CallFunc_GetEssencePouch_Container = CallFunc_GetEssencePouch_Container;
	Parms.CallFunc_GetEssencePouch_ReturnValue = CallFunc_GetEssencePouch_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetBackpack_Container = CallFunc_GetBackpack_Container;
	Parms.CallFunc_GetBackpack_ReturnValue = CallFunc_GetBackpack_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_DetailPane_Crafting.WBP_GuideBook_DetailPane_Crafting_C.OnDetailPaneThumbGenerated
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_GuideBook_Thumb_C*      K2Node_DynamicCast_AsWBP_Guide_Book_Thumb                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_DetailPane_Crafting_C::OnDetailPaneThumbGenerated(class UUserWidget* Widget, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWBP_GuideBook_Thumb_C* K2Node_DynamicCast_AsWBP_Guide_Book_Thumb, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Crafting_C", "OnDetailPaneThumbGenerated");

	Params::UWBP_GuideBook_DetailPane_Crafting_C_OnDetailPaneThumbGenerated_Params Parms{};

	Parms.Widget = Widget;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsWBP_Guide_Book_Thumb = K2Node_DynamicCast_AsWBP_Guide_Book_Thumb;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_DetailPane_Crafting.WBP_GuideBook_DetailPane_Crafting_C.GetBUQuckCraftingToolTip
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class UWBP_GenericTooltip_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_GenericTooltip_C*       CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_GenericTooltip_C*       CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_GenericTooltip_C*       CallFunc_Create_ReturnValue_3                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_1                                             (ConstParm)
// bool                               CallFunc_CanOwnerCraft_Result                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_2                                             (ConstParm)
// bool                               CallFunc_IsUnlocked_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_3                                             (ConstParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_GuideBook_DetailPane_Crafting_C::GetBUQuckCraftingToolTip(class FText Temp_text_Variable, class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue, class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue_1, class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue_2, class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue_3, bool CallFunc_GetIsEnabled_ReturnValue, class FText Temp_text_Variable_1, bool CallFunc_CanOwnerCraft_Result, class FText Temp_text_Variable_2, bool CallFunc_IsUnlocked_ReturnValue, class FText Temp_text_Variable_3, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Crafting_C", "GetBUQuckCraftingToolTip");

	Params::UWBP_GuideBook_DetailPane_Crafting_C_GetBUQuckCraftingToolTip_Params Parms{};

	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.CallFunc_Create_ReturnValue_3 = CallFunc_Create_ReturnValue_3;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_CanOwnerCraft_Result = CallFunc_CanOwnerCraft_Result;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.CallFunc_IsUnlocked_ReturnValue = CallFunc_IsUnlocked_ReturnValue;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_GuideBook_DetailPane_Crafting.WBP_GuideBook_DetailPane_Crafting_C.OpenFullCraftingMenu
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_MenuDataEntry_Crafting_C*K2Node_DynamicCast_AsBP_Menu_Data_Entry_Crafting                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipeReference    CallFunc_GetCraftingRecipeAssetReference_ReturnValue             (ConstParm, HasGetValueTypeHash)

void UWBP_GuideBook_DetailPane_Crafting_C::OpenFullCraftingMenu(class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UBP_MenuDataEntry_Crafting_C* K2Node_DynamicCast_AsBP_Menu_Data_Entry_Crafting, bool K2Node_DynamicCast_bSuccess, const struct FCraftingRecipeReference& CallFunc_GetCraftingRecipeAssetReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Crafting_C", "OpenFullCraftingMenu");

	Params::UWBP_GuideBook_DetailPane_Crafting_C_OpenFullCraftingMenu_Params Parms{};

	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Menu_Data_Entry_Crafting = K2Node_DynamicCast_AsBP_Menu_Data_Entry_Crafting;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCraftingRecipeAssetReference_ReturnValue = CallFunc_GetCraftingRecipeAssetReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_DetailPane_Crafting.WBP_GuideBook_DetailPane_Crafting_C.QuickCraft
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              QuantityToCraft                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipeReference    Recipe                                                           (Edit, BlueprintVisible, HasGetValueTypeHash)
// class UBP_CraftingStationComponent_C*CraftingStation                                                  (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             Crafter                                                          (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CrafterController                                                (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                StartCraft                                                       (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GetQuickCraftItems_Items                                (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CraftingStationComponent_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetLocalPlayerPersistentId_PlayerId                     (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleCallFunc_AbilityTargetDataFromCraftingRecipeInstanced_ReturnValue(None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData                              (None)
// class ABP_Character_C*             CallFunc_GetLocalCharacter_PlayerCharacter                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SendGameplayEventToActor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MenuDataEntry_Crafting_C*K2Node_DynamicCast_AsBP_Menu_Data_Entry_Crafting                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipeReference    CallFunc_GetCraftingRecipeAssetReference_ReturnValue             (ConstParm, HasGetValueTypeHash)

void UWBP_GuideBook_DetailPane_Crafting_C::QuickCraft(int32 QuantityToCraft, const struct FCraftingRecipeReference& Recipe, class UBP_CraftingStationComponent_C* CraftingStation, class ABP_Character_C* Crafter, class ANWXPlayerController* CrafterController, const struct FGameplayTag& StartCraft, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_GetQuickCraftItems_Items, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UBP_CraftingStationComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const class FString& CallFunc_GetLocalPlayerPersistentId_PlayerId, bool CallFunc_IsValid_ReturnValue_3, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromCraftingRecipeInstanced_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter, int32 CallFunc_SendGameplayEventToActor_ReturnValue, class UBP_MenuDataEntry_Crafting_C* K2Node_DynamicCast_AsBP_Menu_Data_Entry_Crafting, bool K2Node_DynamicCast_bSuccess, const struct FCraftingRecipeReference& CallFunc_GetCraftingRecipeAssetReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Crafting_C", "QuickCraft");

	Params::UWBP_GuideBook_DetailPane_Crafting_C_QuickCraft_Params Parms{};

	Parms.QuantityToCraft = QuantityToCraft;
	Parms.Recipe = Recipe;
	Parms.CraftingStation = CraftingStation;
	Parms.Crafter = Crafter;
	Parms.CrafterController = CrafterController;
	Parms.StartCraft = StartCraft;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_GetQuickCraftItems_Items = CallFunc_GetQuickCraftItems_Items;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetLocalPlayerPersistentId_PlayerId = CallFunc_GetLocalPlayerPersistentId_PlayerId;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_AbilityTargetDataFromCraftingRecipeInstanced_ReturnValue = CallFunc_AbilityTargetDataFromCraftingRecipeInstanced_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_MakeStruct_GameplayEventData = K2Node_MakeStruct_GameplayEventData;
	Parms.CallFunc_GetLocalCharacter_PlayerCharacter = CallFunc_GetLocalCharacter_PlayerCharacter;
	Parms.CallFunc_SendGameplayEventToActor_ReturnValue = CallFunc_SendGameplayEventToActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Menu_Data_Entry_Crafting = K2Node_DynamicCast_AsBP_Menu_Data_Entry_Crafting;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCraftingRecipeAssetReference_ReturnValue = CallFunc_GetCraftingRecipeAssetReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_DetailPane_Crafting.WBP_GuideBook_DetailPane_Crafting_C.OnExecuteCategoryOperation
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                StartCraft                                                       (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_DetailPane_Crafting_C::OnExecuteCategoryOperation(const struct FGameplayTag& StartCraft, bool CallFunc_GetIsEnabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Crafting_C", "OnExecuteCategoryOperation");

	Params::UWBP_GuideBook_DetailPane_Crafting_C_OnExecuteCategoryOperation_Params Parms{};

	Parms.StartCraft = StartCraft;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_DetailPane_Crafting.WBP_GuideBook_DetailPane_Crafting_C.UpdateCosmetics
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_MenuDataEntry_Crafting_C*LCraftingEntry                                                   (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntryCreatedStateTracker*CallFunc_GetStateTracker_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCreated_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MenuDataEntry_Crafting_C*K2Node_DynamicCast_AsBP_Menu_Data_Entry_Crafting                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipeReference    CallFunc_GetCraftingRecipeAssetReference_ReturnValue             (ConstParm, HasGetValueTypeHash)
// class FText                        CallFunc_GetCraftingRecipeDescription_ReturnValue                (None)

void UWBP_GuideBook_DetailPane_Crafting_C::UpdateCosmetics(class UBP_MenuDataEntry_Crafting_C* LCraftingEntry, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UNWXMenuDataEntryCreatedStateTracker* CallFunc_GetStateTracker_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsCreated_ReturnValue, class UBP_MenuDataEntry_Crafting_C* K2Node_DynamicCast_AsBP_Menu_Data_Entry_Crafting, bool K2Node_DynamicCast_bSuccess, const struct FCraftingRecipeReference& CallFunc_GetCraftingRecipeAssetReference_ReturnValue, class FText CallFunc_GetCraftingRecipeDescription_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Crafting_C", "UpdateCosmetics");

	Params::UWBP_GuideBook_DetailPane_Crafting_C_UpdateCosmetics_Params Parms{};

	Parms.LCraftingEntry = LCraftingEntry;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetStateTracker_ReturnValue = CallFunc_GetStateTracker_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsCreated_ReturnValue = CallFunc_IsCreated_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Menu_Data_Entry_Crafting = K2Node_DynamicCast_AsBP_Menu_Data_Entry_Crafting;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCraftingRecipeAssetReference_ReturnValue = CallFunc_GetCraftingRecipeAssetReference_ReturnValue;
	Parms.CallFunc_GetCraftingRecipeDescription_ReturnValue = CallFunc_GetCraftingRecipeDescription_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_DetailPane_Crafting.WBP_GuideBook_DetailPane_Crafting_C.ResetCosmetics
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntryCreatedStateTracker*CallFunc_GetStateTracker_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_DetailPane_Crafting_C::ResetCosmetics(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UNWXMenuDataEntryCreatedStateTracker* CallFunc_GetStateTracker_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Crafting_C", "ResetCosmetics");

	Params::UWBP_GuideBook_DetailPane_Crafting_C_ResetCosmetics_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetStateTracker_ReturnValue = CallFunc_GetStateTracker_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_DetailPane_Crafting.WBP_GuideBook_DetailPane_Crafting_C.GetBUCrudeCraftingToolTip
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class UWBP_GenericTooltip_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_GenericTooltip_C*       CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_GenericTooltip_C*       CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_1                                             (ConstParm)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanOwnerCraft_Result                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUnlocked_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_2                                             (ConstParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_GuideBook_DetailPane_Crafting_C::GetBUCrudeCraftingToolTip(class FText Temp_text_Variable, class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue, class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue_1, class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue_2, class FText Temp_text_Variable_1, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_CanOwnerCraft_Result, bool CallFunc_IsUnlocked_ReturnValue, class FText Temp_text_Variable_2, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Crafting_C", "GetBUCrudeCraftingToolTip");

	Params::UWBP_GuideBook_DetailPane_Crafting_C_GetBUCrudeCraftingToolTip_Params Parms{};

	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.CallFunc_CanOwnerCraft_Result = CallFunc_CanOwnerCraft_Result;
	Parms.CallFunc_IsUnlocked_ReturnValue = CallFunc_IsUnlocked_ReturnValue;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_GuideBook_DetailPane_Crafting.WBP_GuideBook_DetailPane_Crafting_C.SetupSlots
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_MenuDataEntry_Crafting_C*CraftingEntry                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             LSlotPadding                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FCraftingConstraintSlot>LRecipeSlots                                                     (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              LMaxNumSlots                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_GenericItemConstraintSlot_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_GenericItemConstraintSlot_C*CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue_1                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUnlocked_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipe             CallFunc_GetCraftingRecipeData_ReturnValue                       (ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingConstraintSlot     CallFunc_Array_Get_Item                                          (ContainsInstancedReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetItemsMatchingConstraint_IsConstraintSatisfied        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GetItemsMatchingConstraint_ItemEntries                  (ReferenceParm)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetItemConstraintQuantityRequired_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemConstraintPresentationDataCallFunc_GetItemConstraintUIData_OutPresentationData             (None)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_Left_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Option_1_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_DetailPane_Crafting_C::SetupSlots(class UBP_MenuDataEntry_Crafting_C* CraftingEntry, double LSlotPadding, const TArray<struct FCraftingConstraintSlot>& LRecipeSlots, int32 LMaxNumSlots, int32 Temp_int_Variable, bool Temp_bool_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, float Temp_real_Variable, bool CallFunc_Greater_IntInt_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, class UWBP_GenericItemConstraintSlot_C* CallFunc_Create_ReturnValue, class UWBP_GenericItemConstraintSlot_C* CallFunc_Create_ReturnValue_1, const struct FMargin& K2Node_MakeStruct_Margin, float K2Node_Select_Default, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FMargin& K2Node_MakeStruct_Margin_1, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_1, bool CallFunc_IsUnlocked_ReturnValue, const struct FCraftingRecipe& CallFunc_GetCraftingRecipeData_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FCraftingConstraintSlot& CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GetItemsMatchingConstraint_IsConstraintSatisfied, TArray<struct FInventoryEntry>& CallFunc_GetItemsMatchingConstraint_ItemEntries, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_GetItemConstraintQuantityRequired_ReturnValue, const struct FItemConstraintPresentationData& CallFunc_GetItemConstraintUIData_OutPresentationData, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, float K2Node_MakeStruct_Left_ImplicitCast, float K2Node_Select_Option_1_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Crafting_C", "SetupSlots");

	Params::UWBP_GuideBook_DetailPane_Crafting_C_SetupSlots_Params Parms{};

	Parms.CraftingEntry = CraftingEntry;
	Parms.LSlotPadding = LSlotPadding;
	Parms.LRecipeSlots = LRecipeSlots;
	Parms.LMaxNumSlots = LMaxNumSlots;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue_1 = CallFunc_GetOwningPlayerController_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_Margin_1 = K2Node_MakeStruct_Margin_1;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue_1 = CallFunc_AddChildToHorizontalBox_ReturnValue_1;
	Parms.CallFunc_IsUnlocked_ReturnValue = CallFunc_IsUnlocked_ReturnValue;
	Parms.CallFunc_GetCraftingRecipeData_ReturnValue = CallFunc_GetCraftingRecipeData_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetItemsMatchingConstraint_IsConstraintSatisfied = CallFunc_GetItemsMatchingConstraint_IsConstraintSatisfied;
	Parms.CallFunc_GetItemsMatchingConstraint_ItemEntries = CallFunc_GetItemsMatchingConstraint_ItemEntries;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_GetItemConstraintQuantityRequired_ReturnValue = CallFunc_GetItemConstraintQuantityRequired_ReturnValue;
	Parms.CallFunc_GetItemConstraintUIData_OutPresentationData = CallFunc_GetItemConstraintUIData_OutPresentationData;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_Left_ImplicitCast = K2Node_MakeStruct_Left_ImplicitCast;
	Parms.K2Node_Select_Option_1_ImplicitCast = K2Node_Select_Option_1_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_DetailPane_Crafting.WBP_GuideBook_DetailPane_Crafting_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_GuideBook_DetailPane_Crafting_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Crafting_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GuideBook_DetailPane_Crafting.WBP_GuideBook_DetailPane_Crafting_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_GuideBook_DetailPane_Crafting_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Crafting_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GuideBook_DetailPane_Crafting.WBP_GuideBook_DetailPane_Crafting_C.BndEvt__WBP_GuideBook_DetailPane_Crafting_CBU_Track_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_DetailPane_Crafting_C::BndEvt__WBP_GuideBook_DetailPane_Crafting_CBU_Track_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Crafting_C", "BndEvt__WBP_GuideBook_DetailPane_Crafting_CBU_Track_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_GuideBook_DetailPane_Crafting_C_BndEvt__WBP_GuideBook_DetailPane_Crafting_CBU_Track_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_DetailPane_Crafting.WBP_GuideBook_DetailPane_Crafting_C.BndEvt__WBP_GuideBook_DetailPane_Crafting_CBU_Untrack_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_DetailPane_Crafting_C::BndEvt__WBP_GuideBook_DetailPane_Crafting_CBU_Untrack_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Crafting_C", "BndEvt__WBP_GuideBook_DetailPane_Crafting_CBU_Untrack_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_GuideBook_DetailPane_Crafting_C_BndEvt__WBP_GuideBook_DetailPane_Crafting_CBU_Untrack_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_DetailPane_Crafting.WBP_GuideBook_DetailPane_Crafting_C.BndEvt__WBP_GuideBook_DetailPane_Crafting_CBU_Notes_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_DetailPane_Crafting_C::BndEvt__WBP_GuideBook_DetailPane_Crafting_CBU_Notes_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Crafting_C", "BndEvt__WBP_GuideBook_DetailPane_Crafting_CBU_Notes_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_GuideBook_DetailPane_Crafting_C_BndEvt__WBP_GuideBook_DetailPane_Crafting_CBU_Notes_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_DetailPane_Crafting.WBP_GuideBook_DetailPane_Crafting_C.BndEvt__WBP_GuideBook_DetailPane_Crafting_CBU_Info_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_DetailPane_Crafting_C::BndEvt__WBP_GuideBook_DetailPane_Crafting_CBU_Info_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Crafting_C", "BndEvt__WBP_GuideBook_DetailPane_Crafting_CBU_Info_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_GuideBook_DetailPane_Crafting_C_BndEvt__WBP_GuideBook_DetailPane_Crafting_CBU_Info_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_DetailPane_Crafting.WBP_GuideBook_DetailPane_Crafting_C.BndEvt__WBP_GuideBook_DetailPane_Crafting_CBU_QuickCraft_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_DetailPane_Crafting_C::BndEvt__WBP_GuideBook_DetailPane_Crafting_CBU_QuickCraft_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Crafting_C", "BndEvt__WBP_GuideBook_DetailPane_Crafting_CBU_QuickCraft_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_GuideBook_DetailPane_Crafting_C_BndEvt__WBP_GuideBook_DetailPane_Crafting_CBU_QuickCraft_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_DetailPane_Crafting.WBP_GuideBook_DetailPane_Crafting_C.BndEvt__WBP_GuideBook_DetailPane_Crafting_CBU_QuickCraft_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_DetailPane_Crafting_C::BndEvt__WBP_GuideBook_DetailPane_Crafting_CBU_QuickCraft_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Crafting_C", "BndEvt__WBP_GuideBook_DetailPane_Crafting_CBU_QuickCraft_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_GuideBook_DetailPane_Crafting_C_BndEvt__WBP_GuideBook_DetailPane_Crafting_CBU_QuickCraft_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_DetailPane_Crafting.WBP_GuideBook_DetailPane_Crafting_C.ExecuteUbergraph_WBP_GuideBook_DetailPane_Crafting
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_InventoryComponent_C*    CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_5                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_4                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_3                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_DetailPane_Crafting_C::ExecuteUbergraph_WBP_GuideBook_DetailPane_Crafting(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class UBP_InventoryComponent_C* CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent, bool CallFunc_IsValid_ReturnValue_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_5, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_4, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_3, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Crafting_C", "ExecuteUbergraph_WBP_GuideBook_DetailPane_Crafting");

	Params::UWBP_GuideBook_DetailPane_Crafting_C_ExecuteUbergraph_WBP_GuideBook_DetailPane_Crafting_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent = CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Button_5 = K2Node_ComponentBoundEvent_Button_5;
	Parms.K2Node_ComponentBoundEvent_Button_4 = K2Node_ComponentBoundEvent_Button_4;
	Parms.K2Node_ComponentBoundEvent_Button_3 = K2Node_ComponentBoundEvent_Button_3;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}

}


