#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0x2D0 - 0x220)
// BlueprintGeneratedClass Ability.Ability_C
class AAbility_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FTransform                            EffectTransform;                                   // 0x230(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class UAnimMontage*>                  AbilityMontages;                                   // 0x260(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsUsingCrosshair;                                  // 0x270(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_27B3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            CrosshairTexture;                                  // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityComponent_C*                   AbilityComponent;                                  // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ACharacter*                            Character;                                         // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanBeCancelled;                                    // 0x290(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         RotateOnPressed;                                   // 0x291(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_27C4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ManaCost;                                          // 0x294(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Damage;                                            // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IncludeOwnerDamage;                                // 0x29C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_27C9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OwnerDamageScalar;                                 // 0x2A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ImpulsePower;                                      // 0x2A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  LeftHandSocket;                                    // 0x2A8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  RightHandSocket;                                   // 0x2B0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  BeamSocket;                                        // 0x2B8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        IndicatorRadius;                                   // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27D7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    IndicatorMaterial;                                 // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AAbility_C* GetDefaultObj();

	void FindGroundLocation(const struct FVector& StartLocation, float GroundOffset, struct FVector* GroundLocation, struct FVector* Normal, bool* Result, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, TArray<class AActor*>& Temp_object_Variable, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, const struct FHitResult& CallFunc_LineTraceSingleForObjects_OutHit, bool CallFunc_LineTraceSingleForObjects_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_Add_VectorVector_ReturnValue);
	void GetCastingSpeed(float* Value, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class II_AbilityComponent_C> K2Node_DynamicCast_AsI_Ability_Component, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetCastingSpeed_Value, bool CallFunc_EqualEqual_FloatFloat_ReturnValue);
	void IsInHeightRange(const struct FVector& Location, float MaxHeightDeviation, bool* Result, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Abs_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue);
	void ApplyImpulseToCharacter(class AActor* Actor, const struct FVector& HitNormal, float Impulse, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_IsAnySimulatingPhysics_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1);
	void GetAbilityMontage(int32 Index, class UAnimMontage** Montage, class UAnimMontage* CallFunc_Array_Get_Item);
	float GetDamage(class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class II_AbilityComponent_C> K2Node_DynamicCast_AsI_Ability_Component, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetMagicDamage_Value, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
	void GetEffectLocation(struct FVector* Location, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale);
	void PlayAbilityMontage(class UAnimMontage* Montage, class FName StartSectionName, bool UseCastingSpeed, float PlayRate, float* Duration, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetCastingSpeed_Value, float K2Node_Select_Default, float CallFunc_PlayAbilityMontage_Duration);
	void Effect();
	void ReceiveBeginPlay();
	void ConsumeManaAmount(float Amount);
	void Pressed();
	void ConsumeMana();
	void Released();
	void ShowIndicator(const struct FVector& Location);
	void UpdateIndicator(const struct FVector& NewLocation);
	void HideIndicator();
	void Ended(enum class E_AbilityEndResult Result);
	void ExecuteUbergraph_Ability(int32 EntryPoint, enum class E_AbilityEndResult K2Node_CustomEvent_Result, float K2Node_CustomEvent_Amount, const struct FVector& K2Node_CustomEvent_Location, const struct FVector& K2Node_CustomEvent_NewLocation);
};

}


