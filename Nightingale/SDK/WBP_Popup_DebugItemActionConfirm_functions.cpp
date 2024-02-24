#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Popup_DebugItemActionConfirm.WBP_Popup_DebugItemActionConfirm_C
// (None)

class UClass* UWBP_Popup_DebugItemActionConfirm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Popup_DebugItemActionConfirm_C");

	return Clss;
}


// WBP_Popup_DebugItemActionConfirm_C WBP_Popup_DebugItemActionConfirm.Default__WBP_Popup_DebugItemActionConfirm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Popup_DebugItemActionConfirm_C* UWBP_Popup_DebugItemActionConfirm_C::GetDefaultObj()
{
	static class UWBP_Popup_DebugItemActionConfirm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Popup_DebugItemActionConfirm_C*>(UWBP_Popup_DebugItemActionConfirm_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Popup_DebugItemActionConfirm.WBP_Popup_DebugItemActionConfirm_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_Popup_DebugItemActionConfirm_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Popup_DebugItemActionConfirm_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_Popup_DebugItemActionConfirm_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Popup_DebugItemActionConfirm.WBP_Popup_DebugItemActionConfirm_C.HandleConfirmClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Popup_DebugItemActionConfirm_C::HandleConfirmClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Popup_DebugItemActionConfirm_C", "HandleConfirmClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Popup_DebugItemActionConfirm.WBP_Popup_DebugItemActionConfirm_C.UpdateConfirmText
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDataReference          ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_Popup_DebugItemActionConfirm_C::UpdateConfirmText(const struct FItemDataReference& ItemId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Popup_DebugItemActionConfirm_C", "UpdateConfirmText");

	Params::UWBP_Popup_DebugItemActionConfirm_C_UpdateConfirmText_Params Parms{};

	Parms.ItemId = ItemId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Popup_DebugItemActionConfirm.WBP_Popup_DebugItemActionConfirm_C.UpdateCurrentItemCountFromPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Percent                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Popup_DebugItemActionConfirm_C::UpdateCurrentItemCountFromPercent(double Percent, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Popup_DebugItemActionConfirm_C", "UpdateCurrentItemCountFromPercent");

	Params::UWBP_Popup_DebugItemActionConfirm_C_UpdateCurrentItemCountFromPercent_Params Parms{};

	Parms.Percent = Percent;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_1 = CallFunc_Conv_IntToDouble_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_2 = CallFunc_Conv_IntToDouble_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Popup_DebugItemActionConfirm.WBP_Popup_DebugItemActionConfirm_C.GetMaxItemCount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FItemDataReference          ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              MaxItemCount                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Popup_DebugItemActionConfirm_C::GetMaxItemCount(const struct FItemDataReference& ItemId, int32* MaxItemCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Popup_DebugItemActionConfirm_C", "GetMaxItemCount");

	Params::UWBP_Popup_DebugItemActionConfirm_C_GetMaxItemCount_Params Parms{};

	Parms.ItemId = ItemId;

	UObject::ProcessEvent(Func, &Parms);

	if (MaxItemCount != nullptr)
		*MaxItemCount = Parms.MaxItemCount;

}


// Function WBP_Popup_DebugItemActionConfirm.WBP_Popup_DebugItemActionConfirm_C.Bind_Text_GetICurrentItemCount
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

class FText UWBP_Popup_DebugItemActionConfirm_C::Bind_Text_GetICurrentItemCount(int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Popup_DebugItemActionConfirm_C", "Bind_Text_GetICurrentItemCount");

	Params::UWBP_Popup_DebugItemActionConfirm_C_Bind_Text_GetICurrentItemCount_Params Parms{};

	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Popup_DebugItemActionConfirm.WBP_Popup_DebugItemActionConfirm_C.RefreshItemDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EItemQuality            CallFunc_GetItemQuality_Return_Value                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_ByteToText_ReturnValue                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               CallFunc_ui_Get_ItemDetails_byItemID_ItemFound                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELoadoutSlotType        CallFunc_ui_Get_ItemDetails_byItemID_EquipmentSlotType           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemQuality            CallFunc_ui_Get_ItemDetails_byItemID_Quality                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_ui_Get_ItemDetails_byItemID_MaxStackCount               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_ui_Get_ItemDetails_byItemID_ItemActor                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_ui_Get_ItemDetails_byItemID_GameplayTag                 (None)
// struct FLinearColor                CallFunc_Get_Item_Quality_Colour_QualityColour_Linear            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_Get_Item_Quality_Colour_QualityColour_Slate__UI_        (None)

void UWBP_Popup_DebugItemActionConfirm_C::RefreshItemDetails(enum class EItemQuality CallFunc_GetItemQuality_Return_Value, class FText CallFunc_Conv_ByteToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_ui_Get_ItemDetails_byItemID_ItemFound, enum class ELoadoutSlotType CallFunc_ui_Get_ItemDetails_byItemID_EquipmentSlotType, enum class EItemQuality CallFunc_ui_Get_ItemDetails_byItemID_Quality, int32 CallFunc_ui_Get_ItemDetails_byItemID_MaxStackCount, class UClass* CallFunc_ui_Get_ItemDetails_byItemID_ItemActor, const struct FGameplayTagContainer& CallFunc_ui_Get_ItemDetails_byItemID_GameplayTag, const struct FLinearColor& CallFunc_Get_Item_Quality_Colour_QualityColour_Linear, const struct FSlateColor& CallFunc_Get_Item_Quality_Colour_QualityColour_Slate__UI_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Popup_DebugItemActionConfirm_C", "RefreshItemDetails");

	Params::UWBP_Popup_DebugItemActionConfirm_C_RefreshItemDetails_Params Parms{};

	Parms.CallFunc_GetItemQuality_Return_Value = CallFunc_GetItemQuality_Return_Value;
	Parms.CallFunc_Conv_ByteToText_ReturnValue = CallFunc_Conv_ByteToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_ui_Get_ItemDetails_byItemID_ItemFound = CallFunc_ui_Get_ItemDetails_byItemID_ItemFound;
	Parms.CallFunc_ui_Get_ItemDetails_byItemID_EquipmentSlotType = CallFunc_ui_Get_ItemDetails_byItemID_EquipmentSlotType;
	Parms.CallFunc_ui_Get_ItemDetails_byItemID_Quality = CallFunc_ui_Get_ItemDetails_byItemID_Quality;
	Parms.CallFunc_ui_Get_ItemDetails_byItemID_MaxStackCount = CallFunc_ui_Get_ItemDetails_byItemID_MaxStackCount;
	Parms.CallFunc_ui_Get_ItemDetails_byItemID_ItemActor = CallFunc_ui_Get_ItemDetails_byItemID_ItemActor;
	Parms.CallFunc_ui_Get_ItemDetails_byItemID_GameplayTag = CallFunc_ui_Get_ItemDetails_byItemID_GameplayTag;
	Parms.CallFunc_Get_Item_Quality_Colour_QualityColour_Linear = CallFunc_Get_Item_Quality_Colour_QualityColour_Linear;
	Parms.CallFunc_Get_Item_Quality_Colour_QualityColour_Slate__UI_ = CallFunc_Get_Item_Quality_Colour_QualityColour_Slate__UI_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Popup_DebugItemActionConfirm.WBP_Popup_DebugItemActionConfirm_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Popup_DebugItemActionConfirm_C::BndEvt__Slider_0_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Popup_DebugItemActionConfirm_C", "BndEvt__Slider_0_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature");

	Params::UWBP_Popup_DebugItemActionConfirm_C_BndEvt__Slider_0_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Popup_DebugItemActionConfirm.WBP_Popup_DebugItemActionConfirm_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Popup_DebugItemActionConfirm_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Popup_DebugItemActionConfirm_C", "PreConstruct");

	Params::UWBP_Popup_DebugItemActionConfirm_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Popup_DebugItemActionConfirm.WBP_Popup_DebugItemActionConfirm_C.BndEvt__WBP_Popup_DebugItemActionConfirm_CBU_Confirm_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Popup_DebugItemActionConfirm_C::BndEvt__WBP_Popup_DebugItemActionConfirm_CBU_Confirm_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Popup_DebugItemActionConfirm_C", "BndEvt__WBP_Popup_DebugItemActionConfirm_CBU_Confirm_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_Popup_DebugItemActionConfirm_C_BndEvt__WBP_Popup_DebugItemActionConfirm_CBU_Confirm_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Popup_DebugItemActionConfirm.WBP_Popup_DebugItemActionConfirm_C.BndEvt__WBP_Popup_DebugItemActionConfirm_BU_Cancel_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Popup_DebugItemActionConfirm_C::BndEvt__WBP_Popup_DebugItemActionConfirm_BU_Cancel_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Popup_DebugItemActionConfirm_C", "BndEvt__WBP_Popup_DebugItemActionConfirm_BU_Cancel_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_Popup_DebugItemActionConfirm_C_BndEvt__WBP_Popup_DebugItemActionConfirm_BU_Cancel_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Popup_DebugItemActionConfirm.WBP_Popup_DebugItemActionConfirm_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_Popup_DebugItemActionConfirm_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Popup_DebugItemActionConfirm_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Popup_DebugItemActionConfirm.WBP_Popup_DebugItemActionConfirm_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_Popup_DebugItemActionConfirm_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Popup_DebugItemActionConfirm_C", "BP_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Popup_DebugItemActionConfirm.WBP_Popup_DebugItemActionConfirm_C.ExecuteUbergraph_WBP_Popup_DebugItemActionConfirm
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaxItemCount_MaxItemCount                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UpdateCurrentItemCountFromPercent_Percent_ImplicitCast  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Popup_DebugItemActionConfirm_C::ExecuteUbergraph_WBP_Popup_DebugItemActionConfirm(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_ComponentBoundEvent_Value, int32 CallFunc_GetMaxItemCount_MaxItemCount, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_IsDesignTime, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, double CallFunc_UpdateCurrentItemCountFromPercent_Percent_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Popup_DebugItemActionConfirm_C", "ExecuteUbergraph_WBP_Popup_DebugItemActionConfirm");

	Params::UWBP_Popup_DebugItemActionConfirm_C_ExecuteUbergraph_WBP_Popup_DebugItemActionConfirm_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.CallFunc_GetMaxItemCount_MaxItemCount = CallFunc_GetMaxItemCount_MaxItemCount;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_UpdateCurrentItemCountFromPercent_Percent_ImplicitCast = CallFunc_UpdateCurrentItemCountFromPercent_Percent_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Popup_DebugItemActionConfirm.WBP_Popup_DebugItemActionConfirm_C.OnCancelClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDataReference          ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_Popup_DebugItemActionConfirm_C::OnCancelClicked__DelegateSignature(const struct FItemDataReference& ItemId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Popup_DebugItemActionConfirm_C", "OnCancelClicked__DelegateSignature");

	Params::UWBP_Popup_DebugItemActionConfirm_C_OnCancelClicked__DelegateSignature_Params Parms{};

	Parms.ItemId = ItemId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Popup_DebugItemActionConfirm.WBP_Popup_DebugItemActionConfirm_C.OnConfirmClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDataReference          ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              ItemCount                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Popup_DebugItemActionConfirm_C::OnConfirmClicked__DelegateSignature(const struct FItemDataReference& ItemId, int32 ItemCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Popup_DebugItemActionConfirm_C", "OnConfirmClicked__DelegateSignature");

	Params::UWBP_Popup_DebugItemActionConfirm_C_OnConfirmClicked__DelegateSignature_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.ItemCount = ItemCount;

	UObject::ProcessEvent(Func, &Parms);

}

}


