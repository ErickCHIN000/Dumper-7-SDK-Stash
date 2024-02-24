#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1E7 (0x588 - 0x3A1)
// BlueprintGeneratedClass Baghead_NPC.Baghead_NPC_C
class ABaghead_NPC_C : public AUsable_Branching_NPC_C
{
public:
	uint8                                        Pad_2ACD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UDHConsoleExtensionComponent*          DHConsoleExtension;                                // 0x3B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  bottleV6;                                          // 0x3B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  bottleV5;                                          // 0x3C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  bottleV4;                                          // 0x3C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  bottleV3;                                          // 0x3D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  bottleV2;                                          // 0x3D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x3E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentDialogue_0;                                 // 0x3E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WasSuperiorMoonshinePrompt_;                       // 0x3EC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2AEE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDHDialogueLine>               BagheadDialog_HungryForRat;                        // 0x3F0(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FDHDialogueLine>               BagheadDialog_PlayerHasRat;                        // 0x400(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FDHDialogueLine>               BagheadDialog_AteRat;                              // 0x410(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FDHDialogueLine>               BagheadDialog_PlayerDeclinedToGiveRat;             // 0x420(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FDHDialogueLine>               BagheadDialog_ThirstyForMoonshine;                 // 0x430(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FDHDialogueLine>               BagheadDialog_PlayerHasInferiorMoonshine;          // 0x440(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FDHDialogueLine>               BagheadDialog_DrankMoonshine;                      // 0x450(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FDHDialogueLine>               BagheadDialog_PlayerDeclinedToGiveCheapMoonshine;  // 0x460(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FDHDialogueLine>               BagheadDialog_PlayerHasSuperiorMoonshine;          // 0x470(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FDHDialogueLine>               BagheadDialog_DrankSuperiorMoonshine;              // 0x480(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FDHDialogueLine>               BagheadDialog_PlayerDeclinedToGiveSuperiorMoonshine; // 0x490(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FDHDialogueLine>               BagheadDialog_EndGameChoice;                       // 0x4A0(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FDHDialogueLine>               BagheadDialog_EndGame_Yes;                         // 0x4B0(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FDHDialogueLine>               BagheadDialog_EndGame_No;                          // 0x4C0(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FDHDialogueLine>               BalancedShell;                                     // 0x4D0(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FDHDialogueLine>               LightShell;                                        // 0x4E0(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FDHDialogueLine>               Darkform;                                          // 0x4F0(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class ALevelSequenceActor>    BagheadEndingSequence;                             // 0x500(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class ABPUsable_DarkFather_C> BPUsableDarkFather;                                // 0x528(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class AFog_chest_consumable_container_C> ChestReference;                                    // 0x550(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class UBriefFadeToBlack_C*                   BriefFadeToBlack;                                  // 0x578(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBriefReturnFromBlackFade_C*           BriefReturnFromFadeToBlack;                        // 0x580(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABaghead_NPC_C* GetDefaultObj();

	void SwapMusic();
	void ContinueDialog();
	void OnOptionSelected(bool bYes);
	void Rollcredits();
	void DH_TestBagheadEnding();
	void OnFadeToBlackCompleted();
	void Baghead_Ending_Start();
	void FadeOutGameMusic();
	void ExecuteUbergraph_Baghead_NPC(int32 EntryPoint, bool Temp_bool_Variable, enum class EArmorTypes Temp_byte_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, class FName Temp_name_Variable_4, class FName Temp_name_Variable_5, class UBriefFadeToBlack_C* CallFunc_Create_ReturnValue, class UBriefReturnFromBlackFade_C* CallFunc_Create_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Has_Been_Initd_Variable, TArray<struct FDHDialogueLine>& Temp_struct_Variable, bool Temp_bool_IsClosed_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TArray<struct FDHDialogueLine>& Temp_struct_Variable_1, bool K2Node_Event_bYes, bool CallFunc_CheckPlayerInventoryForItem_Success, int32 CallFunc_CheckPlayerInventoryForItem_InventorySlot, bool CallFunc_CheckPlayerInventoryForItem_Success_1, int32 CallFunc_CheckPlayerInventoryForItem_InventorySlot_1, bool CallFunc_CheckPlayerInventoryForItem_Success_2, int32 CallFunc_CheckPlayerInventoryForItem_InventorySlot_2, TArray<struct FDHDialogueLine>& Temp_struct_Variable_2, int32 Temp_int_Array_Index_Variable, bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_SwitchInteger_CmpSuccess_1, TArray<struct FDHDialogueLine>& K2Node_Select_Default, enum class EArmorTypes Temp_byte_Variable_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class AGamePlayGameState_C* CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState, class ALevelSequenceActor* K2Node_DynamicCast_AsLevel_Sequence_Actor, bool K2Node_DynamicCast_bSuccess, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class ABPUsable_DarkFather_C* K2Node_DynamicCast_AsBPUsable_Dark_Father, bool K2Node_DynamicCast_bSuccess_1, bool Temp_bool_Variable_1, TArray<class AEnemyCharacter_C*>& CallFunc_GetAllActorsOfClass_OutActors, TArray<struct FDHDialogueLine>& K2Node_Select_Default_1, class AEnemyCharacter_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, enum class EArmorTypes CallFunc_GetShell_CurrentArmor, int32 Temp_int_Loop_Counter_Variable, TArray<struct FDHDialogueLine>& K2Node_Select_Default_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, class FName K2Node_Select_Default_3, bool CallFunc_GetArbNameInChangedSetPure_bIsInSet, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class AFog_chest_consumable_container_C* K2Node_DynamicCast_AsFog_Chest_Consumable_Container, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_RemoveInventoryItem_Success, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2, bool CallFunc_RemoveInventoryItem_Success_1, bool CallFunc_RemoveInventoryItem_Success_2, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3, bool Temp_bool_Variable_2, TArray<struct FDHDialogueLine>& K2Node_Select_Default_4, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_1, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance);
};

}


