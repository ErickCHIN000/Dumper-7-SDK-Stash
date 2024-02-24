#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x171 - 0x168)
// BlueprintGeneratedClass BP_ResourceAmbienceComponent.BP_ResourceAmbienceComponent_C
class UBP_ResourceAmbienceComponent_C : public UResourceAmbientGlowComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x168(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         IsDebugging;                                       // 0x170(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ResourceAmbienceComponent_C* GetDefaultObj();

	class UInstancedResourceNodeComponent* GetIIMComponentFromActor(class AActor* Actor, class ABP_ResourceNode_IIM_C* K2Node_DynamicCast_AsBP_Resource_Node_IIM, bool K2Node_DynamicCast_bSuccess);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_ResourceAmbienceComponent(int32 EntryPoint, bool CallFunc_IsLocal_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, float K2Node_Event_DeltaSeconds, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_HasPlayerReachedThreshold_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_1);
};

}


