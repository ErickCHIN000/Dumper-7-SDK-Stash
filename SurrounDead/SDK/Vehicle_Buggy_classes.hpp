#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x37 (0x4D0 - 0x499)
// BlueprintGeneratedClass Vehicle_Buggy.Vehicle_Buggy_C
class AVehicle_Buggy_C : public ABP_VehicleMaster_C
{
public:
	uint8                                        Pad_1F25[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USpotLightComponent*                   LightLeft2;                                        // 0x4A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   LightRight2;                                       // 0x4A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   LightCentre1;                                      // 0x4B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   LightCentre;                                       // 0x4B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   LightLeft1;                                        // 0x4C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   LightRight1;                                       // 0x4C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AVehicle_Buggy_C* GetDefaultObj();

	void UserConstructionScript(TArray<class USpotLightComponent*>& K2Node_MakeArray_Array);
};

}


