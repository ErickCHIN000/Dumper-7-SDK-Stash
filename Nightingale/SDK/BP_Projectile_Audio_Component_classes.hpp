#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0xF0 - 0xD0)
// BlueprintGeneratedClass BP_Projectile_Audio_Component.BP_Projectile_Audio_Component_C
class UBP_Projectile_Audio_Component_C : public UProjectileAudioComponent
{
public:
	class UAkComponent*                          OwnerAkComponent_0;                                // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         Active;                                            // 0xD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4BE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UAkSwitchValue*>                SwitchesToLoad;                                    // 0xE0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBP_Projectile_Audio_Component_C* GetDefaultObj();

};

}


