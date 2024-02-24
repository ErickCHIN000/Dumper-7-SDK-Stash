#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EFloatArrayToIntArrayFunctionEnum : uint8
{
	Dataflow_FloatToInt_Function_Floor = 0,
	Dataflow_FloatToInt_Function_Ceil = 1,
	Dataflow_FloatToInt_Function_Round = 2,
	Dataflow_FloatToInt_Function_Truncate = 3,
	Dataflow_FloatToInt_NonZeroToIndex = 4,
	Dataflow_FloatToInt_ZeroToIndex = 5,
	Dataflow_Max                   = 6,
};

enum class ECompareOperation1Enum : uint8
{
	Dataflow_Compare_Equal         = 0,
	Dataflow_Compare_Smaller       = 1,
	Dataflow_Compare_SmallerOrEqual = 2,
	Dataflow_Compare_Greater       = 3,
	Dataflow_Compare_GreaterOrEqual = 4,
	Dataflow_Max                   = 5,
};

enum class EStatisticsOperationEnum : uint8
{
	Dataflow_EStatisticsOperationEnum_Min = 0,
	Dataflow_EStatisticsOperationEnum_Max = 1,
	Dataflow_EStatisticsOperationEnum_Mean = 2,
	Dataflow_EStatisticsOperationEnum_Median = 3,
	Dataflow_EStatisticsOperationEnum_Mode = 4,
	Dataflow_EStatisticsOperationEnum_Sum = 5,
	Dataflow_Max                   = 6,
};

enum class EDataflowFieldFalloffType : uint8
{
	Dataflow_FieldFalloffType_None = 0,
	Dataflow_FieldFalloffType_Linear = 1,
	Dataflow_FieldFalloffType_Inverse = 2,
	Dataflow_FieldFalloffType_Squared = 3,
	Dataflow_FieldFalloffType_Logarithmic = 4,
	Dataflow_Max                   = 5,
};

enum class EDataflowSetMaskConditionType : uint8
{
	Dataflow_SetMaskConditionType_Always = 0,
	Dataflow_SetMaskConditionType_IFF_NOT_Interior = 1,
	Dataflow_SetMaskConditionType_IFF_NOT_Exterior = 2,
	Dataflow_Max                   = 3,
};

enum class EDataflowWaveFunctionType : uint8
{
	Dataflow_WaveFunctionType_Cosine = 0,
	Dataflow_WaveFunctionType_Gaussian = 1,
	Dataflow_WaveFunctionType_Falloff = 2,
	Dataflow_WaveFunctionType_Decay = 3,
	Dataflow_Max                   = 4,
};

enum class EDataflowFloatFieldOperationType : uint8
{
	Dataflow_FloatFieldOperationType_Multiply = 0,
	Dataflow_FloatFieldFalloffType_Divide = 1,
	Dataflow_FloatFieldFalloffType_Add = 2,
	Dataflow_FloatFieldFalloffType_Substract = 3,
	Dataflow_FloatFieldFalloffType_Min = 4,
	Dataflow_FloatFieldFalloffType_Max = 5,
	Dataflow_Max                   = 6,
};

enum class EDataflowVectorFieldOperationType : uint8
{
	Dataflow_VectorFieldOperationType_Multiply = 0,
	Dataflow_VectorFieldFalloffType_Divide = 1,
	Dataflow_VectorFieldFalloffType_Add = 2,
	Dataflow_VectorFieldFalloffType_Substract = 3,
	Dataflow_VectorFieldFalloffType_CrossProduct = 4,
	Dataflow_Max                   = 5,
};

enum class ESetMaterialOperationTypeEnum : uint8
{
	Dataflow_SetMaterialOperationType_Add = 0,
	Dataflow_SetMaterialOperationType_Insert = 1,
	Dataflow_Max                   = 2,
};

enum class EConvexOverlapRemovalMethodEnum : uint8
{
	Dataflow_EConvexOverlapRemovalMethod_None = 0,
	Dataflow_EConvexOverlapRemovalMethod_All = 1,
	Dataflow_EConvexOverlapRemovalMethod_OnlyClusters = 2,
	Dataflow_EConvexOverlapRemovalMethod_OnlyClustersVsClusters = 3,
	Dataflow_Max                   = 4,
};

enum class EClusterSizeMethodEnum : uint8
{
	Dataflow_ClusterSizeMethod_ByNumber = 0,
	Dataflow_ClusterSizeMethod_ByFractionOfInput = 1,
	Dataflow_ClusterSizeMethod_BySize = 2,
	Dataflow_ClusterSizeMethod_ByGrid = 3,
	Dataflow_Max                   = 4,
};

enum class EFloatToIntFunctionEnum : uint8
{
	Dataflow_FloatToInt_Function_Floor = 0,
	Dataflow_FloatToInt_Function_Ceil = 1,
	Dataflow_FloatToInt_Function_Round = 2,
	Dataflow_FloatToInt_Function_Truncate = 3,
	Dataflow_Max                   = 4,
};

enum class EVisibiltyOptionsEnum : uint8
{
	Dataflow_VisibilityOptions_Visible = 0,
	Dataflow_VisibilityOptions_Invisible = 1,
	Dataflow_Max                   = 2,
};

enum class EMakeBoxDataTypeEnum : uint8
{
	Dataflow_MakeBox_DataType_MinMax = 0,
	Dataflow_MakeBox_DataType_CenterSize = 1,
	Dataflow_Max                   = 2,
};

enum class EMathConstantsEnum : uint8
{
	Dataflow_MathConstants_Pi      = 0,
	Dataflow_MathConstants_HalfPi  = 1,
	Dataflow_MathConstants_TwoPi   = 2,
	Dataflow_MathConstants_FourPi  = 3,
	Dataflow_MathConstants_InvPi   = 4,
	Dataflow_MathConstants_InvTwoPi = 5,
	Dataflow_MathConstants_Sqrt2   = 6,
	Dataflow_MathConstants_InvSqrt2 = 7,
	Dataflow_MathConstants_Sqrt3   = 8,
	Dataflow_MathConstants_InvSqrt3 = 9,
	Dataflow_FloatToInt_Function_E = 10,
	Dataflow_FloatToInt_Function_Gamma = 11,
	Dataflow_FloatToInt_Function_GoldenRatio = 12,
	Dataflow_FloatToInt_Function_ZeroTolerance = 13,
	Dataflow_Max                   = 14,
};

enum class EMeshBooleanOperationEnum : uint8
{
	Dataflow_MeshBoolean_Union     = 0,
	Dataflow_MeshBoolean_Intersect = 1,
	Dataflow_MeshBoolean_Difference = 2,
	Dataflow_Max                   = 3,
};

enum class EBoxLengthMeasurementMethod : uint8
{
	XAxis                          = 0,
	YAxis                          = 1,
	ZAxis                          = 2,
	ShortestAxis                   = 3,
	LongestAxis                    = 4,
	Diagonal                       = 5,
	EBoxLengthMeasurementMethod_MAX = 6,
};

enum class ERotationOrderEnum : uint8
{
	Dataflow_RotationOrder_XYZ     = 0,
	Dataflow_RotationOrder_YZX     = 1,
	Dataflow_RotationOrder_ZXY     = 2,
	Dataflow_RotationOrder_XZY     = 3,
	Dataflow_RotationOrder_YXZ     = 4,
	Dataflow_RotationOrder_ZYX     = 5,
	Dataflow_Max                   = 6,
};

enum class ECompareOperationEnum : uint8
{
	Dataflow_Compare_Equal         = 0,
	Dataflow_Compare_Smaller       = 1,
	Dataflow_Compare_SmallerOrEqual = 2,
	Dataflow_Compare_Greater       = 3,
	Dataflow_Compare_GreaterOrEqual = 4,
	Dataflow_Max                   = 5,
};

enum class EAnchorStateEnum : uint8
{
	Dataflow_AnchorState_Anchored  = 0,
	Dataflow_AnchorState_NotAnchored = 1,
	Dataflow_Max                   = 2,
};

enum class EProximityMethodEnum : uint8
{
	Dataflow_ProximityMethod_Precise = 0,
	Dataflow_ProximityMethod_ConvexHull = 1,
	Dataflow_Max                   = 2,
};

enum class EProximityContactFilteringMethodEnum : uint8
{
	Dataflow_ProximityContactFilteringMethod_ProjectedBoundsOverlap = 0,
	Dataflow_ProximityContactFilteringMethod_ConvexHullSharp = 1,
	Dataflow_ProximityContactFilteringMethod_ConvexHullArea = 2,
	Dataflow_Max                   = 3,
};

enum class EConnectionContactAreaMethodEnum : uint8
{
	Dataflow_ConnectionContactAreaMethod_None = 0,
	Dataflow_ProximityContactFilteringMethod_ConvexHullArea = 1,
	Dataflow_Max                   = 2,
};

enum class EStandardGroupNameEnum : uint8
{
	Dataflow_EStandardGroupNameEnum_Transform = 0,
	Dataflow_EStandardGroupNameEnum_Geometry = 1,
	Dataflow_EStandardGroupNameEnum_Faces = 2,
	Dataflow_EStandardGroupNameEnum_Vertices = 3,
	Dataflow_EStandardGroupNameEnum_Material = 4,
	Dataflow_EStandardGroupNameEnum_Breaking = 5,
	Dataflow_EStandardGroupNameEnum_Custom = 6,
	Dataflow_Max                   = 7,
};

enum class ECustomAttributeTypeEnum : uint8
{
	Dataflow_CustomAttributeType_UInt8 = 0,
	Dataflow_CustomAttributeType_Int32 = 1,
	Dataflow_CustomAttributeType_Float = 2,
	Dataflow_CustomAttributeType_Double = 3,
	Dataflow_CustomAttributeType_Bool = 4,
	Dataflow_CustomAttributeType_String = 5,
	Dataflow_CustomAttributeType_Vector2f = 6,
	Dataflow_CustomAttributeType_Vector3f = 7,
	Dataflow_CustomAttributeType_Vector3d = 8,
	Dataflow_CustomAttributeType_Vector4f = 9,
	Dataflow_CustomAttributeType_LinearColor = 10,
	Dataflow_CustomAttributeType_Transform = 11,
	Dataflow_CustomAttributeType_Quat4f = 12,
	Dataflow_CustomAttributeType_Box = 13,
	Dataflow_CustomAttributeType_Guid = 14,
	Dataflow_CustomAttributeType_Int32Set = 15,
	Dataflow_CustomAttributeType_Int32Array = 16,
	Dataflow_CustomAttributeType_IntVector = 17,
	Dataflow_CustomAttributeType_IntVector2 = 18,
	Dataflow_CustomAttributeType_IntVector4 = 19,
	Dataflow_CustomAttributeType_IntVector2Array = 20,
	Dataflow_CustomAttributeType_FloatArray = 21,
	Dataflow_CustomAttributeType_Vector2fArray = 22,
	Dataflow_CustomAttributeType_FVector3fArray = 23,
	Dataflow_Max                   = 24,
};

enum class ESetOperationEnum : uint8
{
	Dataflow_SetOperation_AND      = 0,
	Dataflow_SetOperation_OR       = 1,
	Dataflow_SetOperation_XOR      = 2,
	Dataflow_Max                   = 3,
};

enum class ERangeSettingEnum : uint8
{
	Dataflow_RangeSetting_InsideRange = 0,
	Dataflow_RangeSetting_OutsideRange = 1,
	Dataflow_Max                   = 2,
};

enum class ESelectSubjectTypeEnum : uint8
{
	Dataflow_SelectSubjectType_Vertices = 0,
	Dataflow_SelectSubjectType_BoundingBox = 1,
	Dataflow_SelectSubjectType_Centroid = 2,
	Dataflow_Max                   = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GetFloatArrayElementDataflowNode
struct FGetFloatArrayElementDataflowNode : public FDataflowNode
{
public:
	int32                                        Index;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1518[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                FloatArray;                                        // 0xF0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        FloatValue;                                        // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_151C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x110 - 0xE8)
// ScriptStruct GeometryCollectionNodes.FloatArrayToIntArrayDataflowNode
struct FFloatArrayToIntArrayDataflowNode : public FDataflowNode
{
public:
	enum class EFloatArrayToIntArrayFunctionEnum Function;                                          // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_152C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                FloatArray;                                        // 0xF0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                IntArray;                                          // 0x100(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x118 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GetArrayElementDataflowNode
struct FGetArrayElementDataflowNode : public FDataflowNode
{
public:
	int32                                        Index;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_153B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       Points;                                            // 0xF0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector                               Point;                                             // 0x100(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x130 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GetNumArrayElementsDataflowNode
struct FGetNumArrayElementsDataflowNode : public FDataflowNode
{
public:
	TArray<float>                                FloatArray;                                        // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                IntArray;                                          // 0xF8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       Points;                                            // 0x108(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector3f>                     Vector3fArray;                                     // 0x118(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        NumElements;                                       // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_155C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x118 - 0xE8)
// ScriptStruct GeometryCollectionNodes.BoolArrayToFaceSelectionDataflowNode
struct FBoolArrayToFaceSelectionDataflowNode : public FDataflowNode
{
public:
	TArray<bool>                                 BoolAttributeData;                                 // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FDataflowFaceSelection                FaceSelection;                                     // 0xF8(0x20)(NativeAccessSpecifierPublic)
};

// 0x38 (0x120 - 0xE8)
// ScriptStruct GeometryCollectionNodes.FloatArrayToVertexSelectionDataflowNode
struct FFloatArrayToVertexSelectionDataflowNode : public FDataflowNode
{
public:
	TArray<float>                                FloatArray;                                        // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ECompareOperation1Enum            Operation;                                         // 0xF8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_156F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Threshold;                                         // 0xFC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataflowVertexSelection              VertexSelection;                                   // 0x100(0x20)(NativeAccessSpecifierPublic)
};

// 0x48 (0x130 - 0xE8)
// ScriptStruct GeometryCollectionNodes.FloatArrayNormalizeDataflowNode
struct FFloatArrayNormalizeDataflowNode : public FDataflowNode
{
public:
	TArray<float>                                InFloatArray;                                      // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FDataflowVertexSelection              Selection;                                         // 0xF8(0x20)(NativeAccessSpecifierPublic)
	float                                        MinRange;                                          // 0x118(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxRange;                                          // 0x11C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                OutFloatArray;                                     // 0x120(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x130 - 0xE8)
// ScriptStruct GeometryCollectionNodes.VectorArrayNormalizeDataflowNode
struct FVectorArrayNormalizeDataflowNode : public FDataflowNode
{
public:
	TArray<struct FVector>                       InVectorArray;                                     // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FDataflowVertexSelection              Selection;                                         // 0xF8(0x20)(NativeAccessSpecifierPublic)
	float                                        Magnitude;                                         // 0x118(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1598[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       OutVectorArray;                                    // 0x120(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x118 - 0xE8)
// ScriptStruct GeometryCollectionNodes.UnionIntArraysDataflowNode
struct FUnionIntArraysDataflowNode : public FDataflowNode
{
public:
	TArray<int32>                                InArray1;                                          // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                InArray2;                                          // 0xF8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                OutArray;                                          // 0x108(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x100 - 0xE8)
// ScriptStruct GeometryCollectionNodes.RemoveFloatArrayElementDataflowNode
struct FRemoveFloatArrayElementDataflowNode : public FDataflowNode
{
public:
	int32                                        Index;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPreserveOrder;                                    // 0xEC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15AB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                FloatArray;                                        // 0xF0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x130 - 0xE8)
// ScriptStruct GeometryCollectionNodes.FloatArrayComputeStatisticsDataflowNode
struct FFloatArrayComputeStatisticsDataflowNode : public FDataflowNode
{
public:
	TArray<float>                                FloatArray;                                        // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FDataflowTransformSelection           TransformSelection;                                // 0xF8(0x20)(NativeAccessSpecifierPublic)
	enum class EStatisticsOperationEnum          OperationName;                                     // 0x118(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15C1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Value;                                             // 0x11C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                Indices;                                           // 0x120(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GeometryCollectionTerminalDataflowNode
struct FGeometryCollectionTerminalDataflowNode : public FDataflowTerminalNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	TArray<class UMaterial*>                     Materials;                                         // 0x198(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FGeometryCollectionAutoInstanceMesh> InstancedMeshes;                                   // 0x1A8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GetGeometryCollectionAssetDataflowNode
struct FGetGeometryCollectionAssetDataflowNode : public FDataflowNode
{
public:
	class UGeometryCollection*                   Asset;                                             // 0xE8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x100 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GetGeometryCollectionSourcesDataflowNode
struct FGetGeometryCollectionSourcesDataflowNode : public FDataflowNode
{
public:
	class UGeometryCollection*                   Asset;                                             // 0xE8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGeometryCollectionSource>     Sources;                                           // 0xF0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xE0 (0x1C8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CreateGeometryCollectionFromSourcesDataflowNode
struct FCreateGeometryCollectionFromSourcesDataflowNode : public FDataflowNode
{
public:
	TArray<struct FGeometryCollectionSource>     Sources;                                           // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FManagedArrayCollection               Collection;                                        // 0xF8(0xB0)(NativeAccessSpecifierPublic)
	TArray<class UMaterial*>                     Materials;                                         // 0x1A8(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FGeometryCollectionAutoInstanceMesh> InstancedMeshes;                                   // 0x1B8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xC8 (0x1B0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.RadialFalloffFieldDataflowNode
struct FRadialFalloffFieldDataflowNode : public FDataflowNode
{
public:
	TArray<struct FVector3f>                     SamplePositions;                                   // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FDataflowVertexSelection              SampleIndices;                                     // 0xF8(0x20)(NativeAccessSpecifierPublic)
	struct FSphere                               Sphere;                                            // 0x118(0x20)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Translation;                                       // 0x138(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Magnitude;                                         // 0x150(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinRange;                                          // 0x154(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxRange;                                          // 0x158(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Default;                                           // 0x15C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDataflowFieldFalloffType         FalloffType;                                       // 0x160(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1611[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                FieldFloatResult;                                  // 0x168(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                FieldRemap;                                        // 0x178(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FDataflowVertexSelection              FieldSelectionMask;                                // 0x188(0x20)(NativeAccessSpecifierPublic)
	int32                                        NumSamplePositions;                                // 0x1A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_161E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x128 (0x210 - 0xE8)
// ScriptStruct GeometryCollectionNodes.BoxFalloffFieldDataflowNode
struct FBoxFalloffFieldDataflowNode : public FDataflowNode
{
public:
	TArray<struct FVector3f>                     SamplePositions;                                   // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FDataflowVertexSelection              SampleIndices;                                     // 0xF8(0x20)(NativeAccessSpecifierPublic)
	struct FBox                                  Box;                                               // 0x118(0x38)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Transform;                                         // 0x150(0x60)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Magnitude;                                         // 0x1B0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinRange;                                          // 0x1B4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxRange;                                          // 0x1B8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Default;                                           // 0x1BC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDataflowFieldFalloffType         FalloffType;                                       // 0x1C0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1640[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                FieldFloatResult;                                  // 0x1C8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                FieldRemap;                                        // 0x1D8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FDataflowVertexSelection              FieldSelectionMask;                                // 0x1E8(0x20)(NativeAccessSpecifierPublic)
	int32                                        NumSamplePositions;                                // 0x208(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1641[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xE0 (0x1C8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.PlaneFalloffFieldDataflowNode
struct FPlaneFalloffFieldDataflowNode : public FDataflowNode
{
public:
	TArray<struct FVector3f>                     SamplePositions;                                   // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FDataflowVertexSelection              SampleIndices;                                     // 0xF8(0x20)(NativeAccessSpecifierPublic)
	struct FVector                               Position;                                          // 0x118(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Normal;                                            // 0x130(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Distance;                                          // 0x148(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1659[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Translation;                                       // 0x150(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Magnitude;                                         // 0x168(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinRange;                                          // 0x16C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxRange;                                          // 0x170(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Default;                                           // 0x174(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDataflowFieldFalloffType         FalloffType;                                       // 0x178(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1668[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                FieldFloatResult;                                  // 0x180(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                FieldRemap;                                        // 0x190(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FDataflowVertexSelection              FieldSelectionMask;                                // 0x1A0(0x20)(NativeAccessSpecifierPublic)
	int32                                        NumSamplePositions;                                // 0x1C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_166C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0x188 - 0xE8)
// ScriptStruct GeometryCollectionNodes.RadialIntMaskFieldDataflowNode
struct FRadialIntMaskFieldDataflowNode : public FDataflowNode
{
public:
	TArray<struct FVector3f>                     SamplePositions;                                   // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FDataflowVertexSelection              SampleIndices;                                     // 0xF8(0x20)(NativeAccessSpecifierPublic)
	struct FSphere                               Sphere;                                            // 0x118(0x20)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Translation;                                       // 0x138(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InteriorValue;                                     // 0x150(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ExteriorValue;                                     // 0x154(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDataflowSetMaskConditionType     SetMaskConditionType;                              // 0x158(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1682[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                FieldIntResult;                                    // 0x160(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                FieldRemap;                                        // 0x170(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        NumSamplePositions;                                // 0x180(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1688[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x148 - 0xE8)
// ScriptStruct GeometryCollectionNodes.UniformScalarFieldDataflowNode
struct FUniformScalarFieldDataflowNode : public FDataflowNode
{
public:
	TArray<struct FVector3f>                     SamplePositions;                                   // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FDataflowVertexSelection              SampleIndices;                                     // 0xF8(0x20)(NativeAccessSpecifierPublic)
	float                                        Magnitude;                                         // 0x118(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1694[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                FieldFloatResult;                                  // 0x120(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                FieldRemap;                                        // 0x130(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        NumSamplePositions;                                // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_169C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x160 - 0xE8)
// ScriptStruct GeometryCollectionNodes.UniformVectorFieldDataflowNode
struct FUniformVectorFieldDataflowNode : public FDataflowNode
{
public:
	TArray<struct FVector3f>                     SamplePositions;                                   // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FDataflowVertexSelection              SampleIndices;                                     // 0xF8(0x20)(NativeAccessSpecifierPublic)
	float                                        Magnitude;                                         // 0x118(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16A7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Direction;                                         // 0x120(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       FieldVectorResult;                                 // 0x138(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                FieldRemap;                                        // 0x148(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        NumSamplePositions;                                // 0x158(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16AE[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x160 - 0xE8)
// ScriptStruct GeometryCollectionNodes.RadialVectorFieldDataflowNode
struct FRadialVectorFieldDataflowNode : public FDataflowNode
{
public:
	TArray<struct FVector3f>                     SamplePositions;                                   // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FDataflowVertexSelection              SampleIndices;                                     // 0xF8(0x20)(NativeAccessSpecifierPublic)
	float                                        Magnitude;                                         // 0x118(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16BB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Position;                                          // 0x120(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       FieldVectorResult;                                 // 0x138(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                FieldRemap;                                        // 0x148(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        NumSamplePositions;                                // 0x158(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16C1[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x148 - 0xE8)
// ScriptStruct GeometryCollectionNodes.RandomVectorFieldDataflowNode
struct FRandomVectorFieldDataflowNode : public FDataflowNode
{
public:
	TArray<struct FVector3f>                     SamplePositions;                                   // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FDataflowVertexSelection              SampleIndices;                                     // 0xF8(0x20)(NativeAccessSpecifierPublic)
	float                                        Magnitude;                                         // 0x118(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16CD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       FieldVectorResult;                                 // 0x120(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                FieldRemap;                                        // 0x130(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        NumSamplePositions;                                // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16D1[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC8 (0x1B0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.NoiseFieldDataflowNode
struct FNoiseFieldDataflowNode : public FDataflowNode
{
public:
	TArray<struct FVector3f>                     SamplePositions;                                   // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FDataflowVertexSelection              SampleIndices;                                     // 0xF8(0x20)(NativeAccessSpecifierPublic)
	float                                        MinRange;                                          // 0x118(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxRange;                                          // 0x11C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Transform;                                         // 0x120(0x60)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                FieldFloatResult;                                  // 0x180(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                FieldRemap;                                        // 0x190(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        NumSamplePositions;                                // 0x1A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16E5[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x148 - 0xE8)
// ScriptStruct GeometryCollectionNodes.UniformIntegerFieldDataflowNode
struct FUniformIntegerFieldDataflowNode : public FDataflowNode
{
public:
	TArray<struct FVector3f>                     SamplePositions;                                   // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FDataflowVertexSelection              SampleIndices;                                     // 0xF8(0x20)(NativeAccessSpecifierPublic)
	int32                                        Magnitude;                                         // 0x118(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16EE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                FieldIntResult;                                    // 0x120(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                FieldRemap;                                        // 0x130(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        NumSamplePositions;                                // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16F6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0x188 - 0xE8)
// ScriptStruct GeometryCollectionNodes.WaveScalarFieldDataflowNode
struct FWaveScalarFieldDataflowNode : public FDataflowNode
{
public:
	TArray<struct FVector3f>                     SamplePositions;                                   // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FDataflowVertexSelection              SampleIndices;                                     // 0xF8(0x20)(NativeAccessSpecifierPublic)
	float                                        Magnitude;                                         // 0x118(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1702[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Position;                                          // 0x120(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Translation;                                       // 0x138(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Wavelength;                                        // 0x150(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Period;                                            // 0x154(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDataflowWaveFunctionType         FunctionType;                                      // 0x158(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDataflowFieldFalloffType         FalloffType;                                       // 0x159(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_170D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                FieldFloatResult;                                  // 0x160(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                FieldRemap;                                        // 0x170(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        NumSamplePositions;                                // 0x180(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1710[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x150 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SumScalarFieldDataflowNode
struct FSumScalarFieldDataflowNode : public FDataflowNode
{
public:
	TArray<float>                                FieldFloatLeft;                                    // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                FieldRemapLeft;                                    // 0xF8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                FieldFloatRight;                                   // 0x108(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                FieldRemapRight;                                   // 0x118(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Magnitude;                                         // 0x128(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDataflowFloatFieldOperationType  Operation;                                         // 0x12C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSwapInputs;                                       // 0x12D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1720[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                FieldFloatResult;                                  // 0x130(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                FieldRemap;                                        // 0x140(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x88 (0x170 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SumVectorFieldDataflowNode
struct FSumVectorFieldDataflowNode : public FDataflowNode
{
public:
	TArray<float>                                FieldFloat;                                        // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                FieldFloatRemap;                                   // 0xF8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       FieldVectorLeft;                                   // 0x108(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                FieldRemapLeft;                                    // 0x118(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       FieldVectorRight;                                  // 0x128(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                FieldRemapRight;                                   // 0x138(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Magnitude;                                         // 0x148(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDataflowVectorFieldOperationType Operation;                                         // 0x14C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSwapVectorInputs;                                 // 0x14D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1746[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       FieldVectorResult;                                 // 0x150(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                FieldRemap;                                        // 0x160(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x120 - 0xE8)
// ScriptStruct GeometryCollectionNodes.FieldMakeDenseFloatArrayDataflowNode
struct FFieldMakeDenseFloatArrayDataflowNode : public FDataflowNode
{
public:
	TArray<float>                                FieldFloatInput;                                   // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                FieldRemap;                                        // 0xF8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        NumSamplePositions;                                // 0x108(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Default;                                           // 0x10C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                FieldFloatResult;                                  // 0x110(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xF8 (0x1E0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.AddMaterialToCollectionDataflowNode
struct FAddMaterialToCollectionDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct FDataflowFaceSelection                FaceSelection;                                     // 0x198(0x20)(NativeAccessSpecifierPublic)
	TArray<class UMaterial*>                     Materials;                                         // 0x1B8(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class UMaterial*                             OutsideMaterial;                                   // 0x1C8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterial*                             InsideMaterial;                                    // 0x1D0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAssignOutsideMaterial;                            // 0x1D8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAssignInsideMaterial;                             // 0x1D9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1768[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF0 (0x1D8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.ReAssignMaterialInCollectionDataflowNode
struct FReAssignMaterialInCollectionDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct FDataflowFaceSelection                FaceSelection;                                     // 0x198(0x20)(NativeAccessSpecifierPublic)
	TArray<class UMaterial*>                     Materials;                                         // 0x1B8(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	int32                                        OutsideMaterialIdx;                                // 0x1C8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InsideMaterialIdx;                                 // 0x1CC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAssignOutsideMaterial;                            // 0x1D0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAssignInsideMaterial;                             // 0x1D1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_177A[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MaterialsInfoDataflowNode
struct FMaterialsInfoDataflowNode : public FDataflowNode
{
public:
	TArray<class UMaterial*>                     Materials;                                         // 0xE8(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class FString                                String;                                            // 0xF8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GetMaterialFromMaterialsArrayDataflowNode
struct FGetMaterialFromMaterialsArrayDataflowNode : public FDataflowNode
{
public:
	TArray<class UMaterial*>                     Materials;                                         // 0xE8(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class UMaterial*                             Material;                                          // 0xF8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaterialIdx;                                       // 0x100(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1791[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SetMaterialInMaterialsArrayDataflowNode
struct FSetMaterialInMaterialsArrayDataflowNode : public FDataflowNode
{
public:
	TArray<class UMaterial*>                     Materials;                                         // 0xE8(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class UMaterial*                             Material;                                          // 0xF8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESetMaterialOperationTypeEnum     Operation;                                         // 0x100(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_179D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaterialIdx;                                       // 0x104(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MakeMaterialDataflowNode
struct FMakeMaterialDataflowNode : public FDataflowNode
{
public:
	class UMaterial*                             InMaterial;                                        // 0xE8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterial*                             Material;                                          // 0xF0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MakeMaterialsArrayDataflowNode
struct FMakeMaterialsArrayDataflowNode : public FDataflowNode
{
public:
	TArray<class UMaterial*>                     Materials;                                         // 0xE8(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0xB0 (0x198 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CloseGeometryOnCollectionDataflowNode
struct FCloseGeometryOnCollectionDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
};

// 0xB8 (0x1A0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SkeletonToCollectionDataflowNode
struct FSkeletonToCollectionDataflowNode : public FDataflowNode
{
public:
	class USkeleton*                             Skeleton;                                          // 0xE8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FManagedArrayCollection               Collection;                                        // 0xF0(0xB0)(NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GeometryCollectionNodes.DataflowConvexDecompositionSettings
struct FDataflowConvexDecompositionSettings
{
public:
	float                                        MinSizeToDecompose;                                // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxGeoToHullVolumeRatioToDecompose;                // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ErrorTolerance;                                    // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxHullsPerGeometry;                               // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinThicknessTolerance;                             // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumAdditionalSplits;                               // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x118 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MakeDataflowConvexDecompositionSettingsNode
struct FMakeDataflowConvexDecompositionSettingsNode : public FDataflowNode
{
public:
	float                                        MinSizeToDecompose;                                // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxGeoToHullVolumeRatioToDecompose;                // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ErrorTolerance;                                    // 0xF0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxHullsPerGeometry;                               // 0xF4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinThicknessTolerance;                             // 0xF8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumAdditionalSplits;                               // 0xFC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataflowConvexDecompositionSettings  DecompositionSettings;                             // 0x100(0x18)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0xF8 (0x1E0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CreateLeafConvexHullsDataflowNode
struct FCreateLeafConvexHullsDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct FDataflowTransformSelection           OptionalSelectionFilter;                           // 0x198(0x20)(NativeAccessSpecifierPublic)
	enum class EGenerateConvexMethod             GenerateMethod;                                    // 0x1B8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17F8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        IntersectIfComputedIsSmallerByFactor;              // 0x1BC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinExternalVolumeToIntersect;                      // 0x1C0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SimplificationDistanceThreshold;                   // 0x1C4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataflowConvexDecompositionSettings  ConvexDecompositionSettings;                       // 0x1C8(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xE8 (0x1D0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SimplifyConvexHullsDataflowNode
struct FSimplifyConvexHullsDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct FDataflowTransformSelection           OptionalSelectionFilter;                           // 0x198(0x20)(NativeAccessSpecifierPublic)
	enum class EConvexHullSimplifyMethod         SimplifyMethod;                                    // 0x1B8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SimplificationAngleThreshold;                      // 0x1BC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SimplificationDistanceThreshold;                   // 0x1C0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinTargetTriangleCount;                            // 0x1C4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseExistingVertices;                              // 0x1C8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1815[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC8 (0x1B0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CreateNonOverlappingConvexHullsDataflowNode
struct FCreateNonOverlappingConvexHullsDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	float                                        CanExceedFraction;                                 // 0x198(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SimplificationDistanceThreshold;                   // 0x19C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EConvexOverlapRemovalMethodEnum   OverlapRemovalMethod;                              // 0x1A0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1827[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OverlapRemovalShrinkPercent;                       // 0x1A4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CanRemoveFraction;                                 // 0x1A8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_182D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GeometryCollectionNodes.DataflowSphereCovering
struct FDataflowSphereCovering
{
public:
	uint8                                        Pad_183B[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x128 (0x210 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GenerateClusterConvexHullsFromLeafHullsDataflowNode
struct FGenerateClusterConvexHullsFromLeafHullsDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct FDataflowSphereCovering               SphereCovering;                                    // 0x198(0x20)(NativeAccessSpecifierPublic)
	int32                                        ConvexCount;                                       // 0x1B8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1846[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       ErrorTolerance;                                    // 0x1C0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPreferExternalCollisionShapes;                    // 0x1C8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAllowConvexMergeMethod           AllowMerges;                                       // 0x1C9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_184C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataflowTransformSelection           OptionalSelectionFilter;                           // 0x1D0(0x20)(NativeAccessSpecifierPublic)
	bool                                         bProtectNegativeSpace;                             // 0x1F0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1851[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TargetNumSamples;                                  // 0x1F4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       MinSampleSpacing;                                  // 0x1F8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       NegativeSpaceTolerance;                            // 0x200(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       MinRadius;                                         // 0x208(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x128 (0x210 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GenerateClusterConvexHullsFromChildrenHullsDataflowNode
struct FGenerateClusterConvexHullsFromChildrenHullsDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct FDataflowSphereCovering               SphereCovering;                                    // 0x198(0x20)(NativeAccessSpecifierPublic)
	int32                                        ConvexCount;                                       // 0x1B8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1868[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       ErrorTolerance;                                    // 0x1C0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPreferExternalCollisionShapes;                    // 0x1C8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1870[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataflowTransformSelection           OptionalSelectionFilter;                           // 0x1D0(0x20)(NativeAccessSpecifierPublic)
	bool                                         bProtectNegativeSpace;                             // 0x1F0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1879[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TargetNumSamples;                                  // 0x1F4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       MinSampleSpacing;                                  // 0x1F8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       NegativeSpaceTolerance;                            // 0x200(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       MinRadius;                                         // 0x208(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x120 (0x208 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MergeConvexHullsDataflowNode
struct FMergeConvexHullsDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct FDataflowSphereCovering               SphereCovering;                                    // 0x198(0x20)(NativeAccessSpecifierPublic)
	int32                                        MaxConvexCount;                                    // 0x1B8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_188D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       ErrorTolerance;                                    // 0x1C0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataflowTransformSelection           OptionalSelectionFilter;                           // 0x1C8(0x20)(NativeAccessSpecifierPublic)
	bool                                         bProtectNegativeSpace;                             // 0x1E8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1897[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TargetNumSamples;                                  // 0x1EC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       MinSampleSpacing;                                  // 0x1F0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       NegativeSpaceTolerance;                            // 0x1F8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       MinRadius;                                         // 0x200(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0x198 - 0xE8)
// ScriptStruct GeometryCollectionNodes.UpdateVolumeAttributesDataflowNode
struct FUpdateVolumeAttributesDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
};

// 0xD8 (0x1C0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GetConvexHullVolumeDataflowNode
struct FGetConvexHullVolumeDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x198(0x20)(NativeAccessSpecifierPublic)
	float                                        Volume;                                            // 0x1B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSumChildrenForClustersWithoutHulls;               // 0x1BC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVolumeOfUnion;                                    // 0x1BD(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18AA[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF8 (0x1E0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.AutoClusterDataflowNode
struct FAutoClusterDataflowNode : public FDataflowNode
{
public:
	enum class EClusterSizeMethodEnum            ClusterSizeMethod;                                 // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18B1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ClusterSites;                                      // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClusterFraction;                                   // 0xF0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SiteSize;                                          // 0xF4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ClusterGridWidth;                                  // 0xF8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ClusterGridDepth;                                  // 0xFC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ClusterGridHeight;                                 // 0x100(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DriftIterations;                                   // 0x104(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumSize;                                       // 0x108(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AutoCluster;                                       // 0x10C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnforceSiteParameters;                             // 0x10D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AvoidIsolated;                                     // 0x10E(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18C4[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FManagedArrayCollection               Collection;                                        // 0x110(0xB0)(NativeAccessSpecifierPublic)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x1C0(0x20)(NativeAccessSpecifierPublic)
};

// 0xB0 (0x198 - 0xE8)
// ScriptStruct GeometryCollectionNodes.ClusterFlattenDataflowNode
struct FClusterFlattenDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.ClusterUnclusterDataflowNode
struct FClusterUnclusterDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x198(0x20)(NativeAccessSpecifierPublic)
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.ClusterDataflowNode
struct FClusterDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x198(0x20)(NativeAccessSpecifierPublic)
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.ClusterMergeDataflowNode
struct FClusterMergeDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x198(0x20)(NativeAccessSpecifierPublic)
};

// 0x28 (0x110 - 0xE8)
// ScriptStruct GeometryCollectionNodes.VectorToStringDataflowNode
struct FVectorToStringDataflowNode : public FDataflowNode
{
public:
	struct FVector                               Vector;                                            // 0xE8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                String;                                            // 0x100(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x100 - 0xE8)
// ScriptStruct GeometryCollectionNodes.FloatToStringDataflowNode
struct FFloatToStringDataflowNode : public FDataflowNode
{
public:
	float                                        Float;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18F2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                String;                                            // 0xF0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x100 - 0xE8)
// ScriptStruct GeometryCollectionNodes.IntToStringDataflowNode
struct FIntToStringDataflowNode : public FDataflowNode
{
public:
	int32                                        Int;                                               // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18FA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                String;                                            // 0xF0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x100 - 0xE8)
// ScriptStruct GeometryCollectionNodes.BoolToStringDataflowNode
struct FBoolToStringDataflowNode : public FDataflowNode
{
public:
	bool                                         Bool;                                              // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1903[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                String;                                            // 0xF0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.IntToFloatDataflowNode
struct FIntToFloatDataflowNode : public FDataflowNode
{
public:
	int32                                        Int;                                               // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float;                                             // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.IntToDoubleDataflowNode
struct FIntToDoubleDataflowNode : public FDataflowNode
{
public:
	int32                                        Int;                                               // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1915[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Double;                                            // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.FloatToDoubleDataflowNode
struct FFloatToDoubleDataflowNode : public FDataflowNode
{
public:
	float                                        Float;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_191D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Double;                                            // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.FloatToIntDataflowNode
struct FFloatToIntDataflowNode : public FDataflowNode
{
public:
	enum class EFloatToIntFunctionEnum           Function;                                          // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1928[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Float;                                             // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Int;                                               // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_192F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.IntToBoolDataflowNode
struct FIntToBoolDataflowNode : public FDataflowNode
{
public:
	int32                                        Int;                                               // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Bool;                                              // 0xEC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1938[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.BoolToIntDataflowNode
struct FBoolToIntDataflowNode : public FDataflowNode
{
public:
	bool                                         Bool;                                              // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1940[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Int;                                               // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD8 (0x1C0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.ConvexHullToMeshDataflowNode
struct FConvexHullToMeshDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct FDataflowTransformSelection           OptionalSelectionFilter;                           // 0x198(0x20)(NativeAccessSpecifierPublic)
	class UDynamicMesh*                          Mesh;                                              // 0x1B8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x118 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SphereCoveringToMeshDataflowNode
struct FSphereCoveringToMeshDataflowNode : public FDataflowNode
{
public:
	struct FDataflowSphereCovering               SphereCovering;                                    // 0xE8(0x20)(NativeAccessSpecifierPublic)
	int32                                        VerticesAlongEachSide;                             // 0x108(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1961[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDynamicMesh*                          Mesh;                                              // 0x110(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MeshToOBJStringDebugDataflowNode
struct FMeshToOBJStringDebugDataflowNode : public FDataflowNode
{
public:
	class UDynamicMesh*                          Mesh;                                              // 0xE8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInvertFaces;                                      // 0xF0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1968[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                StringOBJ;                                         // 0xF8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.WriteStringToFile
struct FWriteStringToFile : public FDataflowNode
{
public:
	class FString                                FilePath;                                          // 0xE8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FileContents;                                      // 0xF8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.PruneInCollectionDataflowNode
struct FPruneInCollectionDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x198(0x20)(NativeAccessSpecifierPublic)
};

// 0xF8 (0x1E0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SetVisibilityInCollectionDataflowNode
struct FSetVisibilityInCollectionDataflowNode : public FDataflowNode
{
public:
	enum class EVisibiltyOptionsEnum             Visibility;                                        // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_197A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FManagedArrayCollection               Collection;                                        // 0xF0(0xB0)(NativeAccessSpecifierPublic)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x1A0(0x20)(NativeAccessSpecifierPublic)
	struct FDataflowFaceSelection                FaceSelection;                                     // 0x1C0(0x20)(NativeAccessSpecifierPublic)
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MergeInCollectionDataflowNode
struct FMergeInCollectionDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x198(0x20)(NativeAccessSpecifierPublic)
};

// 0x58 (0x140 - 0xE8)
// ScriptStruct GeometryCollectionNodes.UniformScatterPointsDataflowNode
struct FUniformScatterPointsDataflowNode : public FDataflowNode
{
public:
	int32                                        MinNumberOfPoints;                                 // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxNumberOfPoints;                                 // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RandomSeed;                                        // 0xF0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_199B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBox                                  BoundingBox;                                       // 0xF8(0x38)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       Points;                                            // 0x130(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x58 (0x140 - 0xE8)
// ScriptStruct GeometryCollectionNodes.RadialScatterPointsDataflowNode
struct FRadialScatterPointsDataflowNode : public FDataflowNode
{
public:
	struct FVector                               Center;                                            // 0xE8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Normal;                                            // 0x100(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x118(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AngularSteps;                                      // 0x11C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RadialSteps;                                       // 0x120(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngleOffset;                                       // 0x124(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Variability;                                       // 0x128(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RandomSeed;                                        // 0x12C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       Points;                                            // 0x130(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x110 (0x1F8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.VoronoiFractureDataflowNode
struct FVoronoiFractureDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	TArray<struct FVector>                       Points;                                            // 0x198(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x1A8(0x20)(NativeAccessSpecifierPublic)
	float                                        RandomSeed;                                        // 0x1C8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChanceToFracture;                                  // 0x1CC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         GroupFracture;                                     // 0x1D0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19D5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Grout;                                             // 0x1D4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Amplitude;                                         // 0x1D8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Frequency;                                         // 0x1DC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Persistence;                                       // 0x1E0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Lacunarity;                                        // 0x1E4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OctaveNumber;                                      // 0x1E8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PointSpacing;                                      // 0x1EC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AddSamplesForCollision;                            // 0x1F0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19E7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CollisionSampleSpacing;                            // 0x1F4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x138 (0x220 - 0xE8)
// ScriptStruct GeometryCollectionNodes.PlaneCutterDataflowNode
struct FPlaneCutterDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct FBox                                  BoundingBox;                                       // 0x198(0x38)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x1D0(0x20)(NativeAccessSpecifierPublic)
	int32                                        NumPlanes;                                         // 0x1F0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RandomSeed;                                        // 0x1F4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Grout;                                             // 0x1F8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Amplitude;                                         // 0x1FC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Frequency;                                         // 0x200(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Persistence;                                       // 0x204(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Lacunarity;                                        // 0x208(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OctaveNumber;                                      // 0x20C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PointSpacing;                                      // 0x210(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AddSamplesForCollision;                            // 0x214(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A0B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CollisionSampleSpacing;                            // 0x218(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A0D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.ExplodedViewDataflowNode
struct FExplodedViewDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	float                                        UniformScale;                                      // 0x198(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A1A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Scale;                                             // 0x1A0(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MakeLiteralStringDataflowNode
struct FMakeLiteralStringDataflowNode : public FDataflowNode
{
public:
	class FString                                Value;                                             // 0xE8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                String;                                            // 0xF8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MakePointsDataflowNode
struct FMakePointsDataflowNode : public FDataflowNode
{
public:
	TArray<struct FVector>                       Point;                                             // 0xE8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       Points;                                            // 0xF8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xA0 (0x188 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MakeBoxDataflowNode
struct FMakeBoxDataflowNode : public FDataflowNode
{
public:
	enum class EMakeBoxDataTypeEnum              DataType;                                          // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A40[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Min;                                               // 0xF0(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Max;                                               // 0x108(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Center;                                            // 0x120(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Size;                                              // 0x138(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBox                                  Box;                                               // 0x150(0x38)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x128 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MakeSphereDataflowNode
struct FMakeSphereDataflowNode : public FDataflowNode
{
public:
	struct FVector                               Center;                                            // 0xE8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x100(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A64[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSphere                               Sphere;                                            // 0x108(0x20)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MakeLiteralFloatDataflowNode
struct FMakeLiteralFloatDataflowNode : public FDataflowNode
{
public:
	float                                        Value;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float;                                             // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MakeLiteralIntDataflowNode
struct FMakeLiteralIntDataflowNode : public FDataflowNode
{
public:
	int32                                        Value;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Int;                                               // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MakeLiteralBoolDataflowNode
struct FMakeLiteralBoolDataflowNode : public FDataflowNode
{
public:
	bool                                         Value;                                             // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Bool;                                              // 0xE9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A7B[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x110 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MakeLiteralVectorDataflowNode
struct FMakeLiteralVectorDataflowNode : public FDataflowNode
{
public:
	float                                        X;                                                 // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Y;                                                 // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Z;                                                 // 0xF0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A84[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Vector;                                            // 0xF8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0x190 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MakeTransformDataflowNode
struct FMakeTransformDataflowNode : public FDataflowNode
{
public:
	struct FVector                               InTranslation;                                     // 0xE8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InRotation;                                        // 0x100(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InScale;                                           // 0x118(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            OutTransform;                                      // 0x130(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x120 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MakeQuaternionDataflowNode
struct FMakeQuaternionDataflowNode : public FDataflowNode
{
public:
	float                                        X;                                                 // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Y;                                                 // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Z;                                                 // 0xF0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        W;                                                 // 0xF4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A91[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Quaternion;                                        // 0x100(0x20)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.AddDataflowNode
struct FAddDataflowNode : public FDataflowNode
{
public:
	float                                        FloatA;                                            // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatB;                                            // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A9B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SubtractDataflowNode
struct FSubtractDataflowNode : public FDataflowNode
{
public:
	float                                        FloatA;                                            // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatB;                                            // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AA2[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MultiplyDataflowNode
struct FMultiplyDataflowNode : public FDataflowNode
{
public:
	float                                        FloatA;                                            // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatB;                                            // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AB3[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SafeDivideDataflowNode
struct FSafeDivideDataflowNode : public FDataflowNode
{
public:
	float                                        FloatA;                                            // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatB;                                            // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AC6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0xF8 - 0xF8)
// ScriptStruct GeometryCollectionNodes.DivideDataflowNode
struct FDivideDataflowNode : public FSafeDivideDataflowNode
{
public:
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.DivisionDataflowNode
struct FDivisionDataflowNode : public FDataflowNode
{
public:
	float                                        Dividend;                                          // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Divisor;                                           // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Remainder;                                         // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SafeReciprocalDataflowNode
struct FSafeReciprocalDataflowNode : public FDataflowNode
{
public:
	float                                        Float;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SquareDataflowNode
struct FSquareDataflowNode : public FDataflowNode
{
public:
	float                                        Float;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SquareRootDataflowNode
struct FSquareRootDataflowNode : public FDataflowNode
{
public:
	float                                        Float;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.InverseSqrtDataflowNode
struct FInverseSqrtDataflowNode : public FDataflowNode
{
public:
	float                                        Float;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CubeDataflowNode
struct FCubeDataflowNode : public FDataflowNode
{
public:
	float                                        Float;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.NegateDataflowNode
struct FNegateDataflowNode : public FDataflowNode
{
public:
	float                                        Float;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.AbsDataflowNode
struct FAbsDataflowNode : public FDataflowNode
{
public:
	float                                        Float;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.FloorDataflowNode
struct FFloorDataflowNode : public FDataflowNode
{
public:
	float                                        Float;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CeilDataflowNode
struct FCeilDataflowNode : public FDataflowNode
{
public:
	float                                        Float;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.RoundDataflowNode
struct FRoundDataflowNode : public FDataflowNode
{
public:
	float                                        Float;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.TruncDataflowNode
struct FTruncDataflowNode : public FDataflowNode
{
public:
	float                                        Float;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.FracDataflowNode
struct FFracDataflowNode : public FDataflowNode
{
public:
	float                                        Float;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MinDataflowNode
struct FMinDataflowNode : public FDataflowNode
{
public:
	float                                        FloatA;                                            // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatB;                                            // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B79[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MaxDataflowNode
struct FMaxDataflowNode : public FDataflowNode
{
public:
	float                                        FloatA;                                            // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatB;                                            // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B86[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.Min3DataflowNode
struct FMin3DataflowNode : public FDataflowNode
{
public:
	float                                        FloatA;                                            // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatB;                                            // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatC;                                            // 0xF0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.Max3DataflowNode
struct FMax3DataflowNode : public FDataflowNode
{
public:
	float                                        FloatA;                                            // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatB;                                            // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatC;                                            // 0xF0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SignDataflowNode
struct FSignDataflowNode : public FDataflowNode
{
public:
	float                                        Float;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.ClampDataflowNode
struct FClampDataflowNode : public FDataflowNode
{
public:
	float                                        Float;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Min;                                               // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Max;                                               // 0xF0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x100 - 0xE8)
// ScriptStruct GeometryCollectionNodes.FitDataflowNode
struct FFitDataflowNode : public FDataflowNode
{
public:
	float                                        Float;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OldMin;                                            // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OldMax;                                            // 0xF0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NewMin;                                            // 0xF4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NewMax;                                            // 0xF8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x100 - 0xE8)
// ScriptStruct GeometryCollectionNodes.EFitDataflowNode
struct FEFitDataflowNode : public FDataflowNode
{
public:
	float                                        Float;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OldMin;                                            // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OldMax;                                            // 0xF0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NewMin;                                            // 0xF4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NewMax;                                            // 0xF8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.PowDataflowNode
struct FPowDataflowNode : public FDataflowNode
{
public:
	float                                        base;                                              // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Exp;                                               // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BE5[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.LogDataflowNode
struct FLogDataflowNode : public FDataflowNode
{
public:
	float                                        base;                                              // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        A;                                                 // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BFB[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.LogeDataflowNode
struct FLogeDataflowNode : public FDataflowNode
{
public:
	float                                        A;                                                 // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.LerpDataflowNode
struct FLerpDataflowNode : public FDataflowNode
{
public:
	float                                        A;                                                 // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        B;                                                 // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0xF0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.WrapDataflowNode
struct FWrapDataflowNode : public FDataflowNode
{
public:
	float                                        Float;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Min;                                               // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Max;                                               // 0xF0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.ExpDataflowNode
struct FExpDataflowNode : public FDataflowNode
{
public:
	float                                        Float;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SinDataflowNode
struct FSinDataflowNode : public FDataflowNode
{
public:
	float                                        Float;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.ArcSinDataflowNode
struct FArcSinDataflowNode : public FDataflowNode
{
public:
	float                                        Float;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CosDataflowNode
struct FCosDataflowNode : public FDataflowNode
{
public:
	float                                        Float;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.ArcCosDataflowNode
struct FArcCosDataflowNode : public FDataflowNode
{
public:
	float                                        Float;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.TanDataflowNode
struct FTanDataflowNode : public FDataflowNode
{
public:
	float                                        Float;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.ArcTanDataflowNode
struct FArcTanDataflowNode : public FDataflowNode
{
public:
	float                                        Float;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.ArcTan2DataflowNode
struct FArcTan2DataflowNode : public FDataflowNode
{
public:
	float                                        Y;                                                 // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        X;                                                 // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C7A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.NormalizeToRangeDataflowNode
struct FNormalizeToRangeDataflowNode : public FDataflowNode
{
public:
	float                                        Float;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RangeMin;                                          // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RangeMax;                                          // 0xF0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x120 - 0xE8)
// ScriptStruct GeometryCollectionNodes.ScaleVectorDataflowNode
struct FScaleVectorDataflowNode : public FDataflowNode
{
public:
	struct FVector                               Vector;                                            // 0xE8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x100(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C9E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ScaledVector;                                      // 0x108(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x120 - 0xE8)
// ScriptStruct GeometryCollectionNodes.DotProductDataflowNode
struct FDotProductDataflowNode : public FDataflowNode
{
public:
	struct FVector                               VectorA;                                           // 0xE8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               VectorB;                                           // 0x100(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CAD[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x130 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CrossProductDataflowNode
struct FCrossProductDataflowNode : public FDataflowNode
{
public:
	struct FVector                               VectorA;                                           // 0xE8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               VectorB;                                           // 0x100(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x118(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x120 - 0xE8)
// ScriptStruct GeometryCollectionNodes.NormalizeDataflowNode
struct FNormalizeDataflowNode : public FDataflowNode
{
public:
	struct FVector                               VectorA;                                           // 0xE8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Tolerance;                                         // 0x100(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CC4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ReturnValue;                                       // 0x108(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.LengthDataflowNode
struct FLengthDataflowNode : public FDataflowNode
{
public:
	struct FVector                               Vector;                                            // 0xE8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CD0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x120 - 0xE8)
// ScriptStruct GeometryCollectionNodes.DistanceDataflowNode
struct FDistanceDataflowNode : public FDataflowNode
{
public:
	struct FVector                               PointA;                                            // 0xE8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PointB;                                            // 0x100(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CDC[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.IsNearlyZeroDataflowNode
struct FIsNearlyZeroDataflowNode : public FDataflowNode
{
public:
	float                                        Float;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xEC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CE5[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.RandomFloatDataflowNode
struct FRandomFloatDataflowNode : public FDataflowNode
{
public:
	bool                                         bDeterministic;                                    // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CF1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RandomSeed;                                        // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CF3[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x100 - 0xE8)
// ScriptStruct GeometryCollectionNodes.RandomFloatInRangeDataflowNode
struct FRandomFloatInRangeDataflowNode : public FDataflowNode
{
public:
	bool                                         bDeterministic;                                    // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CFE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RandomSeed;                                        // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Min;                                               // 0xF0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Max;                                               // 0xF4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D04[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.RandomUnitVectorDataflowNode
struct FRandomUnitVectorDataflowNode : public FDataflowNode
{
public:
	bool                                         bDeterministic;                                    // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D0B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RandomSeed;                                        // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0xF0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x128 - 0xE8)
// ScriptStruct GeometryCollectionNodes.RandomUnitVectorInConeDataflowNode
struct FRandomUnitVectorInConeDataflowNode : public FDataflowNode
{
public:
	bool                                         bDeterministic;                                    // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D1D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RandomSeed;                                        // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ConeDirection;                                     // 0xF0(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ConeHalfAngle;                                     // 0x108(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D26[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ReturnValue;                                       // 0x110(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.RadiansToDegreesDataflowNode
struct FRadiansToDegreesDataflowNode : public FDataflowNode
{
public:
	float                                        Radians;                                           // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Degrees;                                           // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.DegreesToRadiansDataflowNode
struct FDegreesToRadiansDataflowNode : public FDataflowNode
{
public:
	float                                        Degrees;                                           // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radians;                                           // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MathConstantsDataflowNode
struct FMathConstantsDataflowNode : public FDataflowNode
{
public:
	enum class EMathConstantsEnum                Constant;                                          // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D57[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReturnValue;                                       // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.PointsToMeshDataflowNode
struct FPointsToMeshDataflowNode : public FDataflowNode
{
public:
	TArray<struct FVector>                       Points;                                            // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          Mesh;                                              // 0xF8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TriangleCount;                                     // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D65[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x130 - 0xE8)
// ScriptStruct GeometryCollectionNodes.BoxToMeshDataflowNode
struct FBoxToMeshDataflowNode : public FDataflowNode
{
public:
	struct FBox                                  Box;                                               // 0xE8(0x38)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          Mesh;                                              // 0x120(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TriangleCount;                                     // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D76[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x100 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MeshInfoDataflowNode
struct FMeshInfoDataflowNode : public FDataflowNode
{
public:
	class UDynamicMesh*                          Mesh;                                              // 0xE8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InfoString;                                        // 0xF0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0x1A0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MeshToCollectionDataflowNode
struct FMeshToCollectionDataflowNode : public FDataflowNode
{
public:
	class UDynamicMesh*                          Mesh;                                              // 0xE8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FManagedArrayCollection               Collection;                                        // 0xF0(0xB0)(NativeAccessSpecifierPublic)
};

// 0xC0 (0x1A8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionToMeshDataflowNode
struct FCollectionToMeshDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	bool                                         bCenterPivot;                                      // 0x198(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DC1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDynamicMesh*                          Mesh;                                              // 0x1A0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x100 - 0xE8)
// ScriptStruct GeometryCollectionNodes.StaticMeshToMeshDataflowNode
struct FStaticMeshToMeshDataflowNode : public FDataflowNode
{
public:
	class UStaticMesh*                           StaticMesh;                                        // 0xE8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseHiRes;                                         // 0xF0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DC3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LODLevel;                                          // 0xF4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          Mesh;                                              // 0xF8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x100 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MeshAppendDataflowNode
struct FMeshAppendDataflowNode : public FDataflowNode
{
public:
	class UDynamicMesh*                          Mesh1;                                             // 0xE8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          Mesh2;                                             // 0xF0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          Mesh;                                              // 0xF8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MeshBooleanDataflowNode
struct FMeshBooleanDataflowNode : public FDataflowNode
{
public:
	enum class EMeshBooleanOperationEnum         Operation;                                         // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DC7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDynamicMesh*                          Mesh1;                                             // 0xF0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          Mesh2;                                             // 0xF8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          Mesh;                                              // 0x100(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x110 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MeshCopyToPointsDataflowNode
struct FMeshCopyToPointsDataflowNode : public FDataflowNode
{
public:
	TArray<struct FVector>                       Points;                                            // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          MeshToCopy;                                        // 0xF8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x100(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DD7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDynamicMesh*                          Mesh;                                              // 0x108(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x100 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GetMeshDataDataflowNode
struct FGetMeshDataDataflowNode : public FDataflowNode
{
public:
	class UDynamicMesh*                          Mesh;                                              // 0xE8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        VertexCount;                                       // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EdgeCount;                                         // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TriangleCount;                                     // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DE5[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB8 (0x1A0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GetCollectionFromAssetDataflowNode
struct FGetCollectionFromAssetDataflowNode : public FDataflowNode
{
public:
	class UGeometryCollection*                   CollectionAsset;                                   // 0xE8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FManagedArrayCollection               Collection;                                        // 0xF0(0xB0)(NativeAccessSpecifierPublic)
};

// 0x180 (0x268 - 0xE8)
// ScriptStruct GeometryCollectionNodes.AppendCollectionAssetsDataflowNode
struct FAppendCollectionAssetsDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection1;                                       // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct FManagedArrayCollection               Collection2;                                       // 0x198(0xB0)(NativeAccessSpecifierPublic)
	TArray<class FString>                        GeometryGroupGuidsOut1;                            // 0x248(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        GeometryGroupGuidsOut2;                            // 0x258(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.PrintStringDataflowNode
struct FPrintStringDataflowNode : public FDataflowNode
{
public:
	bool                                         bPrintToScreen;                                    // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPrintToLog;                                       // 0xE9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E19[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FColor                                Color;                                             // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0xF0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E1E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                String;                                            // 0xF8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x100 - 0xE8)
// ScriptStruct GeometryCollectionNodes.LogStringDataflowNode
struct FLogStringDataflowNode : public FDataflowNode
{
public:
	bool                                         bPrintToLog;                                       // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E30[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                String;                                            // 0xF0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE8 (0x1D0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.BoundingBoxDataflowNode
struct FBoundingBoxDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct FBox                                  BoundingBox;                                       // 0x198(0x38)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x110 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GetBoxLengthsDataflowNode
struct FGetBoxLengthsDataflowNode : public FDataflowNode
{
public:
	TArray<struct FBox>                          Boxes;                                             // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                Lengths;                                           // 0xF8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EBoxLengthMeasurementMethod       MeasurementMethod;                                 // 0x108(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E4F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0x188 - 0xE8)
// ScriptStruct GeometryCollectionNodes.ExpandBoundingBoxDataflowNode
struct FExpandBoundingBoxDataflowNode : public FDataflowNode
{
public:
	struct FBox                                  BoundingBox;                                       // 0xE8(0x38)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Min;                                               // 0x120(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Max;                                               // 0x138(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Center;                                            // 0x150(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HalfExtents;                                       // 0x168(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Volume;                                            // 0x180(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E5E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x110 - 0xE8)
// ScriptStruct GeometryCollectionNodes.ExpandVectorDataflowNode
struct FExpandVectorDataflowNode : public FDataflowNode
{
public:
	struct FVector                               Vector;                                            // 0xE8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        X;                                                 // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Y;                                                 // 0x104(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Z;                                                 // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E72[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x118 - 0xE8)
// ScriptStruct GeometryCollectionNodes.StringAppendDataflowNode
struct FStringAppendDataflowNode : public FDataflowNode
{
public:
	class FString                                String1;                                           // 0xE8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                String2;                                           // 0xF8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                String;                                            // 0x108(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x100 - 0xE8)
// ScriptStruct GeometryCollectionNodes.HashStringDataflowNode
struct FHashStringDataflowNode : public FDataflowNode
{
public:
	class FString                                String;                                            // 0xE8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Hash;                                              // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E8A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.HashVectorDataflowNode
struct FHashVectorDataflowNode : public FDataflowNode
{
public:
	struct FVector                               Vector;                                            // 0xE8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Hash;                                              // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E97[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xE0 (0x1C8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GetBoundingBoxesFromCollectionDataflowNode
struct FGetBoundingBoxesFromCollectionDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x198(0x20)(NativeAccessSpecifierPublic)
	TArray<struct FBox>                          BoundingBoxes;                                     // 0x1B8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xB8 (0x1A0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GetRootIndexFromCollectionDataflowNode
struct FGetRootIndexFromCollectionDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	int32                                        RootIndex;                                         // 0x198(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EC1[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xE0 (0x1C8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GetCentroidsFromCollectionDataflowNode
struct FGetCentroidsFromCollectionDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x198(0x20)(NativeAccessSpecifierPublic)
	TArray<struct FVector>                       Centroids;                                         // 0x1B8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x140 (0x228 - 0xE8)
// ScriptStruct GeometryCollectionNodes.TransformCollectionDataflowNode
struct FTransformCollectionDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct FVector                               Translate;                                         // 0x198(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERotationOrderEnum                RotationOrder;                                     // 0x1B0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EFB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Rotate;                                            // 0x1B8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Scale;                                             // 0x1D0(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UniformScale;                                      // 0x1E8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F0A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RotatePivot;                                       // 0x1F0(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ScalePivot;                                        // 0x208(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInvertTransformation;                             // 0x220(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F12[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0x198 - 0xE8)
// ScriptStruct GeometryCollectionNodes.BakeTransformsInCollectionDataflowNode
struct FBakeTransformsInCollectionDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
};

// 0x98 (0x180 - 0xE8)
// ScriptStruct GeometryCollectionNodes.TransformMeshDataflowNode
struct FTransformMeshDataflowNode : public FDataflowNode
{
public:
	class UDynamicMesh*                          Mesh;                                              // 0xE8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Translate;                                         // 0xF0(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERotationOrderEnum                RotationOrder;                                     // 0x108(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F36[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Rotate;                                            // 0x110(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Scale;                                             // 0x128(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UniformScale;                                      // 0x140(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F43[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RotatePivot;                                       // 0x148(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ScalePivot;                                        // 0x160(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInvertTransformation;                             // 0x178(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F49[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CompareIntDataflowNode
struct FCompareIntDataflowNode : public FDataflowNode
{
public:
	enum class ECompareOperationEnum             Operation;                                         // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F50[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        IntA;                                              // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IntB;                                              // 0xF0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0xF4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F5A[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CompareFloatDataflowNode
struct FCompareFloatDataflowNode : public FDataflowNode
{
public:
	enum class ECompareOperationEnum             Operation;                                         // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F6B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FloatA;                                            // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatB;                                            // 0xF0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0xF4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F73[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.BranchDataflowNode
struct FBranchDataflowNode : public FDataflowNode
{
public:
	class UDynamicMesh*                          MeshA;                                             // 0xE8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          MeshB;                                             // 0xF0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCondition;                                        // 0xF8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F8B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDynamicMesh*                          Mesh;                                              // 0x100(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x218 (0x300 - 0xE8)
// ScriptStruct GeometryCollectionNodes.BranchCollectionDataflowNode
struct FBranchCollectionDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               TrueCollection;                                    // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct FManagedArrayCollection               FalseCollection;                                   // 0x198(0xB0)(NativeAccessSpecifierPublic)
	bool                                         bCondition;                                        // 0x248(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F99[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FManagedArrayCollection               ChosenCollection;                                  // 0x250(0xB0)(NativeAccessSpecifierPublic)
};

// 0xC0 (0x1A8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GetSchemaDataflowNode
struct FGetSchemaDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	class FString                                String;                                            // 0x198(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE8 (0x1D0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.RemoveOnBreakDataflowNode
struct FRemoveOnBreakDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x198(0x20)(NativeAccessSpecifierPublic)
	bool                                         bEnabledRemoval;                                   // 0x1B8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FB2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2f                             PostBreakTimer;                                    // 0x1BC(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2f                             RemovalTimer;                                      // 0x1C4(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClusterCrumbling;                                 // 0x1CC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FBF[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD8 (0x1C0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SetAnchorStateDataflowNode
struct FSetAnchorStateDataflowNode : public FDataflowNode
{
public:
	enum class EAnchorStateEnum                  AnchorState;                                       // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetNotSelectedBonesToOppositeState;               // 0xE9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FD7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FManagedArrayCollection               Collection;                                        // 0xF0(0xB0)(NativeAccessSpecifierPublic)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x1A0(0x20)(NativeAccessSpecifierPublic)
};

// 0xC0 (0x1A8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.ProximityDataflowNode
struct FProximityDataflowNode : public FDataflowNode
{
public:
	enum class EProximityMethodEnum              ProximityMethod;                                   // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FE7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DistanceThreshold;                                 // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ContactThreshold;                                  // 0xF0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EProximityContactFilteringMethodEnum FilterContactMethod;                               // 0xF4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseAsConnectionGraph;                             // 0xF5(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EConnectionContactAreaMethodEnum  ContactAreaMethod;                                 // 0xF6(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FF1[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FManagedArrayCollection               Collection;                                        // 0xF8(0xB0)(NativeAccessSpecifierPublic)
};

// 0x118 (0x200 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionSetPivotDataflowNode
struct FCollectionSetPivotDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	uint8                                        Pad_1FFE[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x1A0(0x60)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE0 (0x1C8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.AddCustomCollectionAttributeDataflowNode
struct FAddCustomCollectionAttributeDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	enum class EStandardGroupNameEnum            GroupName;                                         // 0x198(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2008[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CustomGroupName;                                   // 0x1A0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AttrName;                                          // 0x1B0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECustomAttributeTypeEnum          CustomAttributeType;                               // 0x1C0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_200F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumElements;                                       // 0x1C4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GetNumElementsInCollectionGroupDataflowNode
struct FGetNumElementsInCollectionGroupDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	enum class EStandardGroupNameEnum            GroupName;                                         // 0x198(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_201C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CustomGroupName;                                   // 0x1A0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumElements;                                       // 0x1B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2022[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x148 (0x230 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GetCollectionAttributeDataTypedDataflowNode
struct FGetCollectionAttributeDataTypedDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	enum class EStandardGroupNameEnum            GroupName;                                         // 0x198(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_202F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CustomGroupName;                                   // 0x1A0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AttrName;                                          // 0x1B0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<bool>                                 BoolAttributeData;                                 // 0x1C0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                FloatAttributeData;                                // 0x1D0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<double>                               DoubleAttributeData;                               // 0x1E0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                Int32AttributeData;                                // 0x1F0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        StringAttributeData;                               // 0x200(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector3f>                     Vector3fAttributeData;                             // 0x210(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector3d>                     Vector3dAttributeData;                             // 0x220(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x148 (0x230 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SetCollectionAttributeDataTypedDataflowNode
struct FSetCollectionAttributeDataTypedDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	enum class EStandardGroupNameEnum            GroupName;                                         // 0x198(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_204C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CustomGroupName;                                   // 0x1A0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AttrName;                                          // 0x1B0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<bool>                                 BoolAttributeData;                                 // 0x1C0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                FloatAttributeData;                                // 0x1D0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<double>                               DoubleAttributeData;                               // 0x1E0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                Int32AttributeData;                                // 0x1F0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        StringAttributeData;                               // 0x200(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector3f>                     Vector3fAttributeData;                             // 0x210(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector3d>                     Vector3dAttributeData;                             // 0x220(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xF0 (0x1D8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SetVertexColorInCollectionFromVertexSelectionDataflowNode
struct FSetVertexColorInCollectionFromVertexSelectionDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct FDataflowVertexSelection              VertexSelection;                                   // 0x198(0x20)(NativeAccessSpecifierPublic)
	struct FLinearColor                          SelectedColor;                                     // 0x1B8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          NonSelectedColor;                                  // 0x1C8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x118 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SelectionToVertexListDataflowNode
struct FSelectionToVertexListDataflowNode : public FDataflowNode
{
public:
	struct FDataflowVertexSelection              VertexSelection;                                   // 0xE8(0x20)(NativeAccessSpecifierPublic)
	TArray<int32>                                VertexList;                                        // 0x108(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xC8 (0x1B0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SetVertexColorInCollectionFromFloatArrayDataflowNode
struct FSetVertexColorInCollectionFromFloatArrayDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	TArray<float>                                FloatArray;                                        // 0x198(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x1A8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20C1[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x128 (0x210 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MultiplyTransformDataflowNode
struct FMultiplyTransformDataflowNode : public FDataflowNode
{
public:
	uint8                                        Pad_20C8[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InLeftTransform;                                   // 0xF0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            InRightTransform;                                  // 0x150(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            OutTransform;                                      // 0x1B0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC8 (0x1B0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.InvertTransformDataflowNode
struct FInvertTransformDataflowNode : public FDataflowNode
{
public:
	uint8                                        Pad_20D9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InTransform;                                       // 0xF0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            OutTransform;                                      // 0x150(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x110 - 0x108)
// ScriptStruct GeometryCollectionNodes.GetFloatOverrideFromAssetDataflowNode
struct FGetFloatOverrideFromAssetDataflowNode : public FDataflowOverrideNode
{
public:
	float                                        Float;                                             // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatDefault;                                      // 0x10C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x110 - 0x108)
// ScriptStruct GeometryCollectionNodes.GetIntOverrideFromAssetDataflowNode
struct FGetIntOverrideFromAssetDataflowNode : public FDataflowOverrideNode
{
public:
	int32                                        Int;                                               // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IntDefault;                                        // 0x10C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x110 - 0x108)
// ScriptStruct GeometryCollectionNodes.GetBoolOverrideFromAssetDataflowNode
struct FGetBoolOverrideFromAssetDataflowNode : public FDataflowOverrideNode
{
public:
	bool                                         Bool;                                              // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         BoolDefault;                                       // 0x109(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_210D[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x128 - 0x108)
// ScriptStruct GeometryCollectionNodes.GetStringOverrideFromAssetDataflowNode
struct FGetStringOverrideFromAssetDataflowNode : public FDataflowOverrideNode
{
public:
	class FString                                String;                                            // 0x108(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StringDefault;                                     // 0x118(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionAllDataflowNode
struct FCollectionTransformSelectionAllDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x198(0x20)(NativeAccessSpecifierPublic)
};

// 0x68 (0x150 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionSetOperationDataflowNode
struct FCollectionTransformSelectionSetOperationDataflowNode : public FDataflowNode
{
public:
	enum class ESetOperationEnum                 Operation;                                         // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2132[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataflowTransformSelection           TransformSelectionA;                               // 0xF0(0x20)(NativeAccessSpecifierPublic)
	struct FDataflowTransformSelection           TransformSelectionB;                               // 0x110(0x20)(NativeAccessSpecifierPublic)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x130(0x20)(NativeAccessSpecifierPublic)
};

// 0xE0 (0x1C8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionInfoDataflowNode
struct FCollectionTransformSelectionInfoDataflowNode : public FDataflowNode
{
public:
	struct FDataflowTransformSelection           TransformSelection;                                // 0xE8(0x20)(NativeAccessSpecifierPublic)
	struct FManagedArrayCollection               Collection;                                        // 0x108(0xB0)(NativeAccessSpecifierPublic)
	class FString                                String;                                            // 0x1B8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionNoneDataflowNode
struct FCollectionTransformSelectionNoneDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x198(0x20)(NativeAccessSpecifierPublic)
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionInvertDataflowNode
struct FCollectionTransformSelectionInvertDataflowNode : public FDataflowNode
{
public:
	struct FDataflowTransformSelection           TransformSelection;                                // 0xE8(0x20)(NativeAccessSpecifierPublic)
};

// 0xE0 (0x1C8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionRandomDataflowNode
struct FCollectionTransformSelectionRandomDataflowNode : public FDataflowNode
{
public:
	bool                                         bDeterministic;                                    // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_216B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RandomSeed;                                        // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RandomThreshold;                                   // 0xF0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2174[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FManagedArrayCollection               Collection;                                        // 0xF8(0xB0)(NativeAccessSpecifierPublic)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x1A8(0x20)(NativeAccessSpecifierPublic)
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionRootDataflowNode
struct FCollectionTransformSelectionRootDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x198(0x20)(NativeAccessSpecifierPublic)
};

// 0xE0 (0x1C8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionCustomDataflowNode
struct FCollectionTransformSelectionCustomDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	class FString                                BoneIndicies;                                      // 0x198(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x1A8(0x20)(NativeAccessSpecifierPublic)
};

// 0xE0 (0x1C8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionFromIndexArrayDataflowNode
struct FCollectionTransformSelectionFromIndexArrayDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	TArray<int32>                                BoneIndices;                                       // 0x198(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x1A8(0x20)(NativeAccessSpecifierPublic)
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionParentDataflowNode
struct FCollectionTransformSelectionParentDataflowNode : public FDataflowNode
{
public:
	struct FDataflowTransformSelection           TransformSelection;                                // 0xE8(0x20)(NativeAccessSpecifierPublic)
	struct FManagedArrayCollection               Collection;                                        // 0x108(0xB0)(NativeAccessSpecifierPublic)
};

// 0x30 (0x118 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionByPercentageDataflowNode
struct FCollectionTransformSelectionByPercentageDataflowNode : public FDataflowNode
{
public:
	struct FDataflowTransformSelection           TransformSelection;                                // 0xE8(0x20)(NativeAccessSpecifierPublic)
	int32                                        Percentage;                                        // 0x108(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeterministic;                                    // 0x10C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21D6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RandomSeed;                                        // 0x110(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21E6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionChildrenDataflowNode
struct FCollectionTransformSelectionChildrenDataflowNode : public FDataflowNode
{
public:
	struct FDataflowTransformSelection           TransformSelection;                                // 0xE8(0x20)(NativeAccessSpecifierPublic)
	struct FManagedArrayCollection               Collection;                                        // 0x108(0xB0)(NativeAccessSpecifierPublic)
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionSiblingsDataflowNode
struct FCollectionTransformSelectionSiblingsDataflowNode : public FDataflowNode
{
public:
	struct FDataflowTransformSelection           TransformSelection;                                // 0xE8(0x20)(NativeAccessSpecifierPublic)
	struct FManagedArrayCollection               Collection;                                        // 0x108(0xB0)(NativeAccessSpecifierPublic)
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionLevelDataflowNode
struct FCollectionTransformSelectionLevelDataflowNode : public FDataflowNode
{
public:
	struct FDataflowTransformSelection           TransformSelection;                                // 0xE8(0x20)(NativeAccessSpecifierPublic)
	struct FManagedArrayCollection               Collection;                                        // 0x108(0xB0)(NativeAccessSpecifierPublic)
};

// 0xD8 (0x1C0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionTargetLevelDataflowNode
struct FCollectionTransformSelectionTargetLevelDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	int32                                        TargetLevel;                                       // 0x198(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkipEmbedded;                                     // 0x19C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2216[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataflowTransformSelection           TransformSelection;                                // 0x1A0(0x20)(NativeAccessSpecifierPublic)
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionContactDataflowNode
struct FCollectionTransformSelectionContactDataflowNode : public FDataflowNode
{
public:
	struct FDataflowTransformSelection           TransformSelection;                                // 0xE8(0x20)(NativeAccessSpecifierPublic)
	struct FManagedArrayCollection               Collection;                                        // 0x108(0xB0)(NativeAccessSpecifierPublic)
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionLeafDataflowNode
struct FCollectionTransformSelectionLeafDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x198(0x20)(NativeAccessSpecifierPublic)
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionClusterDataflowNode
struct FCollectionTransformSelectionClusterDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x198(0x20)(NativeAccessSpecifierPublic)
};

// 0x30 (0x118 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SelectFloatArrayIndicesInRangeDataflowNode
struct FSelectFloatArrayIndicesInRangeDataflowNode : public FDataflowNode
{
public:
	TArray<float>                                Values;                                            // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Min;                                               // 0xF8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Max;                                               // 0xFC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERangeSettingEnum                 RangeSetting;                                      // 0x100(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInclusive;                                        // 0x101(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_224C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                Indices;                                           // 0x108(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xE0 (0x1C8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionBySizeDataflowNode
struct FCollectionTransformSelectionBySizeDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	float                                        SizeMin;                                           // 0x198(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SizeMax;                                           // 0x19C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERangeSettingEnum                 RangeSetting;                                      // 0x1A0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInclusive;                                        // 0x1A1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseRelativeSize;                                  // 0x1A2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2268[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataflowTransformSelection           TransformSelection;                                // 0x1A8(0x20)(NativeAccessSpecifierPublic)
};

// 0xE0 (0x1C8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionByVolumeDataflowNode
struct FCollectionTransformSelectionByVolumeDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	float                                        VolumeMin;                                         // 0x198(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VolumeMax;                                         // 0x19C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERangeSettingEnum                 RangeSetting;                                      // 0x1A0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInclusive;                                        // 0x1A1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_228C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataflowTransformSelection           TransformSelection;                                // 0x1A8(0x20)(NativeAccessSpecifierPublic)
};

// 0x178 (0x260 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionInBoxDataflowNode
struct FCollectionTransformSelectionInBoxDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct FBox                                  Box;                                               // 0x198(0x38)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Transform;                                         // 0x1D0(0x60)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESelectSubjectTypeEnum            Type;                                              // 0x230(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllVerticesMustContainedInBox;                    // 0x231(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22A9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataflowTransformSelection           TransformSelection;                                // 0x238(0x20)(NativeAccessSpecifierPublic)
	uint8                                        Pad_22B0[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x168 (0x250 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionInSphereDataflowNode
struct FCollectionTransformSelectionInSphereDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct FSphere                               Sphere;                                            // 0x198(0x20)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_22C8[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x1C0(0x60)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESelectSubjectTypeEnum            Type;                                              // 0x220(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllVerticesMustContainedInSphere;                 // 0x221(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22D1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataflowTransformSelection           TransformSelection;                                // 0x228(0x20)(NativeAccessSpecifierPublic)
	uint8                                        Pad_22D5[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x100 (0x1E8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionByFloatAttrDataflowNode
struct FCollectionTransformSelectionByFloatAttrDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	class FString                                GroupName;                                         // 0x198(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AttrName;                                          // 0x1A8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Min;                                               // 0x1B8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Max;                                               // 0x1BC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERangeSettingEnum                 RangeSetting;                                      // 0x1C0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInclusive;                                        // 0x1C1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_230B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataflowTransformSelection           TransformSelection;                                // 0x1C8(0x20)(NativeAccessSpecifierPublic)
};

// 0x100 (0x1E8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionByIntAttrDataflowNode
struct FCollectionTransformSelectionByIntAttrDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	class FString                                GroupName;                                         // 0x198(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AttrName;                                          // 0x1A8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Min;                                               // 0x1B8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Max;                                               // 0x1BC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERangeSettingEnum                 RangeSetting;                                      // 0x1C0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInclusive;                                        // 0x1C1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2323[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataflowTransformSelection           TransformSelection;                                // 0x1C8(0x20)(NativeAccessSpecifierPublic)
};

// 0xE0 (0x1C8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionVertexSelectionCustomDataflowNode
struct FCollectionVertexSelectionCustomDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	class FString                                VertexIndicies;                                    // 0x198(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataflowVertexSelection              VertexSelection;                                   // 0x1A8(0x20)(NativeAccessSpecifierPublic)
};

// 0xE0 (0x1C8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionFaceSelectionCustomDataflowNode
struct FCollectionFaceSelectionCustomDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	class FString                                FaceIndicies;                                      // 0x198(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataflowFaceSelection                FaceSelection;                                     // 0x1A8(0x20)(NativeAccessSpecifierPublic)
};

// 0x118 (0x200 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionSelectionConvertDataflowNode
struct FCollectionSelectionConvertDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x198(0x20)(NativeAccessSpecifierPublic)
	struct FDataflowFaceSelection                FaceSelection;                                     // 0x1B8(0x20)(NativeAccessSpecifierPublic)
	struct FDataflowVertexSelection              VertexSelection;                                   // 0x1D8(0x20)(NativeAccessSpecifierPublic)
	bool                                         bAllElementsMustBeSelected;                        // 0x1F8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_235E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionFaceSelectionInvertDataflowNode
struct FCollectionFaceSelectionInvertDataflowNode : public FDataflowNode
{
public:
	struct FDataflowFaceSelection                FaceSelection;                                     // 0xE8(0x20)(NativeAccessSpecifierPublic)
};

// 0x30 (0x118 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionVertexSelectionByPercentageDataflowNode
struct FCollectionVertexSelectionByPercentageDataflowNode : public FDataflowNode
{
public:
	struct FDataflowVertexSelection              VertexSelection;                                   // 0xE8(0x20)(NativeAccessSpecifierPublic)
	int32                                        Percentage;                                        // 0x108(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeterministic;                                    // 0x10C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_237C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RandomSeed;                                        // 0x110(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2380[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x150 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionVertexSelectionSetOperationDataflowNode
struct FCollectionVertexSelectionSetOperationDataflowNode : public FDataflowNode
{
public:
	enum class ESetOperationEnum                 Operation;                                         // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2392[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataflowVertexSelection              VertexSelectionA;                                  // 0xF0(0x20)(NativeAccessSpecifierPublic)
	struct FDataflowVertexSelection              VertexSelectionB;                                  // 0x110(0x20)(NativeAccessSpecifierPublic)
	struct FDataflowVertexSelection              VertexSelection;                                   // 0x130(0x20)(NativeAccessSpecifierPublic)
};

// 0x198 (0x280 - 0xE8)
// ScriptStruct GeometryCollectionNodes.TransformCollectionAttributeDataflowNode
struct FTransformCollectionAttributeDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	uint8                                        Pad_23AB[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            TransformIn;                                       // 0x1A0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            LocalTransform;                                    // 0x200(0x60)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                GroupName;                                         // 0x260(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AttributeName;                                     // 0x270(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


