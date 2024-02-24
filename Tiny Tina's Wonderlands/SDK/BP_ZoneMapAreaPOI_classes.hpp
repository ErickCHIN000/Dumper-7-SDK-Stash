#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x808 - 0x800)
// BlueprintGeneratedClass BP_ZoneMapAreaPOI.BP_ZoneMapAreaPOI_C
class UBP_ZoneMapAreaPOI_C : public UZoneMapPOIMeshComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x800(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_ZoneMapAreaPOI_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_ZoneMapAreaPOI(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class AZoneMapViewer* K2Node_DynamicCast_AsZone_Map_Viewer, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue);
};

}


