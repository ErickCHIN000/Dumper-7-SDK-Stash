#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x7D8 - 0x7BC)
// BlueprintGeneratedClass BP_Basic_Wall_Light_Shroud.BP_Basic_Wall_Light_Shroud_C
class ABP_Basic_Wall_Light_Shroud_C : public ABP_Light_Electric_Base_C
{
public:
	uint8                                        Pad_5A31[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_IcarusSpotLight_C*                 BP_IcarusSpotLight1;                               // 0x7C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  PointLight1;                                       // 0x7D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Basic_Wall_Light_Shroud_C* GetDefaultObj();

	void SetLightActiveState(bool Temp_bool_Variable, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, class UMaterialInterface* K2Node_Select_Default);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Basic_Wall_Light_Shroud(int32 EntryPoint);
};

}


