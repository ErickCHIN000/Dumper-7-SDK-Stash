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

// 0x60 (0x60 - 0x0)
// Function VanguardBPLibrary.VanguardBPFunctionLibrary.SpawnActorOfClass
struct UVanguardBPFunctionLibrary_SpawnActorOfClass_Params
{
public:
	class AActor*                                WorldContext;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AActor>                    Class;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            SpawnTransform;                                    // 0x10(0x30)(ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class ESpawnActorCollisionHandlingMethod CollisionHandlingOverride;                         // 0x40(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_223[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Owner;                                             // 0x48(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                 Instigator;                                        // 0x50(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                OutActor;                                          // 0x58(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function VanguardBPLibrary.VanguardBPFunctionLibrary.SortVectorArrayByDistanceFromOrigin
struct UVanguardBPFunctionLibrary_SortVectorArrayByDistanceFromOrigin_Params
{
public:
	TArray<struct FVector>                       Locations;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FVector                               Origin;                                            // 0x10(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseMinDistance;                                   // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_238[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinDistance;                                       // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseMaxDistance;                                   // 0x24(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxDistance;                                       // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreZ;                                          // 0x2C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       ReturnValue;                                       // 0x30(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function VanguardBPLibrary.VanguardBPFunctionLibrary.SortTransformArrayByDistanceFromOrigin
struct UVanguardBPFunctionLibrary_SortTransformArrayByDistanceFromOrigin_Params
{
public:
	TArray<struct FTransform>                    Transforms;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FVector                               Origin;                                            // 0x10(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseMinDistance;                                   // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_253[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinDistance;                                       // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseMaxDistance;                                   // 0x24(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_257[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxDistance;                                       // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreZ;                                          // 0x2C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_25C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTransform>                    ReturnValue;                                       // 0x30(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function VanguardBPLibrary.VanguardBPFunctionLibrary.SortStringArrayAlphabetically
struct UVanguardBPFunctionLibrary_SortStringArrayAlphabetically_Params
{
public:
	TArray<class FString>                        InStringArray;                                     // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class FString>                        ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function VanguardBPLibrary.VanguardBPFunctionLibrary.SortComponentsByDistanceFromOrigin
struct UVanguardBPFunctionLibrary_SortComponentsByDistanceFromOrigin_Params
{
public:
	TArray<class USceneComponent*>               SceneComponents;                                   // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FVector                               Origin;                                            // 0x10(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USceneComponent*>               ReturnValue;                                       // 0x20(0x10)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function VanguardBPLibrary.VanguardBPFunctionLibrary.SortActorsByPathCostFromOrigin
struct UVanguardBPFunctionLibrary_SortActorsByPathCostFromOrigin_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        Actors;                                            // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FVector                               Origin;                                            // 0x18(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreUnreachable;                                // 0x24(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_295[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        ReturnValue;                                       // 0x28(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function VanguardBPLibrary.VanguardBPFunctionLibrary.SortActorsByDistanceFromOrigin
struct UVanguardBPFunctionLibrary_SortActorsByDistanceFromOrigin_Params
{
public:
	TArray<class AActor*>                        Actors;                                            // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FVector                               Origin;                                            // 0x10(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseMinDistance;                                   // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinDistance;                                       // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseMaxDistance;                                   // 0x24(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxDistance;                                       // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreZ;                                          // 0x2C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AD[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        ReturnValue;                                       // 0x30(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function VanguardBPLibrary.VanguardBPFunctionLibrary.SortActorComponentsByDistanceFromOrigin
struct UVanguardBPFunctionLibrary_SortActorComponentsByDistanceFromOrigin_Params
{
public:
	TArray<class UActorComponent*>               ActorComponents;                                   // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FVector                               Origin;                                            // 0x10(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseMaxDistance;                                   // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C6[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxDistance;                                       // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreZ;                                          // 0x24(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UActorComponent*>               ReturnValue;                                       // 0x28(0x10)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VanguardBPLibrary.VanguardBPFunctionLibrary.SetSplineMeshSmoothInterpRollScale
struct UVanguardBPFunctionLibrary_SetSplineMeshSmoothInterpRollScale_Params
{
public:
	class USplineMeshComponent*                  SplineMeshComponent;                               // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseSmoothInterpRollScale;                         // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUpdateMesh;                                       // 0x9(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E2[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function VanguardBPLibrary.VanguardBPFunctionLibrary.SetRenderInDepthPass
struct UVanguardBPFunctionLibrary_SetRenderInDepthPass_Params
{
public:
	class UPrimitiveComponent*                   Component;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Value;                                             // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F2[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function VanguardBPLibrary.VanguardBPFunctionLibrary.SetRenderFocusOutline
struct UVanguardBPFunctionLibrary_SetRenderFocusOutline_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function VanguardBPLibrary.VanguardBPFunctionLibrary.SetLandscapeRVTSettings
struct UVanguardBPFunctionLibrary_SetLandscapeRVTSettings_Params
{
public:
	class ALandscapeProxy*                       LandscapeProxy;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class URuntimeVirtualTexture*>        VirtualTextures;                                   // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        NumLOD;                                            // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LODBias;                                           // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VanguardBPLibrary.VanguardBPFunctionLibrary.SetFixedPathBrakingDistance
struct UVanguardBPFunctionLibrary_SetFixedPathBrakingDistance_Params
{
public:
	class UNavMovementComponent*                 NavMovementComponent;                              // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FixedPathBrakingDistance;                          // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_321[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function VanguardBPLibrary.VanguardBPFunctionLibrary.SetCanEverAffectNavigation
struct UVanguardBPFunctionLibrary_SetCanEverAffectNavigation_Params
{
public:
	class UActorComponent*                       InActorComponent;                                  // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanEverAffect;                                    // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_332[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function VanguardBPLibrary.VanguardBPFunctionLibrary.SetBoneCollisionEnabled
struct UVanguardBPFunctionLibrary_SetBoneCollisionEnabled_Params
{
public:
	class USkeletalMeshComponent*                SkeletalMeshComponent;                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionEnabled                 CollisionEnabled;                                  // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_342[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function VanguardBPLibrary.VanguardBPFunctionLibrary.SetAllowAnyoneToDestroyComponent
struct UVanguardBPFunctionLibrary_SetAllowAnyoneToDestroyComponent_Params
{
public:
	class UActorComponent*                       InComponent;                                       // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AllowAnyone;                                       // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_351[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function VanguardBPLibrary.VanguardBPFunctionLibrary.ReconstructActor
struct UVanguardBPFunctionLibrary_ReconstructActor_Params
{
public:
	class AActor*                                Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function VanguardBPLibrary.VanguardBPFunctionLibrary.QuickLog
struct UVanguardBPFunctionLibrary_QuickLog_Params
{
public:
	class FName                                  LogCategory;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Message;                                           // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function VanguardBPLibrary.VanguardBPFunctionLibrary.ProjectWorldToScreenOrEdge
struct UVanguardBPFunctionLibrary_ProjectWorldToScreenOrEdge_Params
{
public:
	class APlayerController*                     Player;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WorldPosition;                                     // 0x8(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ScreenOrEdgePosition;                              // 0x14(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             DirFromCentre;                                     // 0x1C(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsOffScreen;                                       // 0x24(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsBehindCamera;                                    // 0x25(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x26(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A0[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function VanguardBPLibrary.VanguardBPFunctionLibrary.ProjectReachablePointAtLocation
struct UVanguardBPFunctionLibrary_ProjectReachablePointAtLocation_Params
{
public:
	class AActor*                                WorldContext;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               StartPoint;                                        // 0x8(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               EndPoint;                                          // 0x14(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OutProjectedPoint;                                 // 0x20(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ProjectionExtent;                                  // 0x2C(0xC)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ANavigationData*                       NavData;                                           // 0x38(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavigationQueryFilter>    FilterClass;                                       // 0x40(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D6[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// Function VanguardBPLibrary.VanguardBPFunctionLibrary.ProjectOrTraceToNavigablePoint
struct UVanguardBPFunctionLibrary_ProjectOrTraceToNavigablePoint_Params
{
public:
	class AActor*                                WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InLocation;                                        // 0x8(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OutProjectedPoint;                                 // 0x14(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETraceTypeQuery                   TraceChannel;                                      // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTraceComplex;                                     // 0x21(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40C[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        ActorsToIgnore;                                    // 0x28(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bIgnoreSelf;                                       // 0x38(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ProjectionExtent;                                  // 0x3C(0xC)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ANavigationData*                       NavData;                                           // 0x48(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavigationQueryFilter>    FilterClass;                                       // 0x50(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x58(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_418[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function VanguardBPLibrary.VanguardBPFunctionLibrary.ObjectsToWorlds
struct UVanguardBPFunctionLibrary_ObjectsToWorlds_Params
{
public:
	TArray<class UObject*>                       Objects;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UWorld>>         ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function VanguardBPLibrary.VanguardBPFunctionLibrary.MaxInt
struct UVanguardBPFunctionLibrary_MaxInt_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function VanguardBPLibrary.VanguardBPFunctionLibrary.MaxFloat
struct UVanguardBPFunctionLibrary_MaxFloat_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VanguardBPLibrary.VanguardBPFunctionLibrary.MarkObjectDirty
struct UVanguardBPFunctionLibrary_MarkObjectDirty_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VanguardBPLibrary.VanguardBPFunctionLibrary.MakeComponentStablyNamed
struct UVanguardBPFunctionLibrary_MakeComponentStablyNamed_Params
{
public:
	class UActorComponent*                       Component;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NewName;                                           // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VanguardBPLibrary.VanguardBPFunctionLibrary.MakeActorStablyNamed
struct UVanguardBPFunctionLibrary_MakeActorStablyNamed_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NewName;                                           // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function VanguardBPLibrary.VanguardBPFunctionLibrary.LoadAllStreamingLevels
struct UVanguardBPFunctionLibrary_LoadAllStreamingLevels_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ULevelStreaming*>               ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function VanguardBPLibrary.VanguardBPFunctionLibrary.IsWithEditor
struct UVanguardBPFunctionLibrary_IsWithEditor_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VanguardBPLibrary.VanguardBPFunctionLibrary.IsUsingFixedPathBrakingDistance
struct UVanguardBPFunctionLibrary_IsUsingFixedPathBrakingDistance_Params
{
public:
	class UNavMovementComponent*                 NavMovementComponent;                              // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BC[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function VanguardBPLibrary.VanguardBPFunctionLibrary.IsInEditorViewport
struct UVanguardBPFunctionLibrary_IsInEditorViewport_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4CE[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function VanguardBPLibrary.VanguardBPFunctionLibrary.IsActorReplicatingMovement
struct UVanguardBPFunctionLibrary_IsActorReplicatingMovement_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4DA[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetWorldFromStreamingAsset
struct UVanguardBPFunctionLibrary_GetWorldFromStreamingAsset_Params
{
public:
	class ULevelStreaming*                       StreamingLevel;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UWorld>                 ReturnValue;                                       // 0x8(0x28)(Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetTileInfoFromStreamingLevel
struct UVanguardBPFunctionLibrary_GetTileInfoFromStreamingLevel_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevelStreaming*                       StreamingLevel;                                    // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OutLocation;                                       // 0x10(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4F9[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetStreamingLevelFromActor
struct UVanguardBPFunctionLibrary_GetStreamingLevelFromActor_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Actor;                                             // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevelStreaming*                       OutStreamingLevel;                                 // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetStreamedLevelPackageNames
struct UVanguardBPFunctionLibrary_GetStreamedLevelPackageNames_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetStreamedLevelNames
struct UVanguardBPFunctionLibrary_GetStreamedLevelNames_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetPathFollowingBrakingDistance
struct UVanguardBPFunctionLibrary_GetPathFollowingBrakingDistance_Params
{
public:
	class UNavMovementComponent*                 NavMovementComponent;                              // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutBrakingDistance;                                // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_53F[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetLoadedChildClasses
struct UVanguardBPFunctionLibrary_GetLoadedChildClasses_Params
{
public:
	class UClass*                                ParentClass;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UClass*>                        ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetLevelNameFromStreamingAsset
struct UVanguardBPFunctionLibrary_GetLevelNameFromStreamingAsset_Params
{
public:
	class ULevelStreaming*                       StreamingLevel;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetHashFromString
struct UVanguardBPFunctionLibrary_GetHashFromString_Params
{
public:
	class FString                                String;                                            // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_56C[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetClosestPlayerDistanceFromLocation
struct UVanguardBPFunctionLibrary_GetClosestPlayerDistanceFromLocation_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x8(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFunctionResult                   Result;                                            // 0x14(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5BB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReturnValue;                                       // 0x18(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5BC[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetClassDefaultObject
struct UVanguardBPFunctionLibrary_GetClassDefaultObject_Params
{
public:
	class UClass*                                ObjectClass;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsValid;                                           // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetChildWidgetsOfClass
struct UVanguardBPFunctionLibrary_GetChildWidgetsOfClass_Params
{
public:
	TSubclassOf<class UWidget>                   WidgetClass;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPanelWidget*                          InParent;                                          // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UWidget*>                       ChildWidgets;                                      // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         SearchRecursively;                                 // 0x20(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_602[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetChildClassesInPath
struct UVanguardBPFunctionLibrary_GetChildClassesInPath_Params
{
public:
	class FName                                  FolderPath;                                        // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                ParentClass;                                       // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UClass*>                        ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetAllMapNames
struct UVanguardBPFunctionLibrary_GetAllMapNames_Params
{
public:
	class FString                                OverrideSearchPath;                                // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetActorsOfClassInWorld
struct UVanguardBPFunctionLibrary_GetActorsOfClassInWorld_Params
{
public:
	class AActor*                                WorldContext;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AActor>                    ActorClass;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        OutActors;                                         // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetActorsInWorld
struct UVanguardBPFunctionLibrary_GetActorsInWorld_Params
{
public:
	class UWorld*                                World;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function VanguardBPLibrary.VanguardBPFunctionLibrary.FindSocketOrTagOnActor
struct UVanguardBPFunctionLibrary_FindSocketOrTagOnActor_Params
{
public:
	class AActor*                                InActor;                                           // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SocketOrTagName;                                   // 0x8(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActorComponent*                       FoundComponent;                                    // 0x10(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_69C[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            FoundWorldTransform;                               // 0x20(0x30)(Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x50(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6A0[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function VanguardBPLibrary.VanguardBPFunctionLibrary.FilterActorsByTags
struct UVanguardBPFunctionLibrary_FilterActorsByTags_Params
{
public:
	TArray<class AActor*>                        InActorArray;                                      // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class FName>                          Tags;                                              // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function VanguardBPLibrary.VanguardBPFunctionLibrary.DuplicateActorComponent
struct UVanguardBPFunctionLibrary_DuplicateActorComponent_Params
{
public:
	class UActorComponent*                       Source;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Parent;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActorComponent*                       OutComponent;                                      // 0x10(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x18(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6DA[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function VanguardBPLibrary.VanguardBPFunctionLibrary.DuplicateActor
struct UVanguardBPFunctionLibrary_DuplicateActor_Params
{
public:
	class AActor*                                InputActor;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDetachOriginal;                                   // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_703[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function VanguardBPLibrary.VanguardBPFunctionLibrary.DebugLog
struct UVanguardBPFunctionLibrary_DebugLog_Params
{
public:
	enum class EBPLogVerbosity                   Verbosity;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_732[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  LogCategory;                                       // 0x4(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_736[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Message;                                           // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOutputToMessageLog;                               // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_739[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// Function VanguardBPLibrary.VanguardBPFunctionLibrary.ComponentOverlapComponentsAgainstObjectType
struct UVanguardBPFunctionLibrary_ComponentOverlapComponentsAgainstObjectType_Params
{
public:
	class UPrimitiveComponent*                   Component;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76A[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ComponentTransform;                                // 0x10(0x30)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TArray<enum class EObjectTypeQuery>          ObjectTypes;                                       // 0x40(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class UClass*                                ComponentClassFilter;                              // 0x50(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        ActorsToIgnore;                                    // 0x58(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class UPrimitiveComponent*>           OutComponents;                                     // 0x68(0x10)(Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x78(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_77A[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// Function VanguardBPLibrary.VanguardBPFunctionLibrary.BlueprintSuggestProjectileVelocityByChannel
struct UVanguardBPFunctionLibrary_BlueprintSuggestProjectileVelocityByChannel_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TossVelocity;                                      // 0x8(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               StartLocation;                                     // 0x14(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               EndLocation;                                       // 0x20(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LaunchSpeed;                                       // 0x2C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OverrideGravityZ;                                  // 0x30(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESuggestProjVelocityTraceOption   TraceOption;                                       // 0x34(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7CF[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CollisionRadius;                                   // 0x38(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        ActorsToIgnore;                                    // 0x40(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<enum class EObjectTypeQuery>          ObjectTypes;                                       // 0x50(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bTraceComplex;                                     // 0x60(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFavorHighArc;                                     // 0x61(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawDebug;                                        // 0x62(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x63(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7DF[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function VanguardBPLibrary.VanguardBPFunctionLibrary.AddActorComponentWithName
struct UVanguardBPFunctionLibrary_AddActorComponentWithName_Params
{
public:
	class AActor*                                Owner;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UActorComponent>           ActorComponentClass;                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ComponentName;                                     // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActorComponent*                       OutComponent;                                      // 0x18(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function VanguardBPLibrary.VanguardBPFunctionLibrary.AddActorComponent
struct UVanguardBPFunctionLibrary_AddActorComponent_Params
{
public:
	class AActor*                                Owner;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UActorComponent>           ActorComponentClass;                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActorComponent*                       OutComponent;                                      // 0x10(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// Function VanguardBPLibrary.VanguardBPFunctionLibrary.ActorLineTraceSingle
struct UVanguardBPFunctionLibrary_ActorLineTraceSingle_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                TargetActor;                                       // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Start;                                             // 0x10(0xC)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               End;                                               // 0x1C(0xC)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETraceTypeQuery                   TraceChannel;                                      // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTraceComplex;                                     // 0x29(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDrawDebugTrace                   DrawDebugType;                                     // 0x2A(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_88A[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            OutHit;                                            // 0x2C(0x88)(Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FLinearColor                          TraceColor;                                        // 0xB4(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          TraceHitColor;                                     // 0xC4(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DrawTime;                                          // 0xD4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xD8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89D[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


