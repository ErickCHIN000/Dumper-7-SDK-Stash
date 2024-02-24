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

// 0x20 (0x20 - 0x0)
// Function SubstanceCore.SubstanceGraphInstance.SetInputString
struct USubstanceGraphInstance_SetInputString_Params
{
public:
	class FString                                Identifier;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SubstanceCore.SubstanceGraphInstance.SetInputInt
struct USubstanceGraphInstance_SetInputInt_Params
{
public:
	class FString                                Identifier;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                InputValues;                                       // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SubstanceCore.SubstanceGraphInstance.SetInputImg
struct USubstanceGraphInstance_SetInputImg_Params
{
public:
	class FString                                InputName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               Value;                                             // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28A[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SubstanceCore.SubstanceGraphInstance.SetInputFloat
struct USubstanceGraphInstance_SetInputFloat_Params
{
public:
	class FString                                Identifier;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                InputValues;                                       // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SubstanceCore.SubstanceGraphInstance.SetInputColor
struct USubstanceGraphInstance_SetInputColor_Params
{
public:
	class FString                                Identifier;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SubstanceCore.SubstanceGraphInstance.SetInputBool
struct USubstanceGraphInstance_SetInputBool_Params
{
public:
	class FString                                Identifier;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Bool;                                              // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B1[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SubstanceCore.SubstanceGraphInstance.GetOutputNames
struct USubstanceGraphInstance_GetOutputNames_Params
{
public:
	TArray<class FString>                        ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function SubstanceCore.SubstanceGraphInstance.GetIntInputDesc
struct USubstanceGraphInstance_GetIntInputDesc_Params
{
public:
	class FString                                Identifier;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSubstanceIntInputDesc                ReturnValue;                                       // 0x10(0x48)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SubstanceCore.SubstanceGraphInstance.GetInstanceDesc
struct USubstanceGraphInstance_GetInstanceDesc_Params
{
public:
	struct FSubstanceInstanceDesc                ReturnValue;                                       // 0x0(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SubstanceCore.SubstanceGraphInstance.GetInputType
struct USubstanceGraphInstance_GetInputType_Params
{
public:
	class FString                                InputName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESubstanceInputType               ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E8[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SubstanceCore.SubstanceGraphInstance.GetInputString
struct USubstanceGraphInstance_GetInputString_Params
{
public:
	class FString                                Identifier;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SubstanceCore.SubstanceGraphInstance.GetInputNames
struct USubstanceGraphInstance_GetInputNames_Params
{
public:
	TArray<class FString>                        ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SubstanceCore.SubstanceGraphInstance.GetInputInt
struct USubstanceGraphInstance_GetInputInt_Params
{
public:
	class FString                                Identifier;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SubstanceCore.SubstanceGraphInstance.GetInputFloat
struct USubstanceGraphInstance_GetInputFloat_Params
{
public:
	class FString                                Identifier;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SubstanceCore.SubstanceGraphInstance.GetInputColor
struct USubstanceGraphInstance_GetInputColor_Params
{
public:
	class FString                                Identifier;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SubstanceCore.SubstanceGraphInstance.GetInputBool
struct USubstanceGraphInstance_GetInputBool_Params
{
public:
	class FString                                Identifier;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_328[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// Function SubstanceCore.SubstanceGraphInstance.GetFloatInputDesc
struct USubstanceGraphInstance_GetFloatInputDesc_Params
{
public:
	class FString                                Identifier;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSubstanceFloatInputDesc              ReturnValue;                                       // 0x10(0x48)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SubstanceCore.SubstanceGraphInstance.GetDynamicMaterialInstance
struct USubstanceGraphInstance_GetDynamicMaterialInstance_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterial*                             InParentMaterial;                                  // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SubstanceCore.SubstanceGraphInstance.GetConstantMaterial
struct USubstanceGraphInstance_GetConstantMaterial_Params
{
public:
	class UMaterialInstanceConstant*             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SubstanceCore.SubstanceGraphInstance.EnableOutput
struct USubstanceGraphInstance_EnableOutput_Params
{
public:
	class FString                                Identifier;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Value;                                             // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_361[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function SubstanceCore.SubstanceGraphInstance.Duplicate
struct USubstanceGraphInstance_Duplicate_Params
{
public:
	class USubstanceGraphInstance*               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SubstanceCore.SubstanceGraphInstance.CreateMaterial
struct USubstanceGraphInstance_CreateMaterial_Params
{
public:
	class FString                                PackageName;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterial*                             ParentMaterial;                                    // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SubstanceCore.SubstanceInstanceFactory.GetGraphInstances
struct USubstanceInstanceFactory_GetGraphInstances_Params
{
public:
	TArray<class USubstanceGraphInstance*>       ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SubstanceCore.SubstanceInstanceFactory.GetGraphDescs
struct USubstanceInstanceFactory_GetGraphDescs_Params
{
public:
	TArray<struct FSubstanceGraphDesc>           ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function SubstanceCore.SubstanceInstanceFactory.CreateGraphInstance
struct USubstanceInstanceFactory_CreateGraphInstance_Params
{
public:
	struct FSubstanceGraphDesc                   GraphDesc;                                         // 0x0(0x78)(Parm, NativeAccessSpecifierPublic)
	class FString                                PackageName;                                       // 0x78(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USubstanceGraphInstance*               ReturnValue;                                       // 0x88(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SubstanceCore.SubstanceUtility.SyncRendering
struct USubstanceUtility_SyncRendering_Params
{
public:
	class USubstanceGraphInstance*               InstancesToRender;                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SubstanceCore.SubstanceUtility.SetGraphInstanceOutputSizeInt
struct USubstanceUtility_SetGraphInstanceOutputSizeInt_Params
{
public:
	class USubstanceGraphInstance*               GraphInstance;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Width;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Height;                                            // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SubstanceCore.SubstanceUtility.SetGraphInstanceOutputSize
struct USubstanceUtility_SetGraphInstanceOutputSize_Params
{
public:
	class USubstanceGraphInstance*               GraphInstance;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESubstanceTextureSize             Width;                                             // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESubstanceTextureSize             Height;                                            // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_485[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function SubstanceCore.SubstanceUtility.ResetInputParameters
struct USubstanceUtility_ResetInputParameters_Params
{
public:
	class USubstanceGraphInstance*               GraphInstance;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SubstanceCore.SubstanceUtility.GetSubstanceTextures
struct USubstanceUtility_GetSubstanceTextures_Params
{
public:
	class USubstanceGraphInstance*               GraphInstance;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UTexture2D*>                    ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SubstanceCore.SubstanceUtility.GetSubstances
struct USubstanceUtility_GetSubstances_Params
{
public:
	class UMaterialInterface*                    Material;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USubstanceGraphInstance*>       ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SubstanceCore.SubstanceUtility.GetSubstanceLoadingProgress
struct USubstanceUtility_GetSubstanceLoadingProgress_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SubstanceCore.SubstanceUtility.GetSubstanceIncludedMaterials
struct USubstanceUtility_GetSubstanceIncludedMaterials_Params
{
public:
	TArray<class UMaterial*>                     ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SubstanceCore.SubstanceUtility.GetGraphName
struct USubstanceUtility_GetGraphName_Params
{
public:
	class USubstanceGraphInstance*               GraphInstance;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SubstanceCore.SubstanceUtility.GetFactoryName
struct USubstanceUtility_GetFactoryName_Params
{
public:
	class USubstanceGraphInstance*               GraphInstance;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SubstanceCore.SubstanceUtility.EnableInstanceOutputs
struct USubstanceUtility_EnableInstanceOutputs_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USubstanceGraphInstance*               GraphInstance;                                     // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                OutputIndices;                                     // 0x10(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SubstanceCore.SubstanceUtility.DuplicateGraphInstance
struct USubstanceUtility_DuplicateGraphInstance_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USubstanceGraphInstance*               GraphInstance;                                     // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USubstanceGraphInstance*               ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SubstanceCore.SubstanceUtility.DisableInstanceOutputs
struct USubstanceUtility_DisableInstanceOutputs_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USubstanceGraphInstance*               GraphInstance;                                     // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                OutputIndices;                                     // 0x10(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function SubstanceCore.SubstanceUtility.CreateGraphInstance
struct USubstanceUtility_CreateGraphInstance_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USubstanceInstanceFactory*             Factory;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GraphDescIndex;                                    // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_542[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             ParentMaterial;                                    // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InstanceName;                                      // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USubstanceGraphInstance*               ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function SubstanceCore.SubstanceUtility.CreateAggregateSubstanceFactory
struct USubstanceUtility_CreateAggregateSubstanceFactory_Params
{
public:
	class USubstanceInstanceFactory*             OutputFactory;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutputFactoryGraphIndex;                           // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_54F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USubstanceInstanceFactory*             InputFactory;                                      // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InputFactoryGraphIndex;                            // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_554[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSubstanceConnection>          Connections;                                       // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class USubstanceInstanceFactory*             ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SubstanceCore.SubstanceUtility.CopyInputParameters
struct USubstanceUtility_CopyInputParameters_Params
{
public:
	class USubstanceGraphInstance*               SourceGraphInstance;                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USubstanceGraphInstance*               DestGraphInstance;                                 // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SubstanceCore.SubstanceUtility.AsyncRendering
struct USubstanceUtility_AsyncRendering_Params
{
public:
	class USubstanceGraphInstance*               InstancesToRender;                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


