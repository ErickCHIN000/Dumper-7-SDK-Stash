#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x96 (0x3A8 - 0x312)
// BlueprintGeneratedClass Cathedral_Door_OneOfThree_Lever.Cathedral_Door_OneOfThree_Lever_C
class ACathedral_Door_OneOfThree_Lever_C : public AUsable_Actor_C
{
public:
	uint8                                        Pad_2465[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Lever;                                             // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Candle4;                                           // 0x328(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Candle3;                                           // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Candle2;                                           // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Candle1;                                           // 0x340(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  CathEntranceSet4_StairSet_08;                      // 0x348(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  CathEntranceSet4_StairSet_11;                      // 0x350(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Fire_eyes;                                         // 0x358(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  CathEntranceSet4_StairSet_09;                      // 0x360(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Pillar;                                            // 0x368(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        MoveDownTimeline_Alpha_5FA93A8E4316A0CBB80ABCAC7E5EB9D1; // 0x370(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                MoveDownTimeline__Direction_5FA93A8E4316A0CBB80ABCAC7E5EB9D1; // 0x374(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2492[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    MoveDownTimeline;                                  // 0x378(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACathedral_Door_Final_Lever_C*         FinalLever;                                        // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            ActivatedSound;                                    // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Trap;                                           // 0x390(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24A1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AWraithSpawner_Cathedral_ButtonTrap_C*> Spawners;                                          // 0x398(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ACathedral_Door_OneOfThree_Lever_C* GetDefaultObj();

	void DualSense_ActivationSound(uint8 CallFunc_MakeLiteralByte_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_ControllerAudio_C* CallFunc_FinishSpawningActor_ReturnValue);
	void SpawnActivationSound(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
	void OnActorUsed(class APlayerController* Controller, bool* Success, bool Temp_bool_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AWraithSpawner_Cathedral_ButtonTrap_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, TScriptInterface<class IGameModeUtilInterface_C> K2Node_DynamicCast_AsGame_Mode_Util_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_OnActorUsed_Success, int32 CallFunc_Array_Find_ReturnValue);
	void MoveDownTimeline__FinishedFunc();
	void MoveDownTimeline__UpdateFunc();
	void ReceiveBeginPlay();
	void MoveDown();
	void Spawn_Trap(class AWraithSpawner_Cathedral_ButtonTrap_C* Spawner);
	void MoveUp();
	void ExecuteUbergraph_Cathedral_Door_OneOfThree_Lever(int32 EntryPoint, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Lerp_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_2, bool CallFunc_IsMyNameInChangedSet_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_1, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_2, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, float CallFunc_Lerp_ReturnValue_3, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, class AWraithSpawner_Cathedral_ButtonTrap_C* K2Node_CustomEvent_Spawner, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1);
};

}


