#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CraftingCreation_Screen.WBP_CraftingCreation_Screen_C
// (None)

class UClass* UWBP_CraftingCreation_Screen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CraftingCreation_Screen_C");

	return Clss;
}


// WBP_CraftingCreation_Screen_C WBP_CraftingCreation_Screen.Default__WBP_CraftingCreation_Screen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CraftingCreation_Screen_C* UWBP_CraftingCreation_Screen_C::GetDefaultObj()
{
	static class UWBP_CraftingCreation_Screen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CraftingCreation_Screen_C*>(UWBP_CraftingCreation_Screen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CraftingCreation_Screen.WBP_CraftingCreation_Screen_C.DoCustomNavigation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_BP_GetDesiredFocusTarget_ReturnValue                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_CraftingCreation_Screen_C::DoCustomNavigation(enum class EUINavigation Navigation, bool K2Node_SwitchEnum_CmpSuccess, class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingCreation_Screen_C", "DoCustomNavigation");

	Params::UWBP_CraftingCreation_Screen_C_DoCustomNavigation_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_BP_GetDesiredFocusTarget_ReturnValue = CallFunc_BP_GetDesiredFocusTarget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_CraftingCreation_Screen.WBP_CraftingCreation_Screen_C.TriggerDrawerAudio
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsDrawerOpen                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 Temp_delegate_Variable_1                                         (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// class UAkComponent*                CallFunc_SpawnAkComponentAtLocation_ReturnValue                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostAkEvent_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_1                                           (ConstParm, ReferenceParm)
// int32                              CallFunc_PostAkEvent_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CraftingCreation_Screen_C::TriggerDrawerAudio(bool IsDrawerOpen, FDelegateProperty_ Temp_delegate_Variable, FDelegateProperty_ Temp_delegate_Variable_1, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, class UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_1, int32 CallFunc_PostAkEvent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingCreation_Screen_C", "TriggerDrawerAudio");

	Params::UWBP_CraftingCreation_Screen_C_TriggerDrawerAudio_Params Parms{};

	Parms.IsDrawerOpen = IsDrawerOpen;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.Temp_delegate_Variable_1 = Temp_delegate_Variable_1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_SpawnAkComponentAtLocation_ReturnValue = CallFunc_SpawnAkComponentAtLocation_ReturnValue;
	Parms.CallFunc_PostAkEvent_ReturnValue = CallFunc_PostAkEvent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_PostAkEvent_ReturnValue_1 = CallFunc_PostAkEvent_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CraftingCreation_Screen.WBP_CraftingCreation_Screen_C.UpdateOutputValues
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInventoryEntry>     CallFunc_GetSlottedIngredients_SlottedItems                      (ReferenceParm)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EGetResult              CallFunc_TryGenerateCraftingPreview_Branches                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_TryGenerateCraftingPreview_ReturnValue                  (ReferenceParm)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// float                              CallFunc_GetItemWeight_OutStackWeight                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetItemWeight_OutIndividualWeight                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CraftingCreation_Screen_C::UpdateOutputValues(TArray<struct FInventoryEntry>& CallFunc_GetSlottedIngredients_SlottedItems, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, enum class EGetResult CallFunc_TryGenerateCraftingPreview_Branches, TArray<struct FInventoryEntry>& CallFunc_TryGenerateCraftingPreview_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FInventoryEntry& CallFunc_Array_Get_Item, float CallFunc_GetItemWeight_OutStackWeight, float CallFunc_GetItemWeight_OutIndividualWeight, double CallFunc_Conv_IntToDouble_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_DoubleToText_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingCreation_Screen_C", "UpdateOutputValues");

	Params::UWBP_CraftingCreation_Screen_C_UpdateOutputValues_Params Parms{};

	Parms.CallFunc_GetSlottedIngredients_SlottedItems = CallFunc_GetSlottedIngredients_SlottedItems;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController = CallFunc_GetLocalPlayerController_LocalPlayerController;
	Parms.CallFunc_TryGenerateCraftingPreview_Branches = CallFunc_TryGenerateCraftingPreview_Branches;
	Parms.CallFunc_TryGenerateCraftingPreview_ReturnValue = CallFunc_TryGenerateCraftingPreview_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetItemWeight_OutStackWeight = CallFunc_GetItemWeight_OutStackWeight;
	Parms.CallFunc_GetItemWeight_OutIndividualWeight = CallFunc_GetItemWeight_OutIndividualWeight;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CraftingCreation_Screen.WBP_CraftingCreation_Screen_C.GetIsNavbarEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsIngredientListOpen_IsOpen                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_CraftingCreation_Screen_C::GetIsNavbarEnabled(bool CallFunc_IsIngredientListOpen_IsOpen, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingCreation_Screen_C", "GetIsNavbarEnabled");

	Params::UWBP_CraftingCreation_Screen_C_GetIsNavbarEnabled_Params Parms{};

	Parms.CallFunc_IsIngredientListOpen_IsOpen = CallFunc_IsIngredientListOpen_IsOpen;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_CraftingCreation_Screen.WBP_CraftingCreation_Screen_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_BP_GetDesiredFocusTarget_ReturnValue                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetDefaultFocusWidget_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class E_Crafting_MoldSteps    CallFunc_GetState_State                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_CraftingCreation_Screen_C::BP_GetDesiredFocusTarget(class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue, class UWidget* CallFunc_GetDefaultFocusWidget_ReturnValue, enum class E_Crafting_MoldSteps CallFunc_GetState_State, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingCreation_Screen_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_CraftingCreation_Screen_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_BP_GetDesiredFocusTarget_ReturnValue = CallFunc_BP_GetDesiredFocusTarget_ReturnValue;
	Parms.CallFunc_GetDefaultFocusWidget_ReturnValue = CallFunc_GetDefaultFocusWidget_ReturnValue;
	Parms.CallFunc_GetState_State = CallFunc_GetState_State;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_CraftingCreation_Screen.WBP_CraftingCreation_Screen_C.UpdateCraftButton
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXMenuDataEntryCrafting*   LCraftingEntry                                                   (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasFuelIfRequired_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GetSlottedIngredients_SlottedItems                      (ReferenceParm)
// struct FCraftingRecipeReference    CallFunc_GetCraftingRecipeAssetReference_ReturnValue             (ConstParm, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanCraftRecipe_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntryCrafting*   CallFunc_GetStateDependantCraftingEntry_ReturnValue              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_CraftingCreation_Screen_C::UpdateCraftButton(class UNWXMenuDataEntryCrafting* LCraftingEntry, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_HasFuelIfRequired_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_GetSlottedIngredients_SlottedItems, const struct FCraftingRecipeReference& CallFunc_GetCraftingRecipeAssetReference_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_CanCraftRecipe_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UNWXMenuDataEntryCrafting* CallFunc_GetStateDependantCraftingEntry_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingCreation_Screen_C", "UpdateCraftButton");

	Params::UWBP_CraftingCreation_Screen_C_UpdateCraftButton_Params Parms{};

	Parms.LCraftingEntry = LCraftingEntry;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_HasFuelIfRequired_ReturnValue = CallFunc_HasFuelIfRequired_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSlottedIngredients_SlottedItems = CallFunc_GetSlottedIngredients_SlottedItems;
	Parms.CallFunc_GetCraftingRecipeAssetReference_ReturnValue = CallFunc_GetCraftingRecipeAssetReference_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_CanCraftRecipe_ReturnValue = CallFunc_CanCraftRecipe_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetStateDependantCraftingEntry_ReturnValue = CallFunc_GetStateDependantCraftingEntry_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CraftingCreation_Screen.WBP_CraftingCreation_Screen_C.OnFuelItemsChanged
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInventoryEntry>     AppliedFuelItems                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsEmpty_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CraftingCreation_Screen_C::OnFuelItemsChanged(TArray<struct FInventoryEntry>& AppliedFuelItems, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_Array_IsEmpty_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingCreation_Screen_C", "OnFuelItemsChanged");

	Params::UWBP_CraftingCreation_Screen_C_OnFuelItemsChanged_Params Parms{};

	Parms.AppliedFuelItems = AppliedFuelItems;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_Array_IsEmpty_ReturnValue = CallFunc_Array_IsEmpty_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CraftingCreation_Screen.WBP_CraftingCreation_Screen_C.OnStationDestroyed
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DestroyedActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_CraftingCreation_Screen_C::OnStationDestroyed(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingCreation_Screen_C", "OnStationDestroyed");

	Params::UWBP_CraftingCreation_Screen_C_OnStationDestroyed_Params Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CraftingCreation_Screen.WBP_CraftingCreation_Screen_C.HasFuelIfRequired
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasFuelAvailable_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_CraftingCreation_Screen_C::HasFuelIfRequired(bool CallFunc_HasFuelAvailable_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingCreation_Screen_C", "HasFuelIfRequired");

	Params::UWBP_CraftingCreation_Screen_C_HasFuelIfRequired_Params Parms{};

	Parms.CallFunc_HasFuelAvailable_ReturnValue = CallFunc_HasFuelAvailable_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_CraftingCreation_Screen.WBP_CraftingCreation_Screen_C.OnStructureTraitsUpdated
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStructureTraitChangedContextTraitChangedContext                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UWBP_CraftingCreation_Screen_C::OnStructureTraitsUpdated(struct FStructureTraitChangedContext& TraitChangedContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingCreation_Screen_C", "OnStructureTraitsUpdated");

	Params::UWBP_CraftingCreation_Screen_C_OnStructureTraitsUpdated_Params Parms{};

	Parms.TraitChangedContext = TraitChangedContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CraftingCreation_Screen.WBP_CraftingCreation_Screen_C.UpdateDrawerToggleButtonText
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CraftingCreation_Screen_C::UpdateDrawerToggleButtonText(bool Temp_bool_Variable, class UWidget* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingCreation_Screen_C", "UpdateDrawerToggleButtonText");

	Params::UWBP_CraftingCreation_Screen_C_UpdateDrawerToggleButtonText_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CraftingCreation_Screen.WBP_CraftingCreation_Screen_C.UpdateDrawerExpansion
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               OpenDrawer                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CraftingCreation_Screen_C::UpdateDrawerExpansion(bool OpenDrawer, bool Temp_bool_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, enum class EUMGSequencePlayMode K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingCreation_Screen_C", "UpdateDrawerExpansion");

	Params::UWBP_CraftingCreation_Screen_C_UpdateDrawerExpansion_Params Parms{};

	Parms.OpenDrawer = OpenDrawer;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CraftingCreation_Screen.WBP_CraftingCreation_Screen_C.UpdateIngredientListShown
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Shown                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CraftingCreation_Screen_C::UpdateIngredientListShown(bool Shown, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingCreation_Screen_C", "UpdateIngredientListShown");

	Params::UWBP_CraftingCreation_Screen_C_UpdateIngredientListShown_Params Parms{};

	Parms.Shown = Shown;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CraftingCreation_Screen.WBP_CraftingCreation_Screen_C.FormatCraftingTimeText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CraftTimer                                                       (Parm, OutParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_1                                             (None)
// double                             CallFunc_Percent_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// double                             CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)
// double                             CallFunc_SafeDivide_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_1                         (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_3                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_3                                    (None)
// class FText                        K2Node_Select_Default_1                                          (None)
// class FText                        K2Node_Select_Default_2                                          (None)

void UWBP_CraftingCreation_Screen_C::FormatCraftingTimeText(double Value, class FText* CraftTimer, bool Temp_bool_Variable, class FText Temp_text_Variable, bool Temp_bool_Variable_1, class FText Temp_text_Variable_1, double CallFunc_Percent_FloatFloat_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, double CallFunc_Abs_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, class FText CallFunc_Format_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue, double CallFunc_SafeDivide_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_Conv_DoubleToText_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText CallFunc_Format_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, bool Temp_bool_Variable_2, class FText CallFunc_Format_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_3, class FText CallFunc_Format_ReturnValue_3, class FText K2Node_Select_Default_1, class FText K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingCreation_Screen_C", "FormatCraftingTimeText");

	Params::UWBP_CraftingCreation_Screen_C_FormatCraftingTimeText_Params Parms{};

	Parms.Value = Value;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_Percent_FloatFloat_ReturnValue = CallFunc_Percent_FloatFloat_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;
	Parms.CallFunc_SafeDivide_ReturnValue = CallFunc_SafeDivide_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue_1 = CallFunc_Conv_DoubleToText_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_Format_ReturnValue_3 = CallFunc_Format_ReturnValue_3;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

	if (CraftTimer != nullptr)
		*CraftTimer = Parms.CraftTimer;

}


// Function WBP_CraftingCreation_Screen.WBP_CraftingCreation_Screen_C.UpdateCraftTime
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             LTimeReq                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             LDeltaTimeReq                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetRecipeTimeRequired_outTimeRequired                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetRecipeTimeRequired_outDeltaTime                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_FormatCraftingTimeText_CraftTimer                       (None)

void UWBP_CraftingCreation_Screen_C::UpdateCraftTime(double LTimeReq, double LDeltaTimeReq, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default, int32 CallFunc_Max_ReturnValue, double CallFunc_GetRecipeTimeRequired_outTimeRequired, double CallFunc_GetRecipeTimeRequired_outDeltaTime, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, class FText CallFunc_FormatCraftingTimeText_CraftTimer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingCreation_Screen_C", "UpdateCraftTime");

	Params::UWBP_CraftingCreation_Screen_C_UpdateCraftTime_Params Parms{};

	Parms.LTimeReq = LTimeReq;
	Parms.LDeltaTimeReq = LDeltaTimeReq;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_SelectColor_ReturnValue_1 = CallFunc_SelectColor_ReturnValue_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_2 = CallFunc_Greater_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_SelectColor_ReturnValue_2 = CallFunc_SelectColor_ReturnValue_2;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_GetRecipeTimeRequired_outTimeRequired = CallFunc_GetRecipeTimeRequired_outTimeRequired;
	Parms.CallFunc_GetRecipeTimeRequired_outDeltaTime = CallFunc_GetRecipeTimeRequired_outDeltaTime;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue_1 = CallFunc_EqualEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_FormatCraftingTimeText_CraftTimer = CallFunc_FormatCraftingTimeText_CraftTimer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CraftingCreation_Screen.WBP_CraftingCreation_Screen_C.CancelCrafting
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      K2Node_DynamicCast_AsBP_Player_Controller                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CraftingCreation_Screen_C::CancelCrafting(class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingCreation_Screen_C", "CancelCrafting");

	Params::UWBP_CraftingCreation_Screen_C_CancelCrafting_Params Parms{};

	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_Controller = K2Node_DynamicCast_AsBP_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CraftingCreation_Screen.WBP_CraftingCreation_Screen_C.OnFireStateChanged
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ActivelyConsumed                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CraftingCreation_Screen_C::OnFireStateChanged(bool ActivelyConsumed, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingCreation_Screen_C", "OnFireStateChanged");

	Params::UWBP_CraftingCreation_Screen_C_OnFireStateChanged_Params Parms{};

	Parms.ActivelyConsumed = ActivelyConsumed;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CraftingCreation_Screen.WBP_CraftingCreation_Screen_C.OnDataUpdated
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               LHasOngoingCraft                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasFuelIfRequired_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFireLitIfRequired_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentCraftData_Success                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Crafting_CraftInProgress CallFunc_GetCurrentCraftData_ReturnValue                         (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CraftingCreation_Screen_C::OnDataUpdated(bool LHasOngoingCraft, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_HasFuelIfRequired_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsFireLitIfRequired_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, int32 K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, bool CallFunc_GetCurrentCraftData_Success, const struct FS_Crafting_CraftInProgress& CallFunc_GetCurrentCraftData_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingCreation_Screen_C", "OnDataUpdated");

	Params::UWBP_CraftingCreation_Screen_C_OnDataUpdated_Params Parms{};

	Parms.LHasOngoingCraft = LHasOngoingCraft;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_HasFuelIfRequired_ReturnValue = CallFunc_HasFuelIfRequired_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsFireLitIfRequired_ReturnValue = CallFunc_IsFireLitIfRequired_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetCurrentCraftData_Success = CallFunc_GetCurrentCraftData_Success;
	Parms.CallFunc_GetCurrentCraftData_ReturnValue = CallFunc_GetCurrentCraftData_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CraftingCreation_Screen.WBP_CraftingCreation_Screen_C.IsFireLitIfRequired
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDrainingFuel_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_CraftingCreation_Screen_C::IsFireLitIfRequired(bool CallFunc_IsDrainingFuel_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingCreation_Screen_C", "IsFireLitIfRequired");

	Params::UWBP_CraftingCreation_Screen_C_IsFireLitIfRequired_Params Parms{};

	Parms.CallFunc_IsDrainingFuel_ReturnValue = CallFunc_IsDrainingFuel_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_CraftingCreation_Screen.WBP_CraftingCreation_Screen_C.OnUsingGamepadChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_Crafting_MoldSteps    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_Crafting_MoldSteps    CallFunc_GetState_State                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNWXUserWidget*              K2Node_DynamicCast_AsNWXUser_Widget                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CraftingCreation_Screen_C::OnUsingGamepadChanged(bool bUsingGamepad, enum class E_Crafting_MoldSteps Temp_byte_Variable, enum class E_Crafting_MoldSteps CallFunc_GetState_State, class UWidget* K2Node_Select_Default, class UNWXUserWidget* K2Node_DynamicCast_AsNWXUser_Widget, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingCreation_Screen_C", "OnUsingGamepadChanged");

	Params::UWBP_CraftingCreation_Screen_C_OnUsingGamepadChanged_Params Parms{};

	Parms.bUsingGamepad = bUsingGamepad;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetState_State = CallFunc_GetState_State;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_DynamicCast_AsNWXUser_Widget = K2Node_DynamicCast_AsNWXUser_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CraftingCreation_Screen.WBP_CraftingCreation_Screen_C.OnRecipeSelectedAnimationFinished
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CraftingCreation_Screen_C::OnRecipeSelectedAnimationFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingCreation_Screen_C", "OnRecipeSelectedAnimationFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CraftingCreation_Screen.WBP_CraftingCreation_Screen_C.SelectRecipeFromGuideBook
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCraftingRecipeReference    ActiveRecipeID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetID_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_CraftingCreationCategoryTag_ReturnValue                 (NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntry*           CallFunc_FindEntryWithIDFromCategory_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CraftingCreation_Screen_C::SelectRecipeFromGuideBook(const struct FCraftingRecipeReference& ActiveRecipeID, bool CallFunc_IsValid_ReturnValue, const struct FGuid& CallFunc_GetID_ReturnValue, const struct FGameplayTag& CallFunc_CraftingCreationCategoryTag_ReturnValue, class UNWXMenuDataEntry* CallFunc_FindEntryWithIDFromCategory_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingCreation_Screen_C", "SelectRecipeFromGuideBook");

	Params::UWBP_CraftingCreation_Screen_C_SelectRecipeFromGuideBook_Params Parms{};

	Parms.ActiveRecipeID = ActiveRecipeID;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetID_ReturnValue = CallFunc_GetID_ReturnValue;
	Parms.CallFunc_CraftingCreationCategoryTag_ReturnValue = CallFunc_CraftingCreationCategoryTag_ReturnValue;
	Parms.CallFunc_FindEntryWithIDFromCategory_ReturnValue = CallFunc_FindEntryWithIDFromCategory_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CraftingCreation_Screen.WBP_CraftingCreation_Screen_C.AreEntriesEqual
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UNWXMenuDataEntry*           Entry1                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntry*           Entry2                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsEqual                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetID_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetID_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GuidGuid_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CraftingCreation_Screen_C::AreEntriesEqual(class UNWXMenuDataEntry* Entry1, class UNWXMenuDataEntry* Entry2, bool* IsEqual, bool CallFunc_IsValid_ReturnValue, const struct FGuid& CallFunc_GetID_ReturnValue, const struct FGuid& CallFunc_GetID_ReturnValue_1, bool CallFunc_EqualEqual_GuidGuid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingCreation_Screen_C", "AreEntriesEqual");

	Params::UWBP_CraftingCreation_Screen_C_AreEntriesEqual_Params Parms{};

	Parms.Entry1 = Entry1;
	Parms.Entry2 = Entry2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetID_ReturnValue = CallFunc_GetID_ReturnValue;
	Parms.CallFunc_GetID_ReturnValue_1 = CallFunc_GetID_ReturnValue_1;
	Parms.CallFunc_EqualEqual_GuidGuid_ReturnValue = CallFunc_EqualEqual_GuidGuid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (IsEqual != nullptr)
		*IsEqual = Parms.IsEqual;

}


// Function WBP_CraftingCreation_Screen.WBP_CraftingCreation_Screen_C.OnMoldUpdated
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXMenuDataEntryCrafting*   LCraftingEntry                                                   (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               LCanCraftRecipe                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CraftingCreation_Screen_C::OnMoldUpdated(class UNWXMenuDataEntryCrafting* LCraftingEntry, bool LCanCraftRecipe)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingCreation_Screen_C", "OnMoldUpdated");

	Params::UWBP_CraftingCreation_Screen_C_OnMoldUpdated_Params Parms{};

	Parms.LCraftingEntry = LCraftingEntry;
	Parms.LCanCraftRecipe = LCanCraftRecipe;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CraftingCreation_Screen.WBP_CraftingCreation_Screen_C.GetDefaultFocusWidget
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class E_Crafting_MoldSteps    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_Crafting_MoldSteps    CallFunc_GetState_State                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_CraftingCreation_Screen_C::GetDefaultFocusWidget(enum class E_Crafting_MoldSteps Temp_byte_Variable, enum class E_Crafting_MoldSteps CallFunc_GetState_State, class UWidget* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingCreation_Screen_C", "GetDefaultFocusWidget");

	Params::UWBP_CraftingCreation_Screen_C_GetDefaultFocusWidget_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetState_State = CallFunc_GetState_State;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_CraftingCreation_Screen.WBP_CraftingCreation_Screen_C.UpdateDisplayedEntry
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXMenuDataEntry*           Entry                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntryCrafting*   K2Node_DynamicCast_AsNWXMenu_Data_Entry_Crafting                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CraftingCreation_Screen_C::UpdateDisplayedEntry(class UNWXMenuDataEntry* Entry, class UNWXMenuDataEntryCrafting* K2Node_DynamicCast_AsNWXMenu_Data_Entry_Crafting, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingCreation_Screen_C", "UpdateDisplayedEntry");

	Params::UWBP_CraftingCreation_Screen_C_UpdateDisplayedEntry_Params Parms{};

	Parms.Entry = Entry;
	Parms.K2Node_DynamicCast_AsNWXMenu_Data_Entry_Crafting = K2Node_DynamicCast_AsNWXMenu_Data_Entry_Crafting;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CraftingCreation_Screen.WBP_CraftingCreation_Screen_C.OnItemAddedOrRemoved
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IItemContainer>Source                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FInventoryEntry             Item                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              Quantity                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CraftingCreation_Screen_C::OnItemAddedOrRemoved(TScriptInterface<class IItemContainer>& Source, struct FInventoryEntry& Item, int32 Quantity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingCreation_Screen_C", "OnItemAddedOrRemoved");

	Params::UWBP_CraftingCreation_Screen_C_OnItemAddedOrRemoved_Params Parms{};

	Parms.Source = Source;
	Parms.Item = Item;
	Parms.Quantity = Quantity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CraftingCreation_Screen.WBP_CraftingCreation_Screen_C.OnEntrySelected
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXMenuDataEntry*           SelectedEntry                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CraftingCreation_Screen_C::OnEntrySelected(class UNWXMenuDataEntry* SelectedEntry, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingCreation_Screen_C", "OnEntrySelected");

	Params::UWBP_CraftingCreation_Screen_C_OnEntrySelected_Params Parms{};

	Parms.SelectedEntry = SelectedEntry;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CraftingCreation_Screen.WBP_CraftingCreation_Screen_C.RemoveBindings
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXPlayerController*        CallFunc_GetNWXPlayerController_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_CraftingComponent_C*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class INWXFuelableObserverInterface>CallFunc_UnbindDelegate_OnAppliedFuelItemsChanged_self_CastInput (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class INWXFuelableObserverInterface>CallFunc_UnbindDelegate_OnFuelActivelyConsumedChanged_self_CastInput(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureTraitInterface>K2Node_DynamicCast_AsStructure_Trait_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureTraitComponent*    CallFunc_GetStructureTraitComponent_ReturnValue                  (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_InventoryComponent_C*    CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetBackpack_Container                                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetBackpack_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CraftingCreation_Screen_C::RemoveBindings(class ANWXPlayerController* CallFunc_GetNWXPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UBP_CraftingComponent_C* CallFunc_GetComponentByClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class INWXFuelableObserverInterface> CallFunc_UnbindDelegate_OnAppliedFuelItemsChanged_self_CastInput, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, TScriptInterface<class INWXFuelableObserverInterface> CallFunc_UnbindDelegate_OnFuelActivelyConsumedChanged_self_CastInput, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, TScriptInterface<class IStructureTraitInterface> K2Node_DynamicCast_AsStructure_Trait_Interface, bool K2Node_DynamicCast_bSuccess, class UStructureTraitComponent* CallFunc_GetStructureTraitComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class UBP_InventoryComponent_C* CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent, TScriptInterface<class IItemContainer> CallFunc_GetBackpack_Container, bool CallFunc_GetBackpack_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingCreation_Screen_C", "RemoveBindings");

	Params::UWBP_CraftingCreation_Screen_C_RemoveBindings_Params Parms{};

	Parms.CallFunc_GetNWXPlayerController_ReturnValue = CallFunc_GetNWXPlayerController_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_UnbindDelegate_OnAppliedFuelItemsChanged_self_CastInput = CallFunc_UnbindDelegate_OnAppliedFuelItemsChanged_self_CastInput;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_UnbindDelegate_OnFuelActivelyConsumedChanged_self_CastInput = CallFunc_UnbindDelegate_OnFuelActivelyConsumedChanged_self_CastInput;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_DynamicCast_AsStructure_Trait_Interface = K2Node_DynamicCast_AsStructure_Trait_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetStructureTraitComponent_ReturnValue = CallFunc_GetStructureTraitComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent = CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent;
	Parms.CallFunc_GetBackpack_Container = CallFunc_GetBackpack_Container;
	Parms.CallFunc_GetBackpack_ReturnValue = CallFunc_GetBackpack_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CraftingCreation_Screen.WBP_CraftingCreation_Screen_C.InitializeRecipeList
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECraftingScreenState    CallFunc_GetCraftingScreenState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FCraftingRecipeReference>CallFunc_GetWorkbenchCraftingRecipes_ReturnValue                 (ConstParm, ReferenceParm)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Identical_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CraftingCreation_Screen_C::InitializeRecipeList(enum class ECraftingScreenState CallFunc_GetCraftingScreenState_ReturnValue, TArray<struct FCraftingRecipeReference>& CallFunc_GetWorkbenchCraftingRecipes_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_Identical_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingCreation_Screen_C", "InitializeRecipeList");

	Params::UWBP_CraftingCreation_Screen_C_InitializeRecipeList_Params Parms{};

	Parms.CallFunc_GetCraftingScreenState_ReturnValue = CallFunc_GetCraftingScreenState_ReturnValue;
	Parms.CallFunc_GetWorkbenchCraftingRecipes_ReturnValue = CallFunc_GetWorkbenchCraftingRecipes_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Identical_ReturnValue = CallFunc_Array_Identical_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CraftingCreation_Screen.WBP_CraftingCreation_Screen_C.Feedback_BackpackMaxReached_ItemDropped
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        L_ItemName                                                       (Edit, BlueprintVisible)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_CraftingCreation_Screen_C::Feedback_BackpackMaxReached_ItemDropped(class FText L_ItemName, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingCreation_Screen_C", "Feedback_BackpackMaxReached_ItemDropped");

	Params::UWBP_CraftingCreation_Screen_C_Feedback_BackpackMaxReached_ItemDropped_Params Parms{};

	Parms.L_ItemName = L_ItemName;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CraftingCreation_Screen.WBP_CraftingCreation_Screen_C.UpdateBackpackFullWarning
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              MaxBackpackCapacity                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NumItemsInBackpack                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_1                                             (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_2                                             (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// class FText                        K2Node_Select_Default_1                                          (None)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class UBP_InventoryComponent_C*    CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetBackpack_Container                                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetBackpack_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumberItemEntries_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FContainerCapacityData      CallFunc_GetContainerCapacityData_ReturnValue                    (NoDestructor)

void UWBP_CraftingCreation_Screen_C::UpdateBackpackFullWarning(int32 MaxBackpackCapacity, int32 NumItemsInBackpack, class FText Temp_text_Variable, bool Temp_bool_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class FText Temp_text_Variable_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool Temp_bool_Variable_2, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2, int64 CallFunc_Conv_IntToInt64_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class UBP_InventoryComponent_C* CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent, class FText CallFunc_Format_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_GetBackpack_Container, bool CallFunc_GetBackpack_ReturnValue, int32 CallFunc_GetNumberItemEntries_ReturnValue, const struct FContainerCapacityData& CallFunc_GetContainerCapacityData_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingCreation_Screen_C", "UpdateBackpackFullWarning");

	Params::UWBP_CraftingCreation_Screen_C_UpdateBackpackFullWarning_Params Parms{};

	Parms.MaxBackpackCapacity = MaxBackpackCapacity;
	Parms.NumItemsInBackpack = NumItemsInBackpack;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_1 = CallFunc_Conv_IntToInt64_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent = CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetBackpack_Container = CallFunc_GetBackpack_Container;
	Parms.CallFunc_GetBackpack_ReturnValue = CallFunc_GetBackpack_ReturnValue;
	Parms.CallFunc_GetNumberItemEntries_ReturnValue = CallFunc_GetNumberItemEntries_ReturnValue;
	Parms.CallFunc_GetContainerCapacityData_ReturnValue = CallFunc_GetContainerCapacityData_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CraftingCreation_Screen.WBP_CraftingCreation_Screen_C.SetupBindings
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXPlayerController*        CallFunc_GetNWXPlayerController_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_CraftingComponent_C*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class INWXFuelableObserverInterface>CallFunc_BindDelegate_OnAppliedFuelItemsChanged_self_CastInput   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class INWXFuelableObserverInterface>CallFunc_BindDelegate_OnFuelActivelyConsumedChanged_self_CastInput(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureTraitInterface>K2Node_DynamicCast_AsStructure_Trait_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureTraitComponent*    CallFunc_GetStructureTraitComponent_ReturnValue                  (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_InventoryComponent_C*    CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_InventoryComponent_C*    CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent_1 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetBackpack_Container                                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetBackpack_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CraftingCreation_Screen_C::SetupBindings(class ANWXPlayerController* CallFunc_GetNWXPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UBP_CraftingComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class INWXFuelableObserverInterface> CallFunc_BindDelegate_OnAppliedFuelItemsChanged_self_CastInput, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, TScriptInterface<class INWXFuelableObserverInterface> CallFunc_BindDelegate_OnFuelActivelyConsumedChanged_self_CastInput, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue_2, TScriptInterface<class IStructureTraitInterface> K2Node_DynamicCast_AsStructure_Trait_Interface, bool K2Node_DynamicCast_bSuccess, class UStructureTraitComponent* CallFunc_GetStructureTraitComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_IsValid_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class UBP_InventoryComponent_C* CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent, bool CallFunc_IsValid_ReturnValue_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class UBP_InventoryComponent_C* CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, TScriptInterface<class IItemContainer> CallFunc_GetBackpack_Container, bool CallFunc_GetBackpack_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingCreation_Screen_C", "SetupBindings");

	Params::UWBP_CraftingCreation_Screen_C_SetupBindings_Params Parms{};

	Parms.CallFunc_GetNWXPlayerController_ReturnValue = CallFunc_GetNWXPlayerController_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BindDelegate_OnAppliedFuelItemsChanged_self_CastInput = CallFunc_BindDelegate_OnAppliedFuelItemsChanged_self_CastInput;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_BindDelegate_OnFuelActivelyConsumedChanged_self_CastInput = CallFunc_BindDelegate_OnFuelActivelyConsumedChanged_self_CastInput;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsStructure_Trait_Interface = K2Node_DynamicCast_AsStructure_Trait_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetStructureTraitComponent_ReturnValue = CallFunc_GetStructureTraitComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent = CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent_1 = CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.CallFunc_GetBackpack_Container = CallFunc_GetBackpack_Container;
	Parms.CallFunc_GetBackpack_ReturnValue = CallFunc_GetBackpack_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CraftingCreation_Screen.WBP_CraftingCreation_Screen_C.UpdateQuantityControl
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CraftingCreation_Screen_C::UpdateQuantityControl()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingCreation_Screen_C", "UpdateQuantityControl");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CraftingCreation_Screen.WBP_CraftingCreation_Screen_C.RefreshQuantityControlVisibility
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       RecipeDisciplines                                                (Edit, BlueprintVisible)
// struct FGameplayTagContainer       RecipeMetaTags                                                   (Edit, BlueprintVisible)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntryCrafting*   CallFunc_GetStateDependantCraftingEntry_ReturnValue              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipeReference    CallFunc_GetCraftingRecipeAssetReference_ReturnValue             (ConstParm, HasGetValueTypeHash)
// bool                               CallFunc_IsRecipeMultiCraftable_Success                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CraftingCreation_Screen_C::RefreshQuantityControlVisibility(const struct FGameplayTagContainer& RecipeDisciplines, const struct FGameplayTagContainer& RecipeMetaTags, bool CallFunc_IsValid_ReturnValue, class UNWXMenuDataEntryCrafting* CallFunc_GetStateDependantCraftingEntry_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, const struct FCraftingRecipeReference& CallFunc_GetCraftingRecipeAssetReference_ReturnValue, bool CallFunc_IsRecipeMultiCraftable_Success, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingCreation_Screen_C", "RefreshQuantityControlVisibility");

	Params::UWBP_CraftingCreation_Screen_C_RefreshQuantityControlVisibility_Params Parms{};

	Parms.RecipeDisciplines = RecipeDisciplines;
	Parms.RecipeMetaTags = RecipeMetaTags;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetStateDependantCraftingEntry_ReturnValue = CallFunc_GetStateDependantCraftingEntry_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetCraftingRecipeAssetReference_ReturnValue = CallFunc_GetCraftingRecipeAssetReference_ReturnValue;
	Parms.CallFunc_IsRecipeMultiCraftable_Success = CallFunc_IsRecipeMultiCraftable_Success;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CraftingCreation_Screen.WBP_CraftingCreation_Screen_C.CalculateMaxQuantity
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IItemContainer>Backpack                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     SlottedItems                                                     (Edit, BlueprintVisible)
// class UNWXMenuDataEntryCrafting*   CraftingEntry                                                    (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CalculatedMaxQuantity                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentMaxQuantity                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentSelectedItemQuantity                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentSlotQuantityRequired                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentSlotIndex                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FCraftingConstraintSlot>RecipeSlots                                                      (Edit, BlueprintVisible, ContainsInstancedReference)
// TArray<int32>                      SlottedIndices                                                   (Edit, BlueprintVisible)
// TMap<int32, struct FInventoryEntry>SlottedIngredients                                               (Edit, BlueprintVisible)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipeReference    CallFunc_GetCraftingRecipeAssetReference_ReturnValue             (ConstParm, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GetSlottedIngredients_SlottedItems                      (ReferenceParm)
// int32                              CallFunc_CalculateMaxQuantityForRecipe_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntryCrafting*   CallFunc_GetStateDependantCraftingEntry_ReturnValue              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_CraftingCreation_Screen_C::CalculateMaxQuantity(TScriptInterface<class IItemContainer> Backpack, const TArray<struct FInventoryEntry>& SlottedItems, class UNWXMenuDataEntryCrafting* CraftingEntry, int32 CalculatedMaxQuantity, int32 CurrentMaxQuantity, int32 CurrentSelectedItemQuantity, int32 CurrentSlotQuantityRequired, int32 CurrentSlotIndex, const TArray<struct FCraftingConstraintSlot>& RecipeSlots, const TArray<int32>& SlottedIndices, TMap<int32, struct FInventoryEntry> SlottedIngredients, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, const struct FCraftingRecipeReference& CallFunc_GetCraftingRecipeAssetReference_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_GetSlottedIngredients_SlottedItems, int32 CallFunc_CalculateMaxQuantityForRecipe_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UNWXMenuDataEntryCrafting* CallFunc_GetStateDependantCraftingEntry_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingCreation_Screen_C", "CalculateMaxQuantity");

	Params::UWBP_CraftingCreation_Screen_C_CalculateMaxQuantity_Params Parms{};

	Parms.Backpack = Backpack;
	Parms.SlottedItems = SlottedItems;
	Parms.CraftingEntry = CraftingEntry;
	Parms.CalculatedMaxQuantity = CalculatedMaxQuantity;
	Parms.CurrentMaxQuantity = CurrentMaxQuantity;
	Parms.CurrentSelectedItemQuantity = CurrentSelectedItemQuantity;
	Parms.CurrentSlotQuantityRequired = CurrentSlotQuantityRequired;
	Parms.CurrentSlotIndex = CurrentSlotIndex;
	Parms.RecipeSlots = RecipeSlots;
	Parms.SlottedIndices = SlottedIndices;
	Parms.SlottedIngredients = SlottedIngredients;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_GetCraftingRecipeAssetReference_ReturnValue = CallFunc_GetCraftingRecipeAssetReference_ReturnValue;
	Parms.CallFunc_GetSlottedIngredients_SlottedItems = CallFunc_GetSlottedIngredients_SlottedItems;
	Parms.CallFunc_CalculateMaxQuantityForRecipe_ReturnValue = CallFunc_CalculateMaxQuantityForRecipe_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetStateDependantCraftingEntry_ReturnValue = CallFunc_GetStateDependantCraftingEntry_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CraftingCreation_Screen.WBP_CraftingCreation_Screen_C.OnCraftingCompleted
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCraftingRecipeReference    Recipe                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FInventoryEntry             Entry                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              Quantity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CraftingCreation_Screen_C::OnCraftingCompleted(const struct FCraftingRecipeReference& Recipe, const struct FInventoryEntry& Entry, int32 Quantity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingCreation_Screen_C", "OnCraftingCompleted");

	Params::UWBP_CraftingCreation_Screen_C_OnCraftingCompleted_Params Parms{};

	Parms.Recipe = Recipe;
	Parms.Entry = Entry;
	Parms.Quantity = Quantity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CraftingCreation_Screen.WBP_CraftingCreation_Screen_C.RefreshCard
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntryCrafting*   CallFunc_GetStateDependantCraftingEntry_ReturnValue              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetImage_IsValidReference                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetImage_EntryImage                                     (UObjectWrapper, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CraftingCreation_Screen_C::RefreshCard(enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, bool Temp_bool_Variable_1, bool CallFunc_IsValid_ReturnValue, class UNWXMenuDataEntryCrafting* CallFunc_GetStateDependantCraftingEntry_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_GetImage_IsValidReference, TSoftObjectPtr<class UTexture2D> CallFunc_GetImage_EntryImage, enum class ESlateVisibility Temp_byte_Variable_3, bool CallFunc_IsValid_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingCreation_Screen_C", "RefreshCard");

	Params::UWBP_CraftingCreation_Screen_C_RefreshCard_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetStateDependantCraftingEntry_ReturnValue = CallFunc_GetStateDependantCraftingEntry_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetImage_IsValidReference = CallFunc_GetImage_IsValidReference;
	Parms.CallFunc_GetImage_EntryImage = CallFunc_GetImage_EntryImage;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CraftingCreation_Screen.WBP_CraftingCreation_Screen_C.LeaveCraftingStation
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData                              (None)
// int32                              CallFunc_SendGameplayEventToActor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CraftingCreation_Screen_C::LeaveCraftingStation(class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_1, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, int32 CallFunc_SendGameplayEventToActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingCreation_Screen_C", "LeaveCraftingStation");

	Params::UWBP_CraftingCreation_Screen_C_LeaveCraftingStation_Params Parms{};

	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue_1 = CallFunc_GetOwningPlayerPawn_ReturnValue_1;
	Parms.K2Node_MakeStruct_GameplayEventData = K2Node_MakeStruct_GameplayEventData;
	Parms.CallFunc_SendGameplayEventToActor_ReturnValue = CallFunc_SendGameplayEventToActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CraftingCreation_Screen.WBP_CraftingCreation_Screen_C.CraftItem
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInventoryEntry>     LSlottedIngredients                                              (Edit, BlueprintVisible)
// class UNWXMenuDataEntryCrafting*   LCraftingEntry                                                   (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipeReference    CallFunc_GetCraftingRecipeAssetReference_ReturnValue             (ConstParm, HasGetValueTypeHash)
// bool                               CallFunc_CanCraftRecipe_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GetSlottedIngredients_SlottedItems                      (ReferenceParm)
// bool                               CallFunc_IsFireLitIfRequired_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntryCrafting*   CallFunc_GetStateDependantCraftingEntry_ReturnValue              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipeReference    CallFunc_GetCraftingRecipeAssetReference_ReturnValue_1           (ConstParm, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_PlayerAccountInfo_C>K2Node_DynamicCast_AsBPI_Player_Account_Info                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPersistentUniqueIdFromPawn_PersistentId              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleCallFunc_AbilityTargetDataFromCraftingRecipeInstanced_ReturnValue(None)
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData                              (None)
// int32                              CallFunc_SendGameplayEventToActor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CraftingCreation_Screen_C::CraftItem(const TArray<struct FInventoryEntry>& LSlottedIngredients, class UNWXMenuDataEntryCrafting* LCraftingEntry, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FCraftingRecipeReference& CallFunc_GetCraftingRecipeAssetReference_ReturnValue, bool CallFunc_CanCraftRecipe_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_GetSlottedIngredients_SlottedItems, bool CallFunc_IsFireLitIfRequired_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UNWXMenuDataEntryCrafting* CallFunc_GetStateDependantCraftingEntry_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, const struct FCraftingRecipeReference& CallFunc_GetCraftingRecipeAssetReference_ReturnValue_1, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_1, TScriptInterface<class IBPI_PlayerAccountInfo_C> K2Node_DynamicCast_AsBPI_Player_Account_Info, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetPersistentUniqueIdFromPawn_PersistentId, bool CallFunc_IsValid_ReturnValue_3, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromCraftingRecipeInstanced_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, int32 CallFunc_SendGameplayEventToActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingCreation_Screen_C", "CraftItem");

	Params::UWBP_CraftingCreation_Screen_C_CraftItem_Params Parms{};

	Parms.LSlottedIngredients = LSlottedIngredients;
	Parms.LCraftingEntry = LCraftingEntry;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue_1 = CallFunc_GetOwningPlayerController_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetCraftingRecipeAssetReference_ReturnValue = CallFunc_GetCraftingRecipeAssetReference_ReturnValue;
	Parms.CallFunc_CanCraftRecipe_ReturnValue = CallFunc_CanCraftRecipe_ReturnValue;
	Parms.CallFunc_GetSlottedIngredients_SlottedItems = CallFunc_GetSlottedIngredients_SlottedItems;
	Parms.CallFunc_IsFireLitIfRequired_ReturnValue = CallFunc_IsFireLitIfRequired_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetStateDependantCraftingEntry_ReturnValue = CallFunc_GetStateDependantCraftingEntry_ReturnValue;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.CallFunc_GetCraftingRecipeAssetReference_ReturnValue_1 = CallFunc_GetCraftingRecipeAssetReference_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue_1 = CallFunc_GetOwningPlayerPawn_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBPI_Player_Account_Info = K2Node_DynamicCast_AsBPI_Player_Account_Info;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPersistentUniqueIdFromPawn_PersistentId = CallFunc_GetPersistentUniqueIdFromPawn_PersistentId;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_AbilityTargetDataFromCraftingRecipeInstanced_ReturnValue = CallFunc_AbilityTargetDataFromCraftingRecipeInstanced_ReturnValue;
	Parms.K2Node_MakeStruct_GameplayEventData = K2Node_MakeStruct_GameplayEventData;
	Parms.CallFunc_SendGameplayEventToActor_ReturnValue = CallFunc_SendGameplayEventToActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CraftingCreation_Screen.WBP_CraftingCreation_Screen_C.BndEvt__w_QuantityControl_K2Node_ComponentBoundEvent_2_QuantityChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Quantity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CraftingCreation_Screen_C::BndEvt__w_QuantityControl_K2Node_ComponentBoundEvent_2_QuantityChanged__DelegateSignature(int32 Quantity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingCreation_Screen_C", "BndEvt__w_QuantityControl_K2Node_ComponentBoundEvent_2_QuantityChanged__DelegateSignature");

	Params::UWBP_CraftingCreation_Screen_C_BndEvt__w_QuantityControl_K2Node_ComponentBoundEvent_2_QuantityChanged__DelegateSignature_Params Parms{};

	Parms.Quantity = Quantity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CraftingCreation_Screen.WBP_CraftingCreation_Screen_C.OnInternalClosed
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_CraftingCreation_Screen_C::OnInternalClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingCreation_Screen_C", "OnInternalClosed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CraftingCreation_Screen.WBP_CraftingCreation_Screen_C.BndEvt__WBP_CraftingCreation_Screen_CraftingMold_K2Node_ComponentBoundEvent_5_OnMoldIngredientListShown__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               Shown                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CraftingCreation_Screen_C::BndEvt__WBP_CraftingCreation_Screen_CraftingMold_K2Node_ComponentBoundEvent_5_OnMoldIngredientListShown__DelegateSignature(bool Shown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingCreation_Screen_C", "BndEvt__WBP_CraftingCreation_Screen_CraftingMold_K2Node_ComponentBoundEvent_5_OnMoldIngredientListShown__DelegateSignature");

	Params::UWBP_CraftingCreation_Screen_C_BndEvt__WBP_CraftingCreation_Screen_CraftingMold_K2Node_ComponentBoundEvent_5_OnMoldIngredientListShown__DelegateSignature_Params Parms{};

	Parms.Shown = Shown;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CraftingCreation_Screen.WBP_CraftingCreation_Screen_C.BndEvt__WBP_CraftingCreation_Screen_CraftingMold_K2Node_ComponentBoundEvent_9_OnMoldIngredientSlotted__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_CraftingCreation_Screen_C::BndEvt__WBP_CraftingCreation_Screen_CraftingMold_K2Node_ComponentBoundEvent_9_OnMoldIngredientSlotted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingCreation_Screen_C", "BndEvt__WBP_CraftingCreation_Screen_CraftingMold_K2Node_ComponentBoundEvent_9_OnMoldIngredientSlotted__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CraftingCreation_Screen.WBP_CraftingCreation_Screen_C.BndEvt__WBP_CraftingCreation_Screen_bu_Close_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_CraftingCreation_Screen_C::BndEvt__WBP_CraftingCreation_Screen_bu_Close_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingCreation_Screen_C", "BndEvt__WBP_CraftingCreation_Screen_bu_Close_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CraftingCreation_Screen.WBP_CraftingCreation_Screen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_CraftingCreation_Screen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingCreation_Screen_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CraftingCreation_Screen.WBP_CraftingCreation_Screen_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_CraftingCreation_Screen_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingCreation_Screen_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CraftingCreation_Screen.WBP_CraftingCreation_Screen_C.BndEvt__WBP_CraftingCreation_Screen_CBU_Cancel_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CraftingCreation_Screen_C::BndEvt__WBP_CraftingCreation_Screen_CBU_Cancel_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingCreation_Screen_C", "BndEvt__WBP_CraftingCreation_Screen_CBU_Cancel_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_CraftingCreation_Screen_C_BndEvt__WBP_CraftingCreation_Screen_CBU_Cancel_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CraftingCreation_Screen.WBP_CraftingCreation_Screen_C.BndEvt__WBP_CraftingCreation_Screen_WBP_Common_Button_Craft_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CraftingCreation_Screen_C::BndEvt__WBP_CraftingCreation_Screen_WBP_Common_Button_Craft_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingCreation_Screen_C", "BndEvt__WBP_CraftingCreation_Screen_WBP_Common_Button_Craft_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_CraftingCreation_Screen_C_BndEvt__WBP_CraftingCreation_Screen_WBP_Common_Button_Craft_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CraftingCreation_Screen.WBP_CraftingCreation_Screen_C.BndEvt__WBP_CraftingCreation_Screen_CBU_FuelManagement_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CraftingCreation_Screen_C::BndEvt__WBP_CraftingCreation_Screen_CBU_FuelManagement_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingCreation_Screen_C", "BndEvt__WBP_CraftingCreation_Screen_CBU_FuelManagement_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_CraftingCreation_Screen_C_BndEvt__WBP_CraftingCreation_Screen_CBU_FuelManagement_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CraftingCreation_Screen.WBP_CraftingCreation_Screen_C.BndEvt__WBP_CraftingCreation_Screen_CBU_Close_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CraftingCreation_Screen_C::BndEvt__WBP_CraftingCreation_Screen_CBU_Close_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingCreation_Screen_C", "BndEvt__WBP_CraftingCreation_Screen_CBU_Close_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_CraftingCreation_Screen_C_BndEvt__WBP_CraftingCreation_Screen_CBU_Close_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CraftingCreation_Screen.WBP_CraftingCreation_Screen_C.ExecuteUbergraph_WBP_CraftingCreation_Screen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGlobalAudioSubsystem*       CallFunc_GetEngineSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGlobalAudioSubsystem*       CallFunc_GetEngineSubsystem_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Quantity                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_Shown                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CraftingStationComponent_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<struct FCraftingRecipeReference>CallFunc_GetCraftingRecipes_CurrentCraftingRecipes               (ReferenceParm)
// class UBP_CraftingCreationComponent_C*CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_SchematicInterfaces_C>K2Node_DynamicCast_AsBPI_Schematic_Interfaces                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_StructureFuelComponent_C*CallFunc_GetFuelComponent_FuelComponent                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFireLitIfRequired_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasFuelIfRequired_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULocalPlayer*                CallFunc_GetLocalPlayerFromController_ReturnValue                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_Inv_StructureTransfer_C*CallFunc_CreateWidgetInstanceFromLayer_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_3                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CraftingCreation_Screen_C::ExecuteUbergraph_WBP_CraftingCreation_Screen(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UGlobalAudioSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, class UGlobalAudioSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, int32 K2Node_ComponentBoundEvent_Quantity, bool K2Node_ComponentBoundEvent_Shown, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UBP_CraftingStationComponent_C* CallFunc_GetComponentByClass_ReturnValue, TArray<struct FCraftingRecipeReference>& CallFunc_GetCraftingRecipes_CurrentCraftingRecipes, class UBP_CraftingCreationComponent_C* CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IBPI_SchematicInterfaces_C> K2Node_DynamicCast_AsBPI_Schematic_Interfaces, bool K2Node_DynamicCast_bSuccess, class UBP_StructureFuelComponent_C* CallFunc_GetFuelComponent_FuelComponent, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsFireLitIfRequired_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_HasFuelIfRequired_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue, class UWBP_Inv_StructureTransfer_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_3, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, bool CallFunc_Array_IsNotEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingCreation_Screen_C", "ExecuteUbergraph_WBP_CraftingCreation_Screen");

	Params::UWBP_CraftingCreation_Screen_C_ExecuteUbergraph_WBP_CraftingCreation_Screen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_1 = CallFunc_GetEngineSubsystem_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Quantity = K2Node_ComponentBoundEvent_Quantity;
	Parms.K2Node_ComponentBoundEvent_Shown = K2Node_ComponentBoundEvent_Shown;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetCraftingRecipes_CurrentCraftingRecipes = CallFunc_GetCraftingRecipes_CurrentCraftingRecipes;
	Parms.CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent = CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBPI_Schematic_Interfaces = K2Node_DynamicCast_AsBPI_Schematic_Interfaces;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetFuelComponent_FuelComponent = CallFunc_GetFuelComponent_FuelComponent;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsFireLitIfRequired_ReturnValue = CallFunc_IsFireLitIfRequired_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_HasFuelIfRequired_ReturnValue = CallFunc_HasFuelIfRequired_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_GetLocalPlayerFromController_ReturnValue = CallFunc_GetLocalPlayerFromController_ReturnValue;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue_1 = CallFunc_GetOwningPlayerController_ReturnValue_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_ComponentBoundEvent_Button_3 = K2Node_ComponentBoundEvent_Button_3;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue = CallFunc_Array_IsNotEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


