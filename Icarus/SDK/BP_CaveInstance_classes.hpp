#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x280 - 0x220)
// BlueprintGeneratedClass BP_CaveInstance.BP_CaveInstance_C
class ABP_CaveInstance_C : public ACave
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_CaveComponent_C*                   BP_CaveComponent;                                  // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         Debug;                                             // 0x238(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2131[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UBP_CaveEntranceComponent_C*>   Entrances;                                         // 0x240(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UBoxComponent*>                 Volumes;                                           // 0x250(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FPrefabTransform>              VolumeData;                                        // 0x260(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<struct FPrefabTransform>              EntranceData;                                      // 0x270(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class ABP_CaveInstance_C* GetDefaultObj();

	float GetCurrentSpelunkingDepth();
	float GetSpelunkingDepthFromLocation(const struct FVector& Location, float CurrentMinDepth, float CallFunc_GetSpelunkingDepth_ReturnValue);
	void UserConstructionScript(const TArray<class UChildActorComponent*>& OriginalVoids, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, const struct FPrefabTransform& CallFunc_Array_Get_Item, const struct FPrefabTransform& CallFunc_Array_Get_Item_1, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class UBP_CaveEntranceComponent_C* CallFunc_AddComponent_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class UBoxComponent* CallFunc_AddComponent_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_CaveInstance(int32 EntryPoint, const struct FTransform& CallFunc_GetTransform_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ABP_FX_ShelterCapture_C* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UBoxComponent* CallFunc_Array_Get_Item, const struct FVector& CallFunc_GetScaledBoxExtent_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FTransform& CallFunc_MakeRelativeTransform_ReturnValue, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue);
};

}


