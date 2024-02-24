#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x228 - 0x220)
// BlueprintGeneratedClass Action_PolymorphCritter_Spawn.Action_PolymorphCritter_Spawn_C
class UAction_PolymorphCritter_Spawn_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAction_PolymorphCritter_Spawn_C* GetDefaultObj();

	void PlayFeedback();
	void ExecuteUbergraph_Action_PolymorphCritter_Spawn(int32 EntryPoint, class AActor* CallFunc_K2_GetActor_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
};

}


