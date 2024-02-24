#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2C (0x7E8 - 0x7BC)
// BlueprintGeneratedClass BP_Spotlight_Tripod.BP_Spotlight_Tripod_C
class ABP_Spotlight_Tripod_C : public ABP_Light_Electric_Base_C
{
public:
	uint8                                        Pad_685A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_IcarusSpotLight_C*                 BP_IcarusSpotLight;                                // 0x7C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                   FMODAudio;                                         // 0x7C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  PointLight_Fill;                                   // 0x7D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInventory*                            FuelInventory;                                     // 0x7D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                            Extinguish;                                        // 0x7E0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Spotlight_Tripod_C* GetDefaultObj();

	void SetLightActiveState(bool Temp_bool_Variable, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, class UMaterialInterface* K2Node_Select_Default);
	void Toggle(enum class EValid CallFunc_GetTrait_Paths, class UGeneratorComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_ActivateGenerator_ReturnValue);
};

}


