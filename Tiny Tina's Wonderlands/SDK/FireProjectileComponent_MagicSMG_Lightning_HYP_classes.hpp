#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x998 - 0x990)
// BlueprintGeneratedClass FireProjectileComponent_MagicSMG_Lightning_HYP.FireProjectileComponent_MagicSMG_Lightning_HYP_C
class UFireProjectileComponent_MagicSMG_Lightning_HYP_C : public UFireProjectileComponent_MagicSMG_Lightning_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x990(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UFireProjectileComponent_MagicSMG_Lightning_HYP_C* GetDefaultObj();

	void ResetShotCounter();
	void ExecuteUbergraph_FireProjectileComponent_MagicSMG_Lightning_HYP(int32 EntryPoint, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
};

}


