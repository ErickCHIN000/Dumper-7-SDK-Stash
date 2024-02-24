#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x98 - 0x90)
// BlueprintGeneratedClass AIAR_ItemReasonablyReachableOnNavMesh.AIAR_ItemReasonablyReachableOnNavMesh_C
class UAIAR_ItemReasonablyReachableOnNavMesh_C : public UAIActionRequirement
{
public:
	double                                       SearchSize;                                        // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAIAR_ItemReasonablyReachableOnNavMesh_C* GetDefaultObj();

	bool CheckTargetRequirements(class AActor* Target, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class APawn* CallFunc_GetOwnerPawn_ReturnValue, const struct FVector& CallFunc_Add_VectorFloat_ReturnValue, const struct FVector& CallFunc_Subtract_VectorFloat_ReturnValue, const struct FBox& CallFunc_MakeBox_ReturnValue, const struct FVector& CallFunc_FindClosestPointToBoxCenterThatIsReachableFromPawn_PolyLocation, bool CallFunc_FindClosestPointToBoxCenterThatIsReachableFromPawn_ReturnValue);
};

}


