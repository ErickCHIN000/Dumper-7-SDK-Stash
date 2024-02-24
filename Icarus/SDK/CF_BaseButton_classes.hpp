#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x17 (0x2F0 - 0x2D9)
// WidgetBlueprintGeneratedClass CF_BaseButton.CF_BaseButton_C
class UCF_BaseButton_C : public UCF_Base_C
{
public:
	uint8                                        Pad_2126[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UUMG_IconTextButton_C*                 UMG_IconTextButton_2;                              // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCF_BaseButton_C* GetDefaultObj();

	void BndEvt__UMG_IconTextButton_2_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature();
	void ExecuteUbergraph_CF_BaseButton(int32 EntryPoint);
};

}


