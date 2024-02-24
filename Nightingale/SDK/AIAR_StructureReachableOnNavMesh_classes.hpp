#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x90 - 0x90)
// BlueprintGeneratedClass AIAR_StructureReachableOnNavMesh.AIAR_StructureReachableOnNavMesh_C
class UAIAR_StructureReachableOnNavMesh_C : public UAIActionRequirement
{
public:

	static class UClass* StaticClass();
	static class UAIAR_StructureReachableOnNavMesh_C* GetDefaultObj();

	bool CheckTargetRequirements(class AActor* Target, class APawn* CallFunc_GetOwnerPawn_ReturnValue, TScriptInterface<class IBPI_StructureAIInterfaces_C> K2Node_DynamicCast_AsBPI_Structure_AIInterfaces, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetReachableNavTransform_Success, const struct FTransform& CallFunc_GetReachableNavTransform_ReachableNavTransform, class UObject* CallFunc_GetReachableNavTransform_Structure);
};

}


