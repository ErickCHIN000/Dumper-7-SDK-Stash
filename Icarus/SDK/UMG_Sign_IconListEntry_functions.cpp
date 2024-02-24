#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_Sign_IconListEntry.UMG_Sign_IconListEntry_C
// (None)

class UClass* UUMG_Sign_IconListEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_Sign_IconListEntry_C");

	return Clss;
}


// UMG_Sign_IconListEntry_C UMG_Sign_IconListEntry.Default__UMG_Sign_IconListEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_Sign_IconListEntry_C* UUMG_Sign_IconListEntry_C::GetDefaultObj()
{
	static class UUMG_Sign_IconListEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_Sign_IconListEntry_C*>(UUMG_Sign_IconListEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_Sign_IconListEntry.UMG_Sign_IconListEntry_C.Get_Image_HoverIcon_Brush_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                 ReturnValue                                                      (Parm, OutParm, ReturnParm)

struct FSlateBrush UUMG_Sign_IconListEntry_C::Get_Image_HoverIcon_Brush_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Sign_IconListEntry_C", "Get_Image_HoverIcon_Brush_0");

	Params::UUMG_Sign_IconListEntry_C_Get_Image_HoverIcon_Brush_0_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_Sign_IconListEntry.UMG_Sign_IconListEntry_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Sign_IconListEntry_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Sign_IconListEntry_C", "BP_OnItemExpansionChanged");

	Params::UUMG_Sign_IconListEntry_C_BP_OnItemExpansionChanged_Params Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Sign_IconListEntry.UMG_Sign_IconListEntry_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     ListItemObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Sign_IconListEntry_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Sign_IconListEntry_C", "OnListItemObjectSet");

	Params::UUMG_Sign_IconListEntry_C_OnListItemObjectSet_Params Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Sign_IconListEntry.UMG_Sign_IconListEntry_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Sign_IconListEntry_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Sign_IconListEntry_C", "BP_OnItemSelectionChanged");

	Params::UUMG_Sign_IconListEntry_C_BP_OnItemSelectionChanged_Params Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Sign_IconListEntry.UMG_Sign_IconListEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_Sign_IconListEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Sign_IconListEntry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Sign_IconListEntry.UMG_Sign_IconListEntry_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UUMG_Sign_IconListEntry_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Sign_IconListEntry_C", "BP_OnEntryReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Sign_IconListEntry.UMG_Sign_IconListEntry_C.SetVisuallySelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSelected                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Sign_IconListEntry_C::SetVisuallySelected(bool IsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Sign_IconListEntry_C", "SetVisuallySelected");

	Params::UUMG_Sign_IconListEntry_C_SetVisuallySelected_Params Parms{};

	Parms.IsSelected = IsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Sign_IconListEntry.UMG_Sign_IconListEntry_C.ExecuteUbergraph_UMG_Sign_IconListEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsExpanded                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_Event_ListItemObject                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USignIconListItem*           K2Node_DynamicCast_AsSign_Icon_List_Item                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsSelected                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FItemableData               CallFunc_GetItemableStruct_Itemable                              (None)
// enum class EValid                  CallFunc_GetItemableStruct_Paths                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_IsSelected                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IUserListEntry>CallFunc_IsListItemSelected_UserListEntry_CastInput              (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               CallFunc_IsListItemSelected_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Sign_IconListEntry_C::ExecuteUbergraph_UMG_Sign_IconListEntry(int32 EntryPoint, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, bool K2Node_Event_bIsExpanded, class UObject* K2Node_Event_ListItemObject, class USignIconListItem* K2Node_DynamicCast_AsSign_Icon_List_Item, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_bIsSelected, class FText CallFunc_Conv_NameToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FItemableData& CallFunc_GetItemableStruct_Itemable, enum class EValid CallFunc_GetItemableStruct_Paths, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess_1, bool Temp_bool_Variable, bool K2Node_CustomEvent_IsSelected, class UMaterialInterface* K2Node_Select_Default, TScriptInterface<class IUserListEntry> CallFunc_IsListItemSelected_UserListEntry_CastInput, bool CallFunc_IsListItemSelected_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Sign_IconListEntry_C", "ExecuteUbergraph_UMG_Sign_IconListEntry");

	Params::UUMG_Sign_IconListEntry_C_ExecuteUbergraph_UMG_Sign_IconListEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_Event_bIsExpanded = K2Node_Event_bIsExpanded;
	Parms.K2Node_Event_ListItemObject = K2Node_Event_ListItemObject;
	Parms.K2Node_DynamicCast_AsSign_Icon_List_Item = K2Node_DynamicCast_AsSign_Icon_List_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetItemableStruct_Itemable = CallFunc_GetItemableStruct_Itemable;
	Parms.CallFunc_GetItemableStruct_Paths = CallFunc_GetItemableStruct_Paths;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CustomEvent_IsSelected = K2Node_CustomEvent_IsSelected;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsListItemSelected_UserListEntry_CastInput = CallFunc_IsListItemSelected_UserListEntry_CastInput;
	Parms.CallFunc_IsListItemSelected_ReturnValue = CallFunc_IsListItemSelected_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


