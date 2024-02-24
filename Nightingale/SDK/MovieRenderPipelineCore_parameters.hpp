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

// 0x1E8 (0x1E8 - 0x0)
// Function MovieRenderPipelineCore.MovieGraphBlueprintLibrary.ResolveFilenameFormatArguments
struct UMovieGraphBlueprintLibrary_ResolveFilenameFormatArguments_Params
{
public:
	class FString                                InFormatString;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieGraphFilenameResolveParams      InParams;                                          // 0x10(0x128)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FMovieGraphResolveArgs                OutMergedFormatArgs;                               // 0x138(0xA0)(Parm, OutParm, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x1D8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function MovieRenderPipelineCore.MovieGraphBlueprintLibrary.GetEffectiveOutputResolution
struct UMovieGraphBlueprintLibrary_GetEffectiveOutputResolution_Params
{
public:
	class UMovieGraphEvaluatedConfig*            InEvaluatedGraph;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InBranchName;                                      // 0x8(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntPoint                             ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function MovieRenderPipelineCore.MovieGraphBlueprintLibrary.GetEffectiveFrameRate
struct UMovieGraphBlueprintLibrary_GetEffectiveFrameRate_Params
{
public:
	class UMovieGraphOutputSettingNode*          InNode;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameRate                            InDefaultRate;                                     // 0x8(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameRate                            ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MovieGraphBurnInWidget.UpdateForGraph
struct UMovieGraphBurnInWidget_UpdateForGraph_Params
{
public:
	class UMovieGraphPipeline*                   InGraphPipeline;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MovieGraphValueContainer.SetValueTypeObject
struct UMovieGraphValueContainer_SetValueTypeObject_Params
{
public:
	class UObject*                               ValueTypeObject;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MovieRenderPipelineCore.MovieGraphValueContainer.SetValueType
struct UMovieGraphValueContainer_SetValueType_Params
{
public:
	enum class EMovieGraphValueType              ValueType;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function MovieRenderPipelineCore.MovieGraphValueContainer.SetValueText
struct UMovieGraphValueContainer_SetValueText_Params
{
public:
	class FText                                  InValue;                                           // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1958[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function MovieRenderPipelineCore.MovieGraphValueContainer.SetValueString
struct UMovieGraphValueContainer_SetValueString_Params
{
public:
	class FString                                InValue;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1977[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function MovieRenderPipelineCore.MovieGraphValueContainer.SetValueSerializedString
struct UMovieGraphValueContainer_SetValueSerializedString_Params
{
public:
	class FString                                NewValue;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_199C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MovieGraphValueContainer.SetValueObject
struct UMovieGraphValueContainer_SetValueObject_Params
{
public:
	class UObject*                               InValue;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19CB[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function MovieRenderPipelineCore.MovieGraphValueContainer.SetValueName
struct UMovieGraphValueContainer_SetValueName_Params
{
public:
	class FName                                  InValue;                                           // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19E6[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MovieGraphValueContainer.SetValueInt64
struct UMovieGraphValueContainer_SetValueInt64_Params
{
public:
	int64                                        InValue;                                           // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A12[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MovieGraphValueContainer.SetValueInt32
struct UMovieGraphValueContainer_SetValueInt32_Params
{
public:
	int32                                        InValue;                                           // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A33[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MovieGraphValueContainer.SetValueFloat
struct UMovieGraphValueContainer_SetValueFloat_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A5A[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function MovieRenderPipelineCore.MovieGraphValueContainer.SetValueEnum
struct UMovieGraphValueContainer_SetValueEnum_Params
{
public:
	uint8                                        InValue;                                           // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A78[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEnum*                                 Enum;                                              // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A80[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MovieGraphValueContainer.SetValueDouble
struct UMovieGraphValueContainer_SetValueDouble_Params
{
public:
	double                                       InValue;                                           // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A9B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function MovieRenderPipelineCore.MovieGraphValueContainer.SetValueContainerType
struct UMovieGraphValueContainer_SetValueContainerType_Params
{
public:
	enum class EMovieGraphContainerType          ContainerType;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MovieGraphValueContainer.SetValueClass
struct UMovieGraphValueContainer_SetValueClass_Params
{
public:
	class UClass*                                InValue;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1ADF[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2 (0x2 - 0x0)
// Function MovieRenderPipelineCore.MovieGraphValueContainer.SetValueByte
struct UMovieGraphValueContainer_SetValueByte_Params
{
public:
	uint8                                        InValue;                                           // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function MovieRenderPipelineCore.MovieGraphValueContainer.SetValueBool
struct UMovieGraphValueContainer_SetValueBool_Params
{
public:
	bool                                         bInValue;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MovieGraphValueContainer.GetValueTypeObject
struct UMovieGraphValueContainer_GetValueTypeObject_Params
{
public:
	class UObject*                               ReturnValue;                                       // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MovieRenderPipelineCore.MovieGraphValueContainer.GetValueType
struct UMovieGraphValueContainer_GetValueType_Params
{
public:
	enum class EMovieGraphValueType              ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function MovieRenderPipelineCore.MovieGraphValueContainer.GetValueText
struct UMovieGraphValueContainer_GetValueText_Params
{
public:
	class FText                                  OutValue;                                          // 0x0(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B6B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function MovieRenderPipelineCore.MovieGraphValueContainer.GetValueString
struct UMovieGraphValueContainer_GetValueString_Params
{
public:
	class FString                                OutValue;                                          // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B7D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MovieGraphValueContainer.GetValueSerializedString
struct UMovieGraphValueContainer_GetValueSerializedString_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function MovieRenderPipelineCore.MovieGraphValueContainer.GetValueObject
struct UMovieGraphValueContainer_GetValueObject_Params
{
public:
	class UObject*                               OutValue;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                RequestedClass;                                    // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BCC[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function MovieRenderPipelineCore.MovieGraphValueContainer.GetValueName
struct UMovieGraphValueContainer_GetValueName_Params
{
public:
	class FName                                  OutValue;                                          // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C13[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MovieGraphValueContainer.GetValueInt64
struct UMovieGraphValueContainer_GetValueInt64_Params
{
public:
	int64                                        OutValue;                                          // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C31[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MovieGraphValueContainer.GetValueInt32
struct UMovieGraphValueContainer_GetValueInt32_Params
{
public:
	int32                                        OutValue;                                          // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C57[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MovieGraphValueContainer.GetValueFloat
struct UMovieGraphValueContainer_GetValueFloat_Params
{
public:
	float                                        OutValue;                                          // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C66[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function MovieRenderPipelineCore.MovieGraphValueContainer.GetValueEnum
struct UMovieGraphValueContainer_GetValueEnum_Params
{
public:
	uint8                                        OutValue;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C6F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEnum*                                 RequestedEnum;                                     // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C7A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MovieGraphValueContainer.GetValueDouble
struct UMovieGraphValueContainer_GetValueDouble_Params
{
public:
	double                                       OutValue;                                          // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C97[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function MovieRenderPipelineCore.MovieGraphValueContainer.GetValueContainerType
struct UMovieGraphValueContainer_GetValueContainerType_Params
{
public:
	enum class EMovieGraphContainerType          ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MovieGraphValueContainer.GetValueClass
struct UMovieGraphValueContainer_GetValueClass_Params
{
public:
	class UClass*                                OutValue;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CC8[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2 (0x2 - 0x0)
// Function MovieRenderPipelineCore.MovieGraphValueContainer.GetValueByte
struct UMovieGraphValueContainer_GetValueByte_Params
{
public:
	uint8                                        OutValue;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function MovieRenderPipelineCore.MovieGraphValueContainer.GetValueBool
struct UMovieGraphValueContainer_GetValueBool_Params
{
public:
	bool                                         bOutValue;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function MovieRenderPipelineCore.MovieGraphConfig.GetVariables
struct UMovieGraphConfig_GetVariables_Params
{
public:
	bool                                         bIncludeGlobal;                                    // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DF4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMovieGraphVariable*>           ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function MovieRenderPipelineCore.MovieGraphConfig.CreateFlattenedGraph
struct UMovieGraphConfig_CreateFlattenedGraph_Params
{
public:
	struct FMovieGraphTraversalContext           InContext;                                         // 0x0(0x78)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UMovieGraphEvaluatedConfig*            ReturnValue;                                       // 0x78(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MovieGraphConfig.AddVariable
struct UMovieGraphConfig_AddVariable_Params
{
public:
	class FName                                  InCustomBaseName;                                  // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieGraphVariable*                   ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBase.Shutdown
struct UMoviePipelineBase_Shutdown_Params
{
public:
	bool                                         bIsError;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBase.RequestShutdown
struct UMoviePipelineBase_RequestShutdown_Params
{
public:
	bool                                         bIsError;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBase.IsShutdownRequested
struct UMoviePipelineBase_IsShutdownRequested_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBase.GetPipelineState
struct UMoviePipelineBase_GetPipelineState_Params
{
public:
	enum class EMovieRenderPipelineState         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MovieGraphPipeline.SetInitializationTime
struct UMovieGraphPipeline_SetInitializationTime_Params
{
public:
	struct FDateTime                             InDateTime;                                        // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function MovieRenderPipelineCore.MovieGraphPipeline.Initialize
struct UMovieGraphPipeline_Initialize_Params
{
public:
	class UMoviePipelineExecutorJob*             InJob;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieGraphInitConfig                 InitConfig;                                        // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MovieGraphPipeline.GetInitializationTime
struct UMovieGraphPipeline_GetInitializationTime_Params
{
public:
	struct FDateTime                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MovieGraphPipeline.GetCurrentJob
struct UMovieGraphPipeline_GetCurrentJob_Params
{
public:
	class UMoviePipelineExecutorJob*             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function MovieRenderPipelineCore.MovieGraphSubgraphNode.SetSubGraphAsset
struct UMovieGraphSubgraphNode_SetSubGraphAsset_Params
{
public:
	TSoftObjectPtr<class UMovieGraphConfig>      InSubgraphAsset;                                   // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MovieGraphSubgraphNode.GetSubgraphAsset
struct UMovieGraphSubgraphNode_GetSubgraphAsset_Params
{
public:
	class UMovieGraphConfig*                     ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.SetVariableAssignmentEnableState
struct UMovieJobVariableAssignmentContainer_SetVariableAssignmentEnableState_Params
{
public:
	class UMovieGraphVariable*                   InGraphVariable;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsEnabled;                                        // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_239A[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.SetValueText
struct UMovieJobVariableAssignmentContainer_SetValueText_Params
{
public:
	class FName                                  PropertyName;                                      // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  InValue;                                           // 0x8(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23BB[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.SetValueString
struct UMovieJobVariableAssignmentContainer_SetValueString_Params
{
public:
	class FName                                  PropertyName;                                      // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InValue;                                           // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23E6[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.SetValueSerializedString
struct UMovieJobVariableAssignmentContainer_SetValueSerializedString_Params
{
public:
	class FName                                  PropertyName;                                      // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NewValue;                                          // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2415[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.SetValueObject
struct UMovieJobVariableAssignmentContainer_SetValueObject_Params
{
public:
	class FName                                  PropertyName;                                      // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               InValue;                                           // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2432[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.SetValueName
struct UMovieJobVariableAssignmentContainer_SetValueName_Params
{
public:
	class FName                                  PropertyName;                                      // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InValue;                                           // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_245A[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.SetValueInt64
struct UMovieJobVariableAssignmentContainer_SetValueInt64_Params
{
public:
	class FName                                  PropertyName;                                      // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        InValue;                                           // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2477[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.SetValueInt32
struct UMovieJobVariableAssignmentContainer_SetValueInt32_Params
{
public:
	class FName                                  PropertyName;                                      // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InValue;                                           // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2499[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.SetValueFloat
struct UMovieJobVariableAssignmentContainer_SetValueFloat_Params
{
public:
	class FName                                  PropertyName;                                      // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InValue;                                           // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24D7[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.SetValueEnum
struct UMovieJobVariableAssignmentContainer_SetValueEnum_Params
{
public:
	class FName                                  PropertyName;                                      // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        InValue;                                           // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2502[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEnum*                                 Enum;                                              // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2507[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.SetValueDouble
struct UMovieJobVariableAssignmentContainer_SetValueDouble_Params
{
public:
	class FName                                  PropertyName;                                      // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       InValue;                                           // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2531[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.SetValueClass
struct UMovieJobVariableAssignmentContainer_SetValueClass_Params
{
public:
	class FName                                  PropertyName;                                      // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                InValue;                                           // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2567[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.SetValueByte
struct UMovieJobVariableAssignmentContainer_SetValueByte_Params
{
public:
	class FName                                  PropertyName;                                      // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        InValue;                                           // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2599[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.SetValueBool
struct UMovieJobVariableAssignmentContainer_SetValueBool_Params
{
public:
	class FName                                  PropertyName;                                      // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInValue;                                          // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_25B4[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.SetGraphConfig
struct UMovieJobVariableAssignmentContainer_SetGraphConfig_Params
{
public:
	TSoftObjectPtr<class UMovieGraphConfig>      InGraphConfig;                                     // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.GetVariableAssignmentEnableState
struct UMovieJobVariableAssignmentContainer_GetVariableAssignmentEnableState_Params
{
public:
	class UMovieGraphVariable*                   InGraphVariable;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOutIsEnabled;                                     // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_25EC[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.GetValueTypeObject
struct UMovieJobVariableAssignmentContainer_GetValueTypeObject_Params
{
public:
	class FName                                  PropertyName;                                      // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ReturnValue;                                       // 0x8(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.GetValueType
struct UMovieJobVariableAssignmentContainer_GetValueType_Params
{
public:
	class FName                                  PropertyName;                                      // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMovieGraphValueType              ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2603[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.GetValueText
struct UMovieJobVariableAssignmentContainer_GetValueText_Params
{
public:
	class FName                                  PropertyName;                                      // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  OutValue;                                          // 0x8(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2617[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.GetValueString
struct UMovieJobVariableAssignmentContainer_GetValueString_Params
{
public:
	class FName                                  PropertyName;                                      // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutValue;                                          // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2651[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.GetValueSerializedString
struct UMovieJobVariableAssignmentContainer_GetValueSerializedString_Params
{
public:
	class FName                                  PropertyName;                                      // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.GetValueObject
struct UMovieJobVariableAssignmentContainer_GetValueObject_Params
{
public:
	class FName                                  PropertyName;                                      // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               OutValue;                                          // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                RequestedClass;                                    // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2688[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.GetValueName
struct UMovieJobVariableAssignmentContainer_GetValueName_Params
{
public:
	class FName                                  PropertyName;                                      // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  OutValue;                                          // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26A5[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.GetValueInt64
struct UMovieJobVariableAssignmentContainer_GetValueInt64_Params
{
public:
	class FName                                  PropertyName;                                      // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        OutValue;                                          // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26CB[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.GetValueInt32
struct UMovieJobVariableAssignmentContainer_GetValueInt32_Params
{
public:
	class FName                                  PropertyName;                                      // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutValue;                                          // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26F0[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.GetValueFloat
struct UMovieJobVariableAssignmentContainer_GetValueFloat_Params
{
public:
	class FName                                  PropertyName;                                      // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutValue;                                          // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_271D[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.GetValueEnum
struct UMovieJobVariableAssignmentContainer_GetValueEnum_Params
{
public:
	class FName                                  PropertyName;                                      // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        OutValue;                                          // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_274B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEnum*                                 RequestedEnum;                                     // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2754[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.GetValueDouble
struct UMovieJobVariableAssignmentContainer_GetValueDouble_Params
{
public:
	class FName                                  PropertyName;                                      // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       OutValue;                                          // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2787[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.GetValueContainerType
struct UMovieJobVariableAssignmentContainer_GetValueContainerType_Params
{
public:
	class FName                                  PropertyName;                                      // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMovieGraphContainerType          ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27A6[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.GetValueClass
struct UMovieJobVariableAssignmentContainer_GetValueClass_Params
{
public:
	class FName                                  PropertyName;                                      // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                OutValue;                                          // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27C1[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.GetValueByte
struct UMovieJobVariableAssignmentContainer_GetValueByte_Params
{
public:
	class FName                                  PropertyName;                                      // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        OutValue;                                          // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27DD[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.GetValueBool
struct UMovieJobVariableAssignmentContainer_GetValueBool_Params
{
public:
	class FName                                  PropertyName;                                      // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOutValue;                                         // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_280A[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineSetting.SetIsEnabled
struct UMoviePipelineSetting_SetIsEnabled_Params
{
public:
	bool                                         bInEnabled;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineSetting.IsEnabled
struct UMoviePipelineSetting_IsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineSetting.BuildNewProcessCommandLineArgs
struct UMoviePipelineSetting_BuildNewProcessCommandLineArgs_Params
{
public:
	TArray<class FString>                        InOutUnrealURLParams;                              // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class FString>                        InOutCommandLineArgs;                              // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class FString>                        InOutDeviceProfileCvars;                           // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class FString>                        InOutExecCmds;                                     // 0x30(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineSetting.BuildNewProcessCommandLine
struct UMoviePipelineSetting_BuildNewProcessCommandLine_Params
{
public:
	class FString                                InOutUnrealURLParams;                              // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InOutCommandLineArgs;                              // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineCollection.SetCollectionName
struct UMoviePipelineCollection_SetCollectionName_Params
{
public:
	class FString                                InName;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineCollection.GetMatchingActors
struct UMoviePipelineCollection_GetMatchingActors_Params
{
public:
	class UWorld*                                World;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInvertResult;                                     // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A59[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineCollection.GetCollectionName
struct UMoviePipelineCollection_GetCollectionName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineCollection.AddQuery
struct UMoviePipelineCollection_AddQuery_Params
{
public:
	class UMoviePipelineCollectionQuery*         Query;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineCollectionModifier.SetIsInverted
struct UMoviePipelineCollectionModifier_SetIsInverted_Params
{
public:
	bool                                         bIsInverted;                                       // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineCollectionModifier.SetCollections
struct UMoviePipelineCollectionModifier_SetCollections_Params
{
public:
	TArray<class UMoviePipelineCollection*>      InCollections;                                     // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineCollectionModifier.IsInverted
struct UMoviePipelineCollectionModifier_IsInverted_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineCollectionModifier.GetCollections
struct UMoviePipelineCollectionModifier_GetCollections_Params
{
public:
	TArray<class UMoviePipelineCollection*>      ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineCollectionModifier.AddCollection
struct UMoviePipelineCollectionModifier_AddCollection_Params
{
public:
	class UMoviePipelineCollection*              Collection;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineMaterialModifier.SetMaterial
struct UMoviePipelineMaterialModifier_SetMaterial_Params
{
public:
	TSoftObjectPtr<class UMaterialInterface>     InMaterial;                                        // 0x0(0x28)(Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineMaterialModifier.ApplyModifier
struct UMoviePipelineMaterialModifier_ApplyModifier_Params
{
public:
	class UWorld*                                World;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineVisibilityModifier.SetHidden
struct UMoviePipelineVisibilityModifier_SetHidden_Params
{
public:
	bool                                         bInIsHidden;                                       // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineVisibilityModifier.IsHidden
struct UMoviePipelineVisibilityModifier_IsHidden_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineVisibilityModifier.ApplyModifier
struct UMoviePipelineVisibilityModifier_ApplyModifier_Params
{
public:
	class UWorld*                                World;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineCollectionCommonQuery.SetTags
struct UMoviePipelineCollectionCommonQuery_SetTags_Params
{
public:
	TArray<class FName>                          InTags;                                            // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineCollectionCommonQuery.SetQueryMode
struct UMoviePipelineCollectionCommonQuery_SetQueryMode_Params
{
public:
	enum class EMoviePipelineCollectionCommonQueryMode InQueryMode;                                       // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineCollectionCommonQuery.SetComponentTypes
struct UMoviePipelineCollectionCommonQuery_SetComponentTypes_Params
{
public:
	TArray<class UClass*>                        InComponentTypes;                                  // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineCollectionCommonQuery.SetActorNames
struct UMoviePipelineCollectionCommonQuery_SetActorNames_Params
{
public:
	TArray<class FString>                        InActorNames;                                      // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineCollectionCommonQuery.DoesActorMatchQuery
struct UMoviePipelineCollectionCommonQuery_DoesActorMatchQuery_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E3A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineRenderLayer.UndoPreview
struct UMoviePipelineRenderLayer_UndoPreview_Params
{
public:
	class UWorld*                                World;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineRenderLayer.SetRenderLayerName
struct UMoviePipelineRenderLayer_SetRenderLayerName_Params
{
public:
	class FString                                NewName;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineRenderLayer.RemoveModifier
struct UMoviePipelineRenderLayer_RemoveModifier_Params
{
public:
	class UMoviePipelineCollectionModifier*      Modifier;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineRenderLayer.Preview
struct UMoviePipelineRenderLayer_Preview_Params
{
public:
	class UWorld*                                World;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineRenderLayer.GetRenderLayerName
struct UMoviePipelineRenderLayer_GetRenderLayerName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineRenderLayer.GetModifiers
struct UMoviePipelineRenderLayer_GetModifiers_Params
{
public:
	TArray<class UMoviePipelineCollectionModifier*> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineRenderLayer.GetCollectionByName
struct UMoviePipelineRenderLayer_GetCollectionByName_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMoviePipelineCollection*              ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineRenderLayer.AddModifier
struct UMoviePipelineRenderLayer_AddModifier_Params
{
public:
	class UMoviePipelineCollectionModifier*      Modifier;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineRenderLayerSubsystem.SetActiveRenderLayerByObj
struct UMoviePipelineRenderLayerSubsystem_SetActiveRenderLayerByObj_Params
{
public:
	class UMoviePipelineRenderLayer*             RenderLayer;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineRenderLayerSubsystem.SetActiveRenderLayerByName
struct UMoviePipelineRenderLayerSubsystem_SetActiveRenderLayerByName_Params
{
public:
	class FString                                RenderLayerName;                                   // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineRenderLayerSubsystem.RemoveRenderLayer
struct UMoviePipelineRenderLayerSubsystem_RemoveRenderLayer_Params
{
public:
	class FString                                RenderLayerName;                                   // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineRenderLayerSubsystem.PreviewModifier
struct UMoviePipelineRenderLayerSubsystem_PreviewModifier_Params
{
public:
	class UMoviePipelineCollectionModifier*      Modifier;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineRenderLayerSubsystem.PreviewCollection
struct UMoviePipelineRenderLayerSubsystem_PreviewCollection_Params
{
public:
	class UMoviePipelineCollection*              Collection;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineRenderLayerSubsystem.GetRenderLayers
struct UMoviePipelineRenderLayerSubsystem_GetRenderLayers_Params
{
public:
	TArray<class UMoviePipelineRenderLayer*>     ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineRenderLayerSubsystem.GetFromWorld
struct UMoviePipelineRenderLayerSubsystem_GetFromWorld_Params
{
public:
	class UWorld*                                World;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMoviePipelineRenderLayerSubsystem*    ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineRenderLayerSubsystem.GetActiveRenderLayer
struct UMoviePipelineRenderLayerSubsystem_GetActiveRenderLayer_Params
{
public:
	class UMoviePipelineRenderLayer*             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineRenderLayerSubsystem.AddRenderLayer
struct UMoviePipelineRenderLayerSubsystem_AddRenderLayer_Params
{
public:
	class UMoviePipelineRenderLayer*             RenderLayer;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3069[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase.ReceiveTeardownForPipelineImpl
struct UMoviePipelineSetting_BlueprintBase_ReceiveTeardownForPipelineImpl_Params
{
public:
	class UMoviePipeline*                        InPipeline;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase.ReceiveSetupForPipelineImpl
struct UMoviePipelineSetting_BlueprintBase_ReceiveSetupForPipelineImpl_Params
{
public:
	class UMoviePipeline*                        InPipeline;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x150 (0x150 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase.ReceiveGetFormatArguments
struct UMoviePipelineSetting_BlueprintBase_ReceiveGetFormatArguments_Params
{
public:
	struct FMoviePipelineFormatArgs              InOutFormatArgs;                                   // 0x0(0xA8)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FMoviePipelineFormatArgs              ReturnValue;                                       // 0xA8(0xA8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MovieRenderDebugWidget.OnInitializedForPipeline
struct UMovieRenderDebugWidget_OnInitializedForPipeline_Params
{
public:
	class UMoviePipeline*                        ForPipeline;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipeline.SetInitializationTime
struct UMoviePipeline_SetInitializationTime_Params
{
public:
	struct FDateTime                             InDateTime;                                        // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipeline.Initialize
struct UMoviePipeline_Initialize_Params
{
public:
	class UMoviePipelineExecutorJob*             InJob;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipeline.GetPreviewTexture
struct UMoviePipeline_GetPreviewTexture_Params
{
public:
	class UTexture*                              ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipeline.GetPipelinePrimaryConfig
struct UMoviePipeline_GetPipelinePrimaryConfig_Params
{
public:
	class UMoviePipelinePrimaryConfig*           ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipeline.GetPipelineMasterConfig
struct UMoviePipeline_GetPipelineMasterConfig_Params
{
public:
	class UMoviePipelinePrimaryConfig*           ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipeline.GetInitializationTime
struct UMoviePipeline_GetInitializationTime_Params
{
public:
	struct FDateTime                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipeline.GetCurrentJob
struct UMoviePipeline_GetCurrentJob_Params
{
public:
	class UMoviePipelineExecutorJob*             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.UpdateJobShotListFromSequence
struct UMoviePipelineBlueprintLibrary_UpdateJobShotListFromSequence_Params
{
public:
	class ULevelSequence*                        InSequence;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMoviePipelineExecutorJob*             InJob;                                             // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShotsChanged;                                     // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3295[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x120 (0x120 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.ResolveVersionNumber
struct UMoviePipelineBlueprintLibrary_ResolveVersionNumber_Params
{
public:
	struct FMoviePipelineFilenameResolveParams   InParams;                                          // 0x0(0x118)(Parm, NativeAccessSpecifierPublic)
	bool                                         bGetNextVersion;                                   // 0x118(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32A9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0x11C(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1E0 (0x1E0 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.ResolveFilenameFormatArguments
struct UMoviePipelineBlueprintLibrary_ResolveFilenameFormatArguments_Params
{
public:
	class FString                                InFormatString;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMoviePipelineFilenameResolveParams   InParams;                                          // 0x10(0x118)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                OutFinalPath;                                      // 0x128(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMoviePipelineFormatArgs              OutMergedFormatArgs;                               // 0x138(0xA8)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.LoadManifestFileFromString
struct UMoviePipelineBlueprintLibrary_LoadManifestFileFromString_Params
{
public:
	class FString                                InManifestFilePath;                                // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMoviePipelineQueue*                   ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetRootTimecode
struct UMoviePipelineBlueprintLibrary_GetRootTimecode_Params
{
public:
	class UMoviePipeline*                        InMoviePipeline;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimecode                             ReturnValue;                                       // 0x8(0x14)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32FF[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetRootFrameNumber
struct UMoviePipelineBlueprintLibrary_GetRootFrameNumber_Params
{
public:
	class UMoviePipeline*                        InMoviePipeline;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3313[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetPipelineState
struct UMoviePipelineBlueprintLibrary_GetPipelineState_Params
{
public:
	class UMoviePipeline*                        InPipeline;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMovieRenderPipelineState         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3330[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetOverallSegmentCounts
struct UMoviePipelineBlueprintLibrary_GetOverallSegmentCounts_Params
{
public:
	class UMoviePipeline*                        InMoviePipeline;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutCurrentIndex;                                   // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutTotalCount;                                     // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetOverallOutputFrames
struct UMoviePipelineBlueprintLibrary_GetOverallOutputFrames_Params
{
public:
	class UMoviePipeline*                        InMoviePipeline;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutCurrentIndex;                                   // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutTotalCount;                                     // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMoviePipelineEngineChangelistLabel
struct UMoviePipelineBlueprintLibrary_GetMoviePipelineEngineChangelistLabel_Params
{
public:
	class UMoviePipeline*                        InMoviePipeline;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMasterTimecode
struct UMoviePipelineBlueprintLibrary_GetMasterTimecode_Params
{
public:
	class UMoviePipeline*                        InMoviePipeline;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimecode                             ReturnValue;                                       // 0x8(0x14)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_338C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMasterFrameNumber
struct UMoviePipelineBlueprintLibrary_GetMasterFrameNumber_Params
{
public:
	class UMoviePipeline*                        InMoviePipeline;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_33A6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMapPackageName
struct UMoviePipelineBlueprintLibrary_GetMapPackageName_Params
{
public:
	class UMoviePipelineExecutorJob*             InJob;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobName
struct UMoviePipelineBlueprintLibrary_GetJobName_Params
{
public:
	class UMoviePipeline*                        InMoviePipeline;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobInitializationTime
struct UMoviePipelineBlueprintLibrary_GetJobInitializationTime_Params
{
public:
	class UMoviePipeline*                        InMoviePipeline;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobAuthor
struct UMoviePipelineBlueprintLibrary_GetJobAuthor_Params
{
public:
	class UMoviePipeline*                        InMoviePipeline;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetEstimatedTimeRemaining
struct UMoviePipelineBlueprintLibrary_GetEstimatedTimeRemaining_Params
{
public:
	class UMoviePipeline*                        InPipeline;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimespan                             OutEstimate;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3409[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetEffectiveOutputResolution
struct UMoviePipelineBlueprintLibrary_GetEffectiveOutputResolution_Params
{
public:
	class UMoviePipelinePrimaryConfig*           InPrimaryConfig;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMoviePipelineExecutorShot*            InPipelineExecutorShot;                            // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntPoint                             ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentShotTimecode
struct UMoviePipelineBlueprintLibrary_GetCurrentShotTimecode_Params
{
public:
	class UMoviePipeline*                        InMoviePipeline;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimecode                             ReturnValue;                                       // 0x8(0x14)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3432[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentShotFrameNumber
struct UMoviePipelineBlueprintLibrary_GetCurrentShotFrameNumber_Params
{
public:
	class UMoviePipeline*                        InMoviePipeline;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3452[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSequence
struct UMoviePipelineBlueprintLibrary_GetCurrentSequence_Params
{
public:
	class UMoviePipeline*                        InMoviePipeline;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevelSequence*                        ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentWorkMetrics
struct UMoviePipelineBlueprintLibrary_GetCurrentSegmentWorkMetrics_Params
{
public:
	class UMoviePipeline*                        InMoviePipeline;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMoviePipelineSegmentWorkMetrics      ReturnValue;                                       // 0x8(0x28)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentState
struct UMoviePipelineBlueprintLibrary_GetCurrentSegmentState_Params
{
public:
	class UMoviePipeline*                        InMoviePipeline;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMovieRenderShotState             ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3475[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentName
struct UMoviePipelineBlueprintLibrary_GetCurrentSegmentName_Params
{
public:
	class UMoviePipeline*                        InMoviePipeline;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  OutOuterName;                                      // 0x8(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	class FText                                  OutInnerName;                                      // 0x20(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentFocusDistance
struct UMoviePipelineBlueprintLibrary_GetCurrentFocusDistance_Params
{
public:
	class UMoviePipeline*                        InMoviePipeline;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_348F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentFocalLength
struct UMoviePipelineBlueprintLibrary_GetCurrentFocalLength_Params
{
public:
	class UMoviePipeline*                        InMoviePipeline;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34A1[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentExecutorShot
struct UMoviePipelineBlueprintLibrary_GetCurrentExecutorShot_Params
{
public:
	class UMoviePipeline*                        InMoviePipeline;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMoviePipelineExecutorShot*            ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentAperture
struct UMoviePipelineBlueprintLibrary_GetCurrentAperture_Params
{
public:
	class UMoviePipeline*                        InMoviePipeline;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34DC[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCompletionPercentage
struct UMoviePipelineBlueprintLibrary_GetCompletionPercentage_Params
{
public:
	class UMoviePipeline*                        InPipeline;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34EA[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.FindOrGetDefaultSettingForShot
struct UMoviePipelineBlueprintLibrary_FindOrGetDefaultSettingForShot_Params
{
public:
	TSubclassOf<class UMoviePipelineSetting>     InSettingType;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMoviePipelinePrimaryConfig*           InPrimaryConfig;                                   // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMoviePipelineExecutorShot*            InShot;                                            // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMoviePipelineSetting*                 ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.DuplicateSequence
struct UMoviePipelineBlueprintLibrary_DuplicateSequence_Params
{
public:
	class UObject*                               Outer;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieSceneSequence*                   InSequence;                                        // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieSceneSequence*                   ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineConfigBase.SetConfigOrigin
struct UMoviePipelineConfigBase_SetConfigOrigin_Params
{
public:
	class UMoviePipelineConfigBase*              InConfig;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineConfigBase.RemoveSetting
struct UMoviePipelineConfigBase_RemoveSetting_Params
{
public:
	class UMoviePipelineSetting*                 InSetting;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineConfigBase.GetUserSettings
struct UMoviePipelineConfigBase_GetUserSettings_Params
{
public:
	TArray<class UMoviePipelineSetting*>         ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineConfigBase.GetConfigOrigin
struct UMoviePipelineConfigBase_GetConfigOrigin_Params
{
public:
	class UMoviePipelineConfigBase*              ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineConfigBase.FindSettingsByClass
struct UMoviePipelineConfigBase_FindSettingsByClass_Params
{
public:
	TSubclassOf<class UMoviePipelineSetting>     InClass;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeDisabledSettings;                          // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExactMatch;                                       // 0x9(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3634[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMoviePipelineSetting*>         ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineConfigBase.FindSettingByClass
struct UMoviePipelineConfigBase_FindSettingByClass_Params
{
public:
	TSubclassOf<class UMoviePipelineSetting>     InClass;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeDisabledSettings;                          // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExactMatch;                                       // 0x9(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3649[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMoviePipelineSetting*                 ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineConfigBase.FindOrAddSettingByClass
struct UMoviePipelineConfigBase_FindOrAddSettingByClass_Params
{
public:
	TSubclassOf<class UMoviePipelineSetting>     InClass;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeDisabledSettings;                          // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExactMatch;                                       // 0x9(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_366D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMoviePipelineSetting*                 ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineConfigBase.CopyFrom
struct UMoviePipelineConfigBase_CopyFrom_Params
{
public:
	class UMoviePipelineConfigBase*              InConfig;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SetStatusProgress
struct UMoviePipelineExecutorBase_SetStatusProgress_Params
{
public:
	float                                        InProgress;                                        // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SetStatusMessage
struct UMoviePipelineExecutorBase_SetStatusMessage_Params
{
public:
	class FString                                InStatus;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SetMoviePipelineClass
struct UMoviePipelineExecutorBase_SetMoviePipelineClass_Params
{
public:
	class UClass*                                InPipelineClass;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SendSocketMessage
struct UMoviePipelineExecutorBase_SendSocketMessage_Params
{
public:
	class FString                                InMessage;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36F0[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x88 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SendHTTPRequest
struct UMoviePipelineExecutorBase_SendHTTPRequest_Params
{
public:
	class FString                                InURL;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InVerb;                                            // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InMessage;                                         // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           InHeaders;                                         // 0x30(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x80(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_370E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.OnExecutorErroredImpl
struct UMoviePipelineExecutorBase_OnExecutorErroredImpl_Params
{
public:
	class UMoviePipeline*                        ErroredPipeline;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFatal;                                            // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_372D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ErrorReason;                                       // 0x10(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.IsSocketConnected
struct UMoviePipelineExecutorBase_IsSocketConnected_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.IsRendering
struct UMoviePipelineExecutorBase_IsRendering_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.GetStatusProgress
struct UMoviePipelineExecutorBase_GetStatusProgress_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.GetStatusMessage
struct UMoviePipelineExecutorBase_GetStatusMessage_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.Execute
struct UMoviePipelineExecutorBase_Execute_Params
{
public:
	class UMoviePipelineQueue*                   InPipelineQueue;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.ConnectSocket
struct UMoviePipelineExecutorBase_ConnectSocket_Params
{
public:
	class FString                                InHostName;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InPort;                                            // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_379D[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelinePrimaryConfig.GetTransientSettings
struct UMoviePipelinePrimaryConfig_GetTransientSettings_Params
{
public:
	TArray<class UMoviePipelineSetting*>         ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelinePrimaryConfig.GetEffectiveFrameRate
struct UMoviePipelinePrimaryConfig_GetEffectiveFrameRate_Params
{
public:
	class ULevelSequence*                        InSequence;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameRate                            ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelinePrimaryConfig.GetAllSettings
struct UMoviePipelinePrimaryConfig_GetAllSettings_Params
{
public:
	bool                                         bIncludeDisabledSettings;                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeTransientSettings;                         // 0x1(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3883[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMoviePipelineSetting*>         ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.OnMapLoad
struct UMoviePipelinePythonHostExecutor_OnMapLoad_Params
{
public:
	class UWorld*                                InWorld;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.GetLastLoadedWorld
struct UMoviePipelinePythonHostExecutor_GetLastLoadedWorld_Params
{
public:
	class UWorld*                                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.ExecuteDelayed
struct UMoviePipelinePythonHostExecutor_ExecuteDelayed_Params
{
public:
	class UMoviePipelineQueue*                   InPipelineQueue;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.ShouldRender
struct UMoviePipelineExecutorShot_ShouldRender_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetStatusProgress
struct UMoviePipelineExecutorShot_SetStatusProgress_Params
{
public:
	float                                        InProgress;                                        // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetStatusMessage
struct UMoviePipelineExecutorShot_SetStatusMessage_Params
{
public:
	class FString                                InStatus;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetShotOverridePresetOrigin
struct UMoviePipelineExecutorShot_SetShotOverridePresetOrigin_Params
{
public:
	class UMoviePipelineShotConfig*              InPreset;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetShotOverrideConfiguration
struct UMoviePipelineExecutorShot_SetShotOverrideConfiguration_Params
{
public:
	class UMoviePipelineShotConfig*              InPreset;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetGraphPreset
struct UMoviePipelineExecutorShot_SetGraphPreset_Params
{
public:
	class UMovieGraphConfig*                     InGraphPreset;                                     // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetGraphConfig
struct UMoviePipelineExecutorShot_SetGraphConfig_Params
{
public:
	class UMovieGraphConfig*                     InGraphConfig;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.IsUsingGraphConfiguration
struct UMoviePipelineExecutorShot_IsUsingGraphConfiguration_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetStatusProgress
struct UMoviePipelineExecutorShot_GetStatusProgress_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetStatusMessage
struct UMoviePipelineExecutorShot_GetStatusMessage_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetShotOverridePresetOrigin
struct UMoviePipelineExecutorShot_GetShotOverridePresetOrigin_Params
{
public:
	class UMoviePipelineShotConfig*              ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetShotOverrideConfiguration
struct UMoviePipelineExecutorShot_GetShotOverrideConfiguration_Params
{
public:
	class UMoviePipelineShotConfig*              ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetGraphPreset
struct UMoviePipelineExecutorShot_GetGraphPreset_Params
{
public:
	class UMovieGraphConfig*                     ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetGraphConfig
struct UMoviePipelineExecutorShot_GetGraphConfig_Params
{
public:
	class UMovieGraphConfig*                     ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetCameraName
struct UMoviePipelineExecutorShot_GetCameraName_Params
{
public:
	int32                                        InCameraIndex;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3984[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.AllocateNewShotOverrideConfig
struct UMoviePipelineExecutorShot_AllocateNewShotOverrideConfig_Params
{
public:
	TSubclassOf<class UMoviePipelineShotConfig>  InConfigType;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMoviePipelineShotConfig*              ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetStatusProgress
struct UMoviePipelineExecutorJob_SetStatusProgress_Params
{
public:
	float                                        InProgress;                                        // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetStatusMessage
struct UMoviePipelineExecutorJob_SetStatusMessage_Params
{
public:
	class FString                                InStatus;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetSequence
struct UMoviePipelineExecutorJob_SetSequence_Params
{
public:
	struct FSoftObjectPath                       InSequence;                                        // 0x0(0x20)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetPresetOrigin
struct UMoviePipelineExecutorJob_SetPresetOrigin_Params
{
public:
	class UMoviePipelinePrimaryConfig*           InPreset;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetIsEnabled
struct UMoviePipelineExecutorJob_SetIsEnabled_Params
{
public:
	bool                                         bInEnabled;                                        // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetGraphPreset
struct UMoviePipelineExecutorJob_SetGraphPreset_Params
{
public:
	class UMovieGraphConfig*                     InGraphPreset;                                     // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetGraphConfig
struct UMoviePipelineExecutorJob_SetGraphConfig_Params
{
public:
	class UMovieGraphConfig*                     InGraphConfig;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetConsumed
struct UMoviePipelineExecutorJob_SetConsumed_Params
{
public:
	bool                                         bInConsumed;                                       // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetConfiguration
struct UMoviePipelineExecutorJob_SetConfiguration_Params
{
public:
	class UMoviePipelinePrimaryConfig*           InPreset;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.IsUsingGraphConfiguration
struct UMoviePipelineExecutorJob_IsUsingGraphConfiguration_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.IsEnabled
struct UMoviePipelineExecutorJob_IsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.IsConsumed
struct UMoviePipelineExecutorJob_IsConsumed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetStatusProgress
struct UMoviePipelineExecutorJob_GetStatusProgress_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetStatusMessage
struct UMoviePipelineExecutorJob_GetStatusMessage_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetPresetOrigin
struct UMoviePipelineExecutorJob_GetPresetOrigin_Params
{
public:
	class UMoviePipelinePrimaryConfig*           ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetGraphPreset
struct UMoviePipelineExecutorJob_GetGraphPreset_Params
{
public:
	class UMovieGraphConfig*                     ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetGraphConfig
struct UMoviePipelineExecutorJob_GetGraphConfig_Params
{
public:
	class UMovieGraphConfig*                     ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetConfiguration
struct UMoviePipelineExecutorJob_GetConfiguration_Params
{
public:
	class UMoviePipelinePrimaryConfig*           ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineQueue.SetQueueOrigin
struct UMoviePipelineQueue_SetQueueOrigin_Params
{
public:
	class UMoviePipelineQueue*                   InConfig;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineQueue.SetJobIndex
struct UMoviePipelineQueue_SetJobIndex_Params
{
public:
	class UMoviePipelineExecutorJob*             InJob;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B72[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineQueue.GetQueueOrigin
struct UMoviePipelineQueue_GetQueueOrigin_Params
{
public:
	class UMoviePipelineQueue*                   ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineQueue.GetJobs
struct UMoviePipelineQueue_GetJobs_Params
{
public:
	TArray<class UMoviePipelineExecutorJob*>     ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineQueue.DuplicateJob
struct UMoviePipelineQueue_DuplicateJob_Params
{
public:
	class UMoviePipelineExecutorJob*             InJob;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMoviePipelineExecutorJob*             ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineQueue.DeleteJob
struct UMoviePipelineQueue_DeleteJob_Params
{
public:
	class UMoviePipelineExecutorJob*             InJob;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineQueue.CopyFrom
struct UMoviePipelineQueue_CopyFrom_Params
{
public:
	class UMoviePipelineQueue*                   InQueue;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineQueue.AllocateNewJob
struct UMoviePipelineQueue_AllocateNewJob_Params
{
public:
	TSubclassOf<class UMoviePipelineExecutorJob> InJobType;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMoviePipelineExecutorJob*             ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.SetConfiguration
struct UMoviePipelineQueueEngineSubsystem_SetConfiguration_Params
{
public:
	TSubclassOf<class UMovieRenderDebugWidget>   InProgressWidgetClass;                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRenderPlayerViewport;                             // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C75[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.RenderQueueWithExecutorInstance
struct UMoviePipelineQueueEngineSubsystem_RenderQueueWithExecutorInstance_Params
{
public:
	class UMoviePipelineExecutorBase*            InExecutor;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.RenderQueueWithExecutor
struct UMoviePipelineQueueEngineSubsystem_RenderQueueWithExecutor_Params
{
public:
	TSubclassOf<class UMoviePipelineExecutorBase> InExecutorType;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMoviePipelineExecutorBase*            ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.RenderJob
struct UMoviePipelineQueueEngineSubsystem_RenderJob_Params
{
public:
	class UMoviePipelineExecutorJob*             InJob;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.IsRendering
struct UMoviePipelineQueueEngineSubsystem_IsRendering_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.GetQueue
struct UMoviePipelineQueueEngineSubsystem_GetQueue_Params
{
public:
	class UMoviePipelineQueue*                   ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.GetActiveExecutor
struct UMoviePipelineQueueEngineSubsystem_GetActiveExecutor_Params
{
public:
	class UMoviePipelineExecutorBase*            ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.AllocateJob
struct UMoviePipelineQueueEngineSubsystem_AllocateJob_Params
{
public:
	class ULevelSequence*                        InSequence;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMoviePipelineExecutorJob*             ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


