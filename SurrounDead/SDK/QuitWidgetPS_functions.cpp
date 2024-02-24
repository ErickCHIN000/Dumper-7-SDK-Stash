#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass QuitWidgetPS.QuitWidgetPS_C
// (None)

class UClass* UQuitWidgetPS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuitWidgetPS_C");

	return Clss;
}


// QuitWidgetPS_C QuitWidgetPS.Default__QuitWidgetPS_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQuitWidgetPS_C* UQuitWidgetPS_C::GetDefaultObj()
{
	static class UQuitWidgetPS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQuitWidgetPS_C*>(UQuitWidgetPS_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QuitWidgetPS.QuitWidgetPS_C.BndEvt__YES_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UQuitWidgetPS_C::BndEvt__YES_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuitWidgetPS_C", "BndEvt__YES_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuitWidgetPS.QuitWidgetPS_C.BndEvt__NO_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UQuitWidgetPS_C::BndEvt__NO_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuitWidgetPS_C", "BndEvt__NO_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuitWidgetPS.QuitWidgetPS_C.BndEvt__YES_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UQuitWidgetPS_C::BndEvt__YES_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuitWidgetPS_C", "BndEvt__YES_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuitWidgetPS.QuitWidgetPS_C.BndEvt__NO_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UQuitWidgetPS_C::BndEvt__NO_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuitWidgetPS_C", "BndEvt__NO_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuitWidgetPS.QuitWidgetPS_C.CloseMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQuitWidgetPS_C::CloseMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuitWidgetPS_C", "CloseMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuitWidgetPS.QuitWidgetPS_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UQuitWidgetPS_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuitWidgetPS_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuitWidgetPS.QuitWidgetPS_C.ExecuteUbergraph_QuitWidgetPS
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AHUD_Game_C*                 CallFunc_GetGameHUD_HUD                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UQuitWidgetPS_C::ExecuteUbergraph_QuitWidgetPS(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AHUD_Game_C* CallFunc_GetGameHUD_HUD)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuitWidgetPS_C", "ExecuteUbergraph_QuitWidgetPS");

	Params::UQuitWidgetPS_C_ExecuteUbergraph_QuitWidgetPS_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetGameHUD_HUD = CallFunc_GetGameHUD_HUD;

	UObject::ProcessEvent(Func, &Parms);

}

}


