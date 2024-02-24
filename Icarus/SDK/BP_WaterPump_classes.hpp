#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x34 (0x7A8 - 0x774)
// BlueprintGeneratedClass BP_WaterPump.BP_WaterPump_C
class ABP_WaterPump_C : public ABP_DeployableBase_C
{
public:
	uint8                                        Pad_3797[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x778(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     NS_WaterPump;                                      // 0x780(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                   FMODAudio;                                         // 0x788(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         Local;                                             // 0x790(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37AB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Range;                                             // 0x794(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PumpActive;                                        // 0x798(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_37AF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          FillSuitableContainersTimer;                       // 0x7A0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_WaterPump_C* GetDefaultObj();

	void WaterNetworkStateUpdated(bool Active, bool CallFunc_IsServer_ReturnValue);
	void GeneratorStateUpdate(bool Active, bool CallFunc_IsServer_ReturnValue, enum class EValid CallFunc_GetTrait_Paths, class UWaterComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_ActivateResourceComponent_ReturnValue);
	void EnergyNetworkStateUpdate(bool Active, bool CallFunc_IsServer_ReturnValue, enum class EValid CallFunc_GetTrait_Paths, class UGeneratorComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_ActivateGenerator_ReturnValue, bool CallFunc_EqualEqual_BoolBool_ReturnValue);
	void OnRep_PumpActive(const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue);
	void FillSuitableContainers(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class ABP_DeployableBase_C*>& CallFunc_GetAllActorsOfClass_OutActors, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class ABP_DeployableBase_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_ItemMatchesQuery_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_AddContainerActorCapacity_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_ContainerCurrentlyAcceptsType_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Deployable_Interact(class AActor* Interactor, enum class EValid CallFunc_GetTrait_Paths, class UEnergyComponent* CallFunc_GetTrait_ReturnValue, bool CallFunc_ActivateResourceComponent_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void ReceiveBeginPlay();
	void DeployableTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_WaterPump(int32 EntryPoint, float K2Node_Event_DeltaSeconds, enum class EValid CallFunc_GetTrait_Paths, class UGeneratorComponent* CallFunc_GetTrait_ReturnValue, bool CallFunc_ActivateGenerator_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class EValid CallFunc_GetTrait_Paths_1, class UGeneratorComponent* CallFunc_GetTrait_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, enum class EValid CallFunc_GetTrait_Paths_2, class UEnergyComponent* CallFunc_GetTrait_ReturnValue_2, enum class EValid CallFunc_GetTrait_Paths_3, class UWaterComponent* CallFunc_GetTrait_ReturnValue_3, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_ActivateResourceComponent_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_NotEqual_BoolBool_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_3);
};

}


