#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x40 - 0x30)
// BlueprintGeneratedClass bp_TagsInformation.bp_TagsInformation_C
class Ubp_TagsInformation_C : public UPrimaryDataAsset
{
public:
	TArray<struct FQuest_Tag_Info>               TagsInfo;                                          // 0x30(0x10)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class Ubp_TagsInformation_C* GetDefaultObj();

};

}


