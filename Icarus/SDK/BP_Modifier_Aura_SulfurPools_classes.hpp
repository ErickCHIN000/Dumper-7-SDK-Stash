#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x399 - 0x390)
// BlueprintGeneratedClass BP_Modifier_Aura_SulfurPools.BP_Modifier_Aura_SulfurPools_C
class UBP_Modifier_Aura_SulfurPools_C : public UModifierStateComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x390(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         DebugRender;                                       // 0x398(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBP_Modifier_Aura_SulfurPools_C* GetDefaultObj();

	bool ModifierRemoved(class UAuraManagerComponent* CallFunc_GetAuraManager_ReturnValue, bool CallFunc_ModifierRemoved_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	bool ModifierApplied(class AActor* CallFunc_GetOwner_ReturnValue, class ABP_SulfurPoolsActor_C* K2Node_DynamicCast_AsBP_Sulfur_Pools_Actor, bool K2Node_DynamicCast_bSuccess, class UAuraManagerComponent* CallFunc_GetAuraManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_FFloor_ReturnValue, bool CallFunc_ModifierApplied_ReturnValue);
	void ModifierTick(float DeltaTime);
	void ExecuteUbergraph_BP_Modifier_Aura_SulfurPools(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_SulfurPoolsActor_C* K2Node_DynamicCast_AsBP_Sulfur_Pools_Actor, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_IsWithEditor_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UAuraManagerComponent* CallFunc_GetAuraManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, float K2Node_Event_DeltaTime, bool CallFunc_IsServer_ReturnValue);
};

}


