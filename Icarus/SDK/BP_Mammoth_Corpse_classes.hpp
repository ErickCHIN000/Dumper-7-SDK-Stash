#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x780 - 0x770)
// BlueprintGeneratedClass BP_Mammoth_Corpse.BP_Mammoth_Corpse_C
class ABP_Mammoth_Corpse_C : public ABP_GOAP_Corpse_C
{
public:
	class UGFurComponent*                        GFurLong;                                          // 0x770(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGFurComponent*                        GFur;                                              // 0x778(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Mammoth_Corpse_C* GetDefaultObj();

	void IsSkeletonUpdated(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void OnSkinnedStateUpdated();
};

}


