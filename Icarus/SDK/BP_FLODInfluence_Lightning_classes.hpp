#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xE0 - 0xC8)
// BlueprintGeneratedClass BP_FLODInfluence_Lightning.BP_FLODInfluence_Lightning_C
class UBP_FLODInfluence_Lightning_C : public UFLODInfluenceComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FFLODInstanceID>               ActiveInfluenceInstances;                          // 0xD0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBP_FLODInfluence_Lightning_C* GetDefaultObj();

	void RemoveLightningInfluencedInstance(const struct FFLODInstanceID& Instance, bool CallFunc_Array_RemoveItem_ReturnValue);
	void AddLightningInfluencedInstance(const struct FFLODInstanceID& Instance, int32 CallFunc_Array_AddUnique_ReturnValue);
	void GetLightningStrikeTarget(TArray<class AActor*>& TargetActors, float Radius, struct FFLODInstanceID* FoundInstance, bool* Found, const TArray<struct FFLODInstanceID>& FoundInstances, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, class AActor* CallFunc_Array_Get_Item, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FGameplayTagQuery& CallFunc_MakeGameplayTagQuery_ReturnValue, TArray<struct FFLODInstanceID>& CallFunc_GetFLODInstancesOverlappingSphere_ReturnValue, const struct FFLODInstanceID& CallFunc_Array_Get_Item_1, const struct FFLODInstanceID& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_RandomInteger_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_1);
	void UpdateActiveInfluences();
	void ExecuteUbergraph_BP_FLODInfluence_Lightning(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FFLODInstanceID& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue);
};

}


