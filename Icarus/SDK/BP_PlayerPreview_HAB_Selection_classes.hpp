#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x310 - 0x304)
// BlueprintGeneratedClass BP_PlayerPreview_HAB_Selection.BP_PlayerPreview_HAB_Selection_C
class ABP_PlayerPreview_HAB_Selection_C : public ABP_PlayerPreview_HAB_C
{
public:
	uint8                                        Pad_8BA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_CharacterSelection_C*             CharacterSelectionWidget;                          // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_PlayerPreview_HAB_Selection_C* GetDefaultObj();

	void ResolveVisibility(bool* Visible);
	void SetCharacterSelectionWidget(class UUMG_CharacterSelection_C* CharacterSelection, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Less_IntInt_ReturnValue);
};

}


