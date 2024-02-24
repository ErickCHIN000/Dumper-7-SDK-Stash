#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x24 (0x244 - 0x220)
// BlueprintGeneratedClass shadow_knight_teleport_dash.shadow_knight_teleport_dash_C
class AShadow_knight_teleport_dash_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              Shadow_knight_dash;                                // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInterpToMovementComponent*            InterpToMovement;                                  // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               EndPos;                                            // 0x238(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AShadow_knight_teleport_dash_C* GetDefaultObj();

	void UserConstructionScript(const struct FInterpControlPoint& K2Node_MakeStruct_InterpControlPoint, const struct FInterpControlPoint& K2Node_MakeStruct_InterpControlPoint_1, TArray<struct FInterpControlPoint>& K2Node_MakeArray_Array);
	void ReceiveBeginPlay();
	void BndEvt__shadow_knight_dash_K2Node_ComponentBoundEvent_0_ActorComponentDeactivateSignature__DelegateSignature(class UActorComponent* Component);
	void BndEvt__shadow_knight_dash_K2Node_ComponentBoundEvent_1_OnSystemFinished__DelegateSignature(class UParticleSystemComponent* PSystem);
	void ExecuteUbergraph_shadow_knight_teleport_dash(int32 EntryPoint, class UActorComponent* K2Node_ComponentBoundEvent_Component, class UParticleSystemComponent* K2Node_ComponentBoundEvent_PSystem);
};

}


