#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x350 - 0x350)
// BlueprintGeneratedClass DamageData_NowWeSlass.DamageData_NowWeSlass_C
class UDamageData_NowWeSlass_C : public UOakDamageData
{
public:

	static class UClass* StaticClass();
	static class UDamageData_NowWeSlass_C* GetDefaultObj();

	void OnHitEnemy(class AActor* DamageInstigator, class AActor* DamageCauser, class AActor* DamageTarget, struct FDamageDataEventDetails& Details);
};

}


