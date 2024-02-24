#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTTask_WaitForPlayerAction.BTTask_WaitForPlayerAction_C
// (None)

class UClass* UBTTask_WaitForPlayerAction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_WaitForPlayerAction_C");

	return Clss;
}


// BTTask_WaitForPlayerAction_C BTTask_WaitForPlayerAction.Default__BTTask_WaitForPlayerAction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTTask_WaitForPlayerAction_C* UBTTask_WaitForPlayerAction_C::GetDefaultObj()
{
	static class UBTTask_WaitForPlayerAction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_WaitForPlayerAction_C*>(UBTTask_WaitForPlayerAction_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTTask_WaitForPlayerAction.BTTask_WaitForPlayerAction_C.On Player Trick Completed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGGoat*                     Goat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      TrickName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBTTask_WaitForPlayerAction_C::On_Player_Trick_Completed(class AGGGoat* Goat, const class FString& TrickName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_WaitForPlayerAction_C", "On Player Trick Completed");

	Params::UBTTask_WaitForPlayerAction_C_On_Player_Trick_Completed_Params Parms{};

	Parms.Goat = Goat;
	Parms.TrickName = TrickName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTTask_WaitForPlayerAction.BTTask_WaitForPlayerAction_C.On Player Do Emote
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGGoat*                     EmotingGoat                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGGoatEmote*                Emote                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_WaitForPlayerAction_C::On_Player_Do_Emote(class AGGGoat* EmotingGoat, class UGGGoatEmote* Emote)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_WaitForPlayerAction_C", "On Player Do Emote");

	Params::UBTTask_WaitForPlayerAction_C_On_Player_Do_Emote_Params Parms{};

	Parms.EmotingGoat = EmotingGoat;
	Parms.Emote = Emote;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTTask_WaitForPlayerAction.BTTask_WaitForPlayerAction_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_WaitForPlayerAction_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_WaitForPlayerAction_C", "ReceiveExecuteAI");

	Params::UBTTask_WaitForPlayerAction_C_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTTask_WaitForPlayerAction.BTTask_WaitForPlayerAction_C.ReceiveAbortAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_WaitForPlayerAction_C::ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_WaitForPlayerAction_C", "ReceiveAbortAI");

	Params::UBTTask_WaitForPlayerAction_C_ReceiveAbortAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTTask_WaitForPlayerAction.BTTask_WaitForPlayerAction_C.On Wait Time Over
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBTTask_WaitForPlayerAction_C::On_Wait_Time_Over()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_WaitForPlayerAction_C", "On Wait Time Over");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BTTask_WaitForPlayerAction.BTTask_WaitForPlayerAction_C.On Goat Jumped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGCharacter*                Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_WaitForPlayerAction_C::On_Goat_Jumped(class AGGCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_WaitForPlayerAction_C", "On Goat Jumped");

	Params::UBTTask_WaitForPlayerAction_C_On_Goat_Jumped_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTTask_WaitForPlayerAction.BTTask_WaitForPlayerAction_C.On Goat Ragdoll changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGCharacter*                Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               NewRagdollState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBTTask_WaitForPlayerAction_C::On_Goat_Ragdoll_changed(class AGGCharacter* Character, bool NewRagdollState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_WaitForPlayerAction_C", "On Goat Ragdoll changed");

	Params::UBTTask_WaitForPlayerAction_C_On_Goat_Ragdoll_changed_Params Parms{};

	Parms.Character = Character;
	Parms.NewRagdollState = NewRagdollState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTTask_WaitForPlayerAction.BTTask_WaitForPlayerAction_C.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_WaitForPlayerAction_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_WaitForPlayerAction_C", "ReceiveTickAI");

	Params::UBTTask_WaitForPlayerAction_C_ReceiveTickAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTTask_WaitForPlayerAction.BTTask_WaitForPlayerAction_C.On Goat Baa
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGGoat*                     GoatBaaing                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_WaitForPlayerAction_C::On_Goat_Baa(class AGGGoat* GoatBaaing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_WaitForPlayerAction_C", "On Goat Baa");

	Params::UBTTask_WaitForPlayerAction_C_On_Goat_Baa_Params Parms{};

	Parms.GoatBaaing = GoatBaaing;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTTask_WaitForPlayerAction.BTTask_WaitForPlayerAction_C.ExecuteUbergraph_BTTask_WaitForPlayerAction
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_And_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_And_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Conv_IntToBool_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_And_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_GetBlackboardValueAsObject_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     K2Node_CustomEvent_Goat                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_TrickName                                     (ZeroConstructor, HasGetValueTypeHash)
// class AGGGoat*                     K2Node_DynamicCast_AsGGGoat                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGGoat*                     K2Node_CustomEvent_EmotingGoat                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGGoatEmote*                K2Node_CustomEvent_Emote                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// int32                              CallFunc_And_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class AAIController*               K2Node_Event_OwnerController_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_OwnerController_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGCharacter*                K2Node_DynamicCast_AsGGCharacter                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class AGGCharacter*                K2Node_CustomEvent_Character_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class AGGCharacter*                K2Node_CustomEvent_Character                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_NewRagdollState                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Vector_Distance2D_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMovingOnGround_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// int32                              CallFunc_And_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     K2Node_CustomEvent_GoatBaaing                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// int32                              CallFunc_And_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetDistanceTo_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_And_IntInt_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue_6                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_And_IntInt_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Conv_IntToBool_ReturnValue_7                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBTTask_WaitForPlayerAction_C::ExecuteUbergraph_BTTask_WaitForPlayerAction(int32 EntryPoint, int32 CallFunc_And_IntInt_ReturnValue, int32 CallFunc_And_IntInt_ReturnValue_1, bool CallFunc_Conv_IntToBool_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue_1, int32 CallFunc_And_IntInt_ReturnValue_2, bool CallFunc_Conv_IntToBool_ReturnValue_2, class UObject* CallFunc_GetBlackboardValueAsObject_ReturnValue, class AGGGoat* K2Node_CustomEvent_Goat, const class FString& K2Node_CustomEvent_TrickName, class AGGGoat* K2Node_DynamicCast_AsGGGoat, bool K2Node_DynamicCast_bSuccess, class AGGGoat* K2Node_CustomEvent_EmotingGoat, class UGGGoatEmote* K2Node_CustomEvent_Emote, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_And_IntInt_ReturnValue_3, bool CallFunc_Conv_IntToBool_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AAIController* K2Node_Event_OwnerController_2, class APawn* K2Node_Event_ControlledPawn_2, class AAIController* K2Node_Event_OwnerController_1, class APawn* K2Node_Event_ControlledPawn_1, class AGGCharacter* K2Node_DynamicCast_AsGGCharacter, bool K2Node_DynamicCast_bSuccess_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AGGCharacter* K2Node_CustomEvent_Character_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class AGGCharacter* K2Node_CustomEvent_Character, bool K2Node_CustomEvent_NewRagdollState, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_Vector_Distance2D_ReturnValue, bool CallFunc_IsMovingOnGround_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, int32 CallFunc_And_IntInt_ReturnValue_4, class AGGGoat* K2Node_CustomEvent_GoatBaaing, bool CallFunc_Conv_IntToBool_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, int32 CallFunc_And_IntInt_ReturnValue_5, bool CallFunc_Conv_IntToBool_ReturnValue_5, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, int32 CallFunc_And_IntInt_ReturnValue_6, bool CallFunc_Conv_IntToBool_ReturnValue_6, int32 CallFunc_And_IntInt_ReturnValue_7, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_Conv_IntToBool_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_WaitForPlayerAction_C", "ExecuteUbergraph_BTTask_WaitForPlayerAction");

	Params::UBTTask_WaitForPlayerAction_C_ExecuteUbergraph_BTTask_WaitForPlayerAction_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_And_IntInt_ReturnValue = CallFunc_And_IntInt_ReturnValue;
	Parms.CallFunc_And_IntInt_ReturnValue_1 = CallFunc_And_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_IntToBool_ReturnValue = CallFunc_Conv_IntToBool_ReturnValue;
	Parms.CallFunc_Conv_IntToBool_ReturnValue_1 = CallFunc_Conv_IntToBool_ReturnValue_1;
	Parms.CallFunc_And_IntInt_ReturnValue_2 = CallFunc_And_IntInt_ReturnValue_2;
	Parms.CallFunc_Conv_IntToBool_ReturnValue_2 = CallFunc_Conv_IntToBool_ReturnValue_2;
	Parms.CallFunc_GetBlackboardValueAsObject_ReturnValue = CallFunc_GetBlackboardValueAsObject_ReturnValue;
	Parms.K2Node_CustomEvent_Goat = K2Node_CustomEvent_Goat;
	Parms.K2Node_CustomEvent_TrickName = K2Node_CustomEvent_TrickName;
	Parms.K2Node_DynamicCast_AsGGGoat = K2Node_DynamicCast_AsGGGoat;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_EmotingGoat = K2Node_CustomEvent_EmotingGoat;
	Parms.K2Node_CustomEvent_Emote = K2Node_CustomEvent_Emote;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_And_IntInt_ReturnValue_3 = CallFunc_And_IntInt_ReturnValue_3;
	Parms.CallFunc_Conv_IntToBool_ReturnValue_3 = CallFunc_Conv_IntToBool_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_Event_OwnerController_2 = K2Node_Event_OwnerController_2;
	Parms.K2Node_Event_ControlledPawn_2 = K2Node_Event_ControlledPawn_2;
	Parms.K2Node_Event_OwnerController_1 = K2Node_Event_OwnerController_1;
	Parms.K2Node_Event_ControlledPawn_1 = K2Node_Event_ControlledPawn_1;
	Parms.K2Node_DynamicCast_AsGGCharacter = K2Node_DynamicCast_AsGGCharacter;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CustomEvent_Character_1 = K2Node_CustomEvent_Character_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CustomEvent_Character = K2Node_CustomEvent_Character;
	Parms.K2Node_CustomEvent_NewRagdollState = K2Node_CustomEvent_NewRagdollState;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Vector_Distance2D_ReturnValue = CallFunc_Vector_Distance2D_ReturnValue;
	Parms.CallFunc_IsMovingOnGround_ReturnValue = CallFunc_IsMovingOnGround_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_And_IntInt_ReturnValue_4 = CallFunc_And_IntInt_ReturnValue_4;
	Parms.K2Node_CustomEvent_GoatBaaing = K2Node_CustomEvent_GoatBaaing;
	Parms.CallFunc_Conv_IntToBool_ReturnValue_4 = CallFunc_Conv_IntToBool_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_And_IntInt_ReturnValue_5 = CallFunc_And_IntInt_ReturnValue_5;
	Parms.CallFunc_Conv_IntToBool_ReturnValue_5 = CallFunc_Conv_IntToBool_ReturnValue_5;
	Parms.CallFunc_GetDistanceTo_ReturnValue = CallFunc_GetDistanceTo_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_And_IntInt_ReturnValue_6 = CallFunc_And_IntInt_ReturnValue_6;
	Parms.CallFunc_Conv_IntToBool_ReturnValue_6 = CallFunc_Conv_IntToBool_ReturnValue_6;
	Parms.CallFunc_And_IntInt_ReturnValue_7 = CallFunc_And_IntInt_ReturnValue_7;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_Conv_IntToBool_ReturnValue_7 = CallFunc_Conv_IntToBool_ReturnValue_7;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


