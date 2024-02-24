#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1E (0x328 - 0x30A)
// BlueprintGeneratedClass BP_ActionableBehaviour_Generic_Fillable.BP_ActionableBehaviour_Generic_Fillable_C
class UBP_ActionableBehaviour_Generic_Fillable_C : public UBP_ActionableBehaviour_Base_C
{
public:
	uint8                                        Pad_5E35[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x310(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                     HitCollider;                                       // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_IcarusPlayerCharacterSurvival_C*   OwningPlayer;                                      // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ActionableBehaviour_Generic_Fillable_C* GetDefaultObj();

	void Setup(class AActor* OwningActor, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void PerformAction(class AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_ActionableBehaviour_Generic_Fillable(int32 EntryPoint, const struct FStatsEnum& Temp_struct_Variable, class UPlayerCharacterState* CallFunc_GetPlayerCharacterState_ReturnValue, const struct FStatsEnum& Temp_struct_Variable_1, const struct FStatsEnum& Temp_struct_Variable_2, class AActor* K2Node_Event_InvokingActor, enum class EActionableEventType K2Node_Event_OnActionType, enum class EActionableTrigger K2Node_Event_ActionTrigger, bool K2Node_SwitchEnum_CmpSuccess, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_2, class UFillableComponent* CallFunc_GetComponentByClass_ReturnValue, class UConsumableComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FConsumableData& CallFunc_GetConsumableData_OutData, bool CallFunc_GetConsumableData_ReturnValue, enum class EIcarusResourceType CallFunc_GetFillableType_ReturnValue, int32 CallFunc_RemoveUnits_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_2, int32 CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, int32 CallFunc_FCeil_ReturnValue, int32 CallFunc_FCeil_ReturnValue_1);
};

}


