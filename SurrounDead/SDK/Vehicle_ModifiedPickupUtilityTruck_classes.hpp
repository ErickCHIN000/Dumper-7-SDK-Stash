#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1F (0x4B8 - 0x499)
// BlueprintGeneratedClass Vehicle_ModifiedPickupUtilityTruck.Vehicle_ModifiedPickupUtilityTruck_C
class AVehicle_ModifiedPickupUtilityTruck_C : public ABP_VehicleMaster_C
{
public:
	uint8                                        Pad_4[0x7];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMeshComponent*                SkeletalMesh2;                                     // 0x4A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMesh1;                                     // 0x4A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x4B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AVehicle_ModifiedPickupUtilityTruck_C* GetDefaultObj();

	void UserConstructionScript(TArray<class USpotLightComponent*>& K2Node_MakeArray_Array);
};

}


