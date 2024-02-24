#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CF_BaseButton.CF_BaseButton_C
// (None)

class UClass* UCF_BaseButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CF_BaseButton_C");

	return Clss;
}


// CF_BaseButton_C CF_BaseButton.Default__CF_BaseButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCF_BaseButton_C* UCF_BaseButton_C::GetDefaultObj()
{
	static class UCF_BaseButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCF_BaseButton_C*>(UCF_BaseButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CF_BaseButton.CF_BaseButton_C.BndEvt__UMG_IconTextButton_2_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCF_BaseButton_C::BndEvt__UMG_IconTextButton_2_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_BaseButton_C", "BndEvt__UMG_IconTextButton_2_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CF_BaseButton.CF_BaseButton_C.ExecuteUbergraph_CF_BaseButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCF_BaseButton_C::ExecuteUbergraph_CF_BaseButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_BaseButton_C", "ExecuteUbergraph_CF_BaseButton");

	Params::UCF_BaseButton_C_ExecuteUbergraph_CF_BaseButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


