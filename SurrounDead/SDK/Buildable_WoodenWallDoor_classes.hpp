#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x490 - 0x478)
// BlueprintGeneratedClass Buildable_WoodenWallDoor.Buildable_WoodenWallDoor_C
class ABuildable_WoodenWallDoor_C : public ABuildable_WoodenWall_C
{
public:
	class UChildActorComponent*                  Door2;                                             // 0x478(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  Door1;                                             // 0x480(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Doors;                                             // 0x488(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABuildable_WoodenWallDoor_C* GetDefaultObj();

};

}


