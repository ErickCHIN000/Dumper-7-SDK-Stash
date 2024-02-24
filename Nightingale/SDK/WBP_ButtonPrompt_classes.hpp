#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x19 (0x359 - 0x340)
// WidgetBlueprintGeneratedClass WBP_ButtonPrompt.WBP_ButtonPrompt_C
class UWBP_ButtonPrompt_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                GamepadPrompt;                                     // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            KeyboardPrompt;                                    // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class E_GenericInputButton              InputButton;                                       // 0x358(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_ButtonPrompt_C* GetDefaultObj();

	void ChangeInputConcept(enum class E_GenericInputButton InputButton, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void PreConstruct(bool IsDesignTime);
	void OnUsingGamepadChanged(bool bUsingGamepad);
	void Construct();
	void ExecuteUbergraph_WBP_ButtonPrompt(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool K2Node_Event_bUsingGamepad, bool CallFunc_IsUsingGamepad_ReturnValue);
};

}


