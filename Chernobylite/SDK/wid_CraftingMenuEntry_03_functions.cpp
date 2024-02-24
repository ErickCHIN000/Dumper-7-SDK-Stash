#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_CraftingMenuEntry_03.wid_CraftingMenuEntry_03_C
// (None)

class UClass* UWid_CraftingMenuEntry_03_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_CraftingMenuEntry_03_C");

	return Clss;
}


// wid_CraftingMenuEntry_03_C wid_CraftingMenuEntry_03.Default__wid_CraftingMenuEntry_03_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_CraftingMenuEntry_03_C* UWid_CraftingMenuEntry_03_C::GetDefaultObj()
{
	static class UWid_CraftingMenuEntry_03_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_CraftingMenuEntry_03_C*>(UWid_CraftingMenuEntry_03_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_CraftingMenuEntry_03.wid_CraftingMenuEntry_03_C.SetSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (UObjectWrapper)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (UObjectWrapper, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo_1                                (UObjectWrapper, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (UObjectWrapper)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue                        (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_2                                   (UObjectWrapper)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (UObjectWrapper)

void UWid_CraftingMenuEntry_03_C::SetSelected(bool NewSelected, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, const struct FMargin& K2Node_MakeStruct_Margin, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CraftingMenuEntry_03_C", "SetSelected");

	Params::UWid_CraftingMenuEntry_03_C_SetSelected_Params Parms{};

	Parms.NewSelected = NewSelected;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;
	Parms.K2Node_MakeStruct_SlateFontInfo_1 = K2Node_MakeStruct_SlateFontInfo_1;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue = CallFunc_MakeBrushFromTexture_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor_2 = K2Node_MakeStruct_SlateColor_2;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CraftingMenuEntry_03.wid_CraftingMenuEntry_03_C.GetItemCountText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UInventoryComponent2*        Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ItemClass                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FString                      CurrentAmount                                                    (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Count_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UWid_CraftingMenuEntry_03_C::GetItemCountText(class UInventoryComponent2* Inventory, class FName ItemClass, const class FString& CurrentAmount, float CallFunc_Count_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CraftingMenuEntry_03_C", "GetItemCountText");

	Params::UWid_CraftingMenuEntry_03_C_GetItemCountText_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.ItemClass = ItemClass;
	Parms.CurrentAmount = CurrentAmount;
	Parms.CallFunc_Count_ReturnValue = CallFunc_Count_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wid_CraftingMenuEntry_03.wid_CraftingMenuEntry_03_C.SetHighlighted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewHighlighted                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECraftingResult         CanBeCrafted                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ForceNoAnimation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_CraftingMenuEntry_03_C::SetHighlighted(bool NewHighlighted, enum class ECraftingResult CanBeCrafted, bool ForceNoAnimation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CraftingMenuEntry_03_C", "SetHighlighted");

	Params::UWid_CraftingMenuEntry_03_C_SetHighlighted_Params Parms{};

	Parms.NewHighlighted = NewHighlighted;
	Parms.CanBeCrafted = CanBeCrafted;
	Parms.ForceNoAnimation = ForceNoAnimation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CraftingMenuEntry_03.wid_CraftingMenuEntry_03_C.Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCrafting*                   CraftingComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent2*        InventoryComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CraftingMenuEntry_03_C::Update(class UCrafting* CraftingComponent, class UInventoryComponent2* InventoryComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CraftingMenuEntry_03_C", "Update");

	Params::UWid_CraftingMenuEntry_03_C_Update_Params Parms{};

	Parms.CraftingComponent = CraftingComponent;
	Parms.InventoryComponent = InventoryComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CraftingMenuEntry_03.wid_CraftingMenuEntry_03_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_CraftingMenuEntry_03_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CraftingMenuEntry_03_C", "PreConstruct");

	Params::UWid_CraftingMenuEntry_03_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CraftingMenuEntry_03.wid_CraftingMenuEntry_03_C.ExecuteUbergraph_wid_CraftingMenuEntry_03
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_NewHighlighted                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECraftingResult         K2Node_CustomEvent_CanBeCrafted                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_ForceNoAnimation                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCrafting*                   K2Node_CustomEvent_CraftingComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent2*        K2Node_CustomEvent_InventoryComponent                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipe             CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemEntry                  CallFunc_GetDataTableRowFromName_OutRow_1                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// class FText                        CallFunc_GetItemCountText_ReturnValue                            (None)

void UWid_CraftingMenuEntry_03_C::ExecuteUbergraph_wid_CraftingMenuEntry_03(int32 EntryPoint, bool K2Node_CustomEvent_NewHighlighted, enum class ECraftingResult K2Node_CustomEvent_CanBeCrafted, bool K2Node_CustomEvent_ForceNoAnimation, class UCrafting* K2Node_CustomEvent_CraftingComponent, class UInventoryComponent2* K2Node_CustomEvent_InventoryComponent, const struct FCraftingRecipe& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool K2Node_Event_IsDesignTime, const struct FItemEntry& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_GetItemCountText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CraftingMenuEntry_03_C", "ExecuteUbergraph_wid_CraftingMenuEntry_03");

	Params::UWid_CraftingMenuEntry_03_C_ExecuteUbergraph_wid_CraftingMenuEntry_03_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_NewHighlighted = K2Node_CustomEvent_NewHighlighted;
	Parms.K2Node_CustomEvent_CanBeCrafted = K2Node_CustomEvent_CanBeCrafted;
	Parms.K2Node_CustomEvent_ForceNoAnimation = K2Node_CustomEvent_ForceNoAnimation;
	Parms.K2Node_CustomEvent_CraftingComponent = K2Node_CustomEvent_CraftingComponent;
	Parms.K2Node_CustomEvent_InventoryComponent = K2Node_CustomEvent_InventoryComponent;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_GetItemCountText_ReturnValue = CallFunc_GetItemCountText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CraftingMenuEntry_03.wid_CraftingMenuEntry_03_C.UpdateDescription__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Description                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWid_CraftingMenuEntry_03_C::UpdateDescription__DelegateSignature(const class FString& Description)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CraftingMenuEntry_03_C", "UpdateDescription__DelegateSignature");

	Params::UWid_CraftingMenuEntry_03_C_UpdateDescription__DelegateSignature_Params Parms{};

	Parms.Description = Description;

	UObject::ProcessEvent(Func, &Parms);

}

}


