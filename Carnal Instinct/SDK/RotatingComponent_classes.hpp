#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0xF0 - 0xB0)
// BlueprintGeneratedClass RotatingComponent.RotatingComponent_C
class URotatingComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	float                                        TimeElapsed;                                       // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RotateTime;                                        // 0xBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxDegreesPerSecond;                               // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldRotate;                                      // 0xC4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29E8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxAllowedDegrees;                                 // 0xC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29EE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnRotatingStart;                                   // 0xD0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnRotatingEnd;                                     // 0xE0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class URotatingComponent_C* GetDefaultObj();

	void IsRotating(bool* Result);
	void SetRotationMode(enum class E_RotationMode Mode, class ACharacter* L_Character, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_ActorHasTag_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_1, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess);
	void StopRotating();
	void Debug();
	void ReceiveBeginPlay();
	void StartRotatingWithLimit(float MaxPossibleRotation, float MaxDegreesPerSecond);
	void StartRotatingWithTime(float Time, float MaxDegreesPerSecond);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_RotatingComponent(int32 EntryPoint, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class II_RotatingComponent_C> K2Node_DynamicCast_AsI_Rotating_Component, bool K2Node_DynamicCast_bSuccess, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FRotator& CallFunc_GetDesiredRotation_Rotation, class AActor* CallFunc_GetOwner_ReturnValue_1, const struct FRotator& CallFunc_RInterpTo_Constant_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_2, TScriptInterface<class II_RotatingComponent_C> K2Node_DynamicCast_AsI_Rotating_Component_1, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_GetDesiredRotation_Rotation_1, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_3, bool CallFunc_DoesImplementInterface_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, const class FString& CallFunc_GetClassDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, float K2Node_CustomEvent_MaxPossibleRotation, float K2Node_CustomEvent_MaxDegreesPerSecond_1, float CallFunc_Divide_FloatFloat_ReturnValue, float K2Node_CustomEvent_Time, float K2Node_CustomEvent_MaxDegreesPerSecond, float K2Node_Event_DeltaSeconds);
	void OnRotatingEnd__DelegateSignature();
	void OnRotatingStart__DelegateSignature();
};

}


