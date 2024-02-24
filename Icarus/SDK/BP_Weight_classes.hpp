#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x59 (0x149 - 0xF0)
// BlueprintGeneratedClass BP_Weight.BP_Weight_C
class UBP_Weight_C : public UWeightComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xF0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TMap<class UShapeComponent*, struct FActorArrayStruct> OnTopOf;                                           // 0xF8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         SpreadWeightToBuildingNeighbors;                   // 0x148(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBP_Weight_C* GetDefaultObj();

	void RemoveWeightFromBuilding(class AActor* Building, class UShapeComponent* Shape, class ABP_Building_Base_C* K2Node_DynamicCast_AsBP_Building_Base, bool K2Node_DynamicCast_bSuccess);
	void GetWeight(class UShapeComponent* Shape, float* Weight, int32 DivisiorCount, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FWeightData& CallFunc_GetWeightData_OutData, bool CallFunc_GetWeightData_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FActorArrayStruct& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_2, TArray<struct FActorArrayStruct>& CallFunc_Map_Values_Values, float CallFunc_Divide_FloatFloat_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, const struct FWeightData& CallFunc_GetWeightData_OutData_1, bool CallFunc_GetWeightData_ReturnValue_1, int32 Temp_int_Array_Index_Variable, float CallFunc_Divide_FloatFloat_ReturnValue_2, const struct FActorArrayStruct& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void SendWeightToBuilding(class AActor* Building, class UShapeComponent* Shape, class ABP_Building_Base_C* K2Node_DynamicCast_AsBP_Building_Base, bool K2Node_DynamicCast_bSuccess);
	void BoundColliderEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, const TArray<class AActor*>& TempArray, bool CallFunc_IsOverlappingActor_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, class UShapeComponent* K2Node_DynamicCast_AsShape_Component, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetDisplayName_ReturnValue_1, const class FString& CallFunc_GetDisplayName_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const struct FActorArrayStruct& K2Node_MakeStruct_ActorArrayStruct, bool CallFunc_Map_Remove_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FActorArrayStruct& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue);
	void BoundColliderBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult, const TArray<class AActor*>& TempArray, bool Found, class UClass* CallFunc_GetObjectClass_ReturnValue, class UShapeComponent* K2Node_DynamicCast_AsShape_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue_1, int32 Temp_int_Array_Index_Variable, bool CallFunc_BooleanOR_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FActorArrayStruct& K2Node_MakeStruct_ActorArrayStruct, int32 CallFunc_Array_Add_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FActorArrayStruct& K2Node_MakeStruct_ActorArrayStruct_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FActorArrayStruct& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Init();
	void ExecuteUbergraph_BP_Weight(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Array_Index_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FHitResult& CallFunc_MakeHitResult_ReturnValue, bool CallFunc_IsServer_ReturnValue, class UShapeComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, class UShapeComponent* CallFunc_Array_Get_Item_1, TArray<class UPrimitiveComponent*>& CallFunc_GetOverlappingComponents_OutOverlappingComponents, int32 CallFunc_Add_IntInt_ReturnValue_2, class UPrimitiveComponent* CallFunc_Array_Get_Item_2, class AActor* CallFunc_GetOwner_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2);
};

}


