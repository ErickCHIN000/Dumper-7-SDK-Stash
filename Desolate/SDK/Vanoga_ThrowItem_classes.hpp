#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0x438 - 0x429)
// BlueprintGeneratedClass Vanoga_ThrowItem.Vanoga_ThrowItem_C
class AVanoga_ThrowItem_C : public AGenericNPC_ThrowItem_C
{
public:
	uint8                                        Pad_ACA[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              ParticleSystem;                                    // 0x430(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AVanoga_ThrowItem_C* GetDefaultObj();

};

}


