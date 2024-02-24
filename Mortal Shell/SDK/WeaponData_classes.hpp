#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x268 - 0x220)
// BlueprintGeneratedClass WeaponData.WeaponData_C
class AWeaponData_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       Scene;                                             // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FWeaponPart>                   WeaponParts;                                       // 0x230(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FMaterialSet>                  MaterialSets;                                      // 0x240(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FWeaponType>                   WeaponTypes;                                       // 0x250(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UChildActorComponent*                  ParentComponent_0;                                 // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AWeaponData_C* GetDefaultObj();

	void Initiate_SelfMinusDestruct_Sequence();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_WeaponData(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue);
};

}


