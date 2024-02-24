#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x780 - 0x770)
// BlueprintGeneratedClass BP_Bear_Contaminated.BP_Bear_Contaminated_C
class ABP_Bear_Contaminated_C : public ABP_GOAP_Corpse_C
{
public:
	class UNiagaraComponent*                     Niagara;                                           // 0x770(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGFurComponent*                        GFur;                                              // 0x778(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Bear_Contaminated_C* GetDefaultObj();

	void OnSkinnedStateUpdated();
};

}


