#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xDF (0x3F1 - 0x312)
// BlueprintGeneratedClass Usable_Renounce_Shells.Usable_Renounce_Shells_C
class AUsable_Renounce_Shells_C : public AUsable_Actor_C
{
public:
	uint8                                        Pad_871[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  CathEntranceSet4_StairSet_09;                      // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Candle4;                                           // 0x328(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Candle3;                                           // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Candle2;                                           // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Candle1;                                           // 0x340(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Leg_R1111;                                         // 0x348(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Leg_R111;                                          // 0x350(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Leg_R11;                                           // 0x358(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Leg_R1;                                            // 0x360(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Leg_L1111;                                         // 0x368(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Leg_L111;                                          // 0x370(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Leg_L11;                                           // 0x378(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Leg_L1;                                            // 0x380(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Horn2;                                             // 0x388(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Fire_eyes;                                         // 0x390(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Horn1;                                             // 0x398(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Lever;                                             // 0x3A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Pillar;                                            // 0x3A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_Alpha_95BA626D4A2FE278CD6446BB478AC95E; // 0x3B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_95BA626D4A2FE278CD6446BB478AC95E; // 0x3B4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_0;                                        // 0x3B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_Dialogue_C*                        UI_Widget;                                         // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class ALevelSequenceActor>    ShellRenounceLevelSequence;                        // 0x3C8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         bAlreadyOpennedWTH;                                // 0x3F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AUsable_Renounce_Shells_C* GetDefaultObj();

	void ResetFoundlingDye(class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_1, bool K2Node_DynamicCast_bSuccess_1, const struct FStruct_ShellDyes& CallFunc_GetShellDyes_Dyes, const struct FStruct_ShellDyes& K2Node_SetFieldsInStruct_StructOut);
	void OnActorUsed(class APlayerController* Controller, bool* Success);
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveBeginPlay();
	void AnsweredRenouncePrompt(bool bYes);
	void OnWidgetHidden();
	void PromptToRenounce();
	void ShowRenounceWidget();
	void RenounceScript();
	void RemoveWB();
	void SetUsableOnShellEquipped(class FText ShellName, class FText ShellTagline);
	void ScreenAndShakeFX();
	void MoveDown();
	void MoveUp();
	void ExecuteUbergraph_Usable_Renounce_Shells(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool K2Node_CustomEvent_bYes, bool CallFunc_IsValid_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UUI_Dialogue_C* CallFunc_Create_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, class UUI_LorePopup_C* CallFunc_Create_ReturnValue_1, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, TArray<class AUseable_Player_Death_Statue_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AUseable_Player_Death_Statue_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_1, TArray<class ABP_DeathShell_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, class ABP_DeathShell_C* CallFunc_Array_Get_Item_1, float CallFunc_Lerp_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_Lerp_ReturnValue_1, float CallFunc_Lerp_ReturnValue_2, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, float CallFunc_Lerp_ReturnValue_3, float CallFunc_Lerp_ReturnValue_4, const struct FRotator& CallFunc_MakeRotator_ReturnValue_3, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Lerp_ReturnValue_5, const struct FVector& CallFunc_MakeVector_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TArray<class AUsable_Armor_C*>& CallFunc_GetAllActorsOfClass_OutActors_2, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1, class AUsable_Armor_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class UBriefReturnFromBlackFade_C* CallFunc_Create_ReturnValue_2, class FText K2Node_CustomEvent_ShellName, class FText K2Node_CustomEvent_ShellTagline, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_1, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_2, class ABP_RadialBlur_C* CallFunc_FinishSpawningActor_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_2, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_3, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class ALevelSequenceActor* K2Node_DynamicCast_AsLevel_Sequence_Actor, bool K2Node_DynamicCast_bSuccess, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5);
};

}


