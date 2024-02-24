#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x228 - 0x220)
// BlueprintGeneratedClass A_MushroomCompanion_FungAss.A_MushroomCompanion_FungAss_C
class UA_MushroomCompanion_FungAss_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UA_MushroomCompanion_FungAss_C* GetDefaultObj();

	void OnDialogSequenceFinished_2();
	void SpawnAcidCloud();
	void ExecuteUbergraph_A_MushroomCompanion_FungAss(int32 EntryPoint, class AActor* CallFunc_K2_GetActor_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue1, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation, int32 CallFunc_FinishTriggerDialog_SequenceID, bool CallFunc_FinishTriggerDialog_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue2, class AProjectile_Ranger_Passive_11_C* CallFunc_FinishSpawningActor_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
};

}


