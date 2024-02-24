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

// 0x50 (0x50 - 0x0)
// ScriptStruct Goat2AnimNodes.GGRandomPlayerSequenceEntry
struct FGGRandomPlayerSequenceEntry
{
public:
	class UAnimSequence*                         Sequence;                                          // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChanceToPlay;                                      // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinLoopCount;                                      // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxLoopCount;                                      // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinPlayRate;                                       // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxPlayRate;                                       // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8C4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAlphaBlend                           BlendIn;                                           // 0x20(0x30)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2AnimNodes.SequenceEntryPinArray
struct FSequenceEntryPinArray
{
public:
	TArray<struct FGGRandomPlayerSequenceEntry>  Entries;                                           // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x70 (0x80 - 0x10)
// ScriptStruct Goat2AnimNodes.GGAnimNode_RandomPlayerWithPin
struct FGGAnimNode_RandomPlayerWithPin : public FAnimNode_Base
{
public:
	bool                                         bShuffleMode;                                      // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8CF[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PlayRateOverride;                                  // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSequenceEntryPinArray                PinArray;                                          // 0x18(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_8D5[0x58];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


