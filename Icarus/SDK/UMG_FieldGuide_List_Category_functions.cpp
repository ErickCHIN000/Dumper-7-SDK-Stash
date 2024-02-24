#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_FieldGuide_List_Category.UMG_FieldGuide_List_Category_C
// (None)

class UClass* UUMG_FieldGuide_List_Category_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_FieldGuide_List_Category_C");

	return Clss;
}


// UMG_FieldGuide_List_Category_C UMG_FieldGuide_List_Category.Default__UMG_FieldGuide_List_Category_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_FieldGuide_List_Category_C* UUMG_FieldGuide_List_Category_C::GetDefaultObj()
{
	static class UUMG_FieldGuide_List_Category_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_FieldGuide_List_Category_C*>(UUMG_FieldGuide_List_Category_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_FieldGuide_List_Category.UMG_FieldGuide_List_Category_C.ClearChildren
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_FieldGuide_List_Category_C::ClearChildren()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_List_Category_C", "ClearChildren");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_FieldGuide_List_Category.UMG_FieldGuide_List_Category_C.UpdateCategoryButtonImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuide_List_Category_C::UpdateCategoryButtonImage(bool Temp_bool_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, bool CallFunc_IsVisible_ReturnValue, class UTexture2D* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_List_Category_C", "UpdateCategoryButtonImage");

	Params::UUMG_FieldGuide_List_Category_C_UpdateCategoryButtonImage_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuide_List_Category.UMG_FieldGuide_List_Category_C.AddWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuide_List_Category_C::AddWidget(class UUserWidget* Widget, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_List_Category_C", "AddWidget");

	Params::UUMG_FieldGuide_List_Category_C_AddWidget_Params Parms{};

	Parms.Widget = Widget;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuide_List_Category.UMG_FieldGuide_List_Category_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_FieldGuide_List_Category_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_List_Category_C", "PreConstruct");

	Params::UUMG_FieldGuide_List_Category_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuide_List_Category.UMG_FieldGuide_List_Category_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_FieldGuide_List_Category_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_List_Category_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_FieldGuide_List_Category.UMG_FieldGuide_List_Category_C.BndEvt__UMG_Bestiary_Category_UMG_ButtonIcon_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_FieldGuide_List_Category_C::BndEvt__UMG_Bestiary_Category_UMG_ButtonIcon_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_List_Category_C", "BndEvt__UMG_Bestiary_Category_UMG_ButtonIcon_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_FieldGuide_List_Category.UMG_FieldGuide_List_Category_C.BndEvt__UMG_Bestiary_Category_CategoryButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_FieldGuide_List_Category_C::BndEvt__UMG_Bestiary_Category_CategoryButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_List_Category_C", "BndEvt__UMG_Bestiary_Category_CategoryButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_FieldGuide_List_Category.UMG_FieldGuide_List_Category_C.BndEvt__UMG_Bestiary_Category_CategoryButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_FieldGuide_List_Category_C::BndEvt__UMG_Bestiary_Category_CategoryButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_List_Category_C", "BndEvt__UMG_Bestiary_Category_CategoryButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_FieldGuide_List_Category.UMG_FieldGuide_List_Category_C.BndEvt__UMG_Bestiary_Category_CategoryButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_FieldGuide_List_Category_C::BndEvt__UMG_Bestiary_Category_CategoryButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_List_Category_C", "BndEvt__UMG_Bestiary_Category_CategoryButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_FieldGuide_List_Category.UMG_FieldGuide_List_Category_C.ToggleExpand
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_FieldGuide_List_Category_C::ToggleExpand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_List_Category_C", "ToggleExpand");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_FieldGuide_List_Category.UMG_FieldGuide_List_Category_C.ClickedInternal
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_FieldGuide_List_Category_C::ClickedInternal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_List_Category_C", "ClickedInternal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_FieldGuide_List_Category.UMG_FieldGuide_List_Category_C.SetSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_FieldGuide_List_Category_C::SetSelected(bool Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_List_Category_C", "SetSelected");

	Params::UUMG_FieldGuide_List_Category_C_SetSelected_Params Parms{};

	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuide_List_Category.UMG_FieldGuide_List_Category_C.ClearSelection
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_FieldGuide_List_Category_C::ClearSelection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_List_Category_C", "ClearSelection");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_FieldGuide_List_Category.UMG_FieldGuide_List_Category_C.Expand
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_FieldGuide_List_Category_C::Expand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_List_Category_C", "Expand");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_FieldGuide_List_Category.UMG_FieldGuide_List_Category_C.ExecuteUbergraph_UMG_FieldGuide_List_Category
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
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
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_FieldGuide_List_Button_Item_C*K2Node_DynamicCast_AsUMG_Field_Guide_List_Button_Item            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_FieldGuide_List_Button_Bestiary_C*K2Node_DynamicCast_AsUMG_Field_Guide_List_Button_Bestiary        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_FieldGuide_List_Button_Fish_C*K2Node_DynamicCast_AsUMG_Field_Guide_List_Button_Fish            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_FieldGuide_List_Category_C*K2Node_DynamicCast_AsUMG_Field_Guide_List_Category               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuide_List_Category_C::ExecuteUbergraph_UMG_FieldGuide_List_Category(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, int32 Temp_int_Array_Index_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, bool CallFunc_IsVisible_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, bool K2Node_CustomEvent_Selected, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_3, const struct FSlateColor& K2Node_MakeStruct_SlateColor_4, const struct FSlateColor& K2Node_MakeStruct_SlateColor_5, bool CallFunc_NotEqual_BoolBool_ReturnValue, const struct FSlateColor& K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateColor& K2Node_Select_Default_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UUMG_FieldGuide_List_Button_Item_C* K2Node_DynamicCast_AsUMG_Field_Guide_List_Button_Item, bool K2Node_DynamicCast_bSuccess, class UUMG_FieldGuide_List_Button_Bestiary_C* K2Node_DynamicCast_AsUMG_Field_Guide_List_Button_Bestiary, bool K2Node_DynamicCast_bSuccess_1, class UUMG_FieldGuide_List_Button_Fish_C* K2Node_DynamicCast_AsUMG_Field_Guide_List_Button_Fish, bool K2Node_DynamicCast_bSuccess_2, class UUMG_FieldGuide_List_Category_C* K2Node_DynamicCast_AsUMG_Field_Guide_List_Category, bool K2Node_DynamicCast_bSuccess_3, int32 Temp_int_Loop_Counter_Variable, bool Temp_bool_Variable_2, bool CallFunc_Less_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_2, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_List_Category_C", "ExecuteUbergraph_UMG_FieldGuide_List_Category");

	Params::UUMG_FieldGuide_List_Category_C_ExecuteUbergraph_UMG_FieldGuide_List_Category_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
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
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsUMG_Field_Guide_List_Button_Item = K2Node_DynamicCast_AsUMG_Field_Guide_List_Button_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsUMG_Field_Guide_List_Button_Bestiary = K2Node_DynamicCast_AsUMG_Field_Guide_List_Button_Bestiary;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsUMG_Field_Guide_List_Button_Fish = K2Node_DynamicCast_AsUMG_Field_Guide_List_Button_Fish;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsUMG_Field_Guide_List_Category = K2Node_DynamicCast_AsUMG_Field_Guide_List_Category;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuide_List_Category.UMG_FieldGuide_List_Category_C.Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_FieldGuide_List_Category_C::Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_List_Category_C", "Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


