#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x9F0 - 0x9E4)
// BlueprintGeneratedClass BPWeap_DAL_BaseWeapon.BPWeap_DAL_BaseWeapon_C
class ABPWeap_DAL_BaseWeapon_C : public ABPWeap_BaseWeapon_C
{
public:
	int32                                        BurstSize;                                         // 0x9E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BurstFireRate;                                     // 0x9E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SemiFireRate;                                      // 0x9EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABPWeap_DAL_BaseWeapon_C* GetDefaultObj();

	void UserConstructionScript();
};

}


