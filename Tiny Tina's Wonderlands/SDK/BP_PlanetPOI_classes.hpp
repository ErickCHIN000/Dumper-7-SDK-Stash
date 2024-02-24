#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x51 (0x609 - 0x5B8)
// BlueprintGeneratedClass BP_PlanetPOI.BP_PlanetPOI_C
class ABP_PlanetPOI_C : public AOakZoneMapIcon_POI
{
public:
	uint8                                        Pad_1720[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5C0(0x8)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                  SM_PlanetRegion;                                   // 0x5C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Select_Alpha_302A372A49B5F5677C5019B5F63D6E29;     // 0x5D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Select__Direction_302A372A49B5F5677C5019B5F63D6E29; // 0x5D4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_172A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Select;                                            // 0x5D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Color;                                             // 0x5E0(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AZoneMapViewer*                        Owning_Zone_Map;                                   // 0x5F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UZoneMapData_Base_C*                   Zone_Map_Data;                                     // 0x5F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              DMI_PlanetPOI;                                     // 0x600(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Highlighted;                                       // 0x608(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_PlanetPOI_C* GetDefaultObj();

	void UserConstructionScript(class ABP_ZoneMap_C* K2Node_DynamicCast_AsBP_Zone_Map, bool K2Node_DynamicCast_bSuccess, class UStaticMesh* CallFunc_GetZoneMeshOnPlanet_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue);
	void Select__FinishedFunc();
	void Select__UpdateFunc();
	void Activate_POI();
	void ReceiveBeginPlay();
	void End_Zone_Map_Cursor_Over();
	void Begin_Zone_Map_Cursor_Over();
	void Highlight_POI();
	void ExecuteUbergraph_BP_PlanetPOI(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
};

}


