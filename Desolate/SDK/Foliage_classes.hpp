#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x660 - 0x630)
// Class Foliage.FoliageInstancedStaticMeshComponent
class UFoliageInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{
public:
	FMulticastInlineDelegateProperty_            OnInstanceTakePointDamage;                         // 0x630(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnInstanceTakeRadialDamage;                        // 0x640(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FGuid                                 GenerationGuid;                                    // 0x650(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFoliageInstancedStaticMeshComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Foliage.FoliageStatistics
class UFoliageStatistics : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UFoliageStatistics* GetDefaultObj();

	int32 FoliageOverlappingSphereCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, const struct FVector& CenterPosition, float Radius);
	int32 FoliageOverlappingBoxCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, const struct FBox& Box);
};

// 0x358 (0x380 - 0x28)
// Class Foliage.FoliageType
class UFoliageType : public UObject
{
public:
	struct FGuid                                 UpdateGuid;                                        // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Density;                                           // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DensityAdjustmentFactor;                           // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSingleInstanceModeOverrideRadius;                 // 0x44(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_651[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SingleInstanceModeRadius;                          // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFoliageScaling                   Scaling;                                           // 0x4C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_655[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFloatInterval                        ScaleX;                                            // 0x50(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatInterval                        ScaleY;                                            // 0x58(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatInterval                        ScaleZ;                                            // 0x60(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFoliageVertexColorChannelMask        VertexColorMaskByChannel[0x4];                     // 0x68(0x30)(Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	enum class EFoliageVertexColorMask           VertexColorMask;                                   // 0x98(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_65C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        VertexColorMaskThreshold;                          // 0x9C(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        VertexColorMaskInvert : 1;                         // Mask: 0x1, PropSize: 0x10xA0(0x1)(Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_2D : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_65F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFloatInterval                        ZOffset;                                           // 0xA4(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        AlignToNormal : 1;                                 // Mask: 0x1, PropSize: 0x10xAC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_2E : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_661[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AlignMaxAngle;                                     // 0xB0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        RandomYaw : 1;                                     // Mask: 0x1, PropSize: 0x10xB4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_2F : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_665[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RandomPitchAngle;                                  // 0xB8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatInterval                        GroundSlopeAngle;                                  // 0xBC(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatInterval                        Height;                                            // 0xC4(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_669[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          LandscapeLayers;                                   // 0xD0(0x10)(Edit, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumLayerWeight;                                // 0xE0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_66B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          ExclusionLandscapeLayers;                          // 0xE8(0x10)(Edit, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumExclusionLayerWeight;                       // 0xF8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  LandscapeLayer;                                    // 0xFC(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CollisionWithWorld : 1;                            // Mask: 0x1, PropSize: 0x10x104(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_33 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_670[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CollisionScale;                                    // 0x108(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoxSphereBounds                      MeshBounds;                                        // 0x114(0x1C)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               LowBoundOriginRadius;                              // 0x130(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EComponentMobility                Mobility;                                          // 0x13C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_676[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInt32Interval                        CullDistance;                                      // 0x140(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableStaticLighting : 1;                         // Mask: 0x1, PropSize: 0x10x148(0x1)(Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CastShadow : 1;                                    // Mask: 0x2, PropSize: 0x10x148(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectDynamicIndirectLighting : 1;                // Mask: 0x4, PropSize: 0x10x148(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectDistanceFieldLighting : 1;                  // Mask: 0x8, PropSize: 0x10x148(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCastDynamicShadow : 1;                            // Mask: 0x10, PropSize: 0x10x148(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCastStaticShadow : 1;                             // Mask: 0x20, PropSize: 0x10x148(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCastShadowAsTwoSided : 1;                         // Mask: 0x40, PropSize: 0x10x148(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bReceivesDecals : 1;                               // Mask: 0x80, PropSize: 0x10x148(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideLightMapRes : 1;                          // Mask: 0x1, PropSize: 0x10x149(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_34 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_681[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        OverriddenLightMapRes;                             // 0x14C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELightmapType                     LightmapType;                                      // 0x150(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_684[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bUseAsOccluder : 1;                                // Mask: 0x1, PropSize: 0x10x154(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_35 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_685[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBodyInstance                         BodyInstance;                                      // 0x158(0x130)(Edit, NativeAccessSpecifierPublic)
	enum class EHasCustomNavigableGeometry       CustomNavigableGeometry;                           // 0x288(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLightingChannels                     LightingChannels;                                  // 0x289(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                        Pad_687[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bRenderCustomDepth : 1;                            // Mask: 0x1, PropSize: 0x10x28C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_36 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_689[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CustomDepthStencilValue;                           // 0x290(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TranslucencySortPriority;                          // 0x294(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CollisionRadius;                                   // 0x298(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShadeRadius;                                       // 0x29C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumSteps;                                          // 0x2A0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InitialSeedDensity;                                // 0x2A4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AverageSpreadDistance;                             // 0x2A8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpreadVariance;                                    // 0x2AC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SeedsPerStep;                                      // 0x2B0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DistributionSeed;                                  // 0x2B4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxInitialSeedOffset;                              // 0x2B8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanGrowInShade;                                   // 0x2BC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSpawnsInShade;                                    // 0x2BD(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_699[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxInitialAge;                                     // 0x2C0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxAge;                                            // 0x2C4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OverlapPriority;                                   // 0x2C8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatInterval                        ProceduralScale;                                   // 0x2CC(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_69D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    ScaleCurve;                                        // 0x2D8(0x88)(Edit, NativeAccessSpecifierPublic)
	int32                                        ChangeCount;                                       // 0x360(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ReapplyDensity : 1;                                // Mask: 0x1, PropSize: 0x10x364(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ReapplyRadius : 1;                                 // Mask: 0x2, PropSize: 0x10x364(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ReapplyAlignToNormal : 1;                          // Mask: 0x4, PropSize: 0x10x364(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ReapplyRandomYaw : 1;                              // Mask: 0x8, PropSize: 0x10x364(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ReapplyScaling : 1;                                // Mask: 0x10, PropSize: 0x10x364(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ReapplyScaleX : 1;                                 // Mask: 0x20, PropSize: 0x10x364(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ReapplyScaleY : 1;                                 // Mask: 0x40, PropSize: 0x10x364(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ReapplyScaleZ : 1;                                 // Mask: 0x80, PropSize: 0x10x364(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ReapplyRandomPitchAngle : 1;                       // Mask: 0x1, PropSize: 0x10x365(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ReapplyGroundSlope : 1;                            // Mask: 0x2, PropSize: 0x10x365(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ReapplyHeight : 1;                                 // Mask: 0x4, PropSize: 0x10x365(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ReapplyLandscapeLayers : 1;                        // Mask: 0x8, PropSize: 0x10x365(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ReapplyZOffset : 1;                                // Mask: 0x10, PropSize: 0x10x365(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ReapplyCollisionWithWorld : 1;                     // Mask: 0x20, PropSize: 0x10x365(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ReapplyVertexColorMask : 1;                        // Mask: 0x40, PropSize: 0x10x365(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableDensityScaling : 1;                         // Mask: 0x80, PropSize: 0x10x365(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6AE[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class URuntimeVirtualTexture*>        RuntimeVirtualTextures;                            // 0x368(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        VirtualTextureCullMips;                            // 0x378(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType;                      // 0x37C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6B4[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFoliageType* GetDefaultObj();

};

// 0x10 (0x390 - 0x380)
// Class Foliage.FoliageType_Actor
class UFoliageType_Actor : public UFoliageType
{
public:
	TSubclassOf<class AActor>                    ActorClass;                                        // 0x380(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldAttachToBaseComponent;                      // 0x388(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6D9[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFoliageType_Actor* GetDefaultObj();

};

// 0x20 (0x3A0 - 0x380)
// Class Foliage.FoliageType_InstancedStaticMesh
class UFoliageType_InstancedStaticMesh : public UFoliageType
{
public:
	class UStaticMesh*                           Mesh;                                              // 0x380(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>            OverrideMaterials;                                 // 0x388(0x10)(Edit, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UFoliageInstancedStaticMeshComponent> ComponentClass;                                    // 0x398(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFoliageType_InstancedStaticMesh* GetDefaultObj();

};

// 0x50 (0x270 - 0x220)
// Class Foliage.InstancedFoliageActor
class AInstancedFoliageActor : public AActor
{
public:
	uint8                                        Pad_6EF[0x50];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AInstancedFoliageActor* GetDefaultObj();

};

// 0x60 (0x290 - 0x230)
// Class Foliage.InteractiveFoliageActor
class AInteractiveFoliageActor : public AStaticMeshActor
{
public:
	class UCapsuleComponent*                     CapsuleComponent;                                  // 0x230(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               TouchingActorEntryPosition;                        // 0x238(0xC)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               FoliageVelocity;                                   // 0x244(0xC)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               FoliageForce;                                      // 0x250(0xC)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               FoliagePosition;                                   // 0x25C(0xC)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        FoliageDamageImpulseScale;                         // 0x268(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FoliageTouchImpulseScale;                          // 0x26C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FoliageStiffness;                                  // 0x270(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FoliageStiffnessQuadratic;                         // 0x274(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FoliageDamping;                                    // 0x278(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxDamageImpulse;                                  // 0x27C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxTouchImpulse;                                   // 0x280(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxForce;                                          // 0x284(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Mass;                                              // 0x288(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_71B[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AInteractiveFoliageActor* GetDefaultObj();

	void CapsuleTouched(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& OverlapInfo);
};

// 0x8 (0x4A0 - 0x498)
// Class Foliage.InteractiveFoliageComponent
class UInteractiveFoliageComponent : public UStaticMeshComponent
{
public:
	uint8                                        Pad_731[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInteractiveFoliageComponent* GetDefaultObj();

};

// 0x8 (0x260 - 0x258)
// Class Foliage.ProceduralFoliageBlockingVolume
class AProceduralFoliageBlockingVolume : public AVolume
{
public:
	class AProceduralFoliageVolume*              ProceduralFoliageVolume;                           // 0x258(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AProceduralFoliageBlockingVolume* GetDefaultObj();

};

// 0x28 (0xD8 - 0xB0)
// Class Foliage.ProceduralFoliageComponent
class UProceduralFoliageComponent : public UActorComponent
{
public:
	class UProceduralFoliageSpawner*             FoliageSpawner;                                    // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TileOverlap;                                       // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_761[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AVolume*                               SpawningVolume;                                    // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGuid                                 ProceduralGuid;                                    // 0xC8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UProceduralFoliageComponent* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class Foliage.ProceduralFoliageSpawner
class UProceduralFoliageSpawner : public UObject
{
public:
	int32                                        RandomSeed;                                        // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TileSize;                                          // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumUniqueTiles;                                    // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumQuadTreeSize;                               // 0x34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_787[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFoliageTypeObject>            FoliageTypes;                                      // 0x40(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_78A[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UProceduralFoliageSpawner* GetDefaultObj();

	void Simulate(int32 NumSteps);
};

// 0x130 (0x158 - 0x28)
// Class Foliage.ProceduralFoliageTile
class UProceduralFoliageTile : public UObject
{
public:
	class UProceduralFoliageSpawner*             FoliageSpawner;                                    // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_79F[0xA0];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FProceduralFoliageInstance>    InstancesArray;                                    // 0xD0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7A3[0x78];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UProceduralFoliageTile* GetDefaultObj();

};

// 0x8 (0x260 - 0x258)
// Class Foliage.ProceduralFoliageVolume
class AProceduralFoliageVolume : public AVolume
{
public:
	class UProceduralFoliageComponent*           ProceduralComponent;                               // 0x258(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AProceduralFoliageVolume* GetDefaultObj();

};

}


