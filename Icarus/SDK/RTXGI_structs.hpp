#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EDDGISkyLightType : int32
{
	None                           = 0,
	Raster                         = 1,
	RayTracing                     = 2,
	EDDGISkyLightType_MAX          = 3,
};

enum class EDDGIRaysPerProbe : int32
{
	N144                           = 144,
	N288                           = 288,
	N432                           = 432,
	N576                           = 576,
	N720                           = 720,
	N864                           = 864,
	N1008                          = 1008,
	EDDGIRaysPerProbe_MAX          = 1009,
};

enum class EDDGIProbesVisulizationMode : uint8
{
	Off                            = 0,
	Irrad                          = 1,
	Distr                          = 2,
	Distg                          = 3,
	EDDGIProbesVisulizationMode_MAX = 4,
};

enum class EDDGIDistanceBits : uint8
{
	N16                            = 0,
	N32                            = 1,
	EDDGIDistanceBits_MAX          = 2,
};

enum class EDDGIIrradianceBits : uint8
{
	N10                            = 0,
	N32                            = 1,
	EDDGIIrradianceBits_MAX        = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0xC - 0x0)
// ScriptStruct RTXGI.ProbeRelocation
struct FProbeRelocation
{
public:
	bool                                         AutomaticProbeRelocation;                          // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_802[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ProbeMinFrontfaceDistance;                         // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProbeBackfaceThreshold;                            // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


