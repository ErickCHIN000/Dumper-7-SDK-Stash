#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass EquipmentSlotTitle.EquipmentSlotTitle_C
// (None)

class UClass* UEquipmentSlotTitle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EquipmentSlotTitle_C");

	return Clss;
}


// EquipmentSlotTitle_C EquipmentSlotTitle.Default__EquipmentSlotTitle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEquipmentSlotTitle_C* UEquipmentSlotTitle_C::GetDefaultObj()
{
	static class UEquipmentSlotTitle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEquipmentSlotTitle_C*>(UEquipmentSlotTitle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EquipmentSlotTitle.EquipmentSlotTitle_C.OnMouseButtonDoubleClick
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   InMyGeometry                                                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               InMouseEvent                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UEquipmentSlotTitle_C::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, struct FPointerEvent& InMouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EquipmentSlotTitle_C", "OnMouseButtonDoubleClick");

	Params::UEquipmentSlotTitle_C_OnMouseButtonDoubleClick_Params Parms{};

	Parms.InMyGeometry = InMyGeometry;
	Parms.InMouseEvent = InMouseEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EquipmentSlotTitle.EquipmentSlotTitle_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// struct FKey                        CallFunc_PointerEvent_GetEffectingButton_ReturnValue             (HasGetValueTypeHash)

struct FEventReply UEquipmentSlotTitle_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EquipmentSlotTitle_C", "OnMouseButtonDown");

	Params::UEquipmentSlotTitle_C_OnMouseButtonDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_PointerEvent_GetEffectingButton_ReturnValue = CallFunc_PointerEvent_GetEffectingButton_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EquipmentSlotTitle.EquipmentSlotTitle_C.IsEmptyEquipmentSlot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsEmpty                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentSlotTitle_C::IsEmptyEquipmentSlot(bool* IsEmpty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EquipmentSlotTitle_C", "IsEmptyEquipmentSlot");

	Params::UEquipmentSlotTitle_C_IsEmptyEquipmentSlot_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsEmpty != nullptr)
		*IsEmpty = Parms.IsEmpty;

}


// Function EquipmentSlotTitle.EquipmentSlotTitle_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentSlotTitle_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EquipmentSlotTitle_C", "PreConstruct");

	Params::UEquipmentSlotTitle_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentSlotTitle.EquipmentSlotTitle_C.UpdateName
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        SlotName                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UEquipmentSlotTitle_C::UpdateName(class FText SlotName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EquipmentSlotTitle_C", "UpdateName");

	Params::UEquipmentSlotTitle_C_UpdateName_Params Parms{};

	Parms.SlotName = SlotName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentSlotTitle.EquipmentSlotTitle_C.UpdateTextColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                 Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UEquipmentSlotTitle_C::UpdateTextColor(const struct FSlateColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EquipmentSlotTitle_C", "UpdateTextColor");

	Params::UEquipmentSlotTitle_C_UpdateTextColor_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentSlotTitle.EquipmentSlotTitle_C.SetDefaultColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentSlotTitle_C::SetDefaultColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EquipmentSlotTitle_C", "SetDefaultColor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentSlotTitle.EquipmentSlotTitle_C.ExecuteUbergraph_EquipmentSlotTitle
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_SlotName                                      (None)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)
// class UBorderSlot*                 CallFunc_SlotAsBorderSlot_ReturnValue                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_CustomEvent_Color                                         (None)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_Size_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentSlotTitle_C::ExecuteUbergraph_EquipmentSlotTitle(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool Temp_bool_IsClosed_Variable, class FText K2Node_CustomEvent_SlotName, double CallFunc_Conv_IntToDouble_ReturnValue, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, class UBorderSlot* CallFunc_SlotAsBorderSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FSlateColor& K2Node_CustomEvent_Color, bool Temp_bool_Has_Been_Initd_Variable, float K2Node_MakeStruct_Size_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EquipmentSlotTitle_C", "ExecuteUbergraph_EquipmentSlotTitle");

	Params::UEquipmentSlotTitle_C_ExecuteUbergraph_EquipmentSlotTitle_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_CustomEvent_SlotName = K2Node_CustomEvent_SlotName;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;
	Parms.CallFunc_SlotAsBorderSlot_ReturnValue = CallFunc_SlotAsBorderSlot_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_Color = K2Node_CustomEvent_Color;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_MakeStruct_Size_ImplicitCast = K2Node_MakeStruct_Size_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentSlotTitle.EquipmentSlotTitle_C.OnWidgetMouseButtonDown__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UEquipmentSlotTitle_C::OnWidgetMouseButtonDown__DelegateSignature(const struct FKey& Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EquipmentSlotTitle_C", "OnWidgetMouseButtonDown__DelegateSignature");

	Params::UEquipmentSlotTitle_C_OnWidgetMouseButtonDown__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentSlotTitle.EquipmentSlotTitle_C.ItemDropped__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJSIContainer_C*             FromContainer                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UEquipmentSlotTitle_C*       EquipmentSlotRef                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 NewSlotRef                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FFItemInfo                  PickupItemInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)

void UEquipmentSlotTitle_C::ItemDropped__DelegateSignature(class UJSIContainer_C* FromContainer, class UEquipmentSlotTitle_C* EquipmentSlotRef, class UJSI_Slot_C* NewSlotRef, const struct FFItemInfo& PickupItemInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EquipmentSlotTitle_C", "ItemDropped__DelegateSignature");

	Params::UEquipmentSlotTitle_C_ItemDropped__DelegateSignature_Params Parms{};

	Parms.FromContainer = FromContainer;
	Parms.EquipmentSlotRef = EquipmentSlotRef;
	Parms.NewSlotRef = NewSlotRef;
	Parms.PickupItemInfo = PickupItemInfo;

	UObject::ProcessEvent(Func, &Parms);

}

}


