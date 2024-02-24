#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x120 - 0x110)
// BlueprintGeneratedClass BP_Flammable_FLODActor_Tree.BP_Flammable_FLODActor_Tree_C
class UBP_Flammable_FLODActor_Tree_C : public UFlammableActorFLOD
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x110(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ATreeBase*                             OwnerTree;                                         // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Flammable_FLODActor_Tree_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void OnUpdateInstanceVisuals(float FireSpread, float FireTemperature);
	void OnFlammableInstanceAttached(class UFlammableInstance* Instance);
	void OnFlammableInstanceDetached(class UFlammableInstance* Instance);
	void ExecuteUbergraph_BP_Flammable_FLODActor_Tree(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetGameplayTagContainer_OutContainer, bool CallFunc_GetGameplayTagContainer_ReturnValue, bool CallFunc_SetGameplayTagContainer_ReturnValue, bool CallFunc_RemoveGameplayTag_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FGameplayTagContainer& CallFunc_GetGameplayTagContainer_OutContainer_1, bool CallFunc_GetGameplayTagContainer_ReturnValue_1, bool CallFunc_SetGameplayTagContainer_ReturnValue_1, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_GetOwner_ReturnValue, float K2Node_Event_FireSpread, float K2Node_Event_FireTemperature, class ATreeBase* K2Node_DynamicCast_AsTree_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_2, const struct FBox& CallFunc_GetBoundingBox_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class UTreePrimitiveComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UFlammableInstance* K2Node_Event_Instance_1, bool CallFunc_Less_IntInt_ReturnValue, class UFlammableInstance* K2Node_Event_Instance);
};

}


