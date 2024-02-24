#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x40 - 0x28)
// BlueprintGeneratedClass BP_DB_POIIgnoreListEntryData.BP_DB_POIIgnoreListEntryData_C
class UBP_DB_POIIgnoreListEntryData_C : public UObject
{
public:
	class FString                                IgnoredSubstring;                                  // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UWBP_DB_POIList_C*                     ParentPOIListObject;                               // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_DB_POIIgnoreListEntryData_C* GetDefaultObj();

};

}


