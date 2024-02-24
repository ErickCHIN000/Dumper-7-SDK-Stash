#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x4C8 - 0x4B8)
// BlueprintGeneratedClass BP_PlayerBanner_SkillScreen.BP_PlayerBanner_SkillScreen_C
class ABP_PlayerBanner_SkillScreen_C : public APlayerBanner
{
public:
	class UStaticMeshComponent*                  Pole;                                              // 0x4B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGbxStaticMeshComponent*               GbxStaticMesh;                                     // 0x4C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_PlayerBanner_SkillScreen_C* GetDefaultObj();

	void UserConstructionScript();
};

}


