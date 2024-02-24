#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_HudManager.BPFL_HudManager_C
class UBPFL_HudManager_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_HudManager_C* GetDefaultObj();

	void Get_HUD_Goal_Tracking_Manager(class UObject* __WorldContext, class UBP_HUDGoalTrackingComponent_C** BP_UIGoalTrackingComponent, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1);
	void Get_Specific_HUD_Manager(class APlayerController* Player_Controller, class UObject* __WorldContext, TScriptInterface<class IBPI_HUD_Manager_C>* HUD_Manager, class AHUD* CallFunc_GetHUD_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IBPI_HUD_Manager_C> K2Node_DynamicCast_AsBPI_HUD_Manager, bool K2Node_DynamicCast_bSuccess);
	void Get_HUD_Manager(class UObject* __WorldContext, TScriptInterface<class IBPI_HUD_Manager_C>* HUD_Manager, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AHUD* CallFunc_GetHUD_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AHUD_CommonNWX_C* K2Node_DynamicCast_AsHUD_Common_NWX, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_2);
};

}


