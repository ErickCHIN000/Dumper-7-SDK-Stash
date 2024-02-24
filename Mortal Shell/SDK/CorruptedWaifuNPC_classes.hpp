#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x409 - 0x3A1)
// BlueprintGeneratedClass CorruptedWaifuNPC.CorruptedWaifuNPC_C
class ACorruptedWaifuNPC_C : public AUsable_Branching_NPC_C
{
public:
	uint8                                        Pad_2AC4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                     Capsule;                                           // 0x3B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x3B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMerchantPanel_C*                      UI_MerchantPanel;                                  // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDHDialogueLine>               OnlyDialogue;                                      // 0x3C8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         bStartTrade;                                       // 0x3D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2ADB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMerchantItem>                 Stock;                                             // 0x3E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FMerchantItem>                 Stock_HadernEnabled;                               // 0x3F0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FTimerHandle                          Timer_BossSoundtrack;                              // 0x400(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         HadernContentEnabled;                              // 0x408(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ACorruptedWaifuNPC_C* GetDefaultObj();

	void SetupDanceBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM);
	void StopDance(class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UCultistWaifu_Skeleton_AnimBlueprint_C* K2Node_DynamicCast_AsCultist_Waifu_Skeleton_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess);
	void StartDance(class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UCultistWaifu_Skeleton_AnimBlueprint_C* K2Node_DynamicCast_AsCultist_Waifu_Skeleton_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess);
	void ResetWidget(bool CallFunc_IsValid_ReturnValue);
	void GetStock(TArray<struct FMerchantItem>* NewParam);
	void ContinueDialog();
	void OnWidgetHidden();
	void OnOptionSelected(bool bYes);
	void OpenTradeMenu();
	void OnTradeFinished();
	void ReceiveBeginPlay();
	void BossSoundtrack_SetTimer();
	void BossSoundtrack_SwitchMusicType();
	void ExecuteUbergraph_CorruptedWaifuNPC(int32 EntryPoint, bool CallFunc_IsHadernContentEnabled_ReturnValue, bool K2Node_Event_bYes, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1, bool CallFunc_IsValid_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2, bool CallFunc_IsInViewport_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, enum class Enum_BossSoundtrackType CallFunc_GetBossSoundtrackType_Soundtrack, bool CallFunc_GetMusicDLCEnabled_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_2, bool K2Node_DynamicCast_bSuccess_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_3, bool K2Node_DynamicCast_bSuccess_3, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class AActivationExplosion_C* CallFunc_FinishSpawningActor_ReturnValue, class AActivationExplosion_C* CallFunc_FinishSpawningActor_ReturnValue_1, bool CallFunc_IsInViewport_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1);
};

}


