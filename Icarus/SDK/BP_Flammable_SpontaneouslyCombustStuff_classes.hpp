#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x144 - 0x12C)
// BlueprintGeneratedClass BP_Flammable_SpontaneouslyCombustStuff.BP_Flammable_SpontaneouslyCombustStuff_C
class UBP_Flammable_SpontaneouslyCombustStuff_C : public UBP_Flammable_Actor_C
{
public:
	uint8                                        Pad_74A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x130(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         ActiveCombustCharged;                              // 0x138(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_753[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InitialCombustStuffDelay;                          // 0x13C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ActiveCombustStuffDelay;                           // 0x140(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Flammable_SpontaneouslyCombustStuff_C* GetDefaultObj();

	void SpontaneouslyCombustStuff(bool* LitSomething, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsCurrentState_ReturnValue, class ADisasterController* CallFunc_GetDisasterController_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FBoxSphereBounds& K2Node_MakeStruct_BoxSphereBounds, TArray<class UFlammableInstance*>& CallFunc_GetFlammableInstancesIntersectingBounds_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UFlammableInstance* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const struct FFlammableTargetIgnite& CallFunc_MakeFlammableTargetIgniteFromInstance_ReturnValue, bool CallFunc_CanPropagateToTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, enum class EFlammableState CallFunc_GetFlammableState_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UFlammableInstance* CallFunc_TryIgniteFlammableTarget_OutInstance, bool CallFunc_TryIgniteFlammableTarget_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void OnFlammableInstanceState_Combusting_Tick(class UFlammableInstance* Instance, class UFlammableState* State, float DeltaSeconds);
	void OnFlammableInstanceState_Combusting_Enter(class UFlammableInstance* Instance, class UFlammableState* State);
	void ExecuteUbergraph_BP_Flammable_SpontaneouslyCombustStuff(int32 EntryPoint, class UFlammableInstance* K2Node_Event_Instance_1, class UFlammableState* K2Node_Event_State_1, float K2Node_Event_DeltaSeconds, bool CallFunc_SpontaneouslyCombustStuff_LitSomething, bool CallFunc_Not_PreBool_ReturnValue, class UFlammableInstance* K2Node_Event_Instance, class UFlammableState* K2Node_Event_State, bool CallFunc_SpontaneouslyCombustStuff_LitSomething_1);
};

}


