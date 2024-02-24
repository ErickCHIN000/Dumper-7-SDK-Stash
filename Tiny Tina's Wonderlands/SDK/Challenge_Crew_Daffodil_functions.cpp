#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Crew_Daffodil.Challenge_Crew_Daffodil_C
// (None)

class UClass* UChallenge_Crew_Daffodil_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Crew_Daffodil_C");

	return Clss;
}


// Challenge_Crew_Daffodil_C Challenge_Crew_Daffodil.Default__Challenge_Crew_Daffodil_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Crew_Daffodil_C* UChallenge_Crew_Daffodil_C::GetDefaultObj()
{
	static class UChallenge_Crew_Daffodil_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Crew_Daffodil_C*>(UChallenge_Crew_Daffodil_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Challenge_Crew_Daffodil.Challenge_Crew_Daffodil_C.PlayActivationAudio
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      OwningActor                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDialogContext              DialogContext                                                    (Edit, BlueprintVisible)
// class AOakPlayerController*        K2Node_DynamicCast_AsOak_Player_Controller                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShowTutorialPopup_NewParam                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetStatValue_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDialogConversation         CallFunc_FinishSpeak_Conversation                                (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FinishSpeak_SequenceID                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FinishSpeak_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDialogConversation         CallFunc_FinishSpeak_Conversation1                               (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FinishSpeak_SequenceID1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FinishSpeak_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDialogContext              K2Node_MakeStruct_DialogContext                                  (None)

void UChallenge_Crew_Daffodil_C::PlayActivationAudio(class AActor* OwningActor, const struct FDialogContext& DialogContext, class AOakPlayerController* K2Node_DynamicCast_AsOak_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, bool CallFunc_ShowTutorialPopup_NewParam, int32 CallFunc_GetStatValue_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FDialogConversation& CallFunc_FinishSpeak_Conversation, int32 CallFunc_FinishSpeak_SequenceID, bool CallFunc_FinishSpeak_ReturnValue, const struct FDialogConversation& CallFunc_FinishSpeak_Conversation1, int32 CallFunc_FinishSpeak_SequenceID1, bool CallFunc_FinishSpeak_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue, const struct FDialogContext& K2Node_MakeStruct_DialogContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Challenge_Crew_Daffodil_C", "PlayActivationAudio");

	Params::UChallenge_Crew_Daffodil_C_PlayActivationAudio_Params Parms{};

	Parms.OwningActor = OwningActor;
	Parms.DialogContext = DialogContext;
	Parms.K2Node_DynamicCast_AsOak_Player_Controller = K2Node_DynamicCast_AsOak_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_ShowTutorialPopup_NewParam = CallFunc_ShowTutorialPopup_NewParam;
	Parms.CallFunc_GetStatValue_ReturnValue = CallFunc_GetStatValue_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_FinishSpeak_Conversation = CallFunc_FinishSpeak_Conversation;
	Parms.CallFunc_FinishSpeak_SequenceID = CallFunc_FinishSpeak_SequenceID;
	Parms.CallFunc_FinishSpeak_ReturnValue = CallFunc_FinishSpeak_ReturnValue;
	Parms.CallFunc_FinishSpeak_Conversation1 = CallFunc_FinishSpeak_Conversation1;
	Parms.CallFunc_FinishSpeak_SequenceID1 = CallFunc_FinishSpeak_SequenceID1;
	Parms.CallFunc_FinishSpeak_ReturnValue1 = CallFunc_FinishSpeak_ReturnValue1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_MakeStruct_DialogContext = K2Node_MakeStruct_DialogContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Challenge_Crew_Daffodil.Challenge_Crew_Daffodil_C.ShowTutorialPopup
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               GameInstance                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakPlayerController*        TargetPlayer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               NewParam                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USpecialMessageDataAsset*    Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGbxCharacter*               CallFunc_GetAssociatedPrimaryCharacter_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetAssociatedVehicle_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USpecialMessageDataAsset*    Temp_object_Variable1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USpecialMessageDataAsset*    Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USpecialMessageDataAsset*    Temp_object_Variable3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USpecialMessageDataAsset*    Temp_object_Variable4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USpecialMessageDataAsset*    Temp_object_Variable5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USpecialMessageDataAsset*    Temp_object_Variable6                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USpecialMessageDataAsset*    Temp_object_Variable7                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_CrewChallengeType_DaffodilTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USpecialMessageDataAsset*    K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChallenge_Crew_Daffodil_C::ShowTutorialPopup(class UGameInstance* GameInstance, class AOakPlayerController* TargetPlayer, bool* NewParam, class USpecialMessageDataAsset* Temp_object_Variable, class AGbxCharacter* CallFunc_GetAssociatedPrimaryCharacter_ReturnValue, class APawn* CallFunc_GetAssociatedVehicle_ReturnValue, class USpecialMessageDataAsset* Temp_object_Variable1, class USpecialMessageDataAsset* Temp_object_Variable2, class USpecialMessageDataAsset* Temp_object_Variable3, class USpecialMessageDataAsset* Temp_object_Variable4, class USpecialMessageDataAsset* Temp_object_Variable5, class USpecialMessageDataAsset* Temp_object_Variable6, class USpecialMessageDataAsset* Temp_object_Variable7, enum class Enum_CrewChallengeType_Daffodil Temp_byte_Variable, class USpecialMessageDataAsset* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Challenge_Crew_Daffodil_C", "ShowTutorialPopup");

	Params::UChallenge_Crew_Daffodil_C_ShowTutorialPopup_Params Parms{};

	Parms.GameInstance = GameInstance;
	Parms.TargetPlayer = TargetPlayer;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetAssociatedPrimaryCharacter_ReturnValue = CallFunc_GetAssociatedPrimaryCharacter_ReturnValue;
	Parms.CallFunc_GetAssociatedVehicle_ReturnValue = CallFunc_GetAssociatedVehicle_ReturnValue;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.Temp_object_Variable3 = Temp_object_Variable3;
	Parms.Temp_object_Variable4 = Temp_object_Variable4;
	Parms.Temp_object_Variable5 = Temp_object_Variable5;
	Parms.Temp_object_Variable6 = Temp_object_Variable6;
	Parms.Temp_object_Variable7 = Temp_object_Variable7;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}


// Function Challenge_Crew_Daffodil.Challenge_Crew_Daffodil_C.PlayCompletionAudio
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGbxPlayerController*        CompletedPlayer                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               PlayedAudio                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UChallengesComponent*        CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsChallengeComplete_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDialogContext              K2Node_MakeStruct_DialogContext                                  (None)
// struct FDialogConversation         CallFunc_FinishSpeak_Conversation                                (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FinishSpeak_SequenceID                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FinishSpeak_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDialogConversation         CallFunc_FinishSpeak_Conversation1                               (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FinishSpeak_SequenceID1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FinishSpeak_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UChallenge_Crew_Daffodil_C::PlayCompletionAudio(class AGbxPlayerController* CompletedPlayer, bool* PlayedAudio, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UChallengesComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsChallengeComplete_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, const struct FDialogContext& K2Node_MakeStruct_DialogContext, const struct FDialogConversation& CallFunc_FinishSpeak_Conversation, int32 CallFunc_FinishSpeak_SequenceID, bool CallFunc_FinishSpeak_ReturnValue, const struct FDialogConversation& CallFunc_FinishSpeak_Conversation1, int32 CallFunc_FinishSpeak_SequenceID1, bool CallFunc_FinishSpeak_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Challenge_Crew_Daffodil_C", "PlayCompletionAudio");

	Params::UChallenge_Crew_Daffodil_C_PlayCompletionAudio_Params Parms{};

	Parms.CompletedPlayer = CompletedPlayer;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsChallengeComplete_ReturnValue = CallFunc_IsChallengeComplete_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.K2Node_MakeStruct_DialogContext = K2Node_MakeStruct_DialogContext;
	Parms.CallFunc_FinishSpeak_Conversation = CallFunc_FinishSpeak_Conversation;
	Parms.CallFunc_FinishSpeak_SequenceID = CallFunc_FinishSpeak_SequenceID;
	Parms.CallFunc_FinishSpeak_ReturnValue = CallFunc_FinishSpeak_ReturnValue;
	Parms.CallFunc_FinishSpeak_Conversation1 = CallFunc_FinishSpeak_Conversation1;
	Parms.CallFunc_FinishSpeak_SequenceID1 = CallFunc_FinishSpeak_SequenceID1;
	Parms.CallFunc_FinishSpeak_ReturnValue1 = CallFunc_FinishSpeak_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

	if (PlayedAudio != nullptr)
		*PlayedAudio = Parms.PlayedAudio;

}


// Function Challenge_Crew_Daffodil.Challenge_Crew_Daffodil_C.OnInitChallengeInstance
// (Event, Public, BlueprintEvent)
// Parameters:
// class UChallengesComponent*        OwningChallenges                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGbxCharacter*               AssociatedCharacter                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChallenge_Crew_Daffodil_C::OnInitChallengeInstance(class UChallengesComponent* OwningChallenges, class AGbxCharacter* AssociatedCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Challenge_Crew_Daffodil_C", "OnInitChallengeInstance");

	Params::UChallenge_Crew_Daffodil_C_OnInitChallengeInstance_Params Parms{};

	Parms.OwningChallenges = OwningChallenges;
	Parms.AssociatedCharacter = AssociatedCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Challenge_Crew_Daffodil.Challenge_Crew_Daffodil_C.OnChallengeActivated
// (Event, Public, BlueprintEvent)
// Parameters:

void UChallenge_Crew_Daffodil_C::OnChallengeActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Challenge_Crew_Daffodil_C", "OnChallengeActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Challenge_Crew_Daffodil.Challenge_Crew_Daffodil_C.CompletedChallenge
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGbxPlayerController*        CompletedPlayer                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChallenge_Crew_Daffodil_C::CompletedChallenge(class AGbxPlayerController* CompletedPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Challenge_Crew_Daffodil_C", "CompletedChallenge");

	Params::UChallenge_Crew_Daffodil_C_CompletedChallenge_Params Parms{};

	Parms.CompletedPlayer = CompletedPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Challenge_Crew_Daffodil.Challenge_Crew_Daffodil_C.ExecuteUbergraph_Challenge_Crew_Daffodil
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UChallengesComponent*        K2Node_Event_OwningChallenges                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGbxCharacter*               K2Node_Event_AssociatedCharacter                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGbxPlayerController*        K2Node_Event_CompletedPlayer                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PlayCompletionAudio_PlayedAudio                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UChallenge_Crew_Daffodil_C::ExecuteUbergraph_Challenge_Crew_Daffodil(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, class UChallengesComponent* K2Node_Event_OwningChallenges, class AGbxCharacter* K2Node_Event_AssociatedCharacter, class AActor* CallFunc_GetOwner_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, class AGbxPlayerController* K2Node_Event_CompletedPlayer, bool CallFunc_PlayCompletionAudio_PlayedAudio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Challenge_Crew_Daffodil_C", "ExecuteUbergraph_Challenge_Crew_Daffodil");

	Params::UChallenge_Crew_Daffodil_C_ExecuteUbergraph_Challenge_Crew_Daffodil_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_Event_OwningChallenges = K2Node_Event_OwningChallenges;
	Parms.K2Node_Event_AssociatedCharacter = K2Node_Event_AssociatedCharacter;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_Event_CompletedPlayer = K2Node_Event_CompletedPlayer;
	Parms.CallFunc_PlayCompletionAudio_PlayedAudio = CallFunc_PlayCompletionAudio_PlayedAudio;

	UObject::ProcessEvent(Func, &Parms);

}

}


