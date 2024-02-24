#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x210 - 0x1F0)
// BlueprintGeneratedClass TargetComponent.TargetComponent_C
class UTargetComponent_C : public USceneComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                  AttachSocket;                                      // 0x1F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bAutoAttach;                                       // 0x200(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D50[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABaseCharacter_C*                      OwnerCharacter;                                    // 0x208(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTargetComponent_C* GetDefaultObj();

	void GetOwnerCharacter(class ABaseCharacter_C** Character);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_TargetComponent(int32 EntryPoint, float K2Node_Event_DeltaSeconds, TArray<class USceneComponent*>& CallFunc_GetParentComponents_Parents, class USceneComponent* CallFunc_Array_Get_Item, bool CallFunc_K2_AttachToComponent_ReturnValue, TArray<class USceneComponent*>& CallFunc_GetParentComponents_Parents_1, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess);
};

}


