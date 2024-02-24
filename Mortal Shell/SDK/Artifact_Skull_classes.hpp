#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x4C8 - 0x4B0)
// BlueprintGeneratedClass Artifact_Skull.Artifact_Skull_C
class AArtifact_Skull_C : public AWorld_Actor_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              ParticleSystem;                                    // 0x4B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                      ArtifactCamera;                                    // 0x4C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AArtifact_Skull_C* GetDefaultObj();

	void OnActorUsed(class APlayerController* Controller, bool* Success, class APlayerController* ControllerWhoUsedActor, int32 Temp_int_Array_Index_Variable, bool CallFunc_OnActorUsed_Success, bool CallFunc_IsServer_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AGameplayPC_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class AGameplayPC_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class AGamePlayPlayerState_C* K2Node_DynamicCast_AsGame_Play_Player_State, bool K2Node_DynamicCast_bSuccess_1, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class AZero_Base_C* K2Node_DynamicCast_As0_Base_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void OnWasUsed(bool* Success, bool CallFunc_OnWasUsed_Success);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Artifact_Skull(int32 EntryPoint);
};

}


