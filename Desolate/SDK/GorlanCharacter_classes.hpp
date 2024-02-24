#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x34 (0x1160 - 0x112C)
// BlueprintGeneratedClass GorlanCharacter.GorlanCharacter_C
class AGorlanCharacter_C : public ABasePeacefulAICharacter_C
{
public:
	uint8                                        Pad_13E7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1130(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                Mod;                                               // 0x1138(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     Capsule3;                                          // 0x1140(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     Capsule2;                                          // 0x1148(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     Capsule1;                                          // 0x1150(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     Capsule;                                           // 0x1158(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGorlanCharacter_C* GetDefaultObj();

	void AB_SyncState(class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UGorlan_AnimBP_C* K2Node_DynamicCast_AsGorlan_Anim_BP, bool K2Node_DynamicCast_bSuccess);
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void CustomEvent(float DeltaSeconds);
	void ExecuteUbergraph_GorlanCharacter(int32 EntryPoint, float K2Node_Event_DeltaSeconds_1, float K2Node_Event_DeltaSeconds, const struct FRotator& CallFunc_GetHeadRotation_ReturnValue);
};

}


