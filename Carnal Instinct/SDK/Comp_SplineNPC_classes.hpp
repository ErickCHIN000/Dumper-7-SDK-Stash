#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0xD0 - 0xB0)
// BlueprintGeneratedClass Comp_SplineNPC.Comp_SplineNPC_C
class UComp_SplineNPC_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ACharacter*                            Owner;                                             // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Active;                                            // 0xC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_11F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Direction;                                         // 0xC4(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UComp_SplineNPC_C* GetDefaultObj();

	void FnOptimizeNPC();
	void ReceiveBeginPlay();
	void EventChangeCollision();
	void ExecuteUbergraph_Comp_SplineNPC(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue_1, class ACharacter* K2Node_DynamicCast_AsCharacter_1, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetOwner_ReturnValue_2, class ACharacter* K2Node_DynamicCast_AsCharacter_2, bool K2Node_DynamicCast_bSuccess_2);
};

}


