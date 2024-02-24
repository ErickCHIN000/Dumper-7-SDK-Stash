#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xCF (0x3E1 - 0x312)
// BlueprintGeneratedClass Useable_Player_Death_Statue.Useable_Player_Death_Statue_C
class AUseable_Player_Death_Statue_C : public AUsable_Actor_C
{
public:
	uint8                                        Pad_2DDA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USpotLightComponent*                   SpotLight;                                         // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              ParticleSystem;                                    // 0x328(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                       StoneParticleSpawnPoint;                           // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        FadeStatueOpacity_StatueOpacity_93E7EB3D478DC38ACC5F13AC1E304AF7; // 0x340(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                FadeStatueOpacity__Direction_93E7EB3D478DC38ACC5F13AC1E304AF7; // 0x344(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E1A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    FadeStatueOpacity;                                 // 0x348(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StoneFade_NewTrack_0_765665EA48E0C86709480F8C49DD0376; // 0x350(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                StoneFade__Direction_765665EA48E0C86709480F8C49DD0376; // 0x354(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E26[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    StoneFade;                                         // 0x358(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasBeenUsed;                                       // 0x360(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E2A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        EssencesToRestore;                                 // 0x364(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UAnimMontage*                          PoseMontage;                                       // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PoseToSelect;                                      // 0x370(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        UseCountBeforeTeleport;                            // 0x374(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                TeleportCommand;                                   // 0x378(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	enum class EArmorTypes                       ArmorOnDeath;                                      // 0x388(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_2E51[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMeshComponent*                PlayerMesh;                                        // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AZero_Base_C*                          PlayerCharRef;                                     // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsLastChanceShell_;                                // 0x3A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_2E65[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPoseSnapshot                         PoseSnapshotToUse;                                 // 0x3A8(0x38)(Edit, BlueprintVisible, ExposeOnSpawn)
	enum class Enum_ShellDye                     DyeOnDeath;                                        // 0x3E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AUseable_Player_Death_Statue_C* GetDefaultObj();

	void OnActorUsed(class APlayerController* Controller, bool* Success, const class FString& TeleportCommand, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, bool CallFunc_OnActorUsed_Success, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_1, class ABarbarous_C* K2Node_DynamicCast_AsBarbarous, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
	void OnWasUsed(bool* Success, float LocalRotation, bool CallFunc_OnWasUsed_Success);
	void StoneFade__FinishedFunc();
	void StoneFade__UpdateFunc();
	void FadeStatueOpacity__FinishedFunc();
	void FadeStatueOpacity__UpdateFunc();
	void OnNotifyEnd_1FFFB4BA4D6D93435F14B78A050D8D59(class FName NotifyName);
	void OnNotifyBegin_1FFFB4BA4D6D93435F14B78A050D8D59(class FName NotifyName);
	void OnInterrupted_1FFFB4BA4D6D93435F14B78A050D8D59(class FName NotifyName);
	void OnBlendOut_1FFFB4BA4D6D93435F14B78A050D8D59(class FName NotifyName);
	void OnCompleted_1FFFB4BA4D6D93435F14B78A050D8D59(class FName NotifyName);
	void OnNotifyEnd_E660706E46DA39B985FF59B8FC674F2E(class FName NotifyName);
	void OnNotifyBegin_E660706E46DA39B985FF59B8FC674F2E(class FName NotifyName);
	void OnInterrupted_E660706E46DA39B985FF59B8FC674F2E(class FName NotifyName);
	void OnBlendOut_E660706E46DA39B985FF59B8FC674F2E(class FName NotifyName);
	void OnCompleted_E660706E46DA39B985FF59B8FC674F2E(class FName NotifyName);
	void PlayOnUsedMontage();
	void MulticastSoundFX();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Useable_Player_Death_Statue(int32 EntryPoint, int32 Temp_int_Variable, int32 Temp_int_Variable_1, class UAnimMontage* Temp_object_Variable, class UAnimMontage* Temp_object_Variable_1, class FName K2Node_CustomEvent_NotifyName_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName Temp_name_Variable_1, int32 CallFunc_RandomIntegerInRange_ReturnValue, class UAnimMontage* K2Node_Select_Default, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class USkeletalMesh* CallFunc_GetMeshForArmorType_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FSingleAnimationPlayData& K2Node_MakeStruct_SingleAnimationPlayData, const struct FSingleAnimationPlayData& K2Node_MakeStruct_SingleAnimationPlayData_1, const struct FSingleAnimationPlayData& K2Node_Select_Default_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UDeath_Statue_AnimBP_C* K2Node_DynamicCast_AsDeath_Statue_Anim_BP, bool K2Node_DynamicCast_bSuccess_1);
};

}


