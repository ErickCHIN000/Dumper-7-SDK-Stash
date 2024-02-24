#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0x308 - 0x2F9)
// WidgetBlueprintGeneratedClass CF_UnlimitedResources.CF_UnlimitedResources_C
class UCF_UnlimitedResources_C : public UCF_BaseBool_C
{
public:
	uint8                                        Pad_1BF6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x300(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UCF_UnlimitedResources_C* GetDefaultObj();

	bool GetCheckboxState(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_IsUnlimitedResourcesEnabled_ReturnValue);
	void OnCheckboxStateChanged(bool NewState);
	void ExecuteUbergraph_CF_UnlimitedResources(int32 EntryPoint, bool K2Node_Event_NewState, enum class EValid CallFunc_GetCheatController_Paths, class ACheatController* CallFunc_GetCheatController_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
};

}


