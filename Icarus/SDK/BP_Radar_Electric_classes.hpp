#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x819 - 0x819)
// BlueprintGeneratedClass BP_Radar_Electric.BP_Radar_Electric_C
class ABP_Radar_Electric_C : public ABP_Radarv3_C
{
public:

	static class UClass* StaticClass();
	static class ABP_Radar_Electric_C* GetDefaultObj();

	void Deployable_Interact(class AActor* Interactor, enum class EValid CallFunc_GetTrait_Paths, class UEnergyComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_ActivateResourceComponent_ReturnValue);
	void EnergyNetworkStateUpdate(bool Active, bool CallFunc_IsServer_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue);
	void OnRadarStateUpdated(enum class EValid CallFunc_GetTrait_Paths, class UEnergyComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
};

}


