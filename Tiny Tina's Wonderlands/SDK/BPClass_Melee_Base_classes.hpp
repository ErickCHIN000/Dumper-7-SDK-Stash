#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x5E9 - 0x5D8)
// BlueprintGeneratedClass BPClass_Melee_Base.BPClass_Melee_Base_C
class ABPClass_Melee_Base_C : public AMeleeWeapon
{
public:
	class USkeletalMeshComponent*                Mesh3rd;                                           // 0x5D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UManufacturerData*                     Manufacturer;                                      // 0x5E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bInitialized;                                      // 0x5E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABPClass_Melee_Base_C* GetDefaultObj();

	void UserConstructionScript();
};

}


