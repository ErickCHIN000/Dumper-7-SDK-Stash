#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SocialMediaButton.SocialMediaButton_C
// (None)

class UClass* USocialMediaButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialMediaButton_C");

	return Clss;
}


// SocialMediaButton_C SocialMediaButton.Default__SocialMediaButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USocialMediaButton_C* USocialMediaButton_C::GetDefaultObj()
{
	static class USocialMediaButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USocialMediaButton_C*>(USocialMediaButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SocialMediaButton.SocialMediaButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USocialMediaButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialMediaButton_C", "PreConstruct");

	Params::USocialMediaButton_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialMediaButton.SocialMediaButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USocialMediaButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialMediaButton_C", "BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SocialMediaButton.SocialMediaButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USocialMediaButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialMediaButton_C", "BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SocialMediaButton.SocialMediaButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USocialMediaButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialMediaButton_C", "BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SocialMediaButton.SocialMediaButton_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void USocialMediaButton_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialMediaButton_C", "OnAddedToFocusPath");

	Params::USocialMediaButton_C_OnAddedToFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialMediaButton.SocialMediaButton_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void USocialMediaButton_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialMediaButton_C", "OnRemovedFromFocusPath");

	Params::USocialMediaButton_C_OnRemovedFromFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialMediaButton.SocialMediaButton_C.ExecuteUbergraph_SocialMediaButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanLaunchURL_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 K2Node_Event_InFocusEvent_1                                      (NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (NoDestructor)

void USocialMediaButton_C::ExecuteUbergraph_SocialMediaButton(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool CallFunc_CanLaunchURL_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialMediaButton_C", "ExecuteUbergraph_SocialMediaButton");

	Params::USocialMediaButton_C_ExecuteUbergraph_SocialMediaButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_CanLaunchURL_ReturnValue = CallFunc_CanLaunchURL_ReturnValue;
	Parms.K2Node_Event_InFocusEvent_1 = K2Node_Event_InFocusEvent_1;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.K2Node_Event_InFocusEvent = K2Node_Event_InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialMediaButton.SocialMediaButton_C.OnURLLaunched__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USocialMediaButton_C*        Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      URL                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void USocialMediaButton_C::OnURLLaunched__DelegateSignature(class USocialMediaButton_C* Widget, const class FString& URL)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialMediaButton_C", "OnURLLaunched__DelegateSignature");

	Params::USocialMediaButton_C_OnURLLaunched__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;
	Parms.URL = URL;

	UObject::ProcessEvent(Func, &Parms);

}

}


