#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x75 (0xBDA - 0xB65)
// BlueprintGeneratedClass BP_NPC_RockDog_Character.BP_NPC_RockDog_Character_C
class ABP_NPC_RockDog_Character_C : public ABP_IcarusNPCGOAPCharacter_C
{
public:
	uint8                                        Pad_5B8F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB68(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                  PointLight_Enraged_0;                              // 0xB70(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     CritArea_Right_Leg;                                // 0xB78(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     CritArea_Left_Leg;                                 // 0xB80(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     CritArea_Jaw_2;                                    // 0xB88(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     CritArea_Jaw_1;                                    // 0xB90(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     CritArea_Back_2;                                   // 0xB98(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     CritArea_Back_1;                                   // 0xBA0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Alert;                                             // 0xBA8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_HuntingClueSpawner_C*              BP_HuntingClueSpawner;                             // 0xBB0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        EnrageEndTimeline_EmissiveAlpha_CED2A1C045DCA9A341C04F82AED8CC4B; // 0xBB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                EnrageEndTimeline__Direction_CED2A1C045DCA9A341C04F82AED8CC4B; // 0xBBC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5BCD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    EnrageEndTimeline;                                 // 0xBC0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EnrageTimeline_EmissiveAlpha_20034C3245CA7602695210908A058CF9; // 0xBC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                EnrageTimeline__Direction_20034C3245CA7602695210908A058CF9; // 0xBCC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5BDE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    EnrageTimeline;                                    // 0xBD0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGOAPProperty                     FastestActiveState;                                // 0xBD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsEnraged;                                         // 0xBD9(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_NPC_RockDog_Character_C* GetDefaultObj();

	void OnRep_IsEnraged();
	void ReplicateBlackboardVariables(class FName NewLocalVar_0, class AController* CallFunc_GetController_ReturnValue, class AIcarusNPCGOAPController* K2Node_DynamicCast_AsIcarus_NPCGOAPController, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetCurrentPropertyState_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue);
	TMap<class UPrimitiveComponent*, struct FCriticalHitAreasEnum> GetCriticalHitAreas(TMap<class UPrimitiveComponent*, struct FCriticalHitAreasEnum> CallFunc_GetCriticalHitAreas_ReturnValue, TMap<class UPrimitiveComponent*, struct FCriticalHitAreasEnum> K2Node_MakeMap_Map, TMap<class UPrimitiveComponent*, struct FCriticalHitAreasEnum> CallFunc_AppendNewCriticalHitAreas_CombinedAreas);
	struct FVector GetDamageSourceLocation(const struct FVector& CallFunc_GetSocketLocation_ReturnValue);
	bool GetMontageForAction(TSoftClassPtr<class UIcarusGOAPAction>& Action, TSoftObjectPtr<class UAnimMontage>* ActionMontage, class FName* MontageSection, class FName* MontageNotify, TSoftClassPtr<class UIcarusGOAPAction> AttackAction, TSoftObjectPtr<class UAnimMontage> CallFunc_GetMontageForAction_ActionMontage, class FName CallFunc_GetMontageForAction_MontageSection, class FName CallFunc_GetMontageForAction_MontageNotify, bool CallFunc_GetMontageForAction_ReturnValue, bool CallFunc_IsSwimming_ReturnValue, bool CallFunc_EqualEqual_SoftClassReference_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void GetAlertWidgetLocation(struct FVector* Location, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue);
	void FindFloorAngle(float* Angle, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue_1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue_2, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_ProjectVectorOnToPlane_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, float CallFunc_SignOfFloat_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue_1, float CallFunc_DegAcos_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1);
	void EnrageTimeline__FinishedFunc();
	void EnrageTimeline__UpdateFunc();
	void EnrageEndTimeline__FinishedFunc();
	void EnrageEndTimeline__UpdateFunc();
	void UpdateEnrageMaterialStrength(float Strength);
	void StartEnrageEffects();
	void StopEnrageEffects();
	void OnFootstepAnimNotify(enum class ECreatureFootstepType FootstepType, enum class ECreatureFootstepDirection FootstepDirection);
	void ExecuteUbergraph_BP_NPC_RockDog_Character(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, class FName Temp_wildcard_Variable, class FName Temp_wildcard_Variable_1, class FName Temp_wildcard_Variable_2, float K2Node_CustomEvent_Strength, float CallFunc_Multiply_FloatFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, float Temp_wildcard_Variable_3, float CallFunc_Multiply_FloatFloat_ReturnValue_1, enum class ECreatureFootstepType K2Node_Event_FootstepType, enum class ECreatureFootstepDirection K2Node_Event_FootstepDirection, class UMaterialInstanceDynamic* Temp_wildcard_Variable_4, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_FlammableArea_Small_C* CallFunc_FinishSpawningActor_ReturnValue);
};

}


