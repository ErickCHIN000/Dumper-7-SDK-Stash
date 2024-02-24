#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x288 - 0x280)
// BlueprintGeneratedClass StaticFieldProjectile.StaticFieldProjectile_C
class AStaticFieldProjectile_C : public ABaseAnomalyProjectile_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AStaticFieldProjectile_C* GetDefaultObj();

	void MakeExplodeDamage();
	void ExecuteUbergraph_StaticFieldProjectile(int32 EntryPoint);
};

}


