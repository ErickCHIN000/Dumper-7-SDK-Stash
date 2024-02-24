#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x121 (0x359 - 0x238)
// BlueprintGeneratedClass Challenge_Crew_Daffodil.Challenge_Crew_Daffodil_C
class UChallenge_Crew_Daffodil_C : public UOakChallenge
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	struct FDialogTimeSlotReference              CrewActivationDialog;                              // 0x240(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDialogTimeSlotReference              CrewCompletionDialog;                              // 0x280(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDialogTimeSlotReference              CrewIntroDialog;                                   // 0x2C0(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UGameStatData*                         CrewIntroStat;                                     // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_CrewChallengeType_Daffodil   Enum_CrewChallenge;                                // 0x308(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1950[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ActivationStartDelay;                              // 0x30C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDialogTimeSlotReference              CrewMetaCompletionDialog;                          // 0x310(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                MetaChallenge;                                     // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PlayIntroVO_Only;                                  // 0x358(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UChallenge_Crew_Daffodil_C* GetDefaultObj();

	void PlayActivationAudio(class AActor* OwningActor, const struct FDialogContext& DialogContext, class AOakPlayerController* K2Node_DynamicCast_AsOak_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, bool CallFunc_ShowTutorialPopup_NewParam, int32 CallFunc_GetStatValue_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FDialogConversation& CallFunc_FinishSpeak_Conversation, int32 CallFunc_FinishSpeak_SequenceID, bool CallFunc_FinishSpeak_ReturnValue, const struct FDialogConversation& CallFunc_FinishSpeak_Conversation1, int32 CallFunc_FinishSpeak_SequenceID1, bool CallFunc_FinishSpeak_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue, const struct FDialogContext& K2Node_MakeStruct_DialogContext);
	void ShowTutorialPopup(class UGameInstance* GameInstance, class AOakPlayerController* TargetPlayer, bool* NewParam, class USpecialMessageDataAsset* Temp_object_Variable, class AGbxCharacter* CallFunc_GetAssociatedPrimaryCharacter_ReturnValue, class APawn* CallFunc_GetAssociatedVehicle_ReturnValue, class USpecialMessageDataAsset* Temp_object_Variable1, class USpecialMessageDataAsset* Temp_object_Variable2, class USpecialMessageDataAsset* Temp_object_Variable3, class USpecialMessageDataAsset* Temp_object_Variable4, class USpecialMessageDataAsset* Temp_object_Variable5, class USpecialMessageDataAsset* Temp_object_Variable6, class USpecialMessageDataAsset* Temp_object_Variable7, enum class Enum_CrewChallengeType_Daffodil Temp_byte_Variable, class USpecialMessageDataAsset* K2Node_Select_Default);
	void PlayCompletionAudio(class AGbxPlayerController* CompletedPlayer, bool* PlayedAudio, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UChallengesComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsChallengeComplete_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, const struct FDialogContext& K2Node_MakeStruct_DialogContext, const struct FDialogConversation& CallFunc_FinishSpeak_Conversation, int32 CallFunc_FinishSpeak_SequenceID, bool CallFunc_FinishSpeak_ReturnValue, const struct FDialogConversation& CallFunc_FinishSpeak_Conversation1, int32 CallFunc_FinishSpeak_SequenceID1, bool CallFunc_FinishSpeak_ReturnValue1);
	void OnInitChallengeInstance(class UChallengesComponent* OwningChallenges, class AGbxCharacter* AssociatedCharacter);
	void OnChallengeActivated();
	void CompletedChallenge(class AGbxPlayerController* CompletedPlayer);
	void ExecuteUbergraph_Challenge_Crew_Daffodil(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, class UChallengesComponent* K2Node_Event_OwningChallenges, class AGbxCharacter* K2Node_Event_AssociatedCharacter, class AActor* CallFunc_GetOwner_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, class AGbxPlayerController* K2Node_Event_CompletedPlayer, bool CallFunc_PlayCompletionAudio_PlayedAudio);
};

}


