#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0x520 - 0x511)
// BlueprintGeneratedClass SpellActor_Eruption_Mod_04_Self.SpellActor_Eruption_Mod_04_Self_C
class ASpellActor_Eruption_Mod_04_Self_C : public ASpellActor_Eruption_Mod_04_C
{
public:
	uint8                                        Pad_4055[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x518(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ASpellActor_Eruption_Mod_04_Self_C* GetDefaultObj();

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_SpellActor_Eruption_Mod_04_Self(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasAuthority_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
};

}


