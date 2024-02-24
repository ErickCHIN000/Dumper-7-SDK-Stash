#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4A (0x13C8 - 0x137E)
// BlueprintGeneratedClass Neutral_BaseCharacter.Neutral_BaseCharacter_C
class ANeutral_BaseCharacter_C : public AGenericNPC_Character_C
{
public:
	uint8                                        Pad_9B4[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1380(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USHAICustomizationComponent*           SHAICustomization;                                 // 0x1388(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                NPCBeard;                                          // 0x1390(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                NpcPants;                                          // 0x1398(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                NpcBody;                                           // 0x13A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                NPCEye;                                            // 0x13A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                NpcHands;                                          // 0x13B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                NpcHair;                                           // 0x13B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                NpcHead;                                           // 0x13C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ANeutral_BaseCharacter_C* GetDefaultObj();

	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void CustomEvent(float DeltaSeconds);
	void ReceiveBeginPlay();
	void OnApplyCustomization();
	void ExecuteUbergraph_Neutral_BaseCharacter(int32 EntryPoint, float K2Node_Event_DeltaSeconds_1, bool CallFunc_IsValid_ReturnValue, float K2Node_Event_DeltaSeconds, const struct FRotator& CallFunc_GetHeadRotation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, bool CallFunc_NotEqual_FloatFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_GetPeripheralVisionAngle_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class USkeletalMesh* CallFunc_Array_Get_Item, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, class USkeletalMesh* CallFunc_Array_Get_Item_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue_2, class USkeletalMesh* CallFunc_Array_Get_Item_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue_3, class USkeletalMesh* CallFunc_Array_Get_Item_3, bool CallFunc_GreaterEqual_IntInt_ReturnValue_4, class UMaterialInstance* CallFunc_Array_Get_Item_4, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue_5, class UMaterialInstance* CallFunc_Array_Get_Item_5);
};

}


