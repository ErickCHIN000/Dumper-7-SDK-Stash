#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Mobile_InviteFriendButton.Mobile_InviteFriendButton_C
// (None)

class UClass* UMobile_InviteFriendButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Mobile_InviteFriendButton_C");

	return Clss;
}


// Mobile_InviteFriendButton_C Mobile_InviteFriendButton.Default__Mobile_InviteFriendButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMobile_InviteFriendButton_C* UMobile_InviteFriendButton_C::GetDefaultObj()
{
	static class UMobile_InviteFriendButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMobile_InviteFriendButton_C*>(UMobile_InviteFriendButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Mobile_InviteFriendButton.Mobile_InviteFriendButton_C.UpdateButtonColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bHasInternet                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_Select_Default                                            (None)
// class UObject*                     CallFunc_SelectObject_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)

void UMobile_InviteFriendButton_C::UpdateButtonColor(bool bHasInternet, bool Temp_bool_Variable, const struct FSlateColor& K2Node_Select_Default, class UObject* CallFunc_SelectObject_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mobile_InviteFriendButton_C", "UpdateButtonColor");

	Params::UMobile_InviteFriendButton_C_UpdateButtonColor_Params Parms{};

	Parms.bHasInternet = bHasInternet;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SelectObject_ReturnValue = CallFunc_SelectObject_ReturnValue;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mobile_InviteFriendButton.Mobile_InviteFriendButton_C.BndEvt__PlayerInviteMobileWidget_GGButton_51_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMobile_InviteFriendButton_C::BndEvt__PlayerInviteMobileWidget_GGButton_51_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mobile_InviteFriendButton_C", "BndEvt__PlayerInviteMobileWidget_GGButton_51_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mobile_InviteFriendButton.Mobile_InviteFriendButton_C.BndEvt__PlayerInviteMobileWidget_GGButton_51_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMobile_InviteFriendButton_C::BndEvt__PlayerInviteMobileWidget_GGButton_51_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mobile_InviteFriendButton_C", "BndEvt__PlayerInviteMobileWidget_GGButton_51_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mobile_InviteFriendButton.Mobile_InviteFriendButton_C.BndEvt__PlayerInviteMobileWidget_GGButton_51_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMobile_InviteFriendButton_C::BndEvt__PlayerInviteMobileWidget_GGButton_51_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mobile_InviteFriendButton_C", "BndEvt__PlayerInviteMobileWidget_GGButton_51_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mobile_InviteFriendButton.Mobile_InviteFriendButton_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMobile_InviteFriendButton_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mobile_InviteFriendButton_C", "Tick");

	Params::UMobile_InviteFriendButton_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mobile_InviteFriendButton.Mobile_InviteFriendButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMobile_InviteFriendButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mobile_InviteFriendButton_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mobile_InviteFriendButton.Mobile_InviteFriendButton_C.ExecuteUbergraph_Mobile_InviteFriendButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsConnectedToInternet_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsConnectedToInternet_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMobile_InviteFriendButton_C::ExecuteUbergraph_Mobile_InviteFriendButton(int32 EntryPoint, bool CallFunc_IsConnectedToInternet_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_IsConnectedToInternet_ReturnValue_1, bool CallFunc_NotEqual_BoolBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mobile_InviteFriendButton_C", "ExecuteUbergraph_Mobile_InviteFriendButton");

	Params::UMobile_InviteFriendButton_C_ExecuteUbergraph_Mobile_InviteFriendButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsConnectedToInternet_ReturnValue = CallFunc_IsConnectedToInternet_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_IsConnectedToInternet_ReturnValue_1 = CallFunc_IsConnectedToInternet_ReturnValue_1;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mobile_InviteFriendButton.Mobile_InviteFriendButton_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMobile_InviteFriendButton_C::OnUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mobile_InviteFriendButton_C", "OnUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mobile_InviteFriendButton.Mobile_InviteFriendButton_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMobile_InviteFriendButton_C::OnHovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mobile_InviteFriendButton_C", "OnHovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mobile_InviteFriendButton.Mobile_InviteFriendButton_C.OnReleased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMobile_InviteFriendButton_C::OnReleased__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mobile_InviteFriendButton_C", "OnReleased__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


