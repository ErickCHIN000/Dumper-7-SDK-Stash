#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x410 - 0x410)
// BlueprintGeneratedClass GenericTrophy.GenericTrophy_C
class AGenericTrophy_C : public ASHTrophy
{
public:

	static class UClass* StaticClass();
	static class AGenericTrophy_C* GetDefaultObj();

	bool IsCollectibleVisible(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ASHPlayerController* K2Node_DynamicCast_AsSHPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsTrophyReceived_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
};

}


