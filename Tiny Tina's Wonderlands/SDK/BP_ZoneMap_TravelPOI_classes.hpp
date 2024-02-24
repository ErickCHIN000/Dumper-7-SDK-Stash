#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x600 - 0x5F0)
// BlueprintGeneratedClass BP_ZoneMap_TravelPOI.BP_ZoneMap_TravelPOI_C
class ABP_ZoneMap_TravelPOI_C : public AZoneMapTravelStationIcon_POI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5F0(0x8)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x5F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ZoneMap_TravelPOI_C* GetDefaultObj();

	void UserConstructionScript(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1);
	void Activate_POI();
	void ReceiveBeginPlay();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void Begin_Zone_Map_Cursor_Over();
	void End_Zone_Map_Cursor_Over();
	void ViewModeChanged();
	void ExecuteUbergraph_BP_ZoneMap_TravelPOI(int32 EntryPoint, class AActor* K2Node_Event_OtherActor, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, bool CallFunc_IsValid_ReturnValue1);
};

}


