#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x17 (0x3B0 - 0x399)
// BlueprintGeneratedClass BP_ModifierStateBehaviour_SpreadableFire.BP_ModifierStateBehaviour_SpreadableFire_C
class UBP_ModifierStateBehaviour_SpreadableFire_C : public UBP_ModifierStateBehaviour_TickDamage_C
{
public:
	uint8                                        Pad_31D6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UThermalComponent*                     ThermalComponent;                                  // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFlammableComponent*                   FlammableComponent;                                // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ModifierStateBehaviour_SpreadableFire_C* GetDefaultObj();

};

}


