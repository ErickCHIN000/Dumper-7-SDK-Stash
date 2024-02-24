#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_ExtractionElement.UMG_ExtractionElement_C
// (None)

class UClass* UUMG_ExtractionElement_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_ExtractionElement_C");

	return Clss;
}


// UMG_ExtractionElement_C UMG_ExtractionElement.Default__UMG_ExtractionElement_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_ExtractionElement_C* UUMG_ExtractionElement_C::GetDefaultObj()
{
	static class UUMG_ExtractionElement_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_ExtractionElement_C*>(UUMG_ExtractionElement_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_ExtractionElement.UMG_ExtractionElement_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Progress                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ExtractionElement_C::Update(float Progress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ExtractionElement_C", "Update");

	Params::UUMG_ExtractionElement_C_Update_Params Parms{};

	Parms.Progress = Progress;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ExtractionElement.UMG_ExtractionElement_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetItemIcon_Icon                                        (HasGetValueTypeHash)
// class UUMG_ItemPopup_C*            CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Show_for_Item_Shown                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ExtractionElement_C::Setup(const struct FItemData& Item, TSoftObjectPtr<class UTexture2D> CallFunc_GetItemIcon_Icon, class UUMG_ItemPopup_C* CallFunc_Create_ReturnValue, bool CallFunc_Show_for_Item_Shown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ExtractionElement_C", "Setup");

	Params::UUMG_ExtractionElement_C_Setup_Params Parms{};

	Parms.Item = Item;
	Parms.CallFunc_GetItemIcon_Icon = CallFunc_GetItemIcon_Icon;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Show_for_Item_Shown = CallFunc_Show_for_Item_Shown;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ExtractionElement.UMG_ExtractionElement_C.GetOverlay
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOverlay*                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UOverlay* UUMG_ExtractionElement_C::GetOverlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ExtractionElement_C", "GetOverlay");

	Params::UUMG_ExtractionElement_C_GetOverlay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_ExtractionElement.UMG_ExtractionElement_C.GetHoverCornerWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UOverlay*                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UOverlay* UUMG_ExtractionElement_C::GetHoverCornerWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ExtractionElement_C", "GetHoverCornerWidget");

	Params::UUMG_ExtractionElement_C_GetHoverCornerWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_ExtractionElement.UMG_ExtractionElement_C.SetState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Valid                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ExtractionElement_C::SetState(bool Valid, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ExtractionElement_C", "SetState");

	Params::UUMG_ExtractionElement_C_SetState_Params Parms{};

	Parms.Valid = Valid;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ExtractionElement.UMG_ExtractionElement_C.InitialiseIcons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_ExtractionElement_C::InitialiseIcons()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ExtractionElement_C", "InitialiseIcons");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ExtractionElement.UMG_ExtractionElement_C.GetProcessorRecipe
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FProcessorRecipesRowHandle  ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

struct FProcessorRecipesRowHandle UUMG_ExtractionElement_C::GetProcessorRecipe()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ExtractionElement_C", "GetProcessorRecipe");

	Params::UUMG_ExtractionElement_C_GetProcessorRecipe_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_ExtractionElement.UMG_ExtractionElement_C.Clear
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_ExtractionElement_C::Clear()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ExtractionElement_C", "Clear");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ExtractionElement.UMG_ExtractionElement_C.UpdateRecipeFrame
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class UObject*                     Image                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_ButtonState           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// enum class E_ButtonState           Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FSlateBrush UUMG_ExtractionElement_C::UpdateRecipeFrame(class UObject* Image, enum class E_ButtonState Temp_byte_Variable, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, enum class E_ButtonState Temp_byte_Variable_1, bool CallFunc_BooleanOR_ReturnValue, class UObject* K2Node_Select_Default, class UObject* K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ExtractionElement_C", "UpdateRecipeFrame");

	Params::UUMG_ExtractionElement_C_UpdateRecipeFrame_Params Parms{};

	Parms.Image = Image;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_ExtractionElement.UMG_ExtractionElement_C.Finished_6601930D42BF20E1F59D04AF66576E42
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_ExtractionElement_C::Finished_6601930D42BF20E1F59D04AF66576E42()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ExtractionElement_C", "Finished_6601930D42BF20E1F59D04AF66576E42");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ExtractionElement.UMG_ExtractionElement_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ExtractionElement_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ExtractionElement_C", "BP_OnItemSelectionChanged");

	Params::UUMG_ExtractionElement_C_BP_OnItemSelectionChanged_Params Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ExtractionElement.UMG_ExtractionElement_C.SetProgress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Percent                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FProcessorRecipesRowHandle  CurrentQueueRecipe                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               QueueEmpty                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ExtractionElement_C::SetProgress(float Percent, const struct FProcessorRecipesRowHandle& CurrentQueueRecipe, bool QueueEmpty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ExtractionElement_C", "SetProgress");

	Params::UUMG_ExtractionElement_C_SetProgress_Params Parms{};

	Parms.Percent = Percent;
	Parms.CurrentQueueRecipe = CurrentQueueRecipe;
	Parms.QueueEmpty = QueueEmpty;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ExtractionElement.UMG_ExtractionElement_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ExtractionElement_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ExtractionElement_C", "BP_OnItemExpansionChanged");

	Params::UUMG_ExtractionElement_C_BP_OnItemExpansionChanged_Params Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ExtractionElement.UMG_ExtractionElement_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UUMG_ExtractionElement_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ExtractionElement_C", "BP_OnEntryReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ExtractionElement.UMG_ExtractionElement_C.ExecuteUbergraph_UMG_ExtractionElement
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsSelected                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_Percent                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FProcessorRecipesRowHandle  K2Node_CustomEvent_CurrentQueueRecipe                            (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_QueueEmpty                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsExpanded                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FProcessorRecipesRowHandle  CallFunc_GetProcessorRecipe_ReturnValue                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FProcessorRecipesRowHandleFProcessorRecipesRowHandle_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ExtractionElement_C::ExecuteUbergraph_UMG_ExtractionElement(int32 EntryPoint, bool K2Node_Event_bIsSelected, bool CallFunc_NotEqual_FloatFloat_ReturnValue, float K2Node_CustomEvent_Percent, const struct FProcessorRecipesRowHandle& K2Node_CustomEvent_CurrentQueueRecipe, bool K2Node_CustomEvent_QueueEmpty, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool K2Node_Event_bIsExpanded, const struct FProcessorRecipesRowHandle& CallFunc_GetProcessorRecipe_ReturnValue, bool CallFunc_EqualEqual_FProcessorRecipesRowHandleFProcessorRecipesRowHandle_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ExtractionElement_C", "ExecuteUbergraph_UMG_ExtractionElement");

	Params::UUMG_ExtractionElement_C_ExecuteUbergraph_UMG_ExtractionElement_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.K2Node_CustomEvent_Percent = K2Node_CustomEvent_Percent;
	Parms.K2Node_CustomEvent_CurrentQueueRecipe = K2Node_CustomEvent_CurrentQueueRecipe;
	Parms.K2Node_CustomEvent_QueueEmpty = K2Node_CustomEvent_QueueEmpty;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.K2Node_Event_bIsExpanded = K2Node_Event_bIsExpanded;
	Parms.CallFunc_GetProcessorRecipe_ReturnValue = CallFunc_GetProcessorRecipe_ReturnValue;
	Parms.CallFunc_EqualEqual_FProcessorRecipesRowHandleFProcessorRecipesRowHandle_ReturnValue = CallFunc_EqualEqual_FProcessorRecipesRowHandleFProcessorRecipesRowHandle_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result = CallFunc_CreatePlayAnimationProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue = CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


