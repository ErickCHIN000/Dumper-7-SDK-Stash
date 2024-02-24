#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x38 - 0x8)
// ScriptStruct InteractiveFoliageSystem.IFFoliageDataTableRow
struct FIFFoliageDataTableRow : public FTableRowBase
{
public:
	TSoftObjectPtr<class UStaticMesh>            StaticMesh;                                        // 0x8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AActor>                    InteractiveActorClass;                             // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct InteractiveFoliageSystem.SpawnedFoliage
struct FSpawnedFoliage
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UInstancedStaticMeshComponent> InstancedMesh;                                     // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


