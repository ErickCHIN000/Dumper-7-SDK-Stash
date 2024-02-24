#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0xD8 - 0x80)
// BlueprintGeneratedClass BP_ConditionBehaviour_Item_EquippedToBody.BP_ConditionBehaviour_Item_EquippedToBody_C
class UBP_ConditionBehaviour_Item_EquippedToBody_C : public UBP_ConditionBehaviour_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x80(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ULoadoutComponentBase*                 LoadoutComponent;                                  // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class ELoadoutSlotType                  LoadoutSlot;                                       // 0x90(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2846[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemConstraint                       ItemConstraint;                                    // 0x98(0x40)(Edit, BlueprintVisible, ContainsInstancedReference, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UBP_ConditionBehaviour_Item_EquippedToBody_C* GetDefaultObj();

	void CheckSlotUpdate(enum class ELoadoutSlotType SlotType, class AEquippableItem* Item, const struct FInstanceData_Traits& LCheckItems, bool CallFunc_IsValid_ReturnValue, const struct FItemConstraintMatchData& CallFunc_IsItemConstraintMet_OutMatchData, enum class EGetResult CallFunc_IsItemConstraintMet_OutBranch, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValidConstraint_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FConditionPersistentData& CallFunc_MakeConditionPersistentDataFromBool_ReturnValue, bool CallFunc_IsComplete_ReturnValue, const struct FConditionPersistentData& CallFunc_MakeConditionPersistentDataFromBool_ReturnValue_1);
	void GetDebugText(class FText* Description, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const struct FItemConstraintPresentationData& CallFunc_GetItemConstraintUIData_OutPresentationData, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void OnConditionRemoved();
	void SetupCondition();
	void CompleteIfSatisfiedOnSetup();
	void ExecuteUbergraph_BP_ConditionBehaviour_Item_EquippedToBody(int32 EntryPoint, class ABP_PlayerState_C* CallFunc_GetConditionPlayerState_PlayerState, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ULoadoutComponentBase* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FLoadoutSlot& CallFunc_GetSlotByType_ReturnValue, bool CallFunc_IsValid_ReturnValue_4);
};

}


