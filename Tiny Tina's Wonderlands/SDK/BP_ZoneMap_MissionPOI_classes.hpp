#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x6C4 - 0x6B0)
// BlueprintGeneratedClass BP_ZoneMap_MissionPOI.BP_ZoneMap_MissionPOI_C
class ABP_ZoneMap_MissionPOI_C : public AZoneMapMissionWaypointIcon
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6B0(0x8)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x6B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Mission_Icon_Size_Scale;                           // 0x6C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ZoneMap_MissionPOI_C* GetDefaultObj();

	void UserConstructionScript(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1);
	void ReceiveBeginPlay();
	void BeginZoneMapCursorOver();
	void EndZoneMapCursorOver();
	void K2_OnWaypointUpdated();
	void ExecuteUbergraph_BP_ZoneMap_MissionPOI(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, enum class EZoneMapMissionStatus CallFunc_GetMissionStatus_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class EZoneMapMissionStatus CallFunc_GetMissionStatus_ReturnValue1, bool K2Node_SwitchEnum1_CmpSuccess, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue);
};

}


