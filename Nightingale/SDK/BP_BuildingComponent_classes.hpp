#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x1F8 - 0x1F0)
// BlueprintGeneratedClass BP_BuildingComponent.BP_BuildingComponent_C
class UBP_BuildingComponent_C : public UBuildingComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_BuildingComponent_C* GetDefaultObj();

	void ExecuteUbergraph_BP_BuildingComponent(int32 EntryPoint);
};

}


