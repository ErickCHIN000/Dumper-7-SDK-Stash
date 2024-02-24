#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x401 - 0x401)
// BlueprintGeneratedClass BP_FlammableFISM_Sappling.BP_FlammableFISM_Sappling_C
class UBP_FlammableFISM_Sappling_C : public UBP_FlammableFISM_ResourceNode_C
{
public:

	static class UClass* StaticClass();
	static class UBP_FlammableFISM_Sappling_C* GetDefaultObj();

	void CombustingExit(class UFlammableInstanceFLOD* Instance);
	void CombustingEnter(class UFlammableInstanceFLOD* Instance);
};

}


