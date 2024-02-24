#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_FieldGuide_List_Button_Item.UMG_FieldGuide_List_Button_Item_C
// (None)

class UClass* UUMG_FieldGuide_List_Button_Item_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_FieldGuide_List_Button_Item_C");

	return Clss;
}


// UMG_FieldGuide_List_Button_Item_C UMG_FieldGuide_List_Button_Item.Default__UMG_FieldGuide_List_Button_Item_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_FieldGuide_List_Button_Item_C* UUMG_FieldGuide_List_Button_Item_C::GetDefaultObj()
{
	static class UUMG_FieldGuide_List_Button_Item_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_FieldGuide_List_Button_Item_C*>(UUMG_FieldGuide_List_Button_Item_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_FieldGuide_List_Button_Item.UMG_FieldGuide_List_Button_Item_C.BndEvt__UMG_Bestiary_Creature_Button_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_FieldGuide_List_Button_Item_C::BndEvt__UMG_Bestiary_Creature_Button_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_List_Button_Item_C", "BndEvt__UMG_Bestiary_Creature_Button_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_FieldGuide_List_Button_Item.UMG_FieldGuide_List_Button_Item_C.BndEvt__UMG_Bestiary_Creature_Button_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_FieldGuide_List_Button_Item_C::BndEvt__UMG_Bestiary_Creature_Button_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_List_Button_Item_C", "BndEvt__UMG_Bestiary_Creature_Button_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_FieldGuide_List_Button_Item.UMG_FieldGuide_List_Button_Item_C.BndEvt__UMG_Bestiary_Creature_Button_Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_FieldGuide_List_Button_Item_C::BndEvt__UMG_Bestiary_Creature_Button_Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_List_Button_Item_C", "BndEvt__UMG_Bestiary_Creature_Button_Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_FieldGuide_List_Button_Item.UMG_FieldGuide_List_Button_Item_C.SetSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_FieldGuide_List_Button_Item_C::SetSelected(bool Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_List_Button_Item_C", "SetSelected");

	Params::UUMG_FieldGuide_List_Button_Item_C_SetSelected_Params Parms{};

	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuide_List_Button_Item.UMG_FieldGuide_List_Button_Item_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_FieldGuide_List_Button_Item_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_List_Button_Item_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_FieldGuide_List_Button_Item.UMG_FieldGuide_List_Button_Item_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_FieldGuide_List_Button_Item_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_List_Button_Item_C", "PreConstruct");

	Params::UUMG_FieldGuide_List_Button_Item_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuide_List_Button_Item.UMG_FieldGuide_List_Button_Item_C.ExecuteUbergraph_UMG_FieldGuide_List_Button_Item
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemStaticData             CallFunc_GetItemsStaticStruct_ItemsStatic                        (None)
// enum class EValid                  CallFunc_GetItemsStaticStruct_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemableData               CallFunc_GetItemableStruct_Itemable                              (None)
// enum class EValid                  CallFunc_GetItemableStruct_Paths                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Selected                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_2                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_3                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_4                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_5                                   (None)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_Select_Default                                            (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// struct FSlateColor                 K2Node_Select_Default_1                                          (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_1                                   (None)
// struct FButtonStyle                K2Node_MakeStruct_ButtonStyle                                    (None)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_FieldGuide_List_Button_Item_C::ExecuteUbergraph_UMG_FieldGuide_List_Button_Item(int32 EntryPoint, bool Temp_bool_Variable, const struct FItemStaticData& CallFunc_GetItemsStaticStruct_ItemsStatic, enum class EValid CallFunc_GetItemsStaticStruct_Paths, bool Temp_bool_Variable_1, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemableData& CallFunc_GetItemableStruct_Itemable, enum class EValid CallFunc_GetItemableStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_1, bool K2Node_CustomEvent_Selected, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_3, const struct FSlateColor& K2Node_MakeStruct_SlateColor_4, const struct FSlateColor& K2Node_MakeStruct_SlateColor_5, bool CallFunc_NotEqual_BoolBool_ReturnValue, const struct FSlateColor& K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateColor& K2Node_Select_Default_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_List_Button_Item_C", "ExecuteUbergraph_UMG_FieldGuide_List_Button_Item");

	Params::UUMG_FieldGuide_List_Button_Item_C_ExecuteUbergraph_UMG_FieldGuide_List_Button_Item_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetItemsStaticStruct_ItemsStatic = CallFunc_GetItemsStaticStruct_ItemsStatic;
	Parms.CallFunc_GetItemsStaticStruct_Paths = CallFunc_GetItemsStaticStruct_Paths;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetItemableStruct_Itemable = CallFunc_GetItemableStruct_Itemable;
	Parms.CallFunc_GetItemableStruct_Paths = CallFunc_GetItemableStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.CallFunc_PlayEvent2D_ReturnValue_1 = CallFunc_PlayEvent2D_ReturnValue_1;
	Parms.K2Node_CustomEvent_Selected = K2Node_CustomEvent_Selected;
	Parms.K2Node_MakeStruct_SlateColor_2 = K2Node_MakeStruct_SlateColor_2;
	Parms.K2Node_MakeStruct_SlateColor_3 = K2Node_MakeStruct_SlateColor_3;
	Parms.K2Node_MakeStruct_SlateColor_4 = K2Node_MakeStruct_SlateColor_4;
	Parms.K2Node_MakeStruct_SlateColor_5 = K2Node_MakeStruct_SlateColor_5;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_MakeStruct_SlateBrush_1 = K2Node_MakeStruct_SlateBrush_1;
	Parms.K2Node_MakeStruct_ButtonStyle = K2Node_MakeStruct_ButtonStyle;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuide_List_Button_Item.UMG_FieldGuide_List_Button_Item_C.SelectedItem__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFieldGuideCategoriesRowHandleCategory                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FItemsStaticRowHandle       Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuide_List_Button_Item_C::SelectedItem__DelegateSignature(const struct FFieldGuideCategoriesRowHandle& Category, const struct FItemsStaticRowHandle& Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_List_Button_Item_C", "SelectedItem__DelegateSignature");

	Params::UUMG_FieldGuide_List_Button_Item_C_SelectedItem__DelegateSignature_Params Parms{};

	Parms.Category = Category;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}

}


