#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_PlayerCamp.WB_PlayerCamp_C
// (None)

class UClass* UWB_PlayerCamp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_PlayerCamp_C");

	return Clss;
}


// WB_PlayerCamp_C WB_PlayerCamp.Default__WB_PlayerCamp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_PlayerCamp_C* UWB_PlayerCamp_C::GetDefaultObj()
{
	static class UWB_PlayerCamp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_PlayerCamp_C*>(UWB_PlayerCamp_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_PlayerCamp.WB_PlayerCamp_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UWB_PlayerCamp_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerCamp_C", "OnMouseButtonDown");

	Params::UWB_PlayerCamp_C_OnMouseButtonDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_PlayerCamp.WB_PlayerCamp_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FKey                        Key_Input                                                        (Edit, BlueprintVisible, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FEventReply UWB_PlayerCamp_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& Key_Input, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerCamp_C", "OnKeyDown");

	Params::UWB_PlayerCamp_C_OnKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.Key_Input = Key_Input;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_PlayerCamp.WB_PlayerCamp_C.BndEvt__WB_PlayerCamp_Button_Tent_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_PlayerCamp_C::BndEvt__WB_PlayerCamp_Button_Tent_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerCamp_C", "BndEvt__WB_PlayerCamp_Button_Tent_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PlayerCamp.WB_PlayerCamp_C.BndEvt__WB_PlayerCamp_Button_Bed_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_PlayerCamp_C::BndEvt__WB_PlayerCamp_Button_Bed_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerCamp_C", "BndEvt__WB_PlayerCamp_Button_Bed_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PlayerCamp.WB_PlayerCamp_C.BndEvt__WB_PlayerCamp_Button_Exit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_PlayerCamp_C::BndEvt__WB_PlayerCamp_Button_Exit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerCamp_C", "BndEvt__WB_PlayerCamp_Button_Exit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PlayerCamp.WB_PlayerCamp_C.BndEvt__WB_PlayerCamp_Button_Exit_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_PlayerCamp_C::BndEvt__WB_PlayerCamp_Button_Exit_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerCamp_C", "BndEvt__WB_PlayerCamp_Button_Exit_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PlayerCamp.WB_PlayerCamp_C.BndEvt__WB_PlayerCamp_Button_Exit_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_PlayerCamp_C::BndEvt__WB_PlayerCamp_Button_Exit_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerCamp_C", "BndEvt__WB_PlayerCamp_Button_Exit_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PlayerCamp.WB_PlayerCamp_C.BndEvt__WB_PlayerCamp_Button_Stash_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_PlayerCamp_C::BndEvt__WB_PlayerCamp_Button_Stash_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerCamp_C", "BndEvt__WB_PlayerCamp_Button_Stash_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PlayerCamp.WB_PlayerCamp_C.BndEvt__WB_PlayerCamp_Button_Obelisk_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_PlayerCamp_C::BndEvt__WB_PlayerCamp_Button_Obelisk_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerCamp_C", "BndEvt__WB_PlayerCamp_Button_Obelisk_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PlayerCamp.WB_PlayerCamp_C.BndEvt__WB_PlayerCamp_Button_Defences_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_PlayerCamp_C::BndEvt__WB_PlayerCamp_Button_Defences_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerCamp_C", "BndEvt__WB_PlayerCamp_Button_Defences_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PlayerCamp.WB_PlayerCamp_C.BndEvt__WB_PlayerCamp_Button_Craftsman_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_PlayerCamp_C::BndEvt__WB_PlayerCamp_Button_Craftsman_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerCamp_C", "BndEvt__WB_PlayerCamp_Button_Craftsman_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PlayerCamp.WB_PlayerCamp_C.BndEvt__WB_PlayerCamp_Button_Cooking_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_PlayerCamp_C::BndEvt__WB_PlayerCamp_Button_Cooking_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerCamp_C", "BndEvt__WB_PlayerCamp_Button_Cooking_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PlayerCamp.WB_PlayerCamp_C.BndEvt__WB_PlayerCamp_Button_Breeding_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_PlayerCamp_C::BndEvt__WB_PlayerCamp_Button_Breeding_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerCamp_C", "BndEvt__WB_PlayerCamp_Button_Breeding_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PlayerCamp.WB_PlayerCamp_C.BndEvt__WB_PlayerCamp_Button_Alchemy_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_PlayerCamp_C::BndEvt__WB_PlayerCamp_Button_Alchemy_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerCamp_C", "BndEvt__WB_PlayerCamp_Button_Alchemy_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PlayerCamp.WB_PlayerCamp_C.BndEvt__WB_PlayerCamp_Button_FollowerCamp_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_PlayerCamp_C::BndEvt__WB_PlayerCamp_Button_FollowerCamp_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerCamp_C", "BndEvt__WB_PlayerCamp_Button_FollowerCamp_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PlayerCamp.WB_PlayerCamp_C.BndEvt__WB_PlayerCamp_Button_Walkway_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_PlayerCamp_C::BndEvt__WB_PlayerCamp_Button_Walkway_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerCamp_C", "BndEvt__WB_PlayerCamp_Button_Walkway_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PlayerCamp.WB_PlayerCamp_C.SwitchFade
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_PlayerCamp_C::SwitchFade()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerCamp_C", "SwitchFade");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PlayerCamp.WB_PlayerCamp_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_PlayerCamp_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerCamp_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PlayerCamp.WB_PlayerCamp_C.BndEvt__WB_PlayerCamp_Button_Tent_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_PlayerCamp_C::BndEvt__WB_PlayerCamp_Button_Tent_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerCamp_C", "BndEvt__WB_PlayerCamp_Button_Tent_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PlayerCamp.WB_PlayerCamp_C.BndEvt__WB_PlayerCamp_Button_Tent_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_PlayerCamp_C::BndEvt__WB_PlayerCamp_Button_Tent_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerCamp_C", "BndEvt__WB_PlayerCamp_Button_Tent_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PlayerCamp.WB_PlayerCamp_C.BndEvt__WB_PlayerCamp_Button_Stash_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_PlayerCamp_C::BndEvt__WB_PlayerCamp_Button_Stash_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerCamp_C", "BndEvt__WB_PlayerCamp_Button_Stash_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PlayerCamp.WB_PlayerCamp_C.BndEvt__WB_PlayerCamp_Button_Stash_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_PlayerCamp_C::BndEvt__WB_PlayerCamp_Button_Stash_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerCamp_C", "BndEvt__WB_PlayerCamp_Button_Stash_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PlayerCamp.WB_PlayerCamp_C.BndEvt__WB_PlayerCamp_Button_Bed_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_PlayerCamp_C::BndEvt__WB_PlayerCamp_Button_Bed_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerCamp_C", "BndEvt__WB_PlayerCamp_Button_Bed_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PlayerCamp.WB_PlayerCamp_C.BndEvt__WB_PlayerCamp_Button_Bed_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_PlayerCamp_C::BndEvt__WB_PlayerCamp_Button_Bed_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerCamp_C", "BndEvt__WB_PlayerCamp_Button_Bed_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PlayerCamp.WB_PlayerCamp_C.BndEvt__WB_PlayerCamp_Button_Walkway_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_PlayerCamp_C::BndEvt__WB_PlayerCamp_Button_Walkway_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerCamp_C", "BndEvt__WB_PlayerCamp_Button_Walkway_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PlayerCamp.WB_PlayerCamp_C.BndEvt__WB_PlayerCamp_Button_Walkway_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_PlayerCamp_C::BndEvt__WB_PlayerCamp_Button_Walkway_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerCamp_C", "BndEvt__WB_PlayerCamp_Button_Walkway_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PlayerCamp.WB_PlayerCamp_C.BndEvt__WB_PlayerCamp_Button_Obelisk_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_PlayerCamp_C::BndEvt__WB_PlayerCamp_Button_Obelisk_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerCamp_C", "BndEvt__WB_PlayerCamp_Button_Obelisk_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PlayerCamp.WB_PlayerCamp_C.BndEvt__WB_PlayerCamp_Button_Obelisk_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_PlayerCamp_C::BndEvt__WB_PlayerCamp_Button_Obelisk_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerCamp_C", "BndEvt__WB_PlayerCamp_Button_Obelisk_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PlayerCamp.WB_PlayerCamp_C.BndEvt__WB_PlayerCamp_Button_Alchemy_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_PlayerCamp_C::BndEvt__WB_PlayerCamp_Button_Alchemy_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerCamp_C", "BndEvt__WB_PlayerCamp_Button_Alchemy_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PlayerCamp.WB_PlayerCamp_C.BndEvt__WB_PlayerCamp_Button_Alchemy_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_PlayerCamp_C::BndEvt__WB_PlayerCamp_Button_Alchemy_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerCamp_C", "BndEvt__WB_PlayerCamp_Button_Alchemy_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PlayerCamp.WB_PlayerCamp_C.BndEvt__WB_PlayerCamp_Button_FollowerCamp_K2Node_ComponentBoundEvent_30_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_PlayerCamp_C::BndEvt__WB_PlayerCamp_Button_FollowerCamp_K2Node_ComponentBoundEvent_30_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerCamp_C", "BndEvt__WB_PlayerCamp_Button_FollowerCamp_K2Node_ComponentBoundEvent_30_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PlayerCamp.WB_PlayerCamp_C.BndEvt__WB_PlayerCamp_Button_FollowerCamp_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_PlayerCamp_C::BndEvt__WB_PlayerCamp_Button_FollowerCamp_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerCamp_C", "BndEvt__WB_PlayerCamp_Button_FollowerCamp_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PlayerCamp.WB_PlayerCamp_C.BndEvt__WB_PlayerCamp_Button_Craftsman_K2Node_ComponentBoundEvent_32_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_PlayerCamp_C::BndEvt__WB_PlayerCamp_Button_Craftsman_K2Node_ComponentBoundEvent_32_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerCamp_C", "BndEvt__WB_PlayerCamp_Button_Craftsman_K2Node_ComponentBoundEvent_32_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PlayerCamp.WB_PlayerCamp_C.BndEvt__WB_PlayerCamp_Button_Craftsman_K2Node_ComponentBoundEvent_33_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_PlayerCamp_C::BndEvt__WB_PlayerCamp_Button_Craftsman_K2Node_ComponentBoundEvent_33_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerCamp_C", "BndEvt__WB_PlayerCamp_Button_Craftsman_K2Node_ComponentBoundEvent_33_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PlayerCamp.WB_PlayerCamp_C.BndEvt__WB_PlayerCamp_Button_Cooking_K2Node_ComponentBoundEvent_34_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_PlayerCamp_C::BndEvt__WB_PlayerCamp_Button_Cooking_K2Node_ComponentBoundEvent_34_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerCamp_C", "BndEvt__WB_PlayerCamp_Button_Cooking_K2Node_ComponentBoundEvent_34_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PlayerCamp.WB_PlayerCamp_C.BndEvt__WB_PlayerCamp_Button_Cooking_K2Node_ComponentBoundEvent_35_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_PlayerCamp_C::BndEvt__WB_PlayerCamp_Button_Cooking_K2Node_ComponentBoundEvent_35_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerCamp_C", "BndEvt__WB_PlayerCamp_Button_Cooking_K2Node_ComponentBoundEvent_35_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PlayerCamp.WB_PlayerCamp_C.BndEvt__WB_PlayerCamp_Button_Defences_K2Node_ComponentBoundEvent_36_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_PlayerCamp_C::BndEvt__WB_PlayerCamp_Button_Defences_K2Node_ComponentBoundEvent_36_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerCamp_C", "BndEvt__WB_PlayerCamp_Button_Defences_K2Node_ComponentBoundEvent_36_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PlayerCamp.WB_PlayerCamp_C.BndEvt__WB_PlayerCamp_Button_Defences_K2Node_ComponentBoundEvent_37_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_PlayerCamp_C::BndEvt__WB_PlayerCamp_Button_Defences_K2Node_ComponentBoundEvent_37_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerCamp_C", "BndEvt__WB_PlayerCamp_Button_Defences_K2Node_ComponentBoundEvent_37_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PlayerCamp.WB_PlayerCamp_C.BndEvt__WB_PlayerCamp_Button_Breeding_K2Node_ComponentBoundEvent_38_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_PlayerCamp_C::BndEvt__WB_PlayerCamp_Button_Breeding_K2Node_ComponentBoundEvent_38_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerCamp_C", "BndEvt__WB_PlayerCamp_Button_Breeding_K2Node_ComponentBoundEvent_38_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PlayerCamp.WB_PlayerCamp_C.BndEvt__WB_PlayerCamp_Button_Breeding_K2Node_ComponentBoundEvent_39_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_PlayerCamp_C::BndEvt__WB_PlayerCamp_Button_Breeding_K2Node_ComponentBoundEvent_39_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerCamp_C", "BndEvt__WB_PlayerCamp_Button_Breeding_K2Node_ComponentBoundEvent_39_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PlayerCamp.WB_PlayerCamp_C.ExitCamp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_PlayerCamp_C::ExitCamp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerCamp_C", "ExitCamp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PlayerCamp.WB_PlayerCamp_C.Display Items
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_CampItems             Camp_Item                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PlayerCamp_C::Display_Items(enum class E_CampItems Camp_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerCamp_C", "Display Items");

	Params::UWB_PlayerCamp_C_Display_Items_Params Parms{};

	Parms.Camp_Item = Camp_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PlayerCamp.WB_PlayerCamp_C.Select Item
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_CampUnlocks              Camp_Item                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash)

void UWB_PlayerCamp_C::Select_Item(const struct FS_CampUnlocks& Camp_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerCamp_C", "Select Item");

	Params::UWB_PlayerCamp_C_Select_Item_Params Parms{};

	Parms.Camp_Item = Camp_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PlayerCamp.WB_PlayerCamp_C.ExecuteUbergraph_WB_PlayerCamp
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASEQ_Master_PlayerCamp_C*    CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CombatCharacter_C*       CallFunc_Get_Player_Reference_Player                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// TArray<struct FS_CampUnlocks>      CallFunc_Map_Values_Values                                       (ReferenceParm, ContainsInstancedReference)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// struct FS_CampUnlocks              CallFunc_Array_Get_Item                                          (ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_CampOption_C*            CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CampItems             K2Node_CustomEvent_Camp_Item_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_CampUnlocks              K2Node_CustomEvent_Camp_Item                                     (ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash)
// class ABP_CombatCharacter_C*       CallFunc_Get_Player_Reference_Player_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_2                                   (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PlayerCamp_C::ExecuteUbergraph_WB_PlayerCamp(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32 Temp_int_Array_Index_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class ASEQ_Master_PlayerCamp_C* CallFunc_GetActorOfClass_ReturnValue, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, const struct FSlateColor& K2Node_MakeStruct_SlateColor, TArray<struct FS_CampUnlocks>& CallFunc_Map_Values_Values, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FS_CampUnlocks& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UWB_CampOption_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, enum class E_CampItems K2Node_CustomEvent_Camp_Item_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FS_CampUnlocks& K2Node_CustomEvent_Camp_Item, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerCamp_C", "ExecuteUbergraph_WB_PlayerCamp");

	Params::UWB_PlayerCamp_C_ExecuteUbergraph_WB_PlayerCamp_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.CallFunc_Get_Player_Reference_Player = CallFunc_Get_Player_Reference_Player;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_CustomEvent_Camp_Item_1 = K2Node_CustomEvent_Camp_Item_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_CustomEvent_Camp_Item = K2Node_CustomEvent_Camp_Item;
	Parms.CallFunc_Get_Player_Reference_Player_1 = CallFunc_Get_Player_Reference_Player_1;
	Parms.K2Node_MakeStruct_SlateColor_2 = K2Node_MakeStruct_SlateColor_2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


