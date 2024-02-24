#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x128 (0x6E0 - 0x5B8)
// BlueprintGeneratedClass BP_OverworldPOI.BP_OverworldPOI_C
class ABP_OverworldPOI_C : public AOakZoneMapIcon_POI
{
public:
	uint8                                        Pad_37A1[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5C0(0x8)(Transient, DuplicateTransient)
	class UMaterialBillboardComponent*           MaterialBillboard;                                 // 0x5C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                  TextLabel;                                         // 0x5D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_PlanetRegion;                                   // 0x5D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AZoneMapViewer*                        Owning_Zone_Map;                                   // 0x5E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UZoneMapData*                          Zone_Map_Data;                                     // 0x5E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              DMI_Waypoint;                                      // 0x5F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Highlighted;                                       // 0x5F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bSnapToPOI;                                        // 0x5F9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37A7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FColor                                HighlightedTextColor;                              // 0x5FC(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                UnhighlightedTextColor;                            // 0x600(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37A8[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBigMapPOIData                        POI_Data;                                          // 0x610(0xD0)(Edit, BlueprintVisible, ContainsInstancedReference, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class ABP_OverworldPOI_C* GetDefaultObj();

	struct FVector GetInitialFocusLocation(const struct FVector& CallFunc_ProjectBigMapLocationToZone_ReturnValue);
	bool GetShouldTreatAsNotZoneMap();
	void UserConstructionScript(class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue, const struct FTransform& CallFunc_ComposeTransforms_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, class ABP_ZoneMap_C* K2Node_DynamicCast_AsBP_Zone_Map, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_SetStaticMesh_ReturnValue);
	void End_Zone_Map_Cursor_Over();
	void Begin_Zone_Map_Cursor_Over();
	void Highlight_POI();
	void UpdateDisplay();
	void ReceiveBeginPlay();
	void Activate_POI();
	void ExecuteUbergraph_BP_OverworldPOI(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwner_ReturnValue, class AOakPlayerController* K2Node_DynamicCast_AsOak_Player_Controller, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool CallFunc_GetOverworldViewZoneMissionStatus_bCanViewZone, enum class EZoneMapMissionStatus CallFunc_GetOverworldViewZoneMissionStatus_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_K2_EvaluateCondition_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, TArray<struct FVector>& CallFunc_GetWaypointLocationsForActiveMission_ReturnValue, const struct FVector& CallFunc_Array_Get_Item, const struct FVector& CallFunc_NegateVector_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_ProjectZoneLocationToBigMap_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FVector& CallFunc_NegateVector_ReturnValue1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool Temp_bool_Variable, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, bool CallFunc_Not_PreBool_ReturnValue1, class FText CallFunc_GetGlobalCompletionSummary_ReturnValue, const struct FColor& K2Node_Select_Default);
};

}


