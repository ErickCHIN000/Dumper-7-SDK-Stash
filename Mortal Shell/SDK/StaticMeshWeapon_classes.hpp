#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x230 - 0x220)
// BlueprintGeneratedClass StaticMeshWeapon.StaticMeshWeapon_C
class AStaticMeshWeapon_C : public AActor
{
public:
	class UStaticMeshComponent*                  WeaponMesh;                                        // 0x220(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AStaticMeshWeapon_C* GetDefaultObj();

};

}


