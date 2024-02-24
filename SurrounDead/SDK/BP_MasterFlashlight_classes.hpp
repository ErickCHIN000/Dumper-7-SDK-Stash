#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x5E0 - 0x5C8)
// BlueprintGeneratedClass BP_MasterFlashlight.BP_MasterFlashlight_C
class ABP_MasterFlashlight_C : public ABP_StaticMeshClass_C
{
public:
	class UBatteryComponent_C*                   BatteryComponent;                                  // 0x5C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       Intensity;                                         // 0x5D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     Material;                                          // 0x5D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_MasterFlashlight_C* GetDefaultObj();

};

}


