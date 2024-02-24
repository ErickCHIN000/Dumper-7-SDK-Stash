#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x268 - 0x230)
// Class InteractiveFoliageSystem.IFInteractiveFoliageActor
class AIFInteractiveFoliageActor : public AActor
{
public:
	TArray<enum class ECollisionChannel>         UnrootWhenOverlappedBy;                            // 0x230(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class UPhysicsAsset*                         UnrootedPhysicsAsset;                              // 0x240(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  CollisionProfileWhenrUnrooted;                     // 0x248(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_290[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMeshComponent*                Mesh;                                              // 0x258(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCapsuleComponent*                     Capsule;                                           // 0x260(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AIFInteractiveFoliageActor* GetDefaultObj();

};

// 0x80 (0x130 - 0xB0)
// Class InteractiveFoliageSystem.IFInvokerComponent
class UIFInvokerComponent : public UActorComponent
{
public:
	float                                        CheckDistance;                                     // 0xB0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RemoveInteractiveFoliageDistance;                  // 0xB4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ETraceTypeQuery                   TraceChannel;                                      // 0xB8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_298[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            FoliageDataTable;                                  // 0xC0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class UStaticMesh*, TSubclassOf<class AActor>> FoliageMap;                                        // 0xC8(0x50)(UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<struct FSpawnedFoliage>               SpawnedFoliage;                                    // 0x118(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_29B[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UIFInvokerComponent* GetDefaultObj();

};

}


