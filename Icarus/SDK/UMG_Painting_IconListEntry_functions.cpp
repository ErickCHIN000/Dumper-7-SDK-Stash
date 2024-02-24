#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_Painting_IconListEntry.UMG_Painting_IconListEntry_C
// (None)

class UClass* UUMG_Painting_IconListEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_Painting_IconListEntry_C");

	return Clss;
}


// UMG_Painting_IconListEntry_C UMG_Painting_IconListEntry.Default__UMG_Painting_IconListEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_Painting_IconListEntry_C* UUMG_Painting_IconListEntry_C::GetDefaultObj()
{
	static class UUMG_Painting_IconListEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_Painting_IconListEntry_C*>(UUMG_Painting_IconListEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_Painting_IconListEntry.UMG_Painting_IconListEntry_C.Get_Image_HoverIcon_Brush_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                 ReturnValue                                                      (Parm, OutParm, ReturnParm)

struct FSlateBrush UUMG_Painting_IconListEntry_C::Get_Image_HoverIcon_Brush_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Painting_IconListEntry_C", "Get_Image_HoverIcon_Brush_0");

	Params::UUMG_Painting_IconListEntry_C_Get_Image_HoverIcon_Brush_0_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_Painting_IconListEntry.UMG_Painting_IconListEntry_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Painting_IconListEntry_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Painting_IconListEntry_C", "BP_OnItemSelectionChanged");

	Params::UUMG_Painting_IconListEntry_C_BP_OnItemSelectionChanged_Params Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Painting_IconListEntry.UMG_Painting_IconListEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_Painting_IconListEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Painting_IconListEntry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Painting_IconListEntry.UMG_Painting_IconListEntry_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UUMG_Painting_IconListEntry_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Painting_IconListEntry_C", "BP_OnEntryReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Painting_IconListEntry.UMG_Painting_IconListEntry_C.SetVisuallySelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSelected                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Painting_IconListEntry_C::SetVisuallySelected(bool IsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Painting_IconListEntry_C", "SetVisuallySelected");

	Params::UUMG_Painting_IconListEntry_C_SetVisuallySelected_Params Parms{};

	Parms.IsSelected = IsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Painting_IconListEntry.UMG_Painting_IconListEntry_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     ListItemObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Painting_IconListEntry_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Painting_IconListEntry_C", "OnListItemObjectSet");

	Params::UUMG_Painting_IconListEntry_C_OnListItemObjectSet_Params Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Painting_IconListEntry.UMG_Painting_IconListEntry_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Painting_IconListEntry_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Painting_IconListEntry_C", "BP_OnItemExpansionChanged");

	Params::UUMG_Painting_IconListEntry_C_BP_OnItemExpansionChanged_Params Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Painting_IconListEntry.UMG_Painting_IconListEntry_C.ExecuteUbergraph_UMG_Painting_IconListEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsExpanded                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsSelected                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_IsSelected                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IUserListEntry>CallFunc_IsListItemSelected_UserListEntry_CastInput              (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               CallFunc_IsListItemSelected_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_Event_ListItemObject                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPaintingListItem*           K2Node_DynamicCast_AsPainting_List_Item                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPaintingData               CallFunc_GetPaintingsStruct_Paintings                            (None)
// enum class EValid                  CallFunc_GetPaintingsStruct_Paths                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Painting_IconListEntry_C::ExecuteUbergraph_UMG_Painting_IconListEntry(int32 EntryPoint, bool K2Node_Event_bIsExpanded, bool Temp_bool_Variable, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, bool K2Node_Event_bIsSelected, bool K2Node_CustomEvent_IsSelected, class UMaterialInterface* K2Node_Select_Default, TScriptInterface<class IUserListEntry> CallFunc_IsListItemSelected_UserListEntry_CastInput, bool CallFunc_IsListItemSelected_ReturnValue, class UObject* K2Node_Event_ListItemObject, class UPaintingListItem* K2Node_DynamicCast_AsPainting_List_Item, bool K2Node_DynamicCast_bSuccess, const struct FPaintingData& CallFunc_GetPaintingsStruct_Paintings, enum class EValid CallFunc_GetPaintingsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Painting_IconListEntry_C", "ExecuteUbergraph_UMG_Painting_IconListEntry");

	Params::UUMG_Painting_IconListEntry_C_ExecuteUbergraph_UMG_Painting_IconListEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bIsExpanded = K2Node_Event_bIsExpanded;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;
	Parms.K2Node_CustomEvent_IsSelected = K2Node_CustomEvent_IsSelected;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsListItemSelected_UserListEntry_CastInput = CallFunc_IsListItemSelected_UserListEntry_CastInput;
	Parms.CallFunc_IsListItemSelected_ReturnValue = CallFunc_IsListItemSelected_ReturnValue;
	Parms.K2Node_Event_ListItemObject = K2Node_Event_ListItemObject;
	Parms.K2Node_DynamicCast_AsPainting_List_Item = K2Node_DynamicCast_AsPainting_List_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPaintingsStruct_Paintings = CallFunc_GetPaintingsStruct_Paintings;
	Parms.CallFunc_GetPaintingsStruct_Paths = CallFunc_GetPaintingsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


