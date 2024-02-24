#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x3F9 - 0x3D1)
// BlueprintGeneratedClass Buildable_Bed.Buildable_Bed_C
class ABuildable_Bed_C : public ABuildable_MASTER_C
{
public:
	uint8                                        Pad_272F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                   Billboard;                                         // 0x3E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       RespawnLocation;                                   // 0x3E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USleepingUI_C*                         SleepUI;                                           // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         SpawnPointSet;                                     // 0x3F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABuildable_Bed_C* GetDefaultObj();

	void SetSpawnPoint(class ABP_MPPlayerController_C* CallFunc_CastToController_Controller, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue);
	void ReceiveBeginPlay();
	void OnServerExecuteInteract(int32 OptionIndex, class AActor* ByActor);
	void OnEndInteract();
	void OnBeginInteract(class AActor* InteractingActor);
	void BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature(bool bIsBeyondLastLayer, int32 LayerIndex, bool bIsSeen);
	void ExecuteUbergraph_Buildable_Bed(int32 EntryPoint, class USleepingUI_C* CallFunc_Create_ReturnValue, class AUltra_Dynamic_Sky_C* CallFunc_GetUDS_UDS, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue, int32 K2Node_Event_OptionIndex, class AActor* K2Node_Event_ByActor, bool K2Node_SwitchInteger_CmpSuccess, class AActor* K2Node_Event_InteractingActor, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_GetBoolCVar_ReturnValue, class AHUD_Game_C* CallFunc_GetHUD_HUD, class AHUD_Game_C* CallFunc_GetHUD_HUD_1, bool K2Node_ComponentBoundEvent_bIsBeyondLastLayer, int32 K2Node_ComponentBoundEvent_LayerIndex, bool K2Node_ComponentBoundEvent_bIsSeen);
};

}


