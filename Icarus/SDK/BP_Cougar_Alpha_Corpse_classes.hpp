#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x778 - 0x770)
// BlueprintGeneratedClass BP_Cougar_Alpha_Corpse.BP_Cougar_Alpha_Corpse_C
class ABP_Cougar_Alpha_Corpse_C : public ABP_GOAP_Corpse_C
{
public:
	class UGFurComponent*                        GFur;                                              // 0x770(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Cougar_Alpha_Corpse_C* GetDefaultObj();

	void OnSkinnedStateUpdated();
};

}


