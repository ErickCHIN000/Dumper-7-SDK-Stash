#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Useable_Player_Death_Statue.Useable_Player_Death_Statue_C
// (Actor)

class UClass* AUseable_Player_Death_Statue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Useable_Player_Death_Statue_C");

	return Clss;
}


// Useable_Player_Death_Statue_C Useable_Player_Death_Statue.Default__Useable_Player_Death_Statue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AUseable_Player_Death_Statue_C* AUseable_Player_Death_Statue_C::GetDefaultObj()
{
	static class AUseable_Player_Death_Statue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AUseable_Player_Death_Statue_C*>(AUseable_Player_Death_Statue_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Useable_Player_Death_Statue.Useable_Player_Death_Statue_C.OnActorUsed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      TeleportCommand                                                  (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OnActorUsed_Success                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               K2Node_DynamicCast_AsGameplay_PC                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                K2Node_DynamicCast_AsBarbarous                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUseable_Player_Death_Statue_C::OnActorUsed(class APlayerController* Controller, bool* Success, const class FString& TeleportCommand, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, bool CallFunc_OnActorUsed_Success, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_1, class ABarbarous_C* K2Node_DynamicCast_AsBarbarous, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Useable_Player_Death_Statue_C", "OnActorUsed");

	Params::AUseable_Player_Death_Statue_C_OnActorUsed_Params Parms{};

	Parms.Controller = Controller;
	Parms.TeleportCommand = TeleportCommand;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_OnActorUsed_Success = CallFunc_OnActorUsed_Success;
	Parms.K2Node_DynamicCast_AsGameplay_PC = K2Node_DynamicCast_AsGameplay_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_1 = CallFunc_GetCharacterAs0_Base_As0_Base_1;
	Parms.K2Node_DynamicCast_AsBarbarous = K2Node_DynamicCast_AsBarbarous;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function Useable_Player_Death_Statue.Useable_Player_Death_Statue_C.OnWasUsed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              LocalRotation                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OnWasUsed_Success                                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUseable_Player_Death_Statue_C::OnWasUsed(bool* Success, float LocalRotation, bool CallFunc_OnWasUsed_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Useable_Player_Death_Statue_C", "OnWasUsed");

	Params::AUseable_Player_Death_Statue_C_OnWasUsed_Params Parms{};

	Parms.LocalRotation = LocalRotation;
	Parms.CallFunc_OnWasUsed_Success = CallFunc_OnWasUsed_Success;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function Useable_Player_Death_Statue.Useable_Player_Death_Statue_C.StoneFade__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AUseable_Player_Death_Statue_C::StoneFade__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Useable_Player_Death_Statue_C", "StoneFade__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Useable_Player_Death_Statue.Useable_Player_Death_Statue_C.StoneFade__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AUseable_Player_Death_Statue_C::StoneFade__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Useable_Player_Death_Statue_C", "StoneFade__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Useable_Player_Death_Statue.Useable_Player_Death_Statue_C.FadeStatueOpacity__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AUseable_Player_Death_Statue_C::FadeStatueOpacity__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Useable_Player_Death_Statue_C", "FadeStatueOpacity__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Useable_Player_Death_Statue.Useable_Player_Death_Statue_C.FadeStatueOpacity__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AUseable_Player_Death_Statue_C::FadeStatueOpacity__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Useable_Player_Death_Statue_C", "FadeStatueOpacity__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Useable_Player_Death_Statue.Useable_Player_Death_Statue_C.OnNotifyEnd_1FFFB4BA4D6D93435F14B78A050D8D59
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUseable_Player_Death_Statue_C::OnNotifyEnd_1FFFB4BA4D6D93435F14B78A050D8D59(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Useable_Player_Death_Statue_C", "OnNotifyEnd_1FFFB4BA4D6D93435F14B78A050D8D59");

	Params::AUseable_Player_Death_Statue_C_OnNotifyEnd_1FFFB4BA4D6D93435F14B78A050D8D59_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Useable_Player_Death_Statue.Useable_Player_Death_Statue_C.OnNotifyBegin_1FFFB4BA4D6D93435F14B78A050D8D59
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUseable_Player_Death_Statue_C::OnNotifyBegin_1FFFB4BA4D6D93435F14B78A050D8D59(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Useable_Player_Death_Statue_C", "OnNotifyBegin_1FFFB4BA4D6D93435F14B78A050D8D59");

	Params::AUseable_Player_Death_Statue_C_OnNotifyBegin_1FFFB4BA4D6D93435F14B78A050D8D59_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Useable_Player_Death_Statue.Useable_Player_Death_Statue_C.OnInterrupted_1FFFB4BA4D6D93435F14B78A050D8D59
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUseable_Player_Death_Statue_C::OnInterrupted_1FFFB4BA4D6D93435F14B78A050D8D59(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Useable_Player_Death_Statue_C", "OnInterrupted_1FFFB4BA4D6D93435F14B78A050D8D59");

	Params::AUseable_Player_Death_Statue_C_OnInterrupted_1FFFB4BA4D6D93435F14B78A050D8D59_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Useable_Player_Death_Statue.Useable_Player_Death_Statue_C.OnBlendOut_1FFFB4BA4D6D93435F14B78A050D8D59
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUseable_Player_Death_Statue_C::OnBlendOut_1FFFB4BA4D6D93435F14B78A050D8D59(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Useable_Player_Death_Statue_C", "OnBlendOut_1FFFB4BA4D6D93435F14B78A050D8D59");

	Params::AUseable_Player_Death_Statue_C_OnBlendOut_1FFFB4BA4D6D93435F14B78A050D8D59_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Useable_Player_Death_Statue.Useable_Player_Death_Statue_C.OnCompleted_1FFFB4BA4D6D93435F14B78A050D8D59
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUseable_Player_Death_Statue_C::OnCompleted_1FFFB4BA4D6D93435F14B78A050D8D59(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Useable_Player_Death_Statue_C", "OnCompleted_1FFFB4BA4D6D93435F14B78A050D8D59");

	Params::AUseable_Player_Death_Statue_C_OnCompleted_1FFFB4BA4D6D93435F14B78A050D8D59_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Useable_Player_Death_Statue.Useable_Player_Death_Statue_C.OnNotifyEnd_E660706E46DA39B985FF59B8FC674F2E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUseable_Player_Death_Statue_C::OnNotifyEnd_E660706E46DA39B985FF59B8FC674F2E(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Useable_Player_Death_Statue_C", "OnNotifyEnd_E660706E46DA39B985FF59B8FC674F2E");

	Params::AUseable_Player_Death_Statue_C_OnNotifyEnd_E660706E46DA39B985FF59B8FC674F2E_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Useable_Player_Death_Statue.Useable_Player_Death_Statue_C.OnNotifyBegin_E660706E46DA39B985FF59B8FC674F2E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUseable_Player_Death_Statue_C::OnNotifyBegin_E660706E46DA39B985FF59B8FC674F2E(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Useable_Player_Death_Statue_C", "OnNotifyBegin_E660706E46DA39B985FF59B8FC674F2E");

	Params::AUseable_Player_Death_Statue_C_OnNotifyBegin_E660706E46DA39B985FF59B8FC674F2E_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Useable_Player_Death_Statue.Useable_Player_Death_Statue_C.OnInterrupted_E660706E46DA39B985FF59B8FC674F2E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUseable_Player_Death_Statue_C::OnInterrupted_E660706E46DA39B985FF59B8FC674F2E(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Useable_Player_Death_Statue_C", "OnInterrupted_E660706E46DA39B985FF59B8FC674F2E");

	Params::AUseable_Player_Death_Statue_C_OnInterrupted_E660706E46DA39B985FF59B8FC674F2E_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Useable_Player_Death_Statue.Useable_Player_Death_Statue_C.OnBlendOut_E660706E46DA39B985FF59B8FC674F2E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUseable_Player_Death_Statue_C::OnBlendOut_E660706E46DA39B985FF59B8FC674F2E(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Useable_Player_Death_Statue_C", "OnBlendOut_E660706E46DA39B985FF59B8FC674F2E");

	Params::AUseable_Player_Death_Statue_C_OnBlendOut_E660706E46DA39B985FF59B8FC674F2E_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Useable_Player_Death_Statue.Useable_Player_Death_Statue_C.OnCompleted_E660706E46DA39B985FF59B8FC674F2E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUseable_Player_Death_Statue_C::OnCompleted_E660706E46DA39B985FF59B8FC674F2E(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Useable_Player_Death_Statue_C", "OnCompleted_E660706E46DA39B985FF59B8FC674F2E");

	Params::AUseable_Player_Death_Statue_C_OnCompleted_E660706E46DA39B985FF59B8FC674F2E_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Useable_Player_Death_Statue.Useable_Player_Death_Statue_C.PlayOnUsedMontage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUseable_Player_Death_Statue_C::PlayOnUsedMontage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Useable_Player_Death_Statue_C", "PlayOnUsedMontage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Useable_Player_Death_Statue.Useable_Player_Death_Statue_C.MulticastSoundFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void AUseable_Player_Death_Statue_C::MulticastSoundFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Useable_Player_Death_Statue_C", "MulticastSoundFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Useable_Player_Death_Statue.Useable_Player_Death_Statue_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AUseable_Player_Death_Statue_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Useable_Player_Death_Statue_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Useable_Player_Death_Statue.Useable_Player_Death_Statue_C.ExecuteUbergraph_Useable_Player_Death_Statue
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               CallFunc_GetMeshForArmorType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSingleAnimationPlayData    K2Node_MakeStruct_SingleAnimationPlayData                        (NoDestructor)
// struct FSingleAnimationPlayData    K2Node_MakeStruct_SingleAnimationPlayData_1                      (NoDestructor)
// struct FSingleAnimationPlayData    K2Node_Select_Default_1                                          (NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDeath_Statue_AnimBP_C*      K2Node_DynamicCast_AsDeath_Statue_Anim_BP                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUseable_Player_Death_Statue_C::ExecuteUbergraph_Useable_Player_Death_Statue(int32 EntryPoint, int32 Temp_int_Variable, int32 Temp_int_Variable_1, class UAnimMontage* Temp_object_Variable, class UAnimMontage* Temp_object_Variable_1, class FName K2Node_CustomEvent_NotifyName_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName Temp_name_Variable_1, int32 CallFunc_RandomIntegerInRange_ReturnValue, class UAnimMontage* K2Node_Select_Default, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class USkeletalMesh* CallFunc_GetMeshForArmorType_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FSingleAnimationPlayData& K2Node_MakeStruct_SingleAnimationPlayData, const struct FSingleAnimationPlayData& K2Node_MakeStruct_SingleAnimationPlayData_1, const struct FSingleAnimationPlayData& K2Node_Select_Default_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UDeath_Statue_AnimBP_C* K2Node_DynamicCast_AsDeath_Statue_Anim_BP, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Useable_Player_Death_Statue_C", "ExecuteUbergraph_Useable_Player_Death_Statue");

	Params::AUseable_Player_Death_Statue_C_ExecuteUbergraph_Useable_Player_Death_Statue_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_CustomEvent_NotifyName_9 = K2Node_CustomEvent_NotifyName_9;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_NotifyName_8 = K2Node_CustomEvent_NotifyName_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_NotifyName_7 = K2Node_CustomEvent_NotifyName_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_NotifyName_6 = K2Node_CustomEvent_NotifyName_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_NotifyName_5 = K2Node_CustomEvent_NotifyName_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CustomEvent_NotifyName_4 = K2Node_CustomEvent_NotifyName_4;
	Parms.K2Node_CustomEvent_NotifyName_3 = K2Node_CustomEvent_NotifyName_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CustomEvent_NotifyName_2 = K2Node_CustomEvent_NotifyName_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CustomEvent_NotifyName_1 = K2Node_CustomEvent_NotifyName_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_GetMeshForArmorType_ReturnValue = CallFunc_GetMeshForArmorType_ReturnValue;
	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_MakeStruct_SingleAnimationPlayData = K2Node_MakeStruct_SingleAnimationPlayData;
	Parms.K2Node_MakeStruct_SingleAnimationPlayData_1 = K2Node_MakeStruct_SingleAnimationPlayData_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsDeath_Statue_Anim_BP = K2Node_DynamicCast_AsDeath_Statue_Anim_BP;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


