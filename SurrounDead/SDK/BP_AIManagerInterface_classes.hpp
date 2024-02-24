#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_AIManagerInterface.BP_AIManagerInterface_C
class IBP_AIManagerInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBP_AIManagerInterface_C* GetDefaultObj();

	void Return_AI_Manager(class ABP_AIManager_C** AI_Manager);
	void Return_AI_Manager_Settings(struct FS_AIOptimization* AI_Settings);
};

}


