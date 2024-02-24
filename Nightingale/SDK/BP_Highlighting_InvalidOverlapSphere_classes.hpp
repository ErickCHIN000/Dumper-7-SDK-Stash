#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x2B8 - 0x2A0)
// BlueprintGeneratedClass BP_Highlighting_InvalidOverlapSphere.BP_Highlighting_InvalidOverlapSphere_C
class ABP_Highlighting_InvalidOverlapSphere_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     NS_Structures_IntersectingPlacement;               // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Highlighting_InvalidOverlapSphere_C* GetDefaultObj();

	void AdjustScaletoExtents(const struct FVector& ObjectExtents);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Highlighting_InvalidOverlapSphere(int32 EntryPoint, const struct FVector& K2Node_CustomEvent_ObjectExtents, double CallFunc_VSize_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, float CallFunc_SetFloatParameter_Param_ImplicitCast);
};

}


