#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EPlatform : uint8
{
	Windows                        = 0,
	PS4                            = 1,
	XBoxOne                        = 2,
	PS5                            = 3,
	XBoxSeriesX                    = 4,
	EPlatform_MAX                  = 5,
};

enum class ERumbleSlot : uint8
{
	LeftSmall                      = 0,
	LeftLarge                      = 1,
	RightSmall                     = 2,
	RightLarge                     = 3,
	ERumbleSlot_MAX                = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x80 - 0x0)
// ScriptStruct GbxFeedback.RumbleSlotMapping
struct FRumbleSlotMapping
{
public:
	enum class ERumbleSlot                       MapSlotTo;                                         // 0x0(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_593[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    MappingScalar;                                     // 0x8(0x78)(Edit, Config, NativeAccessSpecifierPublic)
};

// 0x200 (0x200 - 0x0)
// ScriptStruct GbxFeedback.RumbleRemap
struct FRumbleRemap
{
public:
	struct FRumbleSlotMapping                    LeftSmallScalar;                                   // 0x0(0x80)(Edit, Config, NativeAccessSpecifierPublic)
	struct FRumbleSlotMapping                    LeftLargeScalar;                                   // 0x80(0x80)(Edit, Config, NativeAccessSpecifierPublic)
	struct FRumbleSlotMapping                    RightSmallScalar;                                  // 0x100(0x80)(Edit, Config, NativeAccessSpecifierPublic)
	struct FRumbleSlotMapping                    RightLargeScalar;                                  // 0x180(0x80)(Edit, Config, NativeAccessSpecifierPublic)
};

// 0x210 (0x210 - 0x0)
// ScriptStruct GbxFeedback.RemapByConsole
struct FRemapByConsole
{
public:
	class FString                                ConsoleName;                                       // 0x0(0x10)(Edit, ZeroConstructor, Config, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRumbleRemap                          RemapValues;                                       // 0x10(0x200)(Edit, Config, NativeAccessSpecifierPublic)
};

}


