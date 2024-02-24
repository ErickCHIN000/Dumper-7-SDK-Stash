#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB (0x308 - 0x2FD)
// WidgetBlueprintGeneratedClass CF_SetMaxHuntingPopups.CF_SetMaxHuntingPopups_C
class UCF_SetMaxHuntingPopups_C : public UCF_BaseInteger_C
{
public:
	uint8                                        Pad_25AB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x300(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UCF_SetMaxHuntingPopups_C* GetDefaultObj();

	void Construct();
	void Execute();
	void ExecuteUbergraph_CF_SetMaxHuntingPopups(int32 EntryPoint, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetMaxProjectionWidgets_MaxProjectionWidgetCount, enum class EValid CallFunc_GetIcarusPlayerController_IsValid_1, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_1, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface_1, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_1, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface_1);
};

}


