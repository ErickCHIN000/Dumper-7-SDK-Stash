#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_BuildMode_Message.WBP_BuildMode_Message_C
// (None)

class UClass* UWBP_BuildMode_Message_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_BuildMode_Message_C");

	return Clss;
}


// WBP_BuildMode_Message_C WBP_BuildMode_Message.Default__WBP_BuildMode_Message_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_BuildMode_Message_C* UWBP_BuildMode_Message_C::GetDefaultObj()
{
	static class UWBP_BuildMode_Message_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_BuildMode_Message_C*>(UWBP_BuildMode_Message_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_BuildMode_Message.WBP_BuildMode_Message_C.OnBuildmodeFeedbackMessageReceived
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_BuildMode_Message_C::OnBuildmodeFeedbackMessageReceived(class FText Message, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BuildMode_Message_C", "OnBuildmodeFeedbackMessageReceived");

	Params::UWBP_BuildMode_Message_C_OnBuildmodeFeedbackMessageReceived_Params Parms{};

	Parms.Message = Message;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BuildMode_Message.WBP_BuildMode_Message_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_BuildMode_Message_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BuildMode_Message_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BuildMode_Message.WBP_BuildMode_Message_C.ExecuteUbergraph_WBP_BuildMode_Message
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_ActionComponent_C*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BuildMode_Message_C::ExecuteUbergraph_WBP_BuildMode_Message(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UBP_ActionComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BuildMode_Message_C", "ExecuteUbergraph_WBP_BuildMode_Message");

	Params::UWBP_BuildMode_Message_C_ExecuteUbergraph_WBP_BuildMode_Message_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


