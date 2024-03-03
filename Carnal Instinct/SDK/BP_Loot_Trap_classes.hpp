#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x270 - 0x268)
// BlueprintGeneratedClass BP_Loot_Trap.BP_Loot_Trap_C
class ABP_Loot_Trap_C : public ABP_Loot_Box_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x268(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)

	static class UClass* StaticClass();
	static class ABP_Loot_Trap_C* GetDefaultObj();

	void Interaction();
	void End_Interaction();
	void Remove_Interaction();
	void ShowJar();
	void Hide_Jar();
	void ExecuteUbergraph_BP_Loot_Trap(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, float CallFunc_PlayAnimMontage_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
};

}


