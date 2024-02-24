#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_RecipeElementMulti.UMG_RecipeElementMulti_C
// (None)

class UClass* UUMG_RecipeElementMulti_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_RecipeElementMulti_C");

	return Clss;
}


// UMG_RecipeElementMulti_C UMG_RecipeElementMulti.Default__UMG_RecipeElementMulti_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_RecipeElementMulti_C* UUMG_RecipeElementMulti_C::GetDefaultObj()
{
	static class UUMG_RecipeElementMulti_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_RecipeElementMulti_C*>(UUMG_RecipeElementMulti_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_RecipeElementMulti.UMG_RecipeElementMulti_C.GetOverlay
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOverlay*                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UOverlay* UUMG_RecipeElementMulti_C::GetOverlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeElementMulti_C", "GetOverlay");

	Params::UUMG_RecipeElementMulti_C_GetOverlay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_RecipeElementMulti.UMG_RecipeElementMulti_C.GetHoverCornerWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UOverlay*                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UOverlay* UUMG_RecipeElementMulti_C::GetHoverCornerWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeElementMulti_C", "GetHoverCornerWidget");

	Params::UUMG_RecipeElementMulti_C_GetHoverCornerWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_RecipeElementMulti.UMG_RecipeElementMulti_C.SetState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Valid                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_RecipeElementMulti_C::SetState(bool Valid, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeElementMulti_C", "SetState");

	Params::UUMG_RecipeElementMulti_C_SetState_Params Parms{};

	Parms.Valid = Valid;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_RecipeElementMulti.UMG_RecipeElementMulti_C.InitialiseIcons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_RecipeElementImageMulti_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FItemData>           CallFunc_GetProcessorOutputs_ReturnValue                         (ReferenceParm, ContainsInstancedReference)
// class UUMG_RecipeElementImage_C*   CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FProcessorRecipesRowHandle  CallFunc_GetProcessorRecipe_ReturnValue                          (NoDestructor, HasGetValueTypeHash)
// TArray<struct FResourceItem>       CallFunc_GetResourceInputs_ReturnValue                           (ReferenceParm)
// struct FProcessorRecipe            CallFunc_GetProcessorRecipesStruct_ProcessorRecipes              (ContainsInstancedReference)
// enum class EValid                  CallFunc_GetProcessorRecipesStruct_Paths                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FResourceItem               CallFunc_Array_Get_Item                                          (NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_RecipeElementImage_C*   CallFunc_CreateResourceWidget_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FItemData>           CallFunc_GetProcessorInputs_ReturnValue                          (ReferenceParm, ContainsInstancedReference)
// struct FItemData                   CallFunc_Array_Get_Item_1                                        (ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_CreateInputItem_Name                                    (None)
// TSoftObjectPtr<class UTexture2D>   CallFunc_CreateInputItem_Icon                                    (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_RecipeElementImage_C*   CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FResourceItem>       CallFunc_GetResourceOutputs_ReturnValue                          (ReferenceParm)
// TArray<struct FItemData>           CallFunc_GetProcessorOutputs_ReturnValue_1                       (ReferenceParm, ContainsInstancedReference)
// struct FResourceItem               CallFunc_Array_Get_Item_2                                        (NoDestructor)
// struct FItemData                   CallFunc_Array_Get_Item_3                                        (ContainsInstancedReference)
// class UUMG_RecipeElementImage_C*   CallFunc_CreateResourceWidget_ReturnValue_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_CreateOutputItem_Name                                   (None)
// TSoftObjectPtr<class UTexture2D>   CallFunc_CreateOutputItem_Icon                                   (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue_1                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue_2                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_RecipeElementMulti_C::InitialiseIcons(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UUMG_RecipeElementImageMulti_C* CallFunc_Create_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Array_Index_Variable_3, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, TArray<struct FItemData>& CallFunc_GetProcessorOutputs_ReturnValue, class UUMG_RecipeElementImage_C* CallFunc_Create_ReturnValue_1, const struct FProcessorRecipesRowHandle& CallFunc_GetProcessorRecipe_ReturnValue, TArray<struct FResourceItem>& CallFunc_GetResourceInputs_ReturnValue, const struct FProcessorRecipe& CallFunc_GetProcessorRecipesStruct_ProcessorRecipes, enum class EValid CallFunc_GetProcessorRecipesStruct_Paths, const struct FResourceItem& CallFunc_Array_Get_Item, bool K2Node_SwitchEnum_CmpSuccess, class UUMG_RecipeElementImage_C* CallFunc_CreateResourceWidget_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<struct FItemData>& CallFunc_GetProcessorInputs_ReturnValue, const struct FItemData& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class FText CallFunc_CreateInputItem_Name, TSoftObjectPtr<class UTexture2D> CallFunc_CreateInputItem_Icon, bool CallFunc_Less_IntInt_ReturnValue_1, class UUMG_RecipeElementImage_C* CallFunc_Create_ReturnValue_2, TArray<struct FResourceItem>& CallFunc_GetResourceOutputs_ReturnValue, TArray<struct FItemData>& CallFunc_GetProcessorOutputs_ReturnValue_1, const struct FResourceItem& CallFunc_Array_Get_Item_2, const struct FItemData& CallFunc_Array_Get_Item_3, class UUMG_RecipeElementImage_C* CallFunc_CreateResourceWidget_ReturnValue_1, class FText CallFunc_CreateOutputItem_Name, TSoftObjectPtr<class UTexture2D> CallFunc_CreateOutputItem_Icon, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeElementMulti_C", "InitialiseIcons");

	Params::UUMG_RecipeElementMulti_C_InitialiseIcons_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.CallFunc_GetProcessorOutputs_ReturnValue = CallFunc_GetProcessorOutputs_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_GetProcessorRecipe_ReturnValue = CallFunc_GetProcessorRecipe_ReturnValue;
	Parms.CallFunc_GetResourceInputs_ReturnValue = CallFunc_GetResourceInputs_ReturnValue;
	Parms.CallFunc_GetProcessorRecipesStruct_ProcessorRecipes = CallFunc_GetProcessorRecipesStruct_ProcessorRecipes;
	Parms.CallFunc_GetProcessorRecipesStruct_Paths = CallFunc_GetProcessorRecipesStruct_Paths;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_CreateResourceWidget_ReturnValue = CallFunc_CreateResourceWidget_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetProcessorInputs_ReturnValue = CallFunc_GetProcessorInputs_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_CreateInputItem_Name = CallFunc_CreateInputItem_Name;
	Parms.CallFunc_CreateInputItem_Icon = CallFunc_CreateInputItem_Icon;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.CallFunc_GetResourceOutputs_ReturnValue = CallFunc_GetResourceOutputs_ReturnValue;
	Parms.CallFunc_GetProcessorOutputs_ReturnValue_1 = CallFunc_GetProcessorOutputs_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_CreateResourceWidget_ReturnValue_1 = CallFunc_CreateResourceWidget_ReturnValue_1;
	Parms.CallFunc_CreateOutputItem_Name = CallFunc_CreateOutputItem_Name;
	Parms.CallFunc_CreateOutputItem_Icon = CallFunc_CreateOutputItem_Icon;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue_1 = CallFunc_AddChildToHorizontalBox_ReturnValue_1;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue_1 = CallFunc_AddChild_ReturnValue_1;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue_2 = CallFunc_AddChildToHorizontalBox_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_RecipeElementMulti.UMG_RecipeElementMulti_C.GetProcessorRecipe
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FProcessorRecipesRowHandle  ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

struct FProcessorRecipesRowHandle UUMG_RecipeElementMulti_C::GetProcessorRecipe()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeElementMulti_C", "GetProcessorRecipe");

	Params::UUMG_RecipeElementMulti_C_GetProcessorRecipe_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_RecipeElementMulti.UMG_RecipeElementMulti_C.GetResourceIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EIcarusResourceType     Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Icon                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  RecipeIcon                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_RecipeElementMulti_C::GetResourceIcon(enum class EIcarusResourceType Type, class UTexture2D** Icon, class UTexture2D* RecipeIcon, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeElementMulti_C", "GetResourceIcon");

	Params::UUMG_RecipeElementMulti_C_GetResourceIcon_Params Parms{};

	Parms.Type = Type;
	Parms.RecipeIcon = RecipeIcon;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Icon != nullptr)
		*Icon = Parms.Icon;

}


// Function UMG_RecipeElementMulti.UMG_RecipeElementMulti_C.UpdateRecipeFrame
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class UObject*                     Image                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_ButtonState           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// enum class E_ButtonState           Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FSlateBrush UUMG_RecipeElementMulti_C::UpdateRecipeFrame(class UObject* Image, enum class E_ButtonState Temp_byte_Variable, bool CallFunc_BooleanOR_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, enum class E_ButtonState Temp_byte_Variable_1, class UObject* K2Node_Select_Default, class UObject* K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeElementMulti_C", "UpdateRecipeFrame");

	Params::UUMG_RecipeElementMulti_C_UpdateRecipeFrame_Params Parms{};

	Parms.Image = Image;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_RecipeElementMulti.UMG_RecipeElementMulti_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UUMG_RecipeElementMulti_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeElementMulti_C", "BP_OnEntryReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_RecipeElementMulti.UMG_RecipeElementMulti_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_RecipeElementMulti_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeElementMulti_C", "BP_OnItemExpansionChanged");

	Params::UUMG_RecipeElementMulti_C_BP_OnItemExpansionChanged_Params Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_RecipeElementMulti.UMG_RecipeElementMulti_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_RecipeElementMulti_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeElementMulti_C", "BP_OnItemSelectionChanged");

	Params::UUMG_RecipeElementMulti_C_BP_OnItemSelectionChanged_Params Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_RecipeElementMulti.UMG_RecipeElementMulti_C.ExecuteUbergraph_UMG_RecipeElementMulti
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsSelected                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsExpanded                                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_RecipeElementMulti_C::ExecuteUbergraph_UMG_RecipeElementMulti(int32 EntryPoint, bool K2Node_Event_bIsSelected, bool K2Node_Event_bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeElementMulti_C", "ExecuteUbergraph_UMG_RecipeElementMulti");

	Params::UUMG_RecipeElementMulti_C_ExecuteUbergraph_UMG_RecipeElementMulti_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;
	Parms.K2Node_Event_bIsExpanded = K2Node_Event_bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}

}


