#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x8F0 - 0x8A8)
// BlueprintGeneratedClass ControlledMove_Global_Sliding.ControlledMove_Global_Sliding_C
class UControlledMove_Global_Sliding_C : public UOakControlledMove
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8A8(0x8)(Transient, DuplicateTransient)
	class APlayerController*                     PlayerController;                                  // 0x8B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               StartLocation;                                     // 0x8B8(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SlideTime;                                         // 0x8C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SlideOffLedgeMaxDuration;                          // 0x8C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21B4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                ArtifactSlideDamageType;                           // 0x8D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOakCharacter_Player*                  Char_Player;                                       // 0x8D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SlideDistance;                                     // 0x8E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21BA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           DamageScaleCurve;                                  // 0x8E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UControlledMove_Global_Sliding_C* GetDefaultObj();

	void GetSlideDamageType(class UClass** SlideDamageType, class UClass* Temp_class_Variable, class AActor* CallFunc_GetEquippedInventoryForSlot_ReturnValue, bool Temp_bool_Variable, class UInventoryBalanceStateComponent* CallFunc_GetInventoryBalanceState_ReturnValue, class UClass* CallFunc_GetDamageType_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class UClass* K2Node_Select_Default);
	void OnStart(float MoveDuration, class AActor* TargetActor);
	void OnStop(bool bInterrupted);
	void OnHitTargetable(class AActor* HitActor, struct FVector& HitNormal);
	void OnHitWorld(class AActor* HitActor, struct FVector& HitNormal);
	void SlideDuration();
	void MovementChanged(class ACharacter* Character, enum class EMovementMode PrevMovementMode, uint8 PreviousCustomMode);
	void OnHitDamageable(class AActor* HitActor, const struct FVector& HitNormal);
	void OnServerStart(float MoveDuration, class AActor* TargetActor, class AActor* Instigator);
	void OnCapsuleBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void OnServerStop(bool bInterrupted);
	void ExecuteUbergraph_ControlledMove_Global_Sliding(int32 EntryPoint, class UClass* CallFunc_GetSlideDamageType_SlideDamageType, class AActor* K2Node_Event_HitActor1, const struct FVector& K2Node_Event_HitNormal1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsLocalController_ReturnValue, class AActor* K2Node_Event_HitActor, const struct FVector& K2Node_Event_HitNormal, class UPrimitiveComponent* CallFunc_GetComponentByClass_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue1, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue, bool K2Node_Event_bInterrupted1, float CallFunc_Multiply_FloatFloat_ReturnValue, float K2Node_Event_MoveDuration1, class AActor* K2Node_Event_TargetActor1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FDataTableValueHandle& K2Node_MakeStruct_DataTableValueHandle, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue1, class ACharacter* K2Node_CustomEvent_Character, enum class EMovementMode K2Node_CustomEvent_PrevMovementMode, uint8 K2Node_CustomEvent_PreviousCustomMode, bool CallFunc_IsPerformingSpecificControlledMove_ReturnValue, class AActor* K2Node_CustomEvent_HitActor, const struct FVector& K2Node_CustomEvent_HitNormal, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue1, float CallFunc_GetDataTableValue_OutValue, bool CallFunc_GetDataTableValue_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, float K2Node_Event_MoveDuration, class AActor* K2Node_Event_TargetActor, class AActor* K2Node_Event_Instigator, class UPrimitiveComponent* K2Node_CustomEvent_OverlappedComponent, class AActor* K2Node_CustomEvent_OtherActor, class UPrimitiveComponent* K2Node_CustomEvent_OtherComp, int32 K2Node_CustomEvent_OtherBodyIndex, bool K2Node_CustomEvent_bFromSweep, const struct FHitResult& K2Node_CustomEvent_SweepResult, bool CallFunc_IsValid_ReturnValue1, bool K2Node_Event_bInterrupted, const struct FHitResult& Temp_struct_Variable, const struct FVector& CallFunc_GetVelocity_ReturnValue1, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, float CallFunc_GetDistanceBetweenVectors_Distance, float CallFunc_FMin_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue2, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue2, bool CallFunc_IsLocalController_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue3, const struct FForceSelection& CallFunc_Conv_FloatToForceSelection_ReturnValue);
};

}


