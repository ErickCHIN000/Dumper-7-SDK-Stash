#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x780 - 0x778)
// BlueprintGeneratedClass BP_Snow_Striker_Mount_Corpse.BP_Snow_Striker_Mount_Corpse_C
class ABP_Snow_Striker_Mount_Corpse_C : public ABP_GOAP_Corpse_Mount_C
{
public:
	class UGFurComponent*                        GFur;                                              // 0x778(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Snow_Striker_Mount_Corpse_C* GetDefaultObj();

	void IsSkeletonUpdated();
	void OnSkinnedStateUpdated();
};

}

