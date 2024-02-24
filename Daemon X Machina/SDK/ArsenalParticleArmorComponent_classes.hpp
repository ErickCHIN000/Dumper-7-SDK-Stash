#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x538 - 0x530)
// BlueprintGeneratedClass ArsenalParticleArmorComponent.ArsenalParticleArmorComponent_C
class UArsenalParticleArmorComponent_C : public UTTLArsenalParticleArmorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x530(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UArsenalParticleArmorComponent_C* GetDefaultObj();

	void InitializeArmor();
	void ExecuteUbergraph_ArsenalParticleArmorComponent(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class AArsenalCharacter_C* K2Node_DynamicCast_AsArsenal_Character, bool K2Node_DynamicCast_bSuccess);
};

}


