#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x768 - 0x758)
// BlueprintGeneratedClass BP_ZoneMapDynamicPOI.BP_ZoneMapDynamicPOI_C
class UBP_ZoneMapDynamicPOI_C : public UZoneMapPOIComponent
{
public:
	uint8                                        Pad_3114[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x760(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_ZoneMapDynamicPOI_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_ZoneMapDynamicPOI(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class AZoneMapViewer* K2Node_DynamicCast_AsZone_Map_Viewer, bool K2Node_DynamicCast_bSuccess, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
};

}


