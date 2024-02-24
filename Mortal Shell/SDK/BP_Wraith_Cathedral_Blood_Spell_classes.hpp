#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x2A8 - 0x2A0)
// BlueprintGeneratedClass BP_Wraith_Cathedral_Blood_Spell.BP_Wraith_Cathedral_Blood_Spell_C
class ABP_Wraith_Cathedral_Blood_Spell_C : public ABP_Wraith_Crypt_CastSpell_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_Wraith_Cathedral_Blood_Spell_C* GetDefaultObj();

	void SoundOnFinish();
	void ExecuteUbergraph_BP_Wraith_Cathedral_Blood_Spell(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable);
};

}


