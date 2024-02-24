#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ListEmbeddedButton.ListEmbeddedButton_C
// (None)

class UClass* UListEmbeddedButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ListEmbeddedButton_C");

	return Clss;
}


// ListEmbeddedButton_C ListEmbeddedButton.Default__ListEmbeddedButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UListEmbeddedButton_C* UListEmbeddedButton_C::GetDefaultObj()
{
	static class UListEmbeddedButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UListEmbeddedButton_C*>(UListEmbeddedButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ListEmbeddedButton.ListEmbeddedButton_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// struct FEventReply                 CallFunc_SetUserFocus_ReturnValue                                (None)

struct FEventReply UListEmbeddedButton_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_SetUserFocus_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListEmbeddedButton_C", "OnFocusReceived");

	Params::UListEmbeddedButton_C_OnFocusReceived_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InFocusEvent = InFocusEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_SetUserFocus_ReturnValue = CallFunc_SetUserFocus_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ListEmbeddedButton.ListEmbeddedButton_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UListEmbeddedButton_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListEmbeddedButton_C", "OnRemovedFromFocusPath");

	Params::UListEmbeddedButton_C_OnRemovedFromFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListEmbeddedButton.ListEmbeddedButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListEmbeddedButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListEmbeddedButton_C", "PreConstruct");

	Params::UListEmbeddedButton_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListEmbeddedButton.ListEmbeddedButton_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UListEmbeddedButton_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListEmbeddedButton_C", "OnAddedToFocusPath");

	Params::UListEmbeddedButton_C_OnAddedToFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListEmbeddedButton.ListEmbeddedButton_C.BndEvt__ListEmbeddedButton_ButtonWidget_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UListEmbeddedButton_C::BndEvt__ListEmbeddedButton_ButtonWidget_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListEmbeddedButton_C", "BndEvt__ListEmbeddedButton_ButtonWidget_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListEmbeddedButton.ListEmbeddedButton_C.BndEvt__ListEmbeddedButton_ButtonWidget_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UListEmbeddedButton_C::BndEvt__ListEmbeddedButton_ButtonWidget_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListEmbeddedButton_C", "BndEvt__ListEmbeddedButton_ButtonWidget_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListEmbeddedButton.ListEmbeddedButton_C.SetCaption
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        NewCaption                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UListEmbeddedButton_C::SetCaption(class FText NewCaption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListEmbeddedButton_C", "SetCaption");

	Params::UListEmbeddedButton_C_SetCaption_Params Parms{};

	Parms.NewCaption = NewCaption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListEmbeddedButton.ListEmbeddedButton_C.BndEvt__ListEmbeddedButton_ButtonWidget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UListEmbeddedButton_C::BndEvt__ListEmbeddedButton_ButtonWidget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListEmbeddedButton_C", "BndEvt__ListEmbeddedButton_ButtonWidget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListEmbeddedButton.ListEmbeddedButton_C.BndEvt__ListEmbeddedButton_ButtonWidget_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UListEmbeddedButton_C::BndEvt__ListEmbeddedButton_ButtonWidget_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListEmbeddedButton_C", "BndEvt__ListEmbeddedButton_ButtonWidget_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListEmbeddedButton.ListEmbeddedButton_C.SetIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  New_Icon                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListEmbeddedButton_C::SetIcon(class UTexture2D* New_Icon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListEmbeddedButton_C", "SetIcon");

	Params::UListEmbeddedButton_C_SetIcon_Params Parms{};

	Parms.New_Icon = New_Icon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListEmbeddedButton.ListEmbeddedButton_C.ExecuteUbergraph_ListEmbeddedButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFocusEvent                 K2Node_Event_InFocusEvent_1                                      (NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UScaleBoxSlot*               K2Node_DynamicCast_AsScale_Box_Slot                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (NoDestructor)
// class FText                        K2Node_CustomEvent_NewCaption                                    (None)
// class UTexture2D*                  K2Node_CustomEvent_New_Icon                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMobilePlatform_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UButtonSlot*                 K2Node_DynamicCast_AsButton_Slot                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UListEmbeddedButton_C::ExecuteUbergraph_ListEmbeddedButton(int32 EntryPoint, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, bool K2Node_Event_IsDesignTime, class UScaleBoxSlot* K2Node_DynamicCast_AsScale_Box_Slot, bool K2Node_DynamicCast_bSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent, class FText K2Node_CustomEvent_NewCaption, class UTexture2D* K2Node_CustomEvent_New_Icon, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_IsMobilePlatform_ReturnValue, class UButtonSlot* K2Node_DynamicCast_AsButton_Slot, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListEmbeddedButton_C", "ExecuteUbergraph_ListEmbeddedButton");

	Params::UListEmbeddedButton_C_ExecuteUbergraph_ListEmbeddedButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_InFocusEvent_1 = K2Node_Event_InFocusEvent_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_DynamicCast_AsScale_Box_Slot = K2Node_DynamicCast_AsScale_Box_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.K2Node_Event_InFocusEvent = K2Node_Event_InFocusEvent;
	Parms.K2Node_CustomEvent_NewCaption = K2Node_CustomEvent_NewCaption;
	Parms.K2Node_CustomEvent_New_Icon = K2Node_CustomEvent_New_Icon;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.CallFunc_IsMobilePlatform_ReturnValue = CallFunc_IsMobilePlatform_ReturnValue;
	Parms.K2Node_DynamicCast_AsButton_Slot = K2Node_DynamicCast_AsButton_Slot;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


