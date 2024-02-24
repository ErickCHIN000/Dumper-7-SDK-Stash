#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x5F8 - 0x5B8)
// BlueprintGeneratedClass BP_GalaxyPOI.BP_GalaxyPOI_C
class ABP_GalaxyPOI_C : public AOakZoneMapIcon_POI
{
public:
	uint8                                        Pad_36F7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5C0(0x8)(Transient, DuplicateTransient)
	class UParticleSystemComponent*              ParticleSystem;                                    // 0x5C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneCaptureComponent2D*              SceneCaptureComponent2D;                           // 0x5D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPlanetMapData_C*                      PlanetMapData;                                     // 0x5D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                          Color;                                             // 0x5E0(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AZoneMapViewer*                        Owning_Zone_Map;                                   // 0x5F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_GalaxyPOI_C* GetDefaultObj();

	void UserConstructionScript(const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue);
	void End_Zone_Map_Cursor_Over();
	void Begin_Zone_Map_Cursor_Over();
	void Activate_POI();
	void ReceiveBeginPlay();
	void On_Begin_Zone_Map_Cursor_Over();
	void On_End_Zone_Map_Cursor_Over();
	void ExecuteUbergraph_BP_GalaxyPOI(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1);
};

}


