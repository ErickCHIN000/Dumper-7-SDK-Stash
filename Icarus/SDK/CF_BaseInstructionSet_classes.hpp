#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x47 (0x320 - 0x2D9)
// WidgetBlueprintGeneratedClass CF_BaseInstructionSet.CF_BaseInstructionSet_C
class UCF_BaseInstructionSet_C : public UCF_Base_C
{
public:
	uint8                                        Pad_2ADA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                          InstructionBox;                                    // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_IconTextButton_C*                 UMG_IconTextButton_1;                              // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FString>                        Instructions;                                      // 0x2F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UCheatOverlayBase*                     Overlay;                                           // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                        RawInstructions;                                   // 0x310(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UCF_BaseInstructionSet_C* GetDefaultObj();

	void UpdateArgs(TArray<class FString>& InArguments, const class FString& CurrentLine, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UCheatOverlayBase* CallFunc_GetCheatOverlay_ReturnValue, class UCheatOverlayBase* CallFunc_GetCheatOverlay_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_ParseCheatLineArguments_ReturnValue, const class FString& CallFunc_MakeLiteralString_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class UInstructionRow_C* CallFunc_Create_ReturnValue, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
	void Set_Instructions(TArray<class FString>& Instructions);
	void Execute();
	void BndEvt__UMG_IconTextButton_1_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature();
	void UpdatePreview(TArray<class FString>& Args);
	void ExecuteUbergraph_CF_BaseInstructionSet(int32 EntryPoint, TArray<class FString>& K2Node_Event_Args, TArray<class FString>& K2Node_CustomEvent_Instructions);
};

}


