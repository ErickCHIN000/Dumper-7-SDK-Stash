#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_ListElement.UMG_ListElement_C
// (None)

class UClass* UUMG_ListElement_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_ListElement_C");

	return Clss;
}


// UMG_ListElement_C UMG_ListElement.Default__UMG_ListElement_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_ListElement_C* UUMG_ListElement_C::GetDefaultObj()
{
	static class UUMG_ListElement_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_ListElement_C*>(UUMG_ListElement_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_ListElement.UMG_ListElement_C.FullUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ListElement_C::FullUpdate(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ListElement_C", "FullUpdate");

	Params::UUMG_ListElement_C_FullUpdate_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ListElement.UMG_ListElement_C.GetOverlay
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOverlay*                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UOverlay* UUMG_ListElement_C::GetOverlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ListElement_C", "GetOverlay");

	Params::UUMG_ListElement_C_GetOverlay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_ListElement.UMG_ListElement_C.UpdateTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ListElement_C::UpdateTrigger(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ListElement_C", "UpdateTrigger");

	Params::UUMG_ListElement_C_UpdateTrigger_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ListElement.UMG_ListElement_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue_1                                   (None)

struct FEventReply UUMG_ListElement_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ListElement_C", "OnMouseButtonDown");

	Params::UUMG_ListElement_C_OnMouseButtonDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue_1 = CallFunc_Handled_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_ListElement.UMG_ListElement_C.UpdateVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTagQueriesRowHandle        ItemQuery                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FTagQueriesRowHandleFTagQueriesRowHandle_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsRowHandleValid_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ListElement_C::UpdateVisibility(struct FTagQueriesRowHandle& ItemQuery, bool CallFunc_EqualEqual_FTagQueriesRowHandleFTagQueriesRowHandle_ReturnValue, bool CallFunc_IsRowHandleValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ListElement_C", "UpdateVisibility");

	Params::UUMG_ListElement_C_UpdateVisibility_Params Parms{};

	Parms.ItemQuery = ItemQuery;
	Parms.CallFunc_EqualEqual_FTagQueriesRowHandleFTagQueriesRowHandle_ReturnValue = CallFunc_EqualEqual_FTagQueriesRowHandleFTagQueriesRowHandle_ReturnValue;
	Parms.CallFunc_IsRowHandleValid_ReturnValue = CallFunc_IsRowHandleValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ListElement.UMG_ListElement_C.SetState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Valid                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ListElement_C::SetState(bool Valid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ListElement_C", "SetState");

	Params::UUMG_ListElement_C_SetState_Params Parms{};

	Parms.Valid = Valid;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ListElement.UMG_ListElement_C.Initialise
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_ListElement_C::Initialise()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ListElement_C", "Initialise");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ListElement.UMG_ListElement_C.InitialiseIcons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_ListElement_C::InitialiseIcons()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ListElement_C", "InitialiseIcons");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ListElement.UMG_ListElement_C.CreateResourceWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FResourceItem               ResourceItem                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// class UUMG_RecipeElementImage_C*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_RecipeElementImage_C*   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetResourceImage_ReturnValue                            (HasGetValueTypeHash)

class UUMG_RecipeElementImage_C* UUMG_ListElement_C::CreateResourceWidget(struct FResourceItem& ResourceItem, class UUMG_RecipeElementImage_C* CallFunc_Create_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetResourceImage_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ListElement_C", "CreateResourceWidget");

	Params::UUMG_ListElement_C_CreateResourceWidget_Params Parms{};

	Parms.ResourceItem = ResourceItem;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetResourceImage_ReturnValue = CallFunc_GetResourceImage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_ListElement.UMG_ListElement_C.CreateOutputItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData                   CraftingOutput                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class FText                        Name                                                             (Parm, OutParm)
// TSoftObjectPtr<class UTexture2D>   Icon                                                             (Parm, OutParm, HasGetValueTypeHash)
// class FText                        CallFunc_GetItemName_Name                                        (None)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetItemIcon_Icon                                        (HasGetValueTypeHash)

void UUMG_ListElement_C::CreateOutputItem(struct FItemData& CraftingOutput, class FText* Name, TSoftObjectPtr<class UTexture2D>* Icon, class FText CallFunc_GetItemName_Name, TSoftObjectPtr<class UTexture2D> CallFunc_GetItemIcon_Icon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ListElement_C", "CreateOutputItem");

	Params::UUMG_ListElement_C_CreateOutputItem_Params Parms{};

	Parms.CraftingOutput = CraftingOutput;
	Parms.CallFunc_GetItemName_Name = CallFunc_GetItemName_Name;
	Parms.CallFunc_GetItemIcon_Icon = CallFunc_GetItemIcon_Icon;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = Parms.Name;

	if (Icon != nullptr)
		*Icon = Parms.Icon;

}


// Function UMG_ListElement.UMG_ListElement_C.CreateInputItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData                   CraftingInput                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class FText                        Name                                                             (Parm, OutParm)
// TSoftObjectPtr<class UTexture2D>   Icon                                                             (Parm, OutParm, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetItemIcon_Icon                                        (HasGetValueTypeHash)
// class FText                        CallFunc_GetItemName_Name                                        (None)

void UUMG_ListElement_C::CreateInputItem(struct FItemData& CraftingInput, class FText* Name, TSoftObjectPtr<class UTexture2D>* Icon, TSoftObjectPtr<class UTexture2D> CallFunc_GetItemIcon_Icon, class FText CallFunc_GetItemName_Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ListElement_C", "CreateInputItem");

	Params::UUMG_ListElement_C_CreateInputItem_Params Parms{};

	Parms.CraftingInput = CraftingInput;
	Parms.CallFunc_GetItemIcon_Icon = CallFunc_GetItemIcon_Icon;
	Parms.CallFunc_GetItemName_Name = CallFunc_GetItemName_Name;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = Parms.Name;

	if (Icon != nullptr)
		*Icon = Parms.Icon;

}


// Function UMG_ListElement.UMG_ListElement_C.InitialiseToolTip
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_RecipeToolTip_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FProcessingItem             K2Node_MakeStruct_ProcessingItem                                 (NoDestructor)
// bool                               CallFunc_IsRowHandleValid_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ListElement_C::InitialiseToolTip(class UUMG_RecipeToolTip_C* CallFunc_Create_ReturnValue, const struct FProcessingItem& K2Node_MakeStruct_ProcessingItem, bool CallFunc_IsRowHandleValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ListElement_C", "InitialiseToolTip");

	Params::UUMG_ListElement_C_InitialiseToolTip_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_MakeStruct_ProcessingItem = K2Node_MakeStruct_ProcessingItem;
	Parms.CallFunc_IsRowHandleValid_ReturnValue = CallFunc_IsRowHandleValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ListElement.UMG_ListElement_C.GetHoverCornerWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UOverlay*                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UOverlay* UUMG_ListElement_C::GetHoverCornerWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ListElement_C", "GetHoverCornerWidget");

	Params::UUMG_ListElement_C_GetHoverCornerWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_ListElement.UMG_ListElement_C.GetResourceImage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EIcarusResourceType     Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  RecipeIcon                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UTexture2D* UUMG_ListElement_C::GetResourceImage(enum class EIcarusResourceType Type, class UTexture2D* RecipeIcon, bool Temp_bool_Variable, class UTexture2D* Temp_object_Variable, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, class UTexture2D* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ListElement_C", "GetResourceImage");

	Params::UUMG_ListElement_C_GetResourceImage_Params Parms{};

	Parms.Type = Type;
	Parms.RecipeIcon = RecipeIcon;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_ListElement.UMG_ListElement_C.GetResourceOutputs
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FResourceItem>       ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FProcessorRecipesRowHandle  CallFunc_GetProcessorRecipe_ReturnValue                          (NoDestructor, HasGetValueTypeHash)
// TArray<struct FResourceItem>       CallFunc_CreateRecipeOutputResourceData_ReturnValue              (ReferenceParm)

TArray<struct FResourceItem> UUMG_ListElement_C::GetResourceOutputs(class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, const struct FProcessorRecipesRowHandle& CallFunc_GetProcessorRecipe_ReturnValue, TArray<struct FResourceItem>& CallFunc_CreateRecipeOutputResourceData_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ListElement_C", "GetResourceOutputs");

	Params::UUMG_ListElement_C_GetResourceOutputs_Params Parms{};

	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_GetProcessorRecipe_ReturnValue = CallFunc_GetProcessorRecipe_ReturnValue;
	Parms.CallFunc_CreateRecipeOutputResourceData_ReturnValue = CallFunc_CreateRecipeOutputResourceData_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_ListElement.UMG_ListElement_C.GetResourceInputs
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FResourceItem>       ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FProcessorRecipesRowHandle  CallFunc_GetProcessorRecipe_ReturnValue                          (NoDestructor, HasGetValueTypeHash)
// TArray<struct FResourceItem>       CallFunc_CreateRecipeInputResourceData_ReturnValue               (ReferenceParm)

TArray<struct FResourceItem> UUMG_ListElement_C::GetResourceInputs(class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, const struct FProcessorRecipesRowHandle& CallFunc_GetProcessorRecipe_ReturnValue, TArray<struct FResourceItem>& CallFunc_CreateRecipeInputResourceData_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ListElement_C", "GetResourceInputs");

	Params::UUMG_ListElement_C_GetResourceInputs_Params Parms{};

	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_GetProcessorRecipe_ReturnValue = CallFunc_GetProcessorRecipe_ReturnValue;
	Parms.CallFunc_CreateRecipeInputResourceData_ReturnValue = CallFunc_CreateRecipeInputResourceData_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_ListElement.UMG_ListElement_C.GetProcessorOutputs
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FItemData>           ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FProcessorRecipesRowHandle  CallFunc_GetProcessorRecipe_ReturnValue                          (NoDestructor, HasGetValueTypeHash)
// TArray<struct FItemData>           CallFunc_CreateRecipeOutputItemData_ReturnValue                  (ReferenceParm, ContainsInstancedReference)

TArray<struct FItemData> UUMG_ListElement_C::GetProcessorOutputs(class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, const struct FProcessorRecipesRowHandle& CallFunc_GetProcessorRecipe_ReturnValue, TArray<struct FItemData>& CallFunc_CreateRecipeOutputItemData_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ListElement_C", "GetProcessorOutputs");

	Params::UUMG_ListElement_C_GetProcessorOutputs_Params Parms{};

	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_GetProcessorRecipe_ReturnValue = CallFunc_GetProcessorRecipe_ReturnValue;
	Parms.CallFunc_CreateRecipeOutputItemData_ReturnValue = CallFunc_CreateRecipeOutputItemData_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_ListElement.UMG_ListElement_C.GetProcessorInputs
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FItemData>           ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FProcessorRecipesRowHandle  CallFunc_GetProcessorRecipe_ReturnValue                          (NoDestructor, HasGetValueTypeHash)
// TArray<struct FItemData>           CallFunc_CreateRecipeInputItemData_ReturnValue                   (ReferenceParm, ContainsInstancedReference)

TArray<struct FItemData> UUMG_ListElement_C::GetProcessorInputs(class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, const struct FProcessorRecipesRowHandle& CallFunc_GetProcessorRecipe_ReturnValue, TArray<struct FItemData>& CallFunc_CreateRecipeInputItemData_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ListElement_C", "GetProcessorInputs");

	Params::UUMG_ListElement_C_GetProcessorInputs_Params Parms{};

	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_GetProcessorRecipe_ReturnValue = CallFunc_GetProcessorRecipe_ReturnValue;
	Parms.CallFunc_CreateRecipeInputItemData_ReturnValue = CallFunc_CreateRecipeInputItemData_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_ListElement.UMG_ListElement_C.GetProcessorRecipe
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FProcessorRecipesRowHandle  ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

struct FProcessorRecipesRowHandle UUMG_ListElement_C::GetProcessorRecipe()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ListElement_C", "GetProcessorRecipe");

	Params::UUMG_ListElement_C_GetProcessorRecipe_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_ListElement.UMG_ListElement_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue_1                                   (None)

struct FEventReply UUMG_ListElement_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ListElement_C", "OnMouseButtonUp");

	Params::UUMG_ListElement_C_OnMouseButtonUp_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue_1 = CallFunc_Handled_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_ListElement.UMG_ListElement_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_ListElement_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ListElement_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ListElement.UMG_ListElement_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_ListElement_C::OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ListElement_C", "OnMouseEnter");

	Params::UUMG_ListElement_C_OnMouseEnter_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ListElement.UMG_ListElement_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_ListElement_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ListElement_C", "OnMouseLeave");

	Params::UUMG_ListElement_C_OnMouseLeave_Params Parms{};

	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ListElement.UMG_ListElement_C.ExecuteUbergraph_UMG_ListElement
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlay*                    CallFunc_GetOverlay_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_MouseEvent_1                                        (ConstParm)
// struct FPointerEvent               K2Node_Event_MouseEvent                                          (ConstParm)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOverlay*                    CallFunc_GetHoverCornerWidget_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlay*                    CallFunc_GetHoverCornerWidget_ReturnValue_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ListElement_C::ExecuteUbergraph_UMG_ListElement(int32 EntryPoint, class UOverlay* CallFunc_GetOverlay_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FPointerEvent& K2Node_Event_MouseEvent, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, class UOverlay* CallFunc_GetHoverCornerWidget_ReturnValue, class UOverlay* CallFunc_GetHoverCornerWidget_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ListElement_C", "ExecuteUbergraph_UMG_ListElement");

	Params::UUMG_ListElement_C_ExecuteUbergraph_UMG_ListElement_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOverlay_ReturnValue = CallFunc_GetOverlay_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_MouseEvent_1 = K2Node_Event_MouseEvent_1;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.CallFunc_GetHoverCornerWidget_ReturnValue = CallFunc_GetHoverCornerWidget_ReturnValue;
	Parms.CallFunc_GetHoverCornerWidget_ReturnValue_1 = CallFunc_GetHoverCornerWidget_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ListElement.UMG_ListElement_C.RecipeSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProcessorRecipesRowHandle  Recipe                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_ListElement_C::RecipeSelected__DelegateSignature(const struct FProcessorRecipesRowHandle& Recipe)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ListElement_C", "RecipeSelected__DelegateSignature");

	Params::UUMG_ListElement_C_RecipeSelected__DelegateSignature_Params Parms{};

	Parms.Recipe = Recipe;

	UObject::ProcessEvent(Func, &Parms);

}

}


