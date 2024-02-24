#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3C (0x3FC - 0x3C0)
// BlueprintGeneratedClass LightBrigandSpawner.LightBrigandSpawner_C
class ALightBrigandSpawner_C : public AAdvancedEnemySpawner_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAnimMontage*                          BeforeAggroPose;                                   // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UAnimMontage*                          AggroMontage;                                      // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         FirstAttackIsAmbush_;                              // 0x3D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_109[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMesh*                         SkeletalMesh;                                      // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        BeforeAggroPosePlayRate;                           // 0x3E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        SecondAggroDistance;                               // 0x3EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        AggroNearbyBrigandsRadius;                         // 0x3F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class EBrigandWeapons                   Weapon;                                            // 0x3F4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class EBrigandHelmetMeshes              Helmet;                                            // 0x3F5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         UsePaleSkin_;                                      // 0x3F6(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_10F[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Enemy_Vision_Radius;                               // 0x3F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ALightBrigandSpawner_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_LightBrigandSpawner(int32 EntryPoint);
};

}


