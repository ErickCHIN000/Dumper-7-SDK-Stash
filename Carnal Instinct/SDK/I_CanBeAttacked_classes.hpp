#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass I_CanBeAttacked.I_CanBeAttacked_C
class II_CanBeAttacked_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class II_CanBeAttacked_C* GetDefaultObj();

	void GetHeadSocket(class FName* SocketName);
	void IsAlive(bool* Result);
	void TakeDamage(struct FF_HitData& HitData, bool* Result, enum class E_AttackResult* ResultType);
};

}


