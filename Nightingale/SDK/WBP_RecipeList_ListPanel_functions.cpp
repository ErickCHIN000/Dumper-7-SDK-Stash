#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_RecipeList_ListPanel.WBP_RecipeList_ListPanel_C
// (None)

class UClass* UWBP_RecipeList_ListPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_RecipeList_ListPanel_C");

	return Clss;
}


// WBP_RecipeList_ListPanel_C WBP_RecipeList_ListPanel.Default__WBP_RecipeList_ListPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_RecipeList_ListPanel_C* UWBP_RecipeList_ListPanel_C::GetDefaultObj()
{
	static class UWBP_RecipeList_ListPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_RecipeList_ListPanel_C*>(UWBP_RecipeList_ListPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_RecipeList_ListPanel.WBP_RecipeList_ListPanel_C.CREATEDELEGATE_PROXYFUNCTION_3
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_RecipeList_ListPanel_C::CREATEDELEGATE_PROXYFUNCTION_3(struct FInventoryEntry& InventoryEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RecipeList_ListPanel_C", "CREATEDELEGATE_PROXYFUNCTION_3");

	Params::UWBP_RecipeList_ListPanel_C_CREATEDELEGATE_PROXYFUNCTION_3_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RecipeList_ListPanel.WBP_RecipeList_ListPanel_C.CREATEDELEGATE_PROXYFUNCTION_2
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_RecipeList_ListPanel_C::CREATEDELEGATE_PROXYFUNCTION_2(struct FInventoryEntry& InventoryEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RecipeList_ListPanel_C", "CREATEDELEGATE_PROXYFUNCTION_2");

	Params::UWBP_RecipeList_ListPanel_C_CREATEDELEGATE_PROXYFUNCTION_2_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RecipeList_ListPanel.WBP_RecipeList_ListPanel_C.CREATEDELEGATE_PROXYFUNCTION_1
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_RecipeList_ListPanel_C::CREATEDELEGATE_PROXYFUNCTION_1(struct FInventoryEntry& InventoryEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RecipeList_ListPanel_C", "CREATEDELEGATE_PROXYFUNCTION_1");

	Params::UWBP_RecipeList_ListPanel_C_CREATEDELEGATE_PROXYFUNCTION_1_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RecipeList_ListPanel.WBP_RecipeList_ListPanel_C.CREATEDELEGATE_PROXYFUNCTION_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_RecipeList_ListPanel_C::CREATEDELEGATE_PROXYFUNCTION_0(struct FInventoryEntry& InventoryEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RecipeList_ListPanel_C", "CREATEDELEGATE_PROXYFUNCTION_0");

	Params::UWBP_RecipeList_ListPanel_C_CREATEDELEGATE_PROXYFUNCTION_0_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RecipeList_ListPanel.WBP_RecipeList_ListPanel_C.OnItemEntryDoubleClicked
// (Private, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FInventoryEntry             ItemEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UBP_CraftingCreationComponent_C*CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntry*           CallFunc_GetEntryWithID_Entry                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_RecipeList_ListPanel_C::OnItemEntryDoubleClicked(const struct FInventoryEntry& ItemEntry, class UBP_CraftingCreationComponent_C* CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent, class UNWXMenuDataEntry* CallFunc_GetEntryWithID_Entry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RecipeList_ListPanel_C", "OnItemEntryDoubleClicked");

	Params::UWBP_RecipeList_ListPanel_C_OnItemEntryDoubleClicked_Params Parms{};

	Parms.ItemEntry = ItemEntry;
	Parms.CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent = CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent;
	Parms.CallFunc_GetEntryWithID_Entry = CallFunc_GetEntryWithID_Entry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RecipeList_ListPanel.WBP_RecipeList_ListPanel_C.DisplayEntries
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   LThumbScale                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   LItemScale                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CraftingCreationComponent_C*CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ECraftingScreenState    CallFunc_GetCraftingScreenState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RecipeList_ListPanel_C::DisplayEntries(const struct FVector2D& LThumbScale, const struct FVector2D& LItemScale, class UBP_CraftingCreationComponent_C* CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent, enum class ECraftingScreenState CallFunc_GetCraftingScreenState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RecipeList_ListPanel_C", "DisplayEntries");

	Params::UWBP_RecipeList_ListPanel_C_DisplayEntries_Params Parms{};

	Parms.LThumbScale = LThumbScale;
	Parms.LItemScale = LItemScale;
	Parms.CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent = CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent;
	Parms.CallFunc_GetCraftingScreenState_ReturnValue = CallFunc_GetCraftingScreenState_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RecipeList_ListPanel.WBP_RecipeList_ListPanel_C.GetEntryWithID
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGuid                       ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntry*           Entry                                                            (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntry*           MenuDataEntry                                                    (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CraftingCreationComponent_C*CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetCurrentCategoryTag_ReturnValue                       (ConstParm, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntry*           CallFunc_FindEntryWithIDFromCategory_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_RecipeList_ListPanel_C::GetEntryWithID(const struct FGuid& ID, class UNWXMenuDataEntry** Entry, class UNWXMenuDataEntry* MenuDataEntry, bool CallFunc_IsValid_ReturnValue, class UBP_CraftingCreationComponent_C* CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent, const struct FGameplayTag& CallFunc_GetCurrentCategoryTag_ReturnValue, class UNWXMenuDataEntry* CallFunc_FindEntryWithIDFromCategory_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RecipeList_ListPanel_C", "GetEntryWithID");

	Params::UWBP_RecipeList_ListPanel_C_GetEntryWithID_Params Parms{};

	Parms.ID = ID;
	Parms.MenuDataEntry = MenuDataEntry;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent = CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent;
	Parms.CallFunc_GetCurrentCategoryTag_ReturnValue = CallFunc_GetCurrentCategoryTag_ReturnValue;
	Parms.CallFunc_FindEntryWithIDFromCategory_ReturnValue = CallFunc_FindEntryWithIDFromCategory_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Entry != nullptr)
		*Entry = Parms.Entry;

}


// Function WBP_RecipeList_ListPanel.WBP_RecipeList_ListPanel_C.GetForwardArrowStartTime
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// double                             StartTime                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_StartTime_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RecipeList_ListPanel_C::GetForwardArrowStartTime(double* StartTime, float CallFunc_GetAnimationCurrentTime_ReturnValue, double K2Node_FunctionResult_StartTime_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RecipeList_ListPanel_C", "GetForwardArrowStartTime");

	Params::UWBP_RecipeList_ListPanel_C_GetForwardArrowStartTime_Params Parms{};

	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue = CallFunc_GetAnimationCurrentTime_ReturnValue;
	Parms.K2Node_FunctionResult_StartTime_ImplicitCast = K2Node_FunctionResult_StartTime_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (StartTime != nullptr)
		*StartTime = Parms.StartTime;

}


// Function WBP_RecipeList_ListPanel.WBP_RecipeList_ListPanel_C.GetReverseArrowStartTime
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// double                             StartTime                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RecipeList_ListPanel_C::GetReverseArrowStartTime(double* StartTime, float CallFunc_GetAnimationCurrentTime_ReturnValue, float CallFunc_GetEndTime_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RecipeList_ListPanel_C", "GetReverseArrowStartTime");

	Params::UWBP_RecipeList_ListPanel_C_GetReverseArrowStartTime_Params Parms{};

	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue = CallFunc_GetAnimationCurrentTime_ReturnValue;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_B_ImplicitCast = CallFunc_Subtract_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast = CallFunc_Subtract_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (StartTime != nullptr)
		*StartTime = Parms.StartTime;

}


// Function WBP_RecipeList_ListPanel.WBP_RecipeList_ListPanel_C.PopulateGrid
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   EntryScale                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTileView*                   LTileView                                                        (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UListView*                   K2Node_DynamicCast_AsList_View                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue_1                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UTileView*                   K2Node_DynamicCast_AsTile_View                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetEntryWidth_NewWidth_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetEntryHeight_NewHeight_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RecipeList_ListPanel_C::PopulateGrid(const struct FVector2D& EntryScale, class UTileView* LTileView, class UWidget* CallFunc_GetActiveWidget_ReturnValue, class UListView* K2Node_DynamicCast_AsList_View, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetActiveWidget_ReturnValue_1, class UTileView* K2Node_DynamicCast_AsTile_View, bool K2Node_DynamicCast_bSuccess_1, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, float CallFunc_SetEntryWidth_NewWidth_ImplicitCast, float CallFunc_SetEntryHeight_NewHeight_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RecipeList_ListPanel_C", "PopulateGrid");

	Params::UWBP_RecipeList_ListPanel_C_PopulateGrid_Params Parms{};

	Parms.EntryScale = EntryScale;
	Parms.LTileView = LTileView;
	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsList_View = K2Node_DynamicCast_AsList_View;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetActiveWidget_ReturnValue_1 = CallFunc_GetActiveWidget_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsTile_View = K2Node_DynamicCast_AsTile_View;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_SetEntryWidth_NewWidth_ImplicitCast = CallFunc_SetEntryWidth_NewWidth_ImplicitCast;
	Parms.CallFunc_SetEntryHeight_NewHeight_ImplicitCast = CallFunc_SetEntryHeight_NewHeight_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RecipeList_ListPanel.WBP_RecipeList_ListPanel_C.OnItemEntrySelected
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CallFunc_IsOwningPlayerUsingGamepad_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CraftingCreationComponent_C*CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntry*           CallFunc_GetEntryWithID_Entry                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_CraftingCreationComponent_C*CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent_1(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntry*           CallFunc_GetEntryWithID_Entry_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_RecipeList_ListPanel_C::OnItemEntrySelected(const struct FInventoryEntry& InventoryEntry, bool CallFunc_IsOwningPlayerUsingGamepad_ReturnValue, class UBP_CraftingCreationComponent_C* CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent, class UNWXMenuDataEntry* CallFunc_GetEntryWithID_Entry, class UBP_CraftingCreationComponent_C* CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent_1, class UNWXMenuDataEntry* CallFunc_GetEntryWithID_Entry_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RecipeList_ListPanel_C", "OnItemEntrySelected");

	Params::UWBP_RecipeList_ListPanel_C_OnItemEntrySelected_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;
	Parms.CallFunc_IsOwningPlayerUsingGamepad_ReturnValue = CallFunc_IsOwningPlayerUsingGamepad_ReturnValue;
	Parms.CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent = CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent;
	Parms.CallFunc_GetEntryWithID_Entry = CallFunc_GetEntryWithID_Entry;
	Parms.CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent_1 = CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent_1;
	Parms.CallFunc_GetEntryWithID_Entry_1 = CallFunc_GetEntryWithID_Entry_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RecipeList_ListPanel.WBP_RecipeList_ListPanel_C.OnItemEntryFocusRemoved
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CallFunc_IsOwningPlayerUsingGamepad_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CraftingCreationComponent_C*CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntry*           CallFunc_GetEntryWithID_Entry                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_RecipeList_ListPanel_C::OnItemEntryFocusRemoved(const struct FInventoryEntry& InventoryEntry, bool CallFunc_IsOwningPlayerUsingGamepad_ReturnValue, class UBP_CraftingCreationComponent_C* CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent, class UNWXMenuDataEntry* CallFunc_GetEntryWithID_Entry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RecipeList_ListPanel_C", "OnItemEntryFocusRemoved");

	Params::UWBP_RecipeList_ListPanel_C_OnItemEntryFocusRemoved_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;
	Parms.CallFunc_IsOwningPlayerUsingGamepad_ReturnValue = CallFunc_IsOwningPlayerUsingGamepad_ReturnValue;
	Parms.CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent = CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent;
	Parms.CallFunc_GetEntryWithID_Entry = CallFunc_GetEntryWithID_Entry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RecipeList_ListPanel.WBP_RecipeList_ListPanel_C.OnItemEntryFocusReceived
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CallFunc_IsOwningPlayerUsingGamepad_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CraftingCreationComponent_C*CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntry*           CallFunc_GetEntryWithID_Entry                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_RecipeList_ListPanel_C::OnItemEntryFocusReceived(const struct FInventoryEntry& InventoryEntry, bool CallFunc_IsOwningPlayerUsingGamepad_ReturnValue, class UBP_CraftingCreationComponent_C* CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent, class UNWXMenuDataEntry* CallFunc_GetEntryWithID_Entry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RecipeList_ListPanel_C", "OnItemEntryFocusReceived");

	Params::UWBP_RecipeList_ListPanel_C_OnItemEntryFocusReceived_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;
	Parms.CallFunc_IsOwningPlayerUsingGamepad_ReturnValue = CallFunc_IsOwningPlayerUsingGamepad_ReturnValue;
	Parms.CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent = CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent;
	Parms.CallFunc_GetEntryWithID_Entry = CallFunc_GetEntryWithID_Entry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RecipeList_ListPanel.WBP_RecipeList_ListPanel_C.OnItemEntryHovered
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HoverOn                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             ItemEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UBP_CraftingCreationComponent_C*CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntry*           CallFunc_GetEntryWithID_Entry                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_RecipeList_ListPanel_C::OnItemEntryHovered(bool HoverOn, const struct FInventoryEntry& ItemEntry, class UBP_CraftingCreationComponent_C* CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent, class UNWXMenuDataEntry* CallFunc_GetEntryWithID_Entry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RecipeList_ListPanel_C", "OnItemEntryHovered");

	Params::UWBP_RecipeList_ListPanel_C_OnItemEntryHovered_Params Parms{};

	Parms.HoverOn = HoverOn;
	Parms.ItemEntry = ItemEntry;
	Parms.CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent = CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent;
	Parms.CallFunc_GetEntryWithID_Entry = CallFunc_GetEntryWithID_Entry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RecipeList_ListPanel.WBP_RecipeList_ListPanel_C.OnItemWidgetReleased
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_sw_GridEntryItem_C*     K2Node_DynamicCast_AsWBP_Sw_Grid_Entry_Item                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_RecipeList_ListPanel_C::OnItemWidgetReleased(class UUserWidget* Widget, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWBP_sw_GridEntryItem_C* K2Node_DynamicCast_AsWBP_Sw_Grid_Entry_Item, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RecipeList_ListPanel_C", "OnItemWidgetReleased");

	Params::UWBP_RecipeList_ListPanel_C_OnItemWidgetReleased_Params Parms{};

	Parms.Widget = Widget;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsWBP_Sw_Grid_Entry_Item = K2Node_DynamicCast_AsWBP_Sw_Grid_Entry_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RecipeList_ListPanel.WBP_RecipeList_ListPanel_C.OnItemWidgetGenerated
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_sw_GridEntryItem_C*     K2Node_DynamicCast_AsWBP_Sw_Grid_Entry_Item                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_RecipeList_ListPanel_C::OnItemWidgetGenerated(class UUserWidget* Widget, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWBP_sw_GridEntryItem_C* K2Node_DynamicCast_AsWBP_Sw_Grid_Entry_Item, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RecipeList_ListPanel_C", "OnItemWidgetGenerated");

	Params::UWBP_RecipeList_ListPanel_C_OnItemWidgetGenerated_Params Parms{};

	Parms.Widget = Widget;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsWBP_Sw_Grid_Entry_Item = K2Node_DynamicCast_AsWBP_Sw_Grid_Entry_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RecipeList_ListPanel.WBP_RecipeList_ListPanel_C.UnbindFromItemGridEvents
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_RecipeList_ListPanel_C::UnbindFromItemGridEvents(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RecipeList_ListPanel_C", "UnbindFromItemGridEvents");

	Params::UWBP_RecipeList_ListPanel_C_UnbindFromItemGridEvents_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RecipeList_ListPanel.WBP_RecipeList_ListPanel_C.BindToItemGridEvents
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_RecipeList_ListPanel_C::BindToItemGridEvents(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RecipeList_ListPanel_C", "BindToItemGridEvents");

	Params::UWBP_RecipeList_ListPanel_C_BindToItemGridEvents_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RecipeList_ListPanel.WBP_RecipeList_ListPanel_C.PlayArrowAnimation
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsOpening                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetForwardArrowStartTime_StartTime                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetReverseArrowStartTime_StartTime                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Option_1_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Option_0_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RecipeList_ListPanel_C::PlayArrowAnimation(bool IsOpening, bool Temp_bool_Variable, bool Temp_bool_Variable_1, float Temp_real_Variable, bool Temp_bool_Variable_2, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, enum class EUMGSequencePlayMode K2Node_Select_Default, double CallFunc_GetForwardArrowStartTime_StartTime, double CallFunc_GetReverseArrowStartTime_StartTime, float K2Node_Select_Default_1, bool CallFunc_IsAnimationPlaying_ReturnValue, float K2Node_Select_Default_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float K2Node_Select_Option_1_ImplicitCast, float K2Node_Select_Option_0_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RecipeList_ListPanel_C", "PlayArrowAnimation");

	Params::UWBP_RecipeList_ListPanel_C_PlayArrowAnimation_Params Parms{};

	Parms.IsOpening = IsOpening;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetForwardArrowStartTime_StartTime = CallFunc_GetForwardArrowStartTime_StartTime;
	Parms.CallFunc_GetReverseArrowStartTime_StartTime = CallFunc_GetReverseArrowStartTime_StartTime;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Select_Option_1_ImplicitCast = K2Node_Select_Option_1_ImplicitCast;
	Parms.K2Node_Select_Option_0_ImplicitCast = K2Node_Select_Option_0_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RecipeList_ListPanel.WBP_RecipeList_ListPanel_C.GetEntriesInPanel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UNWXMenuDataEntry*>   EntriesInPanel                                                   (Parm, OutParm)

void UWBP_RecipeList_ListPanel_C::GetEntriesInPanel(TArray<class UNWXMenuDataEntry*>* EntriesInPanel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RecipeList_ListPanel_C", "GetEntriesInPanel");

	Params::UWBP_RecipeList_ListPanel_C_GetEntriesInPanel_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EntriesInPanel != nullptr)
		*EntriesInPanel = std::move(Parms.EntriesInPanel);

}


// Function WBP_RecipeList_ListPanel.WBP_RecipeList_ListPanel_C.UpdatePanelEntryCounter
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UWBP_RecipeList_ListPanel_C::UpdatePanelEntryCounter(bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const struct FLinearColor& K2Node_Select_Default, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RecipeList_ListPanel_C", "UpdatePanelEntryCounter");

	Params::UWBP_RecipeList_ListPanel_C_UpdatePanelEntryCounter_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_1 = CallFunc_Conv_IntToInt64_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RecipeList_ListPanel.WBP_RecipeList_ListPanel_C.BndEvt__WBP_button_base_K2Node_ComponentBoundEvent_0_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_RecipeList_ListPanel_C::BndEvt__WBP_button_base_K2Node_ComponentBoundEvent_0_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RecipeList_ListPanel_C", "BndEvt__WBP_button_base_K2Node_ComponentBoundEvent_0_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RecipeList_ListPanel.WBP_RecipeList_ListPanel_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_RecipeList_ListPanel_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RecipeList_ListPanel_C", "BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RecipeList_ListPanel.WBP_RecipeList_ListPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_RecipeList_ListPanel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RecipeList_ListPanel_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RecipeList_ListPanel.WBP_RecipeList_ListPanel_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_RecipeList_ListPanel_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RecipeList_ListPanel_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RecipeList_ListPanel.WBP_RecipeList_ListPanel_C.ExecuteUbergraph_WBP_RecipeList_ListPanel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CraftingCreationComponent_C*CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ECraftingScreenState    CallFunc_GetCraftingScreenState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CraftingCreationComponent_C*CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent_1(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECraftingScreenState    CallFunc_GetCraftingScreenState_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RecipeList_ListPanel_C::ExecuteUbergraph_WBP_RecipeList_ListPanel(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UBP_CraftingCreationComponent_C* CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent, enum class ECraftingScreenState CallFunc_GetCraftingScreenState_ReturnValue, class UBP_CraftingCreationComponent_C* CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent_1, bool K2Node_SwitchEnum_CmpSuccess, enum class ECraftingScreenState CallFunc_GetCraftingScreenState_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, bool Temp_bool_Variable, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RecipeList_ListPanel_C", "ExecuteUbergraph_WBP_RecipeList_ListPanel");

	Params::UWBP_RecipeList_ListPanel_C_ExecuteUbergraph_WBP_RecipeList_ListPanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent = CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent;
	Parms.CallFunc_GetCraftingScreenState_ReturnValue = CallFunc_GetCraftingScreenState_ReturnValue;
	Parms.CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent_1 = CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetCraftingScreenState_ReturnValue_1 = CallFunc_GetCraftingScreenState_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.CallFunc_GetVisibility_ReturnValue_1 = CallFunc_GetVisibility_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


