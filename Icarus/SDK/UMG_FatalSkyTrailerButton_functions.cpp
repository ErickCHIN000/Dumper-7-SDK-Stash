#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_FatalSkyTrailerButton.UMG_FatalSkyTrailerButton_C
// (None)

class UClass* UUMG_FatalSkyTrailerButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_FatalSkyTrailerButton_C");

	return Clss;
}


// UMG_FatalSkyTrailerButton_C UMG_FatalSkyTrailerButton.Default__UMG_FatalSkyTrailerButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_FatalSkyTrailerButton_C* UUMG_FatalSkyTrailerButton_C::GetDefaultObj()
{
	static class UUMG_FatalSkyTrailerButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_FatalSkyTrailerButton_C*>(UUMG_FatalSkyTrailerButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_FatalSkyTrailerButton.UMG_FatalSkyTrailerButton_C.BndEvt__UMG_TitleScreenTrailerButton_BaseButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_FatalSkyTrailerButton_C::BndEvt__UMG_TitleScreenTrailerButton_BaseButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FatalSkyTrailerButton_C", "BndEvt__UMG_TitleScreenTrailerButton_BaseButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_FatalSkyTrailerButton.UMG_FatalSkyTrailerButton_C.BndEvt__UMG_TitleScreenTrailerButton_BaseButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_FatalSkyTrailerButton_C::BndEvt__UMG_TitleScreenTrailerButton_BaseButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FatalSkyTrailerButton_C", "BndEvt__UMG_TitleScreenTrailerButton_BaseButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_FatalSkyTrailerButton.UMG_FatalSkyTrailerButton_C.BndEvt__UMG_TitleScreenTrailerButton_BaseButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_FatalSkyTrailerButton_C::BndEvt__UMG_TitleScreenTrailerButton_BaseButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FatalSkyTrailerButton_C", "BndEvt__UMG_TitleScreenTrailerButton_BaseButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_FatalSkyTrailerButton.UMG_FatalSkyTrailerButton_C.ExecuteUbergraph_UMG_FatalSkyTrailerButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_FatalSkyTrailerButton_C::ExecuteUbergraph_UMG_FatalSkyTrailerButton(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FatalSkyTrailerButton_C", "ExecuteUbergraph_UMG_FatalSkyTrailerButton");

	Params::UUMG_FatalSkyTrailerButton_C_ExecuteUbergraph_UMG_FatalSkyTrailerButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


