#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x29 (0xD9 - 0xB0)
// BlueprintGeneratedClass bc_PawnMovementDetector.bc_PawnMovementDetector_C
class Ubc_PawnMovementDetector_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	bool                                         IsCurrentlyMoving;                                 // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_18F1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnMovementBegan;                                   // 0xC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        CurrentInputLength;                                // 0xD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InputLengthThreshold;                              // 0xD4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         BeganMovement;                                     // 0xD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class Ubc_PawnMovementDetector_C* GetDefaultObj();

	void DisableDetector();
	void ReceiveTick(float DeltaSeconds);
	void EnableDetector();
	void ExecuteUbergraph_bc_PawnMovementDetector(int32 EntryPoint, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, float K2Node_Event_DeltaSeconds, const struct FVector& CallFunc_GetCurrentAcceleration_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
	void OnMovementBegan__DelegateSignature();
};

}


