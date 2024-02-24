#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2E (0x338 - 0x30A)
// BlueprintGeneratedClass BP_ActionableBehaviour_Flying_Hammer.BP_ActionableBehaviour_Flying_Hammer_C
class UBP_ActionableBehaviour_Flying_Hammer_C : public UBP_ActionableBehaviour_Base_C
{
public:
	uint8                                        Pad_5FC7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x310(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_IcarusPlayerCharacterSurvival_C*   OwningPlayer;                                      // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ShootTime;                                         // 0x320(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Swinging;                                          // 0x324(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5FD7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SwingPower;                                        // 0x328(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Power;                                             // 0x32C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Flying;                                            // 0x330(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         FlyingForward;                                     // 0x331(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Hovering;                                          // 0x332(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5FE3[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        FallDamageModifierUID;                             // 0x334(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ActionableBehaviour_Flying_Hammer_C* GetDefaultObj();

	void UpdateFlyingForward(const struct FRotator& CallFunc_GetControlRotation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void UpdateFlying(bool CallFunc_IsFalling_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void UpdateSwinging(bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_FClamp_ReturnValue);
	void Setup(class AActor* OwningActor, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FModifier& K2Node_MakeStruct_Modifier, class AController* CallFunc_GetController_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_AddModifierState_ReturnValue, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess);
	void Server_UpdateSwinging(bool Swinging);
	void Server_UpdateHover();
	void PerformAction(class AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void Server_StartLightning();
	void Server_StopLightning();
	void ExecuteUbergraph_BP_ActionableBehaviour_Flying_Hammer(int32 EntryPoint, class ADisasterController* CallFunc_GetDisasterController_ReturnValue, class ABP_DisasterController_C* K2Node_DynamicCast_AsBP_Disaster_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool K2Node_CustomEvent_Swinging, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, class AActor* K2Node_Event_InvokingActor, enum class EActionableEventType K2Node_Event_OnActionType, enum class EActionableTrigger K2Node_Event_ActionTrigger, float K2Node_Event_DeltaSeconds, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_3, class AActor* CallFunc_GetOwner_ReturnValue_1, enum class EEndPlayReason K2Node_Event_EndPlayReason, class AIcarusActor* K2Node_DynamicCast_AsIcarus_Actor, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsServer_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_RemoveModifierState_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FBiomesRowHandle& CallFunc_SampleBiomeAtLocation_ReturnValue, const struct FBiomesRowHandle& CallFunc_SampleBiomeAtLocation_ReturnValue_1, const struct FBiomesEnum& CallFunc_RowHandleToStruct_ReturnValue, const struct FBiomesEnum& CallFunc_RowHandleToStruct_ReturnValue_1, class ADisasterController* CallFunc_GetDisasterController_ReturnValue_1, class ABP_DisasterController_C* K2Node_DynamicCast_AsBP_Disaster_Controller_1, bool K2Node_DynamicCast_bSuccess_2);
};

}


