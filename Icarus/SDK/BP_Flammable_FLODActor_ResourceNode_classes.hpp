#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x118 - 0x110)
// BlueprintGeneratedClass BP_Flammable_FLODActor_ResourceNode.BP_Flammable_FLODActor_ResourceNode_C
class UBP_Flammable_FLODActor_ResourceNode_C : public UFlammableActorFLOD
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x110(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_Flammable_FLODActor_ResourceNode_C* GetDefaultObj();

	void OnUpdateInstanceVisuals(float FireSpread, float FireTemperature);
	void ExecuteUbergraph_BP_Flammable_FLODActor_ResourceNode(int32 EntryPoint, float K2Node_Event_FireSpread, float K2Node_Event_FireTemperature, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_ResourceNodeBase_C* K2Node_DynamicCast_AsBP_Resource_Node_Base, bool K2Node_DynamicCast_bSuccess, const struct FBox& CallFunc_GetBoundingBox_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue);
};

}


