#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xBE0 - 0xBD8)
// BlueprintGeneratedClass ArsenalDestroyPartsComponent.ArsenalDestroyPartsComponent_C
class UArsenalDestroyPartsComponent_C : public UTTLArsenalDestroyPartsComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBD8(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UArsenalDestroyPartsComponent_C* GetDefaultObj();

	void SetWeaponLeftVisibility(bool NewVisibility);
	void CancelAttack(bool IsLeft);
	void ShowOuterHair();
	void ShowOuter();
	void SetWeaponRightVisibility(bool NewVisibility);
	void ExecuteUbergraph_ArsenalDestroyPartsComponent(int32 EntryPoint, bool K2Node_Event_newVisibility, bool K2Node_Event_newVisibility1, class AActor* CallFunc_GetOwner_ReturnValue, bool K2Node_Event_isLeft, class AArsenalCharacter_C* K2Node_DynamicCast_AsArsenal_Character, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue2, class AArsenalCharacter_C* K2Node_DynamicCast_AsArsenal_Character1, bool K2Node_DynamicCast_bSuccess1, class AArsenalCharacter_C* K2Node_DynamicCast_AsArsenal_Character2, bool K2Node_DynamicCast_bSuccess2, class AActor* CallFunc_GetOwner_ReturnValue3, class AArsenalCharacter_C* K2Node_DynamicCast_AsArsenal_Character3, bool K2Node_DynamicCast_bSuccess3, class AActor* CallFunc_GetOwner_ReturnValue4, class AArsenalCharacter_C* K2Node_DynamicCast_AsArsenal_Character4, bool K2Node_DynamicCast_bSuccess4, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1);
};

}


