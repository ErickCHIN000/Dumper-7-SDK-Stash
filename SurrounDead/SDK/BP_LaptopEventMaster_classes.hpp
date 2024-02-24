#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2B8 - 0x2A8)
// BlueprintGeneratedClass BP_LaptopEventMaster.BP_LaptopEventMaster_C
class ABP_LaptopEventMaster_C : public ABP_MasterQuestObject_C
{
public:
	FMulticastInlineDelegateProperty_            SpawnEvent;                                        // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class ABP_LaptopEventMaster_C* GetDefaultObj();

	void SpawnEvent__DelegateSignature();
};

}


