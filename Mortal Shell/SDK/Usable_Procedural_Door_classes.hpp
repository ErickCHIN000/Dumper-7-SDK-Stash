#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x82 (0x394 - 0x312)
// BlueprintGeneratedClass Usable_Procedural_Door.Usable_Procedural_Door_C
class AUsable_Procedural_Door_C : public AUsable_Actor_C
{
public:
	uint8                                        Pad_2ADE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                         Box;                                               // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                       Arrow;                                             // 0x328(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Door2;                                             // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Door;                                              // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_2_DoorAngle_CA53F1C844300A29FEB071AAA1EB233E; // 0x340(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_2__Direction_CA53F1C844300A29FEB071AAA1EB233E; // 0x344(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AF0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_2;                                        // 0x348(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_1_DoorAngle_473609DD4B33B904799A88B110ED0574; // 0x350(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_1__Direction_473609DD4B33B904799A88B110ED0574; // 0x354(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AF8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_1;                                        // 0x358(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_DoorAngle_11B3A27F43A4C52060A77A83E3A6D020; // 0x360(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_11B3A27F43A4C52060A77A83E3A6D020; // 0x364(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AFE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_0;                                        // 0x368(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OpenDoorLeft_DoorAngle_826370ED440F4D28BD5D39A2D328A8F7; // 0x370(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                OpenDoorLeft__Direction_826370ED440F4D28BD5D39A2D328A8F7; // 0x374(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B03[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    OpenDoorLeft;                                      // 0x378(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AProcedural_Exit_Target_C*             ExitReference;                                     // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ULevelStreamingDynamic*                LastHallway;                                       // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxRoomsToSpawn;                                   // 0x390(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AUsable_Procedural_Door_C* GetDefaultObj();

	void ShouldSpawnExit(bool* ShouldSpawnExit_, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AGamePlayGameState_C* K2Node_DynamicCast_AsGame_Play_Game_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void EndOutlineFocus(bool* Success);
	void BeginOutlineFocus(bool* Success);
	void OnWasUsed(bool* Success, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, const class FString& Temp_string_Variable_2, int32 Temp_int_Variable, const class FString& Temp_string_Variable_3, bool CallFunc_ShouldSpawnExit_ShouldSpawnExit_, int32 Temp_int_Variable_1, int32 CallFunc_RandomInteger_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AGamePlayGameState_C* K2Node_DynamicCast_AsGame_Play_Game_State, bool K2Node_DynamicCast_bSuccess, const class FString& K2Node_Select_Default, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const class FString& K2Node_Select_Default_1, bool CallFunc_LoadLevelInstance_bOutSuccess, class ULevelStreamingDynamic* CallFunc_LoadLevelInstance_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_OnWasUsed_Success);
	void OpenDoorLeft__FinishedFunc();
	void OpenDoorLeft__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();
	void ReceiveBeginPlay();
	void EventWaitForLevelLoad(class ULevelStreamingDynamic* LevelStream);
	void EventOpenDoors();
	void EventCloseDoorsAndUnloadPreviousLevel();
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void UnloadPreviousHallway();
	void ExecuteUbergraph_Usable_Procedural_Door(int32 EntryPoint, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, const struct FRotator& CallFunc_MakeRotator_ReturnValue_3, bool Temp_bool_Has_Been_Initd_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ULevelStreamingDynamic* K2Node_CustomEvent_LevelStream, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_2, class AGameStateBase* CallFunc_GetGameState_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_3, class AGamePlayGameState_C* K2Node_DynamicCast_AsGame_Play_Game_State, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_IsClosed_Variable, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, class AGamePlayGameState_C* K2Node_DynamicCast_AsGame_Play_Game_State_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Greater_IntInt_ReturnValue);
};

}


