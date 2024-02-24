#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_AIInterface.BP_AIInterface_C
class IBP_AIInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBP_AIInterface_C* GetDefaultObj();

	void AI_Block(enum class E_BlockType Block_Type, class AActor* Block_Attacker);
	void AI_Camera_Activate(bool Activate);
	void AI_Animation_Switch(enum class E_AIBehaviour Behaviour);
	void AI_End_Alert();
	void AI_Alert(class AActor* Alert_Actor);
	void Turret_End_Reload();
	void Turret_Start_Reload();
	void Turret_Idle_Stop();
	void Turret_Idle_Start();
	void Turret_Destroyed_Effect();
	void Alert_Actor_Defenders(class AActor* Attacked, class AActor* Attacker);
	void Actor_Attack_Target(class AActor** Attack_Target);
	void Actor_Aim_Focus(class AActor* Instigator);
	void AI_Dead();
	void AI_Can_Interact_(bool* Can_Interact);
	void AI_Is_Dead_(bool* Dead);
};

}


