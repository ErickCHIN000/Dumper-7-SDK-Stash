#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass INT_AnimBPPlayer.INT_AnimBPPlayer_C
class IINT_AnimBPPlayer_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IINT_AnimBPPlayer_C* GetDefaultObj();

	void DeathState(bool Dead);
	void CombatState(int32 BlendSpace);
};

}


