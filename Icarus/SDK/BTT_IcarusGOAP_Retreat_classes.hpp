#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x44 (0xEC - 0xA8)
// BlueprintGeneratedClass BTT_IcarusGOAP_Retreat.BTT_IcarusGOAP_Retreat_C
class UBTT_IcarusGOAP_Retreat_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         IsRetreated;                                       // 0xB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_2E79[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusNPCCharacter*                   NPCRef;                                            // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         IsAborting;                                        // 0xC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E81[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          RetreatedGameplayTag;                              // 0xC4(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGOAPPropertiesRowHandle              RetreatedProperty;                                 // 0xCC(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                  RetreatTargetActorKey;                             // 0xE4(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTT_IcarusGOAP_Retreat_C* GetDefaultObj();

	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTT_IcarusGOAP_Retreat(int32 EntryPoint, enum class EMovementMode Temp_byte_Variable, bool CallFunc_RemoveStats_BP_ReturnValue, class AAIController* K2Node_Event_OwnerController_1, class APawn* K2Node_Event_ControlledPawn_1, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class AIcarusNPCCharacter* K2Node_DynamicCast_AsIcarus_NPCCharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, TMap<struct FStatsEnum, int32> K2Node_MakeMap_Map, bool CallFunc_RemoveGameplayTag_ReturnValue, bool CallFunc_AddStats_BP_ReturnValue, enum class EMovementMode Temp_byte_Variable_1, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool Temp_bool_Variable, class UObject* CallFunc_GetValueAsObject_ReturnValue, TScriptInterface<class IBP_RetreatTargetInterface_C> K2Node_DynamicCast_AsBP_Retreat_Target_Interface, bool K2Node_DynamicCast_bSuccess_1, enum class EMovementMode K2Node_Select_Default, const struct FVector& CallFunc_GetRetreatExitLocation_WorldLocation, const struct FRotator& CallFunc_GetRetreatExitLocation_WorldRotation, bool CallFunc_IsValid_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue);
};

}


