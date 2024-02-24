#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ECCCollisionPart : uint8
{
	NONE                           = 0,
	PrimaryItem                    = 1,
	SecondaryItem                  = 2,
	BothHandItems                  = 3,
	LeftArm                        = 4,
	RightArm                       = 5,
	LeftLeg                        = 6,
	RightLeg                       = 7,
	Custom1                        = 8,
	Custom2                        = 9,
	Custom3                        = 10,
	ECCCollisionPart_MAX           = 11,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x28 - 0x0)
// ScriptStruct CombatComponents.CCCollidingComponent
struct FCCCollidingComponent
{
public:
	class UPrimitiveComponent*                   Component;                                         // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          Sockets;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        HitActors;                                         // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

}


