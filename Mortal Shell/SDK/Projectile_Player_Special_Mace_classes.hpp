#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x370 - 0x368)
// BlueprintGeneratedClass Projectile_Player_Special_Mace.Projectile_Player_Special_Mace_C
class AProjectile_Player_Special_Mace_C : public AProjectile_Player_Special_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x368(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AProjectile_Player_Special_Mace_C* GetDefaultObj();

	void SpecialEffect();
	void ExecuteUbergraph_Projectile_Player_Special_Mace(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_ShouldBurn_ReturnValue);
};

}


