#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1B (0x1D94 - 0x1D79)
// BlueprintGeneratedClass MirageCharacter.MirageCharacter_C
class AMirageCharacter_C : public AArsenalCharacter_C
{
public:
	uint8                                        Pad_6CE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1D80(0x8)(Transient, DuplicateTransient)
	struct FVector                               ShootLocation;                                     // 0x1D88(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AMirageCharacter_C* GetDefaultObj();

	void InitializeBefore(class AActor* CallFunc_GetOwner_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UClass* CallFunc_GetObjectClass_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, class UClass* CallFunc_GetObjectClass_ReturnValue2, class UClass* CallFunc_GetObjectClass_ReturnValue3, bool CallFunc_IsValid_ReturnValue4, bool CallFunc_IsValid_ReturnValue5, class UClass* CallFunc_GetObjectClass_ReturnValue4, class UClass* CallFunc_GetObjectClass_ReturnValue5, bool CallFunc_IsValid_ReturnValue6, bool CallFunc_IsValid_ReturnValue7, class UClass* CallFunc_GetObjectClass_ReturnValue6, class UClass* CallFunc_GetObjectClass_ReturnValue7);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_MirageCharacter(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_SetCollisionByCharacterType_result, bool CallFunc_IgnoreCollisionByCharacterType_result);
};

}


