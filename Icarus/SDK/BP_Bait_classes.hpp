#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x788 - 0x774)
// BlueprintGeneratedClass BP_Bait.BP_Bait_C
class ABP_Bait_C : public ABP_DeployableBase_C
{
public:
	uint8                                        Pad_A0B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UFMODAudioComponent*                   FlyAudio;                                          // 0x778(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     NS_Flies1;                                         // 0x780(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Bait_C* GetDefaultObj();

};

}


