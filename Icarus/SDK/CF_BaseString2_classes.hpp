#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x27 (0x300 - 0x2D9)
// WidgetBlueprintGeneratedClass CF_BaseString2.CF_BaseString2_C
class UCF_BaseString2_C : public UCF_Base_C
{
public:
	uint8                                        Pad_1655[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UEditableText*                         Key;                                               // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_IconTextButton_C*                 UMG_IconTextButton_1;                              // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableText*                         Value;                                             // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCF_BaseString2_C* GetDefaultObj();

	float GetFloatValue();
	void UpdatePreview(TArray<class FString>& Args);
	void BndEvt__UMG_IconTextButton_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature();
	void ExecuteUbergraph_CF_BaseString2(int32 EntryPoint, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FString>& K2Node_Event_Args, bool CallFunc_Array_IsValidIndex_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, TArray<class UEditableText*>& K2Node_MakeArray_Array, class UEditableText* CallFunc_Array_Get_Item);
};

}


