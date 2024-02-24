#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xF8 - 0xE8)
// BlueprintGeneratedClass BP_Interactable_Sink.BP_Interactable_Sink_C
class UBP_Interactable_Sink_C : public UInteractableBehaviour
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AIcarusPlayerCharacter*                Current_Player;                                    // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Interactable_Sink_C* GetDefaultObj();

	void Wash(class AIcarusPlayerCharacter* Player, const struct FModifier& K2Node_MakeStruct_Modifier, int32 CallFunc_AddModifierState_ReturnValue);
	bool CanInteract(class AActor* Instigator, const struct FHitResult& HitResult, class AActor* CallFunc_GetOwner_ReturnValue, enum class EValid CallFunc_GetTrait_Paths, class UWaterComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void Interact(class AActor* Instigator, struct FHitResult& HitResult);
	void ExecuteUbergraph_BP_Interactable_Sink(int32 EntryPoint, class AActor* K2Node_Event_Instigator, const struct FHitResult& K2Node_Event_HitResult, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class UNetworkProxyComponent* CallFunc_GetNetworkProxyComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UBP_NetworkProxyComponentSurvival_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component_Survival, bool K2Node_DynamicCast_bSuccess_1);
};

}


