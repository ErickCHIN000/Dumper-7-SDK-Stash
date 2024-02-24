#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// Function GbxDynamicRoom.DynamicRoomBase.VisibleForAllPlayers
struct ADynamicRoomBase_VisibleForAllPlayers_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxDynamicRoom.DynamicRoomBase.SetRoomVisiblity
struct ADynamicRoomBase_SetRoomVisiblity_Params
{
public:
	bool                                         bVisible;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxDynamicRoom.DynamicRoomBase.OnRep_RoomInfoToLoad
struct ADynamicRoomBase_OnRep_RoomInfoToLoad_Params
{
public:
	struct FDynamicRoomReplicationInfo           OldRoomInfoToLoad;                                 // 0x0(0x20)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxDynamicRoom.DynamicRoomBase.IsRoomSet
struct ADynamicRoomBase_IsRoomSet_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxDynamicRoom.DynamicRoomBase.IsRoomLoaded
struct ADynamicRoomBase_IsRoomLoaded_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxDynamicRoom.DynamicRoomBase.InstanceRoom
struct ADynamicRoomBase_InstanceRoom_Params
{
public:
	class UDynamicRoomBaseData*                  RoomToLoad;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CustomData;                                        // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitiallyVisible;                                 // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_226[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxDynamicRoom.DynamicRoomBase.GetPlayersInLevel
struct ADynamicRoomBase_GetPlayersInLevel_Params
{
public:
	TArray<class AGbxCharacter*>                 Players;                                           // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxDynamicRoom.DynamicRoomBase.GetLoadedRoomLevels
struct ADynamicRoomBase_GetLoadedRoomLevels_Params
{
public:
	TArray<class ULevel*>                        Levels;                                            // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxDynamicRoom.DynamicRoomBase.GetCurrentRoomData
struct ADynamicRoomBase_GetCurrentRoomData_Params
{
public:
	class UDynamicRoomBaseData*                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxDynamicRoom.DynamicRoomBase.GetAvailableRoomData
struct ADynamicRoomBase_GetAvailableRoomData_Params
{
public:
	TArray<class UDynamicRoomBaseData*>          AvailableRooms;                                    // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxDynamicRoom.DynamicRoomActorData.HandleDynamicRoomActorSpawned
struct UDynamicRoomActorData_HandleDynamicRoomActorSpawned_Params
{
public:
	class AActor*                                SpawnedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InstanceIndex;                                     // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_283[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


