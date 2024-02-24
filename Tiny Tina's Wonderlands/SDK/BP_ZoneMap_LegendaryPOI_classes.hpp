#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x768 - 0x760)
// BlueprintGeneratedClass BP_ZoneMap_LegendaryPOI.BP_ZoneMap_LegendaryPOI_C
class UBP_ZoneMap_LegendaryPOI_C : public UZoneMapPOILegendaryComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x760(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_ZoneMap_LegendaryPOI_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_ZoneMap_LegendaryPOI(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class AZoneMapViewer* K2Node_DynamicCast_AsZone_Map_Viewer, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue);
};

}


