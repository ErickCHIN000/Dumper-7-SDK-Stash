#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x24 (0x2FD - 0x2D9)
// WidgetBlueprintGeneratedClass CF_BaseFloat.CF_BaseFloat_C
class UCF_BaseFloat_C : public UCF_Base_C
{
public:
	uint8                                        Pad_21D8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USpinBox*                              Integer;                                           // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_IconTextButton_C*                 UMG_IconTextButton_1;                              // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        Number;                                            // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Percentage;                                        // 0x2FC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UCF_BaseFloat_C* GetDefaultObj();

	float GetFloatValue();
	void BndEvt__Integer_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod);
	void UpdatePreview(TArray<class FString>& Args);
	void BndEvt__UMG_IconTextButton_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature();
	void ExecuteUbergraph_CF_BaseFloat(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue, float K2Node_ComponentBoundEvent_InValue, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, TArray<class FString>& K2Node_Event_Args, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Conv_StringToFloat_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EndsWith_ReturnValue);
};

}


