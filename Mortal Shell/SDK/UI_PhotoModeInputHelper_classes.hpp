#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x239 - 0x230)
// WidgetBlueprintGeneratedClass UI_PhotoModeInputHelper.UI_PhotoModeInputHelper_C
class UUI_PhotoModeInputHelper_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         bHandleNextRelease;                                // 0x238(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUI_PhotoModeInputHelper_C* GetDefaultObj();

	void Construct();
	void GameMenuPressed();
	void GameMenuReleased();
	void ExecuteUbergraph_UI_PhotoModeInputHelper(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsInputEnabled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


