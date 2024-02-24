#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xB0 - 0xB0)
// BlueprintGeneratedClass BP_LadderComponent.BP_LadderComponent_C
class UBP_LadderComponent_C : public ULadderComponent
{
public:

	static class UClass* StaticClass();
	static class UBP_LadderComponent_C* GetDefaultObj();

	class ULadderComponent* GetOutermostLadder(class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetAttachParentActor_ReturnValue, class ULadderComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ULadderComponent* CallFunc_GetOutermostLadder_ReturnValue);
	struct FTransform GetLadderEnd(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, TArray<class UPrimitiveComponent*>& CallFunc_GetComponentsByTag_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class UPrimitiveComponent* CallFunc_Array_Get_Item, class ADeployable* K2Node_DynamicCast_AsDeployable, bool K2Node_DynamicCast_bSuccess, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, TArray<class ADeployable*>& CallFunc_GetAttachedDeployableChildren_ReturnValue, class AActor* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, class ULadderComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_GetLadderEnd_ReturnValue);
	struct FTransform GetLadderStart(class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, TArray<class UPrimitiveComponent*>& CallFunc_GetComponentsByTag_ReturnValue, class ADeployable* K2Node_DynamicCast_AsDeployable, bool K2Node_DynamicCast_bSuccess, class UPrimitiveComponent* CallFunc_Array_Get_Item, class ADeployable* CallFunc_GetAttachedDeployableParent_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ULadderComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FTransform& CallFunc_GetLadderStart_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


