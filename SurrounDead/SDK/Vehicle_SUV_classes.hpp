#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x17 (0x4B0 - 0x499)
// BlueprintGeneratedClass Vehicle_SUV.Vehicle_SUV_C
class AVehicle_SUV_C : public ABP_VehicleMaster_C
{
public:
	uint8                                        Pad_1EC7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USpotLightComponent*                   LightRight1;                                       // 0x4A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   LightLeft1;                                        // 0x4A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AVehicle_SUV_C* GetDefaultObj();

	void UserConstructionScript(TArray<class USpotLightComponent*>& K2Node_MakeArray_Array);
};

}


