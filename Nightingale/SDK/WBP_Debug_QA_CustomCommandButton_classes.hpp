#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3C (0x37C - 0x340)
// WidgetBlueprintGeneratedClass WBP_Debug_QA_CustomCommandButton.WBP_Debug_QA_CustomCommandButton_C
class UWBP_Debug_QA_CustomCommandButton_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_button_base_C*                    button_delete;                                     // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_button_base_C*                    button_runCommand;                                 // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                Str_command;                                       // 0x358(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            DebugCommandRemoved;                               // 0x368(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        button_index;                                      // 0x378(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Debug_QA_CustomCommandButton_C* GetDefaultObj();

	void ExecuteCommand(class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController);
	void Construct();
	void BndEvt__WBP_Debug_QA_CommandButtonJosh_button_close_K2Node_ComponentBoundEvent_0_BU_Click__DelegateSignature();
	void BndEvt__WBP_Debug_QA_CommandButtonJosh_button_runCommand_K2Node_ComponentBoundEvent_1_BU_Click__DelegateSignature();
	void ExecuteUbergraph_WBP_Debug_QA_CustomCommandButton(int32 EntryPoint, class FText CallFunc_Conv_StringToText_ReturnValue);
	void DebugCommandRemoved__DelegateSignature(int32 Index);
};

}


