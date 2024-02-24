#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2F0 - 0x2E0)
// BlueprintGeneratedClass BP_OreDeposit.BP_OreDeposit_C
class ABP_OreDeposit_C : public AResourceDeposit
{
public:
	class UIcarusMapIconComponent*               IcarusMapIcon;                                     // 0x2E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x2E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_OreDeposit_C* GetDefaultObj();

	void IsDepleted(bool* Depleted, bool CallFunc_LessEqual_IntInt_ReturnValue);
};

}


