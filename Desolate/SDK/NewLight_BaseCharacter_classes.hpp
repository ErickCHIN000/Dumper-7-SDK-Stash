#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x7A (0x13F8 - 0x137E)
// BlueprintGeneratedClass NewLight_BaseCharacter.NewLight_BaseCharacter_C
class ANewLight_BaseCharacter_C : public AGenericNPC_Character_C
{
public:
	uint8                                        Pad_18FE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1380(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USHAICustomizationComponent*           SHAICustomization;                                 // 0x1388(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                NL_Beard;                                          // 0x1390(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                NL_Stuff2;                                         // 0x1398(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                NL_Shoulders;                                      // 0x13A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                NL_Pants;                                          // 0x13A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                NL_NeckArmor;                                      // 0x13B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                NL_Kneecaps;                                       // 0x13B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                NL_Body;                                           // 0x13C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                NL_Head;                                           // 0x13C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                NL_GlovesRight;                                    // 0x13D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                NL_GlovesLeft;                                     // 0x13D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                NL_Stuff;                                          // 0x13E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                NL_Eye;                                            // 0x13E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                NL_Hair;                                           // 0x13F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ANewLight_BaseCharacter_C* GetDefaultObj();

	void UserConstructionScript();
	void VisionTest(float DeltaSeconds);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void OnApplyCustomization();
	void ExecuteUbergraph_NewLight_BaseCharacter(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_DeltaSeconds_1, const struct FRotator& CallFunc_GetHeadRotation_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class USkeletalMesh* CallFunc_Array_Get_Item, float K2Node_Event_DeltaSeconds, class USkeletalMesh* CallFunc_Array_Get_Item_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1);
};

}


