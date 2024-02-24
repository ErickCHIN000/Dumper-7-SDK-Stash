#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x7E8 - 0x7E8)
// BlueprintGeneratedClass BP_Bramble.BP_Bramble_C
class ABP_Bramble_C : public ABP_Spike_Trap_Base_C
{
public:

	static class UClass* StaticClass();
	static class ABP_Bramble_C* GetDefaultObj();

	void DoDamage(int32 DamageAmount, class AActor* Defender, const struct FModifier& K2Node_MakeStruct_Modifier, int32 CallFunc_AddModifierState_ReturnValue);
};

}


