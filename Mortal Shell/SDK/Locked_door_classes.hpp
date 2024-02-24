#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x7E (0x390 - 0x312)
// BlueprintGeneratedClass Locked_door.Locked_door_C
class ALocked_door_C : public AUsable_Actor_C
{
public:
	uint8                                        Pad_2985[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       Stonescape_1_loop_Cue1;                            // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Stonescape_1_loop_Cue;                             // 0x328(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMeshComponent0;                              // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMeshComponent2;                              // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMeshComponent3;                              // 0x340(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMeshComponent1;                              // 0x348(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Right;                                             // 0x350(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Left;                                              // 0x358(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Box;                                               // 0x360(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene;                                             // 0x368(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_DoorOpen_EarthquakeVolume_5432A9DE48D2F8151BE68CA8E64FC9A1; // 0x370(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_DoorOpen_Volume_5432A9DE48D2F8151BE68CA8E64FC9A1; // 0x374(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_DoorOpen_Open_5432A9DE48D2F8151BE68CA8E64FC9A1; // 0x378(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_DoorOpen__Direction_5432A9DE48D2F8151BE68CA8E64FC9A1; // 0x37C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29BA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_DoorOpen;                                 // 0x380(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       EarthquakeSound;                                   // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ALocked_door_C* GetDefaultObj();

	void Door_Open(float CallFunc_Lerp_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1);
	void OnActorUsed(class APlayerController* Controller, bool* Success, bool CallFunc_OnActorUsed_Success);
	void Timeline_DoorOpen__FinishedFunc();
	void Timeline_DoorOpen__UpdateFunc();
	void ReceiveBeginPlay();
	void Use();
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void Door_Open_Immediately();
	void ExecuteUbergraph_Locked_door(int32 EntryPoint, float CallFunc_Lerp_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, TScriptInterface<class IGameModeUtilInterface_C> K2Node_DynamicCast_AsGame_Mode_Util_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsMyNameInChangedSet_ReturnValue, bool CallFunc_IsMyNameInChangedSet_ReturnValue_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsMyNameInChangedSet_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue);
};

}


