#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_ServerProviderButton.UMG_ServerProviderButton_C
// (None)

class UClass* UUMG_ServerProviderButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_ServerProviderButton_C");

	return Clss;
}


// UMG_ServerProviderButton_C UMG_ServerProviderButton.Default__UMG_ServerProviderButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_ServerProviderButton_C* UUMG_ServerProviderButton_C::GetDefaultObj()
{
	static class UUMG_ServerProviderButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_ServerProviderButton_C*>(UUMG_ServerProviderButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_ServerProviderButton.UMG_ServerProviderButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_ServerProviderButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ServerProviderButton_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ServerProviderButton.UMG_ServerProviderButton_C.BndEvt__UMG_ServerProviderButton_Button_14_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_ServerProviderButton_C::BndEvt__UMG_ServerProviderButton_Button_14_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ServerProviderButton_C", "BndEvt__UMG_ServerProviderButton_Button_14_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ServerProviderButton.UMG_ServerProviderButton_C.BndEvt__UMG_ServerProviderButton_Button_14_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_ServerProviderButton_C::BndEvt__UMG_ServerProviderButton_Button_14_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ServerProviderButton_C", "BndEvt__UMG_ServerProviderButton_Button_14_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ServerProviderButton.UMG_ServerProviderButton_C.BndEvt__UMG_ServerProviderButton_Button_14_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_ServerProviderButton_C::BndEvt__UMG_ServerProviderButton_Button_14_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ServerProviderButton_C", "BndEvt__UMG_ServerProviderButton_Button_14_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ServerProviderButton.UMG_ServerProviderButton_C.ExecuteUbergraph_UMG_ServerProviderButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_R                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ServerProviderButton_C::ExecuteUbergraph_UMG_ServerProviderButton(int32 EntryPoint, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& K2Node_MakeStruct_LinearColor_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ServerProviderButton_C", "ExecuteUbergraph_UMG_ServerProviderButton");

	Params::UUMG_ServerProviderButton_C_ExecuteUbergraph_UMG_ServerProviderButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_BreakColor_R = CallFunc_BreakColor_R;
	Parms.CallFunc_BreakColor_G = CallFunc_BreakColor_G;
	Parms.CallFunc_BreakColor_B = CallFunc_BreakColor_B;
	Parms.CallFunc_BreakColor_A = CallFunc_BreakColor_A;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.K2Node_MakeStruct_LinearColor_1 = K2Node_MakeStruct_LinearColor_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


