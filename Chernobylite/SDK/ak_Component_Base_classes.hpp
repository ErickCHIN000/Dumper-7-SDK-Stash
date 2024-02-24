#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x3F0 - 0x3E0)
// BlueprintGeneratedClass ak_Component_Base.ak_Component_Base_C
class UAk_Component_Base_C : public UAkComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3E0(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class AActor*                                OwnerActor;                                        // 0x3E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAk_Component_Base_C* GetDefaultObj();

	void SetFootstepSwitch(TArray<class AActor*>& Temp_object_Variable, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class UCGPhysicalMaterial* K2Node_DynamicCast_AsCGPhysical_Material, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetPhysMaterialtoAkSwitchMapping_Value);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_ak_Component_Base(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue);
};

}


