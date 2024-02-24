#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3B (0x314 - 0x2D9)
// WidgetBlueprintGeneratedClass CF_BaseFloat3.CF_BaseFloat3_C
class UCF_BaseFloat3_C : public UCF_Base_C
{
public:
	uint8                                        Pad_2308[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USpinBox*                              Integer;                                           // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpinBox*                              Integer_1;                                         // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpinBox*                              Integer_2;                                         // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_IconTextButton_C*                 UMG_IconTextButton_1;                              // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FVector                               Vector;                                            // 0x308(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCF_BaseFloat3_C* GetDefaultObj();

	void UpdatePreviewImpl(TArray<class FString>& Array, float Z, float Y, float X, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_Array_Get_Item, float CallFunc_Conv_StringToFloat_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, const struct FVector& CallFunc_MakeVector_ReturnValue);
	void UpdatePreview(TArray<class FString>& Args);
	void BndEvt__UMG_IconTextButton_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature();
	void BndEvt__Integer_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod);
	void BndEvt__Integer_1_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod);
	void BndEvt__Integer_2_K2Node_ComponentBoundEvent_3_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod);
	void ExecuteUbergraph_CF_BaseFloat3(int32 EntryPoint, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, TArray<class FString>& K2Node_Event_Args, float K2Node_ComponentBoundEvent_InValue_2, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod_2, float K2Node_ComponentBoundEvent_InValue_1, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod_1, float K2Node_ComponentBoundEvent_InValue, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_MakeVector_ReturnValue_1, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, const struct FVector& CallFunc_MakeVector_ReturnValue_2);
};

}


