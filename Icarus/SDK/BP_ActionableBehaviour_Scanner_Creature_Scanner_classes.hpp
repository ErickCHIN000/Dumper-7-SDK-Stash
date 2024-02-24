#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x3B8 - 0x3AC)
// BlueprintGeneratedClass BP_ActionableBehaviour_Scanner_Creature_Scanner.BP_ActionableBehaviour_Scanner_Creature_Scanner_C
class UBP_ActionableBehaviour_Scanner_Creature_Scanner_C : public UBP_ActionableBehaviour_Scanner_DeepOre_C
{
public:
	uint8                                        Pad_5E05[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_ActionableBehaviour_Scanner_Creature_Scanner_C* GetDefaultObj();

	void PerformAction(class AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_ActionableBehaviour_Scanner_Creature_Scanner(int32 EntryPoint, class AActor* K2Node_Event_InvokingActor, enum class EActionableEventType K2Node_Event_OnActionType, enum class EActionableTrigger K2Node_Event_ActionTrigger, bool CallFunc_IsServer_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, class AActor* CallFunc_GetOwner_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class ABP_SkeletalItem_Meta_CreatureScanner_C* K2Node_DynamicCast_AsBP_Skeletal_Item_Meta_Creature_Scanner, bool K2Node_DynamicCast_bSuccess, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, class UNetworkProxyComponent* CallFunc_GetNetworkProxyComponent_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_3, class UBP_NetworkProxyComponent_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component, bool K2Node_DynamicCast_bSuccess_1);
};

}


