#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_HScene_Bells_On_Oral.W_HScene_Bells_On_Oral_C
// (None)

class UClass* UW_HScene_Bells_On_Oral_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_HScene_Bells_On_Oral_C");

	return Clss;
}


// W_HScene_Bells_On_Oral_C W_HScene_Bells_On_Oral.Default__W_HScene_Bells_On_Oral_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_HScene_Bells_On_Oral_C* UW_HScene_Bells_On_Oral_C::GetDefaultObj()
{
	static class UW_HScene_Bells_On_Oral_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_HScene_Bells_On_Oral_C*>(UW_HScene_Bells_On_Oral_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_HScene_Bells_On_Oral.W_HScene_Bells_On_Oral_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_HScene_Bells_On_Oral_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HScene_Bells_On_Oral_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_HScene_Bells_On_Oral.W_HScene_Bells_On_Oral_C.BndEvt__Button_93_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_HScene_Bells_On_Oral_C::BndEvt__Button_93_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HScene_Bells_On_Oral_C", "BndEvt__Button_93_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_HScene_Bells_On_Oral.W_HScene_Bells_On_Oral_C.BndEvt__BTN_Next_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_HScene_Bells_On_Oral_C::BndEvt__BTN_Next_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HScene_Bells_On_Oral_C", "BndEvt__BTN_Next_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_HScene_Bells_On_Oral.W_HScene_Bells_On_Oral_C.BndEvt__BTN_Next_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_HScene_Bells_On_Oral_C::BndEvt__BTN_Next_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HScene_Bells_On_Oral_C", "BndEvt__BTN_Next_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_HScene_Bells_On_Oral.W_HScene_Bells_On_Oral_C.ProgressOpacity
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_HScene_Bells_On_Oral_C::ProgressOpacity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HScene_Bells_On_Oral_C", "ProgressOpacity");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_HScene_Bells_On_Oral.W_HScene_Bells_On_Oral_C.ExecuteUbergraph_W_HScene_Bells_On_Oral
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASEQ_MasterHSceneMinusBells_On_Oral_C*CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HScene_Bells_On_Oral_C::ExecuteUbergraph_W_HScene_Bells_On_Oral(int32 EntryPoint, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ASEQ_MasterHSceneMinusBells_On_Oral_C* CallFunc_GetActorOfClass_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HScene_Bells_On_Oral_C", "ExecuteUbergraph_W_HScene_Bells_On_Oral");

	Params::UW_HScene_Bells_On_Oral_C_ExecuteUbergraph_W_HScene_Bells_On_Oral_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


