#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ETimeOfDayState : uint8
{
	None                           = 0,
	Morning                        = 1,
	Day                            = 2,
	Evening                        = 3,
	Night                          = 4,
	ETimeOfDayState_MAX            = 5,
};

enum class ETimeOfDayKeyType : uint8
{
	None                           = 0,
	PropertyKey                    = 1,
	EventKey                       = 2,
	StateKey                       = 3,
	ETimeOfDayKeyType_MAX          = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x38 - 0x0)
// ScriptStruct GbxTimeOfDay.ControlledLight
struct FControlledLight
{
public:
	float                                        IntensityMultiplier;                               // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_46E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ALight*                                LightActor;                                        // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_46F[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// ScriptStruct GbxTimeOfDay.FloatParamLayerCurve
struct FFloatParamLayerCurve
{
public:
	class FName                                  ParamName;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRichCurve                            ValueCurve;                                        // 0x8(0x70)(NativeAccessSpecifierPublic)
	uint8                                        Pad_474[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1D8 (0x1D8 - 0x0)
// ScriptStruct GbxTimeOfDay.VectorParamLayerCurve
struct FVectorParamLayerCurve
{
public:
	class FName                                  ParamName;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRichCurve                            ValueCurve[0x4];                                   // 0x8(0x1C0)(NativeAccessSpecifierPublic)
	uint8                                        Pad_478[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxTimeOfDay.LayerParameterCurves
struct FLayerParameterCurves
{
public:
	TArray<struct FFloatParamLayerCurve>         FloatParams;                                       // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVectorParamLayerCurve>        VectorParams;                                      // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxTimeOfDay.PropertyLayerCurveBase
struct FPropertyLayerCurveBase
{
public:
	class FName                                  ClassName;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PropertyName;                                      // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_481[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x98 - 0x18)
// ScriptStruct GbxTimeOfDay.FloatPropertyLayerCurve
struct FFloatPropertyLayerCurve : public FPropertyLayerCurveBase
{
public:
	uint8                                        Pad_483[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRichCurve                            ValueCurve;                                        // 0x20(0x70)(NativeAccessSpecifierPublic)
	uint8                                        Pad_485[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1D0 (0x1E8 - 0x18)
// ScriptStruct GbxTimeOfDay.ColorPropertyLayerCurve
struct FColorPropertyLayerCurve : public FPropertyLayerCurveBase
{
public:
	uint8                                        Pad_489[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRichCurve                            ValueCurve[0x4];                                   // 0x20(0x1C0)(NativeAccessSpecifierPublic)
	uint8                                        Pad_48C[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1D8 (0x1F0 - 0x18)
// ScriptStruct GbxTimeOfDay.VectorPropertyLayerCurve
struct FVectorPropertyLayerCurve : public FPropertyLayerCurveBase
{
public:
	uint8                                        Pad_491[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRichCurve                            ValueCurve[0x4];                                   // 0x20(0x1C0)(NativeAccessSpecifierPublic)
	uint8                                        Pad_492[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1D8 (0x1F0 - 0x18)
// ScriptStruct GbxTimeOfDay.Vector4PropertyLayerCurve
struct FVector4PropertyLayerCurve : public FPropertyLayerCurveBase
{
public:
	uint8                                        Pad_497[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRichCurve                            ValueCurve[0x4];                                   // 0x20(0x1C0)(NativeAccessSpecifierPublic)
	uint8                                        Pad_498[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct GbxTimeOfDay.LayerPropertyCurves
struct FLayerPropertyCurves
{
public:
	TArray<struct FFloatPropertyLayerCurve>      FloatProps;                                        // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVectorPropertyLayerCurve>     VectorProps;                                       // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FColorPropertyLayerCurve>      ColorProps;                                        // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector4PropertyLayerCurve>    Vector4Props;                                      // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GbxTimeOfDay.TimeOfDayEvent
struct FTimeOfDayEvent
{
public:
	float                                        EventTime;                                         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  EventName;                                         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETimeOfDayState                   State;                                             // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A7[0x17];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// ScriptStruct GbxTimeOfDay.LayerCurveData
struct FLayerCurveData
{
public:
	class FName                                  LayerName;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLayerParameterCurves                 ParameterLayerCurves;                              // 0x8(0x20)(NativeAccessSpecifierPublic)
	struct FLayerPropertyCurves                  PropertyLayerCurves;                               // 0x28(0x40)(NativeAccessSpecifierPublic)
	TArray<struct FTimeOfDayEvent>               LayerEvents;                                       // 0x68(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct GbxTimeOfDay.TimeOfDayCycleInstanceData
struct FTimeOfDayCycleInstanceData
{
public:
	class UTimeOfDayCycle*                       ParentCycle;                                       // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideCycleLength;                              // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B9[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OverrideCycleLength;                               // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLayerCurveData>               LayerCurveData;                                    // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4BC[0x80];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxTimeOfDay.TODCollectionParam
struct FTODCollectionParam
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 ID;                                                // 0x8(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x18 - 0x18)
// ScriptStruct GbxTimeOfDay.TODVectorCollectionParam
struct FTODVectorCollectionParam : public FTODCollectionParam
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct GbxTimeOfDay.TODScalarCollectionParam
struct FTODScalarCollectionParam : public FTODCollectionParam
{
public:
};

// 0x18 (0x30 - 0x18)
// ScriptStruct GbxTimeOfDay.TODCollectionVector4Parameter
struct FTODCollectionVector4Parameter : public FCollectionParameterBase
{
public:
	uint8                                        Pad_4C1[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              DefaultValue;                                      // 0x20(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxTimeOfDay.PlanetCycleInfo
struct FPlanetCycleInfo
{
public:
	class FName                                  PlanetName;                                        // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CycleLength;                                       // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastCachedTime;                                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxTimeOfDay.TimeOfDaySaveGameData
struct FTimeOfDaySaveGameData
{
public:
	TArray<struct FPlanetCycleInfo>              PlanetCycleInfo;                                   // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class FName                                  PlanetCycle;                                       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


