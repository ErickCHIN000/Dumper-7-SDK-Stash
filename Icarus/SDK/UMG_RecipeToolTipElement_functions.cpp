#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_RecipeToolTipElement.UMG_RecipeToolTipElement_C
// (None)

class UClass* UUMG_RecipeToolTipElement_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_RecipeToolTipElement_C");

	return Clss;
}


// UMG_RecipeToolTipElement_C UMG_RecipeToolTipElement.Default__UMG_RecipeToolTipElement_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_RecipeToolTipElement_C* UUMG_RecipeToolTipElement_C::GetDefaultObj()
{
	static class UUMG_RecipeToolTipElement_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_RecipeToolTipElement_C*>(UUMG_RecipeToolTipElement_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_RecipeToolTipElement.UMG_RecipeToolTipElement_C.IsOutput
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUMG_RecipeToolTipElement_C::IsOutput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeToolTipElement_C", "IsOutput");

	Params::UUMG_RecipeToolTipElement_C_IsOutput_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_RecipeToolTipElement.UMG_RecipeToolTipElement_C.CurrentAmountUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsResource_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_RecipeToolTipElement_C::CurrentAmountUpdated(bool CallFunc_IsResource_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeToolTipElement_C", "CurrentAmountUpdated");

	Params::UUMG_RecipeToolTipElement_C_CurrentAmountUpdated_Params Parms{};

	Parms.CallFunc_IsResource_ReturnValue = CallFunc_IsResource_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_RecipeToolTipElement.UMG_RecipeToolTipElement_C.UpdateBackgroundImage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Texture                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EProcessorPreview       Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EProcessorPreview       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 Temp_struct_Variable                                             (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// bool                               CallFunc_IsResource_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_Select_Default                                            (None)

void UUMG_RecipeToolTipElement_C::UpdateBackgroundImage(class UTexture2D* Texture, enum class EProcessorPreview Selected, enum class EProcessorPreview Temp_byte_Variable, const struct FSlateColor& Temp_struct_Variable, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, bool CallFunc_IsResource_ReturnValue, const struct FSlateColor& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeToolTipElement_C", "UpdateBackgroundImage");

	Params::UUMG_RecipeToolTipElement_C_UpdateBackgroundImage_Params Parms{};

	Parms.Texture = Texture;
	Parms.Selected = Selected;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.CallFunc_IsResource_ReturnValue = CallFunc_IsResource_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_RecipeToolTipElement.UMG_RecipeToolTipElement_C.Initialise
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsResource_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetResourceImage_ReturnValue                            (HasGetValueTypeHash)
// struct FItemsStaticRowHandle       CallFunc_MakeItemsStatic_ReturnValue                             (NoDestructor, HasGetValueTypeHash)
// struct FItemStaticData             CallFunc_GetItemsStaticStruct_ItemsStatic                        (None)
// enum class EValid                  CallFunc_GetItemsStaticStruct_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemableData               CallFunc_GetItemableStruct_Itemable                              (None)
// enum class EValid                  CallFunc_GetItemableStruct_Paths                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetItemIcon_Static_Icon                                 (HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_RecipeToolTipElement_C::Initialise(bool CallFunc_IsResource_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetResourceImage_ReturnValue, const struct FItemsStaticRowHandle& CallFunc_MakeItemsStatic_ReturnValue, const struct FItemStaticData& CallFunc_GetItemsStaticStruct_ItemsStatic, enum class EValid CallFunc_GetItemsStaticStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemableData& CallFunc_GetItemableStruct_Itemable, enum class EValid CallFunc_GetItemableStruct_Paths, TSoftObjectPtr<class UTexture2D> CallFunc_GetItemIcon_Static_Icon, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeToolTipElement_C", "Initialise");

	Params::UUMG_RecipeToolTipElement_C_Initialise_Params Parms{};

	Parms.CallFunc_IsResource_ReturnValue = CallFunc_IsResource_ReturnValue;
	Parms.CallFunc_GetResourceImage_ReturnValue = CallFunc_GetResourceImage_ReturnValue;
	Parms.CallFunc_MakeItemsStatic_ReturnValue = CallFunc_MakeItemsStatic_ReturnValue;
	Parms.CallFunc_GetItemsStaticStruct_ItemsStatic = CallFunc_GetItemsStaticStruct_ItemsStatic;
	Parms.CallFunc_GetItemsStaticStruct_Paths = CallFunc_GetItemsStaticStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetItemableStruct_Itemable = CallFunc_GetItemableStruct_Itemable;
	Parms.CallFunc_GetItemableStruct_Paths = CallFunc_GetItemableStruct_Paths;
	Parms.CallFunc_GetItemIcon_Static_Icon = CallFunc_GetItemIcon_Static_Icon;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_RecipeToolTipElement.UMG_RecipeToolTipElement_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_RecipeToolTipElement_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeToolTipElement_C", "PreConstruct");

	Params::UUMG_RecipeToolTipElement_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_RecipeToolTipElement.UMG_RecipeToolTipElement_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_RecipeToolTipElement_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeToolTipElement_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_RecipeToolTipElement.UMG_RecipeToolTipElement_C.ExecuteUbergraph_UMG_RecipeToolTipElement
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBorderSlot*                 CallFunc_SlotAsBorderSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_RecipeToolTipElement_C::ExecuteUbergraph_UMG_RecipeToolTipElement(int32 EntryPoint, bool Temp_bool_Variable, const struct FMargin& K2Node_MakeStruct_Margin, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, enum class ESlateVisibility K2Node_Select_Default, class UBorderSlot* CallFunc_SlotAsBorderSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeToolTipElement_C", "ExecuteUbergraph_UMG_RecipeToolTipElement");

	Params::UUMG_RecipeToolTipElement_C_ExecuteUbergraph_UMG_RecipeToolTipElement_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SlotAsBorderSlot_ReturnValue = CallFunc_SlotAsBorderSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


