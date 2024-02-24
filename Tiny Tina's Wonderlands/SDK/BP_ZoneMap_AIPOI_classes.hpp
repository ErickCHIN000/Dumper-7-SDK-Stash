#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x788 - 0x780)
// BlueprintGeneratedClass BP_ZoneMap_AIPOI.BP_ZoneMap_AIPOI_C
class UBP_ZoneMap_AIPOI_C : public UZoneMapPOIAIComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x780(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_ZoneMap_AIPOI_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_ZoneMap_AIPOI(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class AZoneMapViewer* K2Node_DynamicCast_AsZone_Map_Viewer, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue);
};

}


