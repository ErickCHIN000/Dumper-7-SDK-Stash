#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11B (0x4BC - 0x3A1)
// BlueprintGeneratedClass FogCultistNPC.FogCultistNPC_C
class AFogCultistNPC_C : public AUsable_Branching_NPC_C
{
public:
	uint8                                        Pad_8A6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              Fire2;                                             // 0x3B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Fire1;                                             // 0x3B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Fire;                                              // 0x3C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x3C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDHDialogueLine>               PlayerHasGland;                                    // 0x3D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FDHDialogueLine>               PlayerHasGland_Short;                              // 0x3E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FDHDialogueLine>               OfferFogStart;                                     // 0x3F0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FDHDialogueLine>               AcceptStartFog;                                    // 0x400(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FDHDialogueLine>               DeclineStartFog;                                   // 0x410(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FDHDialogueLine>               OfferFogEnd;                                       // 0x420(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FDHDialogueLine>               AcceptEndFog;                                      // 0x430(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FDHDialogueLine>               DeclineEndFog;                                     // 0x440(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FDHDialogueLine>               Darkform;                                          // 0x450(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FDHDialogueLine>               AfterAllDialoguesExhausted;                        // 0x460(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FDHDialogueLine>               IfSpecialGlimpse;                                  // 0x470(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FDHDialogueLine>               SpecialGlimpseYes;                                 // 0x480(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FDHDialogueLine>               SpecialGlimpseNo;                                  // 0x490(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	enum class EFogCultistBranches               CurrentDialogueBranch;                             // 0x4A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDHDialogueLine>               NotEnoughGlimpsesDialogue;                         // 0x4A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                        GlimpseCostToSwitchFogState;                       // 0x4B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AFogCultistNPC_C* GetDefaultObj();

	void ShouldDoFirstTimeStartFog_();
	bool ShouldDoSpecialGlimpseDialogue_(bool CallFunc_CheckPlayerInventoryForItem_Success, int32 CallFunc_CheckPlayerInventoryForItem_InventorySlot, bool CallFunc_GetArbNameInChangedSetPure_bIsInSet, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	bool HasAnyBossBeenDefeated_(class FName CallFunc_AddNGLevelToID_O, bool CallFunc_CheckPlayerInventoryForItem_Success, int32 CallFunc_CheckPlayerInventoryForItem_InventorySlot, int32 CallFunc_GetNamedPCInt_Value, bool CallFunc_CheckPlayerInventoryForItem_Success_1, int32 CallFunc_CheckPlayerInventoryForItem_InventorySlot_1, bool CallFunc_Conv_IntToBool_ReturnValue, bool CallFunc_CheckPlayerInventoryForItem_Success_2, int32 CallFunc_CheckPlayerInventoryForItem_InventorySlot_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2);
	void OnNotifyEnd_774459FB4028BA8B85A3DD85B2E67D51(class FName NotifyName);
	void OnNotifyBegin_774459FB4028BA8B85A3DD85B2E67D51(class FName NotifyName);
	void OnInterrupted_774459FB4028BA8B85A3DD85B2E67D51(class FName NotifyName);
	void OnBlendOut_774459FB4028BA8B85A3DD85B2E67D51(class FName NotifyName);
	void OnCompleted_774459FB4028BA8B85A3DD85B2E67D51(class FName NotifyName);
	void OnNotifyEnd_28554C374740FE60248772A935B2697A(class FName NotifyName);
	void OnNotifyBegin_28554C374740FE60248772A935B2697A(class FName NotifyName);
	void OnInterrupted_28554C374740FE60248772A935B2697A(class FName NotifyName);
	void OnBlendOut_28554C374740FE60248772A935B2697A(class FName NotifyName);
	void OnCompleted_28554C374740FE60248772A935B2697A(class FName NotifyName);
	void OnNotifyEnd_871D024149A780E83B4D5C9B6AB829F7(class FName NotifyName);
	void OnNotifyBegin_871D024149A780E83B4D5C9B6AB829F7(class FName NotifyName);
	void OnInterrupted_871D024149A780E83B4D5C9B6AB829F7(class FName NotifyName);
	void OnBlendOut_871D024149A780E83B4D5C9B6AB829F7(class FName NotifyName);
	void OnCompleted_871D024149A780E83B4D5C9B6AB829F7(class FName NotifyName);
	void ReceiveBeginPlay();
	void OnOptionSelected(bool bYes);
	void OnDialogueFinished();
	void ContinueDialog();
	void StartFogFromNPC();
	void FogEnd();
	void GiveGlimpse();
	void ExecuteUbergraph_FogCultistNPC(int32 EntryPoint, bool Temp_bool_Variable, class FName K2Node_CustomEvent_NotifyName_14, class FName K2Node_CustomEvent_NotifyName_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName Temp_name_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class FName Temp_name_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, bool CallFunc_HasAnyBossBeenDefeated__ReturnValue, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_CheckPlayerInventoryForGland_ReturnValue, bool CallFunc_ShouldDoSpecialGlimpseDialogue__ReturnValue, bool K2Node_Event_bYes, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, TScriptInterface<class IGameModeUtilInterface_C> K2Node_DynamicCast_AsGame_Mode_Util_Interface, bool K2Node_DynamicCast_bSuccess, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, int32 CallFunc_GetShellBondingPoints_Points, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_GetArbNameInChangedSetPure_bIsInSet, bool CallFunc_GetArbNameInChangedSetPure_bIsInSet_1, bool CallFunc_GetArbNameInChangedSetPure_bIsInSet_2, enum class EArmorTypes CallFunc_GetShell_CurrentArmor, TArray<struct FDHDialogueLine>& K2Node_Select_Default, int32 CallFunc_Multiply_IntInt_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_2, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue_1, enum class EArmorTypes CallFunc_GetShell_CurrentArmor_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_3, bool Temp_bool_Variable_1, TArray<struct FDHDialogueLine>& K2Node_Select_Default_1, bool CallFunc_RemoveItemFromPlayerInventory_Success, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_4, bool Temp_bool_Variable_2, TScriptInterface<class IGameModeUtilInterface_C> K2Node_DynamicCast_AsGame_Mode_Util_Interface_1, bool K2Node_DynamicCast_bSuccess_1, TArray<struct FDHDialogueLine>& K2Node_Select_Default_2, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_AddItemToPlayerInventory_Success, int32 CallFunc_AddItemToPlayerInventory_InventorySlot, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2);
};

}


