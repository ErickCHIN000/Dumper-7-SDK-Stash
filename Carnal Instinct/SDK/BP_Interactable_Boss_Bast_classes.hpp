#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x2A0 - 0x258)
// BlueprintGeneratedClass BP_Interactable_Boss_Bast.BP_Interactable_Boss_Bast_C
class ABP_Interactable_Boss_Bast_C : public ABP_BASE_INTERACTABLE_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class Ubp_msl_identifier_component_C*        bp_msl_identifier_component;                       // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class Ubp_msl_system_component_C*            bp_msl_system_component;                           // 0x268(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                   Billboard;                                         // 0x270(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Bast_Location;                                     // 0x278(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_277F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_InquisitorOfBast_C*                Bast;                                              // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CombatCharacter_C*                 Player;                                            // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_InGame_C*                          InGameRef;                                         // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Interactable_Boss_Bast_C* GetDefaultObj();

	void Start_Battle();
	void IntroSeqFinished();
	void OnCombatFinished();
	void Start_Sequence(class ULevelSequence* Level_Seq);
	void OnSequence_End();
	void Start_DLG_with_Bast();
	void Game_Load();
	void End_Fight();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Interactable_Boss_Bast(int32 EntryPoint, const struct FS_bodySystem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UWB_Fade_C* CallFunc_Create_ReturnValue, class Abp_dlg_actor_C* CallFunc_GetActorOfClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, enum class E_State CallFunc_GetState_State, bool K2Node_SwitchEnum_CmpSuccess, class Abp_dlg_actor_C* CallFunc_GetActorOfClass_ReturnValue_1, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, class ABP_InquisitorOfBast_C* CallFunc_GetActorOfClass_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FMovieSceneSequencePlaybackSettings& K2Node_MakeStruct_MovieSceneSequencePlaybackSettings, class ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, class ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, TArray<class UWB_InGame_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UWB_InGame_C* CallFunc_Array_Get_Item, class ANpc_statue_C* CallFunc_GetActorOfClass_ReturnValue_3, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ANpc_stranger_C* CallFunc_GetActorOfClass_ReturnValue_4, class ANpc_strangerplaceholder_C* CallFunc_GetActorOfClass_ReturnValue_5, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, bool CallFunc_dlg_get_dlg_component_is_valid, class Ubp_dlg_component_C* CallFunc_dlg_get_dlg_component_dlg_reference, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player_1, bool CallFunc_get_dlg_is_valid, int32 CallFunc_get_dlg_found_index, class Abp_dlg_actor_C* CallFunc_get_dlg_dlg_actor, bool CallFunc_get_quest_is_valid, int32 CallFunc_get_quest_found_index, class Abp_quest_actor_C* CallFunc_get_quest_quest_actor, class ANpc_nepthys_C* CallFunc_GetActorOfClass_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_2, class UBP_TargetIndicatorComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class ULevelSequence* K2Node_CustomEvent_Level_Seq, class ANpc_strangerplaceholder_C* CallFunc_GetActorOfClass_ReturnValue_7, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_InquisitorOfBast_C* CallFunc_FinishSpawningActor_ReturnValue, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player_2, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player_3, class ANpc_stranger_C* CallFunc_GetActorOfClass_ReturnValue_8, const struct FMovieSceneSequencePlaybackSettings& K2Node_MakeStruct_MovieSceneSequencePlaybackSettings_1, class ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor_1, class ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue_1, float K2Node_Event_DeltaSeconds, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FMovieSceneSequencePlaybackSettings& K2Node_MakeStruct_MovieSceneSequencePlaybackSettings_2, class ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor_2, class ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_5);
};

}


