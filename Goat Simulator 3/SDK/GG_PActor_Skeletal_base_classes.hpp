#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x879 - 0x870)
// BlueprintGeneratedClass GG_PActor_Skeletal_base.GG_PActor_Skeletal_base_C
class AGG_PActor_Skeletal_base_C : public AGGPhysicsActor_Skeletal
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x870(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         DrawRootLocation;                                  // 0x878(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AGG_PActor_Skeletal_base_C* GetDefaultObj();

	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void MulticastHit();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_GG_PActor_Skeletal_base(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, class UPrimitiveComponent* K2Node_Event_MyComp, class AActor* K2Node_Event_Other, class UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormal, const struct FVector& K2Node_Event_NormalImpulse, const struct FHitResult& K2Node_Event_Hit, bool CallFunc_IsSimulatingPhysics_ReturnValue);
};

}


