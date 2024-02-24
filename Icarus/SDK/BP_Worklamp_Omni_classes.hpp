#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x7C8 - 0x7BC)
// BlueprintGeneratedClass BP_Worklamp_Omni.BP_Worklamp_Omni_C
class ABP_Worklamp_Omni_C : public ABP_Light_Electric_Base_C
{
public:
	uint8                                        Pad_685D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_IcarusPointLight_C*                BP_IcarusPointLight;                               // 0x7C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Worklamp_Omni_C* GetDefaultObj();

	void SetLightActiveState(bool Temp_bool_Variable, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, class UMaterialInterface* K2Node_Select_Default);
};

}


