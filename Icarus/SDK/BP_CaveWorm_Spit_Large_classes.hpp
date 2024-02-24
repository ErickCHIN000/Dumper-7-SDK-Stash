#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x590 - 0x578)
// BlueprintGeneratedClass BP_CaveWorm_Spit_Large.BP_CaveWorm_Spit_Large_C
class ABP_CaveWorm_Spit_Large_C : public ASkeletalItem
{
public:
	uint8                                        Pad_5B10[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_IcarusPointLight_C*                BP_IcarusPointLight;                               // 0x580(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     NS_Sandworm_SpitProjectile_FX;                     // 0x588(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_CaveWorm_Spit_Large_C* GetDefaultObj();

};

}


