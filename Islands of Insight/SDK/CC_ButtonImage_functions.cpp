#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CC_ButtonImage.CC_ButtonImage_C
// (None)

class UClass* UCC_ButtonImage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CC_ButtonImage_C");

	return Clss;
}


// CC_ButtonImage_C CC_ButtonImage.Default__CC_ButtonImage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCC_ButtonImage_C* UCC_ButtonImage_C::GetDefaultObj()
{
	static class UCC_ButtonImage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCC_ButtonImage_C*>(UCC_ButtonImage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CC_ButtonImage.CC_ButtonImage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCC_ButtonImage_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CC_ButtonImage_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CC_ButtonImage.CC_ButtonImage_C.BndEvt__Button_36_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCC_ButtonImage_C::BndEvt__Button_36_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CC_ButtonImage_C", "BndEvt__Button_36_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CC_ButtonImage.CC_ButtonImage_C.BndEvt__Button_36_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCC_ButtonImage_C::BndEvt__Button_36_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CC_ButtonImage_C", "BndEvt__Button_36_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CC_ButtonImage.CC_ButtonImage_C.SetImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCC_ButtonImage_C::SetImage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CC_ButtonImage_C", "SetImage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CC_ButtonImage.CC_ButtonImage_C.ExecuteUbergraph_CC_ButtonImage
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCC_ButtonImage_C::ExecuteUbergraph_CC_ButtonImage(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CC_ButtonImage_C", "ExecuteUbergraph_CC_ButtonImage");

	Params::UCC_ButtonImage_C_ExecuteUbergraph_CC_ButtonImage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CC_ButtonImage.CC_ButtonImage_C.NewEventDispatcher_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCC_ButtonImage_C::NewEventDispatcher_0__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CC_ButtonImage_C", "NewEventDispatcher_0__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


