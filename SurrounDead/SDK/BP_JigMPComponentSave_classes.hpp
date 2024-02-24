#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x58 - 0x28)
// BlueprintGeneratedClass BP_JigMPComponentSave.BP_JigMPComponentSave_C
class UBP_JigMPComponentSave_C : public USaveGame
{
public:
	TArray<struct FS_ReplicatedContainerInfo>    ReplicatedContainers;                              // 0x28(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	TArray<int32>                                MainUIDs;                                          // 0x38(0x10)(Edit, BlueprintVisible)
	TArray<struct FS_InvWeight>                  Weights;                                           // 0x48(0x10)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UBP_JigMPComponentSave_C* GetDefaultObj();

};

}


