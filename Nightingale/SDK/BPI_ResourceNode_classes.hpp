#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_ResourceNode.BPI_ResourceNode_C
class IBPI_ResourceNode_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_ResourceNode_C* GetDefaultObj();

	void IsInstanceHarvestable(int32 InstanceID, bool* IsHarvestable);
	void GetGrantedResource(int32 InstanceID, bool* Success, struct FItemData* ResourceData);
};

}


