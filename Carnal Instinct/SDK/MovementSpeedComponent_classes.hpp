#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x51 (0x101 - 0xB0)
// BlueprintGeneratedClass MovementSpeedComponent.MovementSpeedComponent_C
class UMovementSpeedComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	enum class E_MovementState                   MovementState;                                     // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_MovementState                   StartMovementState;                                // 0xB9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_295F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WalkSpeed;                                         // 0xBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        JogSpeed;                                          // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SprintSpeed;                                       // 0xC4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TargetSpeed;                                       // 0xC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpeedChangeInterpSpeed;                            // 0xCC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnMovementStateStart;                              // 0xD0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnMovementStateEnd;                                // 0xE0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<enum class E_MovementState>           StatesToToggle;                                    // 0xF0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsUpdatingSpeed;                                   // 0x100(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UMovementSpeedComponent_C* GetDefaultObj();

	void GetMaxPossibleSpeed(float* Speed, class AActor* CallFunc_GetOwner_ReturnValue, class UCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void ToggleState(int32 L_StateIndex, bool Temp_bool_Variable, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, int32 CallFunc_Array_Find_ReturnValue, int32 K2Node_Select_Default);
	void UpdateMaxSpeed(class UCharacterMovementComponent* MovementComponent, class AActor* CallFunc_GetOwner_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, class UCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, float CallFunc_FInterpTo_ReturnValue);
	void SetMovementState(enum class E_MovementState State, enum class E_MovementState Temp_byte_Variable, float Temp_float_Variable, class AActor* CallFunc_GetOwner_ReturnValue, class UCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, float K2Node_Select_Default);
	void GetMovementState(enum class E_MovementState* State);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_MovementSpeedComponent(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
	void OnMovementStateEnd__DelegateSignature(enum class E_MovementState State);
	void OnMovementStateStart__DelegateSignature(enum class E_MovementState State);
};

}


