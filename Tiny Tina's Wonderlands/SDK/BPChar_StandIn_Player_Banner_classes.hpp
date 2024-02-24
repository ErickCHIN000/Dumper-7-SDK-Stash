#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2620 - 0x2610)
// BlueprintGeneratedClass BPChar_StandIn_Player_Banner.BPChar_StandIn_Player_Banner_C
class ABPChar_StandIn_Player_Banner_C : public AOakCharacter_StandIn
{
public:
	class UGbxStaticMeshComponent*               GbxStaticMesh;                                     // 0x2610(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Pole;                                              // 0x2618(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABPChar_StandIn_Player_Banner_C* GetDefaultObj();

	void UserConstructionScript();
};

}


