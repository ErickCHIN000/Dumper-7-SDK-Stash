#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_RecipeElementNonInteractive.UMG_RecipeElementNonInteractive_C
// (None)

class UClass* UUMG_RecipeElementNonInteractive_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_RecipeElementNonInteractive_C");

	return Clss;
}


// UMG_RecipeElementNonInteractive_C UMG_RecipeElementNonInteractive.Default__UMG_RecipeElementNonInteractive_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_RecipeElementNonInteractive_C* UUMG_RecipeElementNonInteractive_C::GetDefaultObj()
{
	static class UUMG_RecipeElementNonInteractive_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_RecipeElementNonInteractive_C*>(UUMG_RecipeElementNonInteractive_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_RecipeElementNonInteractive.UMG_RecipeElementNonInteractive_C.GetOverlay
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOverlay*                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UOverlay* UUMG_RecipeElementNonInteractive_C::GetOverlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeElementNonInteractive_C", "GetOverlay");

	Params::UUMG_RecipeElementNonInteractive_C_GetOverlay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_RecipeElementNonInteractive.UMG_RecipeElementNonInteractive_C.InitialiseIcons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_RecipeElementImage_C*   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FProcessorRecipe            CallFunc_GetProcessorRecipesStruct_ProcessorRecipes              (ContainsInstancedReference)
// enum class EValid                  CallFunc_GetProcessorRecipesStruct_Paths                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FResourceItem>       CallFunc_GetResourceInputs_ReturnValue                           (ReferenceParm)
// struct FResourceItem               CallFunc_Array_Get_Item                                          (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_RecipeElementImage_C*   CallFunc_CreateResourceWidget_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FItemData>           CallFunc_GetProcessorInputs_ReturnValue                          (ReferenceParm, ContainsInstancedReference)
// struct FItemData                   CallFunc_Array_Get_Item_1                                        (ContainsInstancedReference)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_CreateInputItem_Name                                    (None)
// TSoftObjectPtr<class UTexture2D>   CallFunc_CreateInputItem_Icon                                    (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   Temp_wildcard_Variable                                           (ContainsInstancedReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_CreateOutputItem_Name                                   (None)
// TSoftObjectPtr<class UTexture2D>   CallFunc_CreateOutputItem_Icon                                   (HasGetValueTypeHash)
// TArray<struct FItemData>           CallFunc_GetProcessorOutputs_ReturnValue                         (ReferenceParm, ContainsInstancedReference)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue_1                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_Array_Get_Item_2                                        (ContainsInstancedReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetResourceIcon_Icon                                    (HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_RecipeElementNonInteractive_C::InitialiseIcons(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, const struct FMargin& K2Node_MakeStruct_Margin, class UUMG_RecipeElementImage_C* CallFunc_Create_ReturnValue, const struct FProcessorRecipe& CallFunc_GetProcessorRecipesStruct_ProcessorRecipes, enum class EValid CallFunc_GetProcessorRecipesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, TArray<struct FResourceItem>& CallFunc_GetResourceInputs_ReturnValue, const struct FResourceItem& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UUMG_RecipeElementImage_C* CallFunc_CreateResourceWidget_ReturnValue, TArray<struct FItemData>& CallFunc_GetProcessorInputs_ReturnValue, const struct FItemData& CallFunc_Array_Get_Item_1, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, class FText CallFunc_CreateInputItem_Name, TSoftObjectPtr<class UTexture2D> CallFunc_CreateInputItem_Icon, int32 CallFunc_Array_Length_ReturnValue_1, const struct FItemData& Temp_wildcard_Variable, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_CreateOutputItem_Name, TSoftObjectPtr<class UTexture2D> CallFunc_CreateOutputItem_Icon, TArray<struct FItemData>& CallFunc_GetProcessorOutputs_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_1, const struct FItemData& CallFunc_Array_Get_Item_2, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin_1, TSoftObjectPtr<class UTexture2D> CallFunc_GetResourceIcon_Icon, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeElementNonInteractive_C", "InitialiseIcons");

	Params::UUMG_RecipeElementNonInteractive_C_InitialiseIcons_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetProcessorRecipesStruct_ProcessorRecipes = CallFunc_GetProcessorRecipesStruct_ProcessorRecipes;
	Parms.CallFunc_GetProcessorRecipesStruct_Paths = CallFunc_GetProcessorRecipesStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetResourceInputs_ReturnValue = CallFunc_GetResourceInputs_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_CreateResourceWidget_ReturnValue = CallFunc_CreateResourceWidget_ReturnValue;
	Parms.CallFunc_GetProcessorInputs_ReturnValue = CallFunc_GetProcessorInputs_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.CallFunc_CreateInputItem_Name = CallFunc_CreateInputItem_Name;
	Parms.CallFunc_CreateInputItem_Icon = CallFunc_CreateInputItem_Icon;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_CreateOutputItem_Name = CallFunc_CreateOutputItem_Name;
	Parms.CallFunc_CreateOutputItem_Icon = CallFunc_CreateOutputItem_Icon;
	Parms.CallFunc_GetProcessorOutputs_ReturnValue = CallFunc_GetProcessorOutputs_ReturnValue;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue_1 = CallFunc_AddChildToHorizontalBox_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_MakeStruct_Margin_1 = K2Node_MakeStruct_Margin_1;
	Parms.CallFunc_GetResourceIcon_Icon = CallFunc_GetResourceIcon_Icon;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_RecipeElementNonInteractive.UMG_RecipeElementNonInteractive_C.GetProcessorRecipe
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FProcessorRecipesRowHandle  ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

struct FProcessorRecipesRowHandle UUMG_RecipeElementNonInteractive_C::GetProcessorRecipe()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeElementNonInteractive_C", "GetProcessorRecipe");

	Params::UUMG_RecipeElementNonInteractive_C_GetProcessorRecipe_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_RecipeElementNonInteractive.UMG_RecipeElementNonInteractive_C.GetResourceIcon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   Icon                                                             (Parm, OutParm, HasGetValueTypeHash)
// class UTexture2D*                  RecipeIcon                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EIcarusResourceType     Temp_wildcard_Variable                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetResourceImage_ReturnValue                            (HasGetValueTypeHash)
// TArray<struct FResourceItem>       CallFunc_GetResourceOutputs_ReturnValue                          (ReferenceParm)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FResourceItem               CallFunc_Array_Get_Item                                          (NoDestructor)

void UUMG_RecipeElementNonInteractive_C::GetResourceIcon(TSoftObjectPtr<class UTexture2D>* Icon, class UTexture2D* RecipeIcon, uint8 CallFunc_MakeLiteralByte_ReturnValue, enum class EIcarusResourceType Temp_wildcard_Variable, TSoftObjectPtr<class UTexture2D> CallFunc_GetResourceImage_ReturnValue, TArray<struct FResourceItem>& CallFunc_GetResourceOutputs_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FResourceItem& CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeElementNonInteractive_C", "GetResourceIcon");

	Params::UUMG_RecipeElementNonInteractive_C_GetResourceIcon_Params Parms{};

	Parms.RecipeIcon = RecipeIcon;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.CallFunc_GetResourceImage_ReturnValue = CallFunc_GetResourceImage_ReturnValue;
	Parms.CallFunc_GetResourceOutputs_ReturnValue = CallFunc_GetResourceOutputs_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Icon != nullptr)
		*Icon = Parms.Icon;

}


// Function UMG_RecipeElementNonInteractive.UMG_RecipeElementNonInteractive_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UUMG_RecipeElementNonInteractive_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeElementNonInteractive_C", "BP_OnEntryReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_RecipeElementNonInteractive.UMG_RecipeElementNonInteractive_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_RecipeElementNonInteractive_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeElementNonInteractive_C", "BP_OnItemExpansionChanged");

	Params::UUMG_RecipeElementNonInteractive_C_BP_OnItemExpansionChanged_Params Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_RecipeElementNonInteractive.UMG_RecipeElementNonInteractive_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_RecipeElementNonInteractive_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeElementNonInteractive_C", "BP_OnItemSelectionChanged");

	Params::UUMG_RecipeElementNonInteractive_C_BP_OnItemSelectionChanged_Params Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_RecipeElementNonInteractive.UMG_RecipeElementNonInteractive_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_RecipeElementNonInteractive_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeElementNonInteractive_C", "PreConstruct");

	Params::UUMG_RecipeElementNonInteractive_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_RecipeElementNonInteractive.UMG_RecipeElementNonInteractive_C.ExecuteUbergraph_UMG_RecipeElementNonInteractive
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsExpanded                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsSelected                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FResourceItem>       CallFunc_GetResourceOutputs_ReturnValue                          (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_RecipeElementNonInteractive_C::ExecuteUbergraph_UMG_RecipeElementNonInteractive(int32 EntryPoint, bool Temp_bool_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected, bool K2Node_Event_IsDesignTime, TArray<struct FResourceItem>& CallFunc_GetResourceOutputs_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UTexture2D* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeElementNonInteractive_C", "ExecuteUbergraph_UMG_RecipeElementNonInteractive");

	Params::UUMG_RecipeElementNonInteractive_C_ExecuteUbergraph_UMG_RecipeElementNonInteractive_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_Event_bIsExpanded = K2Node_Event_bIsExpanded;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetResourceOutputs_ReturnValue = CallFunc_GetResourceOutputs_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


