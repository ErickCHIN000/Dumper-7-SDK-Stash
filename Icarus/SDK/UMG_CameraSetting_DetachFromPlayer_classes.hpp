#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x2D1 - 0x2D1)
// WidgetBlueprintGeneratedClass UMG_CameraSetting_DetachFromPlayer.UMG_CameraSetting_DetachFromPlayer_C
class UUMG_CameraSetting_DetachFromPlayer_C : public UW_PostProcessEntry_Checkbox_C
{
public:

	static class UClass* StaticClass();
	static class UUMG_CameraSetting_DetachFromPlayer_C* GetDefaultObj();

	void UpdatePostProcess(struct FPostProcessSettings& Settings, bool CallFunc_GetCheckboxState_ReturnValue, class ABP_PhotoCamera_C* CallFunc_GetPhotoCameraPawn_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


