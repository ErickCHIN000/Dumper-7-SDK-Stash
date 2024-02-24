#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x4E0 - 0x498)
// BlueprintGeneratedClass BP_FogOfDiscoveryCapture.BP_FogOfDiscoveryCapture_C
class ABP_FogOfDiscoveryCapture_C : public AFogOfDiscoveryCapture
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x498(0x8)(Transient, DuplicateTransient)
	class USphereComponent*                      Sphere;                                            // 0x4A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneCaptureComponent2D*              SceneCaptureComponent2D;                           // 0x4A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        Render_Target_Size;                                // 0x4B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3708[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMeshComponent*                  MapCaptureComponent;                               // 0x4B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               PreviousLocation;                                  // 0x4C0(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_370E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UZoneMapData*                          ZoneMapData;                                       // 0x4D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                           MeshOverride;                                      // 0x4D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_FogOfDiscoveryCapture_C* GetDefaultObj();

	void FinishZoneMapFoD();
	void CaptureZoneMapFoD();
	void UserConstructionScript();
	void GetData();
	void OnFogLevelLoaded(class UZoneMapData* UpdatedZoneMap);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_FogOfDiscoveryCapture(int32 EntryPoint, class UZoneMapData* K2Node_Event_UpdatedZoneMap, enum class EEndPlayReason K2Node_Event_EndPlayReason);
};

}


