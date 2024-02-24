#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_SpawnedArc_Interface.BP_SpawnedArc_Interface_C
class IBP_SpawnedArc_Interface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBP_SpawnedArc_Interface_C* GetDefaultObj();

	void SpawnArc(const struct FArcValues& ArcStruct);
	void SetAllowUpdates(bool AllowUpdates);
};

}


