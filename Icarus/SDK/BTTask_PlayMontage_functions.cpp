#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTTask_PlayMontage.BTTask_PlayMontage_C
// (None)

class UClass* UBTTask_PlayMontage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_PlayMontage_C");

	return Clss;
}


// BTTask_PlayMontage_C BTTask_PlayMontage.Default__BTTask_PlayMontage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTTask_PlayMontage_C* UBTTask_PlayMontage_C::GetDefaultObj()
{
	static class UBTTask_PlayMontage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_PlayMontage_C*>(UBTTask_PlayMontage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTTask_PlayMontage.BTTask_PlayMontage_C.CanSuccessfullyFinishExecute
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               CanFinish                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBTTask_PlayMontage_C::CanSuccessfullyFinishExecute(bool* CanFinish)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_PlayMontage_C", "CanSuccessfullyFinishExecute");

	Params::UBTTask_PlayMontage_C_CanSuccessfullyFinishExecute_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CanFinish != nullptr)
		*CanFinish = Parms.CanFinish;

}


// Function BTTask_PlayMontage.BTTask_PlayMontage_C.GetSecondaryDelay
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UBTTask_PlayMontage_C::GetSecondaryDelay(float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_PlayMontage_C", "GetSecondaryDelay");

	Params::UBTTask_PlayMontage_C_GetSecondaryDelay_Params Parms{};

	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BTTask_PlayMontage.BTTask_PlayMontage_C.GetMontage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UAnimMontage*                Montage                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_PlayMontage_C::GetMontage(class UAnimMontage** Montage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_PlayMontage_C", "GetMontage");

	Params::UBTTask_PlayMontage_C_GetMontage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Montage != nullptr)
		*Montage = Parms.Montage;

}


// Function BTTask_PlayMontage.BTTask_PlayMontage_C.OnNotifyEnd_ADF47BDC4F84AE417FDFE595ECA80D65
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 Notify                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_PlayMontage_C::OnNotifyEnd_ADF47BDC4F84AE417FDFE595ECA80D65(class FName NotifyName, class UAnimNotify* Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_PlayMontage_C", "OnNotifyEnd_ADF47BDC4F84AE417FDFE595ECA80D65");

	Params::UBTTask_PlayMontage_C_OnNotifyEnd_ADF47BDC4F84AE417FDFE595ECA80D65_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTTask_PlayMontage.BTTask_PlayMontage_C.OnNotifyBegin_ADF47BDC4F84AE417FDFE595ECA80D65
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 Notify                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_PlayMontage_C::OnNotifyBegin_ADF47BDC4F84AE417FDFE595ECA80D65(class FName NotifyName, class UAnimNotify* Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_PlayMontage_C", "OnNotifyBegin_ADF47BDC4F84AE417FDFE595ECA80D65");

	Params::UBTTask_PlayMontage_C_OnNotifyBegin_ADF47BDC4F84AE417FDFE595ECA80D65_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTTask_PlayMontage.BTTask_PlayMontage_C.OnInterrupted_ADF47BDC4F84AE417FDFE595ECA80D65
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 Notify                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_PlayMontage_C::OnInterrupted_ADF47BDC4F84AE417FDFE595ECA80D65(class FName NotifyName, class UAnimNotify* Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_PlayMontage_C", "OnInterrupted_ADF47BDC4F84AE417FDFE595ECA80D65");

	Params::UBTTask_PlayMontage_C_OnInterrupted_ADF47BDC4F84AE417FDFE595ECA80D65_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTTask_PlayMontage.BTTask_PlayMontage_C.OnBlendOut_ADF47BDC4F84AE417FDFE595ECA80D65
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 Notify                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_PlayMontage_C::OnBlendOut_ADF47BDC4F84AE417FDFE595ECA80D65(class FName NotifyName, class UAnimNotify* Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_PlayMontage_C", "OnBlendOut_ADF47BDC4F84AE417FDFE595ECA80D65");

	Params::UBTTask_PlayMontage_C_OnBlendOut_ADF47BDC4F84AE417FDFE595ECA80D65_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTTask_PlayMontage.BTTask_PlayMontage_C.OnCompleted_ADF47BDC4F84AE417FDFE595ECA80D65
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 Notify                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_PlayMontage_C::OnCompleted_ADF47BDC4F84AE417FDFE595ECA80D65(class FName NotifyName, class UAnimNotify* Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_PlayMontage_C", "OnCompleted_ADF47BDC4F84AE417FDFE595ECA80D65");

	Params::UBTTask_PlayMontage_C_OnCompleted_ADF47BDC4F84AE417FDFE595ECA80D65_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTTask_PlayMontage.BTTask_PlayMontage_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_PlayMontage_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_PlayMontage_C", "ReceiveExecuteAI");

	Params::UBTTask_PlayMontage_C_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTTask_PlayMontage.BTTask_PlayMontage_C.OnMontageComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBTTask_PlayMontage_C::OnMontageComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_PlayMontage_C", "OnMontageComplete");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BTTask_PlayMontage.BTTask_PlayMontage_C.OnMontageInterrupted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBTTask_PlayMontage_C::OnMontageInterrupted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_PlayMontage_C", "OnMontageInterrupted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BTTask_PlayMontage.BTTask_PlayMontage_C.OnMontageBlendOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBTTask_PlayMontage_C::OnMontageBlendOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_PlayMontage_C", "OnMontageBlendOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BTTask_PlayMontage.BTTask_PlayMontage_C.OnMontageNotifyBegin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 Notify                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_PlayMontage_C::OnMontageNotifyBegin(class FName NotifyName, class UAnimNotify* Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_PlayMontage_C", "OnMontageNotifyBegin");

	Params::UBTTask_PlayMontage_C_OnMontageNotifyBegin_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTTask_PlayMontage.BTTask_PlayMontage_C.OnMontageNotifyEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 Notify                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_PlayMontage_C::OnMontageNotifyEnd(class FName NotifyName, class UAnimNotify* Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_PlayMontage_C", "OnMontageNotifyEnd");

	Params::UBTTask_PlayMontage_C_OnMontageNotifyEnd_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTTask_PlayMontage.BTTask_PlayMontage_C.ReceiveAbortAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_PlayMontage_C::ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_PlayMontage_C", "ReceiveAbortAI");

	Params::UBTTask_PlayMontage_C_ReceiveAbortAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTTask_PlayMontage.BTTask_PlayMontage_C.PlaySecondaryMontageSection
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBTTask_PlayMontage_C::PlaySecondaryMontageSection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_PlayMontage_C", "PlaySecondaryMontageSection");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BTTask_PlayMontage.BTTask_PlayMontage_C.ManualCompletion
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBTTask_PlayMontage_C::ManualCompletion()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_PlayMontage_C", "ManualCompletion");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BTTask_PlayMontage.BTTask_PlayMontage_C.ExecuteUbergraph_BTTask_PlayMontage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 K2Node_CustomEvent_Notify_4                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 K2Node_CustomEvent_Notify_3                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 K2Node_CustomEvent_Notify_2                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UAnimNotify*                 Temp_object_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                CallFunc_GetMontageSections_ReturnValue                          (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_OwnerController_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusCharacter*            K2Node_DynamicCast_AsIcarus_Character                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPawn*                 K2Node_DynamicCast_AsIcarus_Pawn                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 K2Node_CustomEvent_Notify_1                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 K2Node_CustomEvent_Notify                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      Temp_wildcard_Variable                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 K2Node_CustomEvent_Notify_6                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_ObjectToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsTaskExecuting_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetMontage_Montage                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetMontage_Montage_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetMontage_Montage_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 K2Node_CustomEvent_Notify_5                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetSecondaryDelay_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetAnimatedMeshComponent_ReturnValue                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanSuccessfullyFinishExecute_CanFinish                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanSuccessfullyFinishExecute_CanFinish_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)

void UBTTask_PlayMontage_C::ExecuteUbergraph_BTTask_PlayMontage(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_4, class UAnimNotify* K2Node_CustomEvent_Notify_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_3, class UAnimNotify* K2Node_CustomEvent_Notify_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_2, class UAnimNotify* K2Node_CustomEvent_Notify_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UAnimNotify* Temp_object_Variable, class FName Temp_name_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, TArray<class FName>& CallFunc_GetMontageSections_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, int32 CallFunc_RandomInteger_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, int32 Temp_int_Variable, class FName CallFunc_Array_Get_Item, class AAIController* K2Node_Event_OwnerController_1, class APawn* K2Node_Event_ControlledPawn_1, class AIcarusCharacter* K2Node_DynamicCast_AsIcarus_Character, bool K2Node_DynamicCast_bSuccess, class AIcarusPawn* K2Node_DynamicCast_AsIcarus_Pawn, bool K2Node_DynamicCast_bSuccess_1, class FName K2Node_CustomEvent_NotifyName_1, class UAnimNotify* K2Node_CustomEvent_Notify_1, class FName K2Node_CustomEvent_NotifyName, class UAnimNotify* K2Node_CustomEvent_Notify, class USkeletalMeshComponent* Temp_wildcard_Variable, class FName K2Node_CustomEvent_NotifyName_6, class UAnimNotify* K2Node_CustomEvent_Notify_6, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, class FText CallFunc_Conv_ObjectToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsTaskExecuting_ReturnValue, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class UAnimMontage* CallFunc_GetMontage_Montage, class UAnimMontage* CallFunc_GetMontage_Montage_1, class UAnimMontage* CallFunc_GetMontage_Montage_2, class FName K2Node_CustomEvent_NotifyName_5, class UAnimNotify* K2Node_CustomEvent_Notify_5, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_GetSecondaryDelay_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class USkeletalMeshComponent* CallFunc_GetAnimatedMeshComponent_ReturnValue, bool CallFunc_CanSuccessfullyFinishExecute_CanFinish, bool CallFunc_CanSuccessfullyFinishExecute_CanFinish_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_PlayMontage_C", "ExecuteUbergraph_BTTask_PlayMontage");

	Params::UBTTask_PlayMontage_C_ExecuteUbergraph_BTTask_PlayMontage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_NotifyName_4 = K2Node_CustomEvent_NotifyName_4;
	Parms.K2Node_CustomEvent_Notify_4 = K2Node_CustomEvent_Notify_4;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_NotifyName_3 = K2Node_CustomEvent_NotifyName_3;
	Parms.K2Node_CustomEvent_Notify_3 = K2Node_CustomEvent_Notify_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_NotifyName_2 = K2Node_CustomEvent_NotifyName_2;
	Parms.K2Node_CustomEvent_Notify_2 = K2Node_CustomEvent_Notify_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetMontageSections_ReturnValue = CallFunc_GetMontageSections_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_Event_OwnerController_1 = K2Node_Event_OwnerController_1;
	Parms.K2Node_Event_ControlledPawn_1 = K2Node_Event_ControlledPawn_1;
	Parms.K2Node_DynamicCast_AsIcarus_Character = K2Node_DynamicCast_AsIcarus_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsIcarus_Pawn = K2Node_DynamicCast_AsIcarus_Pawn;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CustomEvent_NotifyName_1 = K2Node_CustomEvent_NotifyName_1;
	Parms.K2Node_CustomEvent_Notify_1 = K2Node_CustomEvent_Notify_1;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.K2Node_CustomEvent_Notify = K2Node_CustomEvent_Notify;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.K2Node_CustomEvent_NotifyName_6 = K2Node_CustomEvent_NotifyName_6;
	Parms.K2Node_CustomEvent_Notify_6 = K2Node_CustomEvent_Notify_6;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_Conv_ObjectToText_ReturnValue = CallFunc_Conv_ObjectToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_IsTaskExecuting_ReturnValue = CallFunc_IsTaskExecuting_ReturnValue;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.CallFunc_GetMontage_Montage = CallFunc_GetMontage_Montage;
	Parms.CallFunc_GetMontage_Montage_1 = CallFunc_GetMontage_Montage_1;
	Parms.CallFunc_GetMontage_Montage_2 = CallFunc_GetMontage_Montage_2;
	Parms.K2Node_CustomEvent_NotifyName_5 = K2Node_CustomEvent_NotifyName_5;
	Parms.K2Node_CustomEvent_Notify_5 = K2Node_CustomEvent_Notify_5;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_1 = CallFunc_NotEqual_NameName_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetSecondaryDelay_ReturnValue = CallFunc_GetSecondaryDelay_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetAnimatedMeshComponent_ReturnValue = CallFunc_GetAnimatedMeshComponent_ReturnValue;
	Parms.CallFunc_CanSuccessfullyFinishExecute_CanFinish = CallFunc_CanSuccessfullyFinishExecute_CanFinish;
	Parms.CallFunc_CanSuccessfullyFinishExecute_CanFinish_1 = CallFunc_CanSuccessfullyFinishExecute_CanFinish_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;

	UObject::ProcessEvent(Func, &Parms);

}

}


